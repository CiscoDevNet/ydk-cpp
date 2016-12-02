
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ipv4_autorp_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_autorp_oper {

AutoRp::Standby::CandidateRps::CandidateRp::CandidateRp()
    :
    	access_list_name{YType::str, "access-list-name"},
	 announce_period{YType::int32, "announce-period"},
	 candidate_rp_address{YType::str, "candidate-rp-address"},
	 interface_name{YType::str, "interface-name"},
	 protocol_mode{YType::enumeration, "protocol-mode"},
	 protocol_mode_xr{YType::enumeration, "protocol-mode-xr"},
	 ttl{YType::int32, "ttl"}
{
    yang_name = "candidate-rp"; yang_parent_name = "candidate-rps";
}

AutoRp::Standby::CandidateRps::CandidateRp::~CandidateRp()
{
}

bool AutoRp::Standby::CandidateRps::CandidateRp::has_data() const
{
    return access_list_name.is_set
	|| announce_period.is_set
	|| candidate_rp_address.is_set
	|| interface_name.is_set
	|| protocol_mode.is_set
	|| protocol_mode_xr.is_set
	|| ttl.is_set;
}

bool AutoRp::Standby::CandidateRps::CandidateRp::has_operation() const
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

std::string AutoRp::Standby::CandidateRps::CandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp";

    return path_buffer.str();

}

EntityPath AutoRp::Standby::CandidateRps::CandidateRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/standby/candidate-rps/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* AutoRp::Standby::CandidateRps::CandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & AutoRp::Standby::CandidateRps::CandidateRp::get_children()
{
    return children;
}

void AutoRp::Standby::CandidateRps::CandidateRp::set_value(const std::string & value_path, std::string value)
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

AutoRp::Standby::CandidateRps::CandidateRps()
{
    yang_name = "candidate-rps"; yang_parent_name = "standby";
}

AutoRp::Standby::CandidateRps::~CandidateRps()
{
}

bool AutoRp::Standby::CandidateRps::has_data() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_data())
            return true;
    }
    return false;
}

bool AutoRp::Standby::CandidateRps::has_operation() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AutoRp::Standby::CandidateRps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rps";

    return path_buffer.str();

}

