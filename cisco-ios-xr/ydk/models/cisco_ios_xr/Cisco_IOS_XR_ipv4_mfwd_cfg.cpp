
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_mfwd_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_mfwd_cfg {

Mfwd::Mfwd()
    :
    default_context(nullptr) // presence node
	,vrfs(std::make_shared<Mfwd::Vrfs>())
{
    vrfs->parent = this;
    children["vrfs"] = vrfs;

    yang_name = "mfwd"; yang_parent_name = "Cisco-IOS-XR-ipv4-mfwd-cfg";
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
    return is_set(operation)
	|| (default_context !=  nullptr && default_context->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Mfwd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd";

    return path_buffer.str();

}

EntityPath Mfwd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-context")
    {
        if(default_context != nullptr)
        {
            children["default-context"] = default_context;
        }
        else
        {
            default_context = std::make_shared<Mfwd::DefaultContext>();
            default_context->parent = this;
            children["default-context"] = default_context;
        }
        return children.at("default-context");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
        else
        {
            vrfs = std::make_shared<Mfwd::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::get_children()
{
    if(children.find("default-context") == children.end())
    {
        if(default_context != nullptr)
        {
            children["default-context"] = default_context;
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
    }

    return children;
}

void Mfwd::set_value(const std::string & value_path, std::string value)
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

Mfwd::DefaultContext::DefaultContext()
    :
    ipv4(std::make_shared<Mfwd::DefaultContext::Ipv4>())
	,ipv6(std::make_shared<Mfwd::DefaultContext::Ipv6>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv6->parent = this;
    children["ipv6"] = ipv6;

    yang_name = "default-context"; yang_parent_name = "mfwd";
}

Mfwd::DefaultContext::~DefaultContext()
{
}

bool Mfwd::DefaultContext::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Mfwd::DefaultContext::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Mfwd::DefaultContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-context";

    return path_buffer.str();

}

EntityPath Mfwd::DefaultContext::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::DefaultContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<Mfwd::DefaultContext::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
        else
        {
            ipv6 = std::make_shared<Mfwd::DefaultContext::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6;
        }
        return children.at("ipv6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::DefaultContext::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
    }

    return children;
}

void Mfwd::DefaultContext::set_value(const std::string & value_path, std::string value)
{
}

Mfwd::DefaultContext::Ipv6::Ipv6()
    :
    accounting{YType::enumeration, "accounting"},
    enable_on_all_interfaces{YType::empty, "enable-on-all-interfaces"},
    forwarding_latency{YType::uint32, "forwarding-latency"},
    interface_inheritance_disable{YType::empty, "interface-inheritance-disable"},
    log_traps{YType::empty, "log-traps"},
    maximum_checking_disable{YType::empty, "maximum-checking-disable"},
    mofrr_lockout_timer_config{YType::uint32, "mofrr-lockout-timer-config"},
    mofrr_loss_detection_timer_config{YType::uint32, "mofrr-loss-detection-timer-config"},
    multicast_forwarding{YType::empty, "multicast-forwarding"},
    rate_per_route{YType::empty, "rate-per-route"}
    	,
    interfaces(std::make_shared<Mfwd::DefaultContext::Ipv6::Interfaces>())
	,static_rpf_rules(std::make_shared<Mfwd::DefaultContext::Ipv6::StaticRpfRules>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces;

    static_rpf_rules->parent = this;
    children["static-rpf-rules"] = static_rpf_rules;

    yang_name = "ipv6"; yang_parent_name = "default-context";
}

Mfwd::DefaultContext::Ipv6::~Ipv6()
{
}

bool Mfwd::DefaultContext::Ipv6::has_data() const
{
    return accounting.is_set
	|| enable_on_all_interfaces.is_set
	|| forwarding_latency.is_set
	|| interface_inheritance_disable.is_set
	|| log_traps.is_set
	|| maximum_checking_disable.is_set
	|| mofrr_lockout_timer_config.is_set
	|| mofrr_loss_detection_timer_config.is_set
	|| multicast_forwarding.is_set
	|| rate_per_route.is_set
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (static_rpf_rules !=  nullptr && static_rpf_rules->has_data());
}

bool Mfwd::DefaultContext::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(accounting.operation)
	|| is_set(enable_on_all_interfaces.operation)
	|| is_set(forwarding_latency.operation)
	|| is_set(interface_inheritance_disable.operation)
	|| is_set(log_traps.operation)
	|| is_set(maximum_checking_disable.operation)
	|| is_set(mofrr_lockout_timer_config.operation)
	|| is_set(mofrr_loss_detection_timer_config.operation)
	|| is_set(multicast_forwarding.operation)
	|| is_set(rate_per_route.operation)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (static_rpf_rules !=  nullptr && static_rpf_rules->has_operation());
}

std::string Mfwd::DefaultContext::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath Mfwd::DefaultContext::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.operation)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (enable_on_all_interfaces.is_set || is_set(enable_on_all_interfaces.operation)) leaf_name_data.push_back(enable_on_all_interfaces.get_name_leafdata());
    if (forwarding_latency.is_set || is_set(forwarding_latency.operation)) leaf_name_data.push_back(forwarding_latency.get_name_leafdata());
    if (interface_inheritance_disable.is_set || is_set(interface_inheritance_disable.operation)) leaf_name_data.push_back(interface_inheritance_disable.get_name_leafdata());
    if (log_traps.is_set || is_set(log_traps.operation)) leaf_name_data.push_back(log_traps.get_name_leafdata());
    if (maximum_checking_disable.is_set || is_set(maximum_checking_disable.operation)) leaf_name_data.push_back(maximum_checking_disable.get_name_leafdata());
    if (mofrr_lockout_timer_config.is_set || is_set(mofrr_lockout_timer_config.operation)) leaf_name_data.push_back(mofrr_lockout_timer_config.get_name_leafdata());
    if (mofrr_loss_detection_timer_config.is_set || is_set(mofrr_loss_detection_timer_config.operation)) leaf_name_data.push_back(mofrr_loss_detection_timer_config.get_name_leafdata());
    if (multicast_forwarding.is_set || is_set(multicast_forwarding.operation)) leaf_name_data.push_back(multicast_forwarding.get_name_leafdata());
    if (rate_per_route.is_set || is_set(rate_per_route.operation)) leaf_name_data.push_back(rate_per_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::DefaultContext::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<Mfwd::DefaultContext::Ipv6::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "static-rpf-rules")
    {
        if(static_rpf_rules != nullptr)
        {
            children["static-rpf-rules"] = static_rpf_rules;
        }
        else
        {
            static_rpf_rules = std::make_shared<Mfwd::DefaultContext::Ipv6::StaticRpfRules>();
            static_rpf_rules->parent = this;
            children["static-rpf-rules"] = static_rpf_rules;
        }
        return children.at("static-rpf-rules");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::DefaultContext::Ipv6::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("static-rpf-rules") == children.end())
    {
        if(static_rpf_rules != nullptr)
        {
            children["static-rpf-rules"] = static_rpf_rules;
        }
    }

    return children;
}

