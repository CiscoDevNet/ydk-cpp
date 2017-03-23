
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_tunnel_vpdn_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_tunnel_vpdn_cfg {

Vpdn::Vpdn()
    :
    enable{YType::empty, "enable"},
    session_limit{YType::uint32, "session-limit"},
    soft_shut{YType::empty, "soft-shut"}
    	,
    caller_id(std::make_shared<Vpdn::CallerId>())
	,history(std::make_shared<Vpdn::History>())
	,l2tp(std::make_shared<Vpdn::L2Tp>())
	,local(std::make_shared<Vpdn::Local>())
	,loggings(std::make_shared<Vpdn::Loggings>())
	,redundancy(std::make_shared<Vpdn::Redundancy>())
	,templates(std::make_shared<Vpdn::Templates>())
	,vpd_ngroups(std::make_shared<Vpdn::VpdNgroups>())
{
    caller_id->parent = this;
    children["caller-id"] = caller_id;

    history->parent = this;
    children["history"] = history;

    l2tp->parent = this;
    children["l2tp"] = l2tp;

    local->parent = this;
    children["local"] = local;

    loggings->parent = this;
    children["loggings"] = loggings;

    redundancy->parent = this;
    children["redundancy"] = redundancy;

    templates->parent = this;
    children["templates"] = templates;

    vpd_ngroups->parent = this;
    children["vpd-ngroups"] = vpd_ngroups;

    yang_name = "vpdn"; yang_parent_name = "Cisco-IOS-XR-tunnel-vpdn-cfg";
}

Vpdn::~Vpdn()
{
}

bool Vpdn::has_data() const
{
    return enable.is_set
	|| session_limit.is_set
	|| soft_shut.is_set
	|| (caller_id !=  nullptr && caller_id->has_data())
	|| (history !=  nullptr && history->has_data())
	|| (l2tp !=  nullptr && l2tp->has_data())
	|| (local !=  nullptr && local->has_data())
	|| (loggings !=  nullptr && loggings->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (templates !=  nullptr && templates->has_data())
	|| (vpd_ngroups !=  nullptr && vpd_ngroups->has_data());
}

bool Vpdn::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(session_limit.operation)
	|| is_set(soft_shut.operation)
	|| (caller_id !=  nullptr && caller_id->has_operation())
	|| (history !=  nullptr && history->has_operation())
	|| (l2tp !=  nullptr && l2tp->has_operation())
	|| (local !=  nullptr && local->has_operation())
	|| (loggings !=  nullptr && loggings->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (templates !=  nullptr && templates->has_operation())
	|| (vpd_ngroups !=  nullptr && vpd_ngroups->has_operation());
}

std::string Vpdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn";

    return path_buffer.str();

}

EntityPath Vpdn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (session_limit.is_set || is_set(session_limit.operation)) leaf_name_data.push_back(session_limit.get_name_leafdata());
    if (soft_shut.is_set || is_set(soft_shut.operation)) leaf_name_data.push_back(soft_shut.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "caller-id")
    {
        if(caller_id != nullptr)
        {
            children["caller-id"] = caller_id;
        }
        else
        {
            caller_id = std::make_shared<Vpdn::CallerId>();
            caller_id->parent = this;
            children["caller-id"] = caller_id;
        }
        return children.at("caller-id");
    }

    if(child_yang_name == "history")
    {
        if(history != nullptr)
        {
            children["history"] = history;
        }
        else
        {
            history = std::make_shared<Vpdn::History>();
            history->parent = this;
            children["history"] = history;
        }
        return children.at("history");
    }

    if(child_yang_name == "l2tp")
    {
        if(l2tp != nullptr)
        {
            children["l2tp"] = l2tp;
        }
        else
        {
            l2tp = std::make_shared<Vpdn::L2Tp>();
            l2tp->parent = this;
            children["l2tp"] = l2tp;
        }
        return children.at("l2tp");
    }

    if(child_yang_name == "local")
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
        else
        {
            local = std::make_shared<Vpdn::Local>();
            local->parent = this;
            children["local"] = local;
        }
        return children.at("local");
    }

    if(child_yang_name == "loggings")
    {
        if(loggings != nullptr)
        {
            children["loggings"] = loggings;
        }
        else
        {
            loggings = std::make_shared<Vpdn::Loggings>();
            loggings->parent = this;
            children["loggings"] = loggings;
        }
        return children.at("loggings");
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy != nullptr)
        {
            children["redundancy"] = redundancy;
        }
        else
        {
            redundancy = std::make_shared<Vpdn::Redundancy>();
            redundancy->parent = this;
            children["redundancy"] = redundancy;
        }
        return children.at("redundancy");
    }

    if(child_yang_name == "templates")
    {
        if(templates != nullptr)
        {
            children["templates"] = templates;
        }
        else
        {
            templates = std::make_shared<Vpdn::Templates>();
            templates->parent = this;
            children["templates"] = templates;
        }
        return children.at("templates");
    }

    if(child_yang_name == "vpd-ngroups")
    {
        if(vpd_ngroups != nullptr)
        {
            children["vpd-ngroups"] = vpd_ngroups;
        }
        else
        {
            vpd_ngroups = std::make_shared<Vpdn::VpdNgroups>();
            vpd_ngroups->parent = this;
            children["vpd-ngroups"] = vpd_ngroups;
        }
        return children.at("vpd-ngroups");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::get_children()
{
    if(children.find("caller-id") == children.end())
    {
        if(caller_id != nullptr)
        {
            children["caller-id"] = caller_id;
        }
    }

    if(children.find("history") == children.end())
    {
        if(history != nullptr)
        {
            children["history"] = history;
        }
    }

    if(children.find("l2tp") == children.end())
    {
        if(l2tp != nullptr)
        {
            children["l2tp"] = l2tp;
        }
    }

    if(children.find("local") == children.end())
    {
        if(local != nullptr)
        {
            children["local"] = local;
        }
    }

    if(children.find("loggings") == children.end())
    {
        if(loggings != nullptr)
        {
            children["loggings"] = loggings;
        }
    }

    if(children.find("redundancy") == children.end())
    {
        if(redundancy != nullptr)
        {
            children["redundancy"] = redundancy;
        }
    }

    if(children.find("templates") == children.end())
    {
        if(templates != nullptr)
        {
            children["templates"] = templates;
        }
    }

    if(children.find("vpd-ngroups") == children.end())
    {
        if(vpd_ngroups != nullptr)
        {
            children["vpd-ngroups"] = vpd_ngroups;
        }
    }

    return children;
}

void Vpdn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "session-limit")
    {
        session_limit = value;
    }
    if(value_path == "soft-shut")
    {
        soft_shut = value;
    }
}

