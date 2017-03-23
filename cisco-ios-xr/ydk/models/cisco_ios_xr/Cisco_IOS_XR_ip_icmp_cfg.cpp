
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_icmp_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_icmp_cfg {

Icmp::Icmp()
{
    yang_name = "icmp"; yang_parent_name = "Cisco-IOS-XR-ip-icmp-cfg";
}

Icmp::~Icmp()
{
}

bool Icmp::has_data() const
{
    for (std::size_t index=0; index<ip_protocol.size(); index++)
    {
        if(ip_protocol[index]->has_data())
            return true;
    }
    return false;
}

bool Icmp::has_operation() const
{
    for (std::size_t index=0; index<ip_protocol.size(); index++)
    {
        if(ip_protocol[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Icmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-icmp-cfg:icmp";

    return path_buffer.str();

}

EntityPath Icmp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Icmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-protocol")
    {
        for(auto const & c : ip_protocol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Icmp::IpProtocol>();
        c->parent = this;
        ip_protocol.push_back(std::move(c));
        children[segment_path] = ip_protocol.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Icmp::get_children()
{
    for (auto const & c : ip_protocol)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Icmp::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Icmp::clone_ptr() const
{
    return std::make_shared<Icmp>();
}

std::string Icmp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Icmp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Icmp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Icmp::IpProtocol::IpProtocol()
    :
    protocol_type{YType::str, "protocol-type"}
    	,
    rate_limit(std::make_shared<Icmp::IpProtocol::RateLimit>())
	,source(std::make_shared<Icmp::IpProtocol::Source>())
{
    rate_limit->parent = this;
    children["rate-limit"] = rate_limit;

    source->parent = this;
    children["source"] = source;

    yang_name = "ip-protocol"; yang_parent_name = "icmp";
}

Icmp::IpProtocol::~IpProtocol()
{
}

bool Icmp::IpProtocol::has_data() const
{
    return protocol_type.is_set
	|| (rate_limit !=  nullptr && rate_limit->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Icmp::IpProtocol::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol_type.operation)
	|| (rate_limit !=  nullptr && rate_limit->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Icmp::IpProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-protocol" <<"[protocol-type='" <<protocol_type <<"']";

    return path_buffer.str();

}

EntityPath Icmp::IpProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-icmp-cfg:icmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_type.is_set || is_set(protocol_type.operation)) leaf_name_data.push_back(protocol_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Icmp::IpProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rate-limit")
    {
        if(rate_limit != nullptr)
        {
            children["rate-limit"] = rate_limit;
        }
        else
        {
            rate_limit = std::make_shared<Icmp::IpProtocol::RateLimit>();
            rate_limit->parent = this;
            children["rate-limit"] = rate_limit;
        }
        return children.at("rate-limit");
    }

    if(child_yang_name == "source")
    {
        if(source != nullptr)
        {
            children["source"] = source;
        }
        else
        {
            source = std::make_shared<Icmp::IpProtocol::Source>();
            source->parent = this;
            children["source"] = source;
        }
        return children.at("source");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Icmp::IpProtocol::get_children()
{
    if(children.find("rate-limit") == children.end())
    {
        if(rate_limit != nullptr)
        {
            children["rate-limit"] = rate_limit;
        }
    }

    if(children.find("source") == children.end())
    {
        if(source != nullptr)
        {
            children["source"] = source;
        }
    }

    return children;
}

void Icmp::IpProtocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol-type")
    {
        protocol_type = value;
    }
}

Icmp::IpProtocol::RateLimit::RateLimit()
    :
    unreachable(std::make_shared<Icmp::IpProtocol::RateLimit::Unreachable>())
{
    unreachable->parent = this;
    children["unreachable"] = unreachable;

    yang_name = "rate-limit"; yang_parent_name = "ip-protocol";
}

Icmp::IpProtocol::RateLimit::~RateLimit()
{
}

bool Icmp::IpProtocol::RateLimit::has_data() const
{
    return (unreachable !=  nullptr && unreachable->has_data());
}

bool Icmp::IpProtocol::RateLimit::has_operation() const
{
    return is_set(operation)
	|| (unreachable !=  nullptr && unreachable->has_operation());
}

std::string Icmp::IpProtocol::RateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate-limit";

    return path_buffer.str();

}

EntityPath Icmp::IpProtocol::RateLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RateLimit' in Cisco_IOS_XR_ip_icmp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Icmp::IpProtocol::RateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "unreachable")
    {
        if(unreachable != nullptr)
        {
            children["unreachable"] = unreachable;
        }
        else
        {
            unreachable = std::make_shared<Icmp::IpProtocol::RateLimit::Unreachable>();
            unreachable->parent = this;
            children["unreachable"] = unreachable;
        }
        return children.at("unreachable");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Icmp::IpProtocol::RateLimit::get_children()
{
    if(children.find("unreachable") == children.end())
    {
        if(unreachable != nullptr)
        {
            children["unreachable"] = unreachable;
        }
    }

    return children;
}

void Icmp::IpProtocol::RateLimit::set_value(const std::string & value_path, std::string value)
{
}

Icmp::IpProtocol::RateLimit::Unreachable::Unreachable()
    :
    fragmentation{YType::uint32, "fragmentation"},
    rate{YType::uint32, "rate"}
{
    yang_name = "unreachable"; yang_parent_name = "rate-limit";
}

Icmp::IpProtocol::RateLimit::Unreachable::~Unreachable()
{
}

bool Icmp::IpProtocol::RateLimit::Unreachable::has_data() const
{
    return fragmentation.is_set
	|| rate.is_set;
}

bool Icmp::IpProtocol::RateLimit::Unreachable::has_operation() const
{
    return is_set(operation)
	|| is_set(fragmentation.operation)
	|| is_set(rate.operation);
}

std::string Icmp::IpProtocol::RateLimit::Unreachable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unreachable";

    return path_buffer.str();

}

EntityPath Icmp::IpProtocol::RateLimit::Unreachable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unreachable' in Cisco_IOS_XR_ip_icmp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fragmentation.is_set || is_set(fragmentation.operation)) leaf_name_data.push_back(fragmentation.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Icmp::IpProtocol::RateLimit::Unreachable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Icmp::IpProtocol::RateLimit::Unreachable::get_children()
{
    return children;
}

void Icmp::IpProtocol::RateLimit::Unreachable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fragmentation")
    {
        fragmentation = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
}

Icmp::IpProtocol::Source::Source()
    :
    source_address_policy{YType::enumeration, "source-address-policy"}
{
    yang_name = "source"; yang_parent_name = "ip-protocol";
}

Icmp::IpProtocol::Source::~Source()
{
}

bool Icmp::IpProtocol::Source::has_data() const
{
    return source_address_policy.is_set;
}

bool Icmp::IpProtocol::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(source_address_policy.operation);
}

std::string Icmp::IpProtocol::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

EntityPath Icmp::IpProtocol::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XR_ip_icmp_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address_policy.is_set || is_set(source_address_policy.operation)) leaf_name_data.push_back(source_address_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Icmp::IpProtocol::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Icmp::IpProtocol::Source::get_children()
{
    return children;
}

void Icmp::IpProtocol::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address-policy")
    {
        source_address_policy = value;
    }
}

const Enum::YLeaf SourcePolicyEnum::vrf {1, "vrf"};
const Enum::YLeaf SourcePolicyEnum::rfc {2, "rfc"};


}
}