void Mfwd::DefaultContext::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accounting")
    {
        accounting = value;
    }
    if(value_path == "enable-on-all-interfaces")
    {
        enable_on_all_interfaces = value;
    }
    if(value_path == "forwarding-latency")
    {
        forwarding_latency = value;
    }
    if(value_path == "interface-inheritance-disable")
    {
        interface_inheritance_disable = value;
    }
    if(value_path == "log-traps")
    {
        log_traps = value;
    }
    if(value_path == "maximum-checking-disable")
    {
        maximum_checking_disable = value;
    }
    if(value_path == "mofrr-lockout-timer-config")
    {
        mofrr_lockout_timer_config = value;
    }
    if(value_path == "mofrr-loss-detection-timer-config")
    {
        mofrr_loss_detection_timer_config = value;
    }
    if(value_path == "multicast-forwarding")
    {
        multicast_forwarding = value;
    }
    if(value_path == "rate-per-route")
    {
        rate_per_route = value;
    }
}

Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRules()
{
    yang_name = "static-rpf-rules"; yang_parent_name = "ipv6";
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
    return is_set(operation);
}

std::string Mfwd::DefaultContext::Ipv6::StaticRpfRules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-rpf-rules";

    return path_buffer.str();

}

EntityPath Mfwd::DefaultContext::Ipv6::StaticRpfRules::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::DefaultContext::Ipv6::StaticRpfRules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "static-rpf-rule")
    {
        for(auto const & c : static_rpf_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule>();
        c->parent = this;
        static_rpf_rule.push_back(std::move(c));
        children[segment_path] = static_rpf_rule.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::DefaultContext::Ipv6::StaticRpfRules::get_children()
{
    for (auto const & c : static_rpf_rule)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Mfwd::DefaultContext::Ipv6::StaticRpfRules::set_value(const std::string & value_path, std::string value)
{
}

Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule::StaticRpfRule()
    :
    address{YType::str, "address"},
    prefix_mask{YType::uint32, "prefix-mask"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"}
{
    yang_name = "static-rpf-rule"; yang_parent_name = "static-rpf-rules";
}

Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule::~StaticRpfRule()
{
}

bool Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule::has_data() const
{
    return address.is_set
	|| prefix_mask.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set;
}

bool Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix_mask.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation);
}

std::string Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-rpf-rule" <<"[address='" <<address <<"']" <<"[prefix-mask='" <<prefix_mask <<"']";

    return path_buffer.str();

}

EntityPath Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/default-context/ipv6/static-rpf-rules/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_mask.is_set || is_set(prefix_mask.operation)) leaf_name_data.push_back(prefix_mask.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule::get_children()
{
    return children;
}

void Mfwd::DefaultContext::Ipv6::StaticRpfRules::StaticRpfRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "prefix-mask")
    {
        prefix_mask = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
}