std::shared_ptr<Entity> Vpdn::clone_ptr() const
{
    return std::make_shared<Vpdn>();
}

std::string Vpdn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Vpdn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Vpdn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Vpdn::History::History()
    :
    failure{YType::empty, "failure"}
{
    yang_name = "history"; yang_parent_name = "vpdn";
}

Vpdn::History::~History()
{
}

bool Vpdn::History::has_data() const
{
    return failure.is_set;
}

bool Vpdn::History::has_operation() const
{
    return is_set(operation)
	|| is_set(failure.operation);
}

std::string Vpdn::History::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history";

    return path_buffer.str();

}

EntityPath Vpdn::History::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.operation)) leaf_name_data.push_back(failure.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::History::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::History::get_children()
{
    return children;
}

void Vpdn::History::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "failure")
    {
        failure = value;
    }
}

Vpdn::Redundancy::Redundancy()
    :
    enable{YType::empty, "enable"}
    	,
    process_failures(std::make_shared<Vpdn::Redundancy::ProcessFailures>())
{
    process_failures->parent = this;
    children["process-failures"] = process_failures;

    yang_name = "redundancy"; yang_parent_name = "vpdn";
}

Vpdn::Redundancy::~Redundancy()
{
}

bool Vpdn::Redundancy::has_data() const
{
    return enable.is_set
	|| (process_failures !=  nullptr && process_failures->has_data());
}

bool Vpdn::Redundancy::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (process_failures !=  nullptr && process_failures->has_operation());
}

std::string Vpdn::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";

    return path_buffer.str();

}

EntityPath Vpdn::Redundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "process-failures")
    {
        if(process_failures != nullptr)
        {
            children["process-failures"] = process_failures;
        }
        else
        {
            process_failures = std::make_shared<Vpdn::Redundancy::ProcessFailures>();
            process_failures->parent = this;
            children["process-failures"] = process_failures;
        }
        return children.at("process-failures");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::Redundancy::get_children()
{
    if(children.find("process-failures") == children.end())
    {
        if(process_failures != nullptr)
        {
            children["process-failures"] = process_failures;
        }
    }

    return children;
}

void Vpdn::Redundancy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Vpdn::Redundancy::ProcessFailures::ProcessFailures()
    :
    switchover{YType::empty, "switchover"}
{
    yang_name = "process-failures"; yang_parent_name = "redundancy";
}

Vpdn::Redundancy::ProcessFailures::~ProcessFailures()
{
}

bool Vpdn::Redundancy::ProcessFailures::has_data() const
{
    return switchover.is_set;
}

bool Vpdn::Redundancy::ProcessFailures::has_operation() const
{
    return is_set(operation)
	|| is_set(switchover.operation);
}

std::string Vpdn::Redundancy::ProcessFailures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-failures";

    return path_buffer.str();

}

EntityPath Vpdn::Redundancy::ProcessFailures::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/redundancy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (switchover.is_set || is_set(switchover.operation)) leaf_name_data.push_back(switchover.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::Redundancy::ProcessFailures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::Redundancy::ProcessFailures::get_children()
{
    return children;
}

void Vpdn::Redundancy::ProcessFailures::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "switchover")
    {
        switchover = value;
    }
}

