
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rib_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_rib_cfg {

Rib::Rib()
    :
    max_recursion_depth{YType::uint32, "max-recursion-depth"}
    	,
    af(std::make_shared<Rib::Af>())
{
    af->parent = this;
    children["af"] = af;

    yang_name = "rib"; yang_parent_name = "Cisco-IOS-XR-ip-rib-cfg";
}

Rib::~Rib()
{
}

bool Rib::has_data() const
{
    return max_recursion_depth.is_set
	|| (af !=  nullptr && af->has_data());
}

bool Rib::has_operation() const
{
    return is_set(operation)
	|| is_set(max_recursion_depth.operation)
	|| (af !=  nullptr && af->has_operation());
}

std::string Rib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rib-cfg:rib";

    return path_buffer.str();

}

EntityPath Rib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_recursion_depth.is_set || is_set(max_recursion_depth.operation)) leaf_name_data.push_back(max_recursion_depth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af")
    {
        if(af != nullptr)
        {
            children["af"] = af;
        }
        else
        {
            af = std::make_shared<Rib::Af>();
            af->parent = this;
            children["af"] = af;
        }
        return children.at("af");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::get_children()
{
    if(children.find("af") == children.end())
    {
        if(af != nullptr)
        {
            children["af"] = af;
        }
    }

    return children;
}

void Rib::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-recursion-depth")
    {
        max_recursion_depth = value;
    }
}

std::shared_ptr<Entity> Rib::clone_ptr() const
{
    return std::make_shared<Rib>();
}

std::string Rib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Rib::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Rib::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Rib::Af::Af()
    :
    ipv4(std::make_shared<Rib::Af::Ipv4>())
	,ipv6(std::make_shared<Rib::Af::Ipv6>())
{
    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv6->parent = this;
    children["ipv6"] = ipv6;

    yang_name = "af"; yang_parent_name = "rib";
}

Rib::Af::~Af()
{
}

bool Rib::Af::has_data() const
{
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Rib::Af::has_operation() const
{
    return is_set(operation)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Rib::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";

    return path_buffer.str();

}

EntityPath Rib::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rib-cfg:rib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            ipv4 = std::make_shared<Rib::Af::Ipv4>();
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
            ipv6 = std::make_shared<Rib::Af::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6;
        }
        return children.at("ipv6");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Af::get_children()
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

void Rib::Af::set_value(const std::string & value_path, std::string value)
{
}

Rib::Af::Ipv4::Ipv4()
    :
    next_hop_dampening_disable{YType::empty, "next-hop-dampening-disable"}
    	,
    redistribution_history(std::make_shared<Rib::Af::Ipv4::RedistributionHistory>())
{
    redistribution_history->parent = this;
    children["redistribution-history"] = redistribution_history;

    yang_name = "ipv4"; yang_parent_name = "af";
}

Rib::Af::Ipv4::~Ipv4()
{
}

bool Rib::Af::Ipv4::has_data() const
{
    return next_hop_dampening_disable.is_set
	|| (redistribution_history !=  nullptr && redistribution_history->has_data());
}

bool Rib::Af::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_dampening_disable.operation)
	|| (redistribution_history !=  nullptr && redistribution_history->has_operation());
}

std::string Rib::Af::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath Rib::Af::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rib-cfg:rib/af/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_dampening_disable.is_set || is_set(next_hop_dampening_disable.operation)) leaf_name_data.push_back(next_hop_dampening_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Af::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "redistribution-history")
    {
        if(redistribution_history != nullptr)
        {
            children["redistribution-history"] = redistribution_history;
        }
        else
        {
            redistribution_history = std::make_shared<Rib::Af::Ipv4::RedistributionHistory>();
            redistribution_history->parent = this;
            children["redistribution-history"] = redistribution_history;
        }
        return children.at("redistribution-history");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Af::Ipv4::get_children()
{
    if(children.find("redistribution-history") == children.end())
    {
        if(redistribution_history != nullptr)
        {
            children["redistribution-history"] = redistribution_history;
        }
    }

    return children;
}

void Rib::Af::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-dampening-disable")
    {
        next_hop_dampening_disable = value;
    }
}