Mfwd::DefaultContext::Ipv6::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ipv6";
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
    return is_set(operation);
}

std::string Mfwd::DefaultContext::Ipv6::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Mfwd::DefaultContext::Ipv6::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/default-context/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::DefaultContext::Ipv6::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Mfwd::DefaultContext::Ipv6::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::DefaultContext::Ipv6::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Mfwd::DefaultContext::Ipv6::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Mfwd::DefaultContext::Ipv6::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    boundary{YType::str, "boundary"},
    enable_on_interface{YType::boolean, "enable-on-interface"},
    ttl_threshold{YType::uint32, "ttl-threshold"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Mfwd::DefaultContext::Ipv6::Interfaces::Interface::~Interface()
{
}

bool Mfwd::DefaultContext::Ipv6::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| boundary.is_set
	|| enable_on_interface.is_set
	|| ttl_threshold.is_set;
}

bool Mfwd::DefaultContext::Ipv6::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(boundary.operation)
	|| is_set(enable_on_interface.operation)
	|| is_set(ttl_threshold.operation);
}

std::string Mfwd::DefaultContext::Ipv6::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Mfwd::DefaultContext::Ipv6::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/default-context/ipv6/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (boundary.is_set || is_set(boundary.operation)) leaf_name_data.push_back(boundary.get_name_leafdata());
    if (enable_on_interface.is_set || is_set(enable_on_interface.operation)) leaf_name_data.push_back(enable_on_interface.get_name_leafdata());
    if (ttl_threshold.is_set || is_set(ttl_threshold.operation)) leaf_name_data.push_back(ttl_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::DefaultContext::Ipv6::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::DefaultContext::Ipv6::Interfaces::Interface::get_children()
{
    return children;
}

void Mfwd::DefaultContext::Ipv6::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "boundary")
    {
        boundary = value;
    }
    if(value_path == "enable-on-interface")
    {
        enable_on_interface = value;
    }
    if(value_path == "ttl-threshold")
    {
        ttl_threshold = value;
    }
}

Mfwd::DefaultContext::Ipv4::Ipv4()
    :
    accounting{YType::enumeration, "accounting"},
    enable_on_all_interfaces{YType::empty, "enable-on-all-interfaces"},
    forwarding_latency{YType::uint32, "forwarding-latency"},
    interface_inheritance_disable{YType::empty, "interface-inheritance-disable"},
    log_traps{YType::empty, "log-traps"},
    maximum_checking_disable{YType::empty, "maximum-checking-disable"},
    mofrr_lockout_timer_config{YType::uint32, "mofrr-lockout-timer-config"},
    mofrr_loss_detection_timer_config{YType::uint32, "mofrr-loss-detection-timer-config"},
    multicast_forwarding{YType::empty, "multicast-forwarding"},
    out_of_memory_handling{YType::empty, "out-of-memory-handling"},
    rate_per_route{YType::empty, "rate-per-route"}
    	,
    interfaces(std::make_shared<Mfwd::DefaultContext::Ipv4::Interfaces>())
	,static_rpf_rules(std::make_shared<Mfwd::DefaultContext::Ipv4::StaticRpfRules>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces;

    static_rpf_rules->parent = this;
    children["static-rpf-rules"] = static_rpf_rules;

    yang_name = "ipv4"; yang_parent_name = "default-context";
}

Mfwd::DefaultContext::Ipv4::~Ipv4()
{
}

bool Mfwd::DefaultContext::Ipv4::has_data() const
{
    return accounting.is_set
	|| enable_on_all_interfaces.is_set
	|| forwarding_latency.is_set
	|| interface_inheritance_disable.is_set
	|| log_traps.is_set
	|| maximum_checking_disable.is_set
	|| mofrr_lockout_timer_config.is_set
	|| mofrr_loss_detection_timer_config.is_set
	|| multicast_forwarding.is_set
	|| out_of_memory_handling.is_set
	|| rate_per_route.is_set
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (static_rpf_rules !=  nullptr && static_rpf_rules->has_data());
}