Vpdn::Local::Local()
    :
    cache_disabled{YType::empty, "cache-disabled"},
    path{YType::str, "path"},
    port{YType::uint16, "port"},
    secret_text{YType::str, "secret-text"}
{
    yang_name = "local"; yang_parent_name = "vpdn";
}

Vpdn::Local::~Local()
{
}

bool Vpdn::Local::has_data() const
{
    return cache_disabled.is_set
	|| path.is_set
	|| port.is_set
	|| secret_text.is_set;
}

bool Vpdn::Local::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_disabled.operation)
	|| is_set(path.operation)
	|| is_set(port.operation)
	|| is_set(secret_text.operation);
}

std::string Vpdn::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

EntityPath Vpdn::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_disabled.is_set || is_set(cache_disabled.operation)) leaf_name_data.push_back(cache_disabled.get_name_leafdata());
    if (path.is_set || is_set(path.operation)) leaf_name_data.push_back(path.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (secret_text.is_set || is_set(secret_text.operation)) leaf_name_data.push_back(secret_text.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::Local::get_children()
{
    return children;
}

void Vpdn::Local::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-disabled")
    {
        cache_disabled = value;
    }
    if(value_path == "path")
    {
        path = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "secret-text")
    {
        secret_text = value;
    }
}

Vpdn::Templates::Templates()
{
    yang_name = "templates"; yang_parent_name = "vpdn";
}

Vpdn::Templates::~Templates()
{
}

bool Vpdn::Templates::has_data() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_data())
            return true;
    }
    return false;
}

bool Vpdn::Templates::has_operation() const
{
    for (std::size_t index=0; index<template_.size(); index++)
    {
        if(template_[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vpdn::Templates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "templates";

    return path_buffer.str();

}

EntityPath Vpdn::Templates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::Templates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "template")
    {
        for(auto const & c : template_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Vpdn::Templates::Template_>();
        c->parent = this;
        template_.push_back(std::move(c));
        children[segment_path] = template_.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::Templates::get_children()
{
    for (auto const & c : template_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Vpdn::Templates::set_value(const std::string & value_path, std::string value)
{
}

Vpdn::Templates::Template_::Template_()
    :
    template_name{YType::str, "template-name"},
    description{YType::str, "description"},
    dsl_line_forwarding{YType::empty, "dsl-line-forwarding"},
    l2tp_class{YType::str, "l2tp-class"}
    	,
    caller_id(std::make_shared<Vpdn::Templates::Template_::CallerId>())
	,ip(std::make_shared<Vpdn::Templates::Template_::Ip>())
	,ipv4(std::make_shared<Vpdn::Templates::Template_::Ipv4>())
	,tunnel(std::make_shared<Vpdn::Templates::Template_::Tunnel>())
	,vpn(std::make_shared<Vpdn::Templates::Template_::Vpn>())
{
    caller_id->parent = this;
    children["caller-id"] = caller_id;

    ip->parent = this;
    children["ip"] = ip;

    ipv4->parent = this;
    children["ipv4"] = ipv4;

    tunnel->parent = this;
    children["tunnel"] = tunnel;

    vpn->parent = this;
    children["vpn"] = vpn;

    yang_name = "template"; yang_parent_name = "templates";
}

Vpdn::Templates::Template_::~Template_()
{
}

bool Vpdn::Templates::Template_::has_data() const
{
    return template_name.is_set
	|| description.is_set
	|| dsl_line_forwarding.is_set
	|| l2tp_class.is_set
	|| (caller_id !=  nullptr && caller_id->has_data())
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data())
	|| (vpn !=  nullptr && vpn->has_data());
}

bool Vpdn::Templates::Template_::has_operation() const
{
    return is_set(operation)
	|| is_set(template_name.operation)
	|| is_set(description.operation)
	|| is_set(dsl_line_forwarding.operation)
	|| is_set(l2tp_class.operation)
	|| (caller_id !=  nullptr && caller_id->has_operation())
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation())
	|| (vpn !=  nullptr && vpn->has_operation());
}

std::string Vpdn::Templates::Template_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "template" <<"[template-name='" <<template_name <<"']";

    return path_buffer.str();

}

EntityPath Vpdn::Templates::Template_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/templates/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (dsl_line_forwarding.is_set || is_set(dsl_line_forwarding.operation)) leaf_name_data.push_back(dsl_line_forwarding.get_name_leafdata());
    if (l2tp_class.is_set || is_set(l2tp_class.operation)) leaf_name_data.push_back(l2tp_class.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::Templates::Template_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "caller-id")
    {
        if(caller_id != nullptr)
        {
            children["caller-id"] = caller_id;
        }
        else
        {
            caller_id = std::make_shared<Vpdn::Templates::Template_::CallerId>();
            caller_id->parent = this;
            children["caller-id"] = caller_id;
        }
        return children.at("caller-id");
    }

    if(child_yang_name == "ip")
    {
        if(ip != nullptr)
        {
            children["ip"] = ip;
        }
        else
        {
            ip = std::make_shared<Vpdn::Templates::Template_::Ip>();
            ip->parent = this;
            children["ip"] = ip;
        }
        return children.at("ip");
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<Vpdn::Templates::Template_::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel != nullptr)
        {
            children["tunnel"] = tunnel;
        }
        else
        {
            tunnel = std::make_shared<Vpdn::Templates::Template_::Tunnel>();
            tunnel->parent = this;
            children["tunnel"] = tunnel;
        }
        return children.at("tunnel");
    }

    if(child_yang_name == "vpn")
    {
        if(vpn != nullptr)
        {
            children["vpn"] = vpn;
        }
        else
        {
            vpn = std::make_shared<Vpdn::Templates::Template_::Vpn>();
            vpn->parent = this;
            children["vpn"] = vpn;
        }
        return children.at("vpn");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::Templates::Template_::get_children()
{
    if(children.find("caller-id") == children.end())
    {
        if(caller_id != nullptr)
        {
            children["caller-id"] = caller_id;
        }
    }

    if(children.find("ip") == children.end())
    {
        if(ip != nullptr)
        {
            children["ip"] = ip;
        }
    }

    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("tunnel") == children.end())
    {
        if(tunnel != nullptr)
        {
            children["tunnel"] = tunnel;
        }
    }

    if(children.find("vpn") == children.end())
    {
        if(vpn != nullptr)
        {
            children["vpn"] = vpn;
        }
    }

    return children;
}

void Vpdn::Templates::Template_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "dsl-line-forwarding")
    {
        dsl_line_forwarding = value;
    }
    if(value_path == "l2tp-class")
    {
        l2tp_class = value;
    }
}

