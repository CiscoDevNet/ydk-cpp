
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_autorp_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_autorp_oper {

AutoRp::AutoRp()
    :
    active(std::make_shared<AutoRp::Active>())
	,standby(std::make_shared<AutoRp::Standby>())
{
    active->parent = this;
    children["active"] = active;

    standby->parent = this;
    children["standby"] = standby;

    yang_name = "auto-rp"; yang_parent_name = "Cisco-IOS-XR-ipv4-autorp-oper";
}

AutoRp::~AutoRp()
{
}

bool AutoRp::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (standby !=  nullptr && standby->has_data());
}

bool AutoRp::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (standby !=  nullptr && standby->has_operation());
}

std::string AutoRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp";

    return path_buffer.str();

}

EntityPath AutoRp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> AutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active")
    {
        if(active != nullptr)
        {
            children["active"] = active;
        }
        else
        {
            active = std::make_shared<AutoRp::Active>();
            active->parent = this;
            children["active"] = active;
        }
        return children.at("active");
    }

    if(child_yang_name == "standby")
    {
        if(standby != nullptr)
        {
            children["standby"] = standby;
        }
        else
        {
            standby = std::make_shared<AutoRp::Standby>();
            standby->parent = this;
            children["standby"] = standby;
        }
        return children.at("standby");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::get_children()
{
    if(children.find("active") == children.end())
    {
        if(active != nullptr)
        {
            children["active"] = active;
        }
    }

    if(children.find("standby") == children.end())
    {
        if(standby != nullptr)
        {
            children["standby"] = standby;
        }
    }

    return children;
}

void AutoRp::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> AutoRp::clone_ptr() const
{
    return std::make_shared<AutoRp>();
}

std::string AutoRp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string AutoRp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function AutoRp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

AutoRp::Standby::Standby()
    :
    candidate_rp(std::make_shared<AutoRp::Standby::CandidateRp>())
	,mapping_agent(std::make_shared<AutoRp::Standby::MappingAgent>())
{
    candidate_rp->parent = this;
    children["candidate-rp"] = candidate_rp;

    mapping_agent->parent = this;
    children["mapping-agent"] = mapping_agent;

    yang_name = "standby"; yang_parent_name = "auto-rp";
}

AutoRp::Standby::~Standby()
{
}

bool AutoRp::Standby::has_data() const
{
    return (candidate_rp !=  nullptr && candidate_rp->has_data())
	|| (mapping_agent !=  nullptr && mapping_agent->has_data());
}

bool AutoRp::Standby::has_operation() const
{
    return is_set(operation)
	|| (candidate_rp !=  nullptr && candidate_rp->has_operation())
	|| (mapping_agent !=  nullptr && mapping_agent->has_operation());
}

std::string AutoRp::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";

    return path_buffer.str();

}

EntityPath AutoRp::Standby::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AutoRp::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-rp")
    {
        if(candidate_rp != nullptr)
        {
            children["candidate-rp"] = candidate_rp;
        }
        else
        {
            candidate_rp = std::make_shared<AutoRp::Standby::CandidateRp>();
            candidate_rp->parent = this;
            children["candidate-rp"] = candidate_rp;
        }
        return children.at("candidate-rp");
    }

    if(child_yang_name == "mapping-agent")
    {
        if(mapping_agent != nullptr)
        {
            children["mapping-agent"] = mapping_agent;
        }
        else
        {
            mapping_agent = std::make_shared<AutoRp::Standby::MappingAgent>();
            mapping_agent->parent = this;
            children["mapping-agent"] = mapping_agent;
        }
        return children.at("mapping-agent");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::Standby::get_children()
{
    if(children.find("candidate-rp") == children.end())
    {
        if(candidate_rp != nullptr)
        {
            children["candidate-rp"] = candidate_rp;
        }
    }

    if(children.find("mapping-agent") == children.end())
    {
        if(mapping_agent != nullptr)
        {
            children["mapping-agent"] = mapping_agent;
        }
    }

    return children;
}

void AutoRp::Standby::set_value(const std::string & value_path, std::string value)
{
}

AutoRp::Standby::CandidateRp::CandidateRp()
    :
    rps(std::make_shared<AutoRp::Standby::CandidateRp::Rps>())
	,traffic(std::make_shared<AutoRp::Standby::CandidateRp::Traffic>())
{
    rps->parent = this;
    children["rps"] = rps;

    traffic->parent = this;
    children["traffic"] = traffic;

    yang_name = "candidate-rp"; yang_parent_name = "standby";
}

AutoRp::Standby::CandidateRp::~CandidateRp()
{
}

bool AutoRp::Standby::CandidateRp::has_data() const
{
    return (rps !=  nullptr && rps->has_data())
	|| (traffic !=  nullptr && traffic->has_data());
}

bool AutoRp::Standby::CandidateRp::has_operation() const
{
    return is_set(operation)
	|| (rps !=  nullptr && rps->has_operation())
	|| (traffic !=  nullptr && traffic->has_operation());
}

std::string AutoRp::Standby::CandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp";

    return path_buffer.str();

}