bool Mfwd::DefaultContext::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(accounting.operation)
	|| is_set(enable_on_all_interfaces.operation)
	|| is_set(forwarding_latency.operation)
	|| is_set(interface_inheritance_disable.operation)
	|| is_set(log_traps.operation)
	|| is_set(maximum_checking_disable.operation)
	|| is_set(mofrr_lockout_timer_config.operation)
	|| is_set(mofrr_loss_detection_timer_config.operation)
	|| is_set(multicast_forwarding.operation)
	|| is_set(out_of_memory_handling.operation)
	|| is_set(rate_per_route.operation)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (static_rpf_rules !=  nullptr && static_rpf_rules->has_operation());
}

std::string Mfwd::DefaultContext::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath Mfwd::DefaultContext::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.operation)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (enable_on_all_interfaces.is_set || is_set(enable_on_all_interfaces.operation)) leaf_name_data.push_back(enable_on_all_interfaces.get_name_leafdata());
    if (forwarding_latency.is_set || is_set(forwarding_latency.operation)) leaf_name_data.push_back(forwarding_latency.get_name_leafdata());
    if (interface_inheritance_disable.is_set || is_set(interface_inheritance_disable.operation)) leaf_name_data.push_back(interface_inheritance_disable.get_name_leafdata());
    if (log_traps.is_set || is_set(log_traps.operation)) leaf_name_data.push_back(log_traps.get_name_leafdata());
    if (maximum_checking_disable.is_set || is_set(maximum_checking_disable.operation)) leaf_name_data.push_back(maximum_checking_disable.get_name_leafdata());
    if (mofrr_lockout_timer_config.is_set || is_set(mofrr_lockout_timer_config.operation)) leaf_name_data.push_back(mofrr_lockout_timer_config.get_name_leafdata());
    if (mofrr_loss_detection_timer_config.is_set || is_set(mofrr_loss_detection_timer_config.operation)) leaf_name_data.push_back(mofrr_loss_detection_timer_config.get_name_leafdata());
    if (multicast_forwarding.is_set || is_set(multicast_forwarding.operation)) leaf_name_data.push_back(multicast_forwarding.get_name_leafdata());
    if (out_of_memory_handling.is_set || is_set(out_of_memory_handling.operation)) leaf_name_data.push_back(out_of_memory_handling.get_name_leafdata());
    if (rate_per_route.is_set || is_set(rate_per_route.operation)) leaf_name_data.push_back(rate_per_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::DefaultContext::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<Mfwd::DefaultContext::Ipv4::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "static-rpf-rules")
    {
        if(static_rpf_rules != nullptr)
        {
            children["static-rpf-rules"] = static_rpf_rules;
        }
        else
        {
            static_rpf_rules = std::make_shared<Mfwd::DefaultContext::Ipv4::StaticRpfRules>();
            static_rpf_rules->parent = this;
            children["static-rpf-rules"] = static_rpf_rules;
        }
        return children.at("static-rpf-rules");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::DefaultContext::Ipv4::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("static-rpf-rules") == children.end())
    {
        if(static_rpf_rules != nullptr)
        {
            children["static-rpf-rules"] = static_rpf_rules;
        }
    }

    return children;
}

void Mfwd::DefaultContext::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accounting")
    {
        accounting = value;
    }
    if(value_path == "enable-on-all-interfaces")
    {
        enable_on_all_interfaces = value;
    }
    if(value_path == "forwarding-latency")
    {
        forwarding_latency = value;
    }
    if(value_path == "interface-inheritance-disable")
    {
        interface_inheritance_disable = value;
    }
    if(value_path == "log-traps")
    {
        log_traps = value;
    }
    if(value_path == "maximum-checking-disable")
    {
        maximum_checking_disable = value;
    }
    if(value_path == "mofrr-lockout-timer-config")
    {
        mofrr_lockout_timer_config = value;
    }
    if(value_path == "mofrr-loss-detection-timer-config")
    {
        mofrr_loss_detection_timer_config = value;
    }
    if(value_path == "multicast-forwarding")
    {
        multicast_forwarding = value;
    }
    if(value_path == "out-of-memory-handling")
    {
        out_of_memory_handling = value;
    }
    if(value_path == "rate-per-route")
    {
        rate_per_route = value;
    }
}

Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRules()
{
    yang_name = "static-rpf-rules"; yang_parent_name = "ipv4";
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
    return is_set(operation);
}