Vpdn::Templates::Template_::CallerId::CallerId()
    :
    mask{YType::str, "mask"}
{
    yang_name = "caller-id"; yang_parent_name = "template";
}

Vpdn::Templates::Template_::CallerId::~CallerId()
{
}

bool Vpdn::Templates::Template_::CallerId::has_data() const
{
    return mask.is_set;
}

bool Vpdn::Templates::Template_::CallerId::has_operation() const
{
    return is_set(operation)
	|| is_set(mask.operation);
}

std::string Vpdn::Templates::Template_::CallerId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caller-id";

    return path_buffer.str();

}

EntityPath Vpdn::Templates::Template_::CallerId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CallerId' in Cisco_IOS_XR_tunnel_vpdn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::Templates::Template_::CallerId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::Templates::Template_::CallerId::get_children()
{
    return children;
}

void Vpdn::Templates::Template_::CallerId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mask")
    {
        mask = value;
    }
}

Vpdn::Templates::Template_::Vpn::Vpn()
    :
    vrf{YType::str, "vrf"}
    	,
    id(std::make_shared<Vpdn::Templates::Template_::Vpn::Id>())
{
    id->parent = this;
    children["id"] = id;

    yang_name = "vpn"; yang_parent_name = "template";
}

Vpdn::Templates::Template_::Vpn::~Vpn()
{
}

bool Vpdn::Templates::Template_::Vpn::has_data() const
{
    return vrf.is_set
	|| (id !=  nullptr && id->has_data());
}

bool Vpdn::Templates::Template_::Vpn::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf.operation)
	|| (id !=  nullptr && id->has_operation());
}

std::string Vpdn::Templates::Template_::Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn";

    return path_buffer.str();

}

EntityPath Vpdn::Templates::Template_::Vpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vpn' in Cisco_IOS_XR_tunnel_vpdn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::Templates::Template_::Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "id")
    {
        if(id != nullptr)
        {
            children["id"] = id;
        }
        else
        {
            id = std::make_shared<Vpdn::Templates::Template_::Vpn::Id>();
            id->parent = this;
            children["id"] = id;
        }
        return children.at("id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::Templates::Template_::Vpn::get_children()
{
    if(children.find("id") == children.end())
    {
        if(id != nullptr)
        {
            children["id"] = id;
        }
    }

    return children;
}

void Vpdn::Templates::Template_::Vpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Vpdn::Templates::Template_::Vpn::Id::Id()
    :
    index_{YType::str, "index"},
    oui{YType::str, "oui"}
{
    yang_name = "id"; yang_parent_name = "vpn";
}

Vpdn::Templates::Template_::Vpn::Id::~Id()
{
}

bool Vpdn::Templates::Template_::Vpn::Id::has_data() const
{
    return index_.is_set
	|| oui.is_set;
}

bool Vpdn::Templates::Template_::Vpn::Id::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(oui.operation);
}

std::string Vpdn::Templates::Template_::Vpn::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";

    return path_buffer.str();

}