EntityPath AutoRp::Standby::CandidateRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AutoRp::Standby::CandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rps")
    {
        if(rps != nullptr)
        {
            children["rps"] = rps;
        }
        else
        {
            rps = std::make_shared<AutoRp::Standby::CandidateRp::Rps>();
            rps->parent = this;
            children["rps"] = rps;
        }
        return children.at("rps");
    }

    if(child_yang_name == "traffic")
    {
        if(traffic != nullptr)
        {
            children["traffic"] = traffic;
        }
        else
        {
            traffic = std::make_shared<AutoRp::Standby::CandidateRp::Traffic>();
            traffic->parent = this;
            children["traffic"] = traffic;
        }
        return children.at("traffic");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::Standby::CandidateRp::get_children()
{
    if(children.find("rps") == children.end())
    {
        if(rps != nullptr)
        {
            children["rps"] = rps;
        }
    }

    if(children.find("traffic") == children.end())
    {
        if(traffic != nullptr)
        {
            children["traffic"] = traffic;
        }
    }

    return children;
}

void AutoRp::Standby::CandidateRp::set_value(const std::string & value_path, std::string value)
{
}

AutoRp::Standby::CandidateRp::Traffic::Traffic()
    :
    active_sent_packets{YType::uint32, "active-sent-packets"},
    standby_sent_packets{YType::uint32, "standby-sent-packets"}
{
    yang_name = "traffic"; yang_parent_name = "candidate-rp";
}

AutoRp::Standby::CandidateRp::Traffic::~Traffic()
{
}

bool AutoRp::Standby::CandidateRp::Traffic::has_data() const
{
    return active_sent_packets.is_set
	|| standby_sent_packets.is_set;
}

bool AutoRp::Standby::CandidateRp::Traffic::has_operation() const
{
    return is_set(operation)
	|| is_set(active_sent_packets.operation)
	|| is_set(standby_sent_packets.operation);
}

std::string AutoRp::Standby::CandidateRp::Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic";

    return path_buffer.str();

}

EntityPath AutoRp::Standby::CandidateRp::Traffic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/standby/candidate-rp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_sent_packets.is_set || is_set(active_sent_packets.operation)) leaf_name_data.push_back(active_sent_packets.get_name_leafdata());
    if (standby_sent_packets.is_set || is_set(standby_sent_packets.operation)) leaf_name_data.push_back(standby_sent_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AutoRp::Standby::CandidateRp::Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::Standby::CandidateRp::Traffic::get_children()
{
    return children;
}

void AutoRp::Standby::CandidateRp::Traffic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-sent-packets")
    {
        active_sent_packets = value;
    }
    if(value_path == "standby-sent-packets")
    {
        standby_sent_packets = value;
    }
}

AutoRp::Standby::CandidateRp::Rps::Rps()
{
    yang_name = "rps"; yang_parent_name = "candidate-rp";
}

AutoRp::Standby::CandidateRp::Rps::~Rps()
{
}

bool AutoRp::Standby::CandidateRp::Rps::has_data() const
{
    for (std::size_t index=0; index<rp.size(); index++)
    {
        if(rp[index]->has_data())
            return true;
    }
    return false;
}