std::string Mfwd::DefaultContext::Ipv4::StaticRpfRules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-rpf-rules";

    return path_buffer.str();

}

EntityPath Mfwd::DefaultContext::Ipv4::StaticRpfRules::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::DefaultContext::Ipv4::StaticRpfRules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "static-rpf-rule")
    {
        for(auto const & c : static_rpf_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule>();
        c->parent = this;
        static_rpf_rule.push_back(std::move(c));
        children[segment_path] = static_rpf_rule.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::DefaultContext::Ipv4::StaticRpfRules::get_children()
{
    for (auto const & c : static_rpf_rule)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Mfwd::DefaultContext::Ipv4::StaticRpfRules::set_value(const std::string & value_path, std::string value)
{
}

Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule::StaticRpfRule()
    :
    address{YType::str, "address"},
    prefix_mask{YType::uint32, "prefix-mask"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"}
{
    yang_name = "static-rpf-rule"; yang_parent_name = "static-rpf-rules";
}

Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule::~StaticRpfRule()
{
}

bool Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule::has_data() const
{
    return address.is_set
	|| prefix_mask.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set;
}

bool Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix_mask.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation);
}

std::string Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-rpf-rule" <<"[address='" <<address <<"']" <<"[prefix-mask='" <<prefix_mask <<"']";

    return path_buffer.str();

}

EntityPath Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/default-context/ipv4/static-rpf-rules/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_mask.is_set || is_set(prefix_mask.operation)) leaf_name_data.push_back(prefix_mask.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule::get_children()
{
    return children;
}

void Mfwd::DefaultContext::Ipv4::StaticRpfRules::StaticRpfRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "prefix-mask")
    {
        prefix_mask = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
}

Mfwd::DefaultContext::Ipv4::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ipv4";
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
    return is_set(operation);
}

std::string Mfwd::DefaultContext::Ipv4::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Mfwd::DefaultContext::Ipv4::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/default-context/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::DefaultContext::Ipv4::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Mfwd::DefaultContext::Ipv4::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::DefaultContext::Ipv4::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Mfwd::DefaultContext::Ipv4::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Mfwd::DefaultContext::Ipv4::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    boundary{YType::str, "boundary"},
    enable_on_interface{YType::boolean, "enable-on-interface"},
    ttl_threshold{YType::uint32, "ttl-threshold"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Mfwd::DefaultContext::Ipv4::Interfaces::Interface::~Interface()
{
}

bool Mfwd::DefaultContext::Ipv4::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| boundary.is_set
	|| enable_on_interface.is_set
	|| ttl_threshold.is_set;
}

bool Mfwd::DefaultContext::Ipv4::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(boundary.operation)
	|| is_set(enable_on_interface.operation)
	|| is_set(ttl_threshold.operation);
}

std::string Mfwd::DefaultContext::Ipv4::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Mfwd::DefaultContext::Ipv4::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/default-context/ipv4/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (boundary.is_set || is_set(boundary.operation)) leaf_name_data.push_back(boundary.get_name_leafdata());
    if (enable_on_interface.is_set || is_set(enable_on_interface.operation)) leaf_name_data.push_back(enable_on_interface.get_name_leafdata());
    if (ttl_threshold.is_set || is_set(ttl_threshold.operation)) leaf_name_data.push_back(ttl_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::DefaultContext::Ipv4::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::DefaultContext::Ipv4::Interfaces::Interface::get_children()
{
    return children;
}

void Mfwd::DefaultContext::Ipv4::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "boundary")
    {
        boundary = value;
    }
    if(value_path == "enable-on-interface")
    {
        enable_on_interface = value;
    }
    if(value_path == "ttl-threshold")
    {
        ttl_threshold = value;
    }
}

Mfwd::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "mfwd";
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
    return is_set(operation);
}

