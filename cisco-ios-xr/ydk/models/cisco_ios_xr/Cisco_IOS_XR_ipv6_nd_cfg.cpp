
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_nd_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_nd_cfg {

Ipv6Neighbor::Ipv6Neighbor()
    :
    scavenge_timeout{YType::uint32, "scavenge-timeout"}
    	,
    neighbors(std::make_shared<Ipv6Neighbor::Neighbors>())
{
    neighbors->parent = this;

    yang_name = "ipv6-neighbor"; yang_parent_name = "Cisco-IOS-XR-ipv6-nd-cfg"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(scavenge_timeout.yfilter)
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string Ipv6Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-nd-cfg:ipv6-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (scavenge_timeout.is_set || is_set(scavenge_timeout.yfilter)) leaf_name_data.push_back(scavenge_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Ipv6Neighbor::Neighbors>();
        }
        return neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    return children;
}

void Ipv6Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "scavenge-timeout")
    {
        scavenge_timeout = value;
        scavenge_timeout.value_namespace = name_space;
        scavenge_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "scavenge-timeout")
    {
        scavenge_timeout.yfilter = yfilter;
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

std::map<std::pair<std::string, std::string>, std::string> Ipv6Neighbor::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Ipv6Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors" || name == "scavenge-timeout")
        return true;
    return false;
}

Ipv6Neighbor::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "ipv6-neighbor"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Ipv6Neighbor::Neighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-nd-cfg:ipv6-neighbor/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6Neighbor::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Neighbor::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Neighbor::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ipv6Neighbor::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Neighbor::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ipv6Neighbor::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Neighbor::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Neighbor::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Ipv6Neighbor::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    interface_name{YType::str, "interface-name"},
    encapsulation{YType::enumeration, "encapsulation"},
    mac_address{YType::str, "mac-address"},
    zone{YType::str, "zone"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false;
}

Ipv6Neighbor::Neighbors::Neighbor::~Neighbor()
{
}

bool Ipv6Neighbor::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set
	|| interface_name.is_set
	|| encapsulation.is_set
	|| mac_address.is_set
	|| zone.is_set;
}

bool Ipv6Neighbor::Neighbors::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(encapsulation.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(zone.yfilter);
}

std::string Ipv6Neighbor::Neighbors::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-nd-cfg:ipv6-neighbor/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string Ipv6Neighbor::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Neighbor::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.yfilter)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (zone.is_set || is_set(zone.yfilter)) leaf_name_data.push_back(zone.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Neighbor::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Neighbor::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ipv6Neighbor::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "encapsulation")
    {
        encapsulation = value;
        encapsulation.value_namespace = name_space;
        encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "zone")
    {
        zone = value;
        zone.value_namespace = name_space;
        zone.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Neighbor::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "encapsulation")
    {
        encapsulation.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "zone")
    {
        zone.yfilter = yfilter;
    }
}

bool Ipv6Neighbor::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "interface-name" || name == "encapsulation" || name == "mac-address" || name == "zone")
        return true;
    return false;
}

const Enum::YLeaf Ipv6srpEncapsulation::srpa {5, "srpa"};
const Enum::YLeaf Ipv6srpEncapsulation::srpb {6, "srpb"};

const Enum::YLeaf Ipv6NdRouterPref::high {1, "high"};
const Enum::YLeaf Ipv6NdRouterPref::medium {2, "medium"};
const Enum::YLeaf Ipv6NdRouterPref::low {3, "low"};

const Enum::YLeaf Ipv6ndMonth::january {0, "january"};
const Enum::YLeaf Ipv6ndMonth::february {1, "february"};
const Enum::YLeaf Ipv6ndMonth::march {2, "march"};
const Enum::YLeaf Ipv6ndMonth::april {3, "april"};
const Enum::YLeaf Ipv6ndMonth::may {4, "may"};
const Enum::YLeaf Ipv6ndMonth::june {5, "june"};
const Enum::YLeaf Ipv6ndMonth::july {6, "july"};
const Enum::YLeaf Ipv6ndMonth::august {7, "august"};
const Enum::YLeaf Ipv6ndMonth::september {8, "september"};
const Enum::YLeaf Ipv6ndMonth::october {9, "october"};
const Enum::YLeaf Ipv6ndMonth::november {10, "november"};
const Enum::YLeaf Ipv6ndMonth::december {11, "december"};


}
}