bool AutoRp::Standby::CandidateRp::Rps::has_operation() const
{
    for (std::size_t index=0; index<rp.size(); index++)
    {
        if(rp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AutoRp::Standby::CandidateRp::Rps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rps";

    return path_buffer.str();

}

EntityPath AutoRp::Standby::CandidateRp::Rps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/standby/candidate-rp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AutoRp::Standby::CandidateRp::Rps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rp")
    {
        for(auto const & c : rp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AutoRp::Standby::CandidateRp::Rps::Rp>();
        c->parent = this;
        rp.push_back(std::move(c));
        children[segment_path] = rp.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::Standby::CandidateRp::Rps::get_children()
{
    for (auto const & c : rp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AutoRp::Standby::CandidateRp::Rps::set_value(const std::string & value_path, std::string value)
{
}

AutoRp::Standby::CandidateRp::Rps::Rp::Rp()
    :
    access_list_name{YType::str, "access-list-name"},
    announce_period{YType::int32, "announce-period"},
    candidate_rp_address{YType::str, "candidate-rp-address"},
    interface_name{YType::str, "interface-name"},
    protocol_mode{YType::enumeration, "protocol-mode"},
    protocol_mode_xr{YType::enumeration, "protocol-mode-xr"},
    ttl{YType::int32, "ttl"}
{
    yang_name = "rp"; yang_parent_name = "rps";
}

AutoRp::Standby::CandidateRp::Rps::Rp::~Rp()
{
}

bool AutoRp::Standby::CandidateRp::Rps::Rp::has_data() const
{
    return access_list_name.is_set
	|| announce_period.is_set
	|| candidate_rp_address.is_set
	|| interface_name.is_set
	|| protocol_mode.is_set
	|| protocol_mode_xr.is_set
	|| ttl.is_set;
}

bool AutoRp::Standby::CandidateRp::Rps::Rp::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(announce_period.operation)
	|| is_set(candidate_rp_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(protocol_mode.operation)
	|| is_set(protocol_mode_xr.operation)
	|| is_set(ttl.operation);
}

std::string AutoRp::Standby::CandidateRp::Rps::Rp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp";

    return path_buffer.str();

}

EntityPath AutoRp::Standby::CandidateRp::Rps::Rp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/standby/candidate-rp/rps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (announce_period.is_set || is_set(announce_period.operation)) leaf_name_data.push_back(announce_period.get_name_leafdata());
    if (candidate_rp_address.is_set || is_set(candidate_rp_address.operation)) leaf_name_data.push_back(candidate_rp_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (protocol_mode.is_set || is_set(protocol_mode.operation)) leaf_name_data.push_back(protocol_mode.get_name_leafdata());
    if (protocol_mode_xr.is_set || is_set(protocol_mode_xr.operation)) leaf_name_data.push_back(protocol_mode_xr.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AutoRp::Standby::CandidateRp::Rps::Rp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::Standby::CandidateRp::Rps::Rp::get_children()
{
    return children;
}

void AutoRp::Standby::CandidateRp::Rps::Rp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "announce-period")
    {
        announce_period = value;
    }
    if(value_path == "candidate-rp-address")
    {
        candidate_rp_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode = value;
    }
    if(value_path == "protocol-mode-xr")
    {
        protocol_mode_xr = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

AutoRp::Standby::MappingAgent::MappingAgent()
    :
    rp_addresses(std::make_shared<AutoRp::Standby::MappingAgent::RpAddresses>())
	,summary(std::make_shared<AutoRp::Standby::MappingAgent::Summary>())
	,traffic(std::make_shared<AutoRp::Standby::MappingAgent::Traffic>())
{
    rp_addresses->parent = this;
    children["rp-addresses"] = rp_addresses;

    summary->parent = this;
    children["summary"] = summary;

    traffic->parent = this;
    children["traffic"] = traffic;

    yang_name = "mapping-agent"; yang_parent_name = "standby";
}

AutoRp::Standby::MappingAgent::~MappingAgent()
{
}

bool AutoRp::Standby::MappingAgent::has_data() const
{
    return (rp_addresses !=  nullptr && rp_addresses->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (traffic !=  nullptr && traffic->has_data());
}

bool AutoRp::Standby::MappingAgent::has_operation() const
{
    return is_set(operation)
	|| (rp_addresses !=  nullptr && rp_addresses->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (traffic !=  nullptr && traffic->has_operation());
}

std::string AutoRp::Standby::MappingAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-agent";

    return path_buffer.str();

}

EntityPath AutoRp::Standby::MappingAgent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AutoRp::Standby::MappingAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rp-addresses")
    {
        if(rp_addresses != nullptr)
        {
            children["rp-addresses"] = rp_addresses;
        }
        else
        {
            rp_addresses = std::make_shared<AutoRp::Standby::MappingAgent::RpAddresses>();
            rp_addresses->parent = this;
            children["rp-addresses"] = rp_addresses;
        }
        return children.at("rp-addresses");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<AutoRp::Standby::MappingAgent::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    if(child_yang_name == "traffic")
    {
        if(traffic != nullptr)
        {
            children["traffic"] = traffic;
        }
        else
        {
            traffic = std::make_shared<AutoRp::Standby::MappingAgent::Traffic>();
            traffic->parent = this;
            children["traffic"] = traffic;
        }
        return children.at("traffic");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::Standby::MappingAgent::get_children()
{
    if(children.find("rp-addresses") == children.end())
    {
        if(rp_addresses != nullptr)
        {
            children["rp-addresses"] = rp_addresses;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    if(children.find("traffic") == children.end())
    {
        if(traffic != nullptr)
        {
            children["traffic"] = traffic;
        }
    }

    return children;
}

void AutoRp::Standby::MappingAgent::set_value(const std::string & value_path, std::string value)
{
}

AutoRp::Standby::MappingAgent::Traffic::Traffic()
    :
    active_received_packets{YType::uint32, "active-received-packets"},
    active_sent_packets{YType::uint32, "active-sent-packets"},
    standby_received_packets{YType::uint32, "standby-received-packets"},
    standby_sent_packets{YType::uint32, "standby-sent-packets"}
{
    yang_name = "traffic"; yang_parent_name = "mapping-agent";
}

AutoRp::Standby::MappingAgent::Traffic::~Traffic()
{
}

bool AutoRp::Standby::MappingAgent::Traffic::has_data() const
{
    return active_received_packets.is_set
	|| active_sent_packets.is_set
	|| standby_received_packets.is_set
	|| standby_sent_packets.is_set;
}

bool AutoRp::Standby::MappingAgent::Traffic::has_operation() const
{
    return is_set(operation)
	|| is_set(active_received_packets.operation)
	|| is_set(active_sent_packets.operation)
	|| is_set(standby_received_packets.operation)
	|| is_set(standby_sent_packets.operation);
}

std::string AutoRp::Standby::MappingAgent::Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic";

    return path_buffer.str();

}

EntityPath AutoRp::Standby::MappingAgent::Traffic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/standby/mapping-agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_received_packets.is_set || is_set(active_received_packets.operation)) leaf_name_data.push_back(active_received_packets.get_name_leafdata());
    if (active_sent_packets.is_set || is_set(active_sent_packets.operation)) leaf_name_data.push_back(active_sent_packets.get_name_leafdata());
    if (standby_received_packets.is_set || is_set(standby_received_packets.operation)) leaf_name_data.push_back(standby_received_packets.get_name_leafdata());
    if (standby_sent_packets.is_set || is_set(standby_sent_packets.operation)) leaf_name_data.push_back(standby_sent_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AutoRp::Standby::MappingAgent::Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::Standby::MappingAgent::Traffic::get_children()
{
    return children;
}

void AutoRp::Standby::MappingAgent::Traffic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-received-packets")
    {
        active_received_packets = value;
    }
    if(value_path == "active-sent-packets")
    {
        active_sent_packets = value;
    }
    if(value_path == "standby-received-packets")
    {
        standby_received_packets = value;
    }
    if(value_path == "standby-sent-packets")
    {
        standby_sent_packets = value;
    }
}

AutoRp::Standby::MappingAgent::RpAddresses::RpAddresses()
{
    yang_name = "rp-addresses"; yang_parent_name = "mapping-agent";
}

AutoRp::Standby::MappingAgent::RpAddresses::~RpAddresses()
{
}

bool AutoRp::Standby::MappingAgent::RpAddresses::has_data() const
{
    for (std::size_t index=0; index<rp_address.size(); index++)
    {
        if(rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool AutoRp::Standby::MappingAgent::RpAddresses::has_operation() const
{
    for (std::size_t index=0; index<rp_address.size(); index++)
    {
        if(rp_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AutoRp::Standby::MappingAgent::RpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-addresses";

    return path_buffer.str();

}

EntityPath AutoRp::Standby::MappingAgent::RpAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/standby/mapping-agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AutoRp::Standby::MappingAgent::RpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rp-address")
    {
        for(auto const & c : rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AutoRp::Standby::MappingAgent::RpAddresses::RpAddress>();
        c->parent = this;
        rp_address.push_back(std::move(c));
        children[segment_path] = rp_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::Standby::MappingAgent::RpAddresses::get_children()
{
    for (auto const & c : rp_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AutoRp::Standby::MappingAgent::RpAddresses::set_value(const std::string & value_path, std::string value)
{
}

AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::RpAddress()
    :
    rp_address{YType::str, "rp-address"},
    expiry_time{YType::uint64, "expiry-time"},
    pim_version{YType::uint8, "pim-version"},
    rp_address_xr{YType::str, "rp-address-xr"}
{
    yang_name = "rp-address"; yang_parent_name = "rp-addresses";
}

AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::~RpAddress()
{
}

bool AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return rp_address.is_set
	|| expiry_time.is_set
	|| pim_version.is_set
	|| rp_address_xr.is_set;
}

bool AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(rp_address.operation)
	|| is_set(expiry_time.operation)
	|| is_set(pim_version.operation)
	|| is_set(rp_address_xr.operation);
}

std::string AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address" <<"[rp-address='" <<rp_address <<"']";

    return path_buffer.str();

}

EntityPath AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/standby/mapping-agent/rp-addresses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (expiry_time.is_set || is_set(expiry_time.operation)) leaf_name_data.push_back(expiry_time.get_name_leafdata());
    if (pim_version.is_set || is_set(pim_version.operation)) leaf_name_data.push_back(pim_version.get_name_leafdata());
    if (rp_address_xr.is_set || is_set(rp_address_xr.operation)) leaf_name_data.push_back(rp_address_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range>();
        c->parent = this;
        range.push_back(std::move(c));
        children[segment_path] = range.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::get_children()
{
    for (auto const & c : range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "expiry-time")
    {
        expiry_time = value;
    }
    if(value_path == "pim-version")
    {
        pim_version = value;
    }
    if(value_path == "rp-address-xr")
    {
        rp_address_xr = value;
    }
}

AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range::Range()
    :
    check_point_object_id{YType::uint32, "check-point-object-id"},
    create_type{YType::uint8, "create-type"},
    is_advertised{YType::boolean, "is-advertised"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    protocol_mode{YType::enumeration, "protocol-mode"},
    uptime{YType::uint64, "uptime"}
{
    yang_name = "range"; yang_parent_name = "rp-address";
}

AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range::~Range()
{
}

bool AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range::has_data() const
{
    return check_point_object_id.is_set
	|| create_type.is_set
	|| is_advertised.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| protocol_mode.is_set
	|| uptime.is_set;
}

bool AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(check_point_object_id.operation)
	|| is_set(create_type.operation)
	|| is_set(is_advertised.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(protocol_mode.operation)
	|| is_set(uptime.operation);
}

std::string AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

EntityPath AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XR_ipv4_autorp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (check_point_object_id.is_set || is_set(check_point_object_id.operation)) leaf_name_data.push_back(check_point_object_id.get_name_leafdata());
    if (create_type.is_set || is_set(create_type.operation)) leaf_name_data.push_back(create_type.get_name_leafdata());
    if (is_advertised.is_set || is_set(is_advertised.operation)) leaf_name_data.push_back(is_advertised.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protocol_mode.is_set || is_set(protocol_mode.operation)) leaf_name_data.push_back(protocol_mode.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range::get_children()
{
    return children;
}

void AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "check-point-object-id")
    {
        check_point_object_id = value;
    }
    if(value_path == "create-type")
    {
        create_type = value;
    }
    if(value_path == "is-advertised")
    {
        is_advertised = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

AutoRp::Standby::MappingAgent::Summary::Summary()
    :
    cache_count{YType::uint32, "cache-count"},
    cache_limit{YType::uint32, "cache-limit"},
    is_maximum_disabled{YType::boolean, "is-maximum-disabled"}
{
    yang_name = "summary"; yang_parent_name = "mapping-agent";
}

AutoRp::Standby::MappingAgent::Summary::~Summary()
{
}

bool AutoRp::Standby::MappingAgent::Summary::has_data() const
{
    return cache_count.is_set
	|| cache_limit.is_set
	|| is_maximum_disabled.is_set;
}

bool AutoRp::Standby::MappingAgent::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_count.operation)
	|| is_set(cache_limit.operation)
	|| is_set(is_maximum_disabled.operation);
}

std::string AutoRp::Standby::MappingAgent::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath AutoRp::Standby::MappingAgent::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/standby/mapping-agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_count.is_set || is_set(cache_count.operation)) leaf_name_data.push_back(cache_count.get_name_leafdata());
    if (cache_limit.is_set || is_set(cache_limit.operation)) leaf_name_data.push_back(cache_limit.get_name_leafdata());
    if (is_maximum_disabled.is_set || is_set(is_maximum_disabled.operation)) leaf_name_data.push_back(is_maximum_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AutoRp::Standby::MappingAgent::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::Standby::MappingAgent::Summary::get_children()
{
    return children;
}

void AutoRp::Standby::MappingAgent::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-count")
    {
        cache_count = value;
    }
    if(value_path == "cache-limit")
    {
        cache_limit = value;
    }
    if(value_path == "is-maximum-disabled")
    {
        is_maximum_disabled = value;
    }
}

AutoRp::Active::Active()
    :
    candidate_rp(std::make_shared<AutoRp::Active::CandidateRp>())
	,mapping_agent(std::make_shared<AutoRp::Active::MappingAgent>())
{
    candidate_rp->parent = this;
    children["candidate-rp"] = candidate_rp;

    mapping_agent->parent = this;
    children["mapping-agent"] = mapping_agent;

    yang_name = "active"; yang_parent_name = "auto-rp";
}

AutoRp::Active::~Active()
{
}

bool AutoRp::Active::has_data() const
{
    return (candidate_rp !=  nullptr && candidate_rp->has_data())
	|| (mapping_agent !=  nullptr && mapping_agent->has_data());
}

bool AutoRp::Active::has_operation() const
{
    return is_set(operation)
	|| (candidate_rp !=  nullptr && candidate_rp->has_operation())
	|| (mapping_agent !=  nullptr && mapping_agent->has_operation());
}

std::string AutoRp::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

EntityPath AutoRp::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AutoRp::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-rp")
    {
        if(candidate_rp != nullptr)
        {
            children["candidate-rp"] = candidate_rp;
        }
        else
        {
            candidate_rp = std::make_shared<AutoRp::Active::CandidateRp>();
            candidate_rp->parent = this;
            children["candidate-rp"] = candidate_rp;
        }
        return children.at("candidate-rp");
    }

    if(child_yang_name == "mapping-agent")
    {
        if(mapping_agent != nullptr)
        {
            children["mapping-agent"] = mapping_agent;
        }
        else
        {
            mapping_agent = std::make_shared<AutoRp::Active::MappingAgent>();
            mapping_agent->parent = this;
            children["mapping-agent"] = mapping_agent;
        }
        return children.at("mapping-agent");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::Active::get_children()
{
    if(children.find("candidate-rp") == children.end())
    {
        if(candidate_rp != nullptr)
        {
            children["candidate-rp"] = candidate_rp;
        }
    }

    if(children.find("mapping-agent") == children.end())
    {
        if(mapping_agent != nullptr)
        {
            children["mapping-agent"] = mapping_agent;
        }
    }

    return children;
}

void AutoRp::Active::set_value(const std::string & value_path, std::string value)
{
}

AutoRp::Active::CandidateRp::CandidateRp()
    :
    rps(std::make_shared<AutoRp::Active::CandidateRp::Rps>())
	,traffic(std::make_shared<AutoRp::Active::CandidateRp::Traffic>())
{
    rps->parent = this;
    children["rps"] = rps;

    traffic->parent = this;
    children["traffic"] = traffic;

    yang_name = "candidate-rp"; yang_parent_name = "active";
}

AutoRp::Active::CandidateRp::~CandidateRp()
{
}

bool AutoRp::Active::CandidateRp::has_data() const
{
    return (rps !=  nullptr && rps->has_data())
	|| (traffic !=  nullptr && traffic->has_data());
}

bool AutoRp::Active::CandidateRp::has_operation() const
{
    return is_set(operation)
	|| (rps !=  nullptr && rps->has_operation())
	|| (traffic !=  nullptr && traffic->has_operation());
}

std::string AutoRp::Active::CandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp";

    return path_buffer.str();

}

EntityPath AutoRp::Active::CandidateRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AutoRp::Active::CandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rps")
    {
        if(rps != nullptr)
        {
            children["rps"] = rps;
        }
        else
        {
            rps = std::make_shared<AutoRp::Active::CandidateRp::Rps>();
            rps->parent = this;
            children["rps"] = rps;
        }
        return children.at("rps");
    }

    if(child_yang_name == "traffic")
    {
        if(traffic != nullptr)
        {
            children["traffic"] = traffic;
        }
        else
        {
            traffic = std::make_shared<AutoRp::Active::CandidateRp::Traffic>();
            traffic->parent = this;
            children["traffic"] = traffic;
        }
        return children.at("traffic");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::Active::CandidateRp::get_children()
{
    if(children.find("rps") == children.end())
    {
        if(rps != nullptr)
        {
            children["rps"] = rps;
        }
    }

    if(children.find("traffic") == children.end())
    {
        if(traffic != nullptr)
        {
            children["traffic"] = traffic;
        }
    }

    return children;
}

void AutoRp::Active::CandidateRp::set_value(const std::string & value_path, std::string value)
{
}

AutoRp::Active::CandidateRp::Traffic::Traffic()
    :
    active_sent_packets{YType::uint32, "active-sent-packets"},
    standby_sent_packets{YType::uint32, "standby-sent-packets"}
{
    yang_name = "traffic"; yang_parent_name = "candidate-rp";
}

AutoRp::Active::CandidateRp::Traffic::~Traffic()
{
}

bool AutoRp::Active::CandidateRp::Traffic::has_data() const
{
    return active_sent_packets.is_set
	|| standby_sent_packets.is_set;
}

bool AutoRp::Active::CandidateRp::Traffic::has_operation() const
{
    return is_set(operation)
	|| is_set(active_sent_packets.operation)
	|| is_set(standby_sent_packets.operation);
}

std::string AutoRp::Active::CandidateRp::Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic";

    return path_buffer.str();

}

EntityPath AutoRp::Active::CandidateRp::Traffic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/active/candidate-rp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_sent_packets.is_set || is_set(active_sent_packets.operation)) leaf_name_data.push_back(active_sent_packets.get_name_leafdata());
    if (standby_sent_packets.is_set || is_set(standby_sent_packets.operation)) leaf_name_data.push_back(standby_sent_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AutoRp::Active::CandidateRp::Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::Active::CandidateRp::Traffic::get_children()
{
    return children;
}

void AutoRp::Active::CandidateRp::Traffic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-sent-packets")
    {
        active_sent_packets = value;
    }
    if(value_path == "standby-sent-packets")
    {
        standby_sent_packets = value;
    }
}

AutoRp::Active::CandidateRp::Rps::Rps()
{
    yang_name = "rps"; yang_parent_name = "candidate-rp";
}

AutoRp::Active::CandidateRp::Rps::~Rps()
{
}

bool AutoRp::Active::CandidateRp::Rps::has_data() const
{
    for (std::size_t index=0; index<rp.size(); index++)
    {
        if(rp[index]->has_data())
            return true;
    }
    return false;
}

bool AutoRp::Active::CandidateRp::Rps::has_operation() const
{
    for (std::size_t index=0; index<rp.size(); index++)
    {
        if(rp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AutoRp::Active::CandidateRp::Rps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rps";

    return path_buffer.str();

}

EntityPath AutoRp::Active::CandidateRp::Rps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/active/candidate-rp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AutoRp::Active::CandidateRp::Rps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rp")
    {
        for(auto const & c : rp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AutoRp::Active::CandidateRp::Rps::Rp>();
        c->parent = this;
        rp.push_back(std::move(c));
        children[segment_path] = rp.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::Active::CandidateRp::Rps::get_children()
{
    for (auto const & c : rp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AutoRp::Active::CandidateRp::Rps::set_value(const std::string & value_path, std::string value)
{
}

AutoRp::Active::CandidateRp::Rps::Rp::Rp()
    :
    access_list_name{YType::str, "access-list-name"},
    announce_period{YType::int32, "announce-period"},
    candidate_rp_address{YType::str, "candidate-rp-address"},
    interface_name{YType::str, "interface-name"},
    protocol_mode{YType::enumeration, "protocol-mode"},
    protocol_mode_xr{YType::enumeration, "protocol-mode-xr"},
    ttl{YType::int32, "ttl"}
{
    yang_name = "rp"; yang_parent_name = "rps";
}

AutoRp::Active::CandidateRp::Rps::Rp::~Rp()
{
}

bool AutoRp::Active::CandidateRp::Rps::Rp::has_data() const
{
    return access_list_name.is_set
	|| announce_period.is_set
	|| candidate_rp_address.is_set
	|| interface_name.is_set
	|| protocol_mode.is_set
	|| protocol_mode_xr.is_set
	|| ttl.is_set;
}

bool AutoRp::Active::CandidateRp::Rps::Rp::has_operation() const
{
    return is_set(operation)
	|| is_set(access_list_name.operation)
	|| is_set(announce_period.operation)
	|| is_set(candidate_rp_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(protocol_mode.operation)
	|| is_set(protocol_mode_xr.operation)
	|| is_set(ttl.operation);
}

std::string AutoRp::Active::CandidateRp::Rps::Rp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp";

    return path_buffer.str();

}

EntityPath AutoRp::Active::CandidateRp::Rps::Rp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/active/candidate-rp/rps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_list_name.is_set || is_set(access_list_name.operation)) leaf_name_data.push_back(access_list_name.get_name_leafdata());
    if (announce_period.is_set || is_set(announce_period.operation)) leaf_name_data.push_back(announce_period.get_name_leafdata());
    if (candidate_rp_address.is_set || is_set(candidate_rp_address.operation)) leaf_name_data.push_back(candidate_rp_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (protocol_mode.is_set || is_set(protocol_mode.operation)) leaf_name_data.push_back(protocol_mode.get_name_leafdata());
    if (protocol_mode_xr.is_set || is_set(protocol_mode_xr.operation)) leaf_name_data.push_back(protocol_mode_xr.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AutoRp::Active::CandidateRp::Rps::Rp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::Active::CandidateRp::Rps::Rp::get_children()
{
    return children;
}

void AutoRp::Active::CandidateRp::Rps::Rp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "access-list-name")
    {
        access_list_name = value;
    }
    if(value_path == "announce-period")
    {
        announce_period = value;
    }
    if(value_path == "candidate-rp-address")
    {
        candidate_rp_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode = value;
    }
    if(value_path == "protocol-mode-xr")
    {
        protocol_mode_xr = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
}

AutoRp::Active::MappingAgent::MappingAgent()
    :
    rp_addresses(std::make_shared<AutoRp::Active::MappingAgent::RpAddresses>())
	,summary(std::make_shared<AutoRp::Active::MappingAgent::Summary>())
	,traffic(std::make_shared<AutoRp::Active::MappingAgent::Traffic>())
{
    rp_addresses->parent = this;
    children["rp-addresses"] = rp_addresses;

    summary->parent = this;
    children["summary"] = summary;

    traffic->parent = this;
    children["traffic"] = traffic;

    yang_name = "mapping-agent"; yang_parent_name = "active";
}

AutoRp::Active::MappingAgent::~MappingAgent()
{
}

bool AutoRp::Active::MappingAgent::has_data() const
{
    return (rp_addresses !=  nullptr && rp_addresses->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (traffic !=  nullptr && traffic->has_data());
}

bool AutoRp::Active::MappingAgent::has_operation() const
{
    return is_set(operation)
	|| (rp_addresses !=  nullptr && rp_addresses->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (traffic !=  nullptr && traffic->has_operation());
}

std::string AutoRp::Active::MappingAgent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mapping-agent";

    return path_buffer.str();

}

EntityPath AutoRp::Active::MappingAgent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AutoRp::Active::MappingAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rp-addresses")
    {
        if(rp_addresses != nullptr)
        {
            children["rp-addresses"] = rp_addresses;
        }
        else
        {
            rp_addresses = std::make_shared<AutoRp::Active::MappingAgent::RpAddresses>();
            rp_addresses->parent = this;
            children["rp-addresses"] = rp_addresses;
        }
        return children.at("rp-addresses");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<AutoRp::Active::MappingAgent::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    if(child_yang_name == "traffic")
    {
        if(traffic != nullptr)
        {
            children["traffic"] = traffic;
        }
        else
        {
            traffic = std::make_shared<AutoRp::Active::MappingAgent::Traffic>();
            traffic->parent = this;
            children["traffic"] = traffic;
        }
        return children.at("traffic");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::Active::MappingAgent::get_children()
{
    if(children.find("rp-addresses") == children.end())
    {
        if(rp_addresses != nullptr)
        {
            children["rp-addresses"] = rp_addresses;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    if(children.find("traffic") == children.end())
    {
        if(traffic != nullptr)
        {
            children["traffic"] = traffic;
        }
    }

    return children;
}

void AutoRp::Active::MappingAgent::set_value(const std::string & value_path, std::string value)
{
}

AutoRp::Active::MappingAgent::Traffic::Traffic()
    :
    active_received_packets{YType::uint32, "active-received-packets"},
    active_sent_packets{YType::uint32, "active-sent-packets"},
    standby_received_packets{YType::uint32, "standby-received-packets"},
    standby_sent_packets{YType::uint32, "standby-sent-packets"}
{
    yang_name = "traffic"; yang_parent_name = "mapping-agent";
}

AutoRp::Active::MappingAgent::Traffic::~Traffic()
{
}

bool AutoRp::Active::MappingAgent::Traffic::has_data() const
{
    return active_received_packets.is_set
	|| active_sent_packets.is_set
	|| standby_received_packets.is_set
	|| standby_sent_packets.is_set;
}

bool AutoRp::Active::MappingAgent::Traffic::has_operation() const
{
    return is_set(operation)
	|| is_set(active_received_packets.operation)
	|| is_set(active_sent_packets.operation)
	|| is_set(standby_received_packets.operation)
	|| is_set(standby_sent_packets.operation);
}

std::string AutoRp::Active::MappingAgent::Traffic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic";

    return path_buffer.str();

}

EntityPath AutoRp::Active::MappingAgent::Traffic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/active/mapping-agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_received_packets.is_set || is_set(active_received_packets.operation)) leaf_name_data.push_back(active_received_packets.get_name_leafdata());
    if (active_sent_packets.is_set || is_set(active_sent_packets.operation)) leaf_name_data.push_back(active_sent_packets.get_name_leafdata());
    if (standby_received_packets.is_set || is_set(standby_received_packets.operation)) leaf_name_data.push_back(standby_received_packets.get_name_leafdata());
    if (standby_sent_packets.is_set || is_set(standby_sent_packets.operation)) leaf_name_data.push_back(standby_sent_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AutoRp::Active::MappingAgent::Traffic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::Active::MappingAgent::Traffic::get_children()
{
    return children;
}

void AutoRp::Active::MappingAgent::Traffic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-received-packets")
    {
        active_received_packets = value;
    }
    if(value_path == "active-sent-packets")
    {
        active_sent_packets = value;
    }
    if(value_path == "standby-received-packets")
    {
        standby_received_packets = value;
    }
    if(value_path == "standby-sent-packets")
    {
        standby_sent_packets = value;
    }
}

AutoRp::Active::MappingAgent::RpAddresses::RpAddresses()
{
    yang_name = "rp-addresses"; yang_parent_name = "mapping-agent";
}

AutoRp::Active::MappingAgent::RpAddresses::~RpAddresses()
{
}

bool AutoRp::Active::MappingAgent::RpAddresses::has_data() const
{
    for (std::size_t index=0; index<rp_address.size(); index++)
    {
        if(rp_address[index]->has_data())
            return true;
    }
    return false;
}

bool AutoRp::Active::MappingAgent::RpAddresses::has_operation() const
{
    for (std::size_t index=0; index<rp_address.size(); index++)
    {
        if(rp_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AutoRp::Active::MappingAgent::RpAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-addresses";

    return path_buffer.str();

}

EntityPath AutoRp::Active::MappingAgent::RpAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/active/mapping-agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AutoRp::Active::MappingAgent::RpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rp-address")
    {
        for(auto const & c : rp_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AutoRp::Active::MappingAgent::RpAddresses::RpAddress>();
        c->parent = this;
        rp_address.push_back(std::move(c));
        children[segment_path] = rp_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::Active::MappingAgent::RpAddresses::get_children()
{
    for (auto const & c : rp_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AutoRp::Active::MappingAgent::RpAddresses::set_value(const std::string & value_path, std::string value)
{
}

AutoRp::Active::MappingAgent::RpAddresses::RpAddress::RpAddress()
    :
    rp_address{YType::str, "rp-address"},
    expiry_time{YType::uint64, "expiry-time"},
    pim_version{YType::uint8, "pim-version"},
    rp_address_xr{YType::str, "rp-address-xr"}
{
    yang_name = "rp-address"; yang_parent_name = "rp-addresses";
}

AutoRp::Active::MappingAgent::RpAddresses::RpAddress::~RpAddress()
{
}

bool AutoRp::Active::MappingAgent::RpAddresses::RpAddress::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return rp_address.is_set
	|| expiry_time.is_set
	|| pim_version.is_set
	|| rp_address_xr.is_set;
}

bool AutoRp::Active::MappingAgent::RpAddresses::RpAddress::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(rp_address.operation)
	|| is_set(expiry_time.operation)
	|| is_set(pim_version.operation)
	|| is_set(rp_address_xr.operation);
}

std::string AutoRp::Active::MappingAgent::RpAddresses::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address" <<"[rp-address='" <<rp_address <<"']";

    return path_buffer.str();

}

EntityPath AutoRp::Active::MappingAgent::RpAddresses::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/active/mapping-agent/rp-addresses/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (expiry_time.is_set || is_set(expiry_time.operation)) leaf_name_data.push_back(expiry_time.get_name_leafdata());
    if (pim_version.is_set || is_set(pim_version.operation)) leaf_name_data.push_back(pim_version.get_name_leafdata());
    if (rp_address_xr.is_set || is_set(rp_address_xr.operation)) leaf_name_data.push_back(rp_address_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AutoRp::Active::MappingAgent::RpAddresses::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range>();
        c->parent = this;
        range.push_back(std::move(c));
        children[segment_path] = range.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::Active::MappingAgent::RpAddresses::RpAddress::get_children()
{
    for (auto const & c : range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void AutoRp::Active::MappingAgent::RpAddresses::RpAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
    }
    if(value_path == "expiry-time")
    {
        expiry_time = value;
    }
    if(value_path == "pim-version")
    {
        pim_version = value;
    }
    if(value_path == "rp-address-xr")
    {
        rp_address_xr = value;
    }
}

AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range::Range()
    :
    check_point_object_id{YType::uint32, "check-point-object-id"},
    create_type{YType::uint8, "create-type"},
    is_advertised{YType::boolean, "is-advertised"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    protocol_mode{YType::enumeration, "protocol-mode"},
    uptime{YType::uint64, "uptime"}
{
    yang_name = "range"; yang_parent_name = "rp-address";
}

AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range::~Range()
{
}

bool AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range::has_data() const
{
    return check_point_object_id.is_set
	|| create_type.is_set
	|| is_advertised.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| protocol_mode.is_set
	|| uptime.is_set;
}

bool AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(check_point_object_id.operation)
	|| is_set(create_type.operation)
	|| is_set(is_advertised.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(protocol_mode.operation)
	|| is_set(uptime.operation);
}

std::string AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

EntityPath AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XR_ipv4_autorp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (check_point_object_id.is_set || is_set(check_point_object_id.operation)) leaf_name_data.push_back(check_point_object_id.get_name_leafdata());
    if (create_type.is_set || is_set(create_type.operation)) leaf_name_data.push_back(create_type.get_name_leafdata());
    if (is_advertised.is_set || is_set(is_advertised.operation)) leaf_name_data.push_back(is_advertised.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protocol_mode.is_set || is_set(protocol_mode.operation)) leaf_name_data.push_back(protocol_mode.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range::get_children()
{
    return children;
}

void AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "check-point-object-id")
    {
        check_point_object_id = value;
    }
    if(value_path == "create-type")
    {
        create_type = value;
    }
    if(value_path == "is-advertised")
    {
        is_advertised = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "protocol-mode")
    {
        protocol_mode = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

AutoRp::Active::MappingAgent::Summary::Summary()
    :
    cache_count{YType::uint32, "cache-count"},
    cache_limit{YType::uint32, "cache-limit"},
    is_maximum_disabled{YType::boolean, "is-maximum-disabled"}
{
    yang_name = "summary"; yang_parent_name = "mapping-agent";
}

AutoRp::Active::MappingAgent::Summary::~Summary()
{
}

bool AutoRp::Active::MappingAgent::Summary::has_data() const
{
    return cache_count.is_set
	|| cache_limit.is_set
	|| is_maximum_disabled.is_set;
}

bool AutoRp::Active::MappingAgent::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(cache_count.operation)
	|| is_set(cache_limit.operation)
	|| is_set(is_maximum_disabled.operation);
}

std::string AutoRp::Active::MappingAgent::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath AutoRp::Active::MappingAgent::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/active/mapping-agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_count.is_set || is_set(cache_count.operation)) leaf_name_data.push_back(cache_count.get_name_leafdata());
    if (cache_limit.is_set || is_set(cache_limit.operation)) leaf_name_data.push_back(cache_limit.get_name_leafdata());
    if (is_maximum_disabled.is_set || is_set(is_maximum_disabled.operation)) leaf_name_data.push_back(is_maximum_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> AutoRp::Active::MappingAgent::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & AutoRp::Active::MappingAgent::Summary::get_children()
{
    return children;
}

void AutoRp::Active::MappingAgent::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache-count")
    {
        cache_count = value;
    }
    if(value_path == "cache-limit")
    {
        cache_limit = value;
    }
    if(value_path == "is-maximum-disabled")
    {
        is_maximum_disabled = value;
    }
}

const Enum::YLeaf AutorpProtocolModeEnum::sparse {0, "sparse"};
const Enum::YLeaf AutorpProtocolModeEnum::bidirectional {1, "bidirectional"};


}
}