Rib::Af::Ipv4::RedistributionHistory::RedistributionHistory()
    :
    bcdl_client{YType::uint32, "bcdl-client"},
    protocol_client{YType::uint32, "protocol-client"}
    	,
    keep(std::make_shared<Rib::Af::Ipv4::RedistributionHistory::Keep>())
{
    keep->parent = this;
    children["keep"] = keep;

    yang_name = "redistribution-history"; yang_parent_name = "ipv4";
}

Rib::Af::Ipv4::RedistributionHistory::~RedistributionHistory()
{
}

bool Rib::Af::Ipv4::RedistributionHistory::has_data() const
{
    return bcdl_client.is_set
	|| protocol_client.is_set
	|| (keep !=  nullptr && keep->has_data());
}

bool Rib::Af::Ipv4::RedistributionHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(bcdl_client.operation)
	|| is_set(protocol_client.operation)
	|| (keep !=  nullptr && keep->has_operation());
}

std::string Rib::Af::Ipv4::RedistributionHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution-history";

    return path_buffer.str();

}

EntityPath Rib::Af::Ipv4::RedistributionHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rib-cfg:rib/af/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bcdl_client.is_set || is_set(bcdl_client.operation)) leaf_name_data.push_back(bcdl_client.get_name_leafdata());
    if (protocol_client.is_set || is_set(protocol_client.operation)) leaf_name_data.push_back(protocol_client.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Af::Ipv4::RedistributionHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "keep")
    {
        if(keep != nullptr)
        {
            children["keep"] = keep;
        }
        else
        {
            keep = std::make_shared<Rib::Af::Ipv4::RedistributionHistory::Keep>();
            keep->parent = this;
            children["keep"] = keep;
        }
        return children.at("keep");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Af::Ipv4::RedistributionHistory::get_children()
{
    if(children.find("keep") == children.end())
    {
        if(keep != nullptr)
        {
            children["keep"] = keep;
        }
    }

    return children;
}

void Rib::Af::Ipv4::RedistributionHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bcdl-client")
    {
        bcdl_client = value;
    }
    if(value_path == "protocol-client")
    {
        protocol_client = value;
    }
}

Rib::Af::Ipv4::RedistributionHistory::Keep::Keep()
    :
    bcdl{YType::empty, "bcdl"}
{
    yang_name = "keep"; yang_parent_name = "redistribution-history";
}

Rib::Af::Ipv4::RedistributionHistory::Keep::~Keep()
{
}

bool Rib::Af::Ipv4::RedistributionHistory::Keep::has_data() const
{
    return bcdl.is_set;
}

bool Rib::Af::Ipv4::RedistributionHistory::Keep::has_operation() const
{
    return is_set(operation)
	|| is_set(bcdl.operation);
}

std::string Rib::Af::Ipv4::RedistributionHistory::Keep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keep";

    return path_buffer.str();

}

EntityPath Rib::Af::Ipv4::RedistributionHistory::Keep::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rib-cfg:rib/af/ipv4/redistribution-history/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bcdl.is_set || is_set(bcdl.operation)) leaf_name_data.push_back(bcdl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Af::Ipv4::RedistributionHistory::Keep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::Af::Ipv4::RedistributionHistory::Keep::get_children()
{
    return children;
}

void Rib::Af::Ipv4::RedistributionHistory::Keep::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bcdl")
    {
        bcdl = value;
    }
}

Rib::Af::Ipv6::Ipv6()
    :
    next_hop_dampening_disable{YType::empty, "next-hop-dampening-disable"}
    	,
    redistribution_history(std::make_shared<Rib::Af::Ipv6::RedistributionHistory>())
{
    redistribution_history->parent = this;
    children["redistribution-history"] = redistribution_history;

    yang_name = "ipv6"; yang_parent_name = "af";
}

Rib::Af::Ipv6::~Ipv6()
{
}

bool Rib::Af::Ipv6::has_data() const
{
    return next_hop_dampening_disable.is_set
	|| (redistribution_history !=  nullptr && redistribution_history->has_data());
}

bool Rib::Af::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_dampening_disable.operation)
	|| (redistribution_history !=  nullptr && redistribution_history->has_operation());
}