EntityPath Vpdn::Templates::Template_::Vpn::Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Id' in Cisco_IOS_XR_tunnel_vpdn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (oui.is_set || is_set(oui.operation)) leaf_name_data.push_back(oui.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::Templates::Template_::Vpn::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::Templates::Template_::Vpn::Id::get_children()
{
    return children;
}

void Vpdn::Templates::Template_::Vpn::Id::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "oui")
    {
        oui = value;
    }
}

Vpdn::Templates::Template_::Tunnel::Tunnel()
    :
    busy_timeout{YType::uint32, "busy-timeout"}
{
    yang_name = "tunnel"; yang_parent_name = "template";
}

Vpdn::Templates::Template_::Tunnel::~Tunnel()
{
}

bool Vpdn::Templates::Template_::Tunnel::has_data() const
{
    return busy_timeout.is_set;
}

bool Vpdn::Templates::Template_::Tunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(busy_timeout.operation);
}

std::string Vpdn::Templates::Template_::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";

    return path_buffer.str();

}

EntityPath Vpdn::Templates::Template_::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tunnel' in Cisco_IOS_XR_tunnel_vpdn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (busy_timeout.is_set || is_set(busy_timeout.operation)) leaf_name_data.push_back(busy_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::Templates::Template_::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::Templates::Template_::Tunnel::get_children()
{
    return children;
}

void Vpdn::Templates::Template_::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "busy-timeout")
    {
        busy_timeout = value;
    }
}

Vpdn::Templates::Template_::Ip::Ip()
    :
    tos{YType::int32, "tos"}
{
    yang_name = "ip"; yang_parent_name = "template";
}

Vpdn::Templates::Template_::Ip::~Ip()
{
}

bool Vpdn::Templates::Template_::Ip::has_data() const
{
    return tos.is_set;
}

bool Vpdn::Templates::Template_::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(tos.operation);
}

std::string Vpdn::Templates::Template_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

EntityPath Vpdn::Templates::Template_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XR_tunnel_vpdn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tos.is_set || is_set(tos.operation)) leaf_name_data.push_back(tos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::Templates::Template_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::Templates::Template_::Ip::get_children()
{
    return children;
}

void Vpdn::Templates::Template_::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tos")
    {
        tos = value;
    }
}

Vpdn::Templates::Template_::Ipv4::Ipv4()
    :
    df_bit{YType::enumeration, "df-bit"},
    source{YType::str, "source"}
{
    yang_name = "ipv4"; yang_parent_name = "template";
}

Vpdn::Templates::Template_::Ipv4::~Ipv4()
{
}

bool Vpdn::Templates::Template_::Ipv4::has_data() const
{
    return df_bit.is_set
	|| source.is_set;
}

bool Vpdn::Templates::Template_::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(df_bit.operation)
	|| is_set(source.operation);
}

std::string Vpdn::Templates::Template_::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath Vpdn::Templates::Template_::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XR_tunnel_vpdn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (df_bit.is_set || is_set(df_bit.operation)) leaf_name_data.push_back(df_bit.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::Templates::Template_::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::Templates::Template_::Ipv4::get_children()
{
    return children;
}

void Vpdn::Templates::Template_::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "df-bit")
    {
        df_bit = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

Vpdn::CallerId::CallerId()
    :
    mask{YType::str, "mask"}
{
    yang_name = "caller-id"; yang_parent_name = "vpdn";
}

Vpdn::CallerId::~CallerId()
{
}

bool Vpdn::CallerId::has_data() const
{
    return mask.is_set;
}

bool Vpdn::CallerId::has_operation() const
{
    return is_set(operation)
	|| is_set(mask.operation);
}

std::string Vpdn::CallerId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "caller-id";

    return path_buffer.str();

}

EntityPath Vpdn::CallerId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::CallerId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::CallerId::get_children()
{
    return children;
}

void Vpdn::CallerId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mask")
    {
        mask = value;
    }
}

Vpdn::VpdNgroups::VpdNgroups()
{
    yang_name = "vpd-ngroups"; yang_parent_name = "vpdn";
}

Vpdn::VpdNgroups::~VpdNgroups()
{
}

bool Vpdn::VpdNgroups::has_data() const
{
    for (std::size_t index=0; index<vpd_ngroup.size(); index++)
    {
        if(vpd_ngroup[index]->has_data())
            return true;
    }
    return false;
}

