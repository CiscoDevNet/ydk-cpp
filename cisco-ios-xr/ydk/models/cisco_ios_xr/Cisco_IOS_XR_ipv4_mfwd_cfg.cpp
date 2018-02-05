
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_mfwd_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_mfwd_cfg {

Mfwd::Mfwd()
    :
    default_context(nullptr) // presence node
	,vrfs(std::make_shared<Mfwd::Vrfs>())
{
    vrfs->parent = this;

    yang_name = "mfwd"; yang_parent_name = "Cisco-IOS-XR-ipv4-mfwd-cfg"; is_top_level_class = true; has_list_ancestor = false;
}

Mfwd::~Mfwd()
{
}

bool Mfwd::has_data() const
{
    return (default_context !=  nullptr && default_context->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Mfwd::has_operation() const
{
    return is_set(yfilter)
	|| (default_context !=  nullptr && default_context->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Mfwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-context")
    {
        if(default_context == nullptr)
        {
            default_context = std::make_shared<Mfwd::DefaultContext>();
        }
        return default_context;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Mfwd::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(default_context != nullptr)
    {
        children["default-context"] = default_context;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Mfwd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mfwd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Mfwd::clone_ptr() const
{
    return std::make_shared<Mfwd>();
}

std::string Mfwd::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Mfwd::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Mfwd::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Mfwd::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Mfwd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-context" || name == "vrfs")
        return true;
    return false;
}

Mfwd::DefaultContext::DefaultContext()
    :
    ipv6(std::make_shared<Mfwd::DefaultContext::Ipv6>())
	,ipv4(std::make_shared<Mfwd::DefaultContext::Ipv4>())
{
    ipv6->parent = this;
    ipv4->parent = this;

    yang_name = "default-context"; yang_parent_name = "mfwd"; is_top_level_class = false; has_list_ancestor = false;
}

Mfwd::DefaultContext::~DefaultContext()
{
}

bool Mfwd::DefaultContext::has_data() const
{
    return (ipv6 !=  nullptr && ipv6->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Mfwd::DefaultContext::has_operation() const
{
    return is_set(yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Mfwd::DefaultContext::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/" << get_segment_path();
    return path_buffer.str();
}

std::string Mfwd::DefaultContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::DefaultContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::DefaultContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Mfwd::DefaultContext::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Mfwd::DefaultContext::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::DefaultContext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Mfwd::DefaultContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mfwd::DefaultContext::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mfwd::DefaultContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "ipv4")
        return true;
    return false;
}

Mfwd::DefaultContext::Ipv6::Ipv6()
    :
    enable_on_all_interfaces{YType::empty, "enable-on-all-interfaces"},
    maximum_checking_disable{YType::empty, "maximum-checking-disable"},
    rate_per_route{YType::empty, "rate-per-route"},
    interface_inheritance_disable{YType::empty, "interface-inheritance-disable"},
    mofrr_lockout_timer_config{YType::uint32, "mofrr-lockout-timer-config"},
    forwarding_latency{YType::uint32, "forwarding-latency"},
    mofrr_loss_detection_timer_config{YType::uint32, "mofrr-loss-detection-timer-config"},
    multicast_forwarding{YType::empty, "multicast-forwarding"},
    log_traps{YType::empty, "log-traps"},
    accounting{YType::enumeration, "accounting"}
    	,
    static_rpf_rules(std::make_shared<Mfwd::DefaultContext::Ipv6::StaticRpfRules>())
	,interfaces(std::make_shared<Mfwd::DefaultContext::Ipv6::Interfaces>())
{
    static_rpf_rules->parent = this;
    interfaces->parent = this;

    yang_name = "ipv6"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Mfwd::DefaultContext::Ipv6::~Ipv6()
{
}

bool Mfwd::DefaultContext::Ipv6::has_data() const
{
    return enable_on_all_interfaces.is_set
	|| maximum_checking_disable.is_set
	|| rate_per_route.is_set
	|| interface_inheritance_disable.is_set
	|| mofrr_lockout_timer_config.is_set
	|| forwarding_latency.is_set
	|| mofrr_loss_detection_timer_config.is_set
	|| multicast_forwarding.is_set
	|| log_traps.is_set
	|| accounting.is_set
	|| (static_rpf_rules !=  nullptr && static_rpf_rules->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Mfwd::DefaultContext::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_on_all_interfaces.yfilter)
	|| ydk::is_set(maximum_checking_disable.yfilter)
	|| ydk::is_set(rate_per_route.yfilter)
	|| ydk::is_set(interface_inheritance_disable.yfilter)
	|| ydk::is_set(mofrr_lockout_timer_config.yfilter)
	|| ydk::is_set(forwarding_latency.yfilter)
	|| ydk::is_set(mofrr_loss_detection_timer_config.yfilter)
	|| ydk::is_set(multicast_forwarding.yfilter)
	|| ydk::is_set(log_traps.yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| (static_rpf_rules !=  nullptr && static_rpf_rules->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Mfwd::DefaultContext::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mfwd::DefaultContext::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::DefaultContext::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_on_all_interfaces.is_set || is_set(enable_on_all_interfaces.yfilter)) leaf_name_data.push_back(enable_on_all_interfaces.get_name_leafdata());
    if (maximum_checking_disable.is_set || is_set(maximum_checking_disable.yfilter)) leaf_name_data.push_back(maximum_checking_disable.get_name_leafdata());
    if (rate_per_route.is_set || is_set(rate_per_route.yfilter)) leaf_name_data.push_back(rate_per_route.get_name_leafdata());
    if (interface_inheritance_disable.is_set || is_set(interface_inheritance_disable.yfilter)) leaf_name_data.push_back(interface_inheritance_disable.get_name_leafdata());
    if (mofrr_lockout_timer_config.is_set || is_set(mofrr_lockout_timer_config.yfilter)) leaf_name_data.push_back(mofrr_lockout_timer_config.get_name_leafdata());
    if (forwarding_latency.is_set || is_set(forwarding_latency.yfilter)) leaf_name_data.push_back(forwarding_latency.get_name_leafdata());
    if (mofrr_loss_detection_timer_config.is_set || is_set(mofrr_loss_detection_timer_config.yfilter)) leaf_name_data.push_back(mofrr_loss_detection_timer_config.get_name_leafdata());
    if (multicast_forwarding.is_set || is_set(multicast_forwarding.yfilter)) leaf_name_data.push_back(multicast_forwarding.get_name_leafdata());
    if (log_traps.is_set || is_set(log_traps.yfilter)) leaf_name_data.push_back(log_traps.get_name_leafdata());
    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::DefaultContext::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-rpf-rules")
    {
        if(static_rpf_rules == nullptr)
        {
            static_rpf_rules = std::make_shared<Mfwd::DefaultContext::Ipv6::StaticRpfRules>();
        }
        return static_rpf_rules;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Mfwd::DefaultContext::Ipv6::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::DefaultContext::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(static_rpf_rules != nullptr)
    {
        children["static-rpf-rules"] = static_rpf_rules;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Mfwd::DefaultContext::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-on-all-interfaces")
    {
        enable_on_all_interfaces = value;
        enable_on_all_interfaces.value_namespace = name_space;
        enable_on_all_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-checking-disable")
    {
        maximum_checking_disable = value;
        maximum_checking_disable.value_namespace = name_space;
        maximum_checking_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-per-route")
    {
        rate_per_route = value;
        rate_per_route.value_namespace = name_space;
        rate_per_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-inheritance-disable")
    {
        interface_inheritance_disable = value;
        interface_inheritance_disable.value_namespace = name_space;
        interface_inheritance_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mofrr-lockout-timer-config")
    {
        mofrr_lockout_timer_config = value;
        mofrr_lockout_timer_config.value_namespace = name_space;
        mofrr_lockout_timer_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-latency")
    {
        forwarding_latency = value;
        forwarding_latency.value_namespace = name_space;
        forwarding_latency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mofrr-loss-detection-timer-config")
    {
        mofrr_loss_detection_timer_config = value;
        mofrr_loss_detection_timer_config.value_namespace = name_space;
        mofrr_loss_detection_timer_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-forwarding")
    {
        multicast_forwarding = value;
        multicast_forwarding.value_namespace = name_space;
        multicast_forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-traps")
    {
        log_traps = value;
        log_traps.value_namespace = name_space;
        log_traps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
}

void Mfwd::DefaultContext::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-on-all-interfaces")
    {
        enable_on_all_interfaces.yfilter = yfilter;
    }
    if(value_path == "maximum-checking-disable")
    {
        maximum_checking_disable.yfilter = yfilter;
    }
    if(value_path == "rate-per-route")
    {
        rate_per_route.yfilter = yfilter;
    }
    if(value_path == "interface-inheritance-disable")
    {
        interface_inheritance_disable.yfilter = yfilter;
    }
    if(value_path == "mofrr-lockout-timer-config")
    {
        mofrr_lockout_timer_config.yfilter = yfilter;
    }
    if(value_path == "forwarding-latency")
    {
        forwarding_latency.yfilter = yfilter;
    }
    if(value_path == "mofrr-loss-detection-timer-config")
    {
        mofrr_loss_detection_timer_config.yfilter = yfilter;
    }
    if(value_path == "multicast-forwarding")
    {
        multicast_forwarding.yfilter = yfilter;
    }
    if(value_path == "log-traps")
    {
        log_traps.yfilter = yfilter;
    }
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
}

bool Mfwd::DefaultContext::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-rpf-rules" || name == "interfaces" || name == "enable-on-all-interfaces" || name == "maximum-checking-disable" || name == "rate-per-route" || name == "interface-inheritance-disable" || name == "mofrr-lockout-timer-config" || name == "forwarding-latency" || name == "mofrr-loss-detection-timer-config" || name == "multicast-forwarding" || name == "log-traps" || name == "accounting")
        return true;
    return false;
}

Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRules()
{

    yang_name = "static-rpf-rules"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Mfwd::DefaultContext::Ipv6::StaticRpfRules::~StaticRpfRules()
{
}

bool Mfwd::DefaultContext::Ipv6::StaticRpfRules::has_data() const
{
    for (std::size_t index=0; index<static_rpf_rule.size(); index++)
    {
        if(static_rpf_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Mfwd::DefaultContext::Ipv6::StaticRpfRules::has_operation() const
{
    for (std::size_t index=0; index<static_rpf_rule.size(); index++)
    {
        if(static_rpf_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mfwd::DefaultContext::Ipv6::StaticRpfRules::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/default-context/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Mfwd::DefaultContext::Ipv6::StaticRpfRules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-rpf-rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::DefaultContext::Ipv6::StaticRpfRules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::DefaultContext::Ipv6::StaticRpfRules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-rpf-rule")
    {
        auto c = std::make_shared<Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule>();
        c->parent = this;
        static_rpf_rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::DefaultContext::Ipv6::StaticRpfRules::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : static_rpf_rule)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Mfwd::DefaultContext::Ipv6::StaticRpfRules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mfwd::DefaultContext::Ipv6::StaticRpfRules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mfwd::DefaultContext::Ipv6::StaticRpfRules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-rpf-rule")
        return true;
    return false;
}

Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule::StaticRpfRule()
    :
    address{YType::str, "address"},
    prefix_mask{YType::uint32, "prefix-mask"},
    neighbor_address{YType::str, "neighbor-address"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "static-rpf-rule"; yang_parent_name = "static-rpf-rules"; is_top_level_class = false; has_list_ancestor = false;
}

Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule::~StaticRpfRule()
{
}

bool Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule::has_data() const
{
    return address.is_set
	|| prefix_mask.is_set
	|| neighbor_address.is_set
	|| interface_name.is_set;
}

bool Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_mask.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/default-context/ipv6/static-rpf-rules/" << get_segment_path();
    return path_buffer.str();
}

std::string Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-rpf-rule" <<"[address='" <<address <<"']" <<"[prefix-mask='" <<prefix_mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_mask.is_set || is_set(prefix_mask.yfilter)) leaf_name_data.push_back(prefix_mask.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-mask")
    {
        prefix_mask = value;
        prefix_mask.value_namespace = name_space;
        prefix_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-mask")
    {
        prefix_mask.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-mask" || name == "neighbor-address" || name == "interface-name")
        return true;
    return false;
}

Mfwd::DefaultContext::Ipv6::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Mfwd::DefaultContext::Ipv6::Interfaces::~Interfaces()
{
}

bool Mfwd::DefaultContext::Ipv6::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mfwd::DefaultContext::Ipv6::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mfwd::DefaultContext::Ipv6::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/default-context/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Mfwd::DefaultContext::Ipv6::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::DefaultContext::Ipv6::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::DefaultContext::Ipv6::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Mfwd::DefaultContext::Ipv6::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::DefaultContext::Ipv6::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Mfwd::DefaultContext::Ipv6::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mfwd::DefaultContext::Ipv6::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mfwd::DefaultContext::Ipv6::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Mfwd::DefaultContext::Ipv6::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    ttl_threshold{YType::uint32, "ttl-threshold"},
    enable_on_interface{YType::boolean, "enable-on-interface"},
    boundary{YType::str, "boundary"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Mfwd::DefaultContext::Ipv6::Interfaces::Interface::~Interface()
{
}

bool Mfwd::DefaultContext::Ipv6::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| ttl_threshold.is_set
	|| enable_on_interface.is_set
	|| boundary.is_set;
}

bool Mfwd::DefaultContext::Ipv6::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(ttl_threshold.yfilter)
	|| ydk::is_set(enable_on_interface.yfilter)
	|| ydk::is_set(boundary.yfilter);
}

std::string Mfwd::DefaultContext::Ipv6::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/default-context/ipv6/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Mfwd::DefaultContext::Ipv6::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::DefaultContext::Ipv6::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ttl_threshold.is_set || is_set(ttl_threshold.yfilter)) leaf_name_data.push_back(ttl_threshold.get_name_leafdata());
    if (enable_on_interface.is_set || is_set(enable_on_interface.yfilter)) leaf_name_data.push_back(enable_on_interface.get_name_leafdata());
    if (boundary.is_set || is_set(boundary.yfilter)) leaf_name_data.push_back(boundary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::DefaultContext::Ipv6::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::DefaultContext::Ipv6::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Mfwd::DefaultContext::Ipv6::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-threshold")
    {
        ttl_threshold = value;
        ttl_threshold.value_namespace = name_space;
        ttl_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-on-interface")
    {
        enable_on_interface = value;
        enable_on_interface.value_namespace = name_space;
        enable_on_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boundary")
    {
        boundary = value;
        boundary.value_namespace = name_space;
        boundary.value_namespace_prefix = name_space_prefix;
    }
}

void Mfwd::DefaultContext::Ipv6::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "ttl-threshold")
    {
        ttl_threshold.yfilter = yfilter;
    }
    if(value_path == "enable-on-interface")
    {
        enable_on_interface.yfilter = yfilter;
    }
    if(value_path == "boundary")
    {
        boundary.yfilter = yfilter;
    }
}

bool Mfwd::DefaultContext::Ipv6::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "ttl-threshold" || name == "enable-on-interface" || name == "boundary")
        return true;
    return false;
}

Mfwd::DefaultContext::Ipv4::Ipv4()
    :
    out_of_memory_handling{YType::empty, "out-of-memory-handling"},
    enable_on_all_interfaces{YType::empty, "enable-on-all-interfaces"},
    maximum_checking_disable{YType::empty, "maximum-checking-disable"},
    rate_per_route{YType::empty, "rate-per-route"},
    interface_inheritance_disable{YType::empty, "interface-inheritance-disable"},
    mofrr_lockout_timer_config{YType::uint32, "mofrr-lockout-timer-config"},
    forwarding_latency{YType::uint32, "forwarding-latency"},
    mofrr_loss_detection_timer_config{YType::uint32, "mofrr-loss-detection-timer-config"},
    multicast_forwarding{YType::empty, "multicast-forwarding"},
    log_traps{YType::empty, "log-traps"},
    accounting{YType::enumeration, "accounting"}
    	,
    static_rpf_rules(std::make_shared<Mfwd::DefaultContext::Ipv4::StaticRpfRules>())
	,interfaces(std::make_shared<Mfwd::DefaultContext::Ipv4::Interfaces>())
{
    static_rpf_rules->parent = this;
    interfaces->parent = this;

    yang_name = "ipv4"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Mfwd::DefaultContext::Ipv4::~Ipv4()
{
}

bool Mfwd::DefaultContext::Ipv4::has_data() const
{
    return out_of_memory_handling.is_set
	|| enable_on_all_interfaces.is_set
	|| maximum_checking_disable.is_set
	|| rate_per_route.is_set
	|| interface_inheritance_disable.is_set
	|| mofrr_lockout_timer_config.is_set
	|| forwarding_latency.is_set
	|| mofrr_loss_detection_timer_config.is_set
	|| multicast_forwarding.is_set
	|| log_traps.is_set
	|| accounting.is_set
	|| (static_rpf_rules !=  nullptr && static_rpf_rules->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Mfwd::DefaultContext::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_of_memory_handling.yfilter)
	|| ydk::is_set(enable_on_all_interfaces.yfilter)
	|| ydk::is_set(maximum_checking_disable.yfilter)
	|| ydk::is_set(rate_per_route.yfilter)
	|| ydk::is_set(interface_inheritance_disable.yfilter)
	|| ydk::is_set(mofrr_lockout_timer_config.yfilter)
	|| ydk::is_set(forwarding_latency.yfilter)
	|| ydk::is_set(mofrr_loss_detection_timer_config.yfilter)
	|| ydk::is_set(multicast_forwarding.yfilter)
	|| ydk::is_set(log_traps.yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| (static_rpf_rules !=  nullptr && static_rpf_rules->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Mfwd::DefaultContext::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mfwd::DefaultContext::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::DefaultContext::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_of_memory_handling.is_set || is_set(out_of_memory_handling.yfilter)) leaf_name_data.push_back(out_of_memory_handling.get_name_leafdata());
    if (enable_on_all_interfaces.is_set || is_set(enable_on_all_interfaces.yfilter)) leaf_name_data.push_back(enable_on_all_interfaces.get_name_leafdata());
    if (maximum_checking_disable.is_set || is_set(maximum_checking_disable.yfilter)) leaf_name_data.push_back(maximum_checking_disable.get_name_leafdata());
    if (rate_per_route.is_set || is_set(rate_per_route.yfilter)) leaf_name_data.push_back(rate_per_route.get_name_leafdata());
    if (interface_inheritance_disable.is_set || is_set(interface_inheritance_disable.yfilter)) leaf_name_data.push_back(interface_inheritance_disable.get_name_leafdata());
    if (mofrr_lockout_timer_config.is_set || is_set(mofrr_lockout_timer_config.yfilter)) leaf_name_data.push_back(mofrr_lockout_timer_config.get_name_leafdata());
    if (forwarding_latency.is_set || is_set(forwarding_latency.yfilter)) leaf_name_data.push_back(forwarding_latency.get_name_leafdata());
    if (mofrr_loss_detection_timer_config.is_set || is_set(mofrr_loss_detection_timer_config.yfilter)) leaf_name_data.push_back(mofrr_loss_detection_timer_config.get_name_leafdata());
    if (multicast_forwarding.is_set || is_set(multicast_forwarding.yfilter)) leaf_name_data.push_back(multicast_forwarding.get_name_leafdata());
    if (log_traps.is_set || is_set(log_traps.yfilter)) leaf_name_data.push_back(log_traps.get_name_leafdata());
    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::DefaultContext::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-rpf-rules")
    {
        if(static_rpf_rules == nullptr)
        {
            static_rpf_rules = std::make_shared<Mfwd::DefaultContext::Ipv4::StaticRpfRules>();
        }
        return static_rpf_rules;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Mfwd::DefaultContext::Ipv4::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::DefaultContext::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(static_rpf_rules != nullptr)
    {
        children["static-rpf-rules"] = static_rpf_rules;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Mfwd::DefaultContext::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-of-memory-handling")
    {
        out_of_memory_handling = value;
        out_of_memory_handling.value_namespace = name_space;
        out_of_memory_handling.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-on-all-interfaces")
    {
        enable_on_all_interfaces = value;
        enable_on_all_interfaces.value_namespace = name_space;
        enable_on_all_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-checking-disable")
    {
        maximum_checking_disable = value;
        maximum_checking_disable.value_namespace = name_space;
        maximum_checking_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-per-route")
    {
        rate_per_route = value;
        rate_per_route.value_namespace = name_space;
        rate_per_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-inheritance-disable")
    {
        interface_inheritance_disable = value;
        interface_inheritance_disable.value_namespace = name_space;
        interface_inheritance_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mofrr-lockout-timer-config")
    {
        mofrr_lockout_timer_config = value;
        mofrr_lockout_timer_config.value_namespace = name_space;
        mofrr_lockout_timer_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-latency")
    {
        forwarding_latency = value;
        forwarding_latency.value_namespace = name_space;
        forwarding_latency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mofrr-loss-detection-timer-config")
    {
        mofrr_loss_detection_timer_config = value;
        mofrr_loss_detection_timer_config.value_namespace = name_space;
        mofrr_loss_detection_timer_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-forwarding")
    {
        multicast_forwarding = value;
        multicast_forwarding.value_namespace = name_space;
        multicast_forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-traps")
    {
        log_traps = value;
        log_traps.value_namespace = name_space;
        log_traps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
}

void Mfwd::DefaultContext::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-of-memory-handling")
    {
        out_of_memory_handling.yfilter = yfilter;
    }
    if(value_path == "enable-on-all-interfaces")
    {
        enable_on_all_interfaces.yfilter = yfilter;
    }
    if(value_path == "maximum-checking-disable")
    {
        maximum_checking_disable.yfilter = yfilter;
    }
    if(value_path == "rate-per-route")
    {
        rate_per_route.yfilter = yfilter;
    }
    if(value_path == "interface-inheritance-disable")
    {
        interface_inheritance_disable.yfilter = yfilter;
    }
    if(value_path == "mofrr-lockout-timer-config")
    {
        mofrr_lockout_timer_config.yfilter = yfilter;
    }
    if(value_path == "forwarding-latency")
    {
        forwarding_latency.yfilter = yfilter;
    }
    if(value_path == "mofrr-loss-detection-timer-config")
    {
        mofrr_loss_detection_timer_config.yfilter = yfilter;
    }
    if(value_path == "multicast-forwarding")
    {
        multicast_forwarding.yfilter = yfilter;
    }
    if(value_path == "log-traps")
    {
        log_traps.yfilter = yfilter;
    }
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
}

bool Mfwd::DefaultContext::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-rpf-rules" || name == "interfaces" || name == "out-of-memory-handling" || name == "enable-on-all-interfaces" || name == "maximum-checking-disable" || name == "rate-per-route" || name == "interface-inheritance-disable" || name == "mofrr-lockout-timer-config" || name == "forwarding-latency" || name == "mofrr-loss-detection-timer-config" || name == "multicast-forwarding" || name == "log-traps" || name == "accounting")
        return true;
    return false;
}

Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRules()
{

    yang_name = "static-rpf-rules"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Mfwd::DefaultContext::Ipv4::StaticRpfRules::~StaticRpfRules()
{
}

bool Mfwd::DefaultContext::Ipv4::StaticRpfRules::has_data() const
{
    for (std::size_t index=0; index<static_rpf_rule.size(); index++)
    {
        if(static_rpf_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Mfwd::DefaultContext::Ipv4::StaticRpfRules::has_operation() const
{
    for (std::size_t index=0; index<static_rpf_rule.size(); index++)
    {
        if(static_rpf_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mfwd::DefaultContext::Ipv4::StaticRpfRules::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/default-context/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Mfwd::DefaultContext::Ipv4::StaticRpfRules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-rpf-rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::DefaultContext::Ipv4::StaticRpfRules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::DefaultContext::Ipv4::StaticRpfRules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-rpf-rule")
    {
        auto c = std::make_shared<Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule>();
        c->parent = this;
        static_rpf_rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::DefaultContext::Ipv4::StaticRpfRules::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : static_rpf_rule)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Mfwd::DefaultContext::Ipv4::StaticRpfRules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mfwd::DefaultContext::Ipv4::StaticRpfRules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mfwd::DefaultContext::Ipv4::StaticRpfRules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-rpf-rule")
        return true;
    return false;
}

Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule::StaticRpfRule()
    :
    address{YType::str, "address"},
    prefix_mask{YType::uint32, "prefix-mask"},
    neighbor_address{YType::str, "neighbor-address"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "static-rpf-rule"; yang_parent_name = "static-rpf-rules"; is_top_level_class = false; has_list_ancestor = false;
}

Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule::~StaticRpfRule()
{
}

bool Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule::has_data() const
{
    return address.is_set
	|| prefix_mask.is_set
	|| neighbor_address.is_set
	|| interface_name.is_set;
}

bool Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_mask.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/default-context/ipv4/static-rpf-rules/" << get_segment_path();
    return path_buffer.str();
}

std::string Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-rpf-rule" <<"[address='" <<address <<"']" <<"[prefix-mask='" <<prefix_mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_mask.is_set || is_set(prefix_mask.yfilter)) leaf_name_data.push_back(prefix_mask.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-mask")
    {
        prefix_mask = value;
        prefix_mask.value_namespace = name_space;
        prefix_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-mask")
    {
        prefix_mask.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-mask" || name == "neighbor-address" || name == "interface-name")
        return true;
    return false;
}

Mfwd::DefaultContext::Ipv4::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
}

Mfwd::DefaultContext::Ipv4::Interfaces::~Interfaces()
{
}

bool Mfwd::DefaultContext::Ipv4::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mfwd::DefaultContext::Ipv4::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mfwd::DefaultContext::Ipv4::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/default-context/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Mfwd::DefaultContext::Ipv4::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::DefaultContext::Ipv4::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::DefaultContext::Ipv4::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Mfwd::DefaultContext::Ipv4::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::DefaultContext::Ipv4::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Mfwd::DefaultContext::Ipv4::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mfwd::DefaultContext::Ipv4::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mfwd::DefaultContext::Ipv4::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Mfwd::DefaultContext::Ipv4::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    ttl_threshold{YType::uint32, "ttl-threshold"},
    enable_on_interface{YType::boolean, "enable-on-interface"},
    boundary{YType::str, "boundary"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false;
}

Mfwd::DefaultContext::Ipv4::Interfaces::Interface::~Interface()
{
}

bool Mfwd::DefaultContext::Ipv4::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| ttl_threshold.is_set
	|| enable_on_interface.is_set
	|| boundary.is_set;
}

bool Mfwd::DefaultContext::Ipv4::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(ttl_threshold.yfilter)
	|| ydk::is_set(enable_on_interface.yfilter)
	|| ydk::is_set(boundary.yfilter);
}

std::string Mfwd::DefaultContext::Ipv4::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/default-context/ipv4/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Mfwd::DefaultContext::Ipv4::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::DefaultContext::Ipv4::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ttl_threshold.is_set || is_set(ttl_threshold.yfilter)) leaf_name_data.push_back(ttl_threshold.get_name_leafdata());
    if (enable_on_interface.is_set || is_set(enable_on_interface.yfilter)) leaf_name_data.push_back(enable_on_interface.get_name_leafdata());
    if (boundary.is_set || is_set(boundary.yfilter)) leaf_name_data.push_back(boundary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::DefaultContext::Ipv4::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::DefaultContext::Ipv4::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Mfwd::DefaultContext::Ipv4::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-threshold")
    {
        ttl_threshold = value;
        ttl_threshold.value_namespace = name_space;
        ttl_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-on-interface")
    {
        enable_on_interface = value;
        enable_on_interface.value_namespace = name_space;
        enable_on_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boundary")
    {
        boundary = value;
        boundary.value_namespace = name_space;
        boundary.value_namespace_prefix = name_space_prefix;
    }
}

void Mfwd::DefaultContext::Ipv4::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "ttl-threshold")
    {
        ttl_threshold.yfilter = yfilter;
    }
    if(value_path == "enable-on-interface")
    {
        enable_on_interface.yfilter = yfilter;
    }
    if(value_path == "boundary")
    {
        boundary.yfilter = yfilter;
    }
}

bool Mfwd::DefaultContext::Ipv4::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "ttl-threshold" || name == "enable-on-interface" || name == "boundary")
        return true;
    return false;
}

Mfwd::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "mfwd"; is_top_level_class = false; has_list_ancestor = false;
}

Mfwd::Vrfs::~Vrfs()
{
}

bool Mfwd::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Mfwd::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mfwd::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/" << get_segment_path();
    return path_buffer.str();
}

std::string Mfwd::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Mfwd::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Mfwd::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mfwd::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mfwd::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Mfwd::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    ipv6(std::make_shared<Mfwd::Vrfs::Vrf::Ipv6>())
	,ipv4(std::make_shared<Mfwd::Vrfs::Vrf::Ipv4>())
{
    ipv6->parent = this;
    ipv4->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false;
}

Mfwd::Vrfs::Vrf::~Vrf()
{
}

bool Mfwd::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data());
}

bool Mfwd::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation());
}

std::string Mfwd::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Mfwd::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Mfwd::Vrfs::Vrf::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Mfwd::Vrfs::Vrf::Ipv4>();
        }
        return ipv4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    return children;
}

void Mfwd::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Mfwd::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Mfwd::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "ipv4" || name == "vrf-name")
        return true;
    return false;
}

Mfwd::Vrfs::Vrf::Ipv6::Ipv6()
    :
    enable_on_all_interfaces{YType::empty, "enable-on-all-interfaces"},
    rate_per_route{YType::empty, "rate-per-route"},
    multicast_forwarding{YType::empty, "multicast-forwarding"},
    log_traps{YType::empty, "log-traps"},
    accounting{YType::enumeration, "accounting"}
    	,
    static_rpf_rules(std::make_shared<Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules>())
	,interfaces(std::make_shared<Mfwd::Vrfs::Vrf::Ipv6::Interfaces>())
{
    static_rpf_rules->parent = this;
    interfaces->parent = this;

    yang_name = "ipv6"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Mfwd::Vrfs::Vrf::Ipv6::~Ipv6()
{
}

bool Mfwd::Vrfs::Vrf::Ipv6::has_data() const
{
    return enable_on_all_interfaces.is_set
	|| rate_per_route.is_set
	|| multicast_forwarding.is_set
	|| log_traps.is_set
	|| accounting.is_set
	|| (static_rpf_rules !=  nullptr && static_rpf_rules->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Mfwd::Vrfs::Vrf::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_on_all_interfaces.yfilter)
	|| ydk::is_set(rate_per_route.yfilter)
	|| ydk::is_set(multicast_forwarding.yfilter)
	|| ydk::is_set(log_traps.yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| (static_rpf_rules !=  nullptr && static_rpf_rules->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Mfwd::Vrfs::Vrf::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::Vrfs::Vrf::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_on_all_interfaces.is_set || is_set(enable_on_all_interfaces.yfilter)) leaf_name_data.push_back(enable_on_all_interfaces.get_name_leafdata());
    if (rate_per_route.is_set || is_set(rate_per_route.yfilter)) leaf_name_data.push_back(rate_per_route.get_name_leafdata());
    if (multicast_forwarding.is_set || is_set(multicast_forwarding.yfilter)) leaf_name_data.push_back(multicast_forwarding.get_name_leafdata());
    if (log_traps.is_set || is_set(log_traps.yfilter)) leaf_name_data.push_back(log_traps.get_name_leafdata());
    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::Vrfs::Vrf::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-rpf-rules")
    {
        if(static_rpf_rules == nullptr)
        {
            static_rpf_rules = std::make_shared<Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules>();
        }
        return static_rpf_rules;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Mfwd::Vrfs::Vrf::Ipv6::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::Vrfs::Vrf::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(static_rpf_rules != nullptr)
    {
        children["static-rpf-rules"] = static_rpf_rules;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Mfwd::Vrfs::Vrf::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-on-all-interfaces")
    {
        enable_on_all_interfaces = value;
        enable_on_all_interfaces.value_namespace = name_space;
        enable_on_all_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-per-route")
    {
        rate_per_route = value;
        rate_per_route.value_namespace = name_space;
        rate_per_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-forwarding")
    {
        multicast_forwarding = value;
        multicast_forwarding.value_namespace = name_space;
        multicast_forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-traps")
    {
        log_traps = value;
        log_traps.value_namespace = name_space;
        log_traps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
}

void Mfwd::Vrfs::Vrf::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-on-all-interfaces")
    {
        enable_on_all_interfaces.yfilter = yfilter;
    }
    if(value_path == "rate-per-route")
    {
        rate_per_route.yfilter = yfilter;
    }
    if(value_path == "multicast-forwarding")
    {
        multicast_forwarding.yfilter = yfilter;
    }
    if(value_path == "log-traps")
    {
        log_traps.yfilter = yfilter;
    }
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
}

bool Mfwd::Vrfs::Vrf::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-rpf-rules" || name == "interfaces" || name == "enable-on-all-interfaces" || name == "rate-per-route" || name == "multicast-forwarding" || name == "log-traps" || name == "accounting")
        return true;
    return false;
}

Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRules()
{

    yang_name = "static-rpf-rules"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::~StaticRpfRules()
{
}

bool Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::has_data() const
{
    for (std::size_t index=0; index<static_rpf_rule.size(); index++)
    {
        if(static_rpf_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::has_operation() const
{
    for (std::size_t index=0; index<static_rpf_rule.size(); index++)
    {
        if(static_rpf_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-rpf-rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-rpf-rule")
    {
        auto c = std::make_shared<Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule>();
        c->parent = this;
        static_rpf_rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : static_rpf_rule)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-rpf-rule")
        return true;
    return false;
}

Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule::StaticRpfRule()
    :
    address{YType::str, "address"},
    prefix_mask{YType::uint32, "prefix-mask"},
    neighbor_address{YType::str, "neighbor-address"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "static-rpf-rule"; yang_parent_name = "static-rpf-rules"; is_top_level_class = false; has_list_ancestor = true;
}

Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule::~StaticRpfRule()
{
}

bool Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule::has_data() const
{
    return address.is_set
	|| prefix_mask.is_set
	|| neighbor_address.is_set
	|| interface_name.is_set;
}

bool Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_mask.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-rpf-rule" <<"[address='" <<address <<"']" <<"[prefix-mask='" <<prefix_mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_mask.is_set || is_set(prefix_mask.yfilter)) leaf_name_data.push_back(prefix_mask.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-mask")
    {
        prefix_mask = value;
        prefix_mask.value_namespace = name_space;
        prefix_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-mask")
    {
        prefix_mask.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-mask" || name == "neighbor-address" || name == "interface-name")
        return true;
    return false;
}

Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Mfwd::Vrfs::Vrf::Ipv6::Interfaces::~Interfaces()
{
}

bool Mfwd::Vrfs::Vrf::Ipv6::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mfwd::Vrfs::Vrf::Ipv6::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mfwd::Vrfs::Vrf::Ipv6::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::Vrfs::Vrf::Ipv6::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::Vrfs::Vrf::Ipv6::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::Vrfs::Vrf::Ipv6::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Mfwd::Vrfs::Vrf::Ipv6::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mfwd::Vrfs::Vrf::Ipv6::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mfwd::Vrfs::Vrf::Ipv6::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    ttl_threshold{YType::uint32, "ttl-threshold"},
    enable_on_interface{YType::boolean, "enable-on-interface"},
    boundary{YType::str, "boundary"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface::~Interface()
{
}

bool Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| ttl_threshold.is_set
	|| enable_on_interface.is_set
	|| boundary.is_set;
}

bool Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(ttl_threshold.yfilter)
	|| ydk::is_set(enable_on_interface.yfilter)
	|| ydk::is_set(boundary.yfilter);
}

std::string Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ttl_threshold.is_set || is_set(ttl_threshold.yfilter)) leaf_name_data.push_back(ttl_threshold.get_name_leafdata());
    if (enable_on_interface.is_set || is_set(enable_on_interface.yfilter)) leaf_name_data.push_back(enable_on_interface.get_name_leafdata());
    if (boundary.is_set || is_set(boundary.yfilter)) leaf_name_data.push_back(boundary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-threshold")
    {
        ttl_threshold = value;
        ttl_threshold.value_namespace = name_space;
        ttl_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-on-interface")
    {
        enable_on_interface = value;
        enable_on_interface.value_namespace = name_space;
        enable_on_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boundary")
    {
        boundary = value;
        boundary.value_namespace = name_space;
        boundary.value_namespace_prefix = name_space_prefix;
    }
}

void Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "ttl-threshold")
    {
        ttl_threshold.yfilter = yfilter;
    }
    if(value_path == "enable-on-interface")
    {
        enable_on_interface.yfilter = yfilter;
    }
    if(value_path == "boundary")
    {
        boundary.yfilter = yfilter;
    }
}

bool Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "ttl-threshold" || name == "enable-on-interface" || name == "boundary")
        return true;
    return false;
}

Mfwd::Vrfs::Vrf::Ipv4::Ipv4()
    :
    enable_on_all_interfaces{YType::empty, "enable-on-all-interfaces"},
    rate_per_route{YType::empty, "rate-per-route"},
    multicast_forwarding{YType::empty, "multicast-forwarding"},
    log_traps{YType::empty, "log-traps"},
    accounting{YType::enumeration, "accounting"}
    	,
    static_rpf_rules(std::make_shared<Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules>())
	,interfaces(std::make_shared<Mfwd::Vrfs::Vrf::Ipv4::Interfaces>())
{
    static_rpf_rules->parent = this;
    interfaces->parent = this;

    yang_name = "ipv4"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Mfwd::Vrfs::Vrf::Ipv4::~Ipv4()
{
}

bool Mfwd::Vrfs::Vrf::Ipv4::has_data() const
{
    return enable_on_all_interfaces.is_set
	|| rate_per_route.is_set
	|| multicast_forwarding.is_set
	|| log_traps.is_set
	|| accounting.is_set
	|| (static_rpf_rules !=  nullptr && static_rpf_rules->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Mfwd::Vrfs::Vrf::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable_on_all_interfaces.yfilter)
	|| ydk::is_set(rate_per_route.yfilter)
	|| ydk::is_set(multicast_forwarding.yfilter)
	|| ydk::is_set(log_traps.yfilter)
	|| ydk::is_set(accounting.yfilter)
	|| (static_rpf_rules !=  nullptr && static_rpf_rules->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Mfwd::Vrfs::Vrf::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::Vrfs::Vrf::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable_on_all_interfaces.is_set || is_set(enable_on_all_interfaces.yfilter)) leaf_name_data.push_back(enable_on_all_interfaces.get_name_leafdata());
    if (rate_per_route.is_set || is_set(rate_per_route.yfilter)) leaf_name_data.push_back(rate_per_route.get_name_leafdata());
    if (multicast_forwarding.is_set || is_set(multicast_forwarding.yfilter)) leaf_name_data.push_back(multicast_forwarding.get_name_leafdata());
    if (log_traps.is_set || is_set(log_traps.yfilter)) leaf_name_data.push_back(log_traps.get_name_leafdata());
    if (accounting.is_set || is_set(accounting.yfilter)) leaf_name_data.push_back(accounting.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::Vrfs::Vrf::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-rpf-rules")
    {
        if(static_rpf_rules == nullptr)
        {
            static_rpf_rules = std::make_shared<Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules>();
        }
        return static_rpf_rules;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Mfwd::Vrfs::Vrf::Ipv4::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::Vrfs::Vrf::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(static_rpf_rules != nullptr)
    {
        children["static-rpf-rules"] = static_rpf_rules;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    return children;
}

void Mfwd::Vrfs::Vrf::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable-on-all-interfaces")
    {
        enable_on_all_interfaces = value;
        enable_on_all_interfaces.value_namespace = name_space;
        enable_on_all_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-per-route")
    {
        rate_per_route = value;
        rate_per_route.value_namespace = name_space;
        rate_per_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-forwarding")
    {
        multicast_forwarding = value;
        multicast_forwarding.value_namespace = name_space;
        multicast_forwarding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-traps")
    {
        log_traps = value;
        log_traps.value_namespace = name_space;
        log_traps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting")
    {
        accounting = value;
        accounting.value_namespace = name_space;
        accounting.value_namespace_prefix = name_space_prefix;
    }
}

void Mfwd::Vrfs::Vrf::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable-on-all-interfaces")
    {
        enable_on_all_interfaces.yfilter = yfilter;
    }
    if(value_path == "rate-per-route")
    {
        rate_per_route.yfilter = yfilter;
    }
    if(value_path == "multicast-forwarding")
    {
        multicast_forwarding.yfilter = yfilter;
    }
    if(value_path == "log-traps")
    {
        log_traps.yfilter = yfilter;
    }
    if(value_path == "accounting")
    {
        accounting.yfilter = yfilter;
    }
}

bool Mfwd::Vrfs::Vrf::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-rpf-rules" || name == "interfaces" || name == "enable-on-all-interfaces" || name == "rate-per-route" || name == "multicast-forwarding" || name == "log-traps" || name == "accounting")
        return true;
    return false;
}

Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRules()
{

    yang_name = "static-rpf-rules"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::~StaticRpfRules()
{
}

bool Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::has_data() const
{
    for (std::size_t index=0; index<static_rpf_rule.size(); index++)
    {
        if(static_rpf_rule[index]->has_data())
            return true;
    }
    return false;
}

bool Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::has_operation() const
{
    for (std::size_t index=0; index<static_rpf_rule.size(); index++)
    {
        if(static_rpf_rule[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-rpf-rules";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "static-rpf-rule")
    {
        auto c = std::make_shared<Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule>();
        c->parent = this;
        static_rpf_rule.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : static_rpf_rule)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "static-rpf-rule")
        return true;
    return false;
}

Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule::StaticRpfRule()
    :
    address{YType::str, "address"},
    prefix_mask{YType::uint32, "prefix-mask"},
    neighbor_address{YType::str, "neighbor-address"},
    interface_name{YType::str, "interface-name"}
{

    yang_name = "static-rpf-rule"; yang_parent_name = "static-rpf-rules"; is_top_level_class = false; has_list_ancestor = true;
}

Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule::~StaticRpfRule()
{
}

bool Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule::has_data() const
{
    return address.is_set
	|| prefix_mask.is_set
	|| neighbor_address.is_set
	|| interface_name.is_set;
}

bool Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_mask.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-rpf-rule" <<"[address='" <<address <<"']" <<"[prefix-mask='" <<prefix_mask <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_mask.is_set || is_set(prefix_mask.yfilter)) leaf_name_data.push_back(prefix_mask.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-mask")
    {
        prefix_mask = value;
        prefix_mask.value_namespace = name_space;
        prefix_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-mask")
    {
        prefix_mask.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-mask" || name == "neighbor-address" || name == "interface-name")
        return true;
    return false;
}

Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interfaces()
{

    yang_name = "interfaces"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

Mfwd::Vrfs::Vrf::Ipv4::Interfaces::~Interfaces()
{
}

bool Mfwd::Vrfs::Vrf::Ipv4::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mfwd::Vrfs::Vrf::Ipv4::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mfwd::Vrfs::Vrf::Ipv4::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::Vrfs::Vrf::Ipv4::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::Vrfs::Vrf::Ipv4::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::Vrfs::Vrf::Ipv4::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Mfwd::Vrfs::Vrf::Ipv4::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mfwd::Vrfs::Vrf::Ipv4::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mfwd::Vrfs::Vrf::Ipv4::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    ttl_threshold{YType::uint32, "ttl-threshold"},
    enable_on_interface{YType::boolean, "enable-on-interface"},
    boundary{YType::str, "boundary"}
{

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface::~Interface()
{
}

bool Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| ttl_threshold.is_set
	|| enable_on_interface.is_set
	|| boundary.is_set;
}

bool Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(ttl_threshold.yfilter)
	|| ydk::is_set(enable_on_interface.yfilter)
	|| ydk::is_set(boundary.yfilter);
}

std::string Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ttl_threshold.is_set || is_set(ttl_threshold.yfilter)) leaf_name_data.push_back(ttl_threshold.get_name_leafdata());
    if (enable_on_interface.is_set || is_set(enable_on_interface.yfilter)) leaf_name_data.push_back(enable_on_interface.get_name_leafdata());
    if (boundary.is_set || is_set(boundary.yfilter)) leaf_name_data.push_back(boundary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl-threshold")
    {
        ttl_threshold = value;
        ttl_threshold.value_namespace = name_space;
        ttl_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable-on-interface")
    {
        enable_on_interface = value;
        enable_on_interface.value_namespace = name_space;
        enable_on_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "boundary")
    {
        boundary = value;
        boundary.value_namespace = name_space;
        boundary.value_namespace_prefix = name_space_prefix;
    }
}

void Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "ttl-threshold")
    {
        ttl_threshold.yfilter = yfilter;
    }
    if(value_path == "enable-on-interface")
    {
        enable_on_interface.yfilter = yfilter;
    }
    if(value_path == "boundary")
    {
        boundary.yfilter = yfilter;
    }
}

bool Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "ttl-threshold" || name == "enable-on-interface" || name == "boundary")
        return true;
    return false;
}

const Enum::YLeaf AccountingMode::enable {0, "enable"};
const Enum::YLeaf AccountingMode::forward_only_enable {1, "forward-only-enable"};


}
}

