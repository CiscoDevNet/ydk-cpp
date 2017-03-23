
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_nd_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_nd_cfg {

Ipv6Neighbor::Ipv6Neighbor()
    :
    scavenge_timeout{YType::uint32, "scavenge-timeout"}
    	,
    neighbors(std::make_shared<Ipv6Neighbor::Neighbors>())
{
    neighbors->parent = this;
    children["neighbors"] = neighbors;

    yang_name = "ipv6-neighbor"; yang_parent_name = "Cisco-IOS-XR-ipv6-nd-cfg";
}

Ipv6Neighbor::~Ipv6Neighbor()
{
}

bool Ipv6Neighbor::has_data() const
{
    return scavenge_timeout.is_set
	|| (neighbors !=  nullptr && neighbors->has_data());
}

bool Ipv6Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(scavenge_timeout.operation)
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string Ipv6Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-nd-cfg:ipv6-neighbor";

    return path_buffer.str();

}

EntityPath Ipv6Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (scavenge_timeout.is_set || is_set(scavenge_timeout.operation)) leaf_name_data.push_back(scavenge_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<Ipv6Neighbor::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6Neighbor::get_children()
{
    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
    }

    return children;
}

void Ipv6Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "scavenge-timeout")
    {
        scavenge_timeout = value;
    }
}

std::shared_ptr<Entity> Ipv6Neighbor::clone_ptr() const
{
    return std::make_shared<Ipv6Neighbor>();
}

std::string Ipv6Neighbor::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ipv6Neighbor::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ipv6Neighbor::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Ipv6Neighbor::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "ipv6-neighbor";
}

Ipv6Neighbor::Neighbors::~Neighbors()
{
}

bool Ipv6Neighbor::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Neighbor::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6Neighbor::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath Ipv6Neighbor::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-nd-cfg:ipv6-neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Neighbor::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ipv6Neighbor::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ipv6Neighbor::Neighbors::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ipv6Neighbor::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Ipv6Neighbor::Neighbors::Neighbor::Neighbor()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    encapsulation{YType::enumeration, "encapsulation"},
    mac_address{YType::str, "mac-address"},
    zone{YType::str, "zone"}
{
    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Ipv6Neighbor::Neighbors::Neighbor::~Neighbor()
{
}

bool Ipv6Neighbor::Neighbors::Neighbor::has_data() const
{
    return interface_name.is_set
	|| neighbor_address.is_set
	|| encapsulation.is_set
	|| mac_address.is_set
	|| zone.is_set;
}

bool Ipv6Neighbor::Neighbors::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(encapsulation.operation)
	|| is_set(mac_address.operation)
	|| is_set(zone.operation);
}

std::string Ipv6Neighbor::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[interface-name='" <<interface_name <<"']" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Ipv6Neighbor::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-nd-cfg:ipv6-neighbor/neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (zone.is_set || is_set(zone.operation)) leaf_name_data.push_back(zone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ipv6Neighbor::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Ipv6Neighbor::Neighbors::Neighbor::get_children()
{
    return children;
}

void Ipv6Neighbor::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "zone")
    {
        zone = value;
    }
}

const Enum::YLeaf Ipv6NdMonthEnum::january {0, "january"};
const Enum::YLeaf Ipv6NdMonthEnum::february {1, "february"};
const Enum::YLeaf Ipv6NdMonthEnum::march {2, "march"};
const Enum::YLeaf Ipv6NdMonthEnum::april {3, "april"};
const Enum::YLeaf Ipv6NdMonthEnum::may {4, "may"};
const Enum::YLeaf Ipv6NdMonthEnum::june {5, "june"};
const Enum::YLeaf Ipv6NdMonthEnum::july {6, "july"};
const Enum::YLeaf Ipv6NdMonthEnum::august {7, "august"};
const Enum::YLeaf Ipv6NdMonthEnum::september {8, "september"};
const Enum::YLeaf Ipv6NdMonthEnum::october {9, "october"};
const Enum::YLeaf Ipv6NdMonthEnum::november {10, "november"};
const Enum::YLeaf Ipv6NdMonthEnum::december {11, "december"};

const Enum::YLeaf Ipv6NdRouterPrefEnum::high {1, "high"};
const Enum::YLeaf Ipv6NdRouterPrefEnum::medium {2, "medium"};
const Enum::YLeaf Ipv6NdRouterPrefEnum::low {3, "low"};

const Enum::YLeaf Ipv6SrpEncapsulationEnum::srpa {5, "srpa"};
const Enum::YLeaf Ipv6SrpEncapsulationEnum::srpb {6, "srpb"};


}
}