std::string Mfwd::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Mfwd::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Mfwd::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Mfwd::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Mfwd::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    ipv4(std::make_shared<Mfwd::Vrfs::Vrf::Ipv4>())
	,ipv6(std::make_shared<Mfwd::Vrfs::Vrf::Ipv6>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv6->parent = this;
    children["ipv6"] = ipv6;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Mfwd::Vrfs::Vrf::~Vrf()
{
}

bool Mfwd::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Mfwd::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Mfwd::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Mfwd::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-mfwd-cfg:mfwd/vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<Mfwd::Vrfs::Vrf::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
        else
        {
            ipv6 = std::make_shared<Mfwd::Vrfs::Vrf::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6;
        }
        return children.at("ipv6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::Vrfs::Vrf::get_children()
{
    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
    }

    return children;
}

void Mfwd::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Mfwd::Vrfs::Vrf::Ipv6::Ipv6()
    :
    accounting{YType::enumeration, "accounting"},
    enable_on_all_interfaces{YType::empty, "enable-on-all-interfaces"},
    log_traps{YType::empty, "log-traps"},
    multicast_forwarding{YType::empty, "multicast-forwarding"},
    rate_per_route{YType::empty, "rate-per-route"}
    	,
    interfaces(std::make_shared<Mfwd::Vrfs::Vrf::Ipv6::Interfaces>())
	,static_rpf_rules(std::make_shared<Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces;

    static_rpf_rules->parent = this;
    children["static-rpf-rules"] = static_rpf_rules;

    yang_name = "ipv6"; yang_parent_name = "vrf";
}

Mfwd::Vrfs::Vrf::Ipv6::~Ipv6()
{
}

bool Mfwd::Vrfs::Vrf::Ipv6::has_data() const
{
    return accounting.is_set
	|| enable_on_all_interfaces.is_set
	|| log_traps.is_set
	|| multicast_forwarding.is_set
	|| rate_per_route.is_set
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (static_rpf_rules !=  nullptr && static_rpf_rules->has_data());
}

bool Mfwd::Vrfs::Vrf::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(accounting.operation)
	|| is_set(enable_on_all_interfaces.operation)
	|| is_set(log_traps.operation)
	|| is_set(multicast_forwarding.operation)
	|| is_set(rate_per_route.operation)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (static_rpf_rules !=  nullptr && static_rpf_rules->has_operation());
}

std::string Mfwd::Vrfs::Vrf::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath Mfwd::Vrfs::Vrf::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XR_ipv4_mfwd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.operation)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (enable_on_all_interfaces.is_set || is_set(enable_on_all_interfaces.operation)) leaf_name_data.push_back(enable_on_all_interfaces.get_name_leafdata());
    if (log_traps.is_set || is_set(log_traps.operation)) leaf_name_data.push_back(log_traps.get_name_leafdata());
    if (multicast_forwarding.is_set || is_set(multicast_forwarding.operation)) leaf_name_data.push_back(multicast_forwarding.get_name_leafdata());
    if (rate_per_route.is_set || is_set(rate_per_route.operation)) leaf_name_data.push_back(rate_per_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::Vrfs::Vrf::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<Mfwd::Vrfs::Vrf::Ipv6::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "static-rpf-rules")
    {
        if(static_rpf_rules != nullptr)
        {
            children["static-rpf-rules"] = static_rpf_rules;
        }
        else
        {
            static_rpf_rules = std::make_shared<Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules>();
            static_rpf_rules->parent = this;
            children["static-rpf-rules"] = static_rpf_rules;
        }
        return children.at("static-rpf-rules");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::Vrfs::Vrf::Ipv6::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("static-rpf-rules") == children.end())
    {
        if(static_rpf_rules != nullptr)
        {
            children["static-rpf-rules"] = static_rpf_rules;
        }
    }

    return children;
}

void Mfwd::Vrfs::Vrf::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accounting")
    {
        accounting = value;
    }
    if(value_path == "enable-on-all-interfaces")
    {
        enable_on_all_interfaces = value;
    }
    if(value_path == "log-traps")
    {
        log_traps = value;
    }
    if(value_path == "multicast-forwarding")
    {
        multicast_forwarding = value;
    }
    if(value_path == "rate-per-route")
    {
        rate_per_route = value;
    }
}

Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRules()
{
    yang_name = "static-rpf-rules"; yang_parent_name = "ipv6";
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
    return is_set(operation);
}

std::string Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-rpf-rules";

    return path_buffer.str();

}

EntityPath Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticRpfRules' in Cisco_IOS_XR_ipv4_mfwd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "static-rpf-rule")
    {
        for(auto const & c : static_rpf_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule>();
        c->parent = this;
        static_rpf_rule.push_back(std::move(c));
        children[segment_path] = static_rpf_rule.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::get_children()
{
    for (auto const & c : static_rpf_rule)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::set_value(const std::string & value_path, std::string value)
{
}

Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule::StaticRpfRule()
    :
    address{YType::str, "address"},
    prefix_mask{YType::uint32, "prefix-mask"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"}
{
    yang_name = "static-rpf-rule"; yang_parent_name = "static-rpf-rules";
}

Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule::~StaticRpfRule()
{
}

bool Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule::has_data() const
{
    return address.is_set
	|| prefix_mask.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set;
}

bool Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix_mask.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation);
}

std::string Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-rpf-rule" <<"[address='" <<address <<"']" <<"[prefix-mask='" <<prefix_mask <<"']";

    return path_buffer.str();

}

EntityPath Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticRpfRule' in Cisco_IOS_XR_ipv4_mfwd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_mask.is_set || is_set(prefix_mask.operation)) leaf_name_data.push_back(prefix_mask.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule::get_children()
{
    return children;
}

void Mfwd::Vrfs::Vrf::Ipv6::StaticRpfRules::StaticRpfRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "prefix-mask")
    {
        prefix_mask = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
}

Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ipv6";
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
    return is_set(operation);
}