EntityPath AutoRp::Standby::CandidateRps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/standby/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AutoRp::Standby::CandidateRps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        for(auto const & c : candidate_rp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<AutoRp::Standby::CandidateRps::CandidateRp>();
        c->parent = this;
        candidate_rp.push_back(std::move(c));
        children[segment_path] = candidate_rp.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & AutoRp::Standby::CandidateRps::get_children()
{
    for (auto const & c : candidate_rp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void AutoRp::Standby::CandidateRps::set_value(const std::string & value_path, std::string value)
{
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range::get_children()
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
    path_buffer << "rp-address" <<"[rp-address='" <<rp_address.get() <<"']";

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
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (expiry_time.is_set || is_set(expiry_time.operation)) leaf_name_data.push_back(expiry_time.get_name_leafdata());
    if (pim_version.is_set || is_set(pim_version.operation)) leaf_name_data.push_back(pim_version.get_name_leafdata());
    if (rp_address_xr.is_set || is_set(rp_address_xr.operation)) leaf_name_data.push_back(rp_address_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::Range>();
        c->parent = this;
        range.push_back(std::move(c));
        children[segment_path] = range.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & AutoRp::Standby::MappingAgent::RpAddresses::RpAddress::get_children()
{
    for (auto const & c : range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
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
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AutoRp::Standby::MappingAgent::RpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<AutoRp::Standby::MappingAgent::RpAddresses::RpAddress>();
        c->parent = this;
        rp_address.push_back(std::move(c));
        children[segment_path] = rp_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & AutoRp::Standby::MappingAgent::RpAddresses::get_children()
{
    for (auto const & c : rp_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void AutoRp::Standby::MappingAgent::RpAddresses::set_value(const std::string & value_path, std::string value)
{
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
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_count.is_set || is_set(cache_count.operation)) leaf_name_data.push_back(cache_count.get_name_leafdata());
    if (cache_limit.is_set || is_set(cache_limit.operation)) leaf_name_data.push_back(cache_limit.get_name_leafdata());
    if (is_maximum_disabled.is_set || is_set(is_maximum_disabled.operation)) leaf_name_data.push_back(is_maximum_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AutoRp::Standby::MappingAgent::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & AutoRp::Standby::MappingAgent::Summary::get_children()
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

AutoRp::Standby::MappingAgent::MappingAgent()
    :
    rp_addresses(std::make_unique<AutoRp::Standby::MappingAgent::RpAddresses>())
	,summary(std::make_unique<AutoRp::Standby::MappingAgent::Summary>())
{
    rp_addresses->parent = this;
    children["rp-addresses"] = rp_addresses.get();

    summary->parent = this;
    children["summary"] = summary.get();

    yang_name = "mapping-agent"; yang_parent_name = "standby";
}

AutoRp::Standby::MappingAgent::~MappingAgent()
{
}

bool AutoRp::Standby::MappingAgent::has_data() const
{
    return (rp_addresses !=  nullptr && rp_addresses->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool AutoRp::Standby::MappingAgent::has_operation() const
{
    return is_set(operation)
	|| (rp_addresses !=  nullptr && is_set(rp_addresses->operation))
	|| (summary !=  nullptr && is_set(summary->operation));
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
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AutoRp::Standby::MappingAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["rp-addresses"] = rp_addresses.get();
        }
        else
        {
            rp_addresses = std::make_unique<AutoRp::Standby::MappingAgent::RpAddresses>();
            rp_addresses->parent = this;
            children["rp-addresses"] = rp_addresses.get();
        }
        return children.at("rp-addresses");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
        else
        {
            summary = std::make_unique<AutoRp::Standby::MappingAgent::Summary>();
            summary->parent = this;
            children["summary"] = summary.get();
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, Entity*> & AutoRp::Standby::MappingAgent::get_children()
{
    if(children.find("rp-addresses") == children.end())
    {
        if(rp_addresses != nullptr)
        {
            children["rp-addresses"] = rp_addresses.get();
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
    }

    return children;
}

void AutoRp::Standby::MappingAgent::set_value(const std::string & value_path, std::string value)
{
}

AutoRp::Standby::Standby()
    :
    candidate_rps(std::make_unique<AutoRp::Standby::CandidateRps>())
	,mapping_agent(std::make_unique<AutoRp::Standby::MappingAgent>())
{
    candidate_rps->parent = this;
    children["candidate-rps"] = candidate_rps.get();

    mapping_agent->parent = this;
    children["mapping-agent"] = mapping_agent.get();

    yang_name = "standby"; yang_parent_name = "auto-rp";
}

AutoRp::Standby::~Standby()
{
}

bool AutoRp::Standby::has_data() const
{
    return (candidate_rps !=  nullptr && candidate_rps->has_data())
	|| (mapping_agent !=  nullptr && mapping_agent->has_data());
}

bool AutoRp::Standby::has_operation() const
{
    return is_set(operation)
	|| (candidate_rps !=  nullptr && is_set(candidate_rps->operation))
	|| (mapping_agent !=  nullptr && is_set(mapping_agent->operation));
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
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AutoRp::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-rps")
    {
        if(candidate_rps != nullptr)
        {
            children["candidate-rps"] = candidate_rps.get();
        }
        else
        {
            candidate_rps = std::make_unique<AutoRp::Standby::CandidateRps>();
            candidate_rps->parent = this;
            children["candidate-rps"] = candidate_rps.get();
        }
        return children.at("candidate-rps");
    }

    if(child_yang_name == "mapping-agent")
    {
        if(mapping_agent != nullptr)
        {
            children["mapping-agent"] = mapping_agent.get();
        }
        else
        {
            mapping_agent = std::make_unique<AutoRp::Standby::MappingAgent>();
            mapping_agent->parent = this;
            children["mapping-agent"] = mapping_agent.get();
        }
        return children.at("mapping-agent");
    }

    return nullptr;
}

std::map<std::string, Entity*> & AutoRp::Standby::get_children()
{
    if(children.find("candidate-rps") == children.end())
    {
        if(candidate_rps != nullptr)
        {
            children["candidate-rps"] = candidate_rps.get();
        }
    }

    if(children.find("mapping-agent") == children.end())
    {
        if(mapping_agent != nullptr)
        {
            children["mapping-agent"] = mapping_agent.get();
        }
    }

    return children;
}

void AutoRp::Standby::set_value(const std::string & value_path, std::string value)
{
}

AutoRp::Active::CandidateRps::CandidateRp::CandidateRp()
    :
    	access_list_name{YType::str, "access-list-name"},
	 announce_period{YType::int32, "announce-period"},
	 candidate_rp_address{YType::str, "candidate-rp-address"},
	 interface_name{YType::str, "interface-name"},
	 protocol_mode{YType::enumeration, "protocol-mode"},
	 protocol_mode_xr{YType::enumeration, "protocol-mode-xr"},
	 ttl{YType::int32, "ttl"}
{
    yang_name = "candidate-rp"; yang_parent_name = "candidate-rps";
}

AutoRp::Active::CandidateRps::CandidateRp::~CandidateRp()
{
}

bool AutoRp::Active::CandidateRps::CandidateRp::has_data() const
{
    return access_list_name.is_set
	|| announce_period.is_set
	|| candidate_rp_address.is_set
	|| interface_name.is_set
	|| protocol_mode.is_set
	|| protocol_mode_xr.is_set
	|| ttl.is_set;
}

bool AutoRp::Active::CandidateRps::CandidateRp::has_operation() const
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

std::string AutoRp::Active::CandidateRps::CandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp";

    return path_buffer.str();

}

EntityPath AutoRp::Active::CandidateRps::CandidateRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/active/candidate-rps/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* AutoRp::Active::CandidateRps::CandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & AutoRp::Active::CandidateRps::CandidateRp::get_children()
{
    return children;
}

void AutoRp::Active::CandidateRps::CandidateRp::set_value(const std::string & value_path, std::string value)
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

AutoRp::Active::CandidateRps::CandidateRps()
{
    yang_name = "candidate-rps"; yang_parent_name = "active";
}

AutoRp::Active::CandidateRps::~CandidateRps()
{
}

bool AutoRp::Active::CandidateRps::has_data() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_data())
            return true;
    }
    return false;
}

bool AutoRp::Active::CandidateRps::has_operation() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string AutoRp::Active::CandidateRps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rps";

    return path_buffer.str();

}

EntityPath AutoRp::Active::CandidateRps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-autorp-oper:auto-rp/active/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AutoRp::Active::CandidateRps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        for(auto const & c : candidate_rp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<AutoRp::Active::CandidateRps::CandidateRp>();
        c->parent = this;
        candidate_rp.push_back(std::move(c));
        children[segment_path] = candidate_rp.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & AutoRp::Active::CandidateRps::get_children()
{
    for (auto const & c : candidate_rp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void AutoRp::Active::CandidateRps::set_value(const std::string & value_path, std::string value)
{
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
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

Entity* AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range::get_children()
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
    path_buffer << "rp-address" <<"[rp-address='" <<rp_address.get() <<"']";

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
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.operation)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (expiry_time.is_set || is_set(expiry_time.operation)) leaf_name_data.push_back(expiry_time.get_name_leafdata());
    if (pim_version.is_set || is_set(pim_version.operation)) leaf_name_data.push_back(pim_version.get_name_leafdata());
    if (rp_address_xr.is_set || is_set(rp_address_xr.operation)) leaf_name_data.push_back(rp_address_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AutoRp::Active::MappingAgent::RpAddresses::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<AutoRp::Active::MappingAgent::RpAddresses::RpAddress::Range>();
        c->parent = this;
        range.push_back(std::move(c));
        children[segment_path] = range.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & AutoRp::Active::MappingAgent::RpAddresses::RpAddress::get_children()
{
    for (auto const & c : range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
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
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AutoRp::Active::MappingAgent::RpAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<AutoRp::Active::MappingAgent::RpAddresses::RpAddress>();
        c->parent = this;
        rp_address.push_back(std::move(c));
        children[segment_path] = rp_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & AutoRp::Active::MappingAgent::RpAddresses::get_children()
{
    for (auto const & c : rp_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void AutoRp::Active::MappingAgent::RpAddresses::set_value(const std::string & value_path, std::string value)
{
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
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache_count.is_set || is_set(cache_count.operation)) leaf_name_data.push_back(cache_count.get_name_leafdata());
    if (cache_limit.is_set || is_set(cache_limit.operation)) leaf_name_data.push_back(cache_limit.get_name_leafdata());
    if (is_maximum_disabled.is_set || is_set(is_maximum_disabled.operation)) leaf_name_data.push_back(is_maximum_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AutoRp::Active::MappingAgent::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & AutoRp::Active::MappingAgent::Summary::get_children()
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

AutoRp::Active::MappingAgent::MappingAgent()
    :
    rp_addresses(std::make_unique<AutoRp::Active::MappingAgent::RpAddresses>())
	,summary(std::make_unique<AutoRp::Active::MappingAgent::Summary>())
{
    rp_addresses->parent = this;
    children["rp-addresses"] = rp_addresses.get();

    summary->parent = this;
    children["summary"] = summary.get();

    yang_name = "mapping-agent"; yang_parent_name = "active";
}

AutoRp::Active::MappingAgent::~MappingAgent()
{
}

bool AutoRp::Active::MappingAgent::has_data() const
{
    return (rp_addresses !=  nullptr && rp_addresses->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool AutoRp::Active::MappingAgent::has_operation() const
{
    return is_set(operation)
	|| (rp_addresses !=  nullptr && is_set(rp_addresses->operation))
	|| (summary !=  nullptr && is_set(summary->operation));
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
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AutoRp::Active::MappingAgent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["rp-addresses"] = rp_addresses.get();
        }
        else
        {
            rp_addresses = std::make_unique<AutoRp::Active::MappingAgent::RpAddresses>();
            rp_addresses->parent = this;
            children["rp-addresses"] = rp_addresses.get();
        }
        return children.at("rp-addresses");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
        else
        {
            summary = std::make_unique<AutoRp::Active::MappingAgent::Summary>();
            summary->parent = this;
            children["summary"] = summary.get();
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, Entity*> & AutoRp::Active::MappingAgent::get_children()
{
    if(children.find("rp-addresses") == children.end())
    {
        if(rp_addresses != nullptr)
        {
            children["rp-addresses"] = rp_addresses.get();
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
    }

    return children;
}

void AutoRp::Active::MappingAgent::set_value(const std::string & value_path, std::string value)
{
}

AutoRp::Active::Active()
    :
    candidate_rps(std::make_unique<AutoRp::Active::CandidateRps>())
	,mapping_agent(std::make_unique<AutoRp::Active::MappingAgent>())
{
    candidate_rps->parent = this;
    children["candidate-rps"] = candidate_rps.get();

    mapping_agent->parent = this;
    children["mapping-agent"] = mapping_agent.get();

    yang_name = "active"; yang_parent_name = "auto-rp";
}

AutoRp::Active::~Active()
{
}

bool AutoRp::Active::has_data() const
{
    return (candidate_rps !=  nullptr && candidate_rps->has_data())
	|| (mapping_agent !=  nullptr && mapping_agent->has_data());
}

bool AutoRp::Active::has_operation() const
{
    return is_set(operation)
	|| (candidate_rps !=  nullptr && is_set(candidate_rps->operation))
	|| (mapping_agent !=  nullptr && is_set(mapping_agent->operation));
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
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AutoRp::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-rps")
    {
        if(candidate_rps != nullptr)
        {
            children["candidate-rps"] = candidate_rps.get();
        }
        else
        {
            candidate_rps = std::make_unique<AutoRp::Active::CandidateRps>();
            candidate_rps->parent = this;
            children["candidate-rps"] = candidate_rps.get();
        }
        return children.at("candidate-rps");
    }

    if(child_yang_name == "mapping-agent")
    {
        if(mapping_agent != nullptr)
        {
            children["mapping-agent"] = mapping_agent.get();
        }
        else
        {
            mapping_agent = std::make_unique<AutoRp::Active::MappingAgent>();
            mapping_agent->parent = this;
            children["mapping-agent"] = mapping_agent.get();
        }
        return children.at("mapping-agent");
    }

    return nullptr;
}

std::map<std::string, Entity*> & AutoRp::Active::get_children()
{
    if(children.find("candidate-rps") == children.end())
    {
        if(candidate_rps != nullptr)
        {
            children["candidate-rps"] = candidate_rps.get();
        }
    }

    if(children.find("mapping-agent") == children.end())
    {
        if(mapping_agent != nullptr)
        {
            children["mapping-agent"] = mapping_agent.get();
        }
    }

    return children;
}

void AutoRp::Active::set_value(const std::string & value_path, std::string value)
{
}

AutoRp::AutoRp()
    :
    active(std::make_unique<AutoRp::Active>())
	,standby(std::make_unique<AutoRp::Standby>())
{
    active->parent = this;
    children["active"] = active.get();

    standby->parent = this;
    children["standby"] = standby.get();

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
	|| (active !=  nullptr && is_set(active->operation))
	|| (standby !=  nullptr && is_set(standby->operation));
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
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* AutoRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["active"] = active.get();
        }
        else
        {
            active = std::make_unique<AutoRp::Active>();
            active->parent = this;
            children["active"] = active.get();
        }
        return children.at("active");
    }

    if(child_yang_name == "standby")
    {
        if(standby != nullptr)
        {
            children["standby"] = standby.get();
        }
        else
        {
            standby = std::make_unique<AutoRp::Standby>();
            standby->parent = this;
            children["standby"] = standby.get();
        }
        return children.at("standby");
    }

    return nullptr;
}

std::map<std::string, Entity*> & AutoRp::get_children()
{
    if(children.find("active") == children.end())
    {
        if(active != nullptr)
        {
            children["active"] = active.get();
        }
    }

    if(children.find("standby") == children.end())
    {
        if(standby != nullptr)
        {
            children["standby"] = standby.get();
        }
    }

    return children;
}

void AutoRp::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> AutoRp::clone_ptr()
{
    return std::make_unique<AutoRp>();
}

const Enum::Value AutorpProtocolModeEnum::sparse {0, "sparse"};
const Enum::Value AutorpProtocolModeEnum::bidirectional {1, "bidirectional"};


}
}