bool Vpdn::VpdNgroups::has_operation() const
{
    for (std::size_t index=0; index<vpd_ngroup.size(); index++)
    {
        if(vpd_ngroup[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vpdn::VpdNgroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpd-ngroups";

    return path_buffer.str();

}

EntityPath Vpdn::VpdNgroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::VpdNgroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vpd-ngroup")
    {
        for(auto const & c : vpd_ngroup)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Vpdn::VpdNgroups::VpdNgroup>();
        c->parent = this;
        vpd_ngroup.push_back(std::move(c));
        children[segment_path] = vpd_ngroup.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::VpdNgroups::get_children()
{
    for (auto const & c : vpd_ngroup)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Vpdn::VpdNgroups::set_value(const std::string & value_path, std::string value)
{
}

Vpdn::VpdNgroups::VpdNgroup::VpdNgroup()
    :
    vpd_ngroupname{YType::str, "vpd-ngroupname"},
    attribute{YType::str, "attribute"},
    desc{YType::str, "desc"},
    dsl_line_forwarding{YType::empty, "dsl-line-forwarding"},
    l2tp_class{YType::str, "l2tp-class"},
    sr_ctemplate{YType::str, "sr-ctemplate"},
    tunnel_busy_timeout{YType::uint32, "tunnel-busy-timeout"},
    vrf_name{YType::str, "vrf-name"}
    	,
    ip(std::make_shared<Vpdn::VpdNgroups::VpdNgroup::Ip>())
	,vpn_id(std::make_shared<Vpdn::VpdNgroups::VpdNgroup::VpnId>())
{
    ip->parent = this;
    children["ip"] = ip;

    vpn_id->parent = this;
    children["vpn-id"] = vpn_id;

    yang_name = "vpd-ngroup"; yang_parent_name = "vpd-ngroups";
}

Vpdn::VpdNgroups::VpdNgroup::~VpdNgroup()
{
}

bool Vpdn::VpdNgroups::VpdNgroup::has_data() const
{
    return vpd_ngroupname.is_set
	|| attribute.is_set
	|| desc.is_set
	|| dsl_line_forwarding.is_set
	|| l2tp_class.is_set
	|| sr_ctemplate.is_set
	|| tunnel_busy_timeout.is_set
	|| vrf_name.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (vpn_id !=  nullptr && vpn_id->has_data());
}

bool Vpdn::VpdNgroups::VpdNgroup::has_operation() const
{
    return is_set(operation)
	|| is_set(vpd_ngroupname.operation)
	|| is_set(attribute.operation)
	|| is_set(desc.operation)
	|| is_set(dsl_line_forwarding.operation)
	|| is_set(l2tp_class.operation)
	|| is_set(sr_ctemplate.operation)
	|| is_set(tunnel_busy_timeout.operation)
	|| is_set(vrf_name.operation)
	|| (ip !=  nullptr && ip->has_operation())
	|| (vpn_id !=  nullptr && vpn_id->has_operation());
}

std::string Vpdn::VpdNgroups::VpdNgroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpd-ngroup" <<"[vpd-ngroupname='" <<vpd_ngroupname <<"']";

    return path_buffer.str();

}

EntityPath Vpdn::VpdNgroups::VpdNgroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/vpd-ngroups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpd_ngroupname.is_set || is_set(vpd_ngroupname.operation)) leaf_name_data.push_back(vpd_ngroupname.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.operation)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (desc.is_set || is_set(desc.operation)) leaf_name_data.push_back(desc.get_name_leafdata());
    if (dsl_line_forwarding.is_set || is_set(dsl_line_forwarding.operation)) leaf_name_data.push_back(dsl_line_forwarding.get_name_leafdata());
    if (l2tp_class.is_set || is_set(l2tp_class.operation)) leaf_name_data.push_back(l2tp_class.get_name_leafdata());
    if (sr_ctemplate.is_set || is_set(sr_ctemplate.operation)) leaf_name_data.push_back(sr_ctemplate.get_name_leafdata());
    if (tunnel_busy_timeout.is_set || is_set(tunnel_busy_timeout.operation)) leaf_name_data.push_back(tunnel_busy_timeout.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::VpdNgroups::VpdNgroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip")
    {
        if(ip != nullptr)
        {
            children["ip"] = ip;
        }
        else
        {
            ip = std::make_shared<Vpdn::VpdNgroups::VpdNgroup::Ip>();
            ip->parent = this;
            children["ip"] = ip;
        }
        return children.at("ip");
    }

    if(child_yang_name == "vpn-id")
    {
        if(vpn_id != nullptr)
        {
            children["vpn-id"] = vpn_id;
        }
        else
        {
            vpn_id = std::make_shared<Vpdn::VpdNgroups::VpdNgroup::VpnId>();
            vpn_id->parent = this;
            children["vpn-id"] = vpn_id;
        }
        return children.at("vpn-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::VpdNgroups::VpdNgroup::get_children()
{
    if(children.find("ip") == children.end())
    {
        if(ip != nullptr)
        {
            children["ip"] = ip;
        }
    }

    if(children.find("vpn-id") == children.end())
    {
        if(vpn_id != nullptr)
        {
            children["vpn-id"] = vpn_id;
        }
    }

    return children;
}

void Vpdn::VpdNgroups::VpdNgroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vpd-ngroupname")
    {
        vpd_ngroupname = value;
    }
    if(value_path == "attribute")
    {
        attribute = value;
    }
    if(value_path == "desc")
    {
        desc = value;
    }
    if(value_path == "dsl-line-forwarding")
    {
        dsl_line_forwarding = value;
    }
    if(value_path == "l2tp-class")
    {
        l2tp_class = value;
    }
    if(value_path == "sr-ctemplate")
    {
        sr_ctemplate = value;
    }
    if(value_path == "tunnel-busy-timeout")
    {
        tunnel_busy_timeout = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Vpdn::VpdNgroups::VpdNgroup::VpnId::VpnId()
    :
    vpn_id_index{YType::str, "vpn-id-index"},
    vpn_id_oui{YType::str, "vpn-id-oui"}
{
    yang_name = "vpn-id"; yang_parent_name = "vpd-ngroup";
}

Vpdn::VpdNgroups::VpdNgroup::VpnId::~VpnId()
{
}

bool Vpdn::VpdNgroups::VpdNgroup::VpnId::has_data() const
{
    return vpn_id_index.is_set
	|| vpn_id_oui.is_set;
}

bool Vpdn::VpdNgroups::VpdNgroup::VpnId::has_operation() const
{
    return is_set(operation)
	|| is_set(vpn_id_index.operation)
	|| is_set(vpn_id_oui.operation);
}

std::string Vpdn::VpdNgroups::VpdNgroup::VpnId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-id";

    return path_buffer.str();

}

EntityPath Vpdn::VpdNgroups::VpdNgroup::VpnId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VpnId' in Cisco_IOS_XR_tunnel_vpdn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpn_id_index.is_set || is_set(vpn_id_index.operation)) leaf_name_data.push_back(vpn_id_index.get_name_leafdata());
    if (vpn_id_oui.is_set || is_set(vpn_id_oui.operation)) leaf_name_data.push_back(vpn_id_oui.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::VpdNgroups::VpdNgroup::VpnId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::VpdNgroups::VpdNgroup::VpnId::get_children()
{
    return children;
}

void Vpdn::VpdNgroups::VpdNgroup::VpnId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vpn-id-index")
    {
        vpn_id_index = value;
    }
    if(value_path == "vpn-id-oui")
    {
        vpn_id_oui = value;
    }
}

Vpdn::VpdNgroups::VpdNgroup::Ip::Ip()
    :
    tos{YType::uint32, "tos"}
{
    yang_name = "ip"; yang_parent_name = "vpd-ngroup";
}

Vpdn::VpdNgroups::VpdNgroup::Ip::~Ip()
{
}

bool Vpdn::VpdNgroups::VpdNgroup::Ip::has_data() const
{
    return tos.is_set;
}

bool Vpdn::VpdNgroups::VpdNgroup::Ip::has_operation() const
{
    return is_set(operation)
	|| is_set(tos.operation);
}

std::string Vpdn::VpdNgroups::VpdNgroup::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

EntityPath Vpdn::VpdNgroups::VpdNgroup::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XR_tunnel_vpdn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tos.is_set || is_set(tos.operation)) leaf_name_data.push_back(tos.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::VpdNgroups::VpdNgroup::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::VpdNgroups::VpdNgroup::Ip::get_children()
{
    return children;
}

void Vpdn::VpdNgroups::VpdNgroup::Ip::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tos")
    {
        tos = value;
    }
}

Vpdn::Loggings::Loggings()
{
    yang_name = "loggings"; yang_parent_name = "vpdn";
}

Vpdn::Loggings::~Loggings()
{
}

bool Vpdn::Loggings::has_data() const
{
    for (std::size_t index=0; index<logging.size(); index++)
    {
        if(logging[index]->has_data())
            return true;
    }
    return false;
}

bool Vpdn::Loggings::has_operation() const
{
    for (std::size_t index=0; index<logging.size(); index++)
    {
        if(logging[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vpdn::Loggings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loggings";

    return path_buffer.str();

}

EntityPath Vpdn::Loggings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::Loggings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "logging")
    {
        for(auto const & c : logging)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Vpdn::Loggings::Logging>();
        c->parent = this;
        logging.push_back(std::move(c));
        children[segment_path] = logging.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::Loggings::get_children()
{
    for (auto const & c : logging)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Vpdn::Loggings::set_value(const std::string & value_path, std::string value)
{
}

Vpdn::Loggings::Logging::Logging()
    :
    option{YType::enumeration, "option"}
{
    yang_name = "logging"; yang_parent_name = "loggings";
}

Vpdn::Loggings::Logging::~Logging()
{
}

bool Vpdn::Loggings::Logging::has_data() const
{
    return option.is_set;
}

bool Vpdn::Loggings::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(option.operation);
}

std::string Vpdn::Loggings::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging" <<"[option='" <<option <<"']";

    return path_buffer.str();

}

EntityPath Vpdn::Loggings::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/loggings/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.operation)) leaf_name_data.push_back(option.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::Loggings::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::Loggings::Logging::get_children()
{
    return children;
}

void Vpdn::Loggings::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "option")
    {
        option = value;
    }
}

Vpdn::L2Tp::L2Tp()
    :
    reassembly{YType::empty, "reassembly"},
    tcp_mss_adjust{YType::uint32, "tcp-mss-adjust"}
    	,
    session_id(std::make_shared<Vpdn::L2Tp::SessionId>())
{
    session_id->parent = this;
    children["session-id"] = session_id;

    yang_name = "l2tp"; yang_parent_name = "vpdn";
}

Vpdn::L2Tp::~L2Tp()
{
}

bool Vpdn::L2Tp::has_data() const
{
    return reassembly.is_set
	|| tcp_mss_adjust.is_set
	|| (session_id !=  nullptr && session_id->has_data());
}

bool Vpdn::L2Tp::has_operation() const
{
    return is_set(operation)
	|| is_set(reassembly.operation)
	|| is_set(tcp_mss_adjust.operation)
	|| (session_id !=  nullptr && session_id->has_operation());
}

std::string Vpdn::L2Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";

    return path_buffer.str();

}

EntityPath Vpdn::L2Tp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reassembly.is_set || is_set(reassembly.operation)) leaf_name_data.push_back(reassembly.get_name_leafdata());
    if (tcp_mss_adjust.is_set || is_set(tcp_mss_adjust.operation)) leaf_name_data.push_back(tcp_mss_adjust.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::L2Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session-id")
    {
        if(session_id != nullptr)
        {
            children["session-id"] = session_id;
        }
        else
        {
            session_id = std::make_shared<Vpdn::L2Tp::SessionId>();
            session_id->parent = this;
            children["session-id"] = session_id;
        }
        return children.at("session-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::L2Tp::get_children()
{
    if(children.find("session-id") == children.end())
    {
        if(session_id != nullptr)
        {
            children["session-id"] = session_id;
        }
    }

    return children;
}

void Vpdn::L2Tp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reassembly")
    {
        reassembly = value;
    }
    if(value_path == "tcp-mss-adjust")
    {
        tcp_mss_adjust = value;
    }
}

Vpdn::L2Tp::SessionId::SessionId()
    :
    space(std::make_shared<Vpdn::L2Tp::SessionId::Space>())
{
    space->parent = this;
    children["space"] = space;

    yang_name = "session-id"; yang_parent_name = "l2tp";
}

Vpdn::L2Tp::SessionId::~SessionId()
{
}

bool Vpdn::L2Tp::SessionId::has_data() const
{
    return (space !=  nullptr && space->has_data());
}

bool Vpdn::L2Tp::SessionId::has_operation() const
{
    return is_set(operation)
	|| (space !=  nullptr && space->has_operation());
}

std::string Vpdn::L2Tp::SessionId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-id";

    return path_buffer.str();

}

EntityPath Vpdn::L2Tp::SessionId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/l2tp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::L2Tp::SessionId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "space")
    {
        if(space != nullptr)
        {
            children["space"] = space;
        }
        else
        {
            space = std::make_shared<Vpdn::L2Tp::SessionId::Space>();
            space->parent = this;
            children["space"] = space;
        }
        return children.at("space");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::L2Tp::SessionId::get_children()
{
    if(children.find("space") == children.end())
    {
        if(space != nullptr)
        {
            children["space"] = space;
        }
    }

    return children;
}

void Vpdn::L2Tp::SessionId::set_value(const std::string & value_path, std::string value)
{
}

Vpdn::L2Tp::SessionId::Space::Space()
    :
    hierarchy{YType::empty, "hierarchy"}
{
    yang_name = "space"; yang_parent_name = "session-id";
}

Vpdn::L2Tp::SessionId::Space::~Space()
{
}

bool Vpdn::L2Tp::SessionId::Space::has_data() const
{
    return hierarchy.is_set;
}

bool Vpdn::L2Tp::SessionId::Space::has_operation() const
{
    return is_set(operation)
	|| is_set(hierarchy.operation);
}

std::string Vpdn::L2Tp::SessionId::Space::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "space";

    return path_buffer.str();

}

EntityPath Vpdn::L2Tp::SessionId::Space::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-cfg:vpdn/l2tp/session-id/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hierarchy.is_set || is_set(hierarchy.operation)) leaf_name_data.push_back(hierarchy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::L2Tp::SessionId::Space::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::L2Tp::SessionId::Space::get_children()
{
    return children;
}

void Vpdn::L2Tp::SessionId::Space::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hierarchy")
    {
        hierarchy = value;
    }
}

const Enum::YLeaf DfBitEnum::clear {0, "clear"};
const Enum::YLeaf DfBitEnum::reflect {1, "reflect"};
const Enum::YLeaf DfBitEnum::set {2, "set"};

const Enum::YLeaf OptionEnum::local {1, "local"};
const Enum::YLeaf OptionEnum::user {2, "user"};
const Enum::YLeaf OptionEnum::dead_cache {8, "dead-cache"};
const Enum::YLeaf OptionEnum::tunnel_drop {16, "tunnel-drop"};


}
}