std::string Mfwd::Vrfs::Vrf::Ipv6::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Mfwd::Vrfs::Vrf::Ipv6::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_ipv4_mfwd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::Vrfs::Vrf::Ipv6::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::Vrfs::Vrf::Ipv6::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Mfwd::Vrfs::Vrf::Ipv6::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    boundary{YType::str, "boundary"},
    enable_on_interface{YType::boolean, "enable-on-interface"},
    ttl_threshold{YType::uint32, "ttl-threshold"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface::~Interface()
{
}

bool Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| boundary.is_set
	|| enable_on_interface.is_set
	|| ttl_threshold.is_set;
}

bool Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(boundary.operation)
	|| is_set(enable_on_interface.operation)
	|| is_set(ttl_threshold.operation);
}

std::string Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ipv4_mfwd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (boundary.is_set || is_set(boundary.operation)) leaf_name_data.push_back(boundary.get_name_leafdata());
    if (enable_on_interface.is_set || is_set(enable_on_interface.operation)) leaf_name_data.push_back(enable_on_interface.get_name_leafdata());
    if (ttl_threshold.is_set || is_set(ttl_threshold.operation)) leaf_name_data.push_back(ttl_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface::get_children()
{
    return children;
}

void Mfwd::Vrfs::Vrf::Ipv6::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "boundary")
    {
        boundary = value;
    }
    if(value_path == "enable-on-interface")
    {
        enable_on_interface = value;
    }
    if(value_path == "ttl-threshold")
    {
        ttl_threshold = value;
    }
}

Mfwd::Vrfs::Vrf::Ipv4::Ipv4()
    :
    accounting{YType::enumeration, "accounting"},
    enable_on_all_interfaces{YType::empty, "enable-on-all-interfaces"},
    log_traps{YType::empty, "log-traps"},
    multicast_forwarding{YType::empty, "multicast-forwarding"},
    rate_per_route{YType::empty, "rate-per-route"}
    	,
    interfaces(std::make_shared<Mfwd::Vrfs::Vrf::Ipv4::Interfaces>())
	,static_rpf_rules(std::make_shared<Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces;

    static_rpf_rules->parent = this;
    children["static-rpf-rules"] = static_rpf_rules;

    yang_name = "ipv4"; yang_parent_name = "vrf";
}

Mfwd::Vrfs::Vrf::Ipv4::~Ipv4()
{
}

bool Mfwd::Vrfs::Vrf::Ipv4::has_data() const
{
    return accounting.is_set
	|| enable_on_all_interfaces.is_set
	|| log_traps.is_set
	|| multicast_forwarding.is_set
	|| rate_per_route.is_set
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (static_rpf_rules !=  nullptr && static_rpf_rules->has_data());
}

bool Mfwd::Vrfs::Vrf::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(accounting.operation)
	|| is_set(enable_on_all_interfaces.operation)
	|| is_set(log_traps.operation)
	|| is_set(multicast_forwarding.operation)
	|| is_set(rate_per_route.operation)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (static_rpf_rules !=  nullptr && static_rpf_rules->has_operation());
}

std::string Mfwd::Vrfs::Vrf::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath Mfwd::Vrfs::Vrf::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XR_ipv4_mfwd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting.is_set || is_set(accounting.operation)) leaf_name_data.push_back(accounting.get_name_leafdata());
    if (enable_on_all_interfaces.is_set || is_set(enable_on_all_interfaces.operation)) leaf_name_data.push_back(enable_on_all_interfaces.get_name_leafdata());
    if (log_traps.is_set || is_set(log_traps.operation)) leaf_name_data.push_back(log_traps.get_name_leafdata());
    if (multicast_forwarding.is_set || is_set(multicast_forwarding.operation)) leaf_name_data.push_back(multicast_forwarding.get_name_leafdata());
    if (rate_per_route.is_set || is_set(rate_per_route.operation)) leaf_name_data.push_back(rate_per_route.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::Vrfs::Vrf::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<Mfwd::Vrfs::Vrf::Ipv4::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "static-rpf-rules")
    {
        if(static_rpf_rules != nullptr)
        {
            children["static-rpf-rules"] = static_rpf_rules;
        }
        else
        {
            static_rpf_rules = std::make_shared<Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules>();
            static_rpf_rules->parent = this;
            children["static-rpf-rules"] = static_rpf_rules;
        }
        return children.at("static-rpf-rules");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::Vrfs::Vrf::Ipv4::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("static-rpf-rules") == children.end())
    {
        if(static_rpf_rules != nullptr)
        {
            children["static-rpf-rules"] = static_rpf_rules;
        }
    }

    return children;
}