std::string Rib::Af::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath Rib::Af::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rib-cfg:rib/af/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_dampening_disable.is_set || is_set(next_hop_dampening_disable.operation)) leaf_name_data.push_back(next_hop_dampening_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Af::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "redistribution-history")
    {
        if(redistribution_history != nullptr)
        {
            children["redistribution-history"] = redistribution_history;
        }
        else
        {
            redistribution_history = std::make_shared<Rib::Af::Ipv6::RedistributionHistory>();
            redistribution_history->parent = this;
            children["redistribution-history"] = redistribution_history;
        }
        return children.at("redistribution-history");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Af::Ipv6::get_children()
{
    if(children.find("redistribution-history") == children.end())
    {
        if(redistribution_history != nullptr)
        {
            children["redistribution-history"] = redistribution_history;
        }
    }

    return children;
}

void Rib::Af::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-dampening-disable")
    {
        next_hop_dampening_disable = value;
    }
}

Rib::Af::Ipv6::RedistributionHistory::RedistributionHistory()
    :
    bcdl_client{YType::uint32, "bcdl-client"},
    protocol_client{YType::uint32, "protocol-client"}
    	,
    keep(std::make_shared<Rib::Af::Ipv6::RedistributionHistory::Keep>())
{
    keep->parent = this;
    children["keep"] = keep;

    yang_name = "redistribution-history"; yang_parent_name = "ipv6";
}

Rib::Af::Ipv6::RedistributionHistory::~RedistributionHistory()
{
}

bool Rib::Af::Ipv6::RedistributionHistory::has_data() const
{
    return bcdl_client.is_set
	|| protocol_client.is_set
	|| (keep !=  nullptr && keep->has_data());
}

bool Rib::Af::Ipv6::RedistributionHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(bcdl_client.operation)
	|| is_set(protocol_client.operation)
	|| (keep !=  nullptr && keep->has_operation());
}

std::string Rib::Af::Ipv6::RedistributionHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution-history";

    return path_buffer.str();

}

EntityPath Rib::Af::Ipv6::RedistributionHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rib-cfg:rib/af/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bcdl_client.is_set || is_set(bcdl_client.operation)) leaf_name_data.push_back(bcdl_client.get_name_leafdata());
    if (protocol_client.is_set || is_set(protocol_client.operation)) leaf_name_data.push_back(protocol_client.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Af::Ipv6::RedistributionHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "keep")
    {
        if(keep != nullptr)
        {
            children["keep"] = keep;
        }
        else
        {
            keep = std::make_shared<Rib::Af::Ipv6::RedistributionHistory::Keep>();
            keep->parent = this;
            children["keep"] = keep;
        }
        return children.at("keep");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rib::Af::Ipv6::RedistributionHistory::get_children()
{
    if(children.find("keep") == children.end())
    {
        if(keep != nullptr)
        {
            children["keep"] = keep;
        }
    }

    return children;
}

void Rib::Af::Ipv6::RedistributionHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bcdl-client")
    {
        bcdl_client = value;
    }
    if(value_path == "protocol-client")
    {
        protocol_client = value;
    }
}

Rib::Af::Ipv6::RedistributionHistory::Keep::Keep()
    :
    bcdl{YType::empty, "bcdl"}
{
    yang_name = "keep"; yang_parent_name = "redistribution-history";
}

Rib::Af::Ipv6::RedistributionHistory::Keep::~Keep()
{
}

bool Rib::Af::Ipv6::RedistributionHistory::Keep::has_data() const
{
    return bcdl.is_set;
}

bool Rib::Af::Ipv6::RedistributionHistory::Keep::has_operation() const
{
    return is_set(operation)
	|| is_set(bcdl.operation);
}

std::string Rib::Af::Ipv6::RedistributionHistory::Keep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keep";

    return path_buffer.str();

}

EntityPath Rib::Af::Ipv6::RedistributionHistory::Keep::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rib-cfg:rib/af/ipv6/redistribution-history/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bcdl.is_set || is_set(bcdl.operation)) leaf_name_data.push_back(bcdl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rib::Af::Ipv6::RedistributionHistory::Keep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Rib::Af::Ipv6::RedistributionHistory::Keep::get_children()
{
    return children;
}

void Rib::Af::Ipv6::RedistributionHistory::Keep::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bcdl")
    {
        bcdl = value;
    }
}


}
}

