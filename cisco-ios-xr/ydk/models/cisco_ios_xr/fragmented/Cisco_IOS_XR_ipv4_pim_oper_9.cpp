
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_9.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_pim_oper {

Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpfs()
{

    yang_name = "group-map-rpfs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::~GroupMapRpfs()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::has_data() const
{
    for (std::size_t index=0; index<group_map_rpf.size(); index++)
    {
        if(group_map_rpf[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::has_operation() const
{
    for (std::size_t index=0; index<group_map_rpf.size(); index++)
    {
        if(group_map_rpf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-rpfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-map-rpf")
    {
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf>();
        c->parent = this;
        group_map_rpf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : group_map_rpf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-map-rpf")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapRpf()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::int32, "prefix-length"},
    client{YType::enumeration, "client"},
    protocol{YType::enumeration, "protocol"},
    rp_address{YType::str, "rp-address"},
    rp_priority{YType::int32, "rp-priority"},
    are_we_rp{YType::boolean, "are-we-rp"},
    rpf_interface_name{YType::str, "rpf-interface-name"},
    rpf_vrf_name{YType::str, "rpf-vrf-name"}
    	,
    rpf_neighbor(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor>())
	,group_map_information(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation>())
{
    rpf_neighbor->parent = this;
    group_map_information->parent = this;

    yang_name = "group-map-rpf"; yang_parent_name = "group-map-rpfs"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::~GroupMapRpf()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| client.is_set
	|| protocol.is_set
	|| rp_address.is_set
	|| rp_priority.is_set
	|| are_we_rp.is_set
	|| rpf_interface_name.is_set
	|| rpf_vrf_name.is_set
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data())
	|| (group_map_information !=  nullptr && group_map_information->has_data());
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(rp_priority.yfilter)
	|| ydk::is_set(are_we_rp.yfilter)
	|| ydk::is_set(rpf_interface_name.yfilter)
	|| ydk::is_set(rpf_vrf_name.yfilter)
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation())
	|| (group_map_information !=  nullptr && group_map_information->has_operation());
}

std::string Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-rpf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (rp_priority.is_set || is_set(rp_priority.yfilter)) leaf_name_data.push_back(rp_priority.get_name_leafdata());
    if (are_we_rp.is_set || is_set(are_we_rp.yfilter)) leaf_name_data.push_back(are_we_rp.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.yfilter)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (rpf_vrf_name.is_set || is_set(rpf_vrf_name.yfilter)) leaf_name_data.push_back(rpf_vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor == nullptr)
        {
            rpf_neighbor = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor>();
        }
        return rpf_neighbor;
    }

    if(child_yang_name == "group-map-information")
    {
        if(group_map_information == nullptr)
        {
            group_map_information = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation>();
        }
        return group_map_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rpf_neighbor != nullptr)
    {
        children["rpf-neighbor"] = rpf_neighbor;
    }

    if(group_map_information != nullptr)
    {
        children["group-map-information"] = group_map_information;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-priority")
    {
        rp_priority = value;
        rp_priority.value_namespace = name_space;
        rp_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-we-rp")
    {
        are_we_rp = value;
        are_we_rp.value_namespace = name_space;
        are_we_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
        rpf_interface_name.value_namespace = name_space;
        rpf_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name = value;
        rpf_vrf_name.value_namespace = name_space;
        rpf_vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "rp-priority")
    {
        rp_priority.yfilter = yfilter;
    }
    if(value_path == "are-we-rp")
    {
        are_we_rp.yfilter = yfilter;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name.yfilter = yfilter;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-neighbor" || name == "group-map-information" || name == "prefix" || name == "prefix-length" || name == "client" || name == "protocol" || name == "rp-address" || name == "rp-priority" || name == "are-we-rp" || name == "rpf-interface-name" || name == "rpf-vrf-name")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-neighbor"; yang_parent_name = "group-map-rpf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::~RpfNeighbor()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::RpfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::GroupMapInformation()
    :
    prefix_length{YType::int32, "prefix-length"},
    client{YType::enumeration, "client"},
    protocol{YType::enumeration, "protocol"},
    group_count{YType::uint32, "group-count"},
    is_used{YType::boolean, "is-used"},
    mrib_active{YType::boolean, "mrib-active"},
    is_override{YType::boolean, "is-override"},
    priority{YType::uint32, "priority"}
    	,
    prefix(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix>())
	,rp_address(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress>())
{
    prefix->parent = this;
    rp_address->parent = this;

    yang_name = "group-map-information"; yang_parent_name = "group-map-rpf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::~GroupMapInformation()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::has_data() const
{
    return prefix_length.is_set
	|| client.is_set
	|| protocol.is_set
	|| group_count.is_set
	|| is_used.is_set
	|| mrib_active.is_set
	|| is_override.is_set
	|| priority.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data());
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(mrib_active.yfilter)
	|| ydk::is_set(is_override.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation());
}

std::string Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (mrib_active.is_set || is_set(mrib_active.yfilter)) leaf_name_data.push_back(mrib_active.get_name_leafdata());
    if (is_override.is_set || is_set(is_override.yfilter)) leaf_name_data.push_back(is_override.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress>();
        }
        return rp_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-used")
    {
        is_used = value;
        is_used.value_namespace = name_space;
        is_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mrib-active")
    {
        mrib_active = value;
        mrib_active.value_namespace = name_space;
        mrib_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-override")
    {
        is_override = value;
        is_override.value_namespace = name_space;
        is_override.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "mrib-active")
    {
        mrib_active.yfilter = yfilter;
    }
    if(value_path == "is-override")
    {
        is_override.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "rp-address" || name == "prefix-length" || name == "client" || name == "protocol" || name == "group-count" || name == "is-used" || name == "mrib-active" || name == "is-override" || name == "priority")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "group-map-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::~Prefix()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "group-map-information"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::~RpAddress()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Summary::Summary()
    :
    route_limit{YType::uint32, "route-limit"},
    route_count{YType::uint32, "route-count"},
    route_low_water_mark{YType::uint32, "route-low-water-mark"},
    is_route_limit_reached{YType::boolean, "is-route-limit-reached"},
    topology_interface_state_limit{YType::uint32, "topology-interface-state-limit"},
    topology_interface_state_count{YType::uint32, "topology-interface-state-count"},
    rxi_low_water_mark{YType::uint32, "rxi-low-water-mark"},
    rxi_limit_reached{YType::boolean, "rxi-limit-reached"},
    register_limit{YType::uint32, "register-limit"},
    register_count{YType::uint32, "register-count"},
    register_limit_reached{YType::boolean, "register-limit-reached"},
    ranges_limit{YType::uint32, "ranges-limit"},
    ranges_count{YType::uint32, "ranges-count"},
    ranges_threshold{YType::uint32, "ranges-threshold"},
    is_ranges_limit_reached{YType::boolean, "is-ranges-limit-reached"},
    bsr_ranges_limit{YType::uint32, "bsr-ranges-limit"},
    bsr_ranges_count{YType::uint32, "bsr-ranges-count"},
    bsr_range_threshold{YType::uint32, "bsr-range-threshold"},
    is_bsr_ranges_threshold_reached{YType::boolean, "is-bsr-ranges-threshold-reached"},
    bsr_candidate_rp_set_limit{YType::uint32, "bsr-candidate-rp-set-limit"},
    bsr_candidate_rp_set_count{YType::uint32, "bsr-candidate-rp-set-count"},
    bsr_candidate_rp_set_threshold{YType::uint32, "bsr-candidate-rp-set-threshold"},
    is_maximum_enforcement_disabled{YType::boolean, "is-maximum-enforcement-disabled"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    route_threshold{YType::uint32, "route-threshold"},
    global_auto_rp_ranges_limit{YType::uint32, "global-auto-rp-ranges-limit"},
    is_global_auto_rp_ranges_limit_reached{YType::boolean, "is-global-auto-rp-ranges-limit-reached"},
    global_bsr_ranges_limit{YType::uint32, "global-bsr-ranges-limit"},
    global_bsr_ranges_count{YType::uint32, "global-bsr-ranges-count"},
    global_bsr_ranges_threshold{YType::uint32, "global-bsr-ranges-threshold"},
    is_global_bsr_ranges_limit_reached{YType::boolean, "is-global-bsr-ranges-limit-reached"},
    global_bsr_candidate_rp_set_limit{YType::uint32, "global-bsr-candidate-rp-set-limit"},
    global_bsr_candidate_rp_set_count{YType::uint32, "global-bsr-candidate-rp-set-count"},
    global_bsr_candidate_rp_set_threshold{YType::uint32, "global-bsr-candidate-rp-set-threshold"},
    is_global_route_limit_reached{YType::boolean, "is-global-route-limit-reached"},
    topology_interface_state_threshold{YType::uint32, "topology-interface-state-threshold"},
    is_global_rxi_limit_reached{YType::boolean, "is-global-rxi-limit-reached"},
    register_threshold{YType::uint32, "register-threshold"},
    global_register_limit{YType::uint32, "global-register-limit"},
    is_global_register_limit_reached{YType::boolean, "is-global-register-limit-reached"}
{

    yang_name = "summary"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Summary::~Summary()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Summary::has_data() const
{
    return route_limit.is_set
	|| route_count.is_set
	|| route_low_water_mark.is_set
	|| is_route_limit_reached.is_set
	|| topology_interface_state_limit.is_set
	|| topology_interface_state_count.is_set
	|| rxi_low_water_mark.is_set
	|| rxi_limit_reached.is_set
	|| register_limit.is_set
	|| register_count.is_set
	|| register_limit_reached.is_set
	|| ranges_limit.is_set
	|| ranges_count.is_set
	|| ranges_threshold.is_set
	|| is_ranges_limit_reached.is_set
	|| bsr_ranges_limit.is_set
	|| bsr_ranges_count.is_set
	|| bsr_range_threshold.is_set
	|| is_bsr_ranges_threshold_reached.is_set
	|| bsr_candidate_rp_set_limit.is_set
	|| bsr_candidate_rp_set_count.is_set
	|| bsr_candidate_rp_set_threshold.is_set
	|| is_maximum_enforcement_disabled.is_set
	|| is_node_low_memory.is_set
	|| route_threshold.is_set
	|| global_auto_rp_ranges_limit.is_set
	|| is_global_auto_rp_ranges_limit_reached.is_set
	|| global_bsr_ranges_limit.is_set
	|| global_bsr_ranges_count.is_set
	|| global_bsr_ranges_threshold.is_set
	|| is_global_bsr_ranges_limit_reached.is_set
	|| global_bsr_candidate_rp_set_limit.is_set
	|| global_bsr_candidate_rp_set_count.is_set
	|| global_bsr_candidate_rp_set_threshold.is_set
	|| is_global_route_limit_reached.is_set
	|| topology_interface_state_threshold.is_set
	|| is_global_rxi_limit_reached.is_set
	|| register_threshold.is_set
	|| global_register_limit.is_set
	|| is_global_register_limit_reached.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_limit.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(route_low_water_mark.yfilter)
	|| ydk::is_set(is_route_limit_reached.yfilter)
	|| ydk::is_set(topology_interface_state_limit.yfilter)
	|| ydk::is_set(topology_interface_state_count.yfilter)
	|| ydk::is_set(rxi_low_water_mark.yfilter)
	|| ydk::is_set(rxi_limit_reached.yfilter)
	|| ydk::is_set(register_limit.yfilter)
	|| ydk::is_set(register_count.yfilter)
	|| ydk::is_set(register_limit_reached.yfilter)
	|| ydk::is_set(ranges_limit.yfilter)
	|| ydk::is_set(ranges_count.yfilter)
	|| ydk::is_set(ranges_threshold.yfilter)
	|| ydk::is_set(is_ranges_limit_reached.yfilter)
	|| ydk::is_set(bsr_ranges_limit.yfilter)
	|| ydk::is_set(bsr_ranges_count.yfilter)
	|| ydk::is_set(bsr_range_threshold.yfilter)
	|| ydk::is_set(is_bsr_ranges_threshold_reached.yfilter)
	|| ydk::is_set(bsr_candidate_rp_set_limit.yfilter)
	|| ydk::is_set(bsr_candidate_rp_set_count.yfilter)
	|| ydk::is_set(bsr_candidate_rp_set_threshold.yfilter)
	|| ydk::is_set(is_maximum_enforcement_disabled.yfilter)
	|| ydk::is_set(is_node_low_memory.yfilter)
	|| ydk::is_set(route_threshold.yfilter)
	|| ydk::is_set(global_auto_rp_ranges_limit.yfilter)
	|| ydk::is_set(is_global_auto_rp_ranges_limit_reached.yfilter)
	|| ydk::is_set(global_bsr_ranges_limit.yfilter)
	|| ydk::is_set(global_bsr_ranges_count.yfilter)
	|| ydk::is_set(global_bsr_ranges_threshold.yfilter)
	|| ydk::is_set(is_global_bsr_ranges_limit_reached.yfilter)
	|| ydk::is_set(global_bsr_candidate_rp_set_limit.yfilter)
	|| ydk::is_set(global_bsr_candidate_rp_set_count.yfilter)
	|| ydk::is_set(global_bsr_candidate_rp_set_threshold.yfilter)
	|| ydk::is_set(is_global_route_limit_reached.yfilter)
	|| ydk::is_set(topology_interface_state_threshold.yfilter)
	|| ydk::is_set(is_global_rxi_limit_reached.yfilter)
	|| ydk::is_set(register_threshold.yfilter)
	|| ydk::is_set(global_register_limit.yfilter)
	|| ydk::is_set(is_global_register_limit_reached.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_limit.is_set || is_set(route_limit.yfilter)) leaf_name_data.push_back(route_limit.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (route_low_water_mark.is_set || is_set(route_low_water_mark.yfilter)) leaf_name_data.push_back(route_low_water_mark.get_name_leafdata());
    if (is_route_limit_reached.is_set || is_set(is_route_limit_reached.yfilter)) leaf_name_data.push_back(is_route_limit_reached.get_name_leafdata());
    if (topology_interface_state_limit.is_set || is_set(topology_interface_state_limit.yfilter)) leaf_name_data.push_back(topology_interface_state_limit.get_name_leafdata());
    if (topology_interface_state_count.is_set || is_set(topology_interface_state_count.yfilter)) leaf_name_data.push_back(topology_interface_state_count.get_name_leafdata());
    if (rxi_low_water_mark.is_set || is_set(rxi_low_water_mark.yfilter)) leaf_name_data.push_back(rxi_low_water_mark.get_name_leafdata());
    if (rxi_limit_reached.is_set || is_set(rxi_limit_reached.yfilter)) leaf_name_data.push_back(rxi_limit_reached.get_name_leafdata());
    if (register_limit.is_set || is_set(register_limit.yfilter)) leaf_name_data.push_back(register_limit.get_name_leafdata());
    if (register_count.is_set || is_set(register_count.yfilter)) leaf_name_data.push_back(register_count.get_name_leafdata());
    if (register_limit_reached.is_set || is_set(register_limit_reached.yfilter)) leaf_name_data.push_back(register_limit_reached.get_name_leafdata());
    if (ranges_limit.is_set || is_set(ranges_limit.yfilter)) leaf_name_data.push_back(ranges_limit.get_name_leafdata());
    if (ranges_count.is_set || is_set(ranges_count.yfilter)) leaf_name_data.push_back(ranges_count.get_name_leafdata());
    if (ranges_threshold.is_set || is_set(ranges_threshold.yfilter)) leaf_name_data.push_back(ranges_threshold.get_name_leafdata());
    if (is_ranges_limit_reached.is_set || is_set(is_ranges_limit_reached.yfilter)) leaf_name_data.push_back(is_ranges_limit_reached.get_name_leafdata());
    if (bsr_ranges_limit.is_set || is_set(bsr_ranges_limit.yfilter)) leaf_name_data.push_back(bsr_ranges_limit.get_name_leafdata());
    if (bsr_ranges_count.is_set || is_set(bsr_ranges_count.yfilter)) leaf_name_data.push_back(bsr_ranges_count.get_name_leafdata());
    if (bsr_range_threshold.is_set || is_set(bsr_range_threshold.yfilter)) leaf_name_data.push_back(bsr_range_threshold.get_name_leafdata());
    if (is_bsr_ranges_threshold_reached.is_set || is_set(is_bsr_ranges_threshold_reached.yfilter)) leaf_name_data.push_back(is_bsr_ranges_threshold_reached.get_name_leafdata());
    if (bsr_candidate_rp_set_limit.is_set || is_set(bsr_candidate_rp_set_limit.yfilter)) leaf_name_data.push_back(bsr_candidate_rp_set_limit.get_name_leafdata());
    if (bsr_candidate_rp_set_count.is_set || is_set(bsr_candidate_rp_set_count.yfilter)) leaf_name_data.push_back(bsr_candidate_rp_set_count.get_name_leafdata());
    if (bsr_candidate_rp_set_threshold.is_set || is_set(bsr_candidate_rp_set_threshold.yfilter)) leaf_name_data.push_back(bsr_candidate_rp_set_threshold.get_name_leafdata());
    if (is_maximum_enforcement_disabled.is_set || is_set(is_maximum_enforcement_disabled.yfilter)) leaf_name_data.push_back(is_maximum_enforcement_disabled.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.yfilter)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (route_threshold.is_set || is_set(route_threshold.yfilter)) leaf_name_data.push_back(route_threshold.get_name_leafdata());
    if (global_auto_rp_ranges_limit.is_set || is_set(global_auto_rp_ranges_limit.yfilter)) leaf_name_data.push_back(global_auto_rp_ranges_limit.get_name_leafdata());
    if (is_global_auto_rp_ranges_limit_reached.is_set || is_set(is_global_auto_rp_ranges_limit_reached.yfilter)) leaf_name_data.push_back(is_global_auto_rp_ranges_limit_reached.get_name_leafdata());
    if (global_bsr_ranges_limit.is_set || is_set(global_bsr_ranges_limit.yfilter)) leaf_name_data.push_back(global_bsr_ranges_limit.get_name_leafdata());
    if (global_bsr_ranges_count.is_set || is_set(global_bsr_ranges_count.yfilter)) leaf_name_data.push_back(global_bsr_ranges_count.get_name_leafdata());
    if (global_bsr_ranges_threshold.is_set || is_set(global_bsr_ranges_threshold.yfilter)) leaf_name_data.push_back(global_bsr_ranges_threshold.get_name_leafdata());
    if (is_global_bsr_ranges_limit_reached.is_set || is_set(is_global_bsr_ranges_limit_reached.yfilter)) leaf_name_data.push_back(is_global_bsr_ranges_limit_reached.get_name_leafdata());
    if (global_bsr_candidate_rp_set_limit.is_set || is_set(global_bsr_candidate_rp_set_limit.yfilter)) leaf_name_data.push_back(global_bsr_candidate_rp_set_limit.get_name_leafdata());
    if (global_bsr_candidate_rp_set_count.is_set || is_set(global_bsr_candidate_rp_set_count.yfilter)) leaf_name_data.push_back(global_bsr_candidate_rp_set_count.get_name_leafdata());
    if (global_bsr_candidate_rp_set_threshold.is_set || is_set(global_bsr_candidate_rp_set_threshold.yfilter)) leaf_name_data.push_back(global_bsr_candidate_rp_set_threshold.get_name_leafdata());
    if (is_global_route_limit_reached.is_set || is_set(is_global_route_limit_reached.yfilter)) leaf_name_data.push_back(is_global_route_limit_reached.get_name_leafdata());
    if (topology_interface_state_threshold.is_set || is_set(topology_interface_state_threshold.yfilter)) leaf_name_data.push_back(topology_interface_state_threshold.get_name_leafdata());
    if (is_global_rxi_limit_reached.is_set || is_set(is_global_rxi_limit_reached.yfilter)) leaf_name_data.push_back(is_global_rxi_limit_reached.get_name_leafdata());
    if (register_threshold.is_set || is_set(register_threshold.yfilter)) leaf_name_data.push_back(register_threshold.get_name_leafdata());
    if (global_register_limit.is_set || is_set(global_register_limit.yfilter)) leaf_name_data.push_back(global_register_limit.get_name_leafdata());
    if (is_global_register_limit_reached.is_set || is_set(is_global_register_limit_reached.yfilter)) leaf_name_data.push_back(is_global_register_limit_reached.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-limit")
    {
        route_limit = value;
        route_limit.value_namespace = name_space;
        route_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-low-water-mark")
    {
        route_low_water_mark = value;
        route_low_water_mark.value_namespace = name_space;
        route_low_water_mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-route-limit-reached")
    {
        is_route_limit_reached = value;
        is_route_limit_reached.value_namespace = name_space;
        is_route_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-interface-state-limit")
    {
        topology_interface_state_limit = value;
        topology_interface_state_limit.value_namespace = name_space;
        topology_interface_state_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-interface-state-count")
    {
        topology_interface_state_count = value;
        topology_interface_state_count.value_namespace = name_space;
        topology_interface_state_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxi-low-water-mark")
    {
        rxi_low_water_mark = value;
        rxi_low_water_mark.value_namespace = name_space;
        rxi_low_water_mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxi-limit-reached")
    {
        rxi_limit_reached = value;
        rxi_limit_reached.value_namespace = name_space;
        rxi_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-limit")
    {
        register_limit = value;
        register_limit.value_namespace = name_space;
        register_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-count")
    {
        register_count = value;
        register_count.value_namespace = name_space;
        register_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-limit-reached")
    {
        register_limit_reached = value;
        register_limit_reached.value_namespace = name_space;
        register_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ranges-limit")
    {
        ranges_limit = value;
        ranges_limit.value_namespace = name_space;
        ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ranges-count")
    {
        ranges_count = value;
        ranges_count.value_namespace = name_space;
        ranges_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ranges-threshold")
    {
        ranges_threshold = value;
        ranges_threshold.value_namespace = name_space;
        ranges_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ranges-limit-reached")
    {
        is_ranges_limit_reached = value;
        is_ranges_limit_reached.value_namespace = name_space;
        is_ranges_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-ranges-limit")
    {
        bsr_ranges_limit = value;
        bsr_ranges_limit.value_namespace = name_space;
        bsr_ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-ranges-count")
    {
        bsr_ranges_count = value;
        bsr_ranges_count.value_namespace = name_space;
        bsr_ranges_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-range-threshold")
    {
        bsr_range_threshold = value;
        bsr_range_threshold.value_namespace = name_space;
        bsr_range_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bsr-ranges-threshold-reached")
    {
        is_bsr_ranges_threshold_reached = value;
        is_bsr_ranges_threshold_reached.value_namespace = name_space;
        is_bsr_ranges_threshold_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-candidate-rp-set-limit")
    {
        bsr_candidate_rp_set_limit = value;
        bsr_candidate_rp_set_limit.value_namespace = name_space;
        bsr_candidate_rp_set_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-candidate-rp-set-count")
    {
        bsr_candidate_rp_set_count = value;
        bsr_candidate_rp_set_count.value_namespace = name_space;
        bsr_candidate_rp_set_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-candidate-rp-set-threshold")
    {
        bsr_candidate_rp_set_threshold = value;
        bsr_candidate_rp_set_threshold.value_namespace = name_space;
        bsr_candidate_rp_set_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-maximum-enforcement-disabled")
    {
        is_maximum_enforcement_disabled = value;
        is_maximum_enforcement_disabled.value_namespace = name_space;
        is_maximum_enforcement_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
        is_node_low_memory.value_namespace = name_space;
        is_node_low_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-threshold")
    {
        route_threshold = value;
        route_threshold.value_namespace = name_space;
        route_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-auto-rp-ranges-limit")
    {
        global_auto_rp_ranges_limit = value;
        global_auto_rp_ranges_limit.value_namespace = name_space;
        global_auto_rp_ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-auto-rp-ranges-limit-reached")
    {
        is_global_auto_rp_ranges_limit_reached = value;
        is_global_auto_rp_ranges_limit_reached.value_namespace = name_space;
        is_global_auto_rp_ranges_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-ranges-limit")
    {
        global_bsr_ranges_limit = value;
        global_bsr_ranges_limit.value_namespace = name_space;
        global_bsr_ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-ranges-count")
    {
        global_bsr_ranges_count = value;
        global_bsr_ranges_count.value_namespace = name_space;
        global_bsr_ranges_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-ranges-threshold")
    {
        global_bsr_ranges_threshold = value;
        global_bsr_ranges_threshold.value_namespace = name_space;
        global_bsr_ranges_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-bsr-ranges-limit-reached")
    {
        is_global_bsr_ranges_limit_reached = value;
        is_global_bsr_ranges_limit_reached.value_namespace = name_space;
        is_global_bsr_ranges_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-candidate-rp-set-limit")
    {
        global_bsr_candidate_rp_set_limit = value;
        global_bsr_candidate_rp_set_limit.value_namespace = name_space;
        global_bsr_candidate_rp_set_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-candidate-rp-set-count")
    {
        global_bsr_candidate_rp_set_count = value;
        global_bsr_candidate_rp_set_count.value_namespace = name_space;
        global_bsr_candidate_rp_set_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-candidate-rp-set-threshold")
    {
        global_bsr_candidate_rp_set_threshold = value;
        global_bsr_candidate_rp_set_threshold.value_namespace = name_space;
        global_bsr_candidate_rp_set_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-route-limit-reached")
    {
        is_global_route_limit_reached = value;
        is_global_route_limit_reached.value_namespace = name_space;
        is_global_route_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-interface-state-threshold")
    {
        topology_interface_state_threshold = value;
        topology_interface_state_threshold.value_namespace = name_space;
        topology_interface_state_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-rxi-limit-reached")
    {
        is_global_rxi_limit_reached = value;
        is_global_rxi_limit_reached.value_namespace = name_space;
        is_global_rxi_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-threshold")
    {
        register_threshold = value;
        register_threshold.value_namespace = name_space;
        register_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-register-limit")
    {
        global_register_limit = value;
        global_register_limit.value_namespace = name_space;
        global_register_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-register-limit-reached")
    {
        is_global_register_limit_reached = value;
        is_global_register_limit_reached.value_namespace = name_space;
        is_global_register_limit_reached.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-limit")
    {
        route_limit.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "route-low-water-mark")
    {
        route_low_water_mark.yfilter = yfilter;
    }
    if(value_path == "is-route-limit-reached")
    {
        is_route_limit_reached.yfilter = yfilter;
    }
    if(value_path == "topology-interface-state-limit")
    {
        topology_interface_state_limit.yfilter = yfilter;
    }
    if(value_path == "topology-interface-state-count")
    {
        topology_interface_state_count.yfilter = yfilter;
    }
    if(value_path == "rxi-low-water-mark")
    {
        rxi_low_water_mark.yfilter = yfilter;
    }
    if(value_path == "rxi-limit-reached")
    {
        rxi_limit_reached.yfilter = yfilter;
    }
    if(value_path == "register-limit")
    {
        register_limit.yfilter = yfilter;
    }
    if(value_path == "register-count")
    {
        register_count.yfilter = yfilter;
    }
    if(value_path == "register-limit-reached")
    {
        register_limit_reached.yfilter = yfilter;
    }
    if(value_path == "ranges-limit")
    {
        ranges_limit.yfilter = yfilter;
    }
    if(value_path == "ranges-count")
    {
        ranges_count.yfilter = yfilter;
    }
    if(value_path == "ranges-threshold")
    {
        ranges_threshold.yfilter = yfilter;
    }
    if(value_path == "is-ranges-limit-reached")
    {
        is_ranges_limit_reached.yfilter = yfilter;
    }
    if(value_path == "bsr-ranges-limit")
    {
        bsr_ranges_limit.yfilter = yfilter;
    }
    if(value_path == "bsr-ranges-count")
    {
        bsr_ranges_count.yfilter = yfilter;
    }
    if(value_path == "bsr-range-threshold")
    {
        bsr_range_threshold.yfilter = yfilter;
    }
    if(value_path == "is-bsr-ranges-threshold-reached")
    {
        is_bsr_ranges_threshold_reached.yfilter = yfilter;
    }
    if(value_path == "bsr-candidate-rp-set-limit")
    {
        bsr_candidate_rp_set_limit.yfilter = yfilter;
    }
    if(value_path == "bsr-candidate-rp-set-count")
    {
        bsr_candidate_rp_set_count.yfilter = yfilter;
    }
    if(value_path == "bsr-candidate-rp-set-threshold")
    {
        bsr_candidate_rp_set_threshold.yfilter = yfilter;
    }
    if(value_path == "is-maximum-enforcement-disabled")
    {
        is_maximum_enforcement_disabled.yfilter = yfilter;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory.yfilter = yfilter;
    }
    if(value_path == "route-threshold")
    {
        route_threshold.yfilter = yfilter;
    }
    if(value_path == "global-auto-rp-ranges-limit")
    {
        global_auto_rp_ranges_limit.yfilter = yfilter;
    }
    if(value_path == "is-global-auto-rp-ranges-limit-reached")
    {
        is_global_auto_rp_ranges_limit_reached.yfilter = yfilter;
    }
    if(value_path == "global-bsr-ranges-limit")
    {
        global_bsr_ranges_limit.yfilter = yfilter;
    }
    if(value_path == "global-bsr-ranges-count")
    {
        global_bsr_ranges_count.yfilter = yfilter;
    }
    if(value_path == "global-bsr-ranges-threshold")
    {
        global_bsr_ranges_threshold.yfilter = yfilter;
    }
    if(value_path == "is-global-bsr-ranges-limit-reached")
    {
        is_global_bsr_ranges_limit_reached.yfilter = yfilter;
    }
    if(value_path == "global-bsr-candidate-rp-set-limit")
    {
        global_bsr_candidate_rp_set_limit.yfilter = yfilter;
    }
    if(value_path == "global-bsr-candidate-rp-set-count")
    {
        global_bsr_candidate_rp_set_count.yfilter = yfilter;
    }
    if(value_path == "global-bsr-candidate-rp-set-threshold")
    {
        global_bsr_candidate_rp_set_threshold.yfilter = yfilter;
    }
    if(value_path == "is-global-route-limit-reached")
    {
        is_global_route_limit_reached.yfilter = yfilter;
    }
    if(value_path == "topology-interface-state-threshold")
    {
        topology_interface_state_threshold.yfilter = yfilter;
    }
    if(value_path == "is-global-rxi-limit-reached")
    {
        is_global_rxi_limit_reached.yfilter = yfilter;
    }
    if(value_path == "register-threshold")
    {
        register_threshold.yfilter = yfilter;
    }
    if(value_path == "global-register-limit")
    {
        global_register_limit.yfilter = yfilter;
    }
    if(value_path == "is-global-register-limit-reached")
    {
        is_global_register_limit_reached.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-limit" || name == "route-count" || name == "route-low-water-mark" || name == "is-route-limit-reached" || name == "topology-interface-state-limit" || name == "topology-interface-state-count" || name == "rxi-low-water-mark" || name == "rxi-limit-reached" || name == "register-limit" || name == "register-count" || name == "register-limit-reached" || name == "ranges-limit" || name == "ranges-count" || name == "ranges-threshold" || name == "is-ranges-limit-reached" || name == "bsr-ranges-limit" || name == "bsr-ranges-count" || name == "bsr-range-threshold" || name == "is-bsr-ranges-threshold-reached" || name == "bsr-candidate-rp-set-limit" || name == "bsr-candidate-rp-set-count" || name == "bsr-candidate-rp-set-threshold" || name == "is-maximum-enforcement-disabled" || name == "is-node-low-memory" || name == "route-threshold" || name == "global-auto-rp-ranges-limit" || name == "is-global-auto-rp-ranges-limit-reached" || name == "global-bsr-ranges-limit" || name == "global-bsr-ranges-count" || name == "global-bsr-ranges-threshold" || name == "is-global-bsr-ranges-limit-reached" || name == "global-bsr-candidate-rp-set-limit" || name == "global-bsr-candidate-rp-set-count" || name == "global-bsr-candidate-rp-set-threshold" || name == "is-global-route-limit-reached" || name == "topology-interface-state-threshold" || name == "is-global-rxi-limit-reached" || name == "register-threshold" || name == "global-register-limit" || name == "is-global-register-limit-reached")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Gre::Gre()
    :
    gre_hashes(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes>())
	,gre_next_hops(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops>())
{
    gre_hashes->parent = this;
    gre_next_hops->parent = this;

    yang_name = "gre"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Gre::~Gre()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::has_data() const
{
    return (gre_hashes !=  nullptr && gre_hashes->has_data())
	|| (gre_next_hops !=  nullptr && gre_next_hops->has_data());
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::has_operation() const
{
    return is_set(yfilter)
	|| (gre_hashes !=  nullptr && gre_hashes->has_operation())
	|| (gre_next_hops !=  nullptr && gre_next_hops->has_operation());
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Gre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Gre::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Gre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-hashes")
    {
        if(gre_hashes == nullptr)
        {
            gre_hashes = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes>();
        }
        return gre_hashes;
    }

    if(child_yang_name == "gre-next-hops")
    {
        if(gre_next_hops == nullptr)
        {
            gre_next_hops = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops>();
        }
        return gre_next_hops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Gre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(gre_hashes != nullptr)
    {
        children["gre-hashes"] = gre_hashes;
    }

    if(gre_next_hops != nullptr)
    {
        children["gre-next-hops"] = gre_next_hops;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Gre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Pim::Active::Vrfs::Vrf::Gre::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-hashes" || name == "gre-next-hops")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHashes()
{

    yang_name = "gre-hashes"; yang_parent_name = "gre"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::~GreHashes()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::has_data() const
{
    for (std::size_t index=0; index<gre_hash.size(); index++)
    {
        if(gre_hash[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::has_operation() const
{
    for (std::size_t index=0; index<gre_hash.size(); index++)
    {
        if(gre_hash[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-hashes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-hash")
    {
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash>();
        c->parent = this;
        gre_hash.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : gre_hash)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-hash")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::GreHash()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    ifname{YType::str, "ifname"},
    next_hop_interface{YType::str, "next-hop-interface"}
{

    yang_name = "gre-hash"; yang_parent_name = "gre-hashes"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::~GreHash()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| ifname.is_set
	|| next_hop_interface.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(next_hop_interface.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-hash" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[ifname='" <<ifname <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.yfilter)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ifname")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
        next_hop_interface.value_namespace = name_space;
        next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "ifname")
    {
        ifname.yfilter = yfilter;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreHashes::GreHash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "ifname" || name == "next-hop-interface")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHops()
{

    yang_name = "gre-next-hops"; yang_parent_name = "gre"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::~GreNextHops()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::has_data() const
{
    for (std::size_t index=0; index<gre_next_hop.size(); index++)
    {
        if(gre_next_hop[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::has_operation() const
{
    for (std::size_t index=0; index<gre_next_hop.size(); index++)
    {
        if(gre_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-next-hops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-next-hop")
    {
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop>();
        c->parent = this;
        gre_next_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : gre_next_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-next-hop")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GreNextHop()
    :
    destination_address{YType::str, "destination-address"},
    metric{YType::uint32, "metric"},
    metric_preference{YType::uint32, "metric-preference"},
    is_connected{YType::uint8, "is-connected"}
    	,
    registered_address(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress>())
{
    registered_address->parent = this;

    yang_name = "gre-next-hop"; yang_parent_name = "gre-next-hops"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::~GreNextHop()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::has_data() const
{
    for (std::size_t index=0; index<gre_path.size(); index++)
    {
        if(gre_path[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| metric.is_set
	|| metric_preference.is_set
	|| is_connected.is_set
	|| (registered_address !=  nullptr && registered_address->has_data());
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::has_operation() const
{
    for (std::size_t index=0; index<gre_path.size(); index++)
    {
        if(gre_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_preference.yfilter)
	|| ydk::is_set(is_connected.yfilter)
	|| (registered_address !=  nullptr && registered_address->has_operation());
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-next-hop" <<"[destination-address='" <<destination_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_preference.is_set || is_set(metric_preference.yfilter)) leaf_name_data.push_back(metric_preference.get_name_leafdata());
    if (is_connected.is_set || is_set(is_connected.yfilter)) leaf_name_data.push_back(is_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "registered-address")
    {
        if(registered_address == nullptr)
        {
            registered_address = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress>();
        }
        return registered_address;
    }

    if(child_yang_name == "gre-path")
    {
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath>();
        c->parent = this;
        gre_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(registered_address != nullptr)
    {
        children["registered-address"] = registered_address;
    }

    count = 0;
    for (auto const & c : gre_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-preference")
    {
        metric_preference = value;
        metric_preference.value_namespace = name_space;
        metric_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connected")
    {
        is_connected = value;
        is_connected.value_namespace = name_space;
        is_connected.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-preference")
    {
        metric_preference.yfilter = yfilter;
    }
    if(value_path == "is-connected")
    {
        is_connected.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "registered-address" || name == "gre-path" || name == "destination-address" || name == "metric" || name == "metric-preference" || name == "is-connected")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::RegisteredAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "registered-address"; yang_parent_name = "gre-next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::~RegisteredAddress()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::RegisteredAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GrePath()
    :
    gre_interface_name{YType::str, "gre-interface-name"},
    is_gre_interface_disabled{YType::boolean, "is-gre-interface-disabled"},
    is_via_lsm{YType::boolean, "is-via-lsm"},
    is_connector_attribute_present{YType::boolean, "is-connector-attribute-present"},
    extranet_vrf_name{YType::str, "extranet-vrf-name"}
    	,
    gre_neighbor(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor>())
	,gre_next_hop(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_>())
{
    gre_neighbor->parent = this;
    gre_next_hop->parent = this;

    yang_name = "gre-path"; yang_parent_name = "gre-next-hop"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::~GrePath()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::has_data() const
{
    return gre_interface_name.is_set
	|| is_gre_interface_disabled.is_set
	|| is_via_lsm.is_set
	|| is_connector_attribute_present.is_set
	|| extranet_vrf_name.is_set
	|| (gre_neighbor !=  nullptr && gre_neighbor->has_data())
	|| (gre_next_hop !=  nullptr && gre_next_hop->has_data());
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(gre_interface_name.yfilter)
	|| ydk::is_set(is_gre_interface_disabled.yfilter)
	|| ydk::is_set(is_via_lsm.yfilter)
	|| ydk::is_set(is_connector_attribute_present.yfilter)
	|| ydk::is_set(extranet_vrf_name.yfilter)
	|| (gre_neighbor !=  nullptr && gre_neighbor->has_operation())
	|| (gre_next_hop !=  nullptr && gre_next_hop->has_operation());
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gre_interface_name.is_set || is_set(gre_interface_name.yfilter)) leaf_name_data.push_back(gre_interface_name.get_name_leafdata());
    if (is_gre_interface_disabled.is_set || is_set(is_gre_interface_disabled.yfilter)) leaf_name_data.push_back(is_gre_interface_disabled.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.yfilter)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());
    if (is_connector_attribute_present.is_set || is_set(is_connector_attribute_present.yfilter)) leaf_name_data.push_back(is_connector_attribute_present.get_name_leafdata());
    if (extranet_vrf_name.is_set || is_set(extranet_vrf_name.yfilter)) leaf_name_data.push_back(extranet_vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-neighbor")
    {
        if(gre_neighbor == nullptr)
        {
            gre_neighbor = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor>();
        }
        return gre_neighbor;
    }

    if(child_yang_name == "gre-next-hop")
    {
        if(gre_next_hop == nullptr)
        {
            gre_next_hop = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_>();
        }
        return gre_next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(gre_neighbor != nullptr)
    {
        children["gre-neighbor"] = gre_neighbor;
    }

    if(gre_next_hop != nullptr)
    {
        children["gre-next-hop"] = gre_next_hop;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "gre-interface-name")
    {
        gre_interface_name = value;
        gre_interface_name.value_namespace = name_space;
        gre_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-gre-interface-disabled")
    {
        is_gre_interface_disabled = value;
        is_gre_interface_disabled.value_namespace = name_space;
        is_gre_interface_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
        is_via_lsm.value_namespace = name_space;
        is_via_lsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connector-attribute-present")
    {
        is_connector_attribute_present = value;
        is_connector_attribute_present.value_namespace = name_space;
        is_connector_attribute_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extranet-vrf-name")
    {
        extranet_vrf_name = value;
        extranet_vrf_name.value_namespace = name_space;
        extranet_vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "gre-interface-name")
    {
        gre_interface_name.yfilter = yfilter;
    }
    if(value_path == "is-gre-interface-disabled")
    {
        is_gre_interface_disabled.yfilter = yfilter;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm.yfilter = yfilter;
    }
    if(value_path == "is-connector-attribute-present")
    {
        is_connector_attribute_present.yfilter = yfilter;
    }
    if(value_path == "extranet-vrf-name")
    {
        extranet_vrf_name.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-neighbor" || name == "gre-next-hop" || name == "gre-interface-name" || name == "is-gre-interface-disabled" || name == "is-via-lsm" || name == "is-connector-attribute-present" || name == "extranet-vrf-name")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::GreNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "gre-neighbor"; yang_parent_name = "gre-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::~GreNeighbor()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::GreNextHop_()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "gre-next-hop"; yang_parent_name = "gre-path"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::~GreNextHop_()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinners()
{

    yang_name = "bidir-df-winners"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::~BidirDfWinners()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::has_data() const
{
    for (std::size_t index=0; index<bidir_df_winner.size(); index++)
    {
        if(bidir_df_winner[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::has_operation() const
{
    for (std::size_t index=0; index<bidir_df_winner.size(); index++)
    {
        if(bidir_df_winner[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-df-winners";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bidir-df-winner")
    {
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner>();
        c->parent = this;
        bidir_df_winner.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bidir_df_winner)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidir-df-winner")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::BidirDfWinner()
    :
    rp_address{YType::str, "rp-address"},
    interface_name{YType::str, "interface-name"},
    pim_interface_name{YType::str, "pim-interface-name"},
    are_we_df{YType::boolean, "are-we-df"},
    rp_lan{YType::boolean, "rp-lan"},
    metric{YType::uint32, "metric"},
    metric_preference{YType::uint32, "metric-preference"},
    uptime{YType::uint64, "uptime"}
    	,
    rp_address_xr(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr>())
	,df_winner(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner>())
{
    rp_address_xr->parent = this;
    df_winner->parent = this;

    yang_name = "bidir-df-winner"; yang_parent_name = "bidir-df-winners"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::~BidirDfWinner()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::has_data() const
{
    return rp_address.is_set
	|| interface_name.is_set
	|| pim_interface_name.is_set
	|| are_we_df.is_set
	|| rp_lan.is_set
	|| metric.is_set
	|| metric_preference.is_set
	|| uptime.is_set
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_data())
	|| (df_winner !=  nullptr && df_winner->has_data());
}

bool Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(pim_interface_name.yfilter)
	|| ydk::is_set(are_we_df.yfilter)
	|| ydk::is_set(rp_lan.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_preference.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_operation())
	|| (df_winner !=  nullptr && df_winner->has_operation());
}

std::string Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-df-winner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (pim_interface_name.is_set || is_set(pim_interface_name.yfilter)) leaf_name_data.push_back(pim_interface_name.get_name_leafdata());
    if (are_we_df.is_set || is_set(are_we_df.yfilter)) leaf_name_data.push_back(are_we_df.get_name_leafdata());
    if (rp_lan.is_set || is_set(rp_lan.yfilter)) leaf_name_data.push_back(rp_lan.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_preference.is_set || is_set(metric_preference.yfilter)) leaf_name_data.push_back(metric_preference.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address-xr")
    {
        if(rp_address_xr == nullptr)
        {
            rp_address_xr = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr>();
        }
        return rp_address_xr;
    }

    if(child_yang_name == "df-winner")
    {
        if(df_winner == nullptr)
        {
            df_winner = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner>();
        }
        return df_winner;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rp_address_xr != nullptr)
    {
        children["rp-address-xr"] = rp_address_xr;
    }

    if(df_winner != nullptr)
    {
        children["df-winner"] = df_winner;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pim-interface-name")
    {
        pim_interface_name = value;
        pim_interface_name.value_namespace = name_space;
        pim_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-we-df")
    {
        are_we_df = value;
        are_we_df.value_namespace = name_space;
        are_we_df.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-lan")
    {
        rp_lan = value;
        rp_lan.value_namespace = name_space;
        rp_lan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-preference")
    {
        metric_preference = value;
        metric_preference.value_namespace = name_space;
        metric_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "pim-interface-name")
    {
        pim_interface_name.yfilter = yfilter;
    }
    if(value_path == "are-we-df")
    {
        are_we_df.yfilter = yfilter;
    }
    if(value_path == "rp-lan")
    {
        rp_lan.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-preference")
    {
        metric_preference.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address-xr" || name == "df-winner" || name == "rp-address" || name == "interface-name" || name == "pim-interface-name" || name == "are-we-df" || name == "rp-lan" || name == "metric" || name == "metric-preference" || name == "uptime")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::RpAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address-xr"; yang_parent_name = "bidir-df-winner"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::~RpAddressXr()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::RpAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::DfWinner()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "df-winner"; yang_parent_name = "bidir-df-winner"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::~DfWinner()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "df-winner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::BidirDfWinners::BidirDfWinner::DfWinner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::TableContexts::TableContexts()
{

    yang_name = "table-contexts"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::TableContexts::~TableContexts()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::TableContexts::has_data() const
{
    for (std::size_t index=0; index<table_context.size(); index++)
    {
        if(table_context[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Pim::Active::Vrfs::Vrf::TableContexts::has_operation() const
{
    for (std::size_t index=0; index<table_context.size(); index++)
    {
        if(table_context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::TableContexts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-contexts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::TableContexts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::TableContexts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table-context")
    {
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::TableContexts::TableContext>();
        c->parent = this;
        table_context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::TableContexts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : table_context)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::TableContexts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Pim::Active::Vrfs::Vrf::TableContexts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::TableContexts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-context")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::TableContexts::TableContext::TableContext()
    :
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"},
    afi{YType::uint32, "afi"},
    safi{YType::uint32, "safi"},
    table_name{YType::str, "table-name"},
    vrf_id{YType::uint32, "vrf-id"},
    table_id{YType::uint32, "table-id"},
    is_active{YType::boolean, "is-active"},
    is_ital_registration_done{YType::boolean, "is-ital-registration-done"},
    is_rib_registration_done{YType::boolean, "is-rib-registration-done"},
    is_rib_convergence_received{YType::boolean, "is-rib-convergence-received"},
    is_rib_convergence{YType::boolean, "is-rib-convergence"},
    rpf_registrations{YType::uint32, "rpf-registrations"}
{

    yang_name = "table-context"; yang_parent_name = "table-contexts"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::TableContexts::TableContext::~TableContext()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::TableContexts::TableContext::has_data() const
{
    return saf_name.is_set
	|| topology_name.is_set
	|| afi.is_set
	|| safi.is_set
	|| table_name.is_set
	|| vrf_id.is_set
	|| table_id.is_set
	|| is_active.is_set
	|| is_ital_registration_done.is_set
	|| is_rib_registration_done.is_set
	|| is_rib_convergence_received.is_set
	|| is_rib_convergence.is_set
	|| rpf_registrations.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::TableContexts::TableContext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(safi.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(is_ital_registration_done.yfilter)
	|| ydk::is_set(is_rib_registration_done.yfilter)
	|| ydk::is_set(is_rib_convergence_received.yfilter)
	|| ydk::is_set(is_rib_convergence.yfilter)
	|| ydk::is_set(rpf_registrations.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::TableContexts::TableContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::TableContexts::TableContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (safi.is_set || is_set(safi.yfilter)) leaf_name_data.push_back(safi.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (is_ital_registration_done.is_set || is_set(is_ital_registration_done.yfilter)) leaf_name_data.push_back(is_ital_registration_done.get_name_leafdata());
    if (is_rib_registration_done.is_set || is_set(is_rib_registration_done.yfilter)) leaf_name_data.push_back(is_rib_registration_done.get_name_leafdata());
    if (is_rib_convergence_received.is_set || is_set(is_rib_convergence_received.yfilter)) leaf_name_data.push_back(is_rib_convergence_received.get_name_leafdata());
    if (is_rib_convergence.is_set || is_set(is_rib_convergence.yfilter)) leaf_name_data.push_back(is_rib_convergence.get_name_leafdata());
    if (rpf_registrations.is_set || is_set(rpf_registrations.yfilter)) leaf_name_data.push_back(rpf_registrations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::TableContexts::TableContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::TableContexts::TableContext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::TableContexts::TableContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi")
    {
        safi = value;
        safi.value_namespace = name_space;
        safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ital-registration-done")
    {
        is_ital_registration_done = value;
        is_ital_registration_done.value_namespace = name_space;
        is_ital_registration_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-registration-done")
    {
        is_rib_registration_done = value;
        is_rib_registration_done.value_namespace = name_space;
        is_rib_registration_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-convergence-received")
    {
        is_rib_convergence_received = value;
        is_rib_convergence_received.value_namespace = name_space;
        is_rib_convergence_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence = value;
        is_rib_convergence.value_namespace = name_space;
        is_rib_convergence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations = value;
        rpf_registrations.value_namespace = name_space;
        rpf_registrations.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::TableContexts::TableContext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "safi")
    {
        safi.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "is-ital-registration-done")
    {
        is_ital_registration_done.yfilter = yfilter;
    }
    if(value_path == "is-rib-registration-done")
    {
        is_rib_registration_done.yfilter = yfilter;
    }
    if(value_path == "is-rib-convergence-received")
    {
        is_rib_convergence_received.yfilter = yfilter;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence.yfilter = yfilter;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::TableContexts::TableContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "saf-name" || name == "topology-name" || name == "afi" || name == "safi" || name == "table-name" || name == "vrf-id" || name == "table-id" || name == "is-active" || name == "is-ital-registration-done" || name == "is-rib-registration-done" || name == "is-rib-convergence-received" || name == "is-rib-convergence" || name == "rpf-registrations")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummaries()
{

    yang_name = "neighbor-summaries"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::~NeighborSummaries()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::has_data() const
{
    for (std::size_t index=0; index<neighbor_summary.size(); index++)
    {
        if(neighbor_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::has_operation() const
{
    for (std::size_t index=0; index<neighbor_summary.size(); index++)
    {
        if(neighbor_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-summary")
    {
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary>();
        c->parent = this;
        neighbor_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-summary")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::NeighborSummary()
    :
    interface_name{YType::str, "interface-name"},
    number_of_neighbors{YType::int32, "number-of-neighbors"},
    number_of_external_neighbors{YType::int32, "number-of-external-neighbors"}
{

    yang_name = "neighbor-summary"; yang_parent_name = "neighbor-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::~NeighborSummary()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::has_data() const
{
    return interface_name.is_set
	|| number_of_neighbors.is_set
	|| number_of_external_neighbors.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(number_of_neighbors.yfilter)
	|| ydk::is_set(number_of_external_neighbors.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (number_of_neighbors.is_set || is_set(number_of_neighbors.yfilter)) leaf_name_data.push_back(number_of_neighbors.get_name_leafdata());
    if (number_of_external_neighbors.is_set || is_set(number_of_external_neighbors.yfilter)) leaf_name_data.push_back(number_of_external_neighbors.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors = value;
        number_of_neighbors.value_namespace = name_space;
        number_of_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-external-neighbors")
    {
        number_of_external_neighbors = value;
        number_of_external_neighbors.value_namespace = name_space;
        number_of_external_neighbors.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-external-neighbors")
    {
        number_of_external_neighbors.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::NeighborSummaries::NeighborSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "number-of-neighbors" || name == "number-of-external-neighbors")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Context::Context()
    :
    vrf_id{YType::uint32, "vrf-id"},
    table_id{YType::uint32, "table-id"},
    murib_id{YType::uint32, "murib-id"},
    rpf_id{YType::uint32, "rpf-id"},
    remote_table_id{YType::uint32, "remote-table-id"},
    mdt_default_group{YType::str, "mdt-default-group"},
    mdt_source{YType::str, "mdt-source"},
    mdt_source_interface{YType::str, "mdt-source-interface"},
    mdt_interface{YType::str, "mdt-interface"},
    mdt_gre_rpf_identifier{YType::uint32, "mdt-gre-rpf-identifier"},
    mdt_gre_remote_rpf_identifier{YType::uint32, "mdt-gre-remote-rpf-identifier"},
    is_unicast_rib_registration{YType::boolean, "is-unicast-rib-registration"},
    is_multicast_rib_registration{YType::boolean, "is-multicast-rib-registration"},
    is_active{YType::boolean, "is-active"},
    is_active_ital{YType::boolean, "is-active-ital"},
    is_mrib_register{YType::boolean, "is-mrib-register"},
    is_mdt_owner{YType::boolean, "is-mdt-owner"},
    is_routing_enabled{YType::boolean, "is-routing-enabled"},
    is_socket_add_required{YType::boolean, "is-socket-add-required"},
    is_socket_added{YType::boolean, "is-socket-added"},
    is_lpts_socket_add_required{YType::boolean, "is-lpts-socket-add-required"},
    is_lpts_socket_added{YType::boolean, "is-lpts-socket-added"},
    is_udp_socket_add_required{YType::boolean, "is-udp-socket-add-required"},
    is_udp_socket_added{YType::boolean, "is-udp-socket-added"},
    is_udp_socket_bind_required{YType::boolean, "is-udp-socket-bind-required"},
    is_udp_socket_bind{YType::boolean, "is-udp-socket-bind"},
    is_register_injection_socket_add_required{YType::boolean, "is-register-injection-socket-add-required"},
    is_register_injection_socket_added{YType::boolean, "is-register-injection-socket-added"},
    is_register_injection_lpts_socket_add_required{YType::boolean, "is-register-injection-lpts-socket-add-required"},
    is_register_injection_lpts_socket_added{YType::boolean, "is-register-injection-lpts-socket-added"},
    is_m_host_publish_pending{YType::boolean, "is-m-host-publish-pending"},
    mhost_interface{YType::str, "mhost-interface"},
    mhost_default_interface_config{YType::str, "mhost-default-interface-config"},
    mdt_mtu{YType::uint32, "mdt-mtu"},
    maximum_mdt_aggregation{YType::uint32, "maximum-mdt-aggregation"},
    mdt_data_switchover_interval{YType::uint32, "mdt-data-switchover-interval"},
    mdt_data_announce_interval{YType::uint32, "mdt-data-announce-interval"},
    non_default_vrf_count_on_socket{YType::uint32, "non-default-vrf-count-on-socket"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    mdt_neighbor_filter_name{YType::str, "mdt-neighbor-filter-name"},
    allow_rp_configured{YType::boolean, "allow-rp-configured"},
    allow_rp_group_list{YType::str, "allow-rp-group-list"},
    allow_rp_rp_list{YType::str, "allow-rp-rp-list"},
    sg_expiry_timer_configured{YType::boolean, "sg-expiry-timer-configured"},
    sg_expiry_time{YType::uint16, "sg-expiry-time"},
    sg_expiry_timer_sg_list{YType::str, "sg-expiry-timer-sg-list"},
    mldp_mdt_name{YType::str, "mldp-mdt-name"},
    mldp_mdt_interface{YType::str, "mldp-mdt-interface"},
    mldp_mdt_mtu{YType::uint32, "mldp-mdt-mtu"},
    mldp_maximum_mdt_aggregation{YType::uint32, "mldp-maximum-mdt-aggregation"},
    mldp_mdt_data_switchover_interval{YType::uint32, "mldp-mdt-data-switchover-interval"},
    mldp_mdt_data_announce_interval{YType::uint32, "mldp-mdt-data-announce-interval"},
    mldp_mdt_rpf_identifier{YType::uint32, "mldp-mdt-rpf-identifier"},
    mldp_mdt_remote_rpf_identifier{YType::uint32, "mldp-mdt-remote-rpf-identifier"},
    is_create_mldp_mdt_interface{YType::boolean, "is-create-mldp-mdt-interface"},
    is_mldp_mdt_owner{YType::boolean, "is-mldp-mdt-owner"},
    mldp_root_count{YType::uint32, "mldp-root-count"},
    mldp_head_lsm_identifier{YType::uint32, "mldp-head-lsm-identifier"},
    mldp_remote_head_lsm_identifier{YType::uint32, "mldp-remote-head-lsm-identifier"},
    organization_unique_identifier{YType::uint32, "organization-unique-identifier"},
    vpn_index{YType::uint32, "vpn-index"},
    mldp_partitioned_mdt_configured{YType::boolean, "mldp-partitioned-mdt-configured"},
    mldp_remote_partitioned_mdt_configured{YType::boolean, "mldp-remote-partitioned-mdt-configured"},
    mldp_partioned_mp2m_ptree{YType::boolean, "mldp-partioned-mp2m-ptree"},
    mldp_partitioned_head_lsm_identifier{YType::uint32, "mldp-partitioned-head-lsm-identifier"},
    mldp_head_local_label{YType::uint32, "mldp-head-local-label"},
    mldp_partitioned_mdt_identifier{YType::uint32, "mldp-partitioned-mdt-identifier"},
    bgp_auto_discovery_configured{YType::boolean, "bgp-auto-discovery-configured"},
    suppress_pim_data_mdt_tlv{YType::boolean, "suppress-pim-data-mdt-tlv"},
    inter_autonomous_system_enabled{YType::boolean, "inter-autonomous-system-enabled"},
    bgp_source_active_announce{YType::boolean, "bgp-source-active-announce"},
    bgp_i_pmsi_added{YType::boolean, "bgp-i-pmsi-added"},
    mldp_bsr_control_tree_added{YType::boolean, "mldp-bsr-control-tree-added"},
    mldp_auto_rp_discovery_tree_added{YType::boolean, "mldp-auto-rp-discovery-tree-added"},
    mldp_auto_rp_announce_tree_added{YType::boolean, "mldp-auto-rp-announce-tree-added"},
    bgp_auto_discovery_type{YType::uint32, "bgp-auto-discovery-type"},
    mdt_partitioned_mdt_control_identifier{YType::uint32, "mdt-partitioned-mdt-control-identifier"},
    mdt_partitioned_ir_control_identifier{YType::uint32, "mdt-partitioned-ir-control-identifier"},
    mldp_control_head_lsm_identifier{YType::uint32, "mldp-control-head-lsm-identifier"},
    umh{YType::boolean, "umh"},
    suppress_shared_tree_join{YType::boolean, "suppress-shared-tree-join"},
    rsvp_te_mdt_name{YType::str, "rsvp-te-mdt-name"},
    rsvp_te_mdt_interface{YType::str, "rsvp-te-mdt-interface"},
    rsvp_te_mdt_mtu{YType::uint32, "rsvp-te-mdt-mtu"},
    rsvp_te_maximum_mdt_aggregation{YType::uint32, "rsvp-te-maximum-mdt-aggregation"},
    rsvp_te_mdt_data_switchover_interval{YType::uint32, "rsvp-te-mdt-data-switchover-interval"},
    rsvp_te_mdt_data_announce_interval{YType::uint32, "rsvp-te-mdt-data-announce-interval"},
    rsvp_te_mdt_rpf_identifier{YType::uint32, "rsvp-te-mdt-rpf-identifier"},
    is_create_rsvp_te_mdt_interface{YType::boolean, "is-create-rsvp-te-mdt-interface"},
    is_rsvp_te_mdt_owner{YType::boolean, "is-rsvp-te-mdt-owner"},
    rsvp_te_mdt_static_p2mp_count{YType::uint32, "rsvp-te-mdt-static-p2mp-count"},
    p2mpte_li_drop{YType::uint32, "p2mpte-li-drop"},
    ir_mdt_name{YType::str, "ir-mdt-name"},
    ir_mdt_interface{YType::str, "ir-mdt-interface"},
    ir_mdt_mtu{YType::uint32, "ir-mdt-mtu"},
    ir_maximum_mdt_aggregation{YType::uint32, "ir-maximum-mdt-aggregation"},
    ir_mdt_data_switchover_interval{YType::uint32, "ir-mdt-data-switchover-interval"},
    ir_mdt_data_announce_interval{YType::uint32, "ir-mdt-data-announce-interval"},
    ir_mdt_rpf_identifier{YType::uint32, "ir-mdt-rpf-identifier"},
    ir_mdt_tail_label{YType::uint32, "ir-mdt-tail-label"},
    is_create_ir_mdt_interface{YType::boolean, "is-create-ir-mdt-interface"},
    is_ir_mdt_owner{YType::boolean, "is-ir-mdt-owner"},
    in_b_and_mdt_name{YType::str, "in-b-and-mdt-name"},
    in_b_and_mdt_interface{YType::str, "in-b-and-mdt-interface"},
    in_b_and_mdt_mtu{YType::uint32, "in-b-and-mdt-mtu"},
    in_band_maximum_mdt_aggregation{YType::uint32, "in-band-maximum-mdt-aggregation"},
    in_b_and_mdt_data_switchover_interval{YType::uint32, "in-b-and-mdt-data-switchover-interval"},
    in_b_and_mdt_data_announce_interval{YType::uint32, "in-b-and-mdt-data-announce-interval"},
    in_b_and_mdt_rpf_identifier{YType::uint32, "in-b-and-mdt-rpf-identifier"},
    is_create_in_b_and_mdt_interface{YType::boolean, "is-create-in-b-and-mdt-interface"},
    is_in_b_and_mdt_owner{YType::boolean, "is-in-b-and-mdt-owner"},
    in_band_signaling_local_enabled{YType::boolean, "in-band-signaling-local-enabled"},
    in_band_signaling_remote_enabled{YType::boolean, "in-band-signaling-remote-enabled"},
    valid_rd_present{YType::boolean, "valid-rd-present"},
    stale_rd_present{YType::boolean, "stale-rd-present"},
    route_distinguisher{YType::str, "route-distinguisher"},
    gin_b_and_mdt_name{YType::str, "gin-b-and-mdt-name"},
    gin_b_and_mdt_interface{YType::str, "gin-b-and-mdt-interface"},
    gin_b_and_mdt_mtu{YType::uint32, "gin-b-and-mdt-mtu"},
    gin_band_maximum_mdt_aggregation{YType::uint32, "gin-band-maximum-mdt-aggregation"},
    gin_b_and_mdt_data_switchover_interval{YType::uint32, "gin-b-and-mdt-data-switchover-interval"},
    gin_b_and_mdt_data_announce_interval{YType::uint32, "gin-b-and-mdt-data-announce-interval"},
    gin_b_and_mdt_rpf_identifier{YType::uint32, "gin-b-and-mdt-rpf-identifier"},
    is_create_gin_b_and_mdt_interface{YType::boolean, "is-create-gin-b-and-mdt-interface"},
    is_gin_b_and_mdt_owner{YType::boolean, "is-gin-b-and-mdt-owner"},
    is_pim_nsf_rib_converged{YType::boolean, "is-pim-nsf-rib-converged"},
    is_pim_nsf_rib_converge_received{YType::boolean, "is-pim-nsf-rib-converge-received"},
    is_rib_multipath_enabled{YType::boolean, "is-rib-multipath-enabled"},
    is_rib_multipath_interface_hash{YType::boolean, "is-rib-multipath-interface-hash"},
    is_rib_multipath_source_hash{YType::boolean, "is-rib-multipath-source-hash"},
    is_rib_multipath_source_next_hop_hash{YType::boolean, "is-rib-multipath-source-next-hop-hash"},
    rump_enabled{YType::boolean, "rump-enabled"},
    is_create_mdt_interface{YType::boolean, "is-create-mdt-interface"},
    is_auto_rp_listen_enabled{YType::boolean, "is-auto-rp-listen-enabled"},
    is_all_interface_disable_operation{YType::boolean, "is-all-interface-disable-operation"},
    is_default_granges{YType::boolean, "is-default-granges"},
    is_auto_rp_listen_sock_add{YType::boolean, "is-auto-rp-listen-sock-add"},
    is_redistribution_reset{YType::boolean, "is-redistribution-reset"},
    redistribution_reset_count{YType::uint32, "redistribution-reset-count"},
    rpf_policy_name{YType::str, "rpf-policy-name"},
    table_count{YType::uint32, "table-count"},
    active_table_count{YType::uint32, "active-table-count"},
    anycast_rp_policy_name{YType::str, "anycast-rp-policy-name"},
    anycast_rp_configured{YType::boolean, "anycast-rp-configured"},
    bgp_remote_on{YType::boolean, "bgp-remote-on"},
    bgp_remote_interface_name{YType::str, "bgp-remote-interface-name"},
    bgp_remote_interface{YType::str, "bgp-remote-interface"},
    bgp_remote_address{YType::str, "bgp-remote-address"},
    bgp_remote_state{YType::uint32, "bgp-remote-state"},
    physical_interface_count{YType::uint64, "physical-interface-count"},
    virtual_interface_count{YType::uint64, "virtual-interface-count"},
    virtual_mlc_interface_name{YType::str, "virtual-mlc-interface-name"},
    mdt_immediate_switch{YType::boolean, "mdt-immediate-switch"},
    mldp_root_address{YType::uint32, "mldp-root-address"}
    	,
    remote_default_group(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup>())
	,rpf_default_table(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable>())
{
    remote_default_group->parent = this;
    rpf_default_table->parent = this;

    yang_name = "context"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Context::~Context()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::has_data() const
{
    for (std::size_t index=0; index<export_route_target.size(); index++)
    {
        if(export_route_target[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<import_route_target.size(); index++)
    {
        if(import_route_target[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<anycast_rp_range.size(); index++)
    {
        if(anycast_rp_range[index]->has_data())
            return true;
    }
    for (auto const & leaf : mldp_root_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return vrf_id.is_set
	|| table_id.is_set
	|| murib_id.is_set
	|| rpf_id.is_set
	|| remote_table_id.is_set
	|| mdt_default_group.is_set
	|| mdt_source.is_set
	|| mdt_source_interface.is_set
	|| mdt_interface.is_set
	|| mdt_gre_rpf_identifier.is_set
	|| mdt_gre_remote_rpf_identifier.is_set
	|| is_unicast_rib_registration.is_set
	|| is_multicast_rib_registration.is_set
	|| is_active.is_set
	|| is_active_ital.is_set
	|| is_mrib_register.is_set
	|| is_mdt_owner.is_set
	|| is_routing_enabled.is_set
	|| is_socket_add_required.is_set
	|| is_socket_added.is_set
	|| is_lpts_socket_add_required.is_set
	|| is_lpts_socket_added.is_set
	|| is_udp_socket_add_required.is_set
	|| is_udp_socket_added.is_set
	|| is_udp_socket_bind_required.is_set
	|| is_udp_socket_bind.is_set
	|| is_register_injection_socket_add_required.is_set
	|| is_register_injection_socket_added.is_set
	|| is_register_injection_lpts_socket_add_required.is_set
	|| is_register_injection_lpts_socket_added.is_set
	|| is_m_host_publish_pending.is_set
	|| mhost_interface.is_set
	|| mhost_default_interface_config.is_set
	|| mdt_mtu.is_set
	|| maximum_mdt_aggregation.is_set
	|| mdt_data_switchover_interval.is_set
	|| mdt_data_announce_interval.is_set
	|| non_default_vrf_count_on_socket.is_set
	|| neighbor_filter_name.is_set
	|| mdt_neighbor_filter_name.is_set
	|| allow_rp_configured.is_set
	|| allow_rp_group_list.is_set
	|| allow_rp_rp_list.is_set
	|| sg_expiry_timer_configured.is_set
	|| sg_expiry_time.is_set
	|| sg_expiry_timer_sg_list.is_set
	|| mldp_mdt_name.is_set
	|| mldp_mdt_interface.is_set
	|| mldp_mdt_mtu.is_set
	|| mldp_maximum_mdt_aggregation.is_set
	|| mldp_mdt_data_switchover_interval.is_set
	|| mldp_mdt_data_announce_interval.is_set
	|| mldp_mdt_rpf_identifier.is_set
	|| mldp_mdt_remote_rpf_identifier.is_set
	|| is_create_mldp_mdt_interface.is_set
	|| is_mldp_mdt_owner.is_set
	|| mldp_root_count.is_set
	|| mldp_head_lsm_identifier.is_set
	|| mldp_remote_head_lsm_identifier.is_set
	|| organization_unique_identifier.is_set
	|| vpn_index.is_set
	|| mldp_partitioned_mdt_configured.is_set
	|| mldp_remote_partitioned_mdt_configured.is_set
	|| mldp_partioned_mp2m_ptree.is_set
	|| mldp_partitioned_head_lsm_identifier.is_set
	|| mldp_head_local_label.is_set
	|| mldp_partitioned_mdt_identifier.is_set
	|| bgp_auto_discovery_configured.is_set
	|| suppress_pim_data_mdt_tlv.is_set
	|| inter_autonomous_system_enabled.is_set
	|| bgp_source_active_announce.is_set
	|| bgp_i_pmsi_added.is_set
	|| mldp_bsr_control_tree_added.is_set
	|| mldp_auto_rp_discovery_tree_added.is_set
	|| mldp_auto_rp_announce_tree_added.is_set
	|| bgp_auto_discovery_type.is_set
	|| mdt_partitioned_mdt_control_identifier.is_set
	|| mdt_partitioned_ir_control_identifier.is_set
	|| mldp_control_head_lsm_identifier.is_set
	|| umh.is_set
	|| suppress_shared_tree_join.is_set
	|| rsvp_te_mdt_name.is_set
	|| rsvp_te_mdt_interface.is_set
	|| rsvp_te_mdt_mtu.is_set
	|| rsvp_te_maximum_mdt_aggregation.is_set
	|| rsvp_te_mdt_data_switchover_interval.is_set
	|| rsvp_te_mdt_data_announce_interval.is_set
	|| rsvp_te_mdt_rpf_identifier.is_set
	|| is_create_rsvp_te_mdt_interface.is_set
	|| is_rsvp_te_mdt_owner.is_set
	|| rsvp_te_mdt_static_p2mp_count.is_set
	|| p2mpte_li_drop.is_set
	|| ir_mdt_name.is_set
	|| ir_mdt_interface.is_set
	|| ir_mdt_mtu.is_set
	|| ir_maximum_mdt_aggregation.is_set
	|| ir_mdt_data_switchover_interval.is_set
	|| ir_mdt_data_announce_interval.is_set
	|| ir_mdt_rpf_identifier.is_set
	|| ir_mdt_tail_label.is_set
	|| is_create_ir_mdt_interface.is_set
	|| is_ir_mdt_owner.is_set
	|| in_b_and_mdt_name.is_set
	|| in_b_and_mdt_interface.is_set
	|| in_b_and_mdt_mtu.is_set
	|| in_band_maximum_mdt_aggregation.is_set
	|| in_b_and_mdt_data_switchover_interval.is_set
	|| in_b_and_mdt_data_announce_interval.is_set
	|| in_b_and_mdt_rpf_identifier.is_set
	|| is_create_in_b_and_mdt_interface.is_set
	|| is_in_b_and_mdt_owner.is_set
	|| in_band_signaling_local_enabled.is_set
	|| in_band_signaling_remote_enabled.is_set
	|| valid_rd_present.is_set
	|| stale_rd_present.is_set
	|| route_distinguisher.is_set
	|| gin_b_and_mdt_name.is_set
	|| gin_b_and_mdt_interface.is_set
	|| gin_b_and_mdt_mtu.is_set
	|| gin_band_maximum_mdt_aggregation.is_set
	|| gin_b_and_mdt_data_switchover_interval.is_set
	|| gin_b_and_mdt_data_announce_interval.is_set
	|| gin_b_and_mdt_rpf_identifier.is_set
	|| is_create_gin_b_and_mdt_interface.is_set
	|| is_gin_b_and_mdt_owner.is_set
	|| is_pim_nsf_rib_converged.is_set
	|| is_pim_nsf_rib_converge_received.is_set
	|| is_rib_multipath_enabled.is_set
	|| is_rib_multipath_interface_hash.is_set
	|| is_rib_multipath_source_hash.is_set
	|| is_rib_multipath_source_next_hop_hash.is_set
	|| rump_enabled.is_set
	|| is_create_mdt_interface.is_set
	|| is_auto_rp_listen_enabled.is_set
	|| is_all_interface_disable_operation.is_set
	|| is_default_granges.is_set
	|| is_auto_rp_listen_sock_add.is_set
	|| is_redistribution_reset.is_set
	|| redistribution_reset_count.is_set
	|| rpf_policy_name.is_set
	|| table_count.is_set
	|| active_table_count.is_set
	|| anycast_rp_policy_name.is_set
	|| anycast_rp_configured.is_set
	|| bgp_remote_on.is_set
	|| bgp_remote_interface_name.is_set
	|| bgp_remote_interface.is_set
	|| bgp_remote_address.is_set
	|| bgp_remote_state.is_set
	|| physical_interface_count.is_set
	|| virtual_interface_count.is_set
	|| virtual_mlc_interface_name.is_set
	|| mdt_immediate_switch.is_set
	|| (remote_default_group !=  nullptr && remote_default_group->has_data())
	|| (rpf_default_table !=  nullptr && rpf_default_table->has_data());
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::has_operation() const
{
    for (std::size_t index=0; index<export_route_target.size(); index++)
    {
        if(export_route_target[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<import_route_target.size(); index++)
    {
        if(import_route_target[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<anycast_rp_range.size(); index++)
    {
        if(anycast_rp_range[index]->has_operation())
            return true;
    }
    for (auto const & leaf : mldp_root_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(murib_id.yfilter)
	|| ydk::is_set(rpf_id.yfilter)
	|| ydk::is_set(remote_table_id.yfilter)
	|| ydk::is_set(mdt_default_group.yfilter)
	|| ydk::is_set(mdt_source.yfilter)
	|| ydk::is_set(mdt_source_interface.yfilter)
	|| ydk::is_set(mdt_interface.yfilter)
	|| ydk::is_set(mdt_gre_rpf_identifier.yfilter)
	|| ydk::is_set(mdt_gre_remote_rpf_identifier.yfilter)
	|| ydk::is_set(is_unicast_rib_registration.yfilter)
	|| ydk::is_set(is_multicast_rib_registration.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(is_active_ital.yfilter)
	|| ydk::is_set(is_mrib_register.yfilter)
	|| ydk::is_set(is_mdt_owner.yfilter)
	|| ydk::is_set(is_routing_enabled.yfilter)
	|| ydk::is_set(is_socket_add_required.yfilter)
	|| ydk::is_set(is_socket_added.yfilter)
	|| ydk::is_set(is_lpts_socket_add_required.yfilter)
	|| ydk::is_set(is_lpts_socket_added.yfilter)
	|| ydk::is_set(is_udp_socket_add_required.yfilter)
	|| ydk::is_set(is_udp_socket_added.yfilter)
	|| ydk::is_set(is_udp_socket_bind_required.yfilter)
	|| ydk::is_set(is_udp_socket_bind.yfilter)
	|| ydk::is_set(is_register_injection_socket_add_required.yfilter)
	|| ydk::is_set(is_register_injection_socket_added.yfilter)
	|| ydk::is_set(is_register_injection_lpts_socket_add_required.yfilter)
	|| ydk::is_set(is_register_injection_lpts_socket_added.yfilter)
	|| ydk::is_set(is_m_host_publish_pending.yfilter)
	|| ydk::is_set(mhost_interface.yfilter)
	|| ydk::is_set(mhost_default_interface_config.yfilter)
	|| ydk::is_set(mdt_mtu.yfilter)
	|| ydk::is_set(maximum_mdt_aggregation.yfilter)
	|| ydk::is_set(mdt_data_switchover_interval.yfilter)
	|| ydk::is_set(mdt_data_announce_interval.yfilter)
	|| ydk::is_set(non_default_vrf_count_on_socket.yfilter)
	|| ydk::is_set(neighbor_filter_name.yfilter)
	|| ydk::is_set(mdt_neighbor_filter_name.yfilter)
	|| ydk::is_set(allow_rp_configured.yfilter)
	|| ydk::is_set(allow_rp_group_list.yfilter)
	|| ydk::is_set(allow_rp_rp_list.yfilter)
	|| ydk::is_set(sg_expiry_timer_configured.yfilter)
	|| ydk::is_set(sg_expiry_time.yfilter)
	|| ydk::is_set(sg_expiry_timer_sg_list.yfilter)
	|| ydk::is_set(mldp_mdt_name.yfilter)
	|| ydk::is_set(mldp_mdt_interface.yfilter)
	|| ydk::is_set(mldp_mdt_mtu.yfilter)
	|| ydk::is_set(mldp_maximum_mdt_aggregation.yfilter)
	|| ydk::is_set(mldp_mdt_data_switchover_interval.yfilter)
	|| ydk::is_set(mldp_mdt_data_announce_interval.yfilter)
	|| ydk::is_set(mldp_mdt_rpf_identifier.yfilter)
	|| ydk::is_set(mldp_mdt_remote_rpf_identifier.yfilter)
	|| ydk::is_set(is_create_mldp_mdt_interface.yfilter)
	|| ydk::is_set(is_mldp_mdt_owner.yfilter)
	|| ydk::is_set(mldp_root_count.yfilter)
	|| ydk::is_set(mldp_head_lsm_identifier.yfilter)
	|| ydk::is_set(mldp_remote_head_lsm_identifier.yfilter)
	|| ydk::is_set(organization_unique_identifier.yfilter)
	|| ydk::is_set(vpn_index.yfilter)
	|| ydk::is_set(mldp_partitioned_mdt_configured.yfilter)
	|| ydk::is_set(mldp_remote_partitioned_mdt_configured.yfilter)
	|| ydk::is_set(mldp_partioned_mp2m_ptree.yfilter)
	|| ydk::is_set(mldp_partitioned_head_lsm_identifier.yfilter)
	|| ydk::is_set(mldp_head_local_label.yfilter)
	|| ydk::is_set(mldp_partitioned_mdt_identifier.yfilter)
	|| ydk::is_set(bgp_auto_discovery_configured.yfilter)
	|| ydk::is_set(suppress_pim_data_mdt_tlv.yfilter)
	|| ydk::is_set(inter_autonomous_system_enabled.yfilter)
	|| ydk::is_set(bgp_source_active_announce.yfilter)
	|| ydk::is_set(bgp_i_pmsi_added.yfilter)
	|| ydk::is_set(mldp_bsr_control_tree_added.yfilter)
	|| ydk::is_set(mldp_auto_rp_discovery_tree_added.yfilter)
	|| ydk::is_set(mldp_auto_rp_announce_tree_added.yfilter)
	|| ydk::is_set(bgp_auto_discovery_type.yfilter)
	|| ydk::is_set(mdt_partitioned_mdt_control_identifier.yfilter)
	|| ydk::is_set(mdt_partitioned_ir_control_identifier.yfilter)
	|| ydk::is_set(mldp_control_head_lsm_identifier.yfilter)
	|| ydk::is_set(umh.yfilter)
	|| ydk::is_set(suppress_shared_tree_join.yfilter)
	|| ydk::is_set(rsvp_te_mdt_name.yfilter)
	|| ydk::is_set(rsvp_te_mdt_interface.yfilter)
	|| ydk::is_set(rsvp_te_mdt_mtu.yfilter)
	|| ydk::is_set(rsvp_te_maximum_mdt_aggregation.yfilter)
	|| ydk::is_set(rsvp_te_mdt_data_switchover_interval.yfilter)
	|| ydk::is_set(rsvp_te_mdt_data_announce_interval.yfilter)
	|| ydk::is_set(rsvp_te_mdt_rpf_identifier.yfilter)
	|| ydk::is_set(is_create_rsvp_te_mdt_interface.yfilter)
	|| ydk::is_set(is_rsvp_te_mdt_owner.yfilter)
	|| ydk::is_set(rsvp_te_mdt_static_p2mp_count.yfilter)
	|| ydk::is_set(p2mpte_li_drop.yfilter)
	|| ydk::is_set(ir_mdt_name.yfilter)
	|| ydk::is_set(ir_mdt_interface.yfilter)
	|| ydk::is_set(ir_mdt_mtu.yfilter)
	|| ydk::is_set(ir_maximum_mdt_aggregation.yfilter)
	|| ydk::is_set(ir_mdt_data_switchover_interval.yfilter)
	|| ydk::is_set(ir_mdt_data_announce_interval.yfilter)
	|| ydk::is_set(ir_mdt_rpf_identifier.yfilter)
	|| ydk::is_set(ir_mdt_tail_label.yfilter)
	|| ydk::is_set(is_create_ir_mdt_interface.yfilter)
	|| ydk::is_set(is_ir_mdt_owner.yfilter)
	|| ydk::is_set(in_b_and_mdt_name.yfilter)
	|| ydk::is_set(in_b_and_mdt_interface.yfilter)
	|| ydk::is_set(in_b_and_mdt_mtu.yfilter)
	|| ydk::is_set(in_band_maximum_mdt_aggregation.yfilter)
	|| ydk::is_set(in_b_and_mdt_data_switchover_interval.yfilter)
	|| ydk::is_set(in_b_and_mdt_data_announce_interval.yfilter)
	|| ydk::is_set(in_b_and_mdt_rpf_identifier.yfilter)
	|| ydk::is_set(is_create_in_b_and_mdt_interface.yfilter)
	|| ydk::is_set(is_in_b_and_mdt_owner.yfilter)
	|| ydk::is_set(in_band_signaling_local_enabled.yfilter)
	|| ydk::is_set(in_band_signaling_remote_enabled.yfilter)
	|| ydk::is_set(valid_rd_present.yfilter)
	|| ydk::is_set(stale_rd_present.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter)
	|| ydk::is_set(gin_b_and_mdt_name.yfilter)
	|| ydk::is_set(gin_b_and_mdt_interface.yfilter)
	|| ydk::is_set(gin_b_and_mdt_mtu.yfilter)
	|| ydk::is_set(gin_band_maximum_mdt_aggregation.yfilter)
	|| ydk::is_set(gin_b_and_mdt_data_switchover_interval.yfilter)
	|| ydk::is_set(gin_b_and_mdt_data_announce_interval.yfilter)
	|| ydk::is_set(gin_b_and_mdt_rpf_identifier.yfilter)
	|| ydk::is_set(is_create_gin_b_and_mdt_interface.yfilter)
	|| ydk::is_set(is_gin_b_and_mdt_owner.yfilter)
	|| ydk::is_set(is_pim_nsf_rib_converged.yfilter)
	|| ydk::is_set(is_pim_nsf_rib_converge_received.yfilter)
	|| ydk::is_set(is_rib_multipath_enabled.yfilter)
	|| ydk::is_set(is_rib_multipath_interface_hash.yfilter)
	|| ydk::is_set(is_rib_multipath_source_hash.yfilter)
	|| ydk::is_set(is_rib_multipath_source_next_hop_hash.yfilter)
	|| ydk::is_set(rump_enabled.yfilter)
	|| ydk::is_set(is_create_mdt_interface.yfilter)
	|| ydk::is_set(is_auto_rp_listen_enabled.yfilter)
	|| ydk::is_set(is_all_interface_disable_operation.yfilter)
	|| ydk::is_set(is_default_granges.yfilter)
	|| ydk::is_set(is_auto_rp_listen_sock_add.yfilter)
	|| ydk::is_set(is_redistribution_reset.yfilter)
	|| ydk::is_set(redistribution_reset_count.yfilter)
	|| ydk::is_set(rpf_policy_name.yfilter)
	|| ydk::is_set(table_count.yfilter)
	|| ydk::is_set(active_table_count.yfilter)
	|| ydk::is_set(anycast_rp_policy_name.yfilter)
	|| ydk::is_set(anycast_rp_configured.yfilter)
	|| ydk::is_set(bgp_remote_on.yfilter)
	|| ydk::is_set(bgp_remote_interface_name.yfilter)
	|| ydk::is_set(bgp_remote_interface.yfilter)
	|| ydk::is_set(bgp_remote_address.yfilter)
	|| ydk::is_set(bgp_remote_state.yfilter)
	|| ydk::is_set(physical_interface_count.yfilter)
	|| ydk::is_set(virtual_interface_count.yfilter)
	|| ydk::is_set(virtual_mlc_interface_name.yfilter)
	|| ydk::is_set(mdt_immediate_switch.yfilter)
	|| ydk::is_set(mldp_root_address.yfilter)
	|| (remote_default_group !=  nullptr && remote_default_group->has_operation())
	|| (rpf_default_table !=  nullptr && rpf_default_table->has_operation());
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (murib_id.is_set || is_set(murib_id.yfilter)) leaf_name_data.push_back(murib_id.get_name_leafdata());
    if (rpf_id.is_set || is_set(rpf_id.yfilter)) leaf_name_data.push_back(rpf_id.get_name_leafdata());
    if (remote_table_id.is_set || is_set(remote_table_id.yfilter)) leaf_name_data.push_back(remote_table_id.get_name_leafdata());
    if (mdt_default_group.is_set || is_set(mdt_default_group.yfilter)) leaf_name_data.push_back(mdt_default_group.get_name_leafdata());
    if (mdt_source.is_set || is_set(mdt_source.yfilter)) leaf_name_data.push_back(mdt_source.get_name_leafdata());
    if (mdt_source_interface.is_set || is_set(mdt_source_interface.yfilter)) leaf_name_data.push_back(mdt_source_interface.get_name_leafdata());
    if (mdt_interface.is_set || is_set(mdt_interface.yfilter)) leaf_name_data.push_back(mdt_interface.get_name_leafdata());
    if (mdt_gre_rpf_identifier.is_set || is_set(mdt_gre_rpf_identifier.yfilter)) leaf_name_data.push_back(mdt_gre_rpf_identifier.get_name_leafdata());
    if (mdt_gre_remote_rpf_identifier.is_set || is_set(mdt_gre_remote_rpf_identifier.yfilter)) leaf_name_data.push_back(mdt_gre_remote_rpf_identifier.get_name_leafdata());
    if (is_unicast_rib_registration.is_set || is_set(is_unicast_rib_registration.yfilter)) leaf_name_data.push_back(is_unicast_rib_registration.get_name_leafdata());
    if (is_multicast_rib_registration.is_set || is_set(is_multicast_rib_registration.yfilter)) leaf_name_data.push_back(is_multicast_rib_registration.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (is_active_ital.is_set || is_set(is_active_ital.yfilter)) leaf_name_data.push_back(is_active_ital.get_name_leafdata());
    if (is_mrib_register.is_set || is_set(is_mrib_register.yfilter)) leaf_name_data.push_back(is_mrib_register.get_name_leafdata());
    if (is_mdt_owner.is_set || is_set(is_mdt_owner.yfilter)) leaf_name_data.push_back(is_mdt_owner.get_name_leafdata());
    if (is_routing_enabled.is_set || is_set(is_routing_enabled.yfilter)) leaf_name_data.push_back(is_routing_enabled.get_name_leafdata());
    if (is_socket_add_required.is_set || is_set(is_socket_add_required.yfilter)) leaf_name_data.push_back(is_socket_add_required.get_name_leafdata());
    if (is_socket_added.is_set || is_set(is_socket_added.yfilter)) leaf_name_data.push_back(is_socket_added.get_name_leafdata());
    if (is_lpts_socket_add_required.is_set || is_set(is_lpts_socket_add_required.yfilter)) leaf_name_data.push_back(is_lpts_socket_add_required.get_name_leafdata());
    if (is_lpts_socket_added.is_set || is_set(is_lpts_socket_added.yfilter)) leaf_name_data.push_back(is_lpts_socket_added.get_name_leafdata());
    if (is_udp_socket_add_required.is_set || is_set(is_udp_socket_add_required.yfilter)) leaf_name_data.push_back(is_udp_socket_add_required.get_name_leafdata());
    if (is_udp_socket_added.is_set || is_set(is_udp_socket_added.yfilter)) leaf_name_data.push_back(is_udp_socket_added.get_name_leafdata());
    if (is_udp_socket_bind_required.is_set || is_set(is_udp_socket_bind_required.yfilter)) leaf_name_data.push_back(is_udp_socket_bind_required.get_name_leafdata());
    if (is_udp_socket_bind.is_set || is_set(is_udp_socket_bind.yfilter)) leaf_name_data.push_back(is_udp_socket_bind.get_name_leafdata());
    if (is_register_injection_socket_add_required.is_set || is_set(is_register_injection_socket_add_required.yfilter)) leaf_name_data.push_back(is_register_injection_socket_add_required.get_name_leafdata());
    if (is_register_injection_socket_added.is_set || is_set(is_register_injection_socket_added.yfilter)) leaf_name_data.push_back(is_register_injection_socket_added.get_name_leafdata());
    if (is_register_injection_lpts_socket_add_required.is_set || is_set(is_register_injection_lpts_socket_add_required.yfilter)) leaf_name_data.push_back(is_register_injection_lpts_socket_add_required.get_name_leafdata());
    if (is_register_injection_lpts_socket_added.is_set || is_set(is_register_injection_lpts_socket_added.yfilter)) leaf_name_data.push_back(is_register_injection_lpts_socket_added.get_name_leafdata());
    if (is_m_host_publish_pending.is_set || is_set(is_m_host_publish_pending.yfilter)) leaf_name_data.push_back(is_m_host_publish_pending.get_name_leafdata());
    if (mhost_interface.is_set || is_set(mhost_interface.yfilter)) leaf_name_data.push_back(mhost_interface.get_name_leafdata());
    if (mhost_default_interface_config.is_set || is_set(mhost_default_interface_config.yfilter)) leaf_name_data.push_back(mhost_default_interface_config.get_name_leafdata());
    if (mdt_mtu.is_set || is_set(mdt_mtu.yfilter)) leaf_name_data.push_back(mdt_mtu.get_name_leafdata());
    if (maximum_mdt_aggregation.is_set || is_set(maximum_mdt_aggregation.yfilter)) leaf_name_data.push_back(maximum_mdt_aggregation.get_name_leafdata());
    if (mdt_data_switchover_interval.is_set || is_set(mdt_data_switchover_interval.yfilter)) leaf_name_data.push_back(mdt_data_switchover_interval.get_name_leafdata());
    if (mdt_data_announce_interval.is_set || is_set(mdt_data_announce_interval.yfilter)) leaf_name_data.push_back(mdt_data_announce_interval.get_name_leafdata());
    if (non_default_vrf_count_on_socket.is_set || is_set(non_default_vrf_count_on_socket.yfilter)) leaf_name_data.push_back(non_default_vrf_count_on_socket.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.yfilter)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (mdt_neighbor_filter_name.is_set || is_set(mdt_neighbor_filter_name.yfilter)) leaf_name_data.push_back(mdt_neighbor_filter_name.get_name_leafdata());
    if (allow_rp_configured.is_set || is_set(allow_rp_configured.yfilter)) leaf_name_data.push_back(allow_rp_configured.get_name_leafdata());
    if (allow_rp_group_list.is_set || is_set(allow_rp_group_list.yfilter)) leaf_name_data.push_back(allow_rp_group_list.get_name_leafdata());
    if (allow_rp_rp_list.is_set || is_set(allow_rp_rp_list.yfilter)) leaf_name_data.push_back(allow_rp_rp_list.get_name_leafdata());
    if (sg_expiry_timer_configured.is_set || is_set(sg_expiry_timer_configured.yfilter)) leaf_name_data.push_back(sg_expiry_timer_configured.get_name_leafdata());
    if (sg_expiry_time.is_set || is_set(sg_expiry_time.yfilter)) leaf_name_data.push_back(sg_expiry_time.get_name_leafdata());
    if (sg_expiry_timer_sg_list.is_set || is_set(sg_expiry_timer_sg_list.yfilter)) leaf_name_data.push_back(sg_expiry_timer_sg_list.get_name_leafdata());
    if (mldp_mdt_name.is_set || is_set(mldp_mdt_name.yfilter)) leaf_name_data.push_back(mldp_mdt_name.get_name_leafdata());
    if (mldp_mdt_interface.is_set || is_set(mldp_mdt_interface.yfilter)) leaf_name_data.push_back(mldp_mdt_interface.get_name_leafdata());
    if (mldp_mdt_mtu.is_set || is_set(mldp_mdt_mtu.yfilter)) leaf_name_data.push_back(mldp_mdt_mtu.get_name_leafdata());
    if (mldp_maximum_mdt_aggregation.is_set || is_set(mldp_maximum_mdt_aggregation.yfilter)) leaf_name_data.push_back(mldp_maximum_mdt_aggregation.get_name_leafdata());
    if (mldp_mdt_data_switchover_interval.is_set || is_set(mldp_mdt_data_switchover_interval.yfilter)) leaf_name_data.push_back(mldp_mdt_data_switchover_interval.get_name_leafdata());
    if (mldp_mdt_data_announce_interval.is_set || is_set(mldp_mdt_data_announce_interval.yfilter)) leaf_name_data.push_back(mldp_mdt_data_announce_interval.get_name_leafdata());
    if (mldp_mdt_rpf_identifier.is_set || is_set(mldp_mdt_rpf_identifier.yfilter)) leaf_name_data.push_back(mldp_mdt_rpf_identifier.get_name_leafdata());
    if (mldp_mdt_remote_rpf_identifier.is_set || is_set(mldp_mdt_remote_rpf_identifier.yfilter)) leaf_name_data.push_back(mldp_mdt_remote_rpf_identifier.get_name_leafdata());
    if (is_create_mldp_mdt_interface.is_set || is_set(is_create_mldp_mdt_interface.yfilter)) leaf_name_data.push_back(is_create_mldp_mdt_interface.get_name_leafdata());
    if (is_mldp_mdt_owner.is_set || is_set(is_mldp_mdt_owner.yfilter)) leaf_name_data.push_back(is_mldp_mdt_owner.get_name_leafdata());
    if (mldp_root_count.is_set || is_set(mldp_root_count.yfilter)) leaf_name_data.push_back(mldp_root_count.get_name_leafdata());
    if (mldp_head_lsm_identifier.is_set || is_set(mldp_head_lsm_identifier.yfilter)) leaf_name_data.push_back(mldp_head_lsm_identifier.get_name_leafdata());
    if (mldp_remote_head_lsm_identifier.is_set || is_set(mldp_remote_head_lsm_identifier.yfilter)) leaf_name_data.push_back(mldp_remote_head_lsm_identifier.get_name_leafdata());
    if (organization_unique_identifier.is_set || is_set(organization_unique_identifier.yfilter)) leaf_name_data.push_back(organization_unique_identifier.get_name_leafdata());
    if (vpn_index.is_set || is_set(vpn_index.yfilter)) leaf_name_data.push_back(vpn_index.get_name_leafdata());
    if (mldp_partitioned_mdt_configured.is_set || is_set(mldp_partitioned_mdt_configured.yfilter)) leaf_name_data.push_back(mldp_partitioned_mdt_configured.get_name_leafdata());
    if (mldp_remote_partitioned_mdt_configured.is_set || is_set(mldp_remote_partitioned_mdt_configured.yfilter)) leaf_name_data.push_back(mldp_remote_partitioned_mdt_configured.get_name_leafdata());
    if (mldp_partioned_mp2m_ptree.is_set || is_set(mldp_partioned_mp2m_ptree.yfilter)) leaf_name_data.push_back(mldp_partioned_mp2m_ptree.get_name_leafdata());
    if (mldp_partitioned_head_lsm_identifier.is_set || is_set(mldp_partitioned_head_lsm_identifier.yfilter)) leaf_name_data.push_back(mldp_partitioned_head_lsm_identifier.get_name_leafdata());
    if (mldp_head_local_label.is_set || is_set(mldp_head_local_label.yfilter)) leaf_name_data.push_back(mldp_head_local_label.get_name_leafdata());
    if (mldp_partitioned_mdt_identifier.is_set || is_set(mldp_partitioned_mdt_identifier.yfilter)) leaf_name_data.push_back(mldp_partitioned_mdt_identifier.get_name_leafdata());
    if (bgp_auto_discovery_configured.is_set || is_set(bgp_auto_discovery_configured.yfilter)) leaf_name_data.push_back(bgp_auto_discovery_configured.get_name_leafdata());
    if (suppress_pim_data_mdt_tlv.is_set || is_set(suppress_pim_data_mdt_tlv.yfilter)) leaf_name_data.push_back(suppress_pim_data_mdt_tlv.get_name_leafdata());
    if (inter_autonomous_system_enabled.is_set || is_set(inter_autonomous_system_enabled.yfilter)) leaf_name_data.push_back(inter_autonomous_system_enabled.get_name_leafdata());
    if (bgp_source_active_announce.is_set || is_set(bgp_source_active_announce.yfilter)) leaf_name_data.push_back(bgp_source_active_announce.get_name_leafdata());
    if (bgp_i_pmsi_added.is_set || is_set(bgp_i_pmsi_added.yfilter)) leaf_name_data.push_back(bgp_i_pmsi_added.get_name_leafdata());
    if (mldp_bsr_control_tree_added.is_set || is_set(mldp_bsr_control_tree_added.yfilter)) leaf_name_data.push_back(mldp_bsr_control_tree_added.get_name_leafdata());
    if (mldp_auto_rp_discovery_tree_added.is_set || is_set(mldp_auto_rp_discovery_tree_added.yfilter)) leaf_name_data.push_back(mldp_auto_rp_discovery_tree_added.get_name_leafdata());
    if (mldp_auto_rp_announce_tree_added.is_set || is_set(mldp_auto_rp_announce_tree_added.yfilter)) leaf_name_data.push_back(mldp_auto_rp_announce_tree_added.get_name_leafdata());
    if (bgp_auto_discovery_type.is_set || is_set(bgp_auto_discovery_type.yfilter)) leaf_name_data.push_back(bgp_auto_discovery_type.get_name_leafdata());
    if (mdt_partitioned_mdt_control_identifier.is_set || is_set(mdt_partitioned_mdt_control_identifier.yfilter)) leaf_name_data.push_back(mdt_partitioned_mdt_control_identifier.get_name_leafdata());
    if (mdt_partitioned_ir_control_identifier.is_set || is_set(mdt_partitioned_ir_control_identifier.yfilter)) leaf_name_data.push_back(mdt_partitioned_ir_control_identifier.get_name_leafdata());
    if (mldp_control_head_lsm_identifier.is_set || is_set(mldp_control_head_lsm_identifier.yfilter)) leaf_name_data.push_back(mldp_control_head_lsm_identifier.get_name_leafdata());
    if (umh.is_set || is_set(umh.yfilter)) leaf_name_data.push_back(umh.get_name_leafdata());
    if (suppress_shared_tree_join.is_set || is_set(suppress_shared_tree_join.yfilter)) leaf_name_data.push_back(suppress_shared_tree_join.get_name_leafdata());
    if (rsvp_te_mdt_name.is_set || is_set(rsvp_te_mdt_name.yfilter)) leaf_name_data.push_back(rsvp_te_mdt_name.get_name_leafdata());
    if (rsvp_te_mdt_interface.is_set || is_set(rsvp_te_mdt_interface.yfilter)) leaf_name_data.push_back(rsvp_te_mdt_interface.get_name_leafdata());
    if (rsvp_te_mdt_mtu.is_set || is_set(rsvp_te_mdt_mtu.yfilter)) leaf_name_data.push_back(rsvp_te_mdt_mtu.get_name_leafdata());
    if (rsvp_te_maximum_mdt_aggregation.is_set || is_set(rsvp_te_maximum_mdt_aggregation.yfilter)) leaf_name_data.push_back(rsvp_te_maximum_mdt_aggregation.get_name_leafdata());
    if (rsvp_te_mdt_data_switchover_interval.is_set || is_set(rsvp_te_mdt_data_switchover_interval.yfilter)) leaf_name_data.push_back(rsvp_te_mdt_data_switchover_interval.get_name_leafdata());
    if (rsvp_te_mdt_data_announce_interval.is_set || is_set(rsvp_te_mdt_data_announce_interval.yfilter)) leaf_name_data.push_back(rsvp_te_mdt_data_announce_interval.get_name_leafdata());
    if (rsvp_te_mdt_rpf_identifier.is_set || is_set(rsvp_te_mdt_rpf_identifier.yfilter)) leaf_name_data.push_back(rsvp_te_mdt_rpf_identifier.get_name_leafdata());
    if (is_create_rsvp_te_mdt_interface.is_set || is_set(is_create_rsvp_te_mdt_interface.yfilter)) leaf_name_data.push_back(is_create_rsvp_te_mdt_interface.get_name_leafdata());
    if (is_rsvp_te_mdt_owner.is_set || is_set(is_rsvp_te_mdt_owner.yfilter)) leaf_name_data.push_back(is_rsvp_te_mdt_owner.get_name_leafdata());
    if (rsvp_te_mdt_static_p2mp_count.is_set || is_set(rsvp_te_mdt_static_p2mp_count.yfilter)) leaf_name_data.push_back(rsvp_te_mdt_static_p2mp_count.get_name_leafdata());
    if (p2mpte_li_drop.is_set || is_set(p2mpte_li_drop.yfilter)) leaf_name_data.push_back(p2mpte_li_drop.get_name_leafdata());
    if (ir_mdt_name.is_set || is_set(ir_mdt_name.yfilter)) leaf_name_data.push_back(ir_mdt_name.get_name_leafdata());
    if (ir_mdt_interface.is_set || is_set(ir_mdt_interface.yfilter)) leaf_name_data.push_back(ir_mdt_interface.get_name_leafdata());
    if (ir_mdt_mtu.is_set || is_set(ir_mdt_mtu.yfilter)) leaf_name_data.push_back(ir_mdt_mtu.get_name_leafdata());
    if (ir_maximum_mdt_aggregation.is_set || is_set(ir_maximum_mdt_aggregation.yfilter)) leaf_name_data.push_back(ir_maximum_mdt_aggregation.get_name_leafdata());
    if (ir_mdt_data_switchover_interval.is_set || is_set(ir_mdt_data_switchover_interval.yfilter)) leaf_name_data.push_back(ir_mdt_data_switchover_interval.get_name_leafdata());
    if (ir_mdt_data_announce_interval.is_set || is_set(ir_mdt_data_announce_interval.yfilter)) leaf_name_data.push_back(ir_mdt_data_announce_interval.get_name_leafdata());
    if (ir_mdt_rpf_identifier.is_set || is_set(ir_mdt_rpf_identifier.yfilter)) leaf_name_data.push_back(ir_mdt_rpf_identifier.get_name_leafdata());
    if (ir_mdt_tail_label.is_set || is_set(ir_mdt_tail_label.yfilter)) leaf_name_data.push_back(ir_mdt_tail_label.get_name_leafdata());
    if (is_create_ir_mdt_interface.is_set || is_set(is_create_ir_mdt_interface.yfilter)) leaf_name_data.push_back(is_create_ir_mdt_interface.get_name_leafdata());
    if (is_ir_mdt_owner.is_set || is_set(is_ir_mdt_owner.yfilter)) leaf_name_data.push_back(is_ir_mdt_owner.get_name_leafdata());
    if (in_b_and_mdt_name.is_set || is_set(in_b_and_mdt_name.yfilter)) leaf_name_data.push_back(in_b_and_mdt_name.get_name_leafdata());
    if (in_b_and_mdt_interface.is_set || is_set(in_b_and_mdt_interface.yfilter)) leaf_name_data.push_back(in_b_and_mdt_interface.get_name_leafdata());
    if (in_b_and_mdt_mtu.is_set || is_set(in_b_and_mdt_mtu.yfilter)) leaf_name_data.push_back(in_b_and_mdt_mtu.get_name_leafdata());
    if (in_band_maximum_mdt_aggregation.is_set || is_set(in_band_maximum_mdt_aggregation.yfilter)) leaf_name_data.push_back(in_band_maximum_mdt_aggregation.get_name_leafdata());
    if (in_b_and_mdt_data_switchover_interval.is_set || is_set(in_b_and_mdt_data_switchover_interval.yfilter)) leaf_name_data.push_back(in_b_and_mdt_data_switchover_interval.get_name_leafdata());
    if (in_b_and_mdt_data_announce_interval.is_set || is_set(in_b_and_mdt_data_announce_interval.yfilter)) leaf_name_data.push_back(in_b_and_mdt_data_announce_interval.get_name_leafdata());
    if (in_b_and_mdt_rpf_identifier.is_set || is_set(in_b_and_mdt_rpf_identifier.yfilter)) leaf_name_data.push_back(in_b_and_mdt_rpf_identifier.get_name_leafdata());
    if (is_create_in_b_and_mdt_interface.is_set || is_set(is_create_in_b_and_mdt_interface.yfilter)) leaf_name_data.push_back(is_create_in_b_and_mdt_interface.get_name_leafdata());
    if (is_in_b_and_mdt_owner.is_set || is_set(is_in_b_and_mdt_owner.yfilter)) leaf_name_data.push_back(is_in_b_and_mdt_owner.get_name_leafdata());
    if (in_band_signaling_local_enabled.is_set || is_set(in_band_signaling_local_enabled.yfilter)) leaf_name_data.push_back(in_band_signaling_local_enabled.get_name_leafdata());
    if (in_band_signaling_remote_enabled.is_set || is_set(in_band_signaling_remote_enabled.yfilter)) leaf_name_data.push_back(in_band_signaling_remote_enabled.get_name_leafdata());
    if (valid_rd_present.is_set || is_set(valid_rd_present.yfilter)) leaf_name_data.push_back(valid_rd_present.get_name_leafdata());
    if (stale_rd_present.is_set || is_set(stale_rd_present.yfilter)) leaf_name_data.push_back(stale_rd_present.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (gin_b_and_mdt_name.is_set || is_set(gin_b_and_mdt_name.yfilter)) leaf_name_data.push_back(gin_b_and_mdt_name.get_name_leafdata());
    if (gin_b_and_mdt_interface.is_set || is_set(gin_b_and_mdt_interface.yfilter)) leaf_name_data.push_back(gin_b_and_mdt_interface.get_name_leafdata());
    if (gin_b_and_mdt_mtu.is_set || is_set(gin_b_and_mdt_mtu.yfilter)) leaf_name_data.push_back(gin_b_and_mdt_mtu.get_name_leafdata());
    if (gin_band_maximum_mdt_aggregation.is_set || is_set(gin_band_maximum_mdt_aggregation.yfilter)) leaf_name_data.push_back(gin_band_maximum_mdt_aggregation.get_name_leafdata());
    if (gin_b_and_mdt_data_switchover_interval.is_set || is_set(gin_b_and_mdt_data_switchover_interval.yfilter)) leaf_name_data.push_back(gin_b_and_mdt_data_switchover_interval.get_name_leafdata());
    if (gin_b_and_mdt_data_announce_interval.is_set || is_set(gin_b_and_mdt_data_announce_interval.yfilter)) leaf_name_data.push_back(gin_b_and_mdt_data_announce_interval.get_name_leafdata());
    if (gin_b_and_mdt_rpf_identifier.is_set || is_set(gin_b_and_mdt_rpf_identifier.yfilter)) leaf_name_data.push_back(gin_b_and_mdt_rpf_identifier.get_name_leafdata());
    if (is_create_gin_b_and_mdt_interface.is_set || is_set(is_create_gin_b_and_mdt_interface.yfilter)) leaf_name_data.push_back(is_create_gin_b_and_mdt_interface.get_name_leafdata());
    if (is_gin_b_and_mdt_owner.is_set || is_set(is_gin_b_and_mdt_owner.yfilter)) leaf_name_data.push_back(is_gin_b_and_mdt_owner.get_name_leafdata());
    if (is_pim_nsf_rib_converged.is_set || is_set(is_pim_nsf_rib_converged.yfilter)) leaf_name_data.push_back(is_pim_nsf_rib_converged.get_name_leafdata());
    if (is_pim_nsf_rib_converge_received.is_set || is_set(is_pim_nsf_rib_converge_received.yfilter)) leaf_name_data.push_back(is_pim_nsf_rib_converge_received.get_name_leafdata());
    if (is_rib_multipath_enabled.is_set || is_set(is_rib_multipath_enabled.yfilter)) leaf_name_data.push_back(is_rib_multipath_enabled.get_name_leafdata());
    if (is_rib_multipath_interface_hash.is_set || is_set(is_rib_multipath_interface_hash.yfilter)) leaf_name_data.push_back(is_rib_multipath_interface_hash.get_name_leafdata());
    if (is_rib_multipath_source_hash.is_set || is_set(is_rib_multipath_source_hash.yfilter)) leaf_name_data.push_back(is_rib_multipath_source_hash.get_name_leafdata());
    if (is_rib_multipath_source_next_hop_hash.is_set || is_set(is_rib_multipath_source_next_hop_hash.yfilter)) leaf_name_data.push_back(is_rib_multipath_source_next_hop_hash.get_name_leafdata());
    if (rump_enabled.is_set || is_set(rump_enabled.yfilter)) leaf_name_data.push_back(rump_enabled.get_name_leafdata());
    if (is_create_mdt_interface.is_set || is_set(is_create_mdt_interface.yfilter)) leaf_name_data.push_back(is_create_mdt_interface.get_name_leafdata());
    if (is_auto_rp_listen_enabled.is_set || is_set(is_auto_rp_listen_enabled.yfilter)) leaf_name_data.push_back(is_auto_rp_listen_enabled.get_name_leafdata());
    if (is_all_interface_disable_operation.is_set || is_set(is_all_interface_disable_operation.yfilter)) leaf_name_data.push_back(is_all_interface_disable_operation.get_name_leafdata());
    if (is_default_granges.is_set || is_set(is_default_granges.yfilter)) leaf_name_data.push_back(is_default_granges.get_name_leafdata());
    if (is_auto_rp_listen_sock_add.is_set || is_set(is_auto_rp_listen_sock_add.yfilter)) leaf_name_data.push_back(is_auto_rp_listen_sock_add.get_name_leafdata());
    if (is_redistribution_reset.is_set || is_set(is_redistribution_reset.yfilter)) leaf_name_data.push_back(is_redistribution_reset.get_name_leafdata());
    if (redistribution_reset_count.is_set || is_set(redistribution_reset_count.yfilter)) leaf_name_data.push_back(redistribution_reset_count.get_name_leafdata());
    if (rpf_policy_name.is_set || is_set(rpf_policy_name.yfilter)) leaf_name_data.push_back(rpf_policy_name.get_name_leafdata());
    if (table_count.is_set || is_set(table_count.yfilter)) leaf_name_data.push_back(table_count.get_name_leafdata());
    if (active_table_count.is_set || is_set(active_table_count.yfilter)) leaf_name_data.push_back(active_table_count.get_name_leafdata());
    if (anycast_rp_policy_name.is_set || is_set(anycast_rp_policy_name.yfilter)) leaf_name_data.push_back(anycast_rp_policy_name.get_name_leafdata());
    if (anycast_rp_configured.is_set || is_set(anycast_rp_configured.yfilter)) leaf_name_data.push_back(anycast_rp_configured.get_name_leafdata());
    if (bgp_remote_on.is_set || is_set(bgp_remote_on.yfilter)) leaf_name_data.push_back(bgp_remote_on.get_name_leafdata());
    if (bgp_remote_interface_name.is_set || is_set(bgp_remote_interface_name.yfilter)) leaf_name_data.push_back(bgp_remote_interface_name.get_name_leafdata());
    if (bgp_remote_interface.is_set || is_set(bgp_remote_interface.yfilter)) leaf_name_data.push_back(bgp_remote_interface.get_name_leafdata());
    if (bgp_remote_address.is_set || is_set(bgp_remote_address.yfilter)) leaf_name_data.push_back(bgp_remote_address.get_name_leafdata());
    if (bgp_remote_state.is_set || is_set(bgp_remote_state.yfilter)) leaf_name_data.push_back(bgp_remote_state.get_name_leafdata());
    if (physical_interface_count.is_set || is_set(physical_interface_count.yfilter)) leaf_name_data.push_back(physical_interface_count.get_name_leafdata());
    if (virtual_interface_count.is_set || is_set(virtual_interface_count.yfilter)) leaf_name_data.push_back(virtual_interface_count.get_name_leafdata());
    if (virtual_mlc_interface_name.is_set || is_set(virtual_mlc_interface_name.yfilter)) leaf_name_data.push_back(virtual_mlc_interface_name.get_name_leafdata());
    if (mdt_immediate_switch.is_set || is_set(mdt_immediate_switch.yfilter)) leaf_name_data.push_back(mdt_immediate_switch.get_name_leafdata());

    auto mldp_root_address_name_datas = mldp_root_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mldp_root_address_name_datas.begin(), mldp_root_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-default-group")
    {
        if(remote_default_group == nullptr)
        {
            remote_default_group = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup>();
        }
        return remote_default_group;
    }

    if(child_yang_name == "rpf-default-table")
    {
        if(rpf_default_table == nullptr)
        {
            rpf_default_table = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable>();
        }
        return rpf_default_table;
    }

    if(child_yang_name == "export-route-target")
    {
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget>();
        c->parent = this;
        export_route_target.push_back(c);
        return c;
    }

    if(child_yang_name == "import-route-target")
    {
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget>();
        c->parent = this;
        import_route_target.push_back(c);
        return c;
    }

    if(child_yang_name == "anycast-rp-range")
    {
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange>();
        c->parent = this;
        anycast_rp_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(remote_default_group != nullptr)
    {
        children["remote-default-group"] = remote_default_group;
    }

    if(rpf_default_table != nullptr)
    {
        children["rpf-default-table"] = rpf_default_table;
    }

    count = 0;
    for (auto const & c : export_route_target)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : import_route_target)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : anycast_rp_range)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "murib-id")
    {
        murib_id = value;
        murib_id.value_namespace = name_space;
        murib_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-id")
    {
        rpf_id = value;
        rpf_id.value_namespace = name_space;
        rpf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-table-id")
    {
        remote_table_id = value;
        remote_table_id.value_namespace = name_space;
        remote_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-default-group")
    {
        mdt_default_group = value;
        mdt_default_group.value_namespace = name_space;
        mdt_default_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-source")
    {
        mdt_source = value;
        mdt_source.value_namespace = name_space;
        mdt_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-source-interface")
    {
        mdt_source_interface = value;
        mdt_source_interface.value_namespace = name_space;
        mdt_source_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-interface")
    {
        mdt_interface = value;
        mdt_interface.value_namespace = name_space;
        mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-gre-rpf-identifier")
    {
        mdt_gre_rpf_identifier = value;
        mdt_gre_rpf_identifier.value_namespace = name_space;
        mdt_gre_rpf_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-gre-remote-rpf-identifier")
    {
        mdt_gre_remote_rpf_identifier = value;
        mdt_gre_remote_rpf_identifier.value_namespace = name_space;
        mdt_gre_remote_rpf_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-unicast-rib-registration")
    {
        is_unicast_rib_registration = value;
        is_unicast_rib_registration.value_namespace = name_space;
        is_unicast_rib_registration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multicast-rib-registration")
    {
        is_multicast_rib_registration = value;
        is_multicast_rib_registration.value_namespace = name_space;
        is_multicast_rib_registration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active-ital")
    {
        is_active_ital = value;
        is_active_ital.value_namespace = name_space;
        is_active_ital.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mrib-register")
    {
        is_mrib_register = value;
        is_mrib_register.value_namespace = name_space;
        is_mrib_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mdt-owner")
    {
        is_mdt_owner = value;
        is_mdt_owner.value_namespace = name_space;
        is_mdt_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-routing-enabled")
    {
        is_routing_enabled = value;
        is_routing_enabled.value_namespace = name_space;
        is_routing_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-socket-add-required")
    {
        is_socket_add_required = value;
        is_socket_add_required.value_namespace = name_space;
        is_socket_add_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-socket-added")
    {
        is_socket_added = value;
        is_socket_added.value_namespace = name_space;
        is_socket_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lpts-socket-add-required")
    {
        is_lpts_socket_add_required = value;
        is_lpts_socket_add_required.value_namespace = name_space;
        is_lpts_socket_add_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lpts-socket-added")
    {
        is_lpts_socket_added = value;
        is_lpts_socket_added.value_namespace = name_space;
        is_lpts_socket_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-udp-socket-add-required")
    {
        is_udp_socket_add_required = value;
        is_udp_socket_add_required.value_namespace = name_space;
        is_udp_socket_add_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-udp-socket-added")
    {
        is_udp_socket_added = value;
        is_udp_socket_added.value_namespace = name_space;
        is_udp_socket_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-udp-socket-bind-required")
    {
        is_udp_socket_bind_required = value;
        is_udp_socket_bind_required.value_namespace = name_space;
        is_udp_socket_bind_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-udp-socket-bind")
    {
        is_udp_socket_bind = value;
        is_udp_socket_bind.value_namespace = name_space;
        is_udp_socket_bind.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-register-injection-socket-add-required")
    {
        is_register_injection_socket_add_required = value;
        is_register_injection_socket_add_required.value_namespace = name_space;
        is_register_injection_socket_add_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-register-injection-socket-added")
    {
        is_register_injection_socket_added = value;
        is_register_injection_socket_added.value_namespace = name_space;
        is_register_injection_socket_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-register-injection-lpts-socket-add-required")
    {
        is_register_injection_lpts_socket_add_required = value;
        is_register_injection_lpts_socket_add_required.value_namespace = name_space;
        is_register_injection_lpts_socket_add_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-register-injection-lpts-socket-added")
    {
        is_register_injection_lpts_socket_added = value;
        is_register_injection_lpts_socket_added.value_namespace = name_space;
        is_register_injection_lpts_socket_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-m-host-publish-pending")
    {
        is_m_host_publish_pending = value;
        is_m_host_publish_pending.value_namespace = name_space;
        is_m_host_publish_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mhost-interface")
    {
        mhost_interface = value;
        mhost_interface.value_namespace = name_space;
        mhost_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mhost-default-interface-config")
    {
        mhost_default_interface_config = value;
        mhost_default_interface_config.value_namespace = name_space;
        mhost_default_interface_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-mtu")
    {
        mdt_mtu = value;
        mdt_mtu.value_namespace = name_space;
        mdt_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-mdt-aggregation")
    {
        maximum_mdt_aggregation = value;
        maximum_mdt_aggregation.value_namespace = name_space;
        maximum_mdt_aggregation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-data-switchover-interval")
    {
        mdt_data_switchover_interval = value;
        mdt_data_switchover_interval.value_namespace = name_space;
        mdt_data_switchover_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-data-announce-interval")
    {
        mdt_data_announce_interval = value;
        mdt_data_announce_interval.value_namespace = name_space;
        mdt_data_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-default-vrf-count-on-socket")
    {
        non_default_vrf_count_on_socket = value;
        non_default_vrf_count_on_socket.value_namespace = name_space;
        non_default_vrf_count_on_socket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
        neighbor_filter_name.value_namespace = name_space;
        neighbor_filter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-neighbor-filter-name")
    {
        mdt_neighbor_filter_name = value;
        mdt_neighbor_filter_name.value_namespace = name_space;
        mdt_neighbor_filter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-rp-configured")
    {
        allow_rp_configured = value;
        allow_rp_configured.value_namespace = name_space;
        allow_rp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-rp-group-list")
    {
        allow_rp_group_list = value;
        allow_rp_group_list.value_namespace = name_space;
        allow_rp_group_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-rp-rp-list")
    {
        allow_rp_rp_list = value;
        allow_rp_rp_list.value_namespace = name_space;
        allow_rp_rp_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-expiry-timer-configured")
    {
        sg_expiry_timer_configured = value;
        sg_expiry_timer_configured.value_namespace = name_space;
        sg_expiry_timer_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-expiry-time")
    {
        sg_expiry_time = value;
        sg_expiry_time.value_namespace = name_space;
        sg_expiry_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-expiry-timer-sg-list")
    {
        sg_expiry_timer_sg_list = value;
        sg_expiry_timer_sg_list.value_namespace = name_space;
        sg_expiry_timer_sg_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-mdt-name")
    {
        mldp_mdt_name = value;
        mldp_mdt_name.value_namespace = name_space;
        mldp_mdt_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-mdt-interface")
    {
        mldp_mdt_interface = value;
        mldp_mdt_interface.value_namespace = name_space;
        mldp_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-mdt-mtu")
    {
        mldp_mdt_mtu = value;
        mldp_mdt_mtu.value_namespace = name_space;
        mldp_mdt_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-maximum-mdt-aggregation")
    {
        mldp_maximum_mdt_aggregation = value;
        mldp_maximum_mdt_aggregation.value_namespace = name_space;
        mldp_maximum_mdt_aggregation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-mdt-data-switchover-interval")
    {
        mldp_mdt_data_switchover_interval = value;
        mldp_mdt_data_switchover_interval.value_namespace = name_space;
        mldp_mdt_data_switchover_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-mdt-data-announce-interval")
    {
        mldp_mdt_data_announce_interval = value;
        mldp_mdt_data_announce_interval.value_namespace = name_space;
        mldp_mdt_data_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-mdt-rpf-identifier")
    {
        mldp_mdt_rpf_identifier = value;
        mldp_mdt_rpf_identifier.value_namespace = name_space;
        mldp_mdt_rpf_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-mdt-remote-rpf-identifier")
    {
        mldp_mdt_remote_rpf_identifier = value;
        mldp_mdt_remote_rpf_identifier.value_namespace = name_space;
        mldp_mdt_remote_rpf_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-create-mldp-mdt-interface")
    {
        is_create_mldp_mdt_interface = value;
        is_create_mldp_mdt_interface.value_namespace = name_space;
        is_create_mldp_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mldp-mdt-owner")
    {
        is_mldp_mdt_owner = value;
        is_mldp_mdt_owner.value_namespace = name_space;
        is_mldp_mdt_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-root-count")
    {
        mldp_root_count = value;
        mldp_root_count.value_namespace = name_space;
        mldp_root_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-head-lsm-identifier")
    {
        mldp_head_lsm_identifier = value;
        mldp_head_lsm_identifier.value_namespace = name_space;
        mldp_head_lsm_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-remote-head-lsm-identifier")
    {
        mldp_remote_head_lsm_identifier = value;
        mldp_remote_head_lsm_identifier.value_namespace = name_space;
        mldp_remote_head_lsm_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "organization-unique-identifier")
    {
        organization_unique_identifier = value;
        organization_unique_identifier.value_namespace = name_space;
        organization_unique_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-index")
    {
        vpn_index = value;
        vpn_index.value_namespace = name_space;
        vpn_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-partitioned-mdt-configured")
    {
        mldp_partitioned_mdt_configured = value;
        mldp_partitioned_mdt_configured.value_namespace = name_space;
        mldp_partitioned_mdt_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-remote-partitioned-mdt-configured")
    {
        mldp_remote_partitioned_mdt_configured = value;
        mldp_remote_partitioned_mdt_configured.value_namespace = name_space;
        mldp_remote_partitioned_mdt_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-partioned-mp2m-ptree")
    {
        mldp_partioned_mp2m_ptree = value;
        mldp_partioned_mp2m_ptree.value_namespace = name_space;
        mldp_partioned_mp2m_ptree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-partitioned-head-lsm-identifier")
    {
        mldp_partitioned_head_lsm_identifier = value;
        mldp_partitioned_head_lsm_identifier.value_namespace = name_space;
        mldp_partitioned_head_lsm_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-head-local-label")
    {
        mldp_head_local_label = value;
        mldp_head_local_label.value_namespace = name_space;
        mldp_head_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-partitioned-mdt-identifier")
    {
        mldp_partitioned_mdt_identifier = value;
        mldp_partitioned_mdt_identifier.value_namespace = name_space;
        mldp_partitioned_mdt_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-auto-discovery-configured")
    {
        bgp_auto_discovery_configured = value;
        bgp_auto_discovery_configured.value_namespace = name_space;
        bgp_auto_discovery_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-pim-data-mdt-tlv")
    {
        suppress_pim_data_mdt_tlv = value;
        suppress_pim_data_mdt_tlv.value_namespace = name_space;
        suppress_pim_data_mdt_tlv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-autonomous-system-enabled")
    {
        inter_autonomous_system_enabled = value;
        inter_autonomous_system_enabled.value_namespace = name_space;
        inter_autonomous_system_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-source-active-announce")
    {
        bgp_source_active_announce = value;
        bgp_source_active_announce.value_namespace = name_space;
        bgp_source_active_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-i-pmsi-added")
    {
        bgp_i_pmsi_added = value;
        bgp_i_pmsi_added.value_namespace = name_space;
        bgp_i_pmsi_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-bsr-control-tree-added")
    {
        mldp_bsr_control_tree_added = value;
        mldp_bsr_control_tree_added.value_namespace = name_space;
        mldp_bsr_control_tree_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-auto-rp-discovery-tree-added")
    {
        mldp_auto_rp_discovery_tree_added = value;
        mldp_auto_rp_discovery_tree_added.value_namespace = name_space;
        mldp_auto_rp_discovery_tree_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-auto-rp-announce-tree-added")
    {
        mldp_auto_rp_announce_tree_added = value;
        mldp_auto_rp_announce_tree_added.value_namespace = name_space;
        mldp_auto_rp_announce_tree_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-auto-discovery-type")
    {
        bgp_auto_discovery_type = value;
        bgp_auto_discovery_type.value_namespace = name_space;
        bgp_auto_discovery_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-partitioned-mdt-control-identifier")
    {
        mdt_partitioned_mdt_control_identifier = value;
        mdt_partitioned_mdt_control_identifier.value_namespace = name_space;
        mdt_partitioned_mdt_control_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-partitioned-ir-control-identifier")
    {
        mdt_partitioned_ir_control_identifier = value;
        mdt_partitioned_ir_control_identifier.value_namespace = name_space;
        mdt_partitioned_ir_control_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-control-head-lsm-identifier")
    {
        mldp_control_head_lsm_identifier = value;
        mldp_control_head_lsm_identifier.value_namespace = name_space;
        mldp_control_head_lsm_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "umh")
    {
        umh = value;
        umh.value_namespace = name_space;
        umh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-shared-tree-join")
    {
        suppress_shared_tree_join = value;
        suppress_shared_tree_join.value_namespace = name_space;
        suppress_shared_tree_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-mdt-name")
    {
        rsvp_te_mdt_name = value;
        rsvp_te_mdt_name.value_namespace = name_space;
        rsvp_te_mdt_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-mdt-interface")
    {
        rsvp_te_mdt_interface = value;
        rsvp_te_mdt_interface.value_namespace = name_space;
        rsvp_te_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-mdt-mtu")
    {
        rsvp_te_mdt_mtu = value;
        rsvp_te_mdt_mtu.value_namespace = name_space;
        rsvp_te_mdt_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-maximum-mdt-aggregation")
    {
        rsvp_te_maximum_mdt_aggregation = value;
        rsvp_te_maximum_mdt_aggregation.value_namespace = name_space;
        rsvp_te_maximum_mdt_aggregation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-mdt-data-switchover-interval")
    {
        rsvp_te_mdt_data_switchover_interval = value;
        rsvp_te_mdt_data_switchover_interval.value_namespace = name_space;
        rsvp_te_mdt_data_switchover_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-mdt-data-announce-interval")
    {
        rsvp_te_mdt_data_announce_interval = value;
        rsvp_te_mdt_data_announce_interval.value_namespace = name_space;
        rsvp_te_mdt_data_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-mdt-rpf-identifier")
    {
        rsvp_te_mdt_rpf_identifier = value;
        rsvp_te_mdt_rpf_identifier.value_namespace = name_space;
        rsvp_te_mdt_rpf_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-create-rsvp-te-mdt-interface")
    {
        is_create_rsvp_te_mdt_interface = value;
        is_create_rsvp_te_mdt_interface.value_namespace = name_space;
        is_create_rsvp_te_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rsvp-te-mdt-owner")
    {
        is_rsvp_te_mdt_owner = value;
        is_rsvp_te_mdt_owner.value_namespace = name_space;
        is_rsvp_te_mdt_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-mdt-static-p2mp-count")
    {
        rsvp_te_mdt_static_p2mp_count = value;
        rsvp_te_mdt_static_p2mp_count.value_namespace = name_space;
        rsvp_te_mdt_static_p2mp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mpte-li-drop")
    {
        p2mpte_li_drop = value;
        p2mpte_li_drop.value_namespace = name_space;
        p2mpte_li_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ir-mdt-name")
    {
        ir_mdt_name = value;
        ir_mdt_name.value_namespace = name_space;
        ir_mdt_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ir-mdt-interface")
    {
        ir_mdt_interface = value;
        ir_mdt_interface.value_namespace = name_space;
        ir_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ir-mdt-mtu")
    {
        ir_mdt_mtu = value;
        ir_mdt_mtu.value_namespace = name_space;
        ir_mdt_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ir-maximum-mdt-aggregation")
    {
        ir_maximum_mdt_aggregation = value;
        ir_maximum_mdt_aggregation.value_namespace = name_space;
        ir_maximum_mdt_aggregation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ir-mdt-data-switchover-interval")
    {
        ir_mdt_data_switchover_interval = value;
        ir_mdt_data_switchover_interval.value_namespace = name_space;
        ir_mdt_data_switchover_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ir-mdt-data-announce-interval")
    {
        ir_mdt_data_announce_interval = value;
        ir_mdt_data_announce_interval.value_namespace = name_space;
        ir_mdt_data_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ir-mdt-rpf-identifier")
    {
        ir_mdt_rpf_identifier = value;
        ir_mdt_rpf_identifier.value_namespace = name_space;
        ir_mdt_rpf_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ir-mdt-tail-label")
    {
        ir_mdt_tail_label = value;
        ir_mdt_tail_label.value_namespace = name_space;
        ir_mdt_tail_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-create-ir-mdt-interface")
    {
        is_create_ir_mdt_interface = value;
        is_create_ir_mdt_interface.value_namespace = name_space;
        is_create_ir_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ir-mdt-owner")
    {
        is_ir_mdt_owner = value;
        is_ir_mdt_owner.value_namespace = name_space;
        is_ir_mdt_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-b-and-mdt-name")
    {
        in_b_and_mdt_name = value;
        in_b_and_mdt_name.value_namespace = name_space;
        in_b_and_mdt_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-b-and-mdt-interface")
    {
        in_b_and_mdt_interface = value;
        in_b_and_mdt_interface.value_namespace = name_space;
        in_b_and_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-b-and-mdt-mtu")
    {
        in_b_and_mdt_mtu = value;
        in_b_and_mdt_mtu.value_namespace = name_space;
        in_b_and_mdt_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-band-maximum-mdt-aggregation")
    {
        in_band_maximum_mdt_aggregation = value;
        in_band_maximum_mdt_aggregation.value_namespace = name_space;
        in_band_maximum_mdt_aggregation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-b-and-mdt-data-switchover-interval")
    {
        in_b_and_mdt_data_switchover_interval = value;
        in_b_and_mdt_data_switchover_interval.value_namespace = name_space;
        in_b_and_mdt_data_switchover_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-b-and-mdt-data-announce-interval")
    {
        in_b_and_mdt_data_announce_interval = value;
        in_b_and_mdt_data_announce_interval.value_namespace = name_space;
        in_b_and_mdt_data_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-b-and-mdt-rpf-identifier")
    {
        in_b_and_mdt_rpf_identifier = value;
        in_b_and_mdt_rpf_identifier.value_namespace = name_space;
        in_b_and_mdt_rpf_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-create-in-b-and-mdt-interface")
    {
        is_create_in_b_and_mdt_interface = value;
        is_create_in_b_and_mdt_interface.value_namespace = name_space;
        is_create_in_b_and_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-in-b-and-mdt-owner")
    {
        is_in_b_and_mdt_owner = value;
        is_in_b_and_mdt_owner.value_namespace = name_space;
        is_in_b_and_mdt_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-band-signaling-local-enabled")
    {
        in_band_signaling_local_enabled = value;
        in_band_signaling_local_enabled.value_namespace = name_space;
        in_band_signaling_local_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-band-signaling-remote-enabled")
    {
        in_band_signaling_remote_enabled = value;
        in_band_signaling_remote_enabled.value_namespace = name_space;
        in_band_signaling_remote_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-rd-present")
    {
        valid_rd_present = value;
        valid_rd_present.value_namespace = name_space;
        valid_rd_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-rd-present")
    {
        stale_rd_present = value;
        stale_rd_present.value_namespace = name_space;
        stale_rd_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
        route_distinguisher.value_namespace = name_space;
        route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gin-b-and-mdt-name")
    {
        gin_b_and_mdt_name = value;
        gin_b_and_mdt_name.value_namespace = name_space;
        gin_b_and_mdt_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gin-b-and-mdt-interface")
    {
        gin_b_and_mdt_interface = value;
        gin_b_and_mdt_interface.value_namespace = name_space;
        gin_b_and_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gin-b-and-mdt-mtu")
    {
        gin_b_and_mdt_mtu = value;
        gin_b_and_mdt_mtu.value_namespace = name_space;
        gin_b_and_mdt_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gin-band-maximum-mdt-aggregation")
    {
        gin_band_maximum_mdt_aggregation = value;
        gin_band_maximum_mdt_aggregation.value_namespace = name_space;
        gin_band_maximum_mdt_aggregation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gin-b-and-mdt-data-switchover-interval")
    {
        gin_b_and_mdt_data_switchover_interval = value;
        gin_b_and_mdt_data_switchover_interval.value_namespace = name_space;
        gin_b_and_mdt_data_switchover_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gin-b-and-mdt-data-announce-interval")
    {
        gin_b_and_mdt_data_announce_interval = value;
        gin_b_and_mdt_data_announce_interval.value_namespace = name_space;
        gin_b_and_mdt_data_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gin-b-and-mdt-rpf-identifier")
    {
        gin_b_and_mdt_rpf_identifier = value;
        gin_b_and_mdt_rpf_identifier.value_namespace = name_space;
        gin_b_and_mdt_rpf_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-create-gin-b-and-mdt-interface")
    {
        is_create_gin_b_and_mdt_interface = value;
        is_create_gin_b_and_mdt_interface.value_namespace = name_space;
        is_create_gin_b_and_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-gin-b-and-mdt-owner")
    {
        is_gin_b_and_mdt_owner = value;
        is_gin_b_and_mdt_owner.value_namespace = name_space;
        is_gin_b_and_mdt_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pim-nsf-rib-converged")
    {
        is_pim_nsf_rib_converged = value;
        is_pim_nsf_rib_converged.value_namespace = name_space;
        is_pim_nsf_rib_converged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pim-nsf-rib-converge-received")
    {
        is_pim_nsf_rib_converge_received = value;
        is_pim_nsf_rib_converge_received.value_namespace = name_space;
        is_pim_nsf_rib_converge_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-multipath-enabled")
    {
        is_rib_multipath_enabled = value;
        is_rib_multipath_enabled.value_namespace = name_space;
        is_rib_multipath_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-multipath-interface-hash")
    {
        is_rib_multipath_interface_hash = value;
        is_rib_multipath_interface_hash.value_namespace = name_space;
        is_rib_multipath_interface_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-multipath-source-hash")
    {
        is_rib_multipath_source_hash = value;
        is_rib_multipath_source_hash.value_namespace = name_space;
        is_rib_multipath_source_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-multipath-source-next-hop-hash")
    {
        is_rib_multipath_source_next_hop_hash = value;
        is_rib_multipath_source_next_hop_hash.value_namespace = name_space;
        is_rib_multipath_source_next_hop_hash.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rump-enabled")
    {
        rump_enabled = value;
        rump_enabled.value_namespace = name_space;
        rump_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-create-mdt-interface")
    {
        is_create_mdt_interface = value;
        is_create_mdt_interface.value_namespace = name_space;
        is_create_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-auto-rp-listen-enabled")
    {
        is_auto_rp_listen_enabled = value;
        is_auto_rp_listen_enabled.value_namespace = name_space;
        is_auto_rp_listen_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-all-interface-disable-operation")
    {
        is_all_interface_disable_operation = value;
        is_all_interface_disable_operation.value_namespace = name_space;
        is_all_interface_disable_operation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default-granges")
    {
        is_default_granges = value;
        is_default_granges.value_namespace = name_space;
        is_default_granges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-auto-rp-listen-sock-add")
    {
        is_auto_rp_listen_sock_add = value;
        is_auto_rp_listen_sock_add.value_namespace = name_space;
        is_auto_rp_listen_sock_add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-redistribution-reset")
    {
        is_redistribution_reset = value;
        is_redistribution_reset.value_namespace = name_space;
        is_redistribution_reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution-reset-count")
    {
        redistribution_reset_count = value;
        redistribution_reset_count.value_namespace = name_space;
        redistribution_reset_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-policy-name")
    {
        rpf_policy_name = value;
        rpf_policy_name.value_namespace = name_space;
        rpf_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-count")
    {
        table_count = value;
        table_count.value_namespace = name_space;
        table_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-table-count")
    {
        active_table_count = value;
        active_table_count.value_namespace = name_space;
        active_table_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-rp-policy-name")
    {
        anycast_rp_policy_name = value;
        anycast_rp_policy_name.value_namespace = name_space;
        anycast_rp_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-rp-configured")
    {
        anycast_rp_configured = value;
        anycast_rp_configured.value_namespace = name_space;
        anycast_rp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-remote-on")
    {
        bgp_remote_on = value;
        bgp_remote_on.value_namespace = name_space;
        bgp_remote_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-remote-interface-name")
    {
        bgp_remote_interface_name = value;
        bgp_remote_interface_name.value_namespace = name_space;
        bgp_remote_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-remote-interface")
    {
        bgp_remote_interface = value;
        bgp_remote_interface.value_namespace = name_space;
        bgp_remote_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-remote-address")
    {
        bgp_remote_address = value;
        bgp_remote_address.value_namespace = name_space;
        bgp_remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-remote-state")
    {
        bgp_remote_state = value;
        bgp_remote_state.value_namespace = name_space;
        bgp_remote_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-interface-count")
    {
        physical_interface_count = value;
        physical_interface_count.value_namespace = name_space;
        physical_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-interface-count")
    {
        virtual_interface_count = value;
        virtual_interface_count.value_namespace = name_space;
        virtual_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-mlc-interface-name")
    {
        virtual_mlc_interface_name = value;
        virtual_mlc_interface_name.value_namespace = name_space;
        virtual_mlc_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-immediate-switch")
    {
        mdt_immediate_switch = value;
        mdt_immediate_switch.value_namespace = name_space;
        mdt_immediate_switch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-root-address")
    {
        mldp_root_address.append(value);
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "murib-id")
    {
        murib_id.yfilter = yfilter;
    }
    if(value_path == "rpf-id")
    {
        rpf_id.yfilter = yfilter;
    }
    if(value_path == "remote-table-id")
    {
        remote_table_id.yfilter = yfilter;
    }
    if(value_path == "mdt-default-group")
    {
        mdt_default_group.yfilter = yfilter;
    }
    if(value_path == "mdt-source")
    {
        mdt_source.yfilter = yfilter;
    }
    if(value_path == "mdt-source-interface")
    {
        mdt_source_interface.yfilter = yfilter;
    }
    if(value_path == "mdt-interface")
    {
        mdt_interface.yfilter = yfilter;
    }
    if(value_path == "mdt-gre-rpf-identifier")
    {
        mdt_gre_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "mdt-gre-remote-rpf-identifier")
    {
        mdt_gre_remote_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "is-unicast-rib-registration")
    {
        is_unicast_rib_registration.yfilter = yfilter;
    }
    if(value_path == "is-multicast-rib-registration")
    {
        is_multicast_rib_registration.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "is-active-ital")
    {
        is_active_ital.yfilter = yfilter;
    }
    if(value_path == "is-mrib-register")
    {
        is_mrib_register.yfilter = yfilter;
    }
    if(value_path == "is-mdt-owner")
    {
        is_mdt_owner.yfilter = yfilter;
    }
    if(value_path == "is-routing-enabled")
    {
        is_routing_enabled.yfilter = yfilter;
    }
    if(value_path == "is-socket-add-required")
    {
        is_socket_add_required.yfilter = yfilter;
    }
    if(value_path == "is-socket-added")
    {
        is_socket_added.yfilter = yfilter;
    }
    if(value_path == "is-lpts-socket-add-required")
    {
        is_lpts_socket_add_required.yfilter = yfilter;
    }
    if(value_path == "is-lpts-socket-added")
    {
        is_lpts_socket_added.yfilter = yfilter;
    }
    if(value_path == "is-udp-socket-add-required")
    {
        is_udp_socket_add_required.yfilter = yfilter;
    }
    if(value_path == "is-udp-socket-added")
    {
        is_udp_socket_added.yfilter = yfilter;
    }
    if(value_path == "is-udp-socket-bind-required")
    {
        is_udp_socket_bind_required.yfilter = yfilter;
    }
    if(value_path == "is-udp-socket-bind")
    {
        is_udp_socket_bind.yfilter = yfilter;
    }
    if(value_path == "is-register-injection-socket-add-required")
    {
        is_register_injection_socket_add_required.yfilter = yfilter;
    }
    if(value_path == "is-register-injection-socket-added")
    {
        is_register_injection_socket_added.yfilter = yfilter;
    }
    if(value_path == "is-register-injection-lpts-socket-add-required")
    {
        is_register_injection_lpts_socket_add_required.yfilter = yfilter;
    }
    if(value_path == "is-register-injection-lpts-socket-added")
    {
        is_register_injection_lpts_socket_added.yfilter = yfilter;
    }
    if(value_path == "is-m-host-publish-pending")
    {
        is_m_host_publish_pending.yfilter = yfilter;
    }
    if(value_path == "mhost-interface")
    {
        mhost_interface.yfilter = yfilter;
    }
    if(value_path == "mhost-default-interface-config")
    {
        mhost_default_interface_config.yfilter = yfilter;
    }
    if(value_path == "mdt-mtu")
    {
        mdt_mtu.yfilter = yfilter;
    }
    if(value_path == "maximum-mdt-aggregation")
    {
        maximum_mdt_aggregation.yfilter = yfilter;
    }
    if(value_path == "mdt-data-switchover-interval")
    {
        mdt_data_switchover_interval.yfilter = yfilter;
    }
    if(value_path == "mdt-data-announce-interval")
    {
        mdt_data_announce_interval.yfilter = yfilter;
    }
    if(value_path == "non-default-vrf-count-on-socket")
    {
        non_default_vrf_count_on_socket.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name.yfilter = yfilter;
    }
    if(value_path == "mdt-neighbor-filter-name")
    {
        mdt_neighbor_filter_name.yfilter = yfilter;
    }
    if(value_path == "allow-rp-configured")
    {
        allow_rp_configured.yfilter = yfilter;
    }
    if(value_path == "allow-rp-group-list")
    {
        allow_rp_group_list.yfilter = yfilter;
    }
    if(value_path == "allow-rp-rp-list")
    {
        allow_rp_rp_list.yfilter = yfilter;
    }
    if(value_path == "sg-expiry-timer-configured")
    {
        sg_expiry_timer_configured.yfilter = yfilter;
    }
    if(value_path == "sg-expiry-time")
    {
        sg_expiry_time.yfilter = yfilter;
    }
    if(value_path == "sg-expiry-timer-sg-list")
    {
        sg_expiry_timer_sg_list.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-name")
    {
        mldp_mdt_name.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-interface")
    {
        mldp_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-mtu")
    {
        mldp_mdt_mtu.yfilter = yfilter;
    }
    if(value_path == "mldp-maximum-mdt-aggregation")
    {
        mldp_maximum_mdt_aggregation.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-data-switchover-interval")
    {
        mldp_mdt_data_switchover_interval.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-data-announce-interval")
    {
        mldp_mdt_data_announce_interval.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-rpf-identifier")
    {
        mldp_mdt_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-remote-rpf-identifier")
    {
        mldp_mdt_remote_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "is-create-mldp-mdt-interface")
    {
        is_create_mldp_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "is-mldp-mdt-owner")
    {
        is_mldp_mdt_owner.yfilter = yfilter;
    }
    if(value_path == "mldp-root-count")
    {
        mldp_root_count.yfilter = yfilter;
    }
    if(value_path == "mldp-head-lsm-identifier")
    {
        mldp_head_lsm_identifier.yfilter = yfilter;
    }
    if(value_path == "mldp-remote-head-lsm-identifier")
    {
        mldp_remote_head_lsm_identifier.yfilter = yfilter;
    }
    if(value_path == "organization-unique-identifier")
    {
        organization_unique_identifier.yfilter = yfilter;
    }
    if(value_path == "vpn-index")
    {
        vpn_index.yfilter = yfilter;
    }
    if(value_path == "mldp-partitioned-mdt-configured")
    {
        mldp_partitioned_mdt_configured.yfilter = yfilter;
    }
    if(value_path == "mldp-remote-partitioned-mdt-configured")
    {
        mldp_remote_partitioned_mdt_configured.yfilter = yfilter;
    }
    if(value_path == "mldp-partioned-mp2m-ptree")
    {
        mldp_partioned_mp2m_ptree.yfilter = yfilter;
    }
    if(value_path == "mldp-partitioned-head-lsm-identifier")
    {
        mldp_partitioned_head_lsm_identifier.yfilter = yfilter;
    }
    if(value_path == "mldp-head-local-label")
    {
        mldp_head_local_label.yfilter = yfilter;
    }
    if(value_path == "mldp-partitioned-mdt-identifier")
    {
        mldp_partitioned_mdt_identifier.yfilter = yfilter;
    }
    if(value_path == "bgp-auto-discovery-configured")
    {
        bgp_auto_discovery_configured.yfilter = yfilter;
    }
    if(value_path == "suppress-pim-data-mdt-tlv")
    {
        suppress_pim_data_mdt_tlv.yfilter = yfilter;
    }
    if(value_path == "inter-autonomous-system-enabled")
    {
        inter_autonomous_system_enabled.yfilter = yfilter;
    }
    if(value_path == "bgp-source-active-announce")
    {
        bgp_source_active_announce.yfilter = yfilter;
    }
    if(value_path == "bgp-i-pmsi-added")
    {
        bgp_i_pmsi_added.yfilter = yfilter;
    }
    if(value_path == "mldp-bsr-control-tree-added")
    {
        mldp_bsr_control_tree_added.yfilter = yfilter;
    }
    if(value_path == "mldp-auto-rp-discovery-tree-added")
    {
        mldp_auto_rp_discovery_tree_added.yfilter = yfilter;
    }
    if(value_path == "mldp-auto-rp-announce-tree-added")
    {
        mldp_auto_rp_announce_tree_added.yfilter = yfilter;
    }
    if(value_path == "bgp-auto-discovery-type")
    {
        bgp_auto_discovery_type.yfilter = yfilter;
    }
    if(value_path == "mdt-partitioned-mdt-control-identifier")
    {
        mdt_partitioned_mdt_control_identifier.yfilter = yfilter;
    }
    if(value_path == "mdt-partitioned-ir-control-identifier")
    {
        mdt_partitioned_ir_control_identifier.yfilter = yfilter;
    }
    if(value_path == "mldp-control-head-lsm-identifier")
    {
        mldp_control_head_lsm_identifier.yfilter = yfilter;
    }
    if(value_path == "umh")
    {
        umh.yfilter = yfilter;
    }
    if(value_path == "suppress-shared-tree-join")
    {
        suppress_shared_tree_join.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-mdt-name")
    {
        rsvp_te_mdt_name.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-mdt-interface")
    {
        rsvp_te_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-mdt-mtu")
    {
        rsvp_te_mdt_mtu.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-maximum-mdt-aggregation")
    {
        rsvp_te_maximum_mdt_aggregation.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-mdt-data-switchover-interval")
    {
        rsvp_te_mdt_data_switchover_interval.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-mdt-data-announce-interval")
    {
        rsvp_te_mdt_data_announce_interval.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-mdt-rpf-identifier")
    {
        rsvp_te_mdt_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "is-create-rsvp-te-mdt-interface")
    {
        is_create_rsvp_te_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "is-rsvp-te-mdt-owner")
    {
        is_rsvp_te_mdt_owner.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-mdt-static-p2mp-count")
    {
        rsvp_te_mdt_static_p2mp_count.yfilter = yfilter;
    }
    if(value_path == "p2mpte-li-drop")
    {
        p2mpte_li_drop.yfilter = yfilter;
    }
    if(value_path == "ir-mdt-name")
    {
        ir_mdt_name.yfilter = yfilter;
    }
    if(value_path == "ir-mdt-interface")
    {
        ir_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "ir-mdt-mtu")
    {
        ir_mdt_mtu.yfilter = yfilter;
    }
    if(value_path == "ir-maximum-mdt-aggregation")
    {
        ir_maximum_mdt_aggregation.yfilter = yfilter;
    }
    if(value_path == "ir-mdt-data-switchover-interval")
    {
        ir_mdt_data_switchover_interval.yfilter = yfilter;
    }
    if(value_path == "ir-mdt-data-announce-interval")
    {
        ir_mdt_data_announce_interval.yfilter = yfilter;
    }
    if(value_path == "ir-mdt-rpf-identifier")
    {
        ir_mdt_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "ir-mdt-tail-label")
    {
        ir_mdt_tail_label.yfilter = yfilter;
    }
    if(value_path == "is-create-ir-mdt-interface")
    {
        is_create_ir_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "is-ir-mdt-owner")
    {
        is_ir_mdt_owner.yfilter = yfilter;
    }
    if(value_path == "in-b-and-mdt-name")
    {
        in_b_and_mdt_name.yfilter = yfilter;
    }
    if(value_path == "in-b-and-mdt-interface")
    {
        in_b_and_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "in-b-and-mdt-mtu")
    {
        in_b_and_mdt_mtu.yfilter = yfilter;
    }
    if(value_path == "in-band-maximum-mdt-aggregation")
    {
        in_band_maximum_mdt_aggregation.yfilter = yfilter;
    }
    if(value_path == "in-b-and-mdt-data-switchover-interval")
    {
        in_b_and_mdt_data_switchover_interval.yfilter = yfilter;
    }
    if(value_path == "in-b-and-mdt-data-announce-interval")
    {
        in_b_and_mdt_data_announce_interval.yfilter = yfilter;
    }
    if(value_path == "in-b-and-mdt-rpf-identifier")
    {
        in_b_and_mdt_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "is-create-in-b-and-mdt-interface")
    {
        is_create_in_b_and_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "is-in-b-and-mdt-owner")
    {
        is_in_b_and_mdt_owner.yfilter = yfilter;
    }
    if(value_path == "in-band-signaling-local-enabled")
    {
        in_band_signaling_local_enabled.yfilter = yfilter;
    }
    if(value_path == "in-band-signaling-remote-enabled")
    {
        in_band_signaling_remote_enabled.yfilter = yfilter;
    }
    if(value_path == "valid-rd-present")
    {
        valid_rd_present.yfilter = yfilter;
    }
    if(value_path == "stale-rd-present")
    {
        stale_rd_present.yfilter = yfilter;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher.yfilter = yfilter;
    }
    if(value_path == "gin-b-and-mdt-name")
    {
        gin_b_and_mdt_name.yfilter = yfilter;
    }
    if(value_path == "gin-b-and-mdt-interface")
    {
        gin_b_and_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "gin-b-and-mdt-mtu")
    {
        gin_b_and_mdt_mtu.yfilter = yfilter;
    }
    if(value_path == "gin-band-maximum-mdt-aggregation")
    {
        gin_band_maximum_mdt_aggregation.yfilter = yfilter;
    }
    if(value_path == "gin-b-and-mdt-data-switchover-interval")
    {
        gin_b_and_mdt_data_switchover_interval.yfilter = yfilter;
    }
    if(value_path == "gin-b-and-mdt-data-announce-interval")
    {
        gin_b_and_mdt_data_announce_interval.yfilter = yfilter;
    }
    if(value_path == "gin-b-and-mdt-rpf-identifier")
    {
        gin_b_and_mdt_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "is-create-gin-b-and-mdt-interface")
    {
        is_create_gin_b_and_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "is-gin-b-and-mdt-owner")
    {
        is_gin_b_and_mdt_owner.yfilter = yfilter;
    }
    if(value_path == "is-pim-nsf-rib-converged")
    {
        is_pim_nsf_rib_converged.yfilter = yfilter;
    }
    if(value_path == "is-pim-nsf-rib-converge-received")
    {
        is_pim_nsf_rib_converge_received.yfilter = yfilter;
    }
    if(value_path == "is-rib-multipath-enabled")
    {
        is_rib_multipath_enabled.yfilter = yfilter;
    }
    if(value_path == "is-rib-multipath-interface-hash")
    {
        is_rib_multipath_interface_hash.yfilter = yfilter;
    }
    if(value_path == "is-rib-multipath-source-hash")
    {
        is_rib_multipath_source_hash.yfilter = yfilter;
    }
    if(value_path == "is-rib-multipath-source-next-hop-hash")
    {
        is_rib_multipath_source_next_hop_hash.yfilter = yfilter;
    }
    if(value_path == "rump-enabled")
    {
        rump_enabled.yfilter = yfilter;
    }
    if(value_path == "is-create-mdt-interface")
    {
        is_create_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "is-auto-rp-listen-enabled")
    {
        is_auto_rp_listen_enabled.yfilter = yfilter;
    }
    if(value_path == "is-all-interface-disable-operation")
    {
        is_all_interface_disable_operation.yfilter = yfilter;
    }
    if(value_path == "is-default-granges")
    {
        is_default_granges.yfilter = yfilter;
    }
    if(value_path == "is-auto-rp-listen-sock-add")
    {
        is_auto_rp_listen_sock_add.yfilter = yfilter;
    }
    if(value_path == "is-redistribution-reset")
    {
        is_redistribution_reset.yfilter = yfilter;
    }
    if(value_path == "redistribution-reset-count")
    {
        redistribution_reset_count.yfilter = yfilter;
    }
    if(value_path == "rpf-policy-name")
    {
        rpf_policy_name.yfilter = yfilter;
    }
    if(value_path == "table-count")
    {
        table_count.yfilter = yfilter;
    }
    if(value_path == "active-table-count")
    {
        active_table_count.yfilter = yfilter;
    }
    if(value_path == "anycast-rp-policy-name")
    {
        anycast_rp_policy_name.yfilter = yfilter;
    }
    if(value_path == "anycast-rp-configured")
    {
        anycast_rp_configured.yfilter = yfilter;
    }
    if(value_path == "bgp-remote-on")
    {
        bgp_remote_on.yfilter = yfilter;
    }
    if(value_path == "bgp-remote-interface-name")
    {
        bgp_remote_interface_name.yfilter = yfilter;
    }
    if(value_path == "bgp-remote-interface")
    {
        bgp_remote_interface.yfilter = yfilter;
    }
    if(value_path == "bgp-remote-address")
    {
        bgp_remote_address.yfilter = yfilter;
    }
    if(value_path == "bgp-remote-state")
    {
        bgp_remote_state.yfilter = yfilter;
    }
    if(value_path == "physical-interface-count")
    {
        physical_interface_count.yfilter = yfilter;
    }
    if(value_path == "virtual-interface-count")
    {
        virtual_interface_count.yfilter = yfilter;
    }
    if(value_path == "virtual-mlc-interface-name")
    {
        virtual_mlc_interface_name.yfilter = yfilter;
    }
    if(value_path == "mdt-immediate-switch")
    {
        mdt_immediate_switch.yfilter = yfilter;
    }
    if(value_path == "mldp-root-address")
    {
        mldp_root_address.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-default-group" || name == "rpf-default-table" || name == "export-route-target" || name == "import-route-target" || name == "anycast-rp-range" || name == "vrf-id" || name == "table-id" || name == "murib-id" || name == "rpf-id" || name == "remote-table-id" || name == "mdt-default-group" || name == "mdt-source" || name == "mdt-source-interface" || name == "mdt-interface" || name == "mdt-gre-rpf-identifier" || name == "mdt-gre-remote-rpf-identifier" || name == "is-unicast-rib-registration" || name == "is-multicast-rib-registration" || name == "is-active" || name == "is-active-ital" || name == "is-mrib-register" || name == "is-mdt-owner" || name == "is-routing-enabled" || name == "is-socket-add-required" || name == "is-socket-added" || name == "is-lpts-socket-add-required" || name == "is-lpts-socket-added" || name == "is-udp-socket-add-required" || name == "is-udp-socket-added" || name == "is-udp-socket-bind-required" || name == "is-udp-socket-bind" || name == "is-register-injection-socket-add-required" || name == "is-register-injection-socket-added" || name == "is-register-injection-lpts-socket-add-required" || name == "is-register-injection-lpts-socket-added" || name == "is-m-host-publish-pending" || name == "mhost-interface" || name == "mhost-default-interface-config" || name == "mdt-mtu" || name == "maximum-mdt-aggregation" || name == "mdt-data-switchover-interval" || name == "mdt-data-announce-interval" || name == "non-default-vrf-count-on-socket" || name == "neighbor-filter-name" || name == "mdt-neighbor-filter-name" || name == "allow-rp-configured" || name == "allow-rp-group-list" || name == "allow-rp-rp-list" || name == "sg-expiry-timer-configured" || name == "sg-expiry-time" || name == "sg-expiry-timer-sg-list" || name == "mldp-mdt-name" || name == "mldp-mdt-interface" || name == "mldp-mdt-mtu" || name == "mldp-maximum-mdt-aggregation" || name == "mldp-mdt-data-switchover-interval" || name == "mldp-mdt-data-announce-interval" || name == "mldp-mdt-rpf-identifier" || name == "mldp-mdt-remote-rpf-identifier" || name == "is-create-mldp-mdt-interface" || name == "is-mldp-mdt-owner" || name == "mldp-root-count" || name == "mldp-head-lsm-identifier" || name == "mldp-remote-head-lsm-identifier" || name == "organization-unique-identifier" || name == "vpn-index" || name == "mldp-partitioned-mdt-configured" || name == "mldp-remote-partitioned-mdt-configured" || name == "mldp-partioned-mp2m-ptree" || name == "mldp-partitioned-head-lsm-identifier" || name == "mldp-head-local-label" || name == "mldp-partitioned-mdt-identifier" || name == "bgp-auto-discovery-configured" || name == "suppress-pim-data-mdt-tlv" || name == "inter-autonomous-system-enabled" || name == "bgp-source-active-announce" || name == "bgp-i-pmsi-added" || name == "mldp-bsr-control-tree-added" || name == "mldp-auto-rp-discovery-tree-added" || name == "mldp-auto-rp-announce-tree-added" || name == "bgp-auto-discovery-type" || name == "mdt-partitioned-mdt-control-identifier" || name == "mdt-partitioned-ir-control-identifier" || name == "mldp-control-head-lsm-identifier" || name == "umh" || name == "suppress-shared-tree-join" || name == "rsvp-te-mdt-name" || name == "rsvp-te-mdt-interface" || name == "rsvp-te-mdt-mtu" || name == "rsvp-te-maximum-mdt-aggregation" || name == "rsvp-te-mdt-data-switchover-interval" || name == "rsvp-te-mdt-data-announce-interval" || name == "rsvp-te-mdt-rpf-identifier" || name == "is-create-rsvp-te-mdt-interface" || name == "is-rsvp-te-mdt-owner" || name == "rsvp-te-mdt-static-p2mp-count" || name == "p2mpte-li-drop" || name == "ir-mdt-name" || name == "ir-mdt-interface" || name == "ir-mdt-mtu" || name == "ir-maximum-mdt-aggregation" || name == "ir-mdt-data-switchover-interval" || name == "ir-mdt-data-announce-interval" || name == "ir-mdt-rpf-identifier" || name == "ir-mdt-tail-label" || name == "is-create-ir-mdt-interface" || name == "is-ir-mdt-owner" || name == "in-b-and-mdt-name" || name == "in-b-and-mdt-interface" || name == "in-b-and-mdt-mtu" || name == "in-band-maximum-mdt-aggregation" || name == "in-b-and-mdt-data-switchover-interval" || name == "in-b-and-mdt-data-announce-interval" || name == "in-b-and-mdt-rpf-identifier" || name == "is-create-in-b-and-mdt-interface" || name == "is-in-b-and-mdt-owner" || name == "in-band-signaling-local-enabled" || name == "in-band-signaling-remote-enabled" || name == "valid-rd-present" || name == "stale-rd-present" || name == "route-distinguisher" || name == "gin-b-and-mdt-name" || name == "gin-b-and-mdt-interface" || name == "gin-b-and-mdt-mtu" || name == "gin-band-maximum-mdt-aggregation" || name == "gin-b-and-mdt-data-switchover-interval" || name == "gin-b-and-mdt-data-announce-interval" || name == "gin-b-and-mdt-rpf-identifier" || name == "is-create-gin-b-and-mdt-interface" || name == "is-gin-b-and-mdt-owner" || name == "is-pim-nsf-rib-converged" || name == "is-pim-nsf-rib-converge-received" || name == "is-rib-multipath-enabled" || name == "is-rib-multipath-interface-hash" || name == "is-rib-multipath-source-hash" || name == "is-rib-multipath-source-next-hop-hash" || name == "rump-enabled" || name == "is-create-mdt-interface" || name == "is-auto-rp-listen-enabled" || name == "is-all-interface-disable-operation" || name == "is-default-granges" || name == "is-auto-rp-listen-sock-add" || name == "is-redistribution-reset" || name == "redistribution-reset-count" || name == "rpf-policy-name" || name == "table-count" || name == "active-table-count" || name == "anycast-rp-policy-name" || name == "anycast-rp-configured" || name == "bgp-remote-on" || name == "bgp-remote-interface-name" || name == "bgp-remote-interface" || name == "bgp-remote-address" || name == "bgp-remote-state" || name == "physical-interface-count" || name == "virtual-interface-count" || name == "virtual-mlc-interface-name" || name == "mdt-immediate-switch" || name == "mldp-root-address")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::RemoteDefaultGroup()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "remote-default-group"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::~RemoteDefaultGroup()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-default-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::RemoteDefaultGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::RpfDefaultTable()
    :
    afi{YType::uint32, "afi"},
    safi{YType::uint32, "safi"},
    table_name{YType::str, "table-name"},
    vrf_id{YType::uint32, "vrf-id"},
    table_id{YType::uint32, "table-id"},
    is_active{YType::boolean, "is-active"},
    is_ital_registration_done{YType::boolean, "is-ital-registration-done"},
    is_rib_registration_done{YType::boolean, "is-rib-registration-done"},
    is_rib_convergence_received{YType::boolean, "is-rib-convergence-received"},
    is_rib_convergence{YType::boolean, "is-rib-convergence"},
    rpf_registrations{YType::uint32, "rpf-registrations"}
{

    yang_name = "rpf-default-table"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::~RpfDefaultTable()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::has_data() const
{
    return afi.is_set
	|| safi.is_set
	|| table_name.is_set
	|| vrf_id.is_set
	|| table_id.is_set
	|| is_active.is_set
	|| is_ital_registration_done.is_set
	|| is_rib_registration_done.is_set
	|| is_rib_convergence_received.is_set
	|| is_rib_convergence.is_set
	|| rpf_registrations.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(safi.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(is_ital_registration_done.yfilter)
	|| ydk::is_set(is_rib_registration_done.yfilter)
	|| ydk::is_set(is_rib_convergence_received.yfilter)
	|| ydk::is_set(is_rib_convergence.yfilter)
	|| ydk::is_set(rpf_registrations.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-default-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (safi.is_set || is_set(safi.yfilter)) leaf_name_data.push_back(safi.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (is_ital_registration_done.is_set || is_set(is_ital_registration_done.yfilter)) leaf_name_data.push_back(is_ital_registration_done.get_name_leafdata());
    if (is_rib_registration_done.is_set || is_set(is_rib_registration_done.yfilter)) leaf_name_data.push_back(is_rib_registration_done.get_name_leafdata());
    if (is_rib_convergence_received.is_set || is_set(is_rib_convergence_received.yfilter)) leaf_name_data.push_back(is_rib_convergence_received.get_name_leafdata());
    if (is_rib_convergence.is_set || is_set(is_rib_convergence.yfilter)) leaf_name_data.push_back(is_rib_convergence.get_name_leafdata());
    if (rpf_registrations.is_set || is_set(rpf_registrations.yfilter)) leaf_name_data.push_back(rpf_registrations.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi")
    {
        safi = value;
        safi.value_namespace = name_space;
        safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-active")
    {
        is_active = value;
        is_active.value_namespace = name_space;
        is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ital-registration-done")
    {
        is_ital_registration_done = value;
        is_ital_registration_done.value_namespace = name_space;
        is_ital_registration_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-registration-done")
    {
        is_rib_registration_done = value;
        is_rib_registration_done.value_namespace = name_space;
        is_rib_registration_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-convergence-received")
    {
        is_rib_convergence_received = value;
        is_rib_convergence_received.value_namespace = name_space;
        is_rib_convergence_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence = value;
        is_rib_convergence.value_namespace = name_space;
        is_rib_convergence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations = value;
        rpf_registrations.value_namespace = name_space;
        rpf_registrations.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "safi")
    {
        safi.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "is-ital-registration-done")
    {
        is_ital_registration_done.yfilter = yfilter;
    }
    if(value_path == "is-rib-registration-done")
    {
        is_rib_registration_done.yfilter = yfilter;
    }
    if(value_path == "is-rib-convergence-received")
    {
        is_rib_convergence_received.yfilter = yfilter;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence.yfilter = yfilter;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::RpfDefaultTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "safi" || name == "table-name" || name == "vrf-id" || name == "table-id" || name == "is-active" || name == "is-ital-registration-done" || name == "is-rib-registration-done" || name == "is-rib-convergence-received" || name == "is-rib-convergence" || name == "rpf-registrations")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::ExportRouteTarget()
    :
    route_target{YType::str, "route-target"},
    configured{YType::boolean, "configured"},
    anycast_rp{YType::boolean, "anycast-rp"},
    anycast_rp_marked{YType::boolean, "anycast-rp-marked"},
    update_pending{YType::boolean, "update-pending"},
    bgp_auto_discovery{YType::boolean, "bgp-auto-discovery"},
    segment_border{YType::boolean, "segment-border"}
{

    yang_name = "export-route-target"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::~ExportRouteTarget()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::has_data() const
{
    return route_target.is_set
	|| configured.is_set
	|| anycast_rp.is_set
	|| anycast_rp_marked.is_set
	|| update_pending.is_set
	|| bgp_auto_discovery.is_set
	|| segment_border.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_target.yfilter)
	|| ydk::is_set(configured.yfilter)
	|| ydk::is_set(anycast_rp.yfilter)
	|| ydk::is_set(anycast_rp_marked.yfilter)
	|| ydk::is_set(update_pending.yfilter)
	|| ydk::is_set(bgp_auto_discovery.yfilter)
	|| ydk::is_set(segment_border.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export-route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_target.is_set || is_set(route_target.yfilter)) leaf_name_data.push_back(route_target.get_name_leafdata());
    if (configured.is_set || is_set(configured.yfilter)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (anycast_rp.is_set || is_set(anycast_rp.yfilter)) leaf_name_data.push_back(anycast_rp.get_name_leafdata());
    if (anycast_rp_marked.is_set || is_set(anycast_rp_marked.yfilter)) leaf_name_data.push_back(anycast_rp_marked.get_name_leafdata());
    if (update_pending.is_set || is_set(update_pending.yfilter)) leaf_name_data.push_back(update_pending.get_name_leafdata());
    if (bgp_auto_discovery.is_set || is_set(bgp_auto_discovery.yfilter)) leaf_name_data.push_back(bgp_auto_discovery.get_name_leafdata());
    if (segment_border.is_set || is_set(segment_border.yfilter)) leaf_name_data.push_back(segment_border.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-target")
    {
        route_target = value;
        route_target.value_namespace = name_space;
        route_target.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured")
    {
        configured = value;
        configured.value_namespace = name_space;
        configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-rp")
    {
        anycast_rp = value;
        anycast_rp.value_namespace = name_space;
        anycast_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-rp-marked")
    {
        anycast_rp_marked = value;
        anycast_rp_marked.value_namespace = name_space;
        anycast_rp_marked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-pending")
    {
        update_pending = value;
        update_pending.value_namespace = name_space;
        update_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-auto-discovery")
    {
        bgp_auto_discovery = value;
        bgp_auto_discovery.value_namespace = name_space;
        bgp_auto_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-border")
    {
        segment_border = value;
        segment_border.value_namespace = name_space;
        segment_border.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-target")
    {
        route_target.yfilter = yfilter;
    }
    if(value_path == "configured")
    {
        configured.yfilter = yfilter;
    }
    if(value_path == "anycast-rp")
    {
        anycast_rp.yfilter = yfilter;
    }
    if(value_path == "anycast-rp-marked")
    {
        anycast_rp_marked.yfilter = yfilter;
    }
    if(value_path == "update-pending")
    {
        update_pending.yfilter = yfilter;
    }
    if(value_path == "bgp-auto-discovery")
    {
        bgp_auto_discovery.yfilter = yfilter;
    }
    if(value_path == "segment-border")
    {
        segment_border.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::ExportRouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target" || name == "configured" || name == "anycast-rp" || name == "anycast-rp-marked" || name == "update-pending" || name == "bgp-auto-discovery" || name == "segment-border")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::ImportRouteTarget()
    :
    route_target{YType::str, "route-target"},
    configured{YType::boolean, "configured"},
    anycast_rp{YType::boolean, "anycast-rp"},
    anycast_rp_marked{YType::boolean, "anycast-rp-marked"},
    update_pending{YType::boolean, "update-pending"},
    bgp_auto_discovery{YType::boolean, "bgp-auto-discovery"},
    segment_border{YType::boolean, "segment-border"}
{

    yang_name = "import-route-target"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::~ImportRouteTarget()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::has_data() const
{
    return route_target.is_set
	|| configured.is_set
	|| anycast_rp.is_set
	|| anycast_rp_marked.is_set
	|| update_pending.is_set
	|| bgp_auto_discovery.is_set
	|| segment_border.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_target.yfilter)
	|| ydk::is_set(configured.yfilter)
	|| ydk::is_set(anycast_rp.yfilter)
	|| ydk::is_set(anycast_rp_marked.yfilter)
	|| ydk::is_set(update_pending.yfilter)
	|| ydk::is_set(bgp_auto_discovery.yfilter)
	|| ydk::is_set(segment_border.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import-route-target";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_target.is_set || is_set(route_target.yfilter)) leaf_name_data.push_back(route_target.get_name_leafdata());
    if (configured.is_set || is_set(configured.yfilter)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (anycast_rp.is_set || is_set(anycast_rp.yfilter)) leaf_name_data.push_back(anycast_rp.get_name_leafdata());
    if (anycast_rp_marked.is_set || is_set(anycast_rp_marked.yfilter)) leaf_name_data.push_back(anycast_rp_marked.get_name_leafdata());
    if (update_pending.is_set || is_set(update_pending.yfilter)) leaf_name_data.push_back(update_pending.get_name_leafdata());
    if (bgp_auto_discovery.is_set || is_set(bgp_auto_discovery.yfilter)) leaf_name_data.push_back(bgp_auto_discovery.get_name_leafdata());
    if (segment_border.is_set || is_set(segment_border.yfilter)) leaf_name_data.push_back(segment_border.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-target")
    {
        route_target = value;
        route_target.value_namespace = name_space;
        route_target.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured")
    {
        configured = value;
        configured.value_namespace = name_space;
        configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-rp")
    {
        anycast_rp = value;
        anycast_rp.value_namespace = name_space;
        anycast_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-rp-marked")
    {
        anycast_rp_marked = value;
        anycast_rp_marked.value_namespace = name_space;
        anycast_rp_marked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-pending")
    {
        update_pending = value;
        update_pending.value_namespace = name_space;
        update_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-auto-discovery")
    {
        bgp_auto_discovery = value;
        bgp_auto_discovery.value_namespace = name_space;
        bgp_auto_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-border")
    {
        segment_border = value;
        segment_border.value_namespace = name_space;
        segment_border.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-target")
    {
        route_target.yfilter = yfilter;
    }
    if(value_path == "configured")
    {
        configured.yfilter = yfilter;
    }
    if(value_path == "anycast-rp")
    {
        anycast_rp.yfilter = yfilter;
    }
    if(value_path == "anycast-rp-marked")
    {
        anycast_rp_marked.yfilter = yfilter;
    }
    if(value_path == "update-pending")
    {
        update_pending.yfilter = yfilter;
    }
    if(value_path == "bgp-auto-discovery")
    {
        bgp_auto_discovery.yfilter = yfilter;
    }
    if(value_path == "segment-border")
    {
        segment_border.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::ImportRouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target" || name == "configured" || name == "anycast-rp" || name == "anycast-rp-marked" || name == "update-pending" || name == "bgp-auto-discovery" || name == "segment-border")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::AnycastRpRange()
    :
    prefix_length{YType::uint8, "prefix-length"},
    ancast_rp_marked{YType::boolean, "ancast-rp-marked"}
    	,
    prefix(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix>())
{
    prefix->parent = this;

    yang_name = "anycast-rp-range"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::~AnycastRpRange()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::has_data() const
{
    return prefix_length.is_set
	|| ancast_rp_marked.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(ancast_rp_marked.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "anycast-rp-range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (ancast_rp_marked.is_set || is_set(ancast_rp_marked.yfilter)) leaf_name_data.push_back(ancast_rp_marked.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ancast-rp-marked")
    {
        ancast_rp_marked = value;
        ancast_rp_marked.value_namespace = name_space;
        ancast_rp_marked.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "ancast-rp-marked")
    {
        ancast_rp_marked.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length" || name == "ancast-rp-marked")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "anycast-rp-range"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::~Prefix()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::Context::AnycastRpRange::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCounts()
{

    yang_name = "topology-entry-flag-route-counts"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::~TopologyEntryFlagRouteCounts()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::has_data() const
{
    for (std::size_t index=0; index<topology_entry_flag_route_count.size(); index++)
    {
        if(topology_entry_flag_route_count[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::has_operation() const
{
    for (std::size_t index=0; index<topology_entry_flag_route_count.size(); index++)
    {
        if(topology_entry_flag_route_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-entry-flag-route-counts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-entry-flag-route-count")
    {
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount>();
        c->parent = this;
        topology_entry_flag_route_count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : topology_entry_flag_route_count)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-entry-flag-route-count")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::TopologyEntryFlagRouteCount()
    :
    entry_flag{YType::enumeration, "entry-flag"},
    group_ranges{YType::uint32, "group-ranges"},
    active_group_ranges{YType::uint32, "active-group-ranges"},
    groute_count{YType::uint32, "groute-count"},
    sg_route_count{YType::uint32, "sg-route-count"},
    sgr_route_count{YType::uint32, "sgr-route-count"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"}
{

    yang_name = "topology-entry-flag-route-count"; yang_parent_name = "topology-entry-flag-route-counts"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::~TopologyEntryFlagRouteCount()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::has_data() const
{
    return entry_flag.is_set
	|| group_ranges.is_set
	|| active_group_ranges.is_set
	|| groute_count.is_set
	|| sg_route_count.is_set
	|| sgr_route_count.is_set
	|| is_node_low_memory.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_flag.yfilter)
	|| ydk::is_set(group_ranges.yfilter)
	|| ydk::is_set(active_group_ranges.yfilter)
	|| ydk::is_set(groute_count.yfilter)
	|| ydk::is_set(sg_route_count.yfilter)
	|| ydk::is_set(sgr_route_count.yfilter)
	|| ydk::is_set(is_node_low_memory.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-entry-flag-route-count" <<"[entry-flag='" <<entry_flag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_flag.is_set || is_set(entry_flag.yfilter)) leaf_name_data.push_back(entry_flag.get_name_leafdata());
    if (group_ranges.is_set || is_set(group_ranges.yfilter)) leaf_name_data.push_back(group_ranges.get_name_leafdata());
    if (active_group_ranges.is_set || is_set(active_group_ranges.yfilter)) leaf_name_data.push_back(active_group_ranges.get_name_leafdata());
    if (groute_count.is_set || is_set(groute_count.yfilter)) leaf_name_data.push_back(groute_count.get_name_leafdata());
    if (sg_route_count.is_set || is_set(sg_route_count.yfilter)) leaf_name_data.push_back(sg_route_count.get_name_leafdata());
    if (sgr_route_count.is_set || is_set(sgr_route_count.yfilter)) leaf_name_data.push_back(sgr_route_count.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.yfilter)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-flag")
    {
        entry_flag = value;
        entry_flag.value_namespace = name_space;
        entry_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-ranges")
    {
        group_ranges = value;
        group_ranges.value_namespace = name_space;
        group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges = value;
        active_group_ranges.value_namespace = name_space;
        active_group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groute-count")
    {
        groute_count = value;
        groute_count.value_namespace = name_space;
        groute_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count = value;
        sg_route_count.value_namespace = name_space;
        sg_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count = value;
        sgr_route_count.value_namespace = name_space;
        sgr_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
        is_node_low_memory.value_namespace = name_space;
        is_node_low_memory.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-flag")
    {
        entry_flag.yfilter = yfilter;
    }
    if(value_path == "group-ranges")
    {
        group_ranges.yfilter = yfilter;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges.yfilter = yfilter;
    }
    if(value_path == "groute-count")
    {
        groute_count.yfilter = yfilter;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count.yfilter = yfilter;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count.yfilter = yfilter;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry-flag" || name == "group-ranges" || name == "active-group-ranges" || name == "groute-count" || name == "sg-route-count" || name == "sgr-route-count" || name == "is-node-low-memory")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RpfRedirect()
    :
    redirect_route_databases(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases>())
	,bundle_interfaces(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces>())
{
    redirect_route_databases->parent = this;
    bundle_interfaces->parent = this;

    yang_name = "rpf-redirect"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::~RpfRedirect()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::has_data() const
{
    return (redirect_route_databases !=  nullptr && redirect_route_databases->has_data())
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_data());
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::has_operation() const
{
    return is_set(yfilter)
	|| (redirect_route_databases !=  nullptr && redirect_route_databases->has_operation())
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_operation());
}

std::string Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-redirect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect-route-databases")
    {
        if(redirect_route_databases == nullptr)
        {
            redirect_route_databases = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases>();
        }
        return redirect_route_databases;
    }

    if(child_yang_name == "bundle-interfaces")
    {
        if(bundle_interfaces == nullptr)
        {
            bundle_interfaces = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces>();
        }
        return bundle_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(redirect_route_databases != nullptr)
    {
        children["redirect-route-databases"] = redirect_route_databases;
    }

    if(bundle_interfaces != nullptr)
    {
        children["bundle-interfaces"] = bundle_interfaces;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect-route-databases" || name == "bundle-interfaces")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabases()
{

    yang_name = "redirect-route-databases"; yang_parent_name = "rpf-redirect"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::~RedirectRouteDatabases()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::has_data() const
{
    for (std::size_t index=0; index<redirect_route_database.size(); index++)
    {
        if(redirect_route_database[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::has_operation() const
{
    for (std::size_t index=0; index<redirect_route_database.size(); index++)
    {
        if(redirect_route_database[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect-route-databases";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect-route-database")
    {
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase>();
        c->parent = this;
        redirect_route_database.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : redirect_route_database)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect-route-database")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::RedirectRouteDatabase()
    :
    source_address{YType::str, "source-address"},
    group_address{YType::str, "group-address"},
    bandwidth{YType::uint32, "bandwidth"},
    uptime{YType::uint64, "uptime"}
    	,
    group_address_xr(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr>())
	,source_address_xr(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr>())
{
    group_address_xr->parent = this;
    source_address_xr->parent = this;

    yang_name = "redirect-route-database"; yang_parent_name = "redirect-route-databases"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::~RedirectRouteDatabase()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return source_address.is_set
	|| group_address.is_set
	|| bandwidth.is_set
	|| uptime.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (source_address_xr !=  nullptr && source_address_xr->has_data());
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation());
}

std::string Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect-route-database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr == nullptr)
        {
            source_address_xr = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr>();
        }
        return source_address_xr;
    }

    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    if(source_address_xr != nullptr)
    {
        children["source-address-xr"] = source_address_xr;
    }

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

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "source-address-xr" || name == "interface" || name == "source-address" || name == "group-address" || name == "bandwidth" || name == "uptime")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "redirect-route-database"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::~GroupAddressXr()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address-xr"; yang_parent_name = "redirect-route-database"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::~SourceAddressXr()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    uptime{YType::uint64, "uptime"},
    expiry{YType::uint64, "expiry"},
    is_rpf_interface{YType::boolean, "is-rpf-interface"},
    is_outgoing_interface{YType::boolean, "is-outgoing-interface"},
    is_snoop_interface{YType::boolean, "is-snoop-interface"}
    	,
    rpf_address(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress>())
{
    rpf_address->parent = this;

    yang_name = "interface"; yang_parent_name = "redirect-route-database"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::~Interface()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::has_data() const
{
    return interface_name.is_set
	|| uptime.is_set
	|| expiry.is_set
	|| is_rpf_interface.is_set
	|| is_outgoing_interface.is_set
	|| is_snoop_interface.is_set
	|| (rpf_address !=  nullptr && rpf_address->has_data());
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(expiry.yfilter)
	|| ydk::is_set(is_rpf_interface.yfilter)
	|| ydk::is_set(is_outgoing_interface.yfilter)
	|| ydk::is_set(is_snoop_interface.yfilter)
	|| (rpf_address !=  nullptr && rpf_address->has_operation());
}

std::string Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (is_rpf_interface.is_set || is_set(is_rpf_interface.yfilter)) leaf_name_data.push_back(is_rpf_interface.get_name_leafdata());
    if (is_outgoing_interface.is_set || is_set(is_outgoing_interface.yfilter)) leaf_name_data.push_back(is_outgoing_interface.get_name_leafdata());
    if (is_snoop_interface.is_set || is_set(is_snoop_interface.yfilter)) leaf_name_data.push_back(is_snoop_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-address")
    {
        if(rpf_address == nullptr)
        {
            rpf_address = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress>();
        }
        return rpf_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rpf_address != nullptr)
    {
        children["rpf-address"] = rpf_address;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rpf-interface")
    {
        is_rpf_interface = value;
        is_rpf_interface.value_namespace = name_space;
        is_rpf_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-outgoing-interface")
    {
        is_outgoing_interface = value;
        is_outgoing_interface.value_namespace = name_space;
        is_outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-snoop-interface")
    {
        is_snoop_interface = value;
        is_snoop_interface.value_namespace = name_space;
        is_snoop_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
    if(value_path == "is-rpf-interface")
    {
        is_rpf_interface.yfilter = yfilter;
    }
    if(value_path == "is-outgoing-interface")
    {
        is_outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "is-snoop-interface")
    {
        is_snoop_interface.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-address" || name == "interface-name" || name == "uptime" || name == "expiry" || name == "is-rpf-interface" || name == "is-outgoing-interface" || name == "is-snoop-interface")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::RpfAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rpf-address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::~RpfAddress()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterfaces()
{

    yang_name = "bundle-interfaces"; yang_parent_name = "rpf-redirect"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::~BundleInterfaces()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::has_data() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::has_operation() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-interface")
    {
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface>();
        c->parent = this;
        bundle_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : bundle_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-interface")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::BundleInterface()
    :
    bundle_name{YType::str, "bundle-name"},
    interface_name{YType::str, "interface-name"},
    rpf_redirect_bundle_name{YType::str, "rpf-redirect-bundle-name"},
    rpf_redirect_interface_name{YType::str, "rpf-redirect-interface-name"},
    available_bandwidth{YType::int32, "available-bandwidth"},
    allocated_bandwidth{YType::int32, "allocated-bandwidth"},
    total_bandwidth{YType::int32, "total-bandwidth"},
    topology_bandwidth_used{YType::int32, "topology-bandwidth-used"},
    snooping_bandwidth_used{YType::int32, "snooping-bandwidth-used"},
    allocated_threshold_bandwidth{YType::int32, "allocated-threshold-bandwidth"},
    available_threshold_bandwidth{YType::int32, "available-threshold-bandwidth"}
{

    yang_name = "bundle-interface"; yang_parent_name = "bundle-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::~BundleInterface()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::has_data() const
{
    return bundle_name.is_set
	|| interface_name.is_set
	|| rpf_redirect_bundle_name.is_set
	|| rpf_redirect_interface_name.is_set
	|| available_bandwidth.is_set
	|| allocated_bandwidth.is_set
	|| total_bandwidth.is_set
	|| topology_bandwidth_used.is_set
	|| snooping_bandwidth_used.is_set
	|| allocated_threshold_bandwidth.is_set
	|| available_threshold_bandwidth.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(rpf_redirect_bundle_name.yfilter)
	|| ydk::is_set(rpf_redirect_interface_name.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(allocated_bandwidth.yfilter)
	|| ydk::is_set(total_bandwidth.yfilter)
	|| ydk::is_set(topology_bandwidth_used.yfilter)
	|| ydk::is_set(snooping_bandwidth_used.yfilter)
	|| ydk::is_set(allocated_threshold_bandwidth.yfilter)
	|| ydk::is_set(available_threshold_bandwidth.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (rpf_redirect_bundle_name.is_set || is_set(rpf_redirect_bundle_name.yfilter)) leaf_name_data.push_back(rpf_redirect_bundle_name.get_name_leafdata());
    if (rpf_redirect_interface_name.is_set || is_set(rpf_redirect_interface_name.yfilter)) leaf_name_data.push_back(rpf_redirect_interface_name.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (allocated_bandwidth.is_set || is_set(allocated_bandwidth.yfilter)) leaf_name_data.push_back(allocated_bandwidth.get_name_leafdata());
    if (total_bandwidth.is_set || is_set(total_bandwidth.yfilter)) leaf_name_data.push_back(total_bandwidth.get_name_leafdata());
    if (topology_bandwidth_used.is_set || is_set(topology_bandwidth_used.yfilter)) leaf_name_data.push_back(topology_bandwidth_used.get_name_leafdata());
    if (snooping_bandwidth_used.is_set || is_set(snooping_bandwidth_used.yfilter)) leaf_name_data.push_back(snooping_bandwidth_used.get_name_leafdata());
    if (allocated_threshold_bandwidth.is_set || is_set(allocated_threshold_bandwidth.yfilter)) leaf_name_data.push_back(allocated_threshold_bandwidth.get_name_leafdata());
    if (available_threshold_bandwidth.is_set || is_set(available_threshold_bandwidth.yfilter)) leaf_name_data.push_back(available_threshold_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
        bundle_name.value_namespace = name_space;
        bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-redirect-bundle-name")
    {
        rpf_redirect_bundle_name = value;
        rpf_redirect_bundle_name.value_namespace = name_space;
        rpf_redirect_bundle_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-redirect-interface-name")
    {
        rpf_redirect_interface_name = value;
        rpf_redirect_interface_name.value_namespace = name_space;
        rpf_redirect_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocated-bandwidth")
    {
        allocated_bandwidth = value;
        allocated_bandwidth.value_namespace = name_space;
        allocated_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-bandwidth")
    {
        total_bandwidth = value;
        total_bandwidth.value_namespace = name_space;
        total_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-bandwidth-used")
    {
        topology_bandwidth_used = value;
        topology_bandwidth_used.value_namespace = name_space;
        topology_bandwidth_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "snooping-bandwidth-used")
    {
        snooping_bandwidth_used = value;
        snooping_bandwidth_used.value_namespace = name_space;
        snooping_bandwidth_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocated-threshold-bandwidth")
    {
        allocated_threshold_bandwidth = value;
        allocated_threshold_bandwidth.value_namespace = name_space;
        allocated_threshold_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-threshold-bandwidth")
    {
        available_threshold_bandwidth = value;
        available_threshold_bandwidth.value_namespace = name_space;
        available_threshold_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-name")
    {
        bundle_name.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "rpf-redirect-bundle-name")
    {
        rpf_redirect_bundle_name.yfilter = yfilter;
    }
    if(value_path == "rpf-redirect-interface-name")
    {
        rpf_redirect_interface_name.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "allocated-bandwidth")
    {
        allocated_bandwidth.yfilter = yfilter;
    }
    if(value_path == "total-bandwidth")
    {
        total_bandwidth.yfilter = yfilter;
    }
    if(value_path == "topology-bandwidth-used")
    {
        topology_bandwidth_used.yfilter = yfilter;
    }
    if(value_path == "snooping-bandwidth-used")
    {
        snooping_bandwidth_used.yfilter = yfilter;
    }
    if(value_path == "allocated-threshold-bandwidth")
    {
        allocated_threshold_bandwidth.yfilter = yfilter;
    }
    if(value_path == "available-threshold-bandwidth")
    {
        available_threshold_bandwidth.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::RpfRedirect::BundleInterfaces::BundleInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-name" || name == "interface-name" || name == "rpf-redirect-bundle-name" || name == "rpf-redirect-interface-name" || name == "available-bandwidth" || name == "allocated-bandwidth" || name == "total-bandwidth" || name == "topology-bandwidth-used" || name == "snooping-bandwidth-used" || name == "allocated-threshold-bandwidth" || name == "available-threshold-bandwidth")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnels()
{

    yang_name = "tunnels"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::~Tunnels()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Pim::Active::Vrfs::Vrf::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::Tunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    vrf_name{YType::str, "vrf-name"}
    	,
    source_address(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress>())
	,rp_address(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress>())
	,source_address_netio(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio>())
	,group_address_netio(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio>())
{
    source_address->parent = this;
    rp_address->parent = this;
    source_address_netio->parent = this;
    group_address_netio->parent = this;

    yang_name = "tunnel"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::~Tunnel()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::has_data() const
{
    return tunnel_name.is_set
	|| vrf_name.is_set
	|| (source_address !=  nullptr && source_address->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address_netio !=  nullptr && source_address_netio->has_data())
	|| (group_address_netio !=  nullptr && group_address_netio->has_data());
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address_netio !=  nullptr && source_address_netio->has_operation())
	|| (group_address_netio !=  nullptr && group_address_netio->has_operation());
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[tunnel-name='" <<tunnel_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address-netio")
    {
        if(source_address_netio == nullptr)
        {
            source_address_netio = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio>();
        }
        return source_address_netio;
    }

    if(child_yang_name == "group-address-netio")
    {
        if(group_address_netio == nullptr)
        {
            group_address_netio = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio>();
        }
        return group_address_netio;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address_netio != nullptr)
    {
        children["source-address-netio"] = source_address_netio;
    }

    if(group_address_netio != nullptr)
    {
        children["group-address-netio"] = group_address_netio;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "rp-address" || name == "source-address-netio" || name == "group-address-netio" || name == "tunnel-name" || name == "vrf-name")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::~SourceAddress()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::~RpAddress()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::SourceAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address-netio"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::~SourceAddressNetio()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-netio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::SourceAddressNetio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::GroupAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-netio"; yang_parent_name = "tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::~GroupAddressNetio()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-netio";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::Tunnels::Tunnel::GroupAddressNetio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoutes()
{

    yang_name = "multicast-static-routes"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::~MulticastStaticRoutes()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::has_data() const
{
    for (std::size_t index=0; index<multicast_static_route.size(); index++)
    {
        if(multicast_static_route[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::has_operation() const
{
    for (std::size_t index=0; index<multicast_static_route.size(); index++)
    {
        if(multicast_static_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-static-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-static-route")
    {
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute>();
        c->parent = this;
        multicast_static_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : multicast_static_route)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-static-route")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::MulticastStaticRoute()
    :
    address{YType::str, "address"},
    prefix_length{YType::int32, "prefix-length"},
    interface_name{YType::str, "interface-name"},
    distance{YType::uint32, "distance"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"},
    is_via_lsm{YType::boolean, "is-via-lsm"}
    	,
    prefix(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix>())
	,nexthop(std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop>())
{
    prefix->parent = this;
    nexthop->parent = this;

    yang_name = "multicast-static-route"; yang_parent_name = "multicast-static-routes"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::~MulticastStaticRoute()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::has_data() const
{
    return address.is_set
	|| prefix_length.is_set
	|| interface_name.is_set
	|| distance.is_set
	|| prefix_length_xr.is_set
	|| is_via_lsm.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (nexthop !=  nullptr && nexthop->has_data());
}

bool Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| ydk::is_set(is_via_lsm.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (nexthop !=  nullptr && nexthop->has_operation());
}

std::string Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-static-route";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.yfilter)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop>();
        }
        return nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(nexthop != nullptr)
    {
        children["nexthop"] = nexthop;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
        is_via_lsm.value_namespace = name_space;
        is_via_lsm.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "nexthop" || name == "address" || name == "prefix-length" || name == "interface-name" || name == "distance" || name == "prefix-length-xr" || name == "is-via-lsm")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "prefix"; yang_parent_name = "multicast-static-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::~Prefix()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::Nexthop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "nexthop"; yang_parent_name = "multicast-static-route"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::~Nexthop()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbors()
{

    yang_name = "neighbors"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Neighbors::~Neighbors()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Ipv6Pim::Active::Vrfs::Vrf::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::Neighbor()
    :
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    interface_name_xr{YType::str, "interface-name-xr"},
    uptime{YType::uint64, "uptime"},
    expires{YType::uint64, "expires"},
    expiry_timer{YType::uint64, "expiry-timer"},
    is_this_neighbor_us{YType::boolean, "is-this-neighbor-us"},
    is_this_neighbor_dr{YType::boolean, "is-this-neighbor-dr"},
    is_dr_priority_capable{YType::boolean, "is-dr-priority-capable"},
    dr_priority{YType::uint32, "dr-priority"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_ecmp_redirect_capable{YType::boolean, "is-ecmp-redirect-capable"},
    is_bfd_state{YType::boolean, "is-bfd-state"},
    propagation_delay{YType::uint16, "propagation-delay"},
    override_interval{YType::uint16, "override-interval"}
{

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::~Neighbor()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::has_data() const
{
    for (std::size_t index=0; index<neighbor_address_xr.size(); index++)
    {
        if(neighbor_address_xr[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbor_address.is_set
	|| interface_name_xr.is_set
	|| uptime.is_set
	|| expires.is_set
	|| expiry_timer.is_set
	|| is_this_neighbor_us.is_set
	|| is_this_neighbor_dr.is_set
	|| is_dr_priority_capable.is_set
	|| dr_priority.is_set
	|| is_bidirectional_capable.is_set
	|| is_proxy_capable.is_set
	|| is_batch_asserts_capable.is_set
	|| is_ecmp_redirect_capable.is_set
	|| is_bfd_state.is_set
	|| propagation_delay.is_set
	|| override_interval.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor_address_xr.size(); index++)
    {
        if(neighbor_address_xr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| ydk::is_set(expires.yfilter)
	|| ydk::is_set(expiry_timer.yfilter)
	|| ydk::is_set(is_this_neighbor_us.yfilter)
	|| ydk::is_set(is_this_neighbor_dr.yfilter)
	|| ydk::is_set(is_dr_priority_capable.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(is_bidirectional_capable.yfilter)
	|| ydk::is_set(is_proxy_capable.yfilter)
	|| ydk::is_set(is_batch_asserts_capable.yfilter)
	|| ydk::is_set(is_ecmp_redirect_capable.yfilter)
	|| ydk::is_set(is_bfd_state.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| ydk::is_set(override_interval.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());
    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (expiry_timer.is_set || is_set(expiry_timer.yfilter)) leaf_name_data.push_back(expiry_timer.get_name_leafdata());
    if (is_this_neighbor_us.is_set || is_set(is_this_neighbor_us.yfilter)) leaf_name_data.push_back(is_this_neighbor_us.get_name_leafdata());
    if (is_this_neighbor_dr.is_set || is_set(is_this_neighbor_dr.yfilter)) leaf_name_data.push_back(is_this_neighbor_dr.get_name_leafdata());
    if (is_dr_priority_capable.is_set || is_set(is_dr_priority_capable.yfilter)) leaf_name_data.push_back(is_dr_priority_capable.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.yfilter)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.yfilter)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.yfilter)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_ecmp_redirect_capable.is_set || is_set(is_ecmp_redirect_capable.yfilter)) leaf_name_data.push_back(is_ecmp_redirect_capable.get_name_leafdata());
    if (is_bfd_state.is_set || is_set(is_bfd_state.yfilter)) leaf_name_data.push_back(is_bfd_state.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address-xr")
    {
        auto c = std::make_shared<Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr>();
        c->parent = this;
        neighbor_address_xr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : neighbor_address_xr)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expires")
    {
        expires = value;
        expires.value_namespace = name_space;
        expires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiry-timer")
    {
        expiry_timer = value;
        expiry_timer.value_namespace = name_space;
        expiry_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-this-neighbor-us")
    {
        is_this_neighbor_us = value;
        is_this_neighbor_us.value_namespace = name_space;
        is_this_neighbor_us.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-this-neighbor-dr")
    {
        is_this_neighbor_dr = value;
        is_this_neighbor_dr.value_namespace = name_space;
        is_this_neighbor_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dr-priority-capable")
    {
        is_dr_priority_capable = value;
        is_dr_priority_capable.value_namespace = name_space;
        is_dr_priority_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
        is_bidirectional_capable.value_namespace = name_space;
        is_bidirectional_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
        is_proxy_capable.value_namespace = name_space;
        is_proxy_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
        is_batch_asserts_capable.value_namespace = name_space;
        is_batch_asserts_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ecmp-redirect-capable")
    {
        is_ecmp_redirect_capable = value;
        is_ecmp_redirect_capable.value_namespace = name_space;
        is_ecmp_redirect_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-state")
    {
        is_bfd_state = value;
        is_bfd_state.value_namespace = name_space;
        is_bfd_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
    if(value_path == "expiry-timer")
    {
        expiry_timer.yfilter = yfilter;
    }
    if(value_path == "is-this-neighbor-us")
    {
        is_this_neighbor_us.yfilter = yfilter;
    }
    if(value_path == "is-this-neighbor-dr")
    {
        is_this_neighbor_dr.yfilter = yfilter;
    }
    if(value_path == "is-dr-priority-capable")
    {
        is_dr_priority_capable.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable.yfilter = yfilter;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable.yfilter = yfilter;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable.yfilter = yfilter;
    }
    if(value_path == "is-ecmp-redirect-capable")
    {
        is_ecmp_redirect_capable.yfilter = yfilter;
    }
    if(value_path == "is-bfd-state")
    {
        is_bfd_state.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address-xr" || name == "interface-name" || name == "neighbor-address" || name == "interface-name-xr" || name == "uptime" || name == "expires" || name == "expiry-timer" || name == "is-this-neighbor-us" || name == "is-this-neighbor-dr" || name == "is-dr-priority-capable" || name == "dr-priority" || name == "is-bidirectional-capable" || name == "is-proxy-capable" || name == "is-batch-asserts-capable" || name == "is-ecmp-redirect-capable" || name == "is-bfd-state" || name == "propagation-delay" || name == "override-interval")
        return true;
    return false;
}

Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::NeighborAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "neighbor-address-xr"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true;
}

Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::~NeighborAddressXr()
{
}

bool Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Ipv6Pim::Active::Vrfs::Vrf::Neighbors::Neighbor::NeighborAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim6Ma::Pim6Ma()
    :
    active(std::make_shared<Pim6Ma::Active>())
	,standby(std::make_shared<Pim6Ma::Standby>())
{
    active->parent = this;
    standby->parent = this;

    yang_name = "pim6-ma"; yang_parent_name = "Cisco-IOS-XR-ipv4-pim-oper"; is_top_level_class = true; has_list_ancestor = false;
}

Pim6Ma::~Pim6Ma()
{
}

bool Pim6Ma::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (standby !=  nullptr && standby->has_data());
}

bool Pim6Ma::has_operation() const
{
    return is_set(yfilter)
	|| (active !=  nullptr && active->has_operation())
	|| (standby !=  nullptr && standby->has_operation());
}

std::string Pim6Ma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<Pim6Ma::Active>();
        }
        return active;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Pim6Ma::Standby>();
        }
        return standby;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(active != nullptr)
    {
        children["active"] = active;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    return children;
}

void Pim6Ma::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim6Ma::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Pim6Ma::clone_ptr() const
{
    return std::make_shared<Pim6Ma>();
}

std::string Pim6Ma::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Pim6Ma::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Pim6Ma::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Pim6Ma::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Pim6Ma::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active" || name == "standby")
        return true;
    return false;
}

Pim6Ma::Active::Active()
    :
    interface_table(std::make_shared<Pim6Ma::Active::InterfaceTable>())
	,pim_ma_summary(std::make_shared<Pim6Ma::Active::PimMaSummary>())
{
    interface_table->parent = this;
    pim_ma_summary->parent = this;

    yang_name = "active"; yang_parent_name = "pim6-ma"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Active::~Active()
{
}

bool Pim6Ma::Active::has_data() const
{
    return (interface_table !=  nullptr && interface_table->has_data())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_data());
}

bool Pim6Ma::Active::has_operation() const
{
    return is_set(yfilter)
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_operation());
}

std::string Pim6Ma::Active::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Active::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-table")
    {
        if(interface_table == nullptr)
        {
            interface_table = std::make_shared<Pim6Ma::Active::InterfaceTable>();
        }
        return interface_table;
    }

    if(child_yang_name == "pim-ma-summary")
    {
        if(pim_ma_summary == nullptr)
        {
            pim_ma_summary = std::make_shared<Pim6Ma::Active::PimMaSummary>();
        }
        return pim_ma_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_table != nullptr)
    {
        children["interface-table"] = interface_table;
    }

    if(pim_ma_summary != nullptr)
    {
        children["pim-ma-summary"] = pim_ma_summary;
    }

    return children;
}

void Pim6Ma::Active::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim6Ma::Active::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim6Ma::Active::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-table" || name == "pim-ma-summary")
        return true;
    return false;
}

Pim6Ma::Active::InterfaceTable::InterfaceTable()
    :
    interface_by_handles(std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByHandles>())
	,interface_by_names(std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByNames>())
{
    interface_by_handles->parent = this;
    interface_by_names->parent = this;

    yang_name = "interface-table"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Active::InterfaceTable::~InterfaceTable()
{
}

bool Pim6Ma::Active::InterfaceTable::has_data() const
{
    return (interface_by_handles !=  nullptr && interface_by_handles->has_data())
	|| (interface_by_names !=  nullptr && interface_by_names->has_data());
}

bool Pim6Ma::Active::InterfaceTable::has_operation() const
{
    return is_set(yfilter)
	|| (interface_by_handles !=  nullptr && interface_by_handles->has_operation())
	|| (interface_by_names !=  nullptr && interface_by_names->has_operation());
}

std::string Pim6Ma::Active::InterfaceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/active/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Active::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Active::InterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-handles")
    {
        if(interface_by_handles == nullptr)
        {
            interface_by_handles = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByHandles>();
        }
        return interface_by_handles;
    }

    if(child_yang_name == "interface-by-names")
    {
        if(interface_by_names == nullptr)
        {
            interface_by_names = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByNames>();
        }
        return interface_by_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_by_handles != nullptr)
    {
        children["interface-by-handles"] = interface_by_handles;
    }

    if(interface_by_names != nullptr)
    {
        children["interface-by-names"] = interface_by_names;
    }

    return children;
}

void Pim6Ma::Active::InterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim6Ma::Active::InterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim6Ma::Active::InterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-handles" || name == "interface-by-names")
        return true;
    return false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandles()
{

    yang_name = "interface-by-handles"; yang_parent_name = "interface-table"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::~InterfaceByHandles()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::has_data() const
{
    for (std::size_t index=0; index<interface_by_handle.size(); index++)
    {
        if(interface_by_handle[index]->has_data())
            return true;
    }
    return false;
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::has_operation() const
{
    for (std::size_t index=0; index<interface_by_handle.size(); index++)
    {
        if(interface_by_handle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByHandles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/active/interface-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByHandles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Active::InterfaceTable::InterfaceByHandles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-handle")
    {
        auto c = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle>();
        c->parent = this;
        interface_by_handle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_by_handle)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByHandles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim6Ma::Active::InterfaceTable::InterfaceByHandles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-handle")
        return true;
    return false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::InterfaceByHandle()
    :
    interface_handle{YType::int32, "interface-handle"},
    interface_name_xr{YType::str, "interface-name-xr"},
    vrf_name{YType::str, "vrf-name"},
    interface_type{YType::enumeration, "interface-type"}
    	,
    rp_address(std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>())
	,source_address(std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>())
{
    rp_address->parent = this;
    source_address->parent = this;

    yang_name = "interface-by-handle"; yang_parent_name = "interface-by-handles"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::~InterfaceByHandle()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_data() const
{
    return interface_handle.is_set
	|| interface_name_xr.is_set
	|| vrf_name.is_set
	|| interface_type.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/active/interface-table/interface-by-handles/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handle" <<"[interface-handle='" <<interface_handle <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "source-address" || name == "interface-handle" || name == "interface-name-xr" || name == "vrf-name" || name == "interface-type")
        return true;
    return false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "interface-by-handle"; is_top_level_class = false; has_list_ancestor = true;
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::~RpAddress()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "interface-by-handle"; is_top_level_class = false; has_list_ancestor = true;
}

Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::~SourceAddress()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByNames()
{

    yang_name = "interface-by-names"; yang_parent_name = "interface-table"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByNames::~InterfaceByNames()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::has_data() const
{
    for (std::size_t index=0; index<interface_by_name.size(); index++)
    {
        if(interface_by_name[index]->has_data())
            return true;
    }
    return false;
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::has_operation() const
{
    for (std::size_t index=0; index<interface_by_name.size(); index++)
    {
        if(interface_by_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/active/interface-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Active::InterfaceTable::InterfaceByNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-name")
    {
        auto c = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName>();
        c->parent = this;
        interface_by_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_by_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim6Ma::Active::InterfaceTable::InterfaceByNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-name")
        return true;
    return false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::InterfaceByName()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    vrf_name{YType::str, "vrf-name"},
    interface_type{YType::enumeration, "interface-type"}
    	,
    rp_address(std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>())
	,source_address(std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>())
{
    rp_address->parent = this;
    source_address->parent = this;

    yang_name = "interface-by-name"; yang_parent_name = "interface-by-names"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::~InterfaceByName()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| vrf_name.is_set
	|| interface_type.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/active/interface-table/interface-by-names/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-name" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "source-address" || name == "interface-name" || name == "interface-name-xr" || name == "vrf-name" || name == "interface-type")
        return true;
    return false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "interface-by-name"; is_top_level_class = false; has_list_ancestor = true;
}

Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::~RpAddress()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "interface-by-name"; is_top_level_class = false; has_list_ancestor = true;
}

Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::~SourceAddress()
{
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim6Ma::Active::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim6Ma::Active::PimMaSummary::PimMaSummary()
    :
    is_im_connection_open{YType::boolean, "is-im-connection-open"},
    is_netio_connection_open{YType::boolean, "is-netio-connection-open"},
    is_edm_connection_open{YType::boolean, "is-edm-connection-open"},
    is_standby_edm_connection_open{YType::boolean, "is-standby-edm-connection-open"},
    encap_interface_count{YType::uint32, "encap-interface-count"},
    decap_interface_count{YType::uint32, "decap-interface-count"},
    mdt_interface_count{YType::uint32, "mdt-interface-count"}
{

    yang_name = "pim-ma-summary"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Active::PimMaSummary::~PimMaSummary()
{
}

bool Pim6Ma::Active::PimMaSummary::has_data() const
{
    return is_im_connection_open.is_set
	|| is_netio_connection_open.is_set
	|| is_edm_connection_open.is_set
	|| is_standby_edm_connection_open.is_set
	|| encap_interface_count.is_set
	|| decap_interface_count.is_set
	|| mdt_interface_count.is_set;
}

bool Pim6Ma::Active::PimMaSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_im_connection_open.yfilter)
	|| ydk::is_set(is_netio_connection_open.yfilter)
	|| ydk::is_set(is_edm_connection_open.yfilter)
	|| ydk::is_set(is_standby_edm_connection_open.yfilter)
	|| ydk::is_set(encap_interface_count.yfilter)
	|| ydk::is_set(decap_interface_count.yfilter)
	|| ydk::is_set(mdt_interface_count.yfilter);
}

std::string Pim6Ma::Active::PimMaSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/active/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Active::PimMaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-ma-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Active::PimMaSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_im_connection_open.is_set || is_set(is_im_connection_open.yfilter)) leaf_name_data.push_back(is_im_connection_open.get_name_leafdata());
    if (is_netio_connection_open.is_set || is_set(is_netio_connection_open.yfilter)) leaf_name_data.push_back(is_netio_connection_open.get_name_leafdata());
    if (is_edm_connection_open.is_set || is_set(is_edm_connection_open.yfilter)) leaf_name_data.push_back(is_edm_connection_open.get_name_leafdata());
    if (is_standby_edm_connection_open.is_set || is_set(is_standby_edm_connection_open.yfilter)) leaf_name_data.push_back(is_standby_edm_connection_open.get_name_leafdata());
    if (encap_interface_count.is_set || is_set(encap_interface_count.yfilter)) leaf_name_data.push_back(encap_interface_count.get_name_leafdata());
    if (decap_interface_count.is_set || is_set(decap_interface_count.yfilter)) leaf_name_data.push_back(decap_interface_count.get_name_leafdata());
    if (mdt_interface_count.is_set || is_set(mdt_interface_count.yfilter)) leaf_name_data.push_back(mdt_interface_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Active::PimMaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Active::PimMaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim6Ma::Active::PimMaSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-im-connection-open")
    {
        is_im_connection_open = value;
        is_im_connection_open.value_namespace = name_space;
        is_im_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-netio-connection-open")
    {
        is_netio_connection_open = value;
        is_netio_connection_open.value_namespace = name_space;
        is_netio_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-edm-connection-open")
    {
        is_edm_connection_open = value;
        is_edm_connection_open.value_namespace = name_space;
        is_edm_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-standby-edm-connection-open")
    {
        is_standby_edm_connection_open = value;
        is_standby_edm_connection_open.value_namespace = name_space;
        is_standby_edm_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap-interface-count")
    {
        encap_interface_count = value;
        encap_interface_count.value_namespace = name_space;
        encap_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decap-interface-count")
    {
        decap_interface_count = value;
        decap_interface_count.value_namespace = name_space;
        decap_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-interface-count")
    {
        mdt_interface_count = value;
        mdt_interface_count.value_namespace = name_space;
        mdt_interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Active::PimMaSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-im-connection-open")
    {
        is_im_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-netio-connection-open")
    {
        is_netio_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-edm-connection-open")
    {
        is_edm_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-standby-edm-connection-open")
    {
        is_standby_edm_connection_open.yfilter = yfilter;
    }
    if(value_path == "encap-interface-count")
    {
        encap_interface_count.yfilter = yfilter;
    }
    if(value_path == "decap-interface-count")
    {
        decap_interface_count.yfilter = yfilter;
    }
    if(value_path == "mdt-interface-count")
    {
        mdt_interface_count.yfilter = yfilter;
    }
}

bool Pim6Ma::Active::PimMaSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-im-connection-open" || name == "is-netio-connection-open" || name == "is-edm-connection-open" || name == "is-standby-edm-connection-open" || name == "encap-interface-count" || name == "decap-interface-count" || name == "mdt-interface-count")
        return true;
    return false;
}

Pim6Ma::Standby::Standby()
    :
    interface_table(std::make_shared<Pim6Ma::Standby::InterfaceTable>())
	,pim_ma_summary(std::make_shared<Pim6Ma::Standby::PimMaSummary>())
{
    interface_table->parent = this;
    pim_ma_summary->parent = this;

    yang_name = "standby"; yang_parent_name = "pim6-ma"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Standby::~Standby()
{
}

bool Pim6Ma::Standby::has_data() const
{
    return (interface_table !=  nullptr && interface_table->has_data())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_data());
}

bool Pim6Ma::Standby::has_operation() const
{
    return is_set(yfilter)
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (pim_ma_summary !=  nullptr && pim_ma_summary->has_operation());
}

std::string Pim6Ma::Standby::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-table")
    {
        if(interface_table == nullptr)
        {
            interface_table = std::make_shared<Pim6Ma::Standby::InterfaceTable>();
        }
        return interface_table;
    }

    if(child_yang_name == "pim-ma-summary")
    {
        if(pim_ma_summary == nullptr)
        {
            pim_ma_summary = std::make_shared<Pim6Ma::Standby::PimMaSummary>();
        }
        return pim_ma_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_table != nullptr)
    {
        children["interface-table"] = interface_table;
    }

    if(pim_ma_summary != nullptr)
    {
        children["pim-ma-summary"] = pim_ma_summary;
    }

    return children;
}

void Pim6Ma::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim6Ma::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim6Ma::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-table" || name == "pim-ma-summary")
        return true;
    return false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceTable()
    :
    interface_by_handles(std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByHandles>())
	,interface_by_names(std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByNames>())
{
    interface_by_handles->parent = this;
    interface_by_names->parent = this;

    yang_name = "interface-table"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Standby::InterfaceTable::~InterfaceTable()
{
}

bool Pim6Ma::Standby::InterfaceTable::has_data() const
{
    return (interface_by_handles !=  nullptr && interface_by_handles->has_data())
	|| (interface_by_names !=  nullptr && interface_by_names->has_data());
}

bool Pim6Ma::Standby::InterfaceTable::has_operation() const
{
    return is_set(yfilter)
	|| (interface_by_handles !=  nullptr && interface_by_handles->has_operation())
	|| (interface_by_names !=  nullptr && interface_by_names->has_operation());
}

std::string Pim6Ma::Standby::InterfaceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Standby::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Standby::InterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-handles")
    {
        if(interface_by_handles == nullptr)
        {
            interface_by_handles = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByHandles>();
        }
        return interface_by_handles;
    }

    if(child_yang_name == "interface-by-names")
    {
        if(interface_by_names == nullptr)
        {
            interface_by_names = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByNames>();
        }
        return interface_by_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(interface_by_handles != nullptr)
    {
        children["interface-by-handles"] = interface_by_handles;
    }

    if(interface_by_names != nullptr)
    {
        children["interface-by-names"] = interface_by_names;
    }

    return children;
}

void Pim6Ma::Standby::InterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim6Ma::Standby::InterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim6Ma::Standby::InterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-handles" || name == "interface-by-names")
        return true;
    return false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandles()
{

    yang_name = "interface-by-handles"; yang_parent_name = "interface-table"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::~InterfaceByHandles()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::has_data() const
{
    for (std::size_t index=0; index<interface_by_handle.size(); index++)
    {
        if(interface_by_handle[index]->has_data())
            return true;
    }
    return false;
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::has_operation() const
{
    for (std::size_t index=0; index<interface_by_handle.size(); index++)
    {
        if(interface_by_handle[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/standby/interface-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-handle")
    {
        auto c = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle>();
        c->parent = this;
        interface_by_handle.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_by_handle)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-handle")
        return true;
    return false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::InterfaceByHandle()
    :
    interface_handle{YType::int32, "interface-handle"},
    interface_name_xr{YType::str, "interface-name-xr"},
    vrf_name{YType::str, "vrf-name"},
    interface_type{YType::enumeration, "interface-type"}
    	,
    rp_address(std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>())
	,source_address(std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>())
{
    rp_address->parent = this;
    source_address->parent = this;

    yang_name = "interface-by-handle"; yang_parent_name = "interface-by-handles"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::~InterfaceByHandle()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_data() const
{
    return interface_handle.is_set
	|| interface_name_xr.is_set
	|| vrf_name.is_set
	|| interface_type.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_handle.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/standby/interface-table/interface-by-handles/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-handle" <<"[interface-handle='" <<interface_handle <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "source-address" || name == "interface-handle" || name == "interface-name-xr" || name == "vrf-name" || name == "interface-type")
        return true;
    return false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "interface-by-handle"; is_top_level_class = false; has_list_ancestor = true;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::~RpAddress()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "interface-by-handle"; is_top_level_class = false; has_list_ancestor = true;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::~SourceAddress()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByHandles::InterfaceByHandle::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByNames()
{

    yang_name = "interface-by-names"; yang_parent_name = "interface-table"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::~InterfaceByNames()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::has_data() const
{
    for (std::size_t index=0; index<interface_by_name.size(); index++)
    {
        if(interface_by_name[index]->has_data())
            return true;
    }
    return false;
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::has_operation() const
{
    for (std::size_t index=0; index<interface_by_name.size(); index++)
    {
        if(interface_by_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByNames::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/standby/interface-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Standby::InterfaceTable::InterfaceByNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-by-name")
    {
        auto c = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName>();
        c->parent = this;
        interface_by_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : interface_by_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-by-name")
        return true;
    return false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::InterfaceByName()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    vrf_name{YType::str, "vrf-name"},
    interface_type{YType::enumeration, "interface-type"}
    	,
    rp_address(std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>())
	,source_address(std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>())
{
    rp_address->parent = this;
    source_address->parent = this;

    yang_name = "interface-by-name"; yang_parent_name = "interface-by-names"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::~InterfaceByName()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| vrf_name.is_set
	|| interface_type.is_set
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/standby/interface-table/interface-by-names/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-by-name" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-address" || name == "source-address" || name == "interface-name" || name == "interface-name-xr" || name == "vrf-name" || name == "interface-type")
        return true;
    return false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "rp-address"; yang_parent_name = "interface-by-name"; is_top_level_class = false; has_list_ancestor = true;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::~RpAddress()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "interface-by-name"; is_top_level_class = false; has_list_ancestor = true;
}

Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::~SourceAddress()
{
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Pim6Ma::Standby::InterfaceTable::InterfaceByNames::InterfaceByName::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim6Ma::Standby::PimMaSummary::PimMaSummary()
    :
    is_im_connection_open{YType::boolean, "is-im-connection-open"},
    is_netio_connection_open{YType::boolean, "is-netio-connection-open"},
    is_edm_connection_open{YType::boolean, "is-edm-connection-open"},
    is_standby_edm_connection_open{YType::boolean, "is-standby-edm-connection-open"},
    encap_interface_count{YType::uint32, "encap-interface-count"},
    decap_interface_count{YType::uint32, "decap-interface-count"},
    mdt_interface_count{YType::uint32, "mdt-interface-count"}
{

    yang_name = "pim-ma-summary"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

Pim6Ma::Standby::PimMaSummary::~PimMaSummary()
{
}

bool Pim6Ma::Standby::PimMaSummary::has_data() const
{
    return is_im_connection_open.is_set
	|| is_netio_connection_open.is_set
	|| is_edm_connection_open.is_set
	|| is_standby_edm_connection_open.is_set
	|| encap_interface_count.is_set
	|| decap_interface_count.is_set
	|| mdt_interface_count.is_set;
}

bool Pim6Ma::Standby::PimMaSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_im_connection_open.yfilter)
	|| ydk::is_set(is_netio_connection_open.yfilter)
	|| ydk::is_set(is_edm_connection_open.yfilter)
	|| ydk::is_set(is_standby_edm_connection_open.yfilter)
	|| ydk::is_set(encap_interface_count.yfilter)
	|| ydk::is_set(decap_interface_count.yfilter)
	|| ydk::is_set(mdt_interface_count.yfilter);
}

std::string Pim6Ma::Standby::PimMaSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim6-ma/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Pim6Ma::Standby::PimMaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-ma-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pim6Ma::Standby::PimMaSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_im_connection_open.is_set || is_set(is_im_connection_open.yfilter)) leaf_name_data.push_back(is_im_connection_open.get_name_leafdata());
    if (is_netio_connection_open.is_set || is_set(is_netio_connection_open.yfilter)) leaf_name_data.push_back(is_netio_connection_open.get_name_leafdata());
    if (is_edm_connection_open.is_set || is_set(is_edm_connection_open.yfilter)) leaf_name_data.push_back(is_edm_connection_open.get_name_leafdata());
    if (is_standby_edm_connection_open.is_set || is_set(is_standby_edm_connection_open.yfilter)) leaf_name_data.push_back(is_standby_edm_connection_open.get_name_leafdata());
    if (encap_interface_count.is_set || is_set(encap_interface_count.yfilter)) leaf_name_data.push_back(encap_interface_count.get_name_leafdata());
    if (decap_interface_count.is_set || is_set(decap_interface_count.yfilter)) leaf_name_data.push_back(decap_interface_count.get_name_leafdata());
    if (mdt_interface_count.is_set || is_set(mdt_interface_count.yfilter)) leaf_name_data.push_back(mdt_interface_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Pim6Ma::Standby::PimMaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim6Ma::Standby::PimMaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Pim6Ma::Standby::PimMaSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-im-connection-open")
    {
        is_im_connection_open = value;
        is_im_connection_open.value_namespace = name_space;
        is_im_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-netio-connection-open")
    {
        is_netio_connection_open = value;
        is_netio_connection_open.value_namespace = name_space;
        is_netio_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-edm-connection-open")
    {
        is_edm_connection_open = value;
        is_edm_connection_open.value_namespace = name_space;
        is_edm_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-standby-edm-connection-open")
    {
        is_standby_edm_connection_open = value;
        is_standby_edm_connection_open.value_namespace = name_space;
        is_standby_edm_connection_open.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap-interface-count")
    {
        encap_interface_count = value;
        encap_interface_count.value_namespace = name_space;
        encap_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "decap-interface-count")
    {
        decap_interface_count = value;
        decap_interface_count.value_namespace = name_space;
        decap_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-interface-count")
    {
        mdt_interface_count = value;
        mdt_interface_count.value_namespace = name_space;
        mdt_interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pim6Ma::Standby::PimMaSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-im-connection-open")
    {
        is_im_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-netio-connection-open")
    {
        is_netio_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-edm-connection-open")
    {
        is_edm_connection_open.yfilter = yfilter;
    }
    if(value_path == "is-standby-edm-connection-open")
    {
        is_standby_edm_connection_open.yfilter = yfilter;
    }
    if(value_path == "encap-interface-count")
    {
        encap_interface_count.yfilter = yfilter;
    }
    if(value_path == "decap-interface-count")
    {
        decap_interface_count.yfilter = yfilter;
    }
    if(value_path == "mdt-interface-count")
    {
        mdt_interface_count.yfilter = yfilter;
    }
}

bool Pim6Ma::Standby::PimMaSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-im-connection-open" || name == "is-netio-connection-open" || name == "is-edm-connection-open" || name == "is-standby-edm-connection-open" || name == "encap-interface-count" || name == "decap-interface-count" || name == "mdt-interface-count")
        return true;
    return false;
}


}
}