void Mfwd::Vrfs::Vrf::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accounting")
    {
        accounting = value;
    }
    if(value_path == "enable-on-all-interfaces")
    {
        enable_on_all_interfaces = value;
    }
    if(value_path == "log-traps")
    {
        log_traps = value;
    }
    if(value_path == "multicast-forwarding")
    {
        multicast_forwarding = value;
    }
    if(value_path == "rate-per-route")
    {
        rate_per_route = value;
    }
}

Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRules()
{
    yang_name = "static-rpf-rules"; yang_parent_name = "ipv4";
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
    return is_set(operation);
}

std::string Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-rpf-rules";

    return path_buffer.str();

}

EntityPath Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticRpfRules' in Cisco_IOS_XR_ipv4_mfwd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "static-rpf-rule")
    {
        for(auto const & c : static_rpf_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule>();
        c->parent = this;
        static_rpf_rule.push_back(std::move(c));
        children[segment_path] = static_rpf_rule.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::get_children()
{
    for (auto const & c : static_rpf_rule)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::set_value(const std::string & value_path, std::string value)
{
}

Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule::StaticRpfRule()
    :
    address{YType::str, "address"},
    prefix_mask{YType::uint32, "prefix-mask"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"}
{
    yang_name = "static-rpf-rule"; yang_parent_name = "static-rpf-rules";
}

Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule::~StaticRpfRule()
{
}

bool Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule::has_data() const
{
    return address.is_set
	|| prefix_mask.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set;
}

bool Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix_mask.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation);
}

std::string Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-rpf-rule" <<"[address='" <<address <<"']" <<"[prefix-mask='" <<prefix_mask <<"']";

    return path_buffer.str();

}

EntityPath Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticRpfRule' in Cisco_IOS_XR_ipv4_mfwd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_mask.is_set || is_set(prefix_mask.operation)) leaf_name_data.push_back(prefix_mask.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule::get_children()
{
    return children;
}

void Mfwd::Vrfs::Vrf::Ipv4::StaticRpfRules::StaticRpfRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "prefix-mask")
    {
        prefix_mask = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
}

Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ipv4";
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
    return is_set(operation);
}

std::string Mfwd::Vrfs::Vrf::Ipv4::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Mfwd::Vrfs::Vrf::Ipv4::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_ipv4_mfwd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::Vrfs::Vrf::Ipv4::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::Vrfs::Vrf::Ipv4::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Mfwd::Vrfs::Vrf::Ipv4::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    boundary{YType::str, "boundary"},
    enable_on_interface{YType::boolean, "enable-on-interface"},
    ttl_threshold{YType::uint32, "ttl-threshold"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface::~Interface()
{
}

bool Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| boundary.is_set
	|| enable_on_interface.is_set
	|| ttl_threshold.is_set;
}

bool Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(boundary.operation)
	|| is_set(enable_on_interface.operation)
	|| is_set(ttl_threshold.operation);
}

std::string Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ipv4_mfwd_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (boundary.is_set || is_set(boundary.operation)) leaf_name_data.push_back(boundary.get_name_leafdata());
    if (enable_on_interface.is_set || is_set(enable_on_interface.operation)) leaf_name_data.push_back(enable_on_interface.get_name_leafdata());
    if (ttl_threshold.is_set || is_set(ttl_threshold.operation)) leaf_name_data.push_back(ttl_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface::get_children()
{
    return children;
}

void Mfwd::Vrfs::Vrf::Ipv4::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "boundary")
    {
        boundary = value;
    }
    if(value_path == "enable-on-interface")
    {
        enable_on_interface = value;
    }
    if(value_path == "ttl-threshold")
    {
        ttl_threshold = value;
    }
}

const Enum::YLeaf AccountingModeEnum::enable {0, "enable"};
const Enum::YLeaf AccountingModeEnum::forward_only_enable {1, "forward-only-enable"};


}
}

