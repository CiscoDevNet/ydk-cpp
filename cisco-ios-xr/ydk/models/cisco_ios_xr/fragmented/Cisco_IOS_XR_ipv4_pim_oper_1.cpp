
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_1.hpp"
#include "Cisco_IOS_XR_ipv4_pim_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_pim_oper {

Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapRpf()
    :
    are_we_rp{YType::boolean, "are-we-rp"},
    client{YType::enumeration, "client"},
    prefix{YType::str, "prefix"},
    prefix_length{YType::int32, "prefix-length"},
    protocol{YType::enumeration, "protocol"},
    rp_address{YType::str, "rp-address"},
    rp_priority{YType::int32, "rp-priority"},
    rpf_interface_name{YType::str, "rpf-interface-name"},
    rpf_vrf_name{YType::str, "rpf-vrf-name"}
    	,
    group_map_information(std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation>())
	,rpf_neighbor(std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor>())
{
    group_map_information->parent = this;

    rpf_neighbor->parent = this;

    yang_name = "group-map-rpf"; yang_parent_name = "group-map-rpfs";
}

Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::~GroupMapRpf()
{
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::has_data() const
{
    return are_we_rp.is_set
	|| client.is_set
	|| prefix.is_set
	|| prefix_length.is_set
	|| protocol.is_set
	|| rp_address.is_set
	|| rp_priority.is_set
	|| rpf_interface_name.is_set
	|| rpf_vrf_name.is_set
	|| (group_map_information !=  nullptr && group_map_information->has_data())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data());
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(are_we_rp.yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(rp_priority.yfilter)
	|| ydk::is_set(rpf_interface_name.yfilter)
	|| ydk::is_set(rpf_vrf_name.yfilter)
	|| (group_map_information !=  nullptr && group_map_information->has_operation())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation());
}

std::string Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-rpf";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/group-map-rpfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (are_we_rp.is_set || is_set(are_we_rp.yfilter)) leaf_name_data.push_back(are_we_rp.get_name_leafdata());
    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (rp_priority.is_set || is_set(rp_priority.yfilter)) leaf_name_data.push_back(rp_priority.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.yfilter)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (rpf_vrf_name.is_set || is_set(rpf_vrf_name.yfilter)) leaf_name_data.push_back(rpf_vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-map-information")
    {
        if(group_map_information == nullptr)
        {
            group_map_information = std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation>();
        }
        return group_map_information;
    }

    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor == nullptr)
        {
            rpf_neighbor = std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor>();
        }
        return rpf_neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_map_information != nullptr)
    {
        children["group-map-information"] = group_map_information;
    }

    if(rpf_neighbor != nullptr)
    {
        children["rpf-neighbor"] = rpf_neighbor;
    }

    return children;
}

void Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "are-we-rp")
    {
        are_we_rp = value;
        are_we_rp.value_namespace = name_space;
        are_we_rp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
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

void Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "are-we-rp")
    {
        are_we_rp.yfilter = yfilter;
    }
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
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
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name.yfilter = yfilter;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-map-information" || name == "rpf-neighbor" || name == "are-we-rp" || name == "client" || name == "prefix" || name == "prefix-length" || name == "protocol" || name == "rp-address" || name == "rp-priority" || name == "rpf-interface-name" || name == "rpf-vrf-name")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-neighbor"; yang_parent_name = "group-map-rpf";
}

Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/group-map-rpfs/group-map-rpf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::RpfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::GroupMapInformation()
    :
    client{YType::enumeration, "client"},
    group_count{YType::uint32, "group-count"},
    is_override{YType::boolean, "is-override"},
    is_used{YType::boolean, "is-used"},
    mrib_active{YType::boolean, "mrib-active"},
    prefix_length{YType::int32, "prefix-length"},
    priority{YType::uint32, "priority"},
    protocol{YType::enumeration, "protocol"}
    	,
    prefix(std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix>())
	,rp_address(std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress>())
{
    prefix->parent = this;

    rp_address->parent = this;

    yang_name = "group-map-information"; yang_parent_name = "group-map-rpf";
}

Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::~GroupMapInformation()
{
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::has_data() const
{
    return client.is_set
	|| group_count.is_set
	|| is_override.is_set
	|| is_used.is_set
	|| mrib_active.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| protocol.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data());
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(is_override.yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(mrib_active.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation());
}

std::string Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-information";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/group-map-rpfs/group-map-rpf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (is_override.is_set || is_set(is_override.yfilter)) leaf_name_data.push_back(is_override.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (mrib_active.is_set || is_set(mrib_active.yfilter)) leaf_name_data.push_back(mrib_active.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress>();
        }
        return rp_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-override")
    {
        is_override = value;
        is_override.value_namespace = name_space;
        is_override.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "is-override")
    {
        is_override.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "mrib-active")
    {
        mrib_active.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "rp-address" || name == "client" || name == "group-count" || name == "is-override" || name == "is-used" || name == "mrib-active" || name == "prefix-length" || name == "priority" || name == "protocol")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "group-map-information";
}

Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::~Prefix()
{
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/group-map-rpfs/group-map-rpf/group-map-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "group-map-information";
}

Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::~RpAddress()
{
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/group-map-rpfs/group-map-rpf/group-map-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::GroupMapRpfs::GroupMapRpf::GroupMapInformation::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Summary::Summary()
    :
    bsr_candidate_rp_set_count{YType::uint32, "bsr-candidate-rp-set-count"},
    bsr_candidate_rp_set_limit{YType::uint32, "bsr-candidate-rp-set-limit"},
    bsr_candidate_rp_set_threshold{YType::uint32, "bsr-candidate-rp-set-threshold"},
    bsr_range_threshold{YType::uint32, "bsr-range-threshold"},
    bsr_ranges_count{YType::uint32, "bsr-ranges-count"},
    bsr_ranges_limit{YType::uint32, "bsr-ranges-limit"},
    global_auto_rp_ranges_limit{YType::uint32, "global-auto-rp-ranges-limit"},
    global_bsr_candidate_rp_set_count{YType::uint32, "global-bsr-candidate-rp-set-count"},
    global_bsr_candidate_rp_set_limit{YType::uint32, "global-bsr-candidate-rp-set-limit"},
    global_bsr_candidate_rp_set_threshold{YType::uint32, "global-bsr-candidate-rp-set-threshold"},
    global_bsr_ranges_count{YType::uint32, "global-bsr-ranges-count"},
    global_bsr_ranges_limit{YType::uint32, "global-bsr-ranges-limit"},
    global_bsr_ranges_threshold{YType::uint32, "global-bsr-ranges-threshold"},
    global_register_limit{YType::uint32, "global-register-limit"},
    is_bsr_ranges_threshold_reached{YType::boolean, "is-bsr-ranges-threshold-reached"},
    is_global_auto_rp_ranges_limit_reached{YType::boolean, "is-global-auto-rp-ranges-limit-reached"},
    is_global_bsr_ranges_limit_reached{YType::boolean, "is-global-bsr-ranges-limit-reached"},
    is_global_register_limit_reached{YType::boolean, "is-global-register-limit-reached"},
    is_global_route_limit_reached{YType::boolean, "is-global-route-limit-reached"},
    is_global_rxi_limit_reached{YType::boolean, "is-global-rxi-limit-reached"},
    is_maximum_enforcement_disabled{YType::boolean, "is-maximum-enforcement-disabled"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    is_ranges_limit_reached{YType::boolean, "is-ranges-limit-reached"},
    is_route_limit_reached{YType::boolean, "is-route-limit-reached"},
    ranges_count{YType::uint32, "ranges-count"},
    ranges_limit{YType::uint32, "ranges-limit"},
    ranges_threshold{YType::uint32, "ranges-threshold"},
    register_count{YType::uint32, "register-count"},
    register_limit{YType::uint32, "register-limit"},
    register_limit_reached{YType::boolean, "register-limit-reached"},
    register_threshold{YType::uint32, "register-threshold"},
    route_count{YType::uint32, "route-count"},
    route_limit{YType::uint32, "route-limit"},
    route_low_water_mark{YType::uint32, "route-low-water-mark"},
    route_threshold{YType::uint32, "route-threshold"},
    rxi_limit_reached{YType::boolean, "rxi-limit-reached"},
    rxi_low_water_mark{YType::uint32, "rxi-low-water-mark"},
    topology_interface_state_count{YType::uint32, "topology-interface-state-count"},
    topology_interface_state_limit{YType::uint32, "topology-interface-state-limit"},
    topology_interface_state_threshold{YType::uint32, "topology-interface-state-threshold"}
{
    yang_name = "summary"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::Summary::~Summary()
{
}

bool Pim::Standby::DefaultContext::Summary::has_data() const
{
    return bsr_candidate_rp_set_count.is_set
	|| bsr_candidate_rp_set_limit.is_set
	|| bsr_candidate_rp_set_threshold.is_set
	|| bsr_range_threshold.is_set
	|| bsr_ranges_count.is_set
	|| bsr_ranges_limit.is_set
	|| global_auto_rp_ranges_limit.is_set
	|| global_bsr_candidate_rp_set_count.is_set
	|| global_bsr_candidate_rp_set_limit.is_set
	|| global_bsr_candidate_rp_set_threshold.is_set
	|| global_bsr_ranges_count.is_set
	|| global_bsr_ranges_limit.is_set
	|| global_bsr_ranges_threshold.is_set
	|| global_register_limit.is_set
	|| is_bsr_ranges_threshold_reached.is_set
	|| is_global_auto_rp_ranges_limit_reached.is_set
	|| is_global_bsr_ranges_limit_reached.is_set
	|| is_global_register_limit_reached.is_set
	|| is_global_route_limit_reached.is_set
	|| is_global_rxi_limit_reached.is_set
	|| is_maximum_enforcement_disabled.is_set
	|| is_node_low_memory.is_set
	|| is_ranges_limit_reached.is_set
	|| is_route_limit_reached.is_set
	|| ranges_count.is_set
	|| ranges_limit.is_set
	|| ranges_threshold.is_set
	|| register_count.is_set
	|| register_limit.is_set
	|| register_limit_reached.is_set
	|| register_threshold.is_set
	|| route_count.is_set
	|| route_limit.is_set
	|| route_low_water_mark.is_set
	|| route_threshold.is_set
	|| rxi_limit_reached.is_set
	|| rxi_low_water_mark.is_set
	|| topology_interface_state_count.is_set
	|| topology_interface_state_limit.is_set
	|| topology_interface_state_threshold.is_set;
}

bool Pim::Standby::DefaultContext::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bsr_candidate_rp_set_count.yfilter)
	|| ydk::is_set(bsr_candidate_rp_set_limit.yfilter)
	|| ydk::is_set(bsr_candidate_rp_set_threshold.yfilter)
	|| ydk::is_set(bsr_range_threshold.yfilter)
	|| ydk::is_set(bsr_ranges_count.yfilter)
	|| ydk::is_set(bsr_ranges_limit.yfilter)
	|| ydk::is_set(global_auto_rp_ranges_limit.yfilter)
	|| ydk::is_set(global_bsr_candidate_rp_set_count.yfilter)
	|| ydk::is_set(global_bsr_candidate_rp_set_limit.yfilter)
	|| ydk::is_set(global_bsr_candidate_rp_set_threshold.yfilter)
	|| ydk::is_set(global_bsr_ranges_count.yfilter)
	|| ydk::is_set(global_bsr_ranges_limit.yfilter)
	|| ydk::is_set(global_bsr_ranges_threshold.yfilter)
	|| ydk::is_set(global_register_limit.yfilter)
	|| ydk::is_set(is_bsr_ranges_threshold_reached.yfilter)
	|| ydk::is_set(is_global_auto_rp_ranges_limit_reached.yfilter)
	|| ydk::is_set(is_global_bsr_ranges_limit_reached.yfilter)
	|| ydk::is_set(is_global_register_limit_reached.yfilter)
	|| ydk::is_set(is_global_route_limit_reached.yfilter)
	|| ydk::is_set(is_global_rxi_limit_reached.yfilter)
	|| ydk::is_set(is_maximum_enforcement_disabled.yfilter)
	|| ydk::is_set(is_node_low_memory.yfilter)
	|| ydk::is_set(is_ranges_limit_reached.yfilter)
	|| ydk::is_set(is_route_limit_reached.yfilter)
	|| ydk::is_set(ranges_count.yfilter)
	|| ydk::is_set(ranges_limit.yfilter)
	|| ydk::is_set(ranges_threshold.yfilter)
	|| ydk::is_set(register_count.yfilter)
	|| ydk::is_set(register_limit.yfilter)
	|| ydk::is_set(register_limit_reached.yfilter)
	|| ydk::is_set(register_threshold.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(route_limit.yfilter)
	|| ydk::is_set(route_low_water_mark.yfilter)
	|| ydk::is_set(route_threshold.yfilter)
	|| ydk::is_set(rxi_limit_reached.yfilter)
	|| ydk::is_set(rxi_low_water_mark.yfilter)
	|| ydk::is_set(topology_interface_state_count.yfilter)
	|| ydk::is_set(topology_interface_state_limit.yfilter)
	|| ydk::is_set(topology_interface_state_threshold.yfilter);
}

std::string Pim::Standby::DefaultContext::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_candidate_rp_set_count.is_set || is_set(bsr_candidate_rp_set_count.yfilter)) leaf_name_data.push_back(bsr_candidate_rp_set_count.get_name_leafdata());
    if (bsr_candidate_rp_set_limit.is_set || is_set(bsr_candidate_rp_set_limit.yfilter)) leaf_name_data.push_back(bsr_candidate_rp_set_limit.get_name_leafdata());
    if (bsr_candidate_rp_set_threshold.is_set || is_set(bsr_candidate_rp_set_threshold.yfilter)) leaf_name_data.push_back(bsr_candidate_rp_set_threshold.get_name_leafdata());
    if (bsr_range_threshold.is_set || is_set(bsr_range_threshold.yfilter)) leaf_name_data.push_back(bsr_range_threshold.get_name_leafdata());
    if (bsr_ranges_count.is_set || is_set(bsr_ranges_count.yfilter)) leaf_name_data.push_back(bsr_ranges_count.get_name_leafdata());
    if (bsr_ranges_limit.is_set || is_set(bsr_ranges_limit.yfilter)) leaf_name_data.push_back(bsr_ranges_limit.get_name_leafdata());
    if (global_auto_rp_ranges_limit.is_set || is_set(global_auto_rp_ranges_limit.yfilter)) leaf_name_data.push_back(global_auto_rp_ranges_limit.get_name_leafdata());
    if (global_bsr_candidate_rp_set_count.is_set || is_set(global_bsr_candidate_rp_set_count.yfilter)) leaf_name_data.push_back(global_bsr_candidate_rp_set_count.get_name_leafdata());
    if (global_bsr_candidate_rp_set_limit.is_set || is_set(global_bsr_candidate_rp_set_limit.yfilter)) leaf_name_data.push_back(global_bsr_candidate_rp_set_limit.get_name_leafdata());
    if (global_bsr_candidate_rp_set_threshold.is_set || is_set(global_bsr_candidate_rp_set_threshold.yfilter)) leaf_name_data.push_back(global_bsr_candidate_rp_set_threshold.get_name_leafdata());
    if (global_bsr_ranges_count.is_set || is_set(global_bsr_ranges_count.yfilter)) leaf_name_data.push_back(global_bsr_ranges_count.get_name_leafdata());
    if (global_bsr_ranges_limit.is_set || is_set(global_bsr_ranges_limit.yfilter)) leaf_name_data.push_back(global_bsr_ranges_limit.get_name_leafdata());
    if (global_bsr_ranges_threshold.is_set || is_set(global_bsr_ranges_threshold.yfilter)) leaf_name_data.push_back(global_bsr_ranges_threshold.get_name_leafdata());
    if (global_register_limit.is_set || is_set(global_register_limit.yfilter)) leaf_name_data.push_back(global_register_limit.get_name_leafdata());
    if (is_bsr_ranges_threshold_reached.is_set || is_set(is_bsr_ranges_threshold_reached.yfilter)) leaf_name_data.push_back(is_bsr_ranges_threshold_reached.get_name_leafdata());
    if (is_global_auto_rp_ranges_limit_reached.is_set || is_set(is_global_auto_rp_ranges_limit_reached.yfilter)) leaf_name_data.push_back(is_global_auto_rp_ranges_limit_reached.get_name_leafdata());
    if (is_global_bsr_ranges_limit_reached.is_set || is_set(is_global_bsr_ranges_limit_reached.yfilter)) leaf_name_data.push_back(is_global_bsr_ranges_limit_reached.get_name_leafdata());
    if (is_global_register_limit_reached.is_set || is_set(is_global_register_limit_reached.yfilter)) leaf_name_data.push_back(is_global_register_limit_reached.get_name_leafdata());
    if (is_global_route_limit_reached.is_set || is_set(is_global_route_limit_reached.yfilter)) leaf_name_data.push_back(is_global_route_limit_reached.get_name_leafdata());
    if (is_global_rxi_limit_reached.is_set || is_set(is_global_rxi_limit_reached.yfilter)) leaf_name_data.push_back(is_global_rxi_limit_reached.get_name_leafdata());
    if (is_maximum_enforcement_disabled.is_set || is_set(is_maximum_enforcement_disabled.yfilter)) leaf_name_data.push_back(is_maximum_enforcement_disabled.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.yfilter)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (is_ranges_limit_reached.is_set || is_set(is_ranges_limit_reached.yfilter)) leaf_name_data.push_back(is_ranges_limit_reached.get_name_leafdata());
    if (is_route_limit_reached.is_set || is_set(is_route_limit_reached.yfilter)) leaf_name_data.push_back(is_route_limit_reached.get_name_leafdata());
    if (ranges_count.is_set || is_set(ranges_count.yfilter)) leaf_name_data.push_back(ranges_count.get_name_leafdata());
    if (ranges_limit.is_set || is_set(ranges_limit.yfilter)) leaf_name_data.push_back(ranges_limit.get_name_leafdata());
    if (ranges_threshold.is_set || is_set(ranges_threshold.yfilter)) leaf_name_data.push_back(ranges_threshold.get_name_leafdata());
    if (register_count.is_set || is_set(register_count.yfilter)) leaf_name_data.push_back(register_count.get_name_leafdata());
    if (register_limit.is_set || is_set(register_limit.yfilter)) leaf_name_data.push_back(register_limit.get_name_leafdata());
    if (register_limit_reached.is_set || is_set(register_limit_reached.yfilter)) leaf_name_data.push_back(register_limit_reached.get_name_leafdata());
    if (register_threshold.is_set || is_set(register_threshold.yfilter)) leaf_name_data.push_back(register_threshold.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (route_limit.is_set || is_set(route_limit.yfilter)) leaf_name_data.push_back(route_limit.get_name_leafdata());
    if (route_low_water_mark.is_set || is_set(route_low_water_mark.yfilter)) leaf_name_data.push_back(route_low_water_mark.get_name_leafdata());
    if (route_threshold.is_set || is_set(route_threshold.yfilter)) leaf_name_data.push_back(route_threshold.get_name_leafdata());
    if (rxi_limit_reached.is_set || is_set(rxi_limit_reached.yfilter)) leaf_name_data.push_back(rxi_limit_reached.get_name_leafdata());
    if (rxi_low_water_mark.is_set || is_set(rxi_low_water_mark.yfilter)) leaf_name_data.push_back(rxi_low_water_mark.get_name_leafdata());
    if (topology_interface_state_count.is_set || is_set(topology_interface_state_count.yfilter)) leaf_name_data.push_back(topology_interface_state_count.get_name_leafdata());
    if (topology_interface_state_limit.is_set || is_set(topology_interface_state_limit.yfilter)) leaf_name_data.push_back(topology_interface_state_limit.get_name_leafdata());
    if (topology_interface_state_threshold.is_set || is_set(topology_interface_state_threshold.yfilter)) leaf_name_data.push_back(topology_interface_state_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bsr-candidate-rp-set-count")
    {
        bsr_candidate_rp_set_count = value;
        bsr_candidate_rp_set_count.value_namespace = name_space;
        bsr_candidate_rp_set_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-candidate-rp-set-limit")
    {
        bsr_candidate_rp_set_limit = value;
        bsr_candidate_rp_set_limit.value_namespace = name_space;
        bsr_candidate_rp_set_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-candidate-rp-set-threshold")
    {
        bsr_candidate_rp_set_threshold = value;
        bsr_candidate_rp_set_threshold.value_namespace = name_space;
        bsr_candidate_rp_set_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-range-threshold")
    {
        bsr_range_threshold = value;
        bsr_range_threshold.value_namespace = name_space;
        bsr_range_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-ranges-count")
    {
        bsr_ranges_count = value;
        bsr_ranges_count.value_namespace = name_space;
        bsr_ranges_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-ranges-limit")
    {
        bsr_ranges_limit = value;
        bsr_ranges_limit.value_namespace = name_space;
        bsr_ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-auto-rp-ranges-limit")
    {
        global_auto_rp_ranges_limit = value;
        global_auto_rp_ranges_limit.value_namespace = name_space;
        global_auto_rp_ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-candidate-rp-set-count")
    {
        global_bsr_candidate_rp_set_count = value;
        global_bsr_candidate_rp_set_count.value_namespace = name_space;
        global_bsr_candidate_rp_set_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-candidate-rp-set-limit")
    {
        global_bsr_candidate_rp_set_limit = value;
        global_bsr_candidate_rp_set_limit.value_namespace = name_space;
        global_bsr_candidate_rp_set_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-candidate-rp-set-threshold")
    {
        global_bsr_candidate_rp_set_threshold = value;
        global_bsr_candidate_rp_set_threshold.value_namespace = name_space;
        global_bsr_candidate_rp_set_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-ranges-count")
    {
        global_bsr_ranges_count = value;
        global_bsr_ranges_count.value_namespace = name_space;
        global_bsr_ranges_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-ranges-limit")
    {
        global_bsr_ranges_limit = value;
        global_bsr_ranges_limit.value_namespace = name_space;
        global_bsr_ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-ranges-threshold")
    {
        global_bsr_ranges_threshold = value;
        global_bsr_ranges_threshold.value_namespace = name_space;
        global_bsr_ranges_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-register-limit")
    {
        global_register_limit = value;
        global_register_limit.value_namespace = name_space;
        global_register_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bsr-ranges-threshold-reached")
    {
        is_bsr_ranges_threshold_reached = value;
        is_bsr_ranges_threshold_reached.value_namespace = name_space;
        is_bsr_ranges_threshold_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-auto-rp-ranges-limit-reached")
    {
        is_global_auto_rp_ranges_limit_reached = value;
        is_global_auto_rp_ranges_limit_reached.value_namespace = name_space;
        is_global_auto_rp_ranges_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-bsr-ranges-limit-reached")
    {
        is_global_bsr_ranges_limit_reached = value;
        is_global_bsr_ranges_limit_reached.value_namespace = name_space;
        is_global_bsr_ranges_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-register-limit-reached")
    {
        is_global_register_limit_reached = value;
        is_global_register_limit_reached.value_namespace = name_space;
        is_global_register_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-route-limit-reached")
    {
        is_global_route_limit_reached = value;
        is_global_route_limit_reached.value_namespace = name_space;
        is_global_route_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-rxi-limit-reached")
    {
        is_global_rxi_limit_reached = value;
        is_global_rxi_limit_reached.value_namespace = name_space;
        is_global_rxi_limit_reached.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-ranges-limit-reached")
    {
        is_ranges_limit_reached = value;
        is_ranges_limit_reached.value_namespace = name_space;
        is_ranges_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-route-limit-reached")
    {
        is_route_limit_reached = value;
        is_route_limit_reached.value_namespace = name_space;
        is_route_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ranges-count")
    {
        ranges_count = value;
        ranges_count.value_namespace = name_space;
        ranges_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ranges-limit")
    {
        ranges_limit = value;
        ranges_limit.value_namespace = name_space;
        ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ranges-threshold")
    {
        ranges_threshold = value;
        ranges_threshold.value_namespace = name_space;
        ranges_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-count")
    {
        register_count = value;
        register_count.value_namespace = name_space;
        register_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-limit")
    {
        register_limit = value;
        register_limit.value_namespace = name_space;
        register_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-limit-reached")
    {
        register_limit_reached = value;
        register_limit_reached.value_namespace = name_space;
        register_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-threshold")
    {
        register_threshold = value;
        register_threshold.value_namespace = name_space;
        register_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-limit")
    {
        route_limit = value;
        route_limit.value_namespace = name_space;
        route_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-low-water-mark")
    {
        route_low_water_mark = value;
        route_low_water_mark.value_namespace = name_space;
        route_low_water_mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-threshold")
    {
        route_threshold = value;
        route_threshold.value_namespace = name_space;
        route_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxi-limit-reached")
    {
        rxi_limit_reached = value;
        rxi_limit_reached.value_namespace = name_space;
        rxi_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxi-low-water-mark")
    {
        rxi_low_water_mark = value;
        rxi_low_water_mark.value_namespace = name_space;
        rxi_low_water_mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-interface-state-count")
    {
        topology_interface_state_count = value;
        topology_interface_state_count.value_namespace = name_space;
        topology_interface_state_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-interface-state-limit")
    {
        topology_interface_state_limit = value;
        topology_interface_state_limit.value_namespace = name_space;
        topology_interface_state_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-interface-state-threshold")
    {
        topology_interface_state_threshold = value;
        topology_interface_state_threshold.value_namespace = name_space;
        topology_interface_state_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bsr-candidate-rp-set-count")
    {
        bsr_candidate_rp_set_count.yfilter = yfilter;
    }
    if(value_path == "bsr-candidate-rp-set-limit")
    {
        bsr_candidate_rp_set_limit.yfilter = yfilter;
    }
    if(value_path == "bsr-candidate-rp-set-threshold")
    {
        bsr_candidate_rp_set_threshold.yfilter = yfilter;
    }
    if(value_path == "bsr-range-threshold")
    {
        bsr_range_threshold.yfilter = yfilter;
    }
    if(value_path == "bsr-ranges-count")
    {
        bsr_ranges_count.yfilter = yfilter;
    }
    if(value_path == "bsr-ranges-limit")
    {
        bsr_ranges_limit.yfilter = yfilter;
    }
    if(value_path == "global-auto-rp-ranges-limit")
    {
        global_auto_rp_ranges_limit.yfilter = yfilter;
    }
    if(value_path == "global-bsr-candidate-rp-set-count")
    {
        global_bsr_candidate_rp_set_count.yfilter = yfilter;
    }
    if(value_path == "global-bsr-candidate-rp-set-limit")
    {
        global_bsr_candidate_rp_set_limit.yfilter = yfilter;
    }
    if(value_path == "global-bsr-candidate-rp-set-threshold")
    {
        global_bsr_candidate_rp_set_threshold.yfilter = yfilter;
    }
    if(value_path == "global-bsr-ranges-count")
    {
        global_bsr_ranges_count.yfilter = yfilter;
    }
    if(value_path == "global-bsr-ranges-limit")
    {
        global_bsr_ranges_limit.yfilter = yfilter;
    }
    if(value_path == "global-bsr-ranges-threshold")
    {
        global_bsr_ranges_threshold.yfilter = yfilter;
    }
    if(value_path == "global-register-limit")
    {
        global_register_limit.yfilter = yfilter;
    }
    if(value_path == "is-bsr-ranges-threshold-reached")
    {
        is_bsr_ranges_threshold_reached.yfilter = yfilter;
    }
    if(value_path == "is-global-auto-rp-ranges-limit-reached")
    {
        is_global_auto_rp_ranges_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-global-bsr-ranges-limit-reached")
    {
        is_global_bsr_ranges_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-global-register-limit-reached")
    {
        is_global_register_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-global-route-limit-reached")
    {
        is_global_route_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-global-rxi-limit-reached")
    {
        is_global_rxi_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-maximum-enforcement-disabled")
    {
        is_maximum_enforcement_disabled.yfilter = yfilter;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory.yfilter = yfilter;
    }
    if(value_path == "is-ranges-limit-reached")
    {
        is_ranges_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-route-limit-reached")
    {
        is_route_limit_reached.yfilter = yfilter;
    }
    if(value_path == "ranges-count")
    {
        ranges_count.yfilter = yfilter;
    }
    if(value_path == "ranges-limit")
    {
        ranges_limit.yfilter = yfilter;
    }
    if(value_path == "ranges-threshold")
    {
        ranges_threshold.yfilter = yfilter;
    }
    if(value_path == "register-count")
    {
        register_count.yfilter = yfilter;
    }
    if(value_path == "register-limit")
    {
        register_limit.yfilter = yfilter;
    }
    if(value_path == "register-limit-reached")
    {
        register_limit_reached.yfilter = yfilter;
    }
    if(value_path == "register-threshold")
    {
        register_threshold.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "route-limit")
    {
        route_limit.yfilter = yfilter;
    }
    if(value_path == "route-low-water-mark")
    {
        route_low_water_mark.yfilter = yfilter;
    }
    if(value_path == "route-threshold")
    {
        route_threshold.yfilter = yfilter;
    }
    if(value_path == "rxi-limit-reached")
    {
        rxi_limit_reached.yfilter = yfilter;
    }
    if(value_path == "rxi-low-water-mark")
    {
        rxi_low_water_mark.yfilter = yfilter;
    }
    if(value_path == "topology-interface-state-count")
    {
        topology_interface_state_count.yfilter = yfilter;
    }
    if(value_path == "topology-interface-state-limit")
    {
        topology_interface_state_limit.yfilter = yfilter;
    }
    if(value_path == "topology-interface-state-threshold")
    {
        topology_interface_state_threshold.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-candidate-rp-set-count" || name == "bsr-candidate-rp-set-limit" || name == "bsr-candidate-rp-set-threshold" || name == "bsr-range-threshold" || name == "bsr-ranges-count" || name == "bsr-ranges-limit" || name == "global-auto-rp-ranges-limit" || name == "global-bsr-candidate-rp-set-count" || name == "global-bsr-candidate-rp-set-limit" || name == "global-bsr-candidate-rp-set-threshold" || name == "global-bsr-ranges-count" || name == "global-bsr-ranges-limit" || name == "global-bsr-ranges-threshold" || name == "global-register-limit" || name == "is-bsr-ranges-threshold-reached" || name == "is-global-auto-rp-ranges-limit-reached" || name == "is-global-bsr-ranges-limit-reached" || name == "is-global-register-limit-reached" || name == "is-global-route-limit-reached" || name == "is-global-rxi-limit-reached" || name == "is-maximum-enforcement-disabled" || name == "is-node-low-memory" || name == "is-ranges-limit-reached" || name == "is-route-limit-reached" || name == "ranges-count" || name == "ranges-limit" || name == "ranges-threshold" || name == "register-count" || name == "register-limit" || name == "register-limit-reached" || name == "register-threshold" || name == "route-count" || name == "route-limit" || name == "route-low-water-mark" || name == "route-threshold" || name == "rxi-limit-reached" || name == "rxi-low-water-mark" || name == "topology-interface-state-count" || name == "topology-interface-state-limit" || name == "topology-interface-state-threshold")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Gre::Gre()
    :
    gre_hashes(std::make_shared<Pim::Standby::DefaultContext::Gre::GreHashes>())
	,gre_next_hops(std::make_shared<Pim::Standby::DefaultContext::Gre::GreNextHops>())
{
    gre_hashes->parent = this;

    gre_next_hops->parent = this;

    yang_name = "gre"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::Gre::~Gre()
{
}

bool Pim::Standby::DefaultContext::Gre::has_data() const
{
    return (gre_hashes !=  nullptr && gre_hashes->has_data())
	|| (gre_next_hops !=  nullptr && gre_next_hops->has_data());
}

bool Pim::Standby::DefaultContext::Gre::has_operation() const
{
    return is_set(yfilter)
	|| (gre_hashes !=  nullptr && gre_hashes->has_operation())
	|| (gre_next_hops !=  nullptr && gre_next_hops->has_operation());
}

std::string Pim::Standby::DefaultContext::Gre::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Gre::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Gre::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-hashes")
    {
        if(gre_hashes == nullptr)
        {
            gre_hashes = std::make_shared<Pim::Standby::DefaultContext::Gre::GreHashes>();
        }
        return gre_hashes;
    }

    if(child_yang_name == "gre-next-hops")
    {
        if(gre_next_hops == nullptr)
        {
            gre_next_hops = std::make_shared<Pim::Standby::DefaultContext::Gre::GreNextHops>();
        }
        return gre_next_hops;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Gre::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Pim::Standby::DefaultContext::Gre::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::Gre::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::Gre::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-hashes" || name == "gre-next-hops")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Gre::GreHashes::GreHashes()
{
    yang_name = "gre-hashes"; yang_parent_name = "gre";
}

Pim::Standby::DefaultContext::Gre::GreHashes::~GreHashes()
{
}

bool Pim::Standby::DefaultContext::Gre::GreHashes::has_data() const
{
    for (std::size_t index=0; index<gre_hash.size(); index++)
    {
        if(gre_hash[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Gre::GreHashes::has_operation() const
{
    for (std::size_t index=0; index<gre_hash.size(); index++)
    {
        if(gre_hash[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::Gre::GreHashes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-hashes";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Gre::GreHashes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/gre/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Gre::GreHashes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-hash")
    {
        for(auto const & c : gre_hash)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Gre::GreHashes::GreHash>();
        c->parent = this;
        gre_hash.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Gre::GreHashes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : gre_hash)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::Gre::GreHashes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::Gre::GreHashes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::Gre::GreHashes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-hash")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Gre::GreHashes::GreHash::GreHash()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    ifname{YType::str, "ifname"},
    next_hop_interface{YType::str, "next-hop-interface"}
{
    yang_name = "gre-hash"; yang_parent_name = "gre-hashes";
}

Pim::Standby::DefaultContext::Gre::GreHashes::GreHash::~GreHash()
{
}

bool Pim::Standby::DefaultContext::Gre::GreHashes::GreHash::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| ifname.is_set
	|| next_hop_interface.is_set;
}

bool Pim::Standby::DefaultContext::Gre::GreHashes::GreHash::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(ifname.yfilter)
	|| ydk::is_set(next_hop_interface.yfilter);
}

std::string Pim::Standby::DefaultContext::Gre::GreHashes::GreHash::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-hash" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[ifname='" <<ifname <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Gre::GreHashes::GreHash::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/gre/gre-hashes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.yfilter)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Gre::GreHashes::GreHash::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Gre::GreHashes::GreHash::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::Gre::GreHashes::GreHash::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::Gre::GreHashes::GreHash::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::Gre::GreHashes::GreHash::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "ifname" || name == "next-hop-interface")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHops()
{
    yang_name = "gre-next-hops"; yang_parent_name = "gre";
}

Pim::Standby::DefaultContext::Gre::GreNextHops::~GreNextHops()
{
}

bool Pim::Standby::DefaultContext::Gre::GreNextHops::has_data() const
{
    for (std::size_t index=0; index<gre_next_hop.size(); index++)
    {
        if(gre_next_hop[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Gre::GreNextHops::has_operation() const
{
    for (std::size_t index=0; index<gre_next_hop.size(); index++)
    {
        if(gre_next_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::Gre::GreNextHops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-next-hops";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Gre::GreNextHops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/gre/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Gre::GreNextHops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-next-hop")
    {
        for(auto const & c : gre_next_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop>();
        c->parent = this;
        gre_next_hop.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Gre::GreNextHops::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : gre_next_hop)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::Gre::GreNextHops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::Gre::GreNextHops::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::Gre::GreNextHops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-next-hop")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GreNextHop()
    :
    destination_address{YType::str, "destination-address"},
    is_connected{YType::uint8, "is-connected"},
    metric{YType::uint32, "metric"},
    metric_preference{YType::uint32, "metric-preference"}
    	,
    registered_address(std::make_shared<Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress>())
{
    registered_address->parent = this;

    yang_name = "gre-next-hop"; yang_parent_name = "gre-next-hops";
}

Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::~GreNextHop()
{
}

bool Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::has_data() const
{
    for (std::size_t index=0; index<gre_path.size(); index++)
    {
        if(gre_path[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| is_connected.is_set
	|| metric.is_set
	|| metric_preference.is_set
	|| (registered_address !=  nullptr && registered_address->has_data());
}

bool Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::has_operation() const
{
    for (std::size_t index=0; index<gre_path.size(); index++)
    {
        if(gre_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(is_connected.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_preference.yfilter)
	|| (registered_address !=  nullptr && registered_address->has_operation());
}

std::string Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-next-hop" <<"[destination-address='" <<destination_address <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/gre/gre-next-hops/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (is_connected.is_set || is_set(is_connected.yfilter)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_preference.is_set || is_set(metric_preference.yfilter)) leaf_name_data.push_back(metric_preference.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-path")
    {
        for(auto const & c : gre_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath>();
        c->parent = this;
        gre_path.push_back(c);
        return c;
    }

    if(child_yang_name == "registered-address")
    {
        if(registered_address == nullptr)
        {
            registered_address = std::make_shared<Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress>();
        }
        return registered_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : gre_path)
    {
        children[c->get_segment_path()] = c;
    }

    if(registered_address != nullptr)
    {
        children["registered-address"] = registered_address;
    }

    return children;
}

void Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connected")
    {
        is_connected = value;
        is_connected.value_namespace = name_space;
        is_connected.value_namespace_prefix = name_space_prefix;
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
}

void Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "is-connected")
    {
        is_connected.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-preference")
    {
        metric_preference.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-path" || name == "registered-address" || name == "destination-address" || name == "is-connected" || name == "metric" || name == "metric-preference")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress::RegisteredAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "registered-address"; yang_parent_name = "gre-next-hop";
}

Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress::~RegisteredAddress()
{
}

bool Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered-address";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RegisteredAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::RegisteredAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GrePath()
    :
    extranet_vrf_name{YType::str, "extranet-vrf-name"},
    gre_interface_name{YType::str, "gre-interface-name"},
    is_connector_attribute_present{YType::boolean, "is-connector-attribute-present"},
    is_gre_interface_disabled{YType::boolean, "is-gre-interface-disabled"},
    is_via_lsm{YType::boolean, "is-via-lsm"}
    	,
    gre_neighbor(std::make_shared<Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor>())
	,gre_next_hop(std::make_shared<Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_>())
{
    gre_neighbor->parent = this;

    gre_next_hop->parent = this;

    yang_name = "gre-path"; yang_parent_name = "gre-next-hop";
}

Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::~GrePath()
{
}

bool Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::has_data() const
{
    return extranet_vrf_name.is_set
	|| gre_interface_name.is_set
	|| is_connector_attribute_present.is_set
	|| is_gre_interface_disabled.is_set
	|| is_via_lsm.is_set
	|| (gre_neighbor !=  nullptr && gre_neighbor->has_data())
	|| (gre_next_hop !=  nullptr && gre_next_hop->has_data());
}

bool Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(extranet_vrf_name.yfilter)
	|| ydk::is_set(gre_interface_name.yfilter)
	|| ydk::is_set(is_connector_attribute_present.yfilter)
	|| ydk::is_set(is_gre_interface_disabled.yfilter)
	|| ydk::is_set(is_via_lsm.yfilter)
	|| (gre_neighbor !=  nullptr && gre_neighbor->has_operation())
	|| (gre_next_hop !=  nullptr && gre_next_hop->has_operation());
}

std::string Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-path";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GrePath' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (extranet_vrf_name.is_set || is_set(extranet_vrf_name.yfilter)) leaf_name_data.push_back(extranet_vrf_name.get_name_leafdata());
    if (gre_interface_name.is_set || is_set(gre_interface_name.yfilter)) leaf_name_data.push_back(gre_interface_name.get_name_leafdata());
    if (is_connector_attribute_present.is_set || is_set(is_connector_attribute_present.yfilter)) leaf_name_data.push_back(is_connector_attribute_present.get_name_leafdata());
    if (is_gre_interface_disabled.is_set || is_set(is_gre_interface_disabled.yfilter)) leaf_name_data.push_back(is_gre_interface_disabled.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.yfilter)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "gre-neighbor")
    {
        if(gre_neighbor == nullptr)
        {
            gre_neighbor = std::make_shared<Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor>();
        }
        return gre_neighbor;
    }

    if(child_yang_name == "gre-next-hop")
    {
        if(gre_next_hop == nullptr)
        {
            gre_next_hop = std::make_shared<Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_>();
        }
        return gre_next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "extranet-vrf-name")
    {
        extranet_vrf_name = value;
        extranet_vrf_name.value_namespace = name_space;
        extranet_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gre-interface-name")
    {
        gre_interface_name = value;
        gre_interface_name.value_namespace = name_space;
        gre_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connector-attribute-present")
    {
        is_connector_attribute_present = value;
        is_connector_attribute_present.value_namespace = name_space;
        is_connector_attribute_present.value_namespace_prefix = name_space_prefix;
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
}

void Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "extranet-vrf-name")
    {
        extranet_vrf_name.yfilter = yfilter;
    }
    if(value_path == "gre-interface-name")
    {
        gre_interface_name.yfilter = yfilter;
    }
    if(value_path == "is-connector-attribute-present")
    {
        is_connector_attribute_present.yfilter = yfilter;
    }
    if(value_path == "is-gre-interface-disabled")
    {
        is_gre_interface_disabled.yfilter = yfilter;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "gre-neighbor" || name == "gre-next-hop" || name == "extranet-vrf-name" || name == "gre-interface-name" || name == "is-connector-attribute-present" || name == "is-gre-interface-disabled" || name == "is-via-lsm")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::GreNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "gre-neighbor"; yang_parent_name = "gre-path";
}

Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::~GreNeighbor()
{
}

bool Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-neighbor";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GreNeighbor' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::GreNextHop_()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "gre-next-hop"; yang_parent_name = "gre-path";
}

Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::~GreNextHop_()
{
}

bool Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gre-next-hop";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GreNextHop_' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::Gre::GreNextHops::GreNextHop::GrePath::GreNextHop_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinners()
{
    yang_name = "bidir-df-winners"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::BidirDfWinners::~BidirDfWinners()
{
}

bool Pim::Standby::DefaultContext::BidirDfWinners::has_data() const
{
    for (std::size_t index=0; index<bidir_df_winner.size(); index++)
    {
        if(bidir_df_winner[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::BidirDfWinners::has_operation() const
{
    for (std::size_t index=0; index<bidir_df_winner.size(); index++)
    {
        if(bidir_df_winner[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::BidirDfWinners::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-df-winners";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::BidirDfWinners::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BidirDfWinners::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bidir-df-winner")
    {
        for(auto const & c : bidir_df_winner)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner>();
        c->parent = this;
        bidir_df_winner.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::BidirDfWinners::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bidir_df_winner)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::BidirDfWinners::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::BidirDfWinners::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::BidirDfWinners::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bidir-df-winner")
        return true;
    return false;
}

Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::BidirDfWinner()
    :
    are_we_df{YType::boolean, "are-we-df"},
    interface_name{YType::str, "interface-name"},
    metric{YType::uint32, "metric"},
    metric_preference{YType::uint32, "metric-preference"},
    pim_interface_name{YType::str, "pim-interface-name"},
    rp_address{YType::str, "rp-address"},
    rp_lan{YType::boolean, "rp-lan"},
    uptime{YType::uint64, "uptime"}
    	,
    df_winner(std::make_shared<Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner>())
	,rp_address_xr(std::make_shared<Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr>())
{
    df_winner->parent = this;

    rp_address_xr->parent = this;

    yang_name = "bidir-df-winner"; yang_parent_name = "bidir-df-winners";
}

Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::~BidirDfWinner()
{
}

bool Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::has_data() const
{
    return are_we_df.is_set
	|| interface_name.is_set
	|| metric.is_set
	|| metric_preference.is_set
	|| pim_interface_name.is_set
	|| rp_address.is_set
	|| rp_lan.is_set
	|| uptime.is_set
	|| (df_winner !=  nullptr && df_winner->has_data())
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_data());
}

bool Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(are_we_df.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_preference.yfilter)
	|| ydk::is_set(pim_interface_name.yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(rp_lan.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (df_winner !=  nullptr && df_winner->has_operation())
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_operation());
}

std::string Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bidir-df-winner";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bidir-df-winners/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (are_we_df.is_set || is_set(are_we_df.yfilter)) leaf_name_data.push_back(are_we_df.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_preference.is_set || is_set(metric_preference.yfilter)) leaf_name_data.push_back(metric_preference.get_name_leafdata());
    if (pim_interface_name.is_set || is_set(pim_interface_name.yfilter)) leaf_name_data.push_back(pim_interface_name.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (rp_lan.is_set || is_set(rp_lan.yfilter)) leaf_name_data.push_back(rp_lan.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "df-winner")
    {
        if(df_winner == nullptr)
        {
            df_winner = std::make_shared<Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner>();
        }
        return df_winner;
    }

    if(child_yang_name == "rp-address-xr")
    {
        if(rp_address_xr == nullptr)
        {
            rp_address_xr = std::make_shared<Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr>();
        }
        return rp_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(df_winner != nullptr)
    {
        children["df-winner"] = df_winner;
    }

    if(rp_address_xr != nullptr)
    {
        children["rp-address-xr"] = rp_address_xr;
    }

    return children;
}

void Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "are-we-df")
    {
        are_we_df = value;
        are_we_df.value_namespace = name_space;
        are_we_df.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "pim-interface-name")
    {
        pim_interface_name = value;
        pim_interface_name.value_namespace = name_space;
        pim_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rp-lan")
    {
        rp_lan = value;
        rp_lan.value_namespace = name_space;
        rp_lan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "are-we-df")
    {
        are_we_df.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-preference")
    {
        metric_preference.yfilter = yfilter;
    }
    if(value_path == "pim-interface-name")
    {
        pim_interface_name.yfilter = yfilter;
    }
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "rp-lan")
    {
        rp_lan.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "df-winner" || name == "rp-address-xr" || name == "are-we-df" || name == "interface-name" || name == "metric" || name == "metric-preference" || name == "pim-interface-name" || name == "rp-address" || name == "rp-lan" || name == "uptime")
        return true;
    return false;
}

Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr::RpAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address-xr"; yang_parent_name = "bidir-df-winner";
}

Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr::~RpAddressXr()
{
}

bool Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address-xr";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bidir-df-winners/bidir-df-winner/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::RpAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner::DfWinner()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "df-winner"; yang_parent_name = "bidir-df-winner";
}

Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner::~DfWinner()
{
}

bool Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "df-winner";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/bidir-df-winners/bidir-df-winner/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::BidirDfWinners::BidirDfWinner::DfWinner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::TableContexts::TableContexts()
{
    yang_name = "table-contexts"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::TableContexts::~TableContexts()
{
}

bool Pim::Standby::DefaultContext::TableContexts::has_data() const
{
    for (std::size_t index=0; index<table_context.size(); index++)
    {
        if(table_context[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::TableContexts::has_operation() const
{
    for (std::size_t index=0; index<table_context.size(); index++)
    {
        if(table_context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::TableContexts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-contexts";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::TableContexts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::TableContexts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "table-context")
    {
        for(auto const & c : table_context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::TableContexts::TableContext>();
        c->parent = this;
        table_context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::TableContexts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : table_context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::TableContexts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::TableContexts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::TableContexts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "table-context")
        return true;
    return false;
}

Pim::Standby::DefaultContext::TableContexts::TableContext::TableContext()
    :
    afi{YType::uint32, "afi"},
    is_active{YType::boolean, "is-active"},
    is_ital_registration_done{YType::boolean, "is-ital-registration-done"},
    is_rib_convergence{YType::boolean, "is-rib-convergence"},
    is_rib_convergence_received{YType::boolean, "is-rib-convergence-received"},
    is_rib_registration_done{YType::boolean, "is-rib-registration-done"},
    rpf_registrations{YType::uint32, "rpf-registrations"},
    saf_name{YType::enumeration, "saf-name"},
    safi{YType::uint32, "safi"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    topology_name{YType::str, "topology-name"},
    vrf_id{YType::uint32, "vrf-id"}
{
    yang_name = "table-context"; yang_parent_name = "table-contexts";
}

Pim::Standby::DefaultContext::TableContexts::TableContext::~TableContext()
{
}

bool Pim::Standby::DefaultContext::TableContexts::TableContext::has_data() const
{
    return afi.is_set
	|| is_active.is_set
	|| is_ital_registration_done.is_set
	|| is_rib_convergence.is_set
	|| is_rib_convergence_received.is_set
	|| is_rib_registration_done.is_set
	|| rpf_registrations.is_set
	|| saf_name.is_set
	|| safi.is_set
	|| table_id.is_set
	|| table_name.is_set
	|| topology_name.is_set
	|| vrf_id.is_set;
}

bool Pim::Standby::DefaultContext::TableContexts::TableContext::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(is_ital_registration_done.yfilter)
	|| ydk::is_set(is_rib_convergence.yfilter)
	|| ydk::is_set(is_rib_convergence_received.yfilter)
	|| ydk::is_set(is_rib_registration_done.yfilter)
	|| ydk::is_set(rpf_registrations.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(safi.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| ydk::is_set(vrf_id.yfilter);
}

std::string Pim::Standby::DefaultContext::TableContexts::TableContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "table-context";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::TableContexts::TableContext::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/table-contexts/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (is_ital_registration_done.is_set || is_set(is_ital_registration_done.yfilter)) leaf_name_data.push_back(is_ital_registration_done.get_name_leafdata());
    if (is_rib_convergence.is_set || is_set(is_rib_convergence.yfilter)) leaf_name_data.push_back(is_rib_convergence.get_name_leafdata());
    if (is_rib_convergence_received.is_set || is_set(is_rib_convergence_received.yfilter)) leaf_name_data.push_back(is_rib_convergence_received.get_name_leafdata());
    if (is_rib_registration_done.is_set || is_set(is_rib_registration_done.yfilter)) leaf_name_data.push_back(is_rib_registration_done.get_name_leafdata());
    if (rpf_registrations.is_set || is_set(rpf_registrations.yfilter)) leaf_name_data.push_back(rpf_registrations.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (safi.is_set || is_set(safi.yfilter)) leaf_name_data.push_back(safi.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::TableContexts::TableContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::TableContexts::TableContext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::TableContexts::TableContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence = value;
        is_rib_convergence.value_namespace = name_space;
        is_rib_convergence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-convergence-received")
    {
        is_rib_convergence_received = value;
        is_rib_convergence_received.value_namespace = name_space;
        is_rib_convergence_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-registration-done")
    {
        is_rib_registration_done = value;
        is_rib_registration_done.value_namespace = name_space;
        is_rib_registration_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations = value;
        rpf_registrations.value_namespace = name_space;
        rpf_registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi")
    {
        safi = value;
        safi.value_namespace = name_space;
        safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::TableContexts::TableContext::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "is-ital-registration-done")
    {
        is_ital_registration_done.yfilter = yfilter;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence.yfilter = yfilter;
    }
    if(value_path == "is-rib-convergence-received")
    {
        is_rib_convergence_received.yfilter = yfilter;
    }
    if(value_path == "is-rib-registration-done")
    {
        is_rib_registration_done.yfilter = yfilter;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "safi")
    {
        safi.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::TableContexts::TableContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "is-active" || name == "is-ital-registration-done" || name == "is-rib-convergence" || name == "is-rib-convergence-received" || name == "is-rib-registration-done" || name == "rpf-registrations" || name == "saf-name" || name == "safi" || name == "table-id" || name == "table-name" || name == "topology-name" || name == "vrf-id")
        return true;
    return false;
}

Pim::Standby::DefaultContext::NeighborSummaries::NeighborSummaries()
{
    yang_name = "neighbor-summaries"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::NeighborSummaries::~NeighborSummaries()
{
}

bool Pim::Standby::DefaultContext::NeighborSummaries::has_data() const
{
    for (std::size_t index=0; index<neighbor_summary.size(); index++)
    {
        if(neighbor_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::NeighborSummaries::has_operation() const
{
    for (std::size_t index=0; index<neighbor_summary.size(); index++)
    {
        if(neighbor_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::NeighborSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summaries";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::NeighborSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::NeighborSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-summary")
    {
        for(auto const & c : neighbor_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::NeighborSummaries::NeighborSummary>();
        c->parent = this;
        neighbor_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::NeighborSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::NeighborSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::NeighborSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::NeighborSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-summary")
        return true;
    return false;
}

Pim::Standby::DefaultContext::NeighborSummaries::NeighborSummary::NeighborSummary()
    :
    interface_name{YType::str, "interface-name"},
    number_of_external_neighbors{YType::int32, "number-of-external-neighbors"},
    number_of_neighbors{YType::int32, "number-of-neighbors"}
{
    yang_name = "neighbor-summary"; yang_parent_name = "neighbor-summaries";
}

Pim::Standby::DefaultContext::NeighborSummaries::NeighborSummary::~NeighborSummary()
{
}

bool Pim::Standby::DefaultContext::NeighborSummaries::NeighborSummary::has_data() const
{
    return interface_name.is_set
	|| number_of_external_neighbors.is_set
	|| number_of_neighbors.is_set;
}

bool Pim::Standby::DefaultContext::NeighborSummaries::NeighborSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(number_of_external_neighbors.yfilter)
	|| ydk::is_set(number_of_neighbors.yfilter);
}

std::string Pim::Standby::DefaultContext::NeighborSummaries::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::NeighborSummaries::NeighborSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/neighbor-summaries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (number_of_external_neighbors.is_set || is_set(number_of_external_neighbors.yfilter)) leaf_name_data.push_back(number_of_external_neighbors.get_name_leafdata());
    if (number_of_neighbors.is_set || is_set(number_of_neighbors.yfilter)) leaf_name_data.push_back(number_of_neighbors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::NeighborSummaries::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::NeighborSummaries::NeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::NeighborSummaries::NeighborSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-external-neighbors")
    {
        number_of_external_neighbors = value;
        number_of_external_neighbors.value_namespace = name_space;
        number_of_external_neighbors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors = value;
        number_of_neighbors.value_namespace = name_space;
        number_of_neighbors.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::NeighborSummaries::NeighborSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "number-of-external-neighbors")
    {
        number_of_external_neighbors.yfilter = yfilter;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::NeighborSummaries::NeighborSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "number-of-external-neighbors" || name == "number-of-neighbors")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Context::Context()
    :
    active_table_count{YType::uint32, "active-table-count"},
    allow_rp_configured{YType::boolean, "allow-rp-configured"},
    allow_rp_group_list{YType::str, "allow-rp-group-list"},
    allow_rp_rp_list{YType::str, "allow-rp-rp-list"},
    anycast_rp_configured{YType::boolean, "anycast-rp-configured"},
    anycast_rp_policy_name{YType::str, "anycast-rp-policy-name"},
    bgp_auto_discovery_configured{YType::boolean, "bgp-auto-discovery-configured"},
    bgp_auto_discovery_type{YType::uint32, "bgp-auto-discovery-type"},
    bgp_i_pmsi_added{YType::boolean, "bgp-i-pmsi-added"},
    bgp_remote_address{YType::str, "bgp-remote-address"},
    bgp_remote_interface{YType::str, "bgp-remote-interface"},
    bgp_remote_interface_name{YType::str, "bgp-remote-interface-name"},
    bgp_remote_on{YType::boolean, "bgp-remote-on"},
    bgp_remote_state{YType::uint32, "bgp-remote-state"},
    bgp_source_active_announce{YType::boolean, "bgp-source-active-announce"},
    gin_b_and_mdt_data_announce_interval{YType::uint32, "gin-b-and-mdt-data-announce-interval"},
    gin_b_and_mdt_data_switchover_interval{YType::uint32, "gin-b-and-mdt-data-switchover-interval"},
    gin_b_and_mdt_interface{YType::str, "gin-b-and-mdt-interface"},
    gin_b_and_mdt_mtu{YType::uint32, "gin-b-and-mdt-mtu"},
    gin_b_and_mdt_name{YType::str, "gin-b-and-mdt-name"},
    gin_b_and_mdt_rpf_identifier{YType::uint32, "gin-b-and-mdt-rpf-identifier"},
    gin_band_maximum_mdt_aggregation{YType::uint32, "gin-band-maximum-mdt-aggregation"},
    in_b_and_mdt_data_announce_interval{YType::uint32, "in-b-and-mdt-data-announce-interval"},
    in_b_and_mdt_data_switchover_interval{YType::uint32, "in-b-and-mdt-data-switchover-interval"},
    in_b_and_mdt_interface{YType::str, "in-b-and-mdt-interface"},
    in_b_and_mdt_mtu{YType::uint32, "in-b-and-mdt-mtu"},
    in_b_and_mdt_name{YType::str, "in-b-and-mdt-name"},
    in_b_and_mdt_rpf_identifier{YType::uint32, "in-b-and-mdt-rpf-identifier"},
    in_band_maximum_mdt_aggregation{YType::uint32, "in-band-maximum-mdt-aggregation"},
    in_band_signaling_local_enabled{YType::boolean, "in-band-signaling-local-enabled"},
    in_band_signaling_remote_enabled{YType::boolean, "in-band-signaling-remote-enabled"},
    inter_autonomous_system_enabled{YType::boolean, "inter-autonomous-system-enabled"},
    ir_maximum_mdt_aggregation{YType::uint32, "ir-maximum-mdt-aggregation"},
    ir_mdt_data_announce_interval{YType::uint32, "ir-mdt-data-announce-interval"},
    ir_mdt_data_switchover_interval{YType::uint32, "ir-mdt-data-switchover-interval"},
    ir_mdt_interface{YType::str, "ir-mdt-interface"},
    ir_mdt_mtu{YType::uint32, "ir-mdt-mtu"},
    ir_mdt_name{YType::str, "ir-mdt-name"},
    ir_mdt_rpf_identifier{YType::uint32, "ir-mdt-rpf-identifier"},
    ir_mdt_tail_label{YType::uint32, "ir-mdt-tail-label"},
    is_active{YType::boolean, "is-active"},
    is_active_ital{YType::boolean, "is-active-ital"},
    is_all_interface_disable_operation{YType::boolean, "is-all-interface-disable-operation"},
    is_auto_rp_listen_enabled{YType::boolean, "is-auto-rp-listen-enabled"},
    is_auto_rp_listen_sock_add{YType::boolean, "is-auto-rp-listen-sock-add"},
    is_create_gin_b_and_mdt_interface{YType::boolean, "is-create-gin-b-and-mdt-interface"},
    is_create_in_b_and_mdt_interface{YType::boolean, "is-create-in-b-and-mdt-interface"},
    is_create_ir_mdt_interface{YType::boolean, "is-create-ir-mdt-interface"},
    is_create_mdt_interface{YType::boolean, "is-create-mdt-interface"},
    is_create_mldp_mdt_interface{YType::boolean, "is-create-mldp-mdt-interface"},
    is_create_rsvp_te_mdt_interface{YType::boolean, "is-create-rsvp-te-mdt-interface"},
    is_default_granges{YType::boolean, "is-default-granges"},
    is_gin_b_and_mdt_owner{YType::boolean, "is-gin-b-and-mdt-owner"},
    is_in_b_and_mdt_owner{YType::boolean, "is-in-b-and-mdt-owner"},
    is_ir_mdt_owner{YType::boolean, "is-ir-mdt-owner"},
    is_lpts_socket_add_required{YType::boolean, "is-lpts-socket-add-required"},
    is_lpts_socket_added{YType::boolean, "is-lpts-socket-added"},
    is_m_host_publish_pending{YType::boolean, "is-m-host-publish-pending"},
    is_mdt_owner{YType::boolean, "is-mdt-owner"},
    is_mldp_mdt_owner{YType::boolean, "is-mldp-mdt-owner"},
    is_mrib_register{YType::boolean, "is-mrib-register"},
    is_multicast_rib_registration{YType::boolean, "is-multicast-rib-registration"},
    is_pim_nsf_rib_converge_received{YType::boolean, "is-pim-nsf-rib-converge-received"},
    is_pim_nsf_rib_converged{YType::boolean, "is-pim-nsf-rib-converged"},
    is_redistribution_reset{YType::boolean, "is-redistribution-reset"},
    is_register_injection_lpts_socket_add_required{YType::boolean, "is-register-injection-lpts-socket-add-required"},
    is_register_injection_lpts_socket_added{YType::boolean, "is-register-injection-lpts-socket-added"},
    is_register_injection_socket_add_required{YType::boolean, "is-register-injection-socket-add-required"},
    is_register_injection_socket_added{YType::boolean, "is-register-injection-socket-added"},
    is_rib_multipath_enabled{YType::boolean, "is-rib-multipath-enabled"},
    is_rib_multipath_interface_hash{YType::boolean, "is-rib-multipath-interface-hash"},
    is_rib_multipath_source_hash{YType::boolean, "is-rib-multipath-source-hash"},
    is_rib_multipath_source_next_hop_hash{YType::boolean, "is-rib-multipath-source-next-hop-hash"},
    is_routing_enabled{YType::boolean, "is-routing-enabled"},
    is_rsvp_te_mdt_owner{YType::boolean, "is-rsvp-te-mdt-owner"},
    is_socket_add_required{YType::boolean, "is-socket-add-required"},
    is_socket_added{YType::boolean, "is-socket-added"},
    is_udp_socket_add_required{YType::boolean, "is-udp-socket-add-required"},
    is_udp_socket_added{YType::boolean, "is-udp-socket-added"},
    is_udp_socket_bind{YType::boolean, "is-udp-socket-bind"},
    is_udp_socket_bind_required{YType::boolean, "is-udp-socket-bind-required"},
    is_unicast_rib_registration{YType::boolean, "is-unicast-rib-registration"},
    maximum_mdt_aggregation{YType::uint32, "maximum-mdt-aggregation"},
    mdt_data_announce_interval{YType::uint32, "mdt-data-announce-interval"},
    mdt_data_switchover_interval{YType::uint32, "mdt-data-switchover-interval"},
    mdt_default_group{YType::str, "mdt-default-group"},
    mdt_gre_remote_rpf_identifier{YType::uint32, "mdt-gre-remote-rpf-identifier"},
    mdt_gre_rpf_identifier{YType::uint32, "mdt-gre-rpf-identifier"},
    mdt_interface{YType::str, "mdt-interface"},
    mdt_mtu{YType::uint32, "mdt-mtu"},
    mdt_neighbor_filter_name{YType::str, "mdt-neighbor-filter-name"},
    mdt_partitioned_ir_control_identifier{YType::uint32, "mdt-partitioned-ir-control-identifier"},
    mdt_partitioned_mdt_control_identifier{YType::uint32, "mdt-partitioned-mdt-control-identifier"},
    mhost_default_interface_config{YType::str, "mhost-default-interface-config"},
    mhost_interface{YType::str, "mhost-interface"},
    mldp_auto_rp_announce_tree_added{YType::boolean, "mldp-auto-rp-announce-tree-added"},
    mldp_auto_rp_discovery_tree_added{YType::boolean, "mldp-auto-rp-discovery-tree-added"},
    mldp_bsr_control_tree_added{YType::boolean, "mldp-bsr-control-tree-added"},
    mldp_control_head_lsm_identifier{YType::uint32, "mldp-control-head-lsm-identifier"},
    mldp_head_local_label{YType::uint32, "mldp-head-local-label"},
    mldp_head_lsm_identifier{YType::uint32, "mldp-head-lsm-identifier"},
    mldp_maximum_mdt_aggregation{YType::uint32, "mldp-maximum-mdt-aggregation"},
    mldp_mdt_data_announce_interval{YType::uint32, "mldp-mdt-data-announce-interval"},
    mldp_mdt_data_switchover_interval{YType::uint32, "mldp-mdt-data-switchover-interval"},
    mldp_mdt_interface{YType::str, "mldp-mdt-interface"},
    mldp_mdt_mtu{YType::uint32, "mldp-mdt-mtu"},
    mldp_mdt_name{YType::str, "mldp-mdt-name"},
    mldp_mdt_remote_rpf_identifier{YType::uint32, "mldp-mdt-remote-rpf-identifier"},
    mldp_mdt_rpf_identifier{YType::uint32, "mldp-mdt-rpf-identifier"},
    mldp_partioned_mp2m_ptree{YType::boolean, "mldp-partioned-mp2m-ptree"},
    mldp_partitioned_head_lsm_identifier{YType::uint32, "mldp-partitioned-head-lsm-identifier"},
    mldp_partitioned_mdt_configured{YType::boolean, "mldp-partitioned-mdt-configured"},
    mldp_partitioned_mdt_identifier{YType::uint32, "mldp-partitioned-mdt-identifier"},
    mldp_remote_head_lsm_identifier{YType::uint32, "mldp-remote-head-lsm-identifier"},
    mldp_remote_partitioned_mdt_configured{YType::boolean, "mldp-remote-partitioned-mdt-configured"},
    mldp_root_address{YType::uint32, "mldp-root-address"},
    mldp_root_count{YType::uint32, "mldp-root-count"},
    murib_id{YType::uint32, "murib-id"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    non_default_vrf_count_on_socket{YType::uint32, "non-default-vrf-count-on-socket"},
    organization_unique_identifier{YType::uint32, "organization-unique-identifier"},
    p2mpte_li_drop{YType::uint32, "p2mpte-li-drop"},
    redistribution_reset_count{YType::uint32, "redistribution-reset-count"},
    remote_table_id{YType::uint32, "remote-table-id"},
    route_distinguisher{YType::str, "route-distinguisher"},
    rpf_id{YType::uint32, "rpf-id"},
    rpf_policy_name{YType::str, "rpf-policy-name"},
    rsvp_te_maximum_mdt_aggregation{YType::uint32, "rsvp-te-maximum-mdt-aggregation"},
    rsvp_te_mdt_data_announce_interval{YType::uint32, "rsvp-te-mdt-data-announce-interval"},
    rsvp_te_mdt_data_switchover_interval{YType::uint32, "rsvp-te-mdt-data-switchover-interval"},
    rsvp_te_mdt_interface{YType::str, "rsvp-te-mdt-interface"},
    rsvp_te_mdt_mtu{YType::uint32, "rsvp-te-mdt-mtu"},
    rsvp_te_mdt_name{YType::str, "rsvp-te-mdt-name"},
    rsvp_te_mdt_rpf_identifier{YType::uint32, "rsvp-te-mdt-rpf-identifier"},
    rsvp_te_mdt_static_p2mp_count{YType::uint32, "rsvp-te-mdt-static-p2mp-count"},
    rump_enabled{YType::boolean, "rump-enabled"},
    sg_expiry_time{YType::uint16, "sg-expiry-time"},
    sg_expiry_timer_configured{YType::boolean, "sg-expiry-timer-configured"},
    sg_expiry_timer_sg_list{YType::str, "sg-expiry-timer-sg-list"},
    stale_rd_present{YType::boolean, "stale-rd-present"},
    suppress_pim_data_mdt_tlv{YType::boolean, "suppress-pim-data-mdt-tlv"},
    suppress_shared_tree_join{YType::boolean, "suppress-shared-tree-join"},
    table_count{YType::uint32, "table-count"},
    table_id{YType::uint32, "table-id"},
    umh{YType::boolean, "umh"},
    valid_rd_present{YType::boolean, "valid-rd-present"},
    vpn_index{YType::uint32, "vpn-index"},
    vrf_id{YType::uint32, "vrf-id"}
    	,
    remote_default_group(std::make_shared<Pim::Standby::DefaultContext::Context::RemoteDefaultGroup>())
	,rpf_default_table(std::make_shared<Pim::Standby::DefaultContext::Context::RpfDefaultTable>())
{
    remote_default_group->parent = this;

    rpf_default_table->parent = this;

    yang_name = "context"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::Context::~Context()
{
}

bool Pim::Standby::DefaultContext::Context::has_data() const
{
    for (std::size_t index=0; index<anycast_rp_range.size(); index++)
    {
        if(anycast_rp_range[index]->has_data())
            return true;
    }
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
    for (auto const & leaf : mldp_root_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return active_table_count.is_set
	|| allow_rp_configured.is_set
	|| allow_rp_group_list.is_set
	|| allow_rp_rp_list.is_set
	|| anycast_rp_configured.is_set
	|| anycast_rp_policy_name.is_set
	|| bgp_auto_discovery_configured.is_set
	|| bgp_auto_discovery_type.is_set
	|| bgp_i_pmsi_added.is_set
	|| bgp_remote_address.is_set
	|| bgp_remote_interface.is_set
	|| bgp_remote_interface_name.is_set
	|| bgp_remote_on.is_set
	|| bgp_remote_state.is_set
	|| bgp_source_active_announce.is_set
	|| gin_b_and_mdt_data_announce_interval.is_set
	|| gin_b_and_mdt_data_switchover_interval.is_set
	|| gin_b_and_mdt_interface.is_set
	|| gin_b_and_mdt_mtu.is_set
	|| gin_b_and_mdt_name.is_set
	|| gin_b_and_mdt_rpf_identifier.is_set
	|| gin_band_maximum_mdt_aggregation.is_set
	|| in_b_and_mdt_data_announce_interval.is_set
	|| in_b_and_mdt_data_switchover_interval.is_set
	|| in_b_and_mdt_interface.is_set
	|| in_b_and_mdt_mtu.is_set
	|| in_b_and_mdt_name.is_set
	|| in_b_and_mdt_rpf_identifier.is_set
	|| in_band_maximum_mdt_aggregation.is_set
	|| in_band_signaling_local_enabled.is_set
	|| in_band_signaling_remote_enabled.is_set
	|| inter_autonomous_system_enabled.is_set
	|| ir_maximum_mdt_aggregation.is_set
	|| ir_mdt_data_announce_interval.is_set
	|| ir_mdt_data_switchover_interval.is_set
	|| ir_mdt_interface.is_set
	|| ir_mdt_mtu.is_set
	|| ir_mdt_name.is_set
	|| ir_mdt_rpf_identifier.is_set
	|| ir_mdt_tail_label.is_set
	|| is_active.is_set
	|| is_active_ital.is_set
	|| is_all_interface_disable_operation.is_set
	|| is_auto_rp_listen_enabled.is_set
	|| is_auto_rp_listen_sock_add.is_set
	|| is_create_gin_b_and_mdt_interface.is_set
	|| is_create_in_b_and_mdt_interface.is_set
	|| is_create_ir_mdt_interface.is_set
	|| is_create_mdt_interface.is_set
	|| is_create_mldp_mdt_interface.is_set
	|| is_create_rsvp_te_mdt_interface.is_set
	|| is_default_granges.is_set
	|| is_gin_b_and_mdt_owner.is_set
	|| is_in_b_and_mdt_owner.is_set
	|| is_ir_mdt_owner.is_set
	|| is_lpts_socket_add_required.is_set
	|| is_lpts_socket_added.is_set
	|| is_m_host_publish_pending.is_set
	|| is_mdt_owner.is_set
	|| is_mldp_mdt_owner.is_set
	|| is_mrib_register.is_set
	|| is_multicast_rib_registration.is_set
	|| is_pim_nsf_rib_converge_received.is_set
	|| is_pim_nsf_rib_converged.is_set
	|| is_redistribution_reset.is_set
	|| is_register_injection_lpts_socket_add_required.is_set
	|| is_register_injection_lpts_socket_added.is_set
	|| is_register_injection_socket_add_required.is_set
	|| is_register_injection_socket_added.is_set
	|| is_rib_multipath_enabled.is_set
	|| is_rib_multipath_interface_hash.is_set
	|| is_rib_multipath_source_hash.is_set
	|| is_rib_multipath_source_next_hop_hash.is_set
	|| is_routing_enabled.is_set
	|| is_rsvp_te_mdt_owner.is_set
	|| is_socket_add_required.is_set
	|| is_socket_added.is_set
	|| is_udp_socket_add_required.is_set
	|| is_udp_socket_added.is_set
	|| is_udp_socket_bind.is_set
	|| is_udp_socket_bind_required.is_set
	|| is_unicast_rib_registration.is_set
	|| maximum_mdt_aggregation.is_set
	|| mdt_data_announce_interval.is_set
	|| mdt_data_switchover_interval.is_set
	|| mdt_default_group.is_set
	|| mdt_gre_remote_rpf_identifier.is_set
	|| mdt_gre_rpf_identifier.is_set
	|| mdt_interface.is_set
	|| mdt_mtu.is_set
	|| mdt_neighbor_filter_name.is_set
	|| mdt_partitioned_ir_control_identifier.is_set
	|| mdt_partitioned_mdt_control_identifier.is_set
	|| mhost_default_interface_config.is_set
	|| mhost_interface.is_set
	|| mldp_auto_rp_announce_tree_added.is_set
	|| mldp_auto_rp_discovery_tree_added.is_set
	|| mldp_bsr_control_tree_added.is_set
	|| mldp_control_head_lsm_identifier.is_set
	|| mldp_head_local_label.is_set
	|| mldp_head_lsm_identifier.is_set
	|| mldp_maximum_mdt_aggregation.is_set
	|| mldp_mdt_data_announce_interval.is_set
	|| mldp_mdt_data_switchover_interval.is_set
	|| mldp_mdt_interface.is_set
	|| mldp_mdt_mtu.is_set
	|| mldp_mdt_name.is_set
	|| mldp_mdt_remote_rpf_identifier.is_set
	|| mldp_mdt_rpf_identifier.is_set
	|| mldp_partioned_mp2m_ptree.is_set
	|| mldp_partitioned_head_lsm_identifier.is_set
	|| mldp_partitioned_mdt_configured.is_set
	|| mldp_partitioned_mdt_identifier.is_set
	|| mldp_remote_head_lsm_identifier.is_set
	|| mldp_remote_partitioned_mdt_configured.is_set
	|| mldp_root_count.is_set
	|| murib_id.is_set
	|| neighbor_filter_name.is_set
	|| non_default_vrf_count_on_socket.is_set
	|| organization_unique_identifier.is_set
	|| p2mpte_li_drop.is_set
	|| redistribution_reset_count.is_set
	|| remote_table_id.is_set
	|| route_distinguisher.is_set
	|| rpf_id.is_set
	|| rpf_policy_name.is_set
	|| rsvp_te_maximum_mdt_aggregation.is_set
	|| rsvp_te_mdt_data_announce_interval.is_set
	|| rsvp_te_mdt_data_switchover_interval.is_set
	|| rsvp_te_mdt_interface.is_set
	|| rsvp_te_mdt_mtu.is_set
	|| rsvp_te_mdt_name.is_set
	|| rsvp_te_mdt_rpf_identifier.is_set
	|| rsvp_te_mdt_static_p2mp_count.is_set
	|| rump_enabled.is_set
	|| sg_expiry_time.is_set
	|| sg_expiry_timer_configured.is_set
	|| sg_expiry_timer_sg_list.is_set
	|| stale_rd_present.is_set
	|| suppress_pim_data_mdt_tlv.is_set
	|| suppress_shared_tree_join.is_set
	|| table_count.is_set
	|| table_id.is_set
	|| umh.is_set
	|| valid_rd_present.is_set
	|| vpn_index.is_set
	|| vrf_id.is_set
	|| (remote_default_group !=  nullptr && remote_default_group->has_data())
	|| (rpf_default_table !=  nullptr && rpf_default_table->has_data());
}

bool Pim::Standby::DefaultContext::Context::has_operation() const
{
    for (std::size_t index=0; index<anycast_rp_range.size(); index++)
    {
        if(anycast_rp_range[index]->has_operation())
            return true;
    }
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
    for (auto const & leaf : mldp_root_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(active_table_count.yfilter)
	|| ydk::is_set(allow_rp_configured.yfilter)
	|| ydk::is_set(allow_rp_group_list.yfilter)
	|| ydk::is_set(allow_rp_rp_list.yfilter)
	|| ydk::is_set(anycast_rp_configured.yfilter)
	|| ydk::is_set(anycast_rp_policy_name.yfilter)
	|| ydk::is_set(bgp_auto_discovery_configured.yfilter)
	|| ydk::is_set(bgp_auto_discovery_type.yfilter)
	|| ydk::is_set(bgp_i_pmsi_added.yfilter)
	|| ydk::is_set(bgp_remote_address.yfilter)
	|| ydk::is_set(bgp_remote_interface.yfilter)
	|| ydk::is_set(bgp_remote_interface_name.yfilter)
	|| ydk::is_set(bgp_remote_on.yfilter)
	|| ydk::is_set(bgp_remote_state.yfilter)
	|| ydk::is_set(bgp_source_active_announce.yfilter)
	|| ydk::is_set(gin_b_and_mdt_data_announce_interval.yfilter)
	|| ydk::is_set(gin_b_and_mdt_data_switchover_interval.yfilter)
	|| ydk::is_set(gin_b_and_mdt_interface.yfilter)
	|| ydk::is_set(gin_b_and_mdt_mtu.yfilter)
	|| ydk::is_set(gin_b_and_mdt_name.yfilter)
	|| ydk::is_set(gin_b_and_mdt_rpf_identifier.yfilter)
	|| ydk::is_set(gin_band_maximum_mdt_aggregation.yfilter)
	|| ydk::is_set(in_b_and_mdt_data_announce_interval.yfilter)
	|| ydk::is_set(in_b_and_mdt_data_switchover_interval.yfilter)
	|| ydk::is_set(in_b_and_mdt_interface.yfilter)
	|| ydk::is_set(in_b_and_mdt_mtu.yfilter)
	|| ydk::is_set(in_b_and_mdt_name.yfilter)
	|| ydk::is_set(in_b_and_mdt_rpf_identifier.yfilter)
	|| ydk::is_set(in_band_maximum_mdt_aggregation.yfilter)
	|| ydk::is_set(in_band_signaling_local_enabled.yfilter)
	|| ydk::is_set(in_band_signaling_remote_enabled.yfilter)
	|| ydk::is_set(inter_autonomous_system_enabled.yfilter)
	|| ydk::is_set(ir_maximum_mdt_aggregation.yfilter)
	|| ydk::is_set(ir_mdt_data_announce_interval.yfilter)
	|| ydk::is_set(ir_mdt_data_switchover_interval.yfilter)
	|| ydk::is_set(ir_mdt_interface.yfilter)
	|| ydk::is_set(ir_mdt_mtu.yfilter)
	|| ydk::is_set(ir_mdt_name.yfilter)
	|| ydk::is_set(ir_mdt_rpf_identifier.yfilter)
	|| ydk::is_set(ir_mdt_tail_label.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(is_active_ital.yfilter)
	|| ydk::is_set(is_all_interface_disable_operation.yfilter)
	|| ydk::is_set(is_auto_rp_listen_enabled.yfilter)
	|| ydk::is_set(is_auto_rp_listen_sock_add.yfilter)
	|| ydk::is_set(is_create_gin_b_and_mdt_interface.yfilter)
	|| ydk::is_set(is_create_in_b_and_mdt_interface.yfilter)
	|| ydk::is_set(is_create_ir_mdt_interface.yfilter)
	|| ydk::is_set(is_create_mdt_interface.yfilter)
	|| ydk::is_set(is_create_mldp_mdt_interface.yfilter)
	|| ydk::is_set(is_create_rsvp_te_mdt_interface.yfilter)
	|| ydk::is_set(is_default_granges.yfilter)
	|| ydk::is_set(is_gin_b_and_mdt_owner.yfilter)
	|| ydk::is_set(is_in_b_and_mdt_owner.yfilter)
	|| ydk::is_set(is_ir_mdt_owner.yfilter)
	|| ydk::is_set(is_lpts_socket_add_required.yfilter)
	|| ydk::is_set(is_lpts_socket_added.yfilter)
	|| ydk::is_set(is_m_host_publish_pending.yfilter)
	|| ydk::is_set(is_mdt_owner.yfilter)
	|| ydk::is_set(is_mldp_mdt_owner.yfilter)
	|| ydk::is_set(is_mrib_register.yfilter)
	|| ydk::is_set(is_multicast_rib_registration.yfilter)
	|| ydk::is_set(is_pim_nsf_rib_converge_received.yfilter)
	|| ydk::is_set(is_pim_nsf_rib_converged.yfilter)
	|| ydk::is_set(is_redistribution_reset.yfilter)
	|| ydk::is_set(is_register_injection_lpts_socket_add_required.yfilter)
	|| ydk::is_set(is_register_injection_lpts_socket_added.yfilter)
	|| ydk::is_set(is_register_injection_socket_add_required.yfilter)
	|| ydk::is_set(is_register_injection_socket_added.yfilter)
	|| ydk::is_set(is_rib_multipath_enabled.yfilter)
	|| ydk::is_set(is_rib_multipath_interface_hash.yfilter)
	|| ydk::is_set(is_rib_multipath_source_hash.yfilter)
	|| ydk::is_set(is_rib_multipath_source_next_hop_hash.yfilter)
	|| ydk::is_set(is_routing_enabled.yfilter)
	|| ydk::is_set(is_rsvp_te_mdt_owner.yfilter)
	|| ydk::is_set(is_socket_add_required.yfilter)
	|| ydk::is_set(is_socket_added.yfilter)
	|| ydk::is_set(is_udp_socket_add_required.yfilter)
	|| ydk::is_set(is_udp_socket_added.yfilter)
	|| ydk::is_set(is_udp_socket_bind.yfilter)
	|| ydk::is_set(is_udp_socket_bind_required.yfilter)
	|| ydk::is_set(is_unicast_rib_registration.yfilter)
	|| ydk::is_set(maximum_mdt_aggregation.yfilter)
	|| ydk::is_set(mdt_data_announce_interval.yfilter)
	|| ydk::is_set(mdt_data_switchover_interval.yfilter)
	|| ydk::is_set(mdt_default_group.yfilter)
	|| ydk::is_set(mdt_gre_remote_rpf_identifier.yfilter)
	|| ydk::is_set(mdt_gre_rpf_identifier.yfilter)
	|| ydk::is_set(mdt_interface.yfilter)
	|| ydk::is_set(mdt_mtu.yfilter)
	|| ydk::is_set(mdt_neighbor_filter_name.yfilter)
	|| ydk::is_set(mdt_partitioned_ir_control_identifier.yfilter)
	|| ydk::is_set(mdt_partitioned_mdt_control_identifier.yfilter)
	|| ydk::is_set(mhost_default_interface_config.yfilter)
	|| ydk::is_set(mhost_interface.yfilter)
	|| ydk::is_set(mldp_auto_rp_announce_tree_added.yfilter)
	|| ydk::is_set(mldp_auto_rp_discovery_tree_added.yfilter)
	|| ydk::is_set(mldp_bsr_control_tree_added.yfilter)
	|| ydk::is_set(mldp_control_head_lsm_identifier.yfilter)
	|| ydk::is_set(mldp_head_local_label.yfilter)
	|| ydk::is_set(mldp_head_lsm_identifier.yfilter)
	|| ydk::is_set(mldp_maximum_mdt_aggregation.yfilter)
	|| ydk::is_set(mldp_mdt_data_announce_interval.yfilter)
	|| ydk::is_set(mldp_mdt_data_switchover_interval.yfilter)
	|| ydk::is_set(mldp_mdt_interface.yfilter)
	|| ydk::is_set(mldp_mdt_mtu.yfilter)
	|| ydk::is_set(mldp_mdt_name.yfilter)
	|| ydk::is_set(mldp_mdt_remote_rpf_identifier.yfilter)
	|| ydk::is_set(mldp_mdt_rpf_identifier.yfilter)
	|| ydk::is_set(mldp_partioned_mp2m_ptree.yfilter)
	|| ydk::is_set(mldp_partitioned_head_lsm_identifier.yfilter)
	|| ydk::is_set(mldp_partitioned_mdt_configured.yfilter)
	|| ydk::is_set(mldp_partitioned_mdt_identifier.yfilter)
	|| ydk::is_set(mldp_remote_head_lsm_identifier.yfilter)
	|| ydk::is_set(mldp_remote_partitioned_mdt_configured.yfilter)
	|| ydk::is_set(mldp_root_address.yfilter)
	|| ydk::is_set(mldp_root_count.yfilter)
	|| ydk::is_set(murib_id.yfilter)
	|| ydk::is_set(neighbor_filter_name.yfilter)
	|| ydk::is_set(non_default_vrf_count_on_socket.yfilter)
	|| ydk::is_set(organization_unique_identifier.yfilter)
	|| ydk::is_set(p2mpte_li_drop.yfilter)
	|| ydk::is_set(redistribution_reset_count.yfilter)
	|| ydk::is_set(remote_table_id.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter)
	|| ydk::is_set(rpf_id.yfilter)
	|| ydk::is_set(rpf_policy_name.yfilter)
	|| ydk::is_set(rsvp_te_maximum_mdt_aggregation.yfilter)
	|| ydk::is_set(rsvp_te_mdt_data_announce_interval.yfilter)
	|| ydk::is_set(rsvp_te_mdt_data_switchover_interval.yfilter)
	|| ydk::is_set(rsvp_te_mdt_interface.yfilter)
	|| ydk::is_set(rsvp_te_mdt_mtu.yfilter)
	|| ydk::is_set(rsvp_te_mdt_name.yfilter)
	|| ydk::is_set(rsvp_te_mdt_rpf_identifier.yfilter)
	|| ydk::is_set(rsvp_te_mdt_static_p2mp_count.yfilter)
	|| ydk::is_set(rump_enabled.yfilter)
	|| ydk::is_set(sg_expiry_time.yfilter)
	|| ydk::is_set(sg_expiry_timer_configured.yfilter)
	|| ydk::is_set(sg_expiry_timer_sg_list.yfilter)
	|| ydk::is_set(stale_rd_present.yfilter)
	|| ydk::is_set(suppress_pim_data_mdt_tlv.yfilter)
	|| ydk::is_set(suppress_shared_tree_join.yfilter)
	|| ydk::is_set(table_count.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(umh.yfilter)
	|| ydk::is_set(valid_rd_present.yfilter)
	|| ydk::is_set(vpn_index.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| (remote_default_group !=  nullptr && remote_default_group->has_operation())
	|| (rpf_default_table !=  nullptr && rpf_default_table->has_operation());
}

std::string Pim::Standby::DefaultContext::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Context::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_table_count.is_set || is_set(active_table_count.yfilter)) leaf_name_data.push_back(active_table_count.get_name_leafdata());
    if (allow_rp_configured.is_set || is_set(allow_rp_configured.yfilter)) leaf_name_data.push_back(allow_rp_configured.get_name_leafdata());
    if (allow_rp_group_list.is_set || is_set(allow_rp_group_list.yfilter)) leaf_name_data.push_back(allow_rp_group_list.get_name_leafdata());
    if (allow_rp_rp_list.is_set || is_set(allow_rp_rp_list.yfilter)) leaf_name_data.push_back(allow_rp_rp_list.get_name_leafdata());
    if (anycast_rp_configured.is_set || is_set(anycast_rp_configured.yfilter)) leaf_name_data.push_back(anycast_rp_configured.get_name_leafdata());
    if (anycast_rp_policy_name.is_set || is_set(anycast_rp_policy_name.yfilter)) leaf_name_data.push_back(anycast_rp_policy_name.get_name_leafdata());
    if (bgp_auto_discovery_configured.is_set || is_set(bgp_auto_discovery_configured.yfilter)) leaf_name_data.push_back(bgp_auto_discovery_configured.get_name_leafdata());
    if (bgp_auto_discovery_type.is_set || is_set(bgp_auto_discovery_type.yfilter)) leaf_name_data.push_back(bgp_auto_discovery_type.get_name_leafdata());
    if (bgp_i_pmsi_added.is_set || is_set(bgp_i_pmsi_added.yfilter)) leaf_name_data.push_back(bgp_i_pmsi_added.get_name_leafdata());
    if (bgp_remote_address.is_set || is_set(bgp_remote_address.yfilter)) leaf_name_data.push_back(bgp_remote_address.get_name_leafdata());
    if (bgp_remote_interface.is_set || is_set(bgp_remote_interface.yfilter)) leaf_name_data.push_back(bgp_remote_interface.get_name_leafdata());
    if (bgp_remote_interface_name.is_set || is_set(bgp_remote_interface_name.yfilter)) leaf_name_data.push_back(bgp_remote_interface_name.get_name_leafdata());
    if (bgp_remote_on.is_set || is_set(bgp_remote_on.yfilter)) leaf_name_data.push_back(bgp_remote_on.get_name_leafdata());
    if (bgp_remote_state.is_set || is_set(bgp_remote_state.yfilter)) leaf_name_data.push_back(bgp_remote_state.get_name_leafdata());
    if (bgp_source_active_announce.is_set || is_set(bgp_source_active_announce.yfilter)) leaf_name_data.push_back(bgp_source_active_announce.get_name_leafdata());
    if (gin_b_and_mdt_data_announce_interval.is_set || is_set(gin_b_and_mdt_data_announce_interval.yfilter)) leaf_name_data.push_back(gin_b_and_mdt_data_announce_interval.get_name_leafdata());
    if (gin_b_and_mdt_data_switchover_interval.is_set || is_set(gin_b_and_mdt_data_switchover_interval.yfilter)) leaf_name_data.push_back(gin_b_and_mdt_data_switchover_interval.get_name_leafdata());
    if (gin_b_and_mdt_interface.is_set || is_set(gin_b_and_mdt_interface.yfilter)) leaf_name_data.push_back(gin_b_and_mdt_interface.get_name_leafdata());
    if (gin_b_and_mdt_mtu.is_set || is_set(gin_b_and_mdt_mtu.yfilter)) leaf_name_data.push_back(gin_b_and_mdt_mtu.get_name_leafdata());
    if (gin_b_and_mdt_name.is_set || is_set(gin_b_and_mdt_name.yfilter)) leaf_name_data.push_back(gin_b_and_mdt_name.get_name_leafdata());
    if (gin_b_and_mdt_rpf_identifier.is_set || is_set(gin_b_and_mdt_rpf_identifier.yfilter)) leaf_name_data.push_back(gin_b_and_mdt_rpf_identifier.get_name_leafdata());
    if (gin_band_maximum_mdt_aggregation.is_set || is_set(gin_band_maximum_mdt_aggregation.yfilter)) leaf_name_data.push_back(gin_band_maximum_mdt_aggregation.get_name_leafdata());
    if (in_b_and_mdt_data_announce_interval.is_set || is_set(in_b_and_mdt_data_announce_interval.yfilter)) leaf_name_data.push_back(in_b_and_mdt_data_announce_interval.get_name_leafdata());
    if (in_b_and_mdt_data_switchover_interval.is_set || is_set(in_b_and_mdt_data_switchover_interval.yfilter)) leaf_name_data.push_back(in_b_and_mdt_data_switchover_interval.get_name_leafdata());
    if (in_b_and_mdt_interface.is_set || is_set(in_b_and_mdt_interface.yfilter)) leaf_name_data.push_back(in_b_and_mdt_interface.get_name_leafdata());
    if (in_b_and_mdt_mtu.is_set || is_set(in_b_and_mdt_mtu.yfilter)) leaf_name_data.push_back(in_b_and_mdt_mtu.get_name_leafdata());
    if (in_b_and_mdt_name.is_set || is_set(in_b_and_mdt_name.yfilter)) leaf_name_data.push_back(in_b_and_mdt_name.get_name_leafdata());
    if (in_b_and_mdt_rpf_identifier.is_set || is_set(in_b_and_mdt_rpf_identifier.yfilter)) leaf_name_data.push_back(in_b_and_mdt_rpf_identifier.get_name_leafdata());
    if (in_band_maximum_mdt_aggregation.is_set || is_set(in_band_maximum_mdt_aggregation.yfilter)) leaf_name_data.push_back(in_band_maximum_mdt_aggregation.get_name_leafdata());
    if (in_band_signaling_local_enabled.is_set || is_set(in_band_signaling_local_enabled.yfilter)) leaf_name_data.push_back(in_band_signaling_local_enabled.get_name_leafdata());
    if (in_band_signaling_remote_enabled.is_set || is_set(in_band_signaling_remote_enabled.yfilter)) leaf_name_data.push_back(in_band_signaling_remote_enabled.get_name_leafdata());
    if (inter_autonomous_system_enabled.is_set || is_set(inter_autonomous_system_enabled.yfilter)) leaf_name_data.push_back(inter_autonomous_system_enabled.get_name_leafdata());
    if (ir_maximum_mdt_aggregation.is_set || is_set(ir_maximum_mdt_aggregation.yfilter)) leaf_name_data.push_back(ir_maximum_mdt_aggregation.get_name_leafdata());
    if (ir_mdt_data_announce_interval.is_set || is_set(ir_mdt_data_announce_interval.yfilter)) leaf_name_data.push_back(ir_mdt_data_announce_interval.get_name_leafdata());
    if (ir_mdt_data_switchover_interval.is_set || is_set(ir_mdt_data_switchover_interval.yfilter)) leaf_name_data.push_back(ir_mdt_data_switchover_interval.get_name_leafdata());
    if (ir_mdt_interface.is_set || is_set(ir_mdt_interface.yfilter)) leaf_name_data.push_back(ir_mdt_interface.get_name_leafdata());
    if (ir_mdt_mtu.is_set || is_set(ir_mdt_mtu.yfilter)) leaf_name_data.push_back(ir_mdt_mtu.get_name_leafdata());
    if (ir_mdt_name.is_set || is_set(ir_mdt_name.yfilter)) leaf_name_data.push_back(ir_mdt_name.get_name_leafdata());
    if (ir_mdt_rpf_identifier.is_set || is_set(ir_mdt_rpf_identifier.yfilter)) leaf_name_data.push_back(ir_mdt_rpf_identifier.get_name_leafdata());
    if (ir_mdt_tail_label.is_set || is_set(ir_mdt_tail_label.yfilter)) leaf_name_data.push_back(ir_mdt_tail_label.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (is_active_ital.is_set || is_set(is_active_ital.yfilter)) leaf_name_data.push_back(is_active_ital.get_name_leafdata());
    if (is_all_interface_disable_operation.is_set || is_set(is_all_interface_disable_operation.yfilter)) leaf_name_data.push_back(is_all_interface_disable_operation.get_name_leafdata());
    if (is_auto_rp_listen_enabled.is_set || is_set(is_auto_rp_listen_enabled.yfilter)) leaf_name_data.push_back(is_auto_rp_listen_enabled.get_name_leafdata());
    if (is_auto_rp_listen_sock_add.is_set || is_set(is_auto_rp_listen_sock_add.yfilter)) leaf_name_data.push_back(is_auto_rp_listen_sock_add.get_name_leafdata());
    if (is_create_gin_b_and_mdt_interface.is_set || is_set(is_create_gin_b_and_mdt_interface.yfilter)) leaf_name_data.push_back(is_create_gin_b_and_mdt_interface.get_name_leafdata());
    if (is_create_in_b_and_mdt_interface.is_set || is_set(is_create_in_b_and_mdt_interface.yfilter)) leaf_name_data.push_back(is_create_in_b_and_mdt_interface.get_name_leafdata());
    if (is_create_ir_mdt_interface.is_set || is_set(is_create_ir_mdt_interface.yfilter)) leaf_name_data.push_back(is_create_ir_mdt_interface.get_name_leafdata());
    if (is_create_mdt_interface.is_set || is_set(is_create_mdt_interface.yfilter)) leaf_name_data.push_back(is_create_mdt_interface.get_name_leafdata());
    if (is_create_mldp_mdt_interface.is_set || is_set(is_create_mldp_mdt_interface.yfilter)) leaf_name_data.push_back(is_create_mldp_mdt_interface.get_name_leafdata());
    if (is_create_rsvp_te_mdt_interface.is_set || is_set(is_create_rsvp_te_mdt_interface.yfilter)) leaf_name_data.push_back(is_create_rsvp_te_mdt_interface.get_name_leafdata());
    if (is_default_granges.is_set || is_set(is_default_granges.yfilter)) leaf_name_data.push_back(is_default_granges.get_name_leafdata());
    if (is_gin_b_and_mdt_owner.is_set || is_set(is_gin_b_and_mdt_owner.yfilter)) leaf_name_data.push_back(is_gin_b_and_mdt_owner.get_name_leafdata());
    if (is_in_b_and_mdt_owner.is_set || is_set(is_in_b_and_mdt_owner.yfilter)) leaf_name_data.push_back(is_in_b_and_mdt_owner.get_name_leafdata());
    if (is_ir_mdt_owner.is_set || is_set(is_ir_mdt_owner.yfilter)) leaf_name_data.push_back(is_ir_mdt_owner.get_name_leafdata());
    if (is_lpts_socket_add_required.is_set || is_set(is_lpts_socket_add_required.yfilter)) leaf_name_data.push_back(is_lpts_socket_add_required.get_name_leafdata());
    if (is_lpts_socket_added.is_set || is_set(is_lpts_socket_added.yfilter)) leaf_name_data.push_back(is_lpts_socket_added.get_name_leafdata());
    if (is_m_host_publish_pending.is_set || is_set(is_m_host_publish_pending.yfilter)) leaf_name_data.push_back(is_m_host_publish_pending.get_name_leafdata());
    if (is_mdt_owner.is_set || is_set(is_mdt_owner.yfilter)) leaf_name_data.push_back(is_mdt_owner.get_name_leafdata());
    if (is_mldp_mdt_owner.is_set || is_set(is_mldp_mdt_owner.yfilter)) leaf_name_data.push_back(is_mldp_mdt_owner.get_name_leafdata());
    if (is_mrib_register.is_set || is_set(is_mrib_register.yfilter)) leaf_name_data.push_back(is_mrib_register.get_name_leafdata());
    if (is_multicast_rib_registration.is_set || is_set(is_multicast_rib_registration.yfilter)) leaf_name_data.push_back(is_multicast_rib_registration.get_name_leafdata());
    if (is_pim_nsf_rib_converge_received.is_set || is_set(is_pim_nsf_rib_converge_received.yfilter)) leaf_name_data.push_back(is_pim_nsf_rib_converge_received.get_name_leafdata());
    if (is_pim_nsf_rib_converged.is_set || is_set(is_pim_nsf_rib_converged.yfilter)) leaf_name_data.push_back(is_pim_nsf_rib_converged.get_name_leafdata());
    if (is_redistribution_reset.is_set || is_set(is_redistribution_reset.yfilter)) leaf_name_data.push_back(is_redistribution_reset.get_name_leafdata());
    if (is_register_injection_lpts_socket_add_required.is_set || is_set(is_register_injection_lpts_socket_add_required.yfilter)) leaf_name_data.push_back(is_register_injection_lpts_socket_add_required.get_name_leafdata());
    if (is_register_injection_lpts_socket_added.is_set || is_set(is_register_injection_lpts_socket_added.yfilter)) leaf_name_data.push_back(is_register_injection_lpts_socket_added.get_name_leafdata());
    if (is_register_injection_socket_add_required.is_set || is_set(is_register_injection_socket_add_required.yfilter)) leaf_name_data.push_back(is_register_injection_socket_add_required.get_name_leafdata());
    if (is_register_injection_socket_added.is_set || is_set(is_register_injection_socket_added.yfilter)) leaf_name_data.push_back(is_register_injection_socket_added.get_name_leafdata());
    if (is_rib_multipath_enabled.is_set || is_set(is_rib_multipath_enabled.yfilter)) leaf_name_data.push_back(is_rib_multipath_enabled.get_name_leafdata());
    if (is_rib_multipath_interface_hash.is_set || is_set(is_rib_multipath_interface_hash.yfilter)) leaf_name_data.push_back(is_rib_multipath_interface_hash.get_name_leafdata());
    if (is_rib_multipath_source_hash.is_set || is_set(is_rib_multipath_source_hash.yfilter)) leaf_name_data.push_back(is_rib_multipath_source_hash.get_name_leafdata());
    if (is_rib_multipath_source_next_hop_hash.is_set || is_set(is_rib_multipath_source_next_hop_hash.yfilter)) leaf_name_data.push_back(is_rib_multipath_source_next_hop_hash.get_name_leafdata());
    if (is_routing_enabled.is_set || is_set(is_routing_enabled.yfilter)) leaf_name_data.push_back(is_routing_enabled.get_name_leafdata());
    if (is_rsvp_te_mdt_owner.is_set || is_set(is_rsvp_te_mdt_owner.yfilter)) leaf_name_data.push_back(is_rsvp_te_mdt_owner.get_name_leafdata());
    if (is_socket_add_required.is_set || is_set(is_socket_add_required.yfilter)) leaf_name_data.push_back(is_socket_add_required.get_name_leafdata());
    if (is_socket_added.is_set || is_set(is_socket_added.yfilter)) leaf_name_data.push_back(is_socket_added.get_name_leafdata());
    if (is_udp_socket_add_required.is_set || is_set(is_udp_socket_add_required.yfilter)) leaf_name_data.push_back(is_udp_socket_add_required.get_name_leafdata());
    if (is_udp_socket_added.is_set || is_set(is_udp_socket_added.yfilter)) leaf_name_data.push_back(is_udp_socket_added.get_name_leafdata());
    if (is_udp_socket_bind.is_set || is_set(is_udp_socket_bind.yfilter)) leaf_name_data.push_back(is_udp_socket_bind.get_name_leafdata());
    if (is_udp_socket_bind_required.is_set || is_set(is_udp_socket_bind_required.yfilter)) leaf_name_data.push_back(is_udp_socket_bind_required.get_name_leafdata());
    if (is_unicast_rib_registration.is_set || is_set(is_unicast_rib_registration.yfilter)) leaf_name_data.push_back(is_unicast_rib_registration.get_name_leafdata());
    if (maximum_mdt_aggregation.is_set || is_set(maximum_mdt_aggregation.yfilter)) leaf_name_data.push_back(maximum_mdt_aggregation.get_name_leafdata());
    if (mdt_data_announce_interval.is_set || is_set(mdt_data_announce_interval.yfilter)) leaf_name_data.push_back(mdt_data_announce_interval.get_name_leafdata());
    if (mdt_data_switchover_interval.is_set || is_set(mdt_data_switchover_interval.yfilter)) leaf_name_data.push_back(mdt_data_switchover_interval.get_name_leafdata());
    if (mdt_default_group.is_set || is_set(mdt_default_group.yfilter)) leaf_name_data.push_back(mdt_default_group.get_name_leafdata());
    if (mdt_gre_remote_rpf_identifier.is_set || is_set(mdt_gre_remote_rpf_identifier.yfilter)) leaf_name_data.push_back(mdt_gre_remote_rpf_identifier.get_name_leafdata());
    if (mdt_gre_rpf_identifier.is_set || is_set(mdt_gre_rpf_identifier.yfilter)) leaf_name_data.push_back(mdt_gre_rpf_identifier.get_name_leafdata());
    if (mdt_interface.is_set || is_set(mdt_interface.yfilter)) leaf_name_data.push_back(mdt_interface.get_name_leafdata());
    if (mdt_mtu.is_set || is_set(mdt_mtu.yfilter)) leaf_name_data.push_back(mdt_mtu.get_name_leafdata());
    if (mdt_neighbor_filter_name.is_set || is_set(mdt_neighbor_filter_name.yfilter)) leaf_name_data.push_back(mdt_neighbor_filter_name.get_name_leafdata());
    if (mdt_partitioned_ir_control_identifier.is_set || is_set(mdt_partitioned_ir_control_identifier.yfilter)) leaf_name_data.push_back(mdt_partitioned_ir_control_identifier.get_name_leafdata());
    if (mdt_partitioned_mdt_control_identifier.is_set || is_set(mdt_partitioned_mdt_control_identifier.yfilter)) leaf_name_data.push_back(mdt_partitioned_mdt_control_identifier.get_name_leafdata());
    if (mhost_default_interface_config.is_set || is_set(mhost_default_interface_config.yfilter)) leaf_name_data.push_back(mhost_default_interface_config.get_name_leafdata());
    if (mhost_interface.is_set || is_set(mhost_interface.yfilter)) leaf_name_data.push_back(mhost_interface.get_name_leafdata());
    if (mldp_auto_rp_announce_tree_added.is_set || is_set(mldp_auto_rp_announce_tree_added.yfilter)) leaf_name_data.push_back(mldp_auto_rp_announce_tree_added.get_name_leafdata());
    if (mldp_auto_rp_discovery_tree_added.is_set || is_set(mldp_auto_rp_discovery_tree_added.yfilter)) leaf_name_data.push_back(mldp_auto_rp_discovery_tree_added.get_name_leafdata());
    if (mldp_bsr_control_tree_added.is_set || is_set(mldp_bsr_control_tree_added.yfilter)) leaf_name_data.push_back(mldp_bsr_control_tree_added.get_name_leafdata());
    if (mldp_control_head_lsm_identifier.is_set || is_set(mldp_control_head_lsm_identifier.yfilter)) leaf_name_data.push_back(mldp_control_head_lsm_identifier.get_name_leafdata());
    if (mldp_head_local_label.is_set || is_set(mldp_head_local_label.yfilter)) leaf_name_data.push_back(mldp_head_local_label.get_name_leafdata());
    if (mldp_head_lsm_identifier.is_set || is_set(mldp_head_lsm_identifier.yfilter)) leaf_name_data.push_back(mldp_head_lsm_identifier.get_name_leafdata());
    if (mldp_maximum_mdt_aggregation.is_set || is_set(mldp_maximum_mdt_aggregation.yfilter)) leaf_name_data.push_back(mldp_maximum_mdt_aggregation.get_name_leafdata());
    if (mldp_mdt_data_announce_interval.is_set || is_set(mldp_mdt_data_announce_interval.yfilter)) leaf_name_data.push_back(mldp_mdt_data_announce_interval.get_name_leafdata());
    if (mldp_mdt_data_switchover_interval.is_set || is_set(mldp_mdt_data_switchover_interval.yfilter)) leaf_name_data.push_back(mldp_mdt_data_switchover_interval.get_name_leafdata());
    if (mldp_mdt_interface.is_set || is_set(mldp_mdt_interface.yfilter)) leaf_name_data.push_back(mldp_mdt_interface.get_name_leafdata());
    if (mldp_mdt_mtu.is_set || is_set(mldp_mdt_mtu.yfilter)) leaf_name_data.push_back(mldp_mdt_mtu.get_name_leafdata());
    if (mldp_mdt_name.is_set || is_set(mldp_mdt_name.yfilter)) leaf_name_data.push_back(mldp_mdt_name.get_name_leafdata());
    if (mldp_mdt_remote_rpf_identifier.is_set || is_set(mldp_mdt_remote_rpf_identifier.yfilter)) leaf_name_data.push_back(mldp_mdt_remote_rpf_identifier.get_name_leafdata());
    if (mldp_mdt_rpf_identifier.is_set || is_set(mldp_mdt_rpf_identifier.yfilter)) leaf_name_data.push_back(mldp_mdt_rpf_identifier.get_name_leafdata());
    if (mldp_partioned_mp2m_ptree.is_set || is_set(mldp_partioned_mp2m_ptree.yfilter)) leaf_name_data.push_back(mldp_partioned_mp2m_ptree.get_name_leafdata());
    if (mldp_partitioned_head_lsm_identifier.is_set || is_set(mldp_partitioned_head_lsm_identifier.yfilter)) leaf_name_data.push_back(mldp_partitioned_head_lsm_identifier.get_name_leafdata());
    if (mldp_partitioned_mdt_configured.is_set || is_set(mldp_partitioned_mdt_configured.yfilter)) leaf_name_data.push_back(mldp_partitioned_mdt_configured.get_name_leafdata());
    if (mldp_partitioned_mdt_identifier.is_set || is_set(mldp_partitioned_mdt_identifier.yfilter)) leaf_name_data.push_back(mldp_partitioned_mdt_identifier.get_name_leafdata());
    if (mldp_remote_head_lsm_identifier.is_set || is_set(mldp_remote_head_lsm_identifier.yfilter)) leaf_name_data.push_back(mldp_remote_head_lsm_identifier.get_name_leafdata());
    if (mldp_remote_partitioned_mdt_configured.is_set || is_set(mldp_remote_partitioned_mdt_configured.yfilter)) leaf_name_data.push_back(mldp_remote_partitioned_mdt_configured.get_name_leafdata());
    if (mldp_root_count.is_set || is_set(mldp_root_count.yfilter)) leaf_name_data.push_back(mldp_root_count.get_name_leafdata());
    if (murib_id.is_set || is_set(murib_id.yfilter)) leaf_name_data.push_back(murib_id.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.yfilter)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (non_default_vrf_count_on_socket.is_set || is_set(non_default_vrf_count_on_socket.yfilter)) leaf_name_data.push_back(non_default_vrf_count_on_socket.get_name_leafdata());
    if (organization_unique_identifier.is_set || is_set(organization_unique_identifier.yfilter)) leaf_name_data.push_back(organization_unique_identifier.get_name_leafdata());
    if (p2mpte_li_drop.is_set || is_set(p2mpte_li_drop.yfilter)) leaf_name_data.push_back(p2mpte_li_drop.get_name_leafdata());
    if (redistribution_reset_count.is_set || is_set(redistribution_reset_count.yfilter)) leaf_name_data.push_back(redistribution_reset_count.get_name_leafdata());
    if (remote_table_id.is_set || is_set(remote_table_id.yfilter)) leaf_name_data.push_back(remote_table_id.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (rpf_id.is_set || is_set(rpf_id.yfilter)) leaf_name_data.push_back(rpf_id.get_name_leafdata());
    if (rpf_policy_name.is_set || is_set(rpf_policy_name.yfilter)) leaf_name_data.push_back(rpf_policy_name.get_name_leafdata());
    if (rsvp_te_maximum_mdt_aggregation.is_set || is_set(rsvp_te_maximum_mdt_aggregation.yfilter)) leaf_name_data.push_back(rsvp_te_maximum_mdt_aggregation.get_name_leafdata());
    if (rsvp_te_mdt_data_announce_interval.is_set || is_set(rsvp_te_mdt_data_announce_interval.yfilter)) leaf_name_data.push_back(rsvp_te_mdt_data_announce_interval.get_name_leafdata());
    if (rsvp_te_mdt_data_switchover_interval.is_set || is_set(rsvp_te_mdt_data_switchover_interval.yfilter)) leaf_name_data.push_back(rsvp_te_mdt_data_switchover_interval.get_name_leafdata());
    if (rsvp_te_mdt_interface.is_set || is_set(rsvp_te_mdt_interface.yfilter)) leaf_name_data.push_back(rsvp_te_mdt_interface.get_name_leafdata());
    if (rsvp_te_mdt_mtu.is_set || is_set(rsvp_te_mdt_mtu.yfilter)) leaf_name_data.push_back(rsvp_te_mdt_mtu.get_name_leafdata());
    if (rsvp_te_mdt_name.is_set || is_set(rsvp_te_mdt_name.yfilter)) leaf_name_data.push_back(rsvp_te_mdt_name.get_name_leafdata());
    if (rsvp_te_mdt_rpf_identifier.is_set || is_set(rsvp_te_mdt_rpf_identifier.yfilter)) leaf_name_data.push_back(rsvp_te_mdt_rpf_identifier.get_name_leafdata());
    if (rsvp_te_mdt_static_p2mp_count.is_set || is_set(rsvp_te_mdt_static_p2mp_count.yfilter)) leaf_name_data.push_back(rsvp_te_mdt_static_p2mp_count.get_name_leafdata());
    if (rump_enabled.is_set || is_set(rump_enabled.yfilter)) leaf_name_data.push_back(rump_enabled.get_name_leafdata());
    if (sg_expiry_time.is_set || is_set(sg_expiry_time.yfilter)) leaf_name_data.push_back(sg_expiry_time.get_name_leafdata());
    if (sg_expiry_timer_configured.is_set || is_set(sg_expiry_timer_configured.yfilter)) leaf_name_data.push_back(sg_expiry_timer_configured.get_name_leafdata());
    if (sg_expiry_timer_sg_list.is_set || is_set(sg_expiry_timer_sg_list.yfilter)) leaf_name_data.push_back(sg_expiry_timer_sg_list.get_name_leafdata());
    if (stale_rd_present.is_set || is_set(stale_rd_present.yfilter)) leaf_name_data.push_back(stale_rd_present.get_name_leafdata());
    if (suppress_pim_data_mdt_tlv.is_set || is_set(suppress_pim_data_mdt_tlv.yfilter)) leaf_name_data.push_back(suppress_pim_data_mdt_tlv.get_name_leafdata());
    if (suppress_shared_tree_join.is_set || is_set(suppress_shared_tree_join.yfilter)) leaf_name_data.push_back(suppress_shared_tree_join.get_name_leafdata());
    if (table_count.is_set || is_set(table_count.yfilter)) leaf_name_data.push_back(table_count.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (umh.is_set || is_set(umh.yfilter)) leaf_name_data.push_back(umh.get_name_leafdata());
    if (valid_rd_present.is_set || is_set(valid_rd_present.yfilter)) leaf_name_data.push_back(valid_rd_present.get_name_leafdata());
    if (vpn_index.is_set || is_set(vpn_index.yfilter)) leaf_name_data.push_back(vpn_index.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());

    auto mldp_root_address_name_datas = mldp_root_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mldp_root_address_name_datas.begin(), mldp_root_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "anycast-rp-range")
    {
        for(auto const & c : anycast_rp_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Context::AnycastRpRange>();
        c->parent = this;
        anycast_rp_range.push_back(c);
        return c;
    }

    if(child_yang_name == "export-route-target")
    {
        for(auto const & c : export_route_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Context::ExportRouteTarget>();
        c->parent = this;
        export_route_target.push_back(c);
        return c;
    }

    if(child_yang_name == "import-route-target")
    {
        for(auto const & c : import_route_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Context::ImportRouteTarget>();
        c->parent = this;
        import_route_target.push_back(c);
        return c;
    }

    if(child_yang_name == "remote-default-group")
    {
        if(remote_default_group == nullptr)
        {
            remote_default_group = std::make_shared<Pim::Standby::DefaultContext::Context::RemoteDefaultGroup>();
        }
        return remote_default_group;
    }

    if(child_yang_name == "rpf-default-table")
    {
        if(rpf_default_table == nullptr)
        {
            rpf_default_table = std::make_shared<Pim::Standby::DefaultContext::Context::RpfDefaultTable>();
        }
        return rpf_default_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : anycast_rp_range)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : export_route_target)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : import_route_target)
    {
        children[c->get_segment_path()] = c;
    }

    if(remote_default_group != nullptr)
    {
        children["remote-default-group"] = remote_default_group;
    }

    if(rpf_default_table != nullptr)
    {
        children["rpf-default-table"] = rpf_default_table;
    }

    return children;
}

void Pim::Standby::DefaultContext::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-table-count")
    {
        active_table_count = value;
        active_table_count.value_namespace = name_space;
        active_table_count.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "anycast-rp-configured")
    {
        anycast_rp_configured = value;
        anycast_rp_configured.value_namespace = name_space;
        anycast_rp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast-rp-policy-name")
    {
        anycast_rp_policy_name = value;
        anycast_rp_policy_name.value_namespace = name_space;
        anycast_rp_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-auto-discovery-configured")
    {
        bgp_auto_discovery_configured = value;
        bgp_auto_discovery_configured.value_namespace = name_space;
        bgp_auto_discovery_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-auto-discovery-type")
    {
        bgp_auto_discovery_type = value;
        bgp_auto_discovery_type.value_namespace = name_space;
        bgp_auto_discovery_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-i-pmsi-added")
    {
        bgp_i_pmsi_added = value;
        bgp_i_pmsi_added.value_namespace = name_space;
        bgp_i_pmsi_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-remote-address")
    {
        bgp_remote_address = value;
        bgp_remote_address.value_namespace = name_space;
        bgp_remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-remote-interface")
    {
        bgp_remote_interface = value;
        bgp_remote_interface.value_namespace = name_space;
        bgp_remote_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-remote-interface-name")
    {
        bgp_remote_interface_name = value;
        bgp_remote_interface_name.value_namespace = name_space;
        bgp_remote_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-remote-on")
    {
        bgp_remote_on = value;
        bgp_remote_on.value_namespace = name_space;
        bgp_remote_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-remote-state")
    {
        bgp_remote_state = value;
        bgp_remote_state.value_namespace = name_space;
        bgp_remote_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-source-active-announce")
    {
        bgp_source_active_announce = value;
        bgp_source_active_announce.value_namespace = name_space;
        bgp_source_active_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gin-b-and-mdt-data-announce-interval")
    {
        gin_b_and_mdt_data_announce_interval = value;
        gin_b_and_mdt_data_announce_interval.value_namespace = name_space;
        gin_b_and_mdt_data_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gin-b-and-mdt-data-switchover-interval")
    {
        gin_b_and_mdt_data_switchover_interval = value;
        gin_b_and_mdt_data_switchover_interval.value_namespace = name_space;
        gin_b_and_mdt_data_switchover_interval.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "gin-b-and-mdt-name")
    {
        gin_b_and_mdt_name = value;
        gin_b_and_mdt_name.value_namespace = name_space;
        gin_b_and_mdt_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gin-b-and-mdt-rpf-identifier")
    {
        gin_b_and_mdt_rpf_identifier = value;
        gin_b_and_mdt_rpf_identifier.value_namespace = name_space;
        gin_b_and_mdt_rpf_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gin-band-maximum-mdt-aggregation")
    {
        gin_band_maximum_mdt_aggregation = value;
        gin_band_maximum_mdt_aggregation.value_namespace = name_space;
        gin_band_maximum_mdt_aggregation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-b-and-mdt-data-announce-interval")
    {
        in_b_and_mdt_data_announce_interval = value;
        in_b_and_mdt_data_announce_interval.value_namespace = name_space;
        in_b_and_mdt_data_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-b-and-mdt-data-switchover-interval")
    {
        in_b_and_mdt_data_switchover_interval = value;
        in_b_and_mdt_data_switchover_interval.value_namespace = name_space;
        in_b_and_mdt_data_switchover_interval.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "in-b-and-mdt-name")
    {
        in_b_and_mdt_name = value;
        in_b_and_mdt_name.value_namespace = name_space;
        in_b_and_mdt_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-b-and-mdt-rpf-identifier")
    {
        in_b_and_mdt_rpf_identifier = value;
        in_b_and_mdt_rpf_identifier.value_namespace = name_space;
        in_b_and_mdt_rpf_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-band-maximum-mdt-aggregation")
    {
        in_band_maximum_mdt_aggregation = value;
        in_band_maximum_mdt_aggregation.value_namespace = name_space;
        in_band_maximum_mdt_aggregation.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "inter-autonomous-system-enabled")
    {
        inter_autonomous_system_enabled = value;
        inter_autonomous_system_enabled.value_namespace = name_space;
        inter_autonomous_system_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ir-maximum-mdt-aggregation")
    {
        ir_maximum_mdt_aggregation = value;
        ir_maximum_mdt_aggregation.value_namespace = name_space;
        ir_maximum_mdt_aggregation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ir-mdt-data-announce-interval")
    {
        ir_mdt_data_announce_interval = value;
        ir_mdt_data_announce_interval.value_namespace = name_space;
        ir_mdt_data_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ir-mdt-data-switchover-interval")
    {
        ir_mdt_data_switchover_interval = value;
        ir_mdt_data_switchover_interval.value_namespace = name_space;
        ir_mdt_data_switchover_interval.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "ir-mdt-name")
    {
        ir_mdt_name = value;
        ir_mdt_name.value_namespace = name_space;
        ir_mdt_name.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-all-interface-disable-operation")
    {
        is_all_interface_disable_operation = value;
        is_all_interface_disable_operation.value_namespace = name_space;
        is_all_interface_disable_operation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-auto-rp-listen-enabled")
    {
        is_auto_rp_listen_enabled = value;
        is_auto_rp_listen_enabled.value_namespace = name_space;
        is_auto_rp_listen_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-auto-rp-listen-sock-add")
    {
        is_auto_rp_listen_sock_add = value;
        is_auto_rp_listen_sock_add.value_namespace = name_space;
        is_auto_rp_listen_sock_add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-create-gin-b-and-mdt-interface")
    {
        is_create_gin_b_and_mdt_interface = value;
        is_create_gin_b_and_mdt_interface.value_namespace = name_space;
        is_create_gin_b_and_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-create-in-b-and-mdt-interface")
    {
        is_create_in_b_and_mdt_interface = value;
        is_create_in_b_and_mdt_interface.value_namespace = name_space;
        is_create_in_b_and_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-create-ir-mdt-interface")
    {
        is_create_ir_mdt_interface = value;
        is_create_ir_mdt_interface.value_namespace = name_space;
        is_create_ir_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-create-mdt-interface")
    {
        is_create_mdt_interface = value;
        is_create_mdt_interface.value_namespace = name_space;
        is_create_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-create-mldp-mdt-interface")
    {
        is_create_mldp_mdt_interface = value;
        is_create_mldp_mdt_interface.value_namespace = name_space;
        is_create_mldp_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-create-rsvp-te-mdt-interface")
    {
        is_create_rsvp_te_mdt_interface = value;
        is_create_rsvp_te_mdt_interface.value_namespace = name_space;
        is_create_rsvp_te_mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default-granges")
    {
        is_default_granges = value;
        is_default_granges.value_namespace = name_space;
        is_default_granges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-gin-b-and-mdt-owner")
    {
        is_gin_b_and_mdt_owner = value;
        is_gin_b_and_mdt_owner.value_namespace = name_space;
        is_gin_b_and_mdt_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-in-b-and-mdt-owner")
    {
        is_in_b_and_mdt_owner = value;
        is_in_b_and_mdt_owner.value_namespace = name_space;
        is_in_b_and_mdt_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ir-mdt-owner")
    {
        is_ir_mdt_owner = value;
        is_ir_mdt_owner.value_namespace = name_space;
        is_ir_mdt_owner.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-m-host-publish-pending")
    {
        is_m_host_publish_pending = value;
        is_m_host_publish_pending.value_namespace = name_space;
        is_m_host_publish_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mdt-owner")
    {
        is_mdt_owner = value;
        is_mdt_owner.value_namespace = name_space;
        is_mdt_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mldp-mdt-owner")
    {
        is_mldp_mdt_owner = value;
        is_mldp_mdt_owner.value_namespace = name_space;
        is_mldp_mdt_owner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mrib-register")
    {
        is_mrib_register = value;
        is_mrib_register.value_namespace = name_space;
        is_mrib_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multicast-rib-registration")
    {
        is_multicast_rib_registration = value;
        is_multicast_rib_registration.value_namespace = name_space;
        is_multicast_rib_registration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pim-nsf-rib-converge-received")
    {
        is_pim_nsf_rib_converge_received = value;
        is_pim_nsf_rib_converge_received.value_namespace = name_space;
        is_pim_nsf_rib_converge_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pim-nsf-rib-converged")
    {
        is_pim_nsf_rib_converged = value;
        is_pim_nsf_rib_converged.value_namespace = name_space;
        is_pim_nsf_rib_converged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-redistribution-reset")
    {
        is_redistribution_reset = value;
        is_redistribution_reset.value_namespace = name_space;
        is_redistribution_reset.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-routing-enabled")
    {
        is_routing_enabled = value;
        is_routing_enabled.value_namespace = name_space;
        is_routing_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rsvp-te-mdt-owner")
    {
        is_rsvp_te_mdt_owner = value;
        is_rsvp_te_mdt_owner.value_namespace = name_space;
        is_rsvp_te_mdt_owner.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-udp-socket-bind")
    {
        is_udp_socket_bind = value;
        is_udp_socket_bind.value_namespace = name_space;
        is_udp_socket_bind.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-udp-socket-bind-required")
    {
        is_udp_socket_bind_required = value;
        is_udp_socket_bind_required.value_namespace = name_space;
        is_udp_socket_bind_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-unicast-rib-registration")
    {
        is_unicast_rib_registration = value;
        is_unicast_rib_registration.value_namespace = name_space;
        is_unicast_rib_registration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-mdt-aggregation")
    {
        maximum_mdt_aggregation = value;
        maximum_mdt_aggregation.value_namespace = name_space;
        maximum_mdt_aggregation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-data-announce-interval")
    {
        mdt_data_announce_interval = value;
        mdt_data_announce_interval.value_namespace = name_space;
        mdt_data_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-data-switchover-interval")
    {
        mdt_data_switchover_interval = value;
        mdt_data_switchover_interval.value_namespace = name_space;
        mdt_data_switchover_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-default-group")
    {
        mdt_default_group = value;
        mdt_default_group.value_namespace = name_space;
        mdt_default_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-gre-remote-rpf-identifier")
    {
        mdt_gre_remote_rpf_identifier = value;
        mdt_gre_remote_rpf_identifier.value_namespace = name_space;
        mdt_gre_remote_rpf_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-gre-rpf-identifier")
    {
        mdt_gre_rpf_identifier = value;
        mdt_gre_rpf_identifier.value_namespace = name_space;
        mdt_gre_rpf_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-interface")
    {
        mdt_interface = value;
        mdt_interface.value_namespace = name_space;
        mdt_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-mtu")
    {
        mdt_mtu = value;
        mdt_mtu.value_namespace = name_space;
        mdt_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-neighbor-filter-name")
    {
        mdt_neighbor_filter_name = value;
        mdt_neighbor_filter_name.value_namespace = name_space;
        mdt_neighbor_filter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-partitioned-ir-control-identifier")
    {
        mdt_partitioned_ir_control_identifier = value;
        mdt_partitioned_ir_control_identifier.value_namespace = name_space;
        mdt_partitioned_ir_control_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mdt-partitioned-mdt-control-identifier")
    {
        mdt_partitioned_mdt_control_identifier = value;
        mdt_partitioned_mdt_control_identifier.value_namespace = name_space;
        mdt_partitioned_mdt_control_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mhost-default-interface-config")
    {
        mhost_default_interface_config = value;
        mhost_default_interface_config.value_namespace = name_space;
        mhost_default_interface_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mhost-interface")
    {
        mhost_interface = value;
        mhost_interface.value_namespace = name_space;
        mhost_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-auto-rp-announce-tree-added")
    {
        mldp_auto_rp_announce_tree_added = value;
        mldp_auto_rp_announce_tree_added.value_namespace = name_space;
        mldp_auto_rp_announce_tree_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-auto-rp-discovery-tree-added")
    {
        mldp_auto_rp_discovery_tree_added = value;
        mldp_auto_rp_discovery_tree_added.value_namespace = name_space;
        mldp_auto_rp_discovery_tree_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-bsr-control-tree-added")
    {
        mldp_bsr_control_tree_added = value;
        mldp_bsr_control_tree_added.value_namespace = name_space;
        mldp_bsr_control_tree_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-control-head-lsm-identifier")
    {
        mldp_control_head_lsm_identifier = value;
        mldp_control_head_lsm_identifier.value_namespace = name_space;
        mldp_control_head_lsm_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-head-local-label")
    {
        mldp_head_local_label = value;
        mldp_head_local_label.value_namespace = name_space;
        mldp_head_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-head-lsm-identifier")
    {
        mldp_head_lsm_identifier = value;
        mldp_head_lsm_identifier.value_namespace = name_space;
        mldp_head_lsm_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-maximum-mdt-aggregation")
    {
        mldp_maximum_mdt_aggregation = value;
        mldp_maximum_mdt_aggregation.value_namespace = name_space;
        mldp_maximum_mdt_aggregation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-mdt-data-announce-interval")
    {
        mldp_mdt_data_announce_interval = value;
        mldp_mdt_data_announce_interval.value_namespace = name_space;
        mldp_mdt_data_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-mdt-data-switchover-interval")
    {
        mldp_mdt_data_switchover_interval = value;
        mldp_mdt_data_switchover_interval.value_namespace = name_space;
        mldp_mdt_data_switchover_interval.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mldp-mdt-name")
    {
        mldp_mdt_name = value;
        mldp_mdt_name.value_namespace = name_space;
        mldp_mdt_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-mdt-remote-rpf-identifier")
    {
        mldp_mdt_remote_rpf_identifier = value;
        mldp_mdt_remote_rpf_identifier.value_namespace = name_space;
        mldp_mdt_remote_rpf_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-mdt-rpf-identifier")
    {
        mldp_mdt_rpf_identifier = value;
        mldp_mdt_rpf_identifier.value_namespace = name_space;
        mldp_mdt_rpf_identifier.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "mldp-partitioned-mdt-configured")
    {
        mldp_partitioned_mdt_configured = value;
        mldp_partitioned_mdt_configured.value_namespace = name_space;
        mldp_partitioned_mdt_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-partitioned-mdt-identifier")
    {
        mldp_partitioned_mdt_identifier = value;
        mldp_partitioned_mdt_identifier.value_namespace = name_space;
        mldp_partitioned_mdt_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-remote-head-lsm-identifier")
    {
        mldp_remote_head_lsm_identifier = value;
        mldp_remote_head_lsm_identifier.value_namespace = name_space;
        mldp_remote_head_lsm_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-remote-partitioned-mdt-configured")
    {
        mldp_remote_partitioned_mdt_configured = value;
        mldp_remote_partitioned_mdt_configured.value_namespace = name_space;
        mldp_remote_partitioned_mdt_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-root-address")
    {
        mldp_root_address.append(value);
    }
    if(value_path == "mldp-root-count")
    {
        mldp_root_count = value;
        mldp_root_count.value_namespace = name_space;
        mldp_root_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "murib-id")
    {
        murib_id = value;
        murib_id.value_namespace = name_space;
        murib_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
        neighbor_filter_name.value_namespace = name_space;
        neighbor_filter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-default-vrf-count-on-socket")
    {
        non_default_vrf_count_on_socket = value;
        non_default_vrf_count_on_socket.value_namespace = name_space;
        non_default_vrf_count_on_socket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "organization-unique-identifier")
    {
        organization_unique_identifier = value;
        organization_unique_identifier.value_namespace = name_space;
        organization_unique_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mpte-li-drop")
    {
        p2mpte_li_drop = value;
        p2mpte_li_drop.value_namespace = name_space;
        p2mpte_li_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribution-reset-count")
    {
        redistribution_reset_count = value;
        redistribution_reset_count.value_namespace = name_space;
        redistribution_reset_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-table-id")
    {
        remote_table_id = value;
        remote_table_id.value_namespace = name_space;
        remote_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
        route_distinguisher.value_namespace = name_space;
        route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-id")
    {
        rpf_id = value;
        rpf_id.value_namespace = name_space;
        rpf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-policy-name")
    {
        rpf_policy_name = value;
        rpf_policy_name.value_namespace = name_space;
        rpf_policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-maximum-mdt-aggregation")
    {
        rsvp_te_maximum_mdt_aggregation = value;
        rsvp_te_maximum_mdt_aggregation.value_namespace = name_space;
        rsvp_te_maximum_mdt_aggregation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-mdt-data-announce-interval")
    {
        rsvp_te_mdt_data_announce_interval = value;
        rsvp_te_mdt_data_announce_interval.value_namespace = name_space;
        rsvp_te_mdt_data_announce_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-mdt-data-switchover-interval")
    {
        rsvp_te_mdt_data_switchover_interval = value;
        rsvp_te_mdt_data_switchover_interval.value_namespace = name_space;
        rsvp_te_mdt_data_switchover_interval.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "rsvp-te-mdt-name")
    {
        rsvp_te_mdt_name = value;
        rsvp_te_mdt_name.value_namespace = name_space;
        rsvp_te_mdt_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-mdt-rpf-identifier")
    {
        rsvp_te_mdt_rpf_identifier = value;
        rsvp_te_mdt_rpf_identifier.value_namespace = name_space;
        rsvp_te_mdt_rpf_identifier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-mdt-static-p2mp-count")
    {
        rsvp_te_mdt_static_p2mp_count = value;
        rsvp_te_mdt_static_p2mp_count.value_namespace = name_space;
        rsvp_te_mdt_static_p2mp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rump-enabled")
    {
        rump_enabled = value;
        rump_enabled.value_namespace = name_space;
        rump_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-expiry-time")
    {
        sg_expiry_time = value;
        sg_expiry_time.value_namespace = name_space;
        sg_expiry_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-expiry-timer-configured")
    {
        sg_expiry_timer_configured = value;
        sg_expiry_timer_configured.value_namespace = name_space;
        sg_expiry_timer_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-expiry-timer-sg-list")
    {
        sg_expiry_timer_sg_list = value;
        sg_expiry_timer_sg_list.value_namespace = name_space;
        sg_expiry_timer_sg_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-rd-present")
    {
        stale_rd_present = value;
        stale_rd_present.value_namespace = name_space;
        stale_rd_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-pim-data-mdt-tlv")
    {
        suppress_pim_data_mdt_tlv = value;
        suppress_pim_data_mdt_tlv.value_namespace = name_space;
        suppress_pim_data_mdt_tlv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-shared-tree-join")
    {
        suppress_shared_tree_join = value;
        suppress_shared_tree_join.value_namespace = name_space;
        suppress_shared_tree_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-count")
    {
        table_count = value;
        table_count.value_namespace = name_space;
        table_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "umh")
    {
        umh = value;
        umh.value_namespace = name_space;
        umh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-rd-present")
    {
        valid_rd_present = value;
        valid_rd_present.value_namespace = name_space;
        valid_rd_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-index")
    {
        vpn_index = value;
        vpn_index.value_namespace = name_space;
        vpn_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-table-count")
    {
        active_table_count.yfilter = yfilter;
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
    if(value_path == "anycast-rp-configured")
    {
        anycast_rp_configured.yfilter = yfilter;
    }
    if(value_path == "anycast-rp-policy-name")
    {
        anycast_rp_policy_name.yfilter = yfilter;
    }
    if(value_path == "bgp-auto-discovery-configured")
    {
        bgp_auto_discovery_configured.yfilter = yfilter;
    }
    if(value_path == "bgp-auto-discovery-type")
    {
        bgp_auto_discovery_type.yfilter = yfilter;
    }
    if(value_path == "bgp-i-pmsi-added")
    {
        bgp_i_pmsi_added.yfilter = yfilter;
    }
    if(value_path == "bgp-remote-address")
    {
        bgp_remote_address.yfilter = yfilter;
    }
    if(value_path == "bgp-remote-interface")
    {
        bgp_remote_interface.yfilter = yfilter;
    }
    if(value_path == "bgp-remote-interface-name")
    {
        bgp_remote_interface_name.yfilter = yfilter;
    }
    if(value_path == "bgp-remote-on")
    {
        bgp_remote_on.yfilter = yfilter;
    }
    if(value_path == "bgp-remote-state")
    {
        bgp_remote_state.yfilter = yfilter;
    }
    if(value_path == "bgp-source-active-announce")
    {
        bgp_source_active_announce.yfilter = yfilter;
    }
    if(value_path == "gin-b-and-mdt-data-announce-interval")
    {
        gin_b_and_mdt_data_announce_interval.yfilter = yfilter;
    }
    if(value_path == "gin-b-and-mdt-data-switchover-interval")
    {
        gin_b_and_mdt_data_switchover_interval.yfilter = yfilter;
    }
    if(value_path == "gin-b-and-mdt-interface")
    {
        gin_b_and_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "gin-b-and-mdt-mtu")
    {
        gin_b_and_mdt_mtu.yfilter = yfilter;
    }
    if(value_path == "gin-b-and-mdt-name")
    {
        gin_b_and_mdt_name.yfilter = yfilter;
    }
    if(value_path == "gin-b-and-mdt-rpf-identifier")
    {
        gin_b_and_mdt_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "gin-band-maximum-mdt-aggregation")
    {
        gin_band_maximum_mdt_aggregation.yfilter = yfilter;
    }
    if(value_path == "in-b-and-mdt-data-announce-interval")
    {
        in_b_and_mdt_data_announce_interval.yfilter = yfilter;
    }
    if(value_path == "in-b-and-mdt-data-switchover-interval")
    {
        in_b_and_mdt_data_switchover_interval.yfilter = yfilter;
    }
    if(value_path == "in-b-and-mdt-interface")
    {
        in_b_and_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "in-b-and-mdt-mtu")
    {
        in_b_and_mdt_mtu.yfilter = yfilter;
    }
    if(value_path == "in-b-and-mdt-name")
    {
        in_b_and_mdt_name.yfilter = yfilter;
    }
    if(value_path == "in-b-and-mdt-rpf-identifier")
    {
        in_b_and_mdt_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "in-band-maximum-mdt-aggregation")
    {
        in_band_maximum_mdt_aggregation.yfilter = yfilter;
    }
    if(value_path == "in-band-signaling-local-enabled")
    {
        in_band_signaling_local_enabled.yfilter = yfilter;
    }
    if(value_path == "in-band-signaling-remote-enabled")
    {
        in_band_signaling_remote_enabled.yfilter = yfilter;
    }
    if(value_path == "inter-autonomous-system-enabled")
    {
        inter_autonomous_system_enabled.yfilter = yfilter;
    }
    if(value_path == "ir-maximum-mdt-aggregation")
    {
        ir_maximum_mdt_aggregation.yfilter = yfilter;
    }
    if(value_path == "ir-mdt-data-announce-interval")
    {
        ir_mdt_data_announce_interval.yfilter = yfilter;
    }
    if(value_path == "ir-mdt-data-switchover-interval")
    {
        ir_mdt_data_switchover_interval.yfilter = yfilter;
    }
    if(value_path == "ir-mdt-interface")
    {
        ir_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "ir-mdt-mtu")
    {
        ir_mdt_mtu.yfilter = yfilter;
    }
    if(value_path == "ir-mdt-name")
    {
        ir_mdt_name.yfilter = yfilter;
    }
    if(value_path == "ir-mdt-rpf-identifier")
    {
        ir_mdt_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "ir-mdt-tail-label")
    {
        ir_mdt_tail_label.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "is-active-ital")
    {
        is_active_ital.yfilter = yfilter;
    }
    if(value_path == "is-all-interface-disable-operation")
    {
        is_all_interface_disable_operation.yfilter = yfilter;
    }
    if(value_path == "is-auto-rp-listen-enabled")
    {
        is_auto_rp_listen_enabled.yfilter = yfilter;
    }
    if(value_path == "is-auto-rp-listen-sock-add")
    {
        is_auto_rp_listen_sock_add.yfilter = yfilter;
    }
    if(value_path == "is-create-gin-b-and-mdt-interface")
    {
        is_create_gin_b_and_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "is-create-in-b-and-mdt-interface")
    {
        is_create_in_b_and_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "is-create-ir-mdt-interface")
    {
        is_create_ir_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "is-create-mdt-interface")
    {
        is_create_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "is-create-mldp-mdt-interface")
    {
        is_create_mldp_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "is-create-rsvp-te-mdt-interface")
    {
        is_create_rsvp_te_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "is-default-granges")
    {
        is_default_granges.yfilter = yfilter;
    }
    if(value_path == "is-gin-b-and-mdt-owner")
    {
        is_gin_b_and_mdt_owner.yfilter = yfilter;
    }
    if(value_path == "is-in-b-and-mdt-owner")
    {
        is_in_b_and_mdt_owner.yfilter = yfilter;
    }
    if(value_path == "is-ir-mdt-owner")
    {
        is_ir_mdt_owner.yfilter = yfilter;
    }
    if(value_path == "is-lpts-socket-add-required")
    {
        is_lpts_socket_add_required.yfilter = yfilter;
    }
    if(value_path == "is-lpts-socket-added")
    {
        is_lpts_socket_added.yfilter = yfilter;
    }
    if(value_path == "is-m-host-publish-pending")
    {
        is_m_host_publish_pending.yfilter = yfilter;
    }
    if(value_path == "is-mdt-owner")
    {
        is_mdt_owner.yfilter = yfilter;
    }
    if(value_path == "is-mldp-mdt-owner")
    {
        is_mldp_mdt_owner.yfilter = yfilter;
    }
    if(value_path == "is-mrib-register")
    {
        is_mrib_register.yfilter = yfilter;
    }
    if(value_path == "is-multicast-rib-registration")
    {
        is_multicast_rib_registration.yfilter = yfilter;
    }
    if(value_path == "is-pim-nsf-rib-converge-received")
    {
        is_pim_nsf_rib_converge_received.yfilter = yfilter;
    }
    if(value_path == "is-pim-nsf-rib-converged")
    {
        is_pim_nsf_rib_converged.yfilter = yfilter;
    }
    if(value_path == "is-redistribution-reset")
    {
        is_redistribution_reset.yfilter = yfilter;
    }
    if(value_path == "is-register-injection-lpts-socket-add-required")
    {
        is_register_injection_lpts_socket_add_required.yfilter = yfilter;
    }
    if(value_path == "is-register-injection-lpts-socket-added")
    {
        is_register_injection_lpts_socket_added.yfilter = yfilter;
    }
    if(value_path == "is-register-injection-socket-add-required")
    {
        is_register_injection_socket_add_required.yfilter = yfilter;
    }
    if(value_path == "is-register-injection-socket-added")
    {
        is_register_injection_socket_added.yfilter = yfilter;
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
    if(value_path == "is-routing-enabled")
    {
        is_routing_enabled.yfilter = yfilter;
    }
    if(value_path == "is-rsvp-te-mdt-owner")
    {
        is_rsvp_te_mdt_owner.yfilter = yfilter;
    }
    if(value_path == "is-socket-add-required")
    {
        is_socket_add_required.yfilter = yfilter;
    }
    if(value_path == "is-socket-added")
    {
        is_socket_added.yfilter = yfilter;
    }
    if(value_path == "is-udp-socket-add-required")
    {
        is_udp_socket_add_required.yfilter = yfilter;
    }
    if(value_path == "is-udp-socket-added")
    {
        is_udp_socket_added.yfilter = yfilter;
    }
    if(value_path == "is-udp-socket-bind")
    {
        is_udp_socket_bind.yfilter = yfilter;
    }
    if(value_path == "is-udp-socket-bind-required")
    {
        is_udp_socket_bind_required.yfilter = yfilter;
    }
    if(value_path == "is-unicast-rib-registration")
    {
        is_unicast_rib_registration.yfilter = yfilter;
    }
    if(value_path == "maximum-mdt-aggregation")
    {
        maximum_mdt_aggregation.yfilter = yfilter;
    }
    if(value_path == "mdt-data-announce-interval")
    {
        mdt_data_announce_interval.yfilter = yfilter;
    }
    if(value_path == "mdt-data-switchover-interval")
    {
        mdt_data_switchover_interval.yfilter = yfilter;
    }
    if(value_path == "mdt-default-group")
    {
        mdt_default_group.yfilter = yfilter;
    }
    if(value_path == "mdt-gre-remote-rpf-identifier")
    {
        mdt_gre_remote_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "mdt-gre-rpf-identifier")
    {
        mdt_gre_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "mdt-interface")
    {
        mdt_interface.yfilter = yfilter;
    }
    if(value_path == "mdt-mtu")
    {
        mdt_mtu.yfilter = yfilter;
    }
    if(value_path == "mdt-neighbor-filter-name")
    {
        mdt_neighbor_filter_name.yfilter = yfilter;
    }
    if(value_path == "mdt-partitioned-ir-control-identifier")
    {
        mdt_partitioned_ir_control_identifier.yfilter = yfilter;
    }
    if(value_path == "mdt-partitioned-mdt-control-identifier")
    {
        mdt_partitioned_mdt_control_identifier.yfilter = yfilter;
    }
    if(value_path == "mhost-default-interface-config")
    {
        mhost_default_interface_config.yfilter = yfilter;
    }
    if(value_path == "mhost-interface")
    {
        mhost_interface.yfilter = yfilter;
    }
    if(value_path == "mldp-auto-rp-announce-tree-added")
    {
        mldp_auto_rp_announce_tree_added.yfilter = yfilter;
    }
    if(value_path == "mldp-auto-rp-discovery-tree-added")
    {
        mldp_auto_rp_discovery_tree_added.yfilter = yfilter;
    }
    if(value_path == "mldp-bsr-control-tree-added")
    {
        mldp_bsr_control_tree_added.yfilter = yfilter;
    }
    if(value_path == "mldp-control-head-lsm-identifier")
    {
        mldp_control_head_lsm_identifier.yfilter = yfilter;
    }
    if(value_path == "mldp-head-local-label")
    {
        mldp_head_local_label.yfilter = yfilter;
    }
    if(value_path == "mldp-head-lsm-identifier")
    {
        mldp_head_lsm_identifier.yfilter = yfilter;
    }
    if(value_path == "mldp-maximum-mdt-aggregation")
    {
        mldp_maximum_mdt_aggregation.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-data-announce-interval")
    {
        mldp_mdt_data_announce_interval.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-data-switchover-interval")
    {
        mldp_mdt_data_switchover_interval.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-interface")
    {
        mldp_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-mtu")
    {
        mldp_mdt_mtu.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-name")
    {
        mldp_mdt_name.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-remote-rpf-identifier")
    {
        mldp_mdt_remote_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "mldp-mdt-rpf-identifier")
    {
        mldp_mdt_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "mldp-partioned-mp2m-ptree")
    {
        mldp_partioned_mp2m_ptree.yfilter = yfilter;
    }
    if(value_path == "mldp-partitioned-head-lsm-identifier")
    {
        mldp_partitioned_head_lsm_identifier.yfilter = yfilter;
    }
    if(value_path == "mldp-partitioned-mdt-configured")
    {
        mldp_partitioned_mdt_configured.yfilter = yfilter;
    }
    if(value_path == "mldp-partitioned-mdt-identifier")
    {
        mldp_partitioned_mdt_identifier.yfilter = yfilter;
    }
    if(value_path == "mldp-remote-head-lsm-identifier")
    {
        mldp_remote_head_lsm_identifier.yfilter = yfilter;
    }
    if(value_path == "mldp-remote-partitioned-mdt-configured")
    {
        mldp_remote_partitioned_mdt_configured.yfilter = yfilter;
    }
    if(value_path == "mldp-root-address")
    {
        mldp_root_address.yfilter = yfilter;
    }
    if(value_path == "mldp-root-count")
    {
        mldp_root_count.yfilter = yfilter;
    }
    if(value_path == "murib-id")
    {
        murib_id.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name.yfilter = yfilter;
    }
    if(value_path == "non-default-vrf-count-on-socket")
    {
        non_default_vrf_count_on_socket.yfilter = yfilter;
    }
    if(value_path == "organization-unique-identifier")
    {
        organization_unique_identifier.yfilter = yfilter;
    }
    if(value_path == "p2mpte-li-drop")
    {
        p2mpte_li_drop.yfilter = yfilter;
    }
    if(value_path == "redistribution-reset-count")
    {
        redistribution_reset_count.yfilter = yfilter;
    }
    if(value_path == "remote-table-id")
    {
        remote_table_id.yfilter = yfilter;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher.yfilter = yfilter;
    }
    if(value_path == "rpf-id")
    {
        rpf_id.yfilter = yfilter;
    }
    if(value_path == "rpf-policy-name")
    {
        rpf_policy_name.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-maximum-mdt-aggregation")
    {
        rsvp_te_maximum_mdt_aggregation.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-mdt-data-announce-interval")
    {
        rsvp_te_mdt_data_announce_interval.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-mdt-data-switchover-interval")
    {
        rsvp_te_mdt_data_switchover_interval.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-mdt-interface")
    {
        rsvp_te_mdt_interface.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-mdt-mtu")
    {
        rsvp_te_mdt_mtu.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-mdt-name")
    {
        rsvp_te_mdt_name.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-mdt-rpf-identifier")
    {
        rsvp_te_mdt_rpf_identifier.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-mdt-static-p2mp-count")
    {
        rsvp_te_mdt_static_p2mp_count.yfilter = yfilter;
    }
    if(value_path == "rump-enabled")
    {
        rump_enabled.yfilter = yfilter;
    }
    if(value_path == "sg-expiry-time")
    {
        sg_expiry_time.yfilter = yfilter;
    }
    if(value_path == "sg-expiry-timer-configured")
    {
        sg_expiry_timer_configured.yfilter = yfilter;
    }
    if(value_path == "sg-expiry-timer-sg-list")
    {
        sg_expiry_timer_sg_list.yfilter = yfilter;
    }
    if(value_path == "stale-rd-present")
    {
        stale_rd_present.yfilter = yfilter;
    }
    if(value_path == "suppress-pim-data-mdt-tlv")
    {
        suppress_pim_data_mdt_tlv.yfilter = yfilter;
    }
    if(value_path == "suppress-shared-tree-join")
    {
        suppress_shared_tree_join.yfilter = yfilter;
    }
    if(value_path == "table-count")
    {
        table_count.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "umh")
    {
        umh.yfilter = yfilter;
    }
    if(value_path == "valid-rd-present")
    {
        valid_rd_present.yfilter = yfilter;
    }
    if(value_path == "vpn-index")
    {
        vpn_index.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anycast-rp-range" || name == "export-route-target" || name == "import-route-target" || name == "remote-default-group" || name == "rpf-default-table" || name == "active-table-count" || name == "allow-rp-configured" || name == "allow-rp-group-list" || name == "allow-rp-rp-list" || name == "anycast-rp-configured" || name == "anycast-rp-policy-name" || name == "bgp-auto-discovery-configured" || name == "bgp-auto-discovery-type" || name == "bgp-i-pmsi-added" || name == "bgp-remote-address" || name == "bgp-remote-interface" || name == "bgp-remote-interface-name" || name == "bgp-remote-on" || name == "bgp-remote-state" || name == "bgp-source-active-announce" || name == "gin-b-and-mdt-data-announce-interval" || name == "gin-b-and-mdt-data-switchover-interval" || name == "gin-b-and-mdt-interface" || name == "gin-b-and-mdt-mtu" || name == "gin-b-and-mdt-name" || name == "gin-b-and-mdt-rpf-identifier" || name == "gin-band-maximum-mdt-aggregation" || name == "in-b-and-mdt-data-announce-interval" || name == "in-b-and-mdt-data-switchover-interval" || name == "in-b-and-mdt-interface" || name == "in-b-and-mdt-mtu" || name == "in-b-and-mdt-name" || name == "in-b-and-mdt-rpf-identifier" || name == "in-band-maximum-mdt-aggregation" || name == "in-band-signaling-local-enabled" || name == "in-band-signaling-remote-enabled" || name == "inter-autonomous-system-enabled" || name == "ir-maximum-mdt-aggregation" || name == "ir-mdt-data-announce-interval" || name == "ir-mdt-data-switchover-interval" || name == "ir-mdt-interface" || name == "ir-mdt-mtu" || name == "ir-mdt-name" || name == "ir-mdt-rpf-identifier" || name == "ir-mdt-tail-label" || name == "is-active" || name == "is-active-ital" || name == "is-all-interface-disable-operation" || name == "is-auto-rp-listen-enabled" || name == "is-auto-rp-listen-sock-add" || name == "is-create-gin-b-and-mdt-interface" || name == "is-create-in-b-and-mdt-interface" || name == "is-create-ir-mdt-interface" || name == "is-create-mdt-interface" || name == "is-create-mldp-mdt-interface" || name == "is-create-rsvp-te-mdt-interface" || name == "is-default-granges" || name == "is-gin-b-and-mdt-owner" || name == "is-in-b-and-mdt-owner" || name == "is-ir-mdt-owner" || name == "is-lpts-socket-add-required" || name == "is-lpts-socket-added" || name == "is-m-host-publish-pending" || name == "is-mdt-owner" || name == "is-mldp-mdt-owner" || name == "is-mrib-register" || name == "is-multicast-rib-registration" || name == "is-pim-nsf-rib-converge-received" || name == "is-pim-nsf-rib-converged" || name == "is-redistribution-reset" || name == "is-register-injection-lpts-socket-add-required" || name == "is-register-injection-lpts-socket-added" || name == "is-register-injection-socket-add-required" || name == "is-register-injection-socket-added" || name == "is-rib-multipath-enabled" || name == "is-rib-multipath-interface-hash" || name == "is-rib-multipath-source-hash" || name == "is-rib-multipath-source-next-hop-hash" || name == "is-routing-enabled" || name == "is-rsvp-te-mdt-owner" || name == "is-socket-add-required" || name == "is-socket-added" || name == "is-udp-socket-add-required" || name == "is-udp-socket-added" || name == "is-udp-socket-bind" || name == "is-udp-socket-bind-required" || name == "is-unicast-rib-registration" || name == "maximum-mdt-aggregation" || name == "mdt-data-announce-interval" || name == "mdt-data-switchover-interval" || name == "mdt-default-group" || name == "mdt-gre-remote-rpf-identifier" || name == "mdt-gre-rpf-identifier" || name == "mdt-interface" || name == "mdt-mtu" || name == "mdt-neighbor-filter-name" || name == "mdt-partitioned-ir-control-identifier" || name == "mdt-partitioned-mdt-control-identifier" || name == "mhost-default-interface-config" || name == "mhost-interface" || name == "mldp-auto-rp-announce-tree-added" || name == "mldp-auto-rp-discovery-tree-added" || name == "mldp-bsr-control-tree-added" || name == "mldp-control-head-lsm-identifier" || name == "mldp-head-local-label" || name == "mldp-head-lsm-identifier" || name == "mldp-maximum-mdt-aggregation" || name == "mldp-mdt-data-announce-interval" || name == "mldp-mdt-data-switchover-interval" || name == "mldp-mdt-interface" || name == "mldp-mdt-mtu" || name == "mldp-mdt-name" || name == "mldp-mdt-remote-rpf-identifier" || name == "mldp-mdt-rpf-identifier" || name == "mldp-partioned-mp2m-ptree" || name == "mldp-partitioned-head-lsm-identifier" || name == "mldp-partitioned-mdt-configured" || name == "mldp-partitioned-mdt-identifier" || name == "mldp-remote-head-lsm-identifier" || name == "mldp-remote-partitioned-mdt-configured" || name == "mldp-root-address" || name == "mldp-root-count" || name == "murib-id" || name == "neighbor-filter-name" || name == "non-default-vrf-count-on-socket" || name == "organization-unique-identifier" || name == "p2mpte-li-drop" || name == "redistribution-reset-count" || name == "remote-table-id" || name == "route-distinguisher" || name == "rpf-id" || name == "rpf-policy-name" || name == "rsvp-te-maximum-mdt-aggregation" || name == "rsvp-te-mdt-data-announce-interval" || name == "rsvp-te-mdt-data-switchover-interval" || name == "rsvp-te-mdt-interface" || name == "rsvp-te-mdt-mtu" || name == "rsvp-te-mdt-name" || name == "rsvp-te-mdt-rpf-identifier" || name == "rsvp-te-mdt-static-p2mp-count" || name == "rump-enabled" || name == "sg-expiry-time" || name == "sg-expiry-timer-configured" || name == "sg-expiry-timer-sg-list" || name == "stale-rd-present" || name == "suppress-pim-data-mdt-tlv" || name == "suppress-shared-tree-join" || name == "table-count" || name == "table-id" || name == "umh" || name == "valid-rd-present" || name == "vpn-index" || name == "vrf-id")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Context::RemoteDefaultGroup::RemoteDefaultGroup()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "remote-default-group"; yang_parent_name = "context";
}

Pim::Standby::DefaultContext::Context::RemoteDefaultGroup::~RemoteDefaultGroup()
{
}

bool Pim::Standby::DefaultContext::Context::RemoteDefaultGroup::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Context::RemoteDefaultGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Context::RemoteDefaultGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-default-group";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Context::RemoteDefaultGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Context::RemoteDefaultGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Context::RemoteDefaultGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::Context::RemoteDefaultGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::Context::RemoteDefaultGroup::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::Context::RemoteDefaultGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Context::RpfDefaultTable::RpfDefaultTable()
    :
    afi{YType::uint32, "afi"},
    is_active{YType::boolean, "is-active"},
    is_ital_registration_done{YType::boolean, "is-ital-registration-done"},
    is_rib_convergence{YType::boolean, "is-rib-convergence"},
    is_rib_convergence_received{YType::boolean, "is-rib-convergence-received"},
    is_rib_registration_done{YType::boolean, "is-rib-registration-done"},
    rpf_registrations{YType::uint32, "rpf-registrations"},
    safi{YType::uint32, "safi"},
    table_id{YType::uint32, "table-id"},
    table_name{YType::str, "table-name"},
    vrf_id{YType::uint32, "vrf-id"}
{
    yang_name = "rpf-default-table"; yang_parent_name = "context";
}

Pim::Standby::DefaultContext::Context::RpfDefaultTable::~RpfDefaultTable()
{
}

bool Pim::Standby::DefaultContext::Context::RpfDefaultTable::has_data() const
{
    return afi.is_set
	|| is_active.is_set
	|| is_ital_registration_done.is_set
	|| is_rib_convergence.is_set
	|| is_rib_convergence_received.is_set
	|| is_rib_registration_done.is_set
	|| rpf_registrations.is_set
	|| safi.is_set
	|| table_id.is_set
	|| table_name.is_set
	|| vrf_id.is_set;
}

bool Pim::Standby::DefaultContext::Context::RpfDefaultTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(is_active.yfilter)
	|| ydk::is_set(is_ital_registration_done.yfilter)
	|| ydk::is_set(is_rib_convergence.yfilter)
	|| ydk::is_set(is_rib_convergence_received.yfilter)
	|| ydk::is_set(is_rib_registration_done.yfilter)
	|| ydk::is_set(rpf_registrations.yfilter)
	|| ydk::is_set(safi.yfilter)
	|| ydk::is_set(table_id.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(vrf_id.yfilter);
}

std::string Pim::Standby::DefaultContext::Context::RpfDefaultTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-default-table";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Context::RpfDefaultTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (is_active.is_set || is_set(is_active.yfilter)) leaf_name_data.push_back(is_active.get_name_leafdata());
    if (is_ital_registration_done.is_set || is_set(is_ital_registration_done.yfilter)) leaf_name_data.push_back(is_ital_registration_done.get_name_leafdata());
    if (is_rib_convergence.is_set || is_set(is_rib_convergence.yfilter)) leaf_name_data.push_back(is_rib_convergence.get_name_leafdata());
    if (is_rib_convergence_received.is_set || is_set(is_rib_convergence_received.yfilter)) leaf_name_data.push_back(is_rib_convergence_received.get_name_leafdata());
    if (is_rib_registration_done.is_set || is_set(is_rib_registration_done.yfilter)) leaf_name_data.push_back(is_rib_registration_done.get_name_leafdata());
    if (rpf_registrations.is_set || is_set(rpf_registrations.yfilter)) leaf_name_data.push_back(rpf_registrations.get_name_leafdata());
    if (safi.is_set || is_set(safi.yfilter)) leaf_name_data.push_back(safi.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.yfilter)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Context::RpfDefaultTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Context::RpfDefaultTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::Context::RpfDefaultTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence = value;
        is_rib_convergence.value_namespace = name_space;
        is_rib_convergence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-convergence-received")
    {
        is_rib_convergence_received = value;
        is_rib_convergence_received.value_namespace = name_space;
        is_rib_convergence_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-registration-done")
    {
        is_rib_registration_done = value;
        is_rib_registration_done.value_namespace = name_space;
        is_rib_registration_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations = value;
        rpf_registrations.value_namespace = name_space;
        rpf_registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi")
    {
        safi = value;
        safi.value_namespace = name_space;
        safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-id")
    {
        table_id = value;
        table_id.value_namespace = name_space;
        table_id.value_namespace_prefix = name_space_prefix;
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
}

void Pim::Standby::DefaultContext::Context::RpfDefaultTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "is-active")
    {
        is_active.yfilter = yfilter;
    }
    if(value_path == "is-ital-registration-done")
    {
        is_ital_registration_done.yfilter = yfilter;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence.yfilter = yfilter;
    }
    if(value_path == "is-rib-convergence-received")
    {
        is_rib_convergence_received.yfilter = yfilter;
    }
    if(value_path == "is-rib-registration-done")
    {
        is_rib_registration_done.yfilter = yfilter;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations.yfilter = yfilter;
    }
    if(value_path == "safi")
    {
        safi.yfilter = yfilter;
    }
    if(value_path == "table-id")
    {
        table_id.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Context::RpfDefaultTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "afi" || name == "is-active" || name == "is-ital-registration-done" || name == "is-rib-convergence" || name == "is-rib-convergence-received" || name == "is-rib-registration-done" || name == "rpf-registrations" || name == "safi" || name == "table-id" || name == "table-name" || name == "vrf-id")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Context::ExportRouteTarget::ExportRouteTarget()
    :
    anycast_rp{YType::boolean, "anycast-rp"},
    anycast_rp_marked{YType::boolean, "anycast-rp-marked"},
    bgp_auto_discovery{YType::boolean, "bgp-auto-discovery"},
    configured{YType::boolean, "configured"},
    route_target{YType::str, "route-target"},
    segment_border{YType::boolean, "segment-border"},
    update_pending{YType::boolean, "update-pending"}
{
    yang_name = "export-route-target"; yang_parent_name = "context";
}

Pim::Standby::DefaultContext::Context::ExportRouteTarget::~ExportRouteTarget()
{
}

bool Pim::Standby::DefaultContext::Context::ExportRouteTarget::has_data() const
{
    return anycast_rp.is_set
	|| anycast_rp_marked.is_set
	|| bgp_auto_discovery.is_set
	|| configured.is_set
	|| route_target.is_set
	|| segment_border.is_set
	|| update_pending.is_set;
}

bool Pim::Standby::DefaultContext::Context::ExportRouteTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(anycast_rp.yfilter)
	|| ydk::is_set(anycast_rp_marked.yfilter)
	|| ydk::is_set(bgp_auto_discovery.yfilter)
	|| ydk::is_set(configured.yfilter)
	|| ydk::is_set(route_target.yfilter)
	|| ydk::is_set(segment_border.yfilter)
	|| ydk::is_set(update_pending.yfilter);
}

std::string Pim::Standby::DefaultContext::Context::ExportRouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "export-route-target";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Context::ExportRouteTarget::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anycast_rp.is_set || is_set(anycast_rp.yfilter)) leaf_name_data.push_back(anycast_rp.get_name_leafdata());
    if (anycast_rp_marked.is_set || is_set(anycast_rp_marked.yfilter)) leaf_name_data.push_back(anycast_rp_marked.get_name_leafdata());
    if (bgp_auto_discovery.is_set || is_set(bgp_auto_discovery.yfilter)) leaf_name_data.push_back(bgp_auto_discovery.get_name_leafdata());
    if (configured.is_set || is_set(configured.yfilter)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (route_target.is_set || is_set(route_target.yfilter)) leaf_name_data.push_back(route_target.get_name_leafdata());
    if (segment_border.is_set || is_set(segment_border.yfilter)) leaf_name_data.push_back(segment_border.get_name_leafdata());
    if (update_pending.is_set || is_set(update_pending.yfilter)) leaf_name_data.push_back(update_pending.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Context::ExportRouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Context::ExportRouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::Context::ExportRouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "bgp-auto-discovery")
    {
        bgp_auto_discovery = value;
        bgp_auto_discovery.value_namespace = name_space;
        bgp_auto_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured")
    {
        configured = value;
        configured.value_namespace = name_space;
        configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-target")
    {
        route_target = value;
        route_target.value_namespace = name_space;
        route_target.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-border")
    {
        segment_border = value;
        segment_border.value_namespace = name_space;
        segment_border.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-pending")
    {
        update_pending = value;
        update_pending.value_namespace = name_space;
        update_pending.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Context::ExportRouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "anycast-rp")
    {
        anycast_rp.yfilter = yfilter;
    }
    if(value_path == "anycast-rp-marked")
    {
        anycast_rp_marked.yfilter = yfilter;
    }
    if(value_path == "bgp-auto-discovery")
    {
        bgp_auto_discovery.yfilter = yfilter;
    }
    if(value_path == "configured")
    {
        configured.yfilter = yfilter;
    }
    if(value_path == "route-target")
    {
        route_target.yfilter = yfilter;
    }
    if(value_path == "segment-border")
    {
        segment_border.yfilter = yfilter;
    }
    if(value_path == "update-pending")
    {
        update_pending.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Context::ExportRouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anycast-rp" || name == "anycast-rp-marked" || name == "bgp-auto-discovery" || name == "configured" || name == "route-target" || name == "segment-border" || name == "update-pending")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Context::ImportRouteTarget::ImportRouteTarget()
    :
    anycast_rp{YType::boolean, "anycast-rp"},
    anycast_rp_marked{YType::boolean, "anycast-rp-marked"},
    bgp_auto_discovery{YType::boolean, "bgp-auto-discovery"},
    configured{YType::boolean, "configured"},
    route_target{YType::str, "route-target"},
    segment_border{YType::boolean, "segment-border"},
    update_pending{YType::boolean, "update-pending"}
{
    yang_name = "import-route-target"; yang_parent_name = "context";
}

Pim::Standby::DefaultContext::Context::ImportRouteTarget::~ImportRouteTarget()
{
}

bool Pim::Standby::DefaultContext::Context::ImportRouteTarget::has_data() const
{
    return anycast_rp.is_set
	|| anycast_rp_marked.is_set
	|| bgp_auto_discovery.is_set
	|| configured.is_set
	|| route_target.is_set
	|| segment_border.is_set
	|| update_pending.is_set;
}

bool Pim::Standby::DefaultContext::Context::ImportRouteTarget::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(anycast_rp.yfilter)
	|| ydk::is_set(anycast_rp_marked.yfilter)
	|| ydk::is_set(bgp_auto_discovery.yfilter)
	|| ydk::is_set(configured.yfilter)
	|| ydk::is_set(route_target.yfilter)
	|| ydk::is_set(segment_border.yfilter)
	|| ydk::is_set(update_pending.yfilter);
}

std::string Pim::Standby::DefaultContext::Context::ImportRouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "import-route-target";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Context::ImportRouteTarget::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anycast_rp.is_set || is_set(anycast_rp.yfilter)) leaf_name_data.push_back(anycast_rp.get_name_leafdata());
    if (anycast_rp_marked.is_set || is_set(anycast_rp_marked.yfilter)) leaf_name_data.push_back(anycast_rp_marked.get_name_leafdata());
    if (bgp_auto_discovery.is_set || is_set(bgp_auto_discovery.yfilter)) leaf_name_data.push_back(bgp_auto_discovery.get_name_leafdata());
    if (configured.is_set || is_set(configured.yfilter)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (route_target.is_set || is_set(route_target.yfilter)) leaf_name_data.push_back(route_target.get_name_leafdata());
    if (segment_border.is_set || is_set(segment_border.yfilter)) leaf_name_data.push_back(segment_border.get_name_leafdata());
    if (update_pending.is_set || is_set(update_pending.yfilter)) leaf_name_data.push_back(update_pending.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Context::ImportRouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Context::ImportRouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::Context::ImportRouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "bgp-auto-discovery")
    {
        bgp_auto_discovery = value;
        bgp_auto_discovery.value_namespace = name_space;
        bgp_auto_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured")
    {
        configured = value;
        configured.value_namespace = name_space;
        configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-target")
    {
        route_target = value;
        route_target.value_namespace = name_space;
        route_target.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "segment-border")
    {
        segment_border = value;
        segment_border.value_namespace = name_space;
        segment_border.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-pending")
    {
        update_pending = value;
        update_pending.value_namespace = name_space;
        update_pending.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Context::ImportRouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "anycast-rp")
    {
        anycast_rp.yfilter = yfilter;
    }
    if(value_path == "anycast-rp-marked")
    {
        anycast_rp_marked.yfilter = yfilter;
    }
    if(value_path == "bgp-auto-discovery")
    {
        bgp_auto_discovery.yfilter = yfilter;
    }
    if(value_path == "configured")
    {
        configured.yfilter = yfilter;
    }
    if(value_path == "route-target")
    {
        route_target.yfilter = yfilter;
    }
    if(value_path == "segment-border")
    {
        segment_border.yfilter = yfilter;
    }
    if(value_path == "update-pending")
    {
        update_pending.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Context::ImportRouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anycast-rp" || name == "anycast-rp-marked" || name == "bgp-auto-discovery" || name == "configured" || name == "route-target" || name == "segment-border" || name == "update-pending")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Context::AnycastRpRange::AnycastRpRange()
    :
    ancast_rp_marked{YType::boolean, "ancast-rp-marked"},
    prefix_length{YType::uint8, "prefix-length"}
    	,
    prefix(std::make_shared<Pim::Standby::DefaultContext::Context::AnycastRpRange::Prefix>())
{
    prefix->parent = this;

    yang_name = "anycast-rp-range"; yang_parent_name = "context";
}

Pim::Standby::DefaultContext::Context::AnycastRpRange::~AnycastRpRange()
{
}

bool Pim::Standby::DefaultContext::Context::AnycastRpRange::has_data() const
{
    return ancast_rp_marked.is_set
	|| prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Pim::Standby::DefaultContext::Context::AnycastRpRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ancast_rp_marked.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Pim::Standby::DefaultContext::Context::AnycastRpRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "anycast-rp-range";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Context::AnycastRpRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ancast_rp_marked.is_set || is_set(ancast_rp_marked.yfilter)) leaf_name_data.push_back(ancast_rp_marked.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Context::AnycastRpRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Standby::DefaultContext::Context::AnycastRpRange::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Context::AnycastRpRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Pim::Standby::DefaultContext::Context::AnycastRpRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ancast-rp-marked")
    {
        ancast_rp_marked = value;
        ancast_rp_marked.value_namespace = name_space;
        ancast_rp_marked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Context::AnycastRpRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ancast-rp-marked")
    {
        ancast_rp_marked.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Context::AnycastRpRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "ancast-rp-marked" || name == "prefix-length")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Context::AnycastRpRange::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "anycast-rp-range";
}

Pim::Standby::DefaultContext::Context::AnycastRpRange::Prefix::~Prefix()
{
}

bool Pim::Standby::DefaultContext::Context::AnycastRpRange::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Context::AnycastRpRange::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Context::AnycastRpRange::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Context::AnycastRpRange::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/context/anycast-rp-range/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Context::AnycastRpRange::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Context::AnycastRpRange::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::Context::AnycastRpRange::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::Context::AnycastRpRange::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::Context::AnycastRpRange::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCounts()
{
    yang_name = "topology-entry-flag-route-counts"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::~TopologyEntryFlagRouteCounts()
{
}

bool Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::has_data() const
{
    for (std::size_t index=0; index<topology_entry_flag_route_count.size(); index++)
    {
        if(topology_entry_flag_route_count[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::has_operation() const
{
    for (std::size_t index=0; index<topology_entry_flag_route_count.size(); index++)
    {
        if(topology_entry_flag_route_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-entry-flag-route-counts";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "topology-entry-flag-route-count")
    {
        for(auto const & c : topology_entry_flag_route_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount>();
        c->parent = this;
        topology_entry_flag_route_count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : topology_entry_flag_route_count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "topology-entry-flag-route-count")
        return true;
    return false;
}

Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::TopologyEntryFlagRouteCount()
    :
    entry_flag{YType::enumeration, "entry-flag"},
    active_group_ranges{YType::uint32, "active-group-ranges"},
    group_ranges{YType::uint32, "group-ranges"},
    groute_count{YType::uint32, "groute-count"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    sg_route_count{YType::uint32, "sg-route-count"},
    sgr_route_count{YType::uint32, "sgr-route-count"}
    	,
    group_address(std::make_shared<Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress>())
{
    group_address->parent = this;

    yang_name = "topology-entry-flag-route-count"; yang_parent_name = "topology-entry-flag-route-counts";
}

Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::~TopologyEntryFlagRouteCount()
{
}

bool Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::has_data() const
{
    return entry_flag.is_set
	|| active_group_ranges.is_set
	|| group_ranges.is_set
	|| groute_count.is_set
	|| is_node_low_memory.is_set
	|| sg_route_count.is_set
	|| sgr_route_count.is_set
	|| (group_address !=  nullptr && group_address->has_data());
}

bool Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry_flag.yfilter)
	|| ydk::is_set(active_group_ranges.yfilter)
	|| ydk::is_set(group_ranges.yfilter)
	|| ydk::is_set(groute_count.yfilter)
	|| ydk::is_set(is_node_low_memory.yfilter)
	|| ydk::is_set(sg_route_count.yfilter)
	|| ydk::is_set(sgr_route_count.yfilter)
	|| (group_address !=  nullptr && group_address->has_operation());
}

std::string Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-entry-flag-route-count" <<"[entry-flag='" <<entry_flag <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/topology-entry-flag-route-counts/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry_flag.is_set || is_set(entry_flag.yfilter)) leaf_name_data.push_back(entry_flag.get_name_leafdata());
    if (active_group_ranges.is_set || is_set(active_group_ranges.yfilter)) leaf_name_data.push_back(active_group_ranges.get_name_leafdata());
    if (group_ranges.is_set || is_set(group_ranges.yfilter)) leaf_name_data.push_back(group_ranges.get_name_leafdata());
    if (groute_count.is_set || is_set(groute_count.yfilter)) leaf_name_data.push_back(groute_count.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.yfilter)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (sg_route_count.is_set || is_set(sg_route_count.yfilter)) leaf_name_data.push_back(sg_route_count.get_name_leafdata());
    if (sgr_route_count.is_set || is_set(sgr_route_count.yfilter)) leaf_name_data.push_back(sgr_route_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address")
    {
        if(group_address == nullptr)
        {
            group_address = std::make_shared<Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress>();
        }
        return group_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address != nullptr)
    {
        children["group-address"] = group_address;
    }

    return children;
}

void Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry-flag")
    {
        entry_flag = value;
        entry_flag.value_namespace = name_space;
        entry_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges = value;
        active_group_ranges.value_namespace = name_space;
        active_group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-ranges")
    {
        group_ranges = value;
        group_ranges.value_namespace = name_space;
        group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groute-count")
    {
        groute_count = value;
        groute_count.value_namespace = name_space;
        groute_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
        is_node_low_memory.value_namespace = name_space;
        is_node_low_memory.value_namespace_prefix = name_space_prefix;
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
}

void Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry-flag")
    {
        entry_flag.yfilter = yfilter;
    }
    if(value_path == "active-group-ranges")
    {
        active_group_ranges.yfilter = yfilter;
    }
    if(value_path == "group-ranges")
    {
        group_ranges.yfilter = yfilter;
    }
    if(value_path == "groute-count")
    {
        groute_count.yfilter = yfilter;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory.yfilter = yfilter;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count.yfilter = yfilter;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "entry-flag" || name == "active-group-ranges" || name == "group-ranges" || name == "groute-count" || name == "is-node-low-memory" || name == "sg-route-count" || name == "sgr-route-count")
        return true;
    return false;
}

Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address"; yang_parent_name = "topology-entry-flag-route-count";
}

Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::~GroupAddress()
{
}

bool Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::TopologyEntryFlagRouteCounts::TopologyEntryFlagRouteCount::GroupAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::RpfRedirect::RpfRedirect()
    :
    bundle_interfaces(std::make_shared<Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces>())
	,redirect_route_databases(std::make_shared<Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases>())
{
    bundle_interfaces->parent = this;

    redirect_route_databases->parent = this;

    yang_name = "rpf-redirect"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::RpfRedirect::~RpfRedirect()
{
}

bool Pim::Standby::DefaultContext::RpfRedirect::has_data() const
{
    return (bundle_interfaces !=  nullptr && bundle_interfaces->has_data())
	|| (redirect_route_databases !=  nullptr && redirect_route_databases->has_data());
}

bool Pim::Standby::DefaultContext::RpfRedirect::has_operation() const
{
    return is_set(yfilter)
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_operation())
	|| (redirect_route_databases !=  nullptr && redirect_route_databases->has_operation());
}

std::string Pim::Standby::DefaultContext::RpfRedirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-redirect";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::RpfRedirect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RpfRedirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-interfaces")
    {
        if(bundle_interfaces == nullptr)
        {
            bundle_interfaces = std::make_shared<Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces>();
        }
        return bundle_interfaces;
    }

    if(child_yang_name == "redirect-route-databases")
    {
        if(redirect_route_databases == nullptr)
        {
            redirect_route_databases = std::make_shared<Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases>();
        }
        return redirect_route_databases;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::RpfRedirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bundle_interfaces != nullptr)
    {
        children["bundle-interfaces"] = bundle_interfaces;
    }

    if(redirect_route_databases != nullptr)
    {
        children["redirect-route-databases"] = redirect_route_databases;
    }

    return children;
}

void Pim::Standby::DefaultContext::RpfRedirect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::RpfRedirect::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::RpfRedirect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-interfaces" || name == "redirect-route-databases")
        return true;
    return false;
}

Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabases()
{
    yang_name = "redirect-route-databases"; yang_parent_name = "rpf-redirect";
}

Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::~RedirectRouteDatabases()
{
}

bool Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::has_data() const
{
    for (std::size_t index=0; index<redirect_route_database.size(); index++)
    {
        if(redirect_route_database[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::has_operation() const
{
    for (std::size_t index=0; index<redirect_route_database.size(); index++)
    {
        if(redirect_route_database[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect-route-databases";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/rpf-redirect/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect-route-database")
    {
        for(auto const & c : redirect_route_database)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase>();
        c->parent = this;
        redirect_route_database.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : redirect_route_database)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect-route-database")
        return true;
    return false;
}

Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::RedirectRouteDatabase()
    :
    bandwidth{YType::uint32, "bandwidth"},
    group_address{YType::str, "group-address"},
    source_address{YType::str, "source-address"},
    uptime{YType::uint64, "uptime"}
    	,
    group_address_xr(std::make_shared<Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr>())
	,source_address_xr(std::make_shared<Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr>())
{
    group_address_xr->parent = this;

    source_address_xr->parent = this;

    yang_name = "redirect-route-database"; yang_parent_name = "redirect-route-databases";
}

Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::~RedirectRouteDatabase()
{
}

bool Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return bandwidth.is_set
	|| group_address.is_set
	|| source_address.is_set
	|| uptime.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (source_address_xr !=  nullptr && source_address_xr->has_data());
}

bool Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation());
}

std::string Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect-route-database";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/rpf-redirect/redirect-route-databases/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr == nullptr)
        {
            source_address_xr = std::make_shared<Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr>();
        }
        return source_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    if(source_address_xr != nullptr)
    {
        children["source-address-xr"] = source_address_xr;
    }

    return children;
}

void Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "interface" || name == "source-address-xr" || name == "bandwidth" || name == "group-address" || name == "source-address" || name == "uptime")
        return true;
    return false;
}

Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "redirect-route-database";
}

Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/rpf-redirect/redirect-route-databases/redirect-route-database/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address-xr"; yang_parent_name = "redirect-route-database";
}

Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/rpf-redirect/redirect-route-databases/redirect-route-database/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::SourceAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::Interface()
    :
    expiry{YType::uint64, "expiry"},
    interface_name{YType::str, "interface-name"},
    is_outgoing_interface{YType::boolean, "is-outgoing-interface"},
    is_rpf_interface{YType::boolean, "is-rpf-interface"},
    is_snoop_interface{YType::boolean, "is-snoop-interface"},
    uptime{YType::uint64, "uptime"}
    	,
    rpf_address(std::make_shared<Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress>())
{
    rpf_address->parent = this;

    yang_name = "interface"; yang_parent_name = "redirect-route-database";
}

Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::~Interface()
{
}

bool Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::has_data() const
{
    return expiry.is_set
	|| interface_name.is_set
	|| is_outgoing_interface.is_set
	|| is_rpf_interface.is_set
	|| is_snoop_interface.is_set
	|| uptime.is_set
	|| (rpf_address !=  nullptr && rpf_address->has_data());
}

bool Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expiry.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_outgoing_interface.yfilter)
	|| ydk::is_set(is_rpf_interface.yfilter)
	|| ydk::is_set(is_snoop_interface.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (rpf_address !=  nullptr && rpf_address->has_operation());
}

std::string Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/rpf-redirect/redirect-route-databases/redirect-route-database/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiry.is_set || is_set(expiry.yfilter)) leaf_name_data.push_back(expiry.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_outgoing_interface.is_set || is_set(is_outgoing_interface.yfilter)) leaf_name_data.push_back(is_outgoing_interface.get_name_leafdata());
    if (is_rpf_interface.is_set || is_set(is_rpf_interface.yfilter)) leaf_name_data.push_back(is_rpf_interface.get_name_leafdata());
    if (is_snoop_interface.is_set || is_set(is_snoop_interface.yfilter)) leaf_name_data.push_back(is_snoop_interface.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-address")
    {
        if(rpf_address == nullptr)
        {
            rpf_address = std::make_shared<Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress>();
        }
        return rpf_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rpf_address != nullptr)
    {
        children["rpf-address"] = rpf_address;
    }

    return children;
}

void Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expiry")
    {
        expiry = value;
        expiry.value_namespace = name_space;
        expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-outgoing-interface")
    {
        is_outgoing_interface = value;
        is_outgoing_interface.value_namespace = name_space;
        is_outgoing_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rpf-interface")
    {
        is_rpf_interface = value;
        is_rpf_interface.value_namespace = name_space;
        is_rpf_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-snoop-interface")
    {
        is_snoop_interface = value;
        is_snoop_interface.value_namespace = name_space;
        is_snoop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expiry")
    {
        expiry.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-outgoing-interface")
    {
        is_outgoing_interface.yfilter = yfilter;
    }
    if(value_path == "is-rpf-interface")
    {
        is_rpf_interface.yfilter = yfilter;
    }
    if(value_path == "is-snoop-interface")
    {
        is_snoop_interface.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-address" || name == "expiry" || name == "interface-name" || name == "is-outgoing-interface" || name == "is-rpf-interface" || name == "is-snoop-interface" || name == "uptime")
        return true;
    return false;
}

Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::RpfAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-address"; yang_parent_name = "interface";
}

Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::~RpfAddress()
{
}

bool Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-address";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/rpf-redirect/redirect-route-databases/redirect-route-database/interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::RpfRedirect::RedirectRouteDatabases::RedirectRouteDatabase::Interface::RpfAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterfaces()
{
    yang_name = "bundle-interfaces"; yang_parent_name = "rpf-redirect";
}

Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::~BundleInterfaces()
{
}

bool Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::has_data() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::has_operation() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interfaces";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/rpf-redirect/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bundle-interface")
    {
        for(auto const & c : bundle_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface>();
        c->parent = this;
        bundle_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bundle_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bundle-interface")
        return true;
    return false;
}

Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface::BundleInterface()
    :
    allocated_bandwidth{YType::int32, "allocated-bandwidth"},
    allocated_threshold_bandwidth{YType::int32, "allocated-threshold-bandwidth"},
    available_bandwidth{YType::int32, "available-bandwidth"},
    available_threshold_bandwidth{YType::int32, "available-threshold-bandwidth"},
    bundle_name{YType::str, "bundle-name"},
    interface_name{YType::str, "interface-name"},
    rpf_redirect_bundle_name{YType::str, "rpf-redirect-bundle-name"},
    rpf_redirect_interface_name{YType::str, "rpf-redirect-interface-name"},
    snooping_bandwidth_used{YType::int32, "snooping-bandwidth-used"},
    topology_bandwidth_used{YType::int32, "topology-bandwidth-used"},
    total_bandwidth{YType::int32, "total-bandwidth"}
{
    yang_name = "bundle-interface"; yang_parent_name = "bundle-interfaces";
}

Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface::~BundleInterface()
{
}

bool Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface::has_data() const
{
    return allocated_bandwidth.is_set
	|| allocated_threshold_bandwidth.is_set
	|| available_bandwidth.is_set
	|| available_threshold_bandwidth.is_set
	|| bundle_name.is_set
	|| interface_name.is_set
	|| rpf_redirect_bundle_name.is_set
	|| rpf_redirect_interface_name.is_set
	|| snooping_bandwidth_used.is_set
	|| topology_bandwidth_used.is_set
	|| total_bandwidth.is_set;
}

bool Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allocated_bandwidth.yfilter)
	|| ydk::is_set(allocated_threshold_bandwidth.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(available_threshold_bandwidth.yfilter)
	|| ydk::is_set(bundle_name.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(rpf_redirect_bundle_name.yfilter)
	|| ydk::is_set(rpf_redirect_interface_name.yfilter)
	|| ydk::is_set(snooping_bandwidth_used.yfilter)
	|| ydk::is_set(topology_bandwidth_used.yfilter)
	|| ydk::is_set(total_bandwidth.yfilter);
}

std::string Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interface";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/rpf-redirect/bundle-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allocated_bandwidth.is_set || is_set(allocated_bandwidth.yfilter)) leaf_name_data.push_back(allocated_bandwidth.get_name_leafdata());
    if (allocated_threshold_bandwidth.is_set || is_set(allocated_threshold_bandwidth.yfilter)) leaf_name_data.push_back(allocated_threshold_bandwidth.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (available_threshold_bandwidth.is_set || is_set(available_threshold_bandwidth.yfilter)) leaf_name_data.push_back(available_threshold_bandwidth.get_name_leafdata());
    if (bundle_name.is_set || is_set(bundle_name.yfilter)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (rpf_redirect_bundle_name.is_set || is_set(rpf_redirect_bundle_name.yfilter)) leaf_name_data.push_back(rpf_redirect_bundle_name.get_name_leafdata());
    if (rpf_redirect_interface_name.is_set || is_set(rpf_redirect_interface_name.yfilter)) leaf_name_data.push_back(rpf_redirect_interface_name.get_name_leafdata());
    if (snooping_bandwidth_used.is_set || is_set(snooping_bandwidth_used.yfilter)) leaf_name_data.push_back(snooping_bandwidth_used.get_name_leafdata());
    if (topology_bandwidth_used.is_set || is_set(topology_bandwidth_used.yfilter)) leaf_name_data.push_back(topology_bandwidth_used.get_name_leafdata());
    if (total_bandwidth.is_set || is_set(total_bandwidth.yfilter)) leaf_name_data.push_back(total_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allocated-bandwidth")
    {
        allocated_bandwidth = value;
        allocated_bandwidth.value_namespace = name_space;
        allocated_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allocated-threshold-bandwidth")
    {
        allocated_threshold_bandwidth = value;
        allocated_threshold_bandwidth.value_namespace = name_space;
        allocated_threshold_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-threshold-bandwidth")
    {
        available_threshold_bandwidth = value;
        available_threshold_bandwidth.value_namespace = name_space;
        available_threshold_bandwidth.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "snooping-bandwidth-used")
    {
        snooping_bandwidth_used = value;
        snooping_bandwidth_used.value_namespace = name_space;
        snooping_bandwidth_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-bandwidth-used")
    {
        topology_bandwidth_used = value;
        topology_bandwidth_used.value_namespace = name_space;
        topology_bandwidth_used.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-bandwidth")
    {
        total_bandwidth = value;
        total_bandwidth.value_namespace = name_space;
        total_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allocated-bandwidth")
    {
        allocated_bandwidth.yfilter = yfilter;
    }
    if(value_path == "allocated-threshold-bandwidth")
    {
        allocated_threshold_bandwidth.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "available-threshold-bandwidth")
    {
        available_threshold_bandwidth.yfilter = yfilter;
    }
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
    if(value_path == "snooping-bandwidth-used")
    {
        snooping_bandwidth_used.yfilter = yfilter;
    }
    if(value_path == "topology-bandwidth-used")
    {
        topology_bandwidth_used.yfilter = yfilter;
    }
    if(value_path == "total-bandwidth")
    {
        total_bandwidth.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::RpfRedirect::BundleInterfaces::BundleInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocated-bandwidth" || name == "allocated-threshold-bandwidth" || name == "available-bandwidth" || name == "available-threshold-bandwidth" || name == "bundle-name" || name == "interface-name" || name == "rpf-redirect-bundle-name" || name == "rpf-redirect-interface-name" || name == "snooping-bandwidth-used" || name == "topology-bandwidth-used" || name == "total-bandwidth")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Tunnels::Tunnels()
{
    yang_name = "tunnels"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::Tunnels::~Tunnels()
{
}

bool Pim::Standby::DefaultContext::Tunnels::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Tunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Tunnels::Tunnel::Tunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    vrf_name{YType::str, "vrf-name"}
    	,
    group_address_netio(std::make_shared<Pim::Standby::DefaultContext::Tunnels::Tunnel::GroupAddressNetio>())
	,rp_address(std::make_shared<Pim::Standby::DefaultContext::Tunnels::Tunnel::RpAddress>())
	,source_address(std::make_shared<Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddress>())
	,source_address_netio(std::make_shared<Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddressNetio>())
{
    group_address_netio->parent = this;

    rp_address->parent = this;

    source_address->parent = this;

    source_address_netio->parent = this;

    yang_name = "tunnel"; yang_parent_name = "tunnels";
}

Pim::Standby::DefaultContext::Tunnels::Tunnel::~Tunnel()
{
}

bool Pim::Standby::DefaultContext::Tunnels::Tunnel::has_data() const
{
    return tunnel_name.is_set
	|| vrf_name.is_set
	|| (group_address_netio !=  nullptr && group_address_netio->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data())
	|| (source_address_netio !=  nullptr && source_address_netio->has_data());
}

bool Pim::Standby::DefaultContext::Tunnels::Tunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (group_address_netio !=  nullptr && group_address_netio->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation())
	|| (source_address_netio !=  nullptr && source_address_netio->has_operation());
}

std::string Pim::Standby::DefaultContext::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[tunnel-name='" <<tunnel_name <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Tunnels::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-netio")
    {
        if(group_address_netio == nullptr)
        {
            group_address_netio = std::make_shared<Pim::Standby::DefaultContext::Tunnels::Tunnel::GroupAddressNetio>();
        }
        return group_address_netio;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Standby::DefaultContext::Tunnels::Tunnel::RpAddress>();
        }
        return rp_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddress>();
        }
        return source_address;
    }

    if(child_yang_name == "source-address-netio")
    {
        if(source_address_netio == nullptr)
        {
            source_address_netio = std::make_shared<Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddressNetio>();
        }
        return source_address_netio;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_netio != nullptr)
    {
        children["group-address-netio"] = group_address_netio;
    }

    if(rp_address != nullptr)
    {
        children["rp-address"] = rp_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    if(source_address_netio != nullptr)
    {
        children["source-address-netio"] = source_address_netio;
    }

    return children;
}

void Pim::Standby::DefaultContext::Tunnels::Tunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::Tunnels::Tunnel::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::Tunnels::Tunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-netio" || name == "rp-address" || name == "source-address" || name == "source-address-netio" || name == "tunnel-name" || name == "vrf-name")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "tunnel";
}

Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddress::~SourceAddress()
{
}

bool Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Tunnels::Tunnel::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "tunnel";
}

Pim::Standby::DefaultContext::Tunnels::Tunnel::RpAddress::~RpAddress()
{
}

bool Pim::Standby::DefaultContext::Tunnels::Tunnel::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Tunnels::Tunnel::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Tunnels::Tunnel::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Tunnels::Tunnel::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Tunnels::Tunnel::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Tunnels::Tunnel::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::Tunnels::Tunnel::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::Tunnels::Tunnel::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::Tunnels::Tunnel::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddressNetio::SourceAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address-netio"; yang_parent_name = "tunnel";
}

Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddressNetio::~SourceAddressNetio()
{
}

bool Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddressNetio::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddressNetio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-netio";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddressNetio::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddressNetio' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddressNetio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddressNetio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddressNetio::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::Tunnels::Tunnel::SourceAddressNetio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Tunnels::Tunnel::GroupAddressNetio::GroupAddressNetio()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-netio"; yang_parent_name = "tunnel";
}

Pim::Standby::DefaultContext::Tunnels::Tunnel::GroupAddressNetio::~GroupAddressNetio()
{
}

bool Pim::Standby::DefaultContext::Tunnels::Tunnel::GroupAddressNetio::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Tunnels::Tunnel::GroupAddressNetio::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Tunnels::Tunnel::GroupAddressNetio::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-netio";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Tunnels::Tunnel::GroupAddressNetio::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressNetio' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Tunnels::Tunnel::GroupAddressNetio::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Tunnels::Tunnel::GroupAddressNetio::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::Tunnels::Tunnel::GroupAddressNetio::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::Tunnels::Tunnel::GroupAddressNetio::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::Tunnels::Tunnel::GroupAddressNetio::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoutes()
{
    yang_name = "multicast-static-routes"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::MulticastStaticRoutes::~MulticastStaticRoutes()
{
}

bool Pim::Standby::DefaultContext::MulticastStaticRoutes::has_data() const
{
    for (std::size_t index=0; index<multicast_static_route.size(); index++)
    {
        if(multicast_static_route[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::MulticastStaticRoutes::has_operation() const
{
    for (std::size_t index=0; index<multicast_static_route.size(); index++)
    {
        if(multicast_static_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::MulticastStaticRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-static-routes";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::MulticastStaticRoutes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::MulticastStaticRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-static-route")
    {
        for(auto const & c : multicast_static_route)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute>();
        c->parent = this;
        multicast_static_route.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::MulticastStaticRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : multicast_static_route)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::MulticastStaticRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::MulticastStaticRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::MulticastStaticRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-static-route")
        return true;
    return false;
}

Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::MulticastStaticRoute()
    :
    address{YType::str, "address"},
    distance{YType::uint32, "distance"},
    interface_name{YType::str, "interface-name"},
    is_via_lsm{YType::boolean, "is-via-lsm"},
    prefix_length{YType::int32, "prefix-length"},
    prefix_length_xr{YType::uint8, "prefix-length-xr"}
    	,
    nexthop(std::make_shared<Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop>())
	,prefix(std::make_shared<Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix>())
{
    nexthop->parent = this;

    prefix->parent = this;

    yang_name = "multicast-static-route"; yang_parent_name = "multicast-static-routes";
}

Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::~MulticastStaticRoute()
{
}

bool Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::has_data() const
{
    return address.is_set
	|| distance.is_set
	|| interface_name.is_set
	|| is_via_lsm.is_set
	|| prefix_length.is_set
	|| prefix_length_xr.is_set
	|| (nexthop !=  nullptr && nexthop->has_data())
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_via_lsm.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix_length_xr.yfilter)
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-static-route";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/multicast-static-routes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.yfilter)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix_length_xr.is_set || is_set(prefix_length_xr.yfilter)) leaf_name_data.push_back(prefix_length_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop>();
        }
        return nexthop;
    }

    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nexthop != nullptr)
    {
        children["nexthop"] = nexthop;
    }

    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    return children;
}

void Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
        is_via_lsm.value_namespace = name_space;
        is_via_lsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr = value;
        prefix_length_xr.value_namespace = name_space;
        prefix_length_xr.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix-length-xr")
    {
        prefix_length_xr.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nexthop" || name == "prefix" || name == "address" || name == "distance" || name == "interface-name" || name == "is-via-lsm" || name == "prefix-length" || name == "prefix-length-xr")
        return true;
    return false;
}

Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "multicast-static-route";
}

Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix::~Prefix()
{
}

bool Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/multicast-static-routes/multicast-static-route/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::Nexthop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "nexthop"; yang_parent_name = "multicast-static-route";
}

Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::~Nexthop()
{
}

bool Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/multicast-static-routes/multicast-static-route/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::MulticastStaticRoutes::MulticastStaticRoute::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSources()
{
    yang_name = "group-map-match-sources"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::GroupMapMatchSources::~GroupMapMatchSources()
{
}

bool Pim::Standby::DefaultContext::GroupMapMatchSources::has_data() const
{
    for (std::size_t index=0; index<group_map_match_source.size(); index++)
    {
        if(group_map_match_source[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::GroupMapMatchSources::has_operation() const
{
    for (std::size_t index=0; index<group_map_match_source.size(); index++)
    {
        if(group_map_match_source[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::GroupMapMatchSources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-match-sources";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::GroupMapMatchSources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapMatchSources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-map-match-source")
    {
        for(auto const & c : group_map_match_source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource>();
        c->parent = this;
        group_map_match_source.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapMatchSources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_map_match_source)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::GroupMapMatchSources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::GroupMapMatchSources::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::GroupMapMatchSources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-map-match-source")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapMatchSource()
    :
    group_address{YType::str, "group-address"},
    expires{YType::uint64, "expires"},
    holdtime{YType::int32, "holdtime"},
    uptime{YType::uint64, "uptime"}
    	,
    group_map_information(std::make_shared<Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation>())
	,source_of_information(std::make_shared<Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation>())
{
    group_map_information->parent = this;

    source_of_information->parent = this;

    yang_name = "group-map-match-source"; yang_parent_name = "group-map-match-sources";
}

Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::~GroupMapMatchSource()
{
}

bool Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::has_data() const
{
    return group_address.is_set
	|| expires.is_set
	|| holdtime.is_set
	|| uptime.is_set
	|| (group_map_information !=  nullptr && group_map_information->has_data())
	|| (source_of_information !=  nullptr && source_of_information->has_data());
}

bool Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(expires.yfilter)
	|| ydk::is_set(holdtime.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (group_map_information !=  nullptr && group_map_information->has_operation())
	|| (source_of_information !=  nullptr && source_of_information->has_operation());
}

std::string Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-match-source" <<"[group-address='" <<group_address <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/group-map-match-sources/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.yfilter)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-map-information")
    {
        if(group_map_information == nullptr)
        {
            group_map_information = std::make_shared<Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation>();
        }
        return group_map_information;
    }

    if(child_yang_name == "source-of-information")
    {
        if(source_of_information == nullptr)
        {
            source_of_information = std::make_shared<Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation>();
        }
        return source_of_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_map_information != nullptr)
    {
        children["group-map-information"] = group_map_information;
    }

    if(source_of_information != nullptr)
    {
        children["source-of-information"] = source_of_information;
    }

    return children;
}

void Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expires")
    {
        expires = value;
        expires.value_namespace = name_space;
        expires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
        holdtime.value_namespace = name_space;
        holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
    if(value_path == "holdtime")
    {
        holdtime.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-map-information" || name == "source-of-information" || name == "group-address" || name == "expires" || name == "holdtime" || name == "uptime")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-of-information"; yang_parent_name = "group-map-match-source";
}

Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::~SourceOfInformation()
{
}

bool Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceOfInformation' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::SourceOfInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::GroupMapInformation()
    :
    client{YType::enumeration, "client"},
    group_count{YType::uint32, "group-count"},
    is_override{YType::boolean, "is-override"},
    is_used{YType::boolean, "is-used"},
    mrib_active{YType::boolean, "mrib-active"},
    prefix_length{YType::int32, "prefix-length"},
    priority{YType::uint32, "priority"},
    protocol{YType::enumeration, "protocol"}
    	,
    prefix(std::make_shared<Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix>())
	,rp_address(std::make_shared<Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress>())
{
    prefix->parent = this;

    rp_address->parent = this;

    yang_name = "group-map-information"; yang_parent_name = "group-map-match-source";
}

Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::~GroupMapInformation()
{
}

bool Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::has_data() const
{
    return client.is_set
	|| group_count.is_set
	|| is_override.is_set
	|| is_used.is_set
	|| mrib_active.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| protocol.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data());
}

bool Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(is_override.yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(mrib_active.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation());
}

std::string Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-information";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupMapInformation' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (is_override.is_set || is_set(is_override.yfilter)) leaf_name_data.push_back(is_override.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (mrib_active.is_set || is_set(mrib_active.yfilter)) leaf_name_data.push_back(mrib_active.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress>();
        }
        return rp_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-override")
    {
        is_override = value;
        is_override.value_namespace = name_space;
        is_override.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "is-override")
    {
        is_override.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "mrib-active")
    {
        mrib_active.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "rp-address" || name == "client" || name == "group-count" || name == "is-override" || name == "is-used" || name == "mrib-active" || name == "prefix-length" || name == "priority" || name == "protocol")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "group-map-information";
}

Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::~Prefix()
{
}

bool Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "group-map-information";
}

Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::~RpAddress()
{
}

bool Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::GroupMapMatchSources::GroupMapMatchSource::GroupMapInformation::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "default-context";
}

Pim::Standby::DefaultContext::Neighbors::~Neighbors()
{
}

bool Pim::Standby::DefaultContext::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::DefaultContext::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::DefaultContext::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Pim::Standby::DefaultContext::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::DefaultContext::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::DefaultContext::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Neighbors::Neighbor::Neighbor()
    :
    dr_priority{YType::uint32, "dr-priority"},
    expires{YType::uint64, "expires"},
    expiry_timer{YType::uint64, "expiry-timer"},
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_bfd_state{YType::boolean, "is-bfd-state"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_dr_priority_capable{YType::boolean, "is-dr-priority-capable"},
    is_ecmp_redirect_capable{YType::boolean, "is-ecmp-redirect-capable"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    is_this_neighbor_dr{YType::boolean, "is-this-neighbor-dr"},
    is_this_neighbor_us{YType::boolean, "is-this-neighbor-us"},
    neighbor_address{YType::str, "neighbor-address"},
    override_interval{YType::uint16, "override-interval"},
    propagation_delay{YType::uint16, "propagation-delay"},
    uptime{YType::uint64, "uptime"}
{
    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Pim::Standby::DefaultContext::Neighbors::Neighbor::~Neighbor()
{
}

bool Pim::Standby::DefaultContext::Neighbors::Neighbor::has_data() const
{
    for (std::size_t index=0; index<neighbor_address_xr.size(); index++)
    {
        if(neighbor_address_xr[index]->has_data())
            return true;
    }
    return dr_priority.is_set
	|| expires.is_set
	|| expiry_timer.is_set
	|| interface_name.is_set
	|| interface_name_xr.is_set
	|| is_batch_asserts_capable.is_set
	|| is_bfd_state.is_set
	|| is_bidirectional_capable.is_set
	|| is_dr_priority_capable.is_set
	|| is_ecmp_redirect_capable.is_set
	|| is_proxy_capable.is_set
	|| is_this_neighbor_dr.is_set
	|| is_this_neighbor_us.is_set
	|| neighbor_address.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set
	|| uptime.is_set;
}

bool Pim::Standby::DefaultContext::Neighbors::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor_address_xr.size(); index++)
    {
        if(neighbor_address_xr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(expires.yfilter)
	|| ydk::is_set(expiry_timer.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(is_batch_asserts_capable.yfilter)
	|| ydk::is_set(is_bfd_state.yfilter)
	|| ydk::is_set(is_bidirectional_capable.yfilter)
	|| ydk::is_set(is_dr_priority_capable.yfilter)
	|| ydk::is_set(is_ecmp_redirect_capable.yfilter)
	|| ydk::is_set(is_proxy_capable.yfilter)
	|| ydk::is_set(is_this_neighbor_dr.yfilter)
	|| ydk::is_set(is_this_neighbor_us.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| ydk::is_set(uptime.yfilter);
}

std::string Pim::Standby::DefaultContext::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (expiry_timer.is_set || is_set(expiry_timer.yfilter)) leaf_name_data.push_back(expiry_timer.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.yfilter)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_bfd_state.is_set || is_set(is_bfd_state.yfilter)) leaf_name_data.push_back(is_bfd_state.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.yfilter)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_dr_priority_capable.is_set || is_set(is_dr_priority_capable.yfilter)) leaf_name_data.push_back(is_dr_priority_capable.get_name_leafdata());
    if (is_ecmp_redirect_capable.is_set || is_set(is_ecmp_redirect_capable.yfilter)) leaf_name_data.push_back(is_ecmp_redirect_capable.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.yfilter)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (is_this_neighbor_dr.is_set || is_set(is_this_neighbor_dr.yfilter)) leaf_name_data.push_back(is_this_neighbor_dr.get_name_leafdata());
    if (is_this_neighbor_us.is_set || is_set(is_this_neighbor_us.yfilter)) leaf_name_data.push_back(is_this_neighbor_us.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address-xr")
    {
        for(auto const & c : neighbor_address_xr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::DefaultContext::Neighbors::Neighbor::NeighborAddressXr>();
        c->parent = this;
        neighbor_address_xr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_address_xr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::DefaultContext::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
        is_batch_asserts_capable.value_namespace = name_space;
        is_batch_asserts_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-state")
    {
        is_bfd_state = value;
        is_bfd_state.value_namespace = name_space;
        is_bfd_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
        is_bidirectional_capable.value_namespace = name_space;
        is_bidirectional_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dr-priority-capable")
    {
        is_dr_priority_capable = value;
        is_dr_priority_capable.value_namespace = name_space;
        is_dr_priority_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ecmp-redirect-capable")
    {
        is_ecmp_redirect_capable = value;
        is_ecmp_redirect_capable.value_namespace = name_space;
        is_ecmp_redirect_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
        is_proxy_capable.value_namespace = name_space;
        is_proxy_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-this-neighbor-dr")
    {
        is_this_neighbor_dr = value;
        is_this_neighbor_dr.value_namespace = name_space;
        is_this_neighbor_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-this-neighbor-us")
    {
        is_this_neighbor_us = value;
        is_this_neighbor_us.value_namespace = name_space;
        is_this_neighbor_us.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::DefaultContext::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
    if(value_path == "expiry-timer")
    {
        expiry_timer.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable.yfilter = yfilter;
    }
    if(value_path == "is-bfd-state")
    {
        is_bfd_state.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable.yfilter = yfilter;
    }
    if(value_path == "is-dr-priority-capable")
    {
        is_dr_priority_capable.yfilter = yfilter;
    }
    if(value_path == "is-ecmp-redirect-capable")
    {
        is_ecmp_redirect_capable.yfilter = yfilter;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable.yfilter = yfilter;
    }
    if(value_path == "is-this-neighbor-dr")
    {
        is_this_neighbor_dr.yfilter = yfilter;
    }
    if(value_path == "is-this-neighbor-us")
    {
        is_this_neighbor_us.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Pim::Standby::DefaultContext::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address-xr" || name == "dr-priority" || name == "expires" || name == "expiry-timer" || name == "interface-name" || name == "interface-name-xr" || name == "is-batch-asserts-capable" || name == "is-bfd-state" || name == "is-bidirectional-capable" || name == "is-dr-priority-capable" || name == "is-ecmp-redirect-capable" || name == "is-proxy-capable" || name == "is-this-neighbor-dr" || name == "is-this-neighbor-us" || name == "neighbor-address" || name == "override-interval" || name == "propagation-delay" || name == "uptime")
        return true;
    return false;
}

Pim::Standby::DefaultContext::Neighbors::Neighbor::NeighborAddressXr::NeighborAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "neighbor-address-xr"; yang_parent_name = "neighbor";
}

Pim::Standby::DefaultContext::Neighbors::Neighbor::NeighborAddressXr::~NeighborAddressXr()
{
}

bool Pim::Standby::DefaultContext::Neighbors::Neighbor::NeighborAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::DefaultContext::Neighbors::Neighbor::NeighborAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::DefaultContext::Neighbors::Neighbor::NeighborAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address-xr";

    return path_buffer.str();

}

const EntityPath Pim::Standby::DefaultContext::Neighbors::Neighbor::NeighborAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/default-context/neighbors/neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::DefaultContext::Neighbors::Neighbor::NeighborAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::DefaultContext::Neighbors::Neighbor::NeighborAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::DefaultContext::Neighbors::Neighbor::NeighborAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::DefaultContext::Neighbors::Neighbor::NeighborAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::DefaultContext::Neighbors::Neighbor::NeighborAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Process::Process()
    :
    checkpoint_statistics(std::make_shared<Pim::Standby::Process::CheckpointStatistics>())
	,issu(std::make_shared<Pim::Standby::Process::Issu>())
	,nsf(std::make_shared<Pim::Standby::Process::Nsf>())
	,nsr(std::make_shared<Pim::Standby::Process::Nsr>())
	,summary(std::make_shared<Pim::Standby::Process::Summary>())
{
    checkpoint_statistics->parent = this;

    issu->parent = this;

    nsf->parent = this;

    nsr->parent = this;

    summary->parent = this;

    yang_name = "process"; yang_parent_name = "standby";
}

Pim::Standby::Process::~Process()
{
}

bool Pim::Standby::Process::has_data() const
{
    return (checkpoint_statistics !=  nullptr && checkpoint_statistics->has_data())
	|| (issu !=  nullptr && issu->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Pim::Standby::Process::has_operation() const
{
    return is_set(yfilter)
	|| (checkpoint_statistics !=  nullptr && checkpoint_statistics->has_operation())
	|| (issu !=  nullptr && issu->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Pim::Standby::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Process::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-statistics")
    {
        if(checkpoint_statistics == nullptr)
        {
            checkpoint_statistics = std::make_shared<Pim::Standby::Process::CheckpointStatistics>();
        }
        return checkpoint_statistics;
    }

    if(child_yang_name == "issu")
    {
        if(issu == nullptr)
        {
            issu = std::make_shared<Pim::Standby::Process::Issu>();
        }
        return issu;
    }

    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Pim::Standby::Process::Nsf>();
        }
        return nsf;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<Pim::Standby::Process::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Pim::Standby::Process::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(checkpoint_statistics != nullptr)
    {
        children["checkpoint-statistics"] = checkpoint_statistics;
    }

    if(issu != nullptr)
    {
        children["issu"] = issu;
    }

    if(nsf != nullptr)
    {
        children["nsf"] = nsf;
    }

    if(nsr != nullptr)
    {
        children["nsr"] = nsr;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Pim::Standby::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-statistics" || name == "issu" || name == "nsf" || name == "nsr" || name == "summary")
        return true;
    return false;
}

Pim::Standby::Process::CheckpointStatistics::CheckpointStatistics()
{
    yang_name = "checkpoint-statistics"; yang_parent_name = "process";
}

Pim::Standby::Process::CheckpointStatistics::~CheckpointStatistics()
{
}

bool Pim::Standby::Process::CheckpointStatistics::has_data() const
{
    for (std::size_t index=0; index<checkpoint_table.size(); index++)
    {
        if(checkpoint_table[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Process::CheckpointStatistics::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_table.size(); index++)
    {
        if(checkpoint_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Process::CheckpointStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-statistics";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Process::CheckpointStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Process::CheckpointStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-table")
    {
        for(auto const & c : checkpoint_table)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Process::CheckpointStatistics::CheckpointTable>();
        c->parent = this;
        checkpoint_table.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Process::CheckpointStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : checkpoint_table)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Process::CheckpointStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Process::CheckpointStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Process::CheckpointStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-table")
        return true;
    return false;
}

Pim::Standby::Process::CheckpointStatistics::CheckpointTable::CheckpointTable()
    :
    is_mirrored{YType::boolean, "is-mirrored"},
    statistic{YType::uint32, "statistic"},
    table_description{YType::str, "table-description"},
    table_name{YType::uint32, "table-name"}
{
    yang_name = "checkpoint-table"; yang_parent_name = "checkpoint-statistics";
}

Pim::Standby::Process::CheckpointStatistics::CheckpointTable::~CheckpointTable()
{
}

bool Pim::Standby::Process::CheckpointStatistics::CheckpointTable::has_data() const
{
    for (auto const & leaf : statistic.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_mirrored.is_set
	|| table_description.is_set
	|| table_name.is_set;
}

bool Pim::Standby::Process::CheckpointStatistics::CheckpointTable::has_operation() const
{
    for (auto const & leaf : statistic.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_mirrored.yfilter)
	|| ydk::is_set(statistic.yfilter)
	|| ydk::is_set(table_description.yfilter)
	|| ydk::is_set(table_name.yfilter);
}

std::string Pim::Standby::Process::CheckpointStatistics::CheckpointTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-table";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Process::CheckpointStatistics::CheckpointTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/process/checkpoint-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_mirrored.is_set || is_set(is_mirrored.yfilter)) leaf_name_data.push_back(is_mirrored.get_name_leafdata());
    if (table_description.is_set || is_set(table_description.yfilter)) leaf_name_data.push_back(table_description.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());

    auto statistic_name_datas = statistic.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), statistic_name_datas.begin(), statistic_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Process::CheckpointStatistics::CheckpointTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Process::CheckpointStatistics::CheckpointTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Process::CheckpointStatistics::CheckpointTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-mirrored")
    {
        is_mirrored = value;
        is_mirrored.value_namespace = name_space;
        is_mirrored.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "statistic")
    {
        statistic.append(value);
    }
    if(value_path == "table-description")
    {
        table_description = value;
        table_description.value_namespace = name_space;
        table_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Process::CheckpointStatistics::CheckpointTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-mirrored")
    {
        is_mirrored.yfilter = yfilter;
    }
    if(value_path == "statistic")
    {
        statistic.yfilter = yfilter;
    }
    if(value_path == "table-description")
    {
        table_description.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
}

bool Pim::Standby::Process::CheckpointStatistics::CheckpointTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-mirrored" || name == "statistic" || name == "table-description" || name == "table-name")
        return true;
    return false;
}

Pim::Standby::Process::Nsr::Nsr()
    :
    count_connection_dn{YType::uint32, "count-connection-dn"},
    count_connection_up{YType::uint32, "count-connection-up"},
    count_rmf_not_ready{YType::uint32, "count-rmf-not-ready"},
    count_rmf_ready{YType::uint32, "count-rmf-ready"},
    last_connection_dn{YType::uint64, "last-connection-dn"},
    last_connection_up{YType::uint64, "last-connection-up"},
    last_rmf_not_ready{YType::uint64, "last-rmf-not-ready"},
    last_rmf_ready{YType::uint64, "last-rmf-ready"},
    partner_connected{YType::boolean, "partner-connected"},
    rmf_notification_done{YType::boolean, "rmf-notification-done"},
    rmf_timer_expiry{YType::uint64, "rmf-timer-expiry"},
    rmf_timer_valid{YType::boolean, "rmf-timer-valid"},
    state{YType::uint8, "state"}
{
    yang_name = "nsr"; yang_parent_name = "process";
}

Pim::Standby::Process::Nsr::~Nsr()
{
}

bool Pim::Standby::Process::Nsr::has_data() const
{
    return count_connection_dn.is_set
	|| count_connection_up.is_set
	|| count_rmf_not_ready.is_set
	|| count_rmf_ready.is_set
	|| last_connection_dn.is_set
	|| last_connection_up.is_set
	|| last_rmf_not_ready.is_set
	|| last_rmf_ready.is_set
	|| partner_connected.is_set
	|| rmf_notification_done.is_set
	|| rmf_timer_expiry.is_set
	|| rmf_timer_valid.is_set
	|| state.is_set;
}

bool Pim::Standby::Process::Nsr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(count_connection_dn.yfilter)
	|| ydk::is_set(count_connection_up.yfilter)
	|| ydk::is_set(count_rmf_not_ready.yfilter)
	|| ydk::is_set(count_rmf_ready.yfilter)
	|| ydk::is_set(last_connection_dn.yfilter)
	|| ydk::is_set(last_connection_up.yfilter)
	|| ydk::is_set(last_rmf_not_ready.yfilter)
	|| ydk::is_set(last_rmf_ready.yfilter)
	|| ydk::is_set(partner_connected.yfilter)
	|| ydk::is_set(rmf_notification_done.yfilter)
	|| ydk::is_set(rmf_timer_expiry.yfilter)
	|| ydk::is_set(rmf_timer_valid.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Pim::Standby::Process::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Process::Nsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count_connection_dn.is_set || is_set(count_connection_dn.yfilter)) leaf_name_data.push_back(count_connection_dn.get_name_leafdata());
    if (count_connection_up.is_set || is_set(count_connection_up.yfilter)) leaf_name_data.push_back(count_connection_up.get_name_leafdata());
    if (count_rmf_not_ready.is_set || is_set(count_rmf_not_ready.yfilter)) leaf_name_data.push_back(count_rmf_not_ready.get_name_leafdata());
    if (count_rmf_ready.is_set || is_set(count_rmf_ready.yfilter)) leaf_name_data.push_back(count_rmf_ready.get_name_leafdata());
    if (last_connection_dn.is_set || is_set(last_connection_dn.yfilter)) leaf_name_data.push_back(last_connection_dn.get_name_leafdata());
    if (last_connection_up.is_set || is_set(last_connection_up.yfilter)) leaf_name_data.push_back(last_connection_up.get_name_leafdata());
    if (last_rmf_not_ready.is_set || is_set(last_rmf_not_ready.yfilter)) leaf_name_data.push_back(last_rmf_not_ready.get_name_leafdata());
    if (last_rmf_ready.is_set || is_set(last_rmf_ready.yfilter)) leaf_name_data.push_back(last_rmf_ready.get_name_leafdata());
    if (partner_connected.is_set || is_set(partner_connected.yfilter)) leaf_name_data.push_back(partner_connected.get_name_leafdata());
    if (rmf_notification_done.is_set || is_set(rmf_notification_done.yfilter)) leaf_name_data.push_back(rmf_notification_done.get_name_leafdata());
    if (rmf_timer_expiry.is_set || is_set(rmf_timer_expiry.yfilter)) leaf_name_data.push_back(rmf_timer_expiry.get_name_leafdata());
    if (rmf_timer_valid.is_set || is_set(rmf_timer_valid.yfilter)) leaf_name_data.push_back(rmf_timer_valid.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Process::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Process::Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Process::Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "count-connection-dn")
    {
        count_connection_dn = value;
        count_connection_dn.value_namespace = name_space;
        count_connection_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count-connection-up")
    {
        count_connection_up = value;
        count_connection_up.value_namespace = name_space;
        count_connection_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count-rmf-not-ready")
    {
        count_rmf_not_ready = value;
        count_rmf_not_ready.value_namespace = name_space;
        count_rmf_not_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count-rmf-ready")
    {
        count_rmf_ready = value;
        count_rmf_ready.value_namespace = name_space;
        count_rmf_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-connection-dn")
    {
        last_connection_dn = value;
        last_connection_dn.value_namespace = name_space;
        last_connection_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-connection-up")
    {
        last_connection_up = value;
        last_connection_up.value_namespace = name_space;
        last_connection_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-rmf-not-ready")
    {
        last_rmf_not_ready = value;
        last_rmf_not_ready.value_namespace = name_space;
        last_rmf_not_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-rmf-ready")
    {
        last_rmf_ready = value;
        last_rmf_ready.value_namespace = name_space;
        last_rmf_ready.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partner-connected")
    {
        partner_connected = value;
        partner_connected.value_namespace = name_space;
        partner_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rmf-notification-done")
    {
        rmf_notification_done = value;
        rmf_notification_done.value_namespace = name_space;
        rmf_notification_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rmf-timer-expiry")
    {
        rmf_timer_expiry = value;
        rmf_timer_expiry.value_namespace = name_space;
        rmf_timer_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rmf-timer-valid")
    {
        rmf_timer_valid = value;
        rmf_timer_valid.value_namespace = name_space;
        rmf_timer_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Process::Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "count-connection-dn")
    {
        count_connection_dn.yfilter = yfilter;
    }
    if(value_path == "count-connection-up")
    {
        count_connection_up.yfilter = yfilter;
    }
    if(value_path == "count-rmf-not-ready")
    {
        count_rmf_not_ready.yfilter = yfilter;
    }
    if(value_path == "count-rmf-ready")
    {
        count_rmf_ready.yfilter = yfilter;
    }
    if(value_path == "last-connection-dn")
    {
        last_connection_dn.yfilter = yfilter;
    }
    if(value_path == "last-connection-up")
    {
        last_connection_up.yfilter = yfilter;
    }
    if(value_path == "last-rmf-not-ready")
    {
        last_rmf_not_ready.yfilter = yfilter;
    }
    if(value_path == "last-rmf-ready")
    {
        last_rmf_ready.yfilter = yfilter;
    }
    if(value_path == "partner-connected")
    {
        partner_connected.yfilter = yfilter;
    }
    if(value_path == "rmf-notification-done")
    {
        rmf_notification_done.yfilter = yfilter;
    }
    if(value_path == "rmf-timer-expiry")
    {
        rmf_timer_expiry.yfilter = yfilter;
    }
    if(value_path == "rmf-timer-valid")
    {
        rmf_timer_valid.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Pim::Standby::Process::Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "count-connection-dn" || name == "count-connection-up" || name == "count-rmf-not-ready" || name == "count-rmf-ready" || name == "last-connection-dn" || name == "last-connection-up" || name == "last-rmf-not-ready" || name == "last-rmf-ready" || name == "partner-connected" || name == "rmf-notification-done" || name == "rmf-timer-expiry" || name == "rmf-timer-valid" || name == "state")
        return true;
    return false;
}

Pim::Standby::Process::Summary::Summary()
    :
    bsr_candidate_rp_set_count{YType::uint32, "bsr-candidate-rp-set-count"},
    bsr_candidate_rp_set_limit{YType::uint32, "bsr-candidate-rp-set-limit"},
    bsr_candidate_rp_set_threshold{YType::uint32, "bsr-candidate-rp-set-threshold"},
    bsr_range_threshold{YType::uint32, "bsr-range-threshold"},
    bsr_ranges_count{YType::uint32, "bsr-ranges-count"},
    bsr_ranges_limit{YType::uint32, "bsr-ranges-limit"},
    global_auto_rp_ranges_limit{YType::uint32, "global-auto-rp-ranges-limit"},
    global_bsr_candidate_rp_set_count{YType::uint32, "global-bsr-candidate-rp-set-count"},
    global_bsr_candidate_rp_set_limit{YType::uint32, "global-bsr-candidate-rp-set-limit"},
    global_bsr_candidate_rp_set_threshold{YType::uint32, "global-bsr-candidate-rp-set-threshold"},
    global_bsr_ranges_count{YType::uint32, "global-bsr-ranges-count"},
    global_bsr_ranges_limit{YType::uint32, "global-bsr-ranges-limit"},
    global_bsr_ranges_threshold{YType::uint32, "global-bsr-ranges-threshold"},
    global_register_limit{YType::uint32, "global-register-limit"},
    is_bsr_ranges_threshold_reached{YType::boolean, "is-bsr-ranges-threshold-reached"},
    is_global_auto_rp_ranges_limit_reached{YType::boolean, "is-global-auto-rp-ranges-limit-reached"},
    is_global_bsr_ranges_limit_reached{YType::boolean, "is-global-bsr-ranges-limit-reached"},
    is_global_register_limit_reached{YType::boolean, "is-global-register-limit-reached"},
    is_global_route_limit_reached{YType::boolean, "is-global-route-limit-reached"},
    is_global_rxi_limit_reached{YType::boolean, "is-global-rxi-limit-reached"},
    is_maximum_enforcement_disabled{YType::boolean, "is-maximum-enforcement-disabled"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    is_ranges_limit_reached{YType::boolean, "is-ranges-limit-reached"},
    is_route_limit_reached{YType::boolean, "is-route-limit-reached"},
    ranges_count{YType::uint32, "ranges-count"},
    ranges_limit{YType::uint32, "ranges-limit"},
    ranges_threshold{YType::uint32, "ranges-threshold"},
    register_count{YType::uint32, "register-count"},
    register_limit{YType::uint32, "register-limit"},
    register_limit_reached{YType::boolean, "register-limit-reached"},
    register_threshold{YType::uint32, "register-threshold"},
    route_count{YType::uint32, "route-count"},
    route_limit{YType::uint32, "route-limit"},
    route_low_water_mark{YType::uint32, "route-low-water-mark"},
    route_threshold{YType::uint32, "route-threshold"},
    rxi_limit_reached{YType::boolean, "rxi-limit-reached"},
    rxi_low_water_mark{YType::uint32, "rxi-low-water-mark"},
    topology_interface_state_count{YType::uint32, "topology-interface-state-count"},
    topology_interface_state_limit{YType::uint32, "topology-interface-state-limit"},
    topology_interface_state_threshold{YType::uint32, "topology-interface-state-threshold"}
{
    yang_name = "summary"; yang_parent_name = "process";
}

Pim::Standby::Process::Summary::~Summary()
{
}

bool Pim::Standby::Process::Summary::has_data() const
{
    return bsr_candidate_rp_set_count.is_set
	|| bsr_candidate_rp_set_limit.is_set
	|| bsr_candidate_rp_set_threshold.is_set
	|| bsr_range_threshold.is_set
	|| bsr_ranges_count.is_set
	|| bsr_ranges_limit.is_set
	|| global_auto_rp_ranges_limit.is_set
	|| global_bsr_candidate_rp_set_count.is_set
	|| global_bsr_candidate_rp_set_limit.is_set
	|| global_bsr_candidate_rp_set_threshold.is_set
	|| global_bsr_ranges_count.is_set
	|| global_bsr_ranges_limit.is_set
	|| global_bsr_ranges_threshold.is_set
	|| global_register_limit.is_set
	|| is_bsr_ranges_threshold_reached.is_set
	|| is_global_auto_rp_ranges_limit_reached.is_set
	|| is_global_bsr_ranges_limit_reached.is_set
	|| is_global_register_limit_reached.is_set
	|| is_global_route_limit_reached.is_set
	|| is_global_rxi_limit_reached.is_set
	|| is_maximum_enforcement_disabled.is_set
	|| is_node_low_memory.is_set
	|| is_ranges_limit_reached.is_set
	|| is_route_limit_reached.is_set
	|| ranges_count.is_set
	|| ranges_limit.is_set
	|| ranges_threshold.is_set
	|| register_count.is_set
	|| register_limit.is_set
	|| register_limit_reached.is_set
	|| register_threshold.is_set
	|| route_count.is_set
	|| route_limit.is_set
	|| route_low_water_mark.is_set
	|| route_threshold.is_set
	|| rxi_limit_reached.is_set
	|| rxi_low_water_mark.is_set
	|| topology_interface_state_count.is_set
	|| topology_interface_state_limit.is_set
	|| topology_interface_state_threshold.is_set;
}

bool Pim::Standby::Process::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bsr_candidate_rp_set_count.yfilter)
	|| ydk::is_set(bsr_candidate_rp_set_limit.yfilter)
	|| ydk::is_set(bsr_candidate_rp_set_threshold.yfilter)
	|| ydk::is_set(bsr_range_threshold.yfilter)
	|| ydk::is_set(bsr_ranges_count.yfilter)
	|| ydk::is_set(bsr_ranges_limit.yfilter)
	|| ydk::is_set(global_auto_rp_ranges_limit.yfilter)
	|| ydk::is_set(global_bsr_candidate_rp_set_count.yfilter)
	|| ydk::is_set(global_bsr_candidate_rp_set_limit.yfilter)
	|| ydk::is_set(global_bsr_candidate_rp_set_threshold.yfilter)
	|| ydk::is_set(global_bsr_ranges_count.yfilter)
	|| ydk::is_set(global_bsr_ranges_limit.yfilter)
	|| ydk::is_set(global_bsr_ranges_threshold.yfilter)
	|| ydk::is_set(global_register_limit.yfilter)
	|| ydk::is_set(is_bsr_ranges_threshold_reached.yfilter)
	|| ydk::is_set(is_global_auto_rp_ranges_limit_reached.yfilter)
	|| ydk::is_set(is_global_bsr_ranges_limit_reached.yfilter)
	|| ydk::is_set(is_global_register_limit_reached.yfilter)
	|| ydk::is_set(is_global_route_limit_reached.yfilter)
	|| ydk::is_set(is_global_rxi_limit_reached.yfilter)
	|| ydk::is_set(is_maximum_enforcement_disabled.yfilter)
	|| ydk::is_set(is_node_low_memory.yfilter)
	|| ydk::is_set(is_ranges_limit_reached.yfilter)
	|| ydk::is_set(is_route_limit_reached.yfilter)
	|| ydk::is_set(ranges_count.yfilter)
	|| ydk::is_set(ranges_limit.yfilter)
	|| ydk::is_set(ranges_threshold.yfilter)
	|| ydk::is_set(register_count.yfilter)
	|| ydk::is_set(register_limit.yfilter)
	|| ydk::is_set(register_limit_reached.yfilter)
	|| ydk::is_set(register_threshold.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(route_limit.yfilter)
	|| ydk::is_set(route_low_water_mark.yfilter)
	|| ydk::is_set(route_threshold.yfilter)
	|| ydk::is_set(rxi_limit_reached.yfilter)
	|| ydk::is_set(rxi_low_water_mark.yfilter)
	|| ydk::is_set(topology_interface_state_count.yfilter)
	|| ydk::is_set(topology_interface_state_limit.yfilter)
	|| ydk::is_set(topology_interface_state_threshold.yfilter);
}

std::string Pim::Standby::Process::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Process::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bsr_candidate_rp_set_count.is_set || is_set(bsr_candidate_rp_set_count.yfilter)) leaf_name_data.push_back(bsr_candidate_rp_set_count.get_name_leafdata());
    if (bsr_candidate_rp_set_limit.is_set || is_set(bsr_candidate_rp_set_limit.yfilter)) leaf_name_data.push_back(bsr_candidate_rp_set_limit.get_name_leafdata());
    if (bsr_candidate_rp_set_threshold.is_set || is_set(bsr_candidate_rp_set_threshold.yfilter)) leaf_name_data.push_back(bsr_candidate_rp_set_threshold.get_name_leafdata());
    if (bsr_range_threshold.is_set || is_set(bsr_range_threshold.yfilter)) leaf_name_data.push_back(bsr_range_threshold.get_name_leafdata());
    if (bsr_ranges_count.is_set || is_set(bsr_ranges_count.yfilter)) leaf_name_data.push_back(bsr_ranges_count.get_name_leafdata());
    if (bsr_ranges_limit.is_set || is_set(bsr_ranges_limit.yfilter)) leaf_name_data.push_back(bsr_ranges_limit.get_name_leafdata());
    if (global_auto_rp_ranges_limit.is_set || is_set(global_auto_rp_ranges_limit.yfilter)) leaf_name_data.push_back(global_auto_rp_ranges_limit.get_name_leafdata());
    if (global_bsr_candidate_rp_set_count.is_set || is_set(global_bsr_candidate_rp_set_count.yfilter)) leaf_name_data.push_back(global_bsr_candidate_rp_set_count.get_name_leafdata());
    if (global_bsr_candidate_rp_set_limit.is_set || is_set(global_bsr_candidate_rp_set_limit.yfilter)) leaf_name_data.push_back(global_bsr_candidate_rp_set_limit.get_name_leafdata());
    if (global_bsr_candidate_rp_set_threshold.is_set || is_set(global_bsr_candidate_rp_set_threshold.yfilter)) leaf_name_data.push_back(global_bsr_candidate_rp_set_threshold.get_name_leafdata());
    if (global_bsr_ranges_count.is_set || is_set(global_bsr_ranges_count.yfilter)) leaf_name_data.push_back(global_bsr_ranges_count.get_name_leafdata());
    if (global_bsr_ranges_limit.is_set || is_set(global_bsr_ranges_limit.yfilter)) leaf_name_data.push_back(global_bsr_ranges_limit.get_name_leafdata());
    if (global_bsr_ranges_threshold.is_set || is_set(global_bsr_ranges_threshold.yfilter)) leaf_name_data.push_back(global_bsr_ranges_threshold.get_name_leafdata());
    if (global_register_limit.is_set || is_set(global_register_limit.yfilter)) leaf_name_data.push_back(global_register_limit.get_name_leafdata());
    if (is_bsr_ranges_threshold_reached.is_set || is_set(is_bsr_ranges_threshold_reached.yfilter)) leaf_name_data.push_back(is_bsr_ranges_threshold_reached.get_name_leafdata());
    if (is_global_auto_rp_ranges_limit_reached.is_set || is_set(is_global_auto_rp_ranges_limit_reached.yfilter)) leaf_name_data.push_back(is_global_auto_rp_ranges_limit_reached.get_name_leafdata());
    if (is_global_bsr_ranges_limit_reached.is_set || is_set(is_global_bsr_ranges_limit_reached.yfilter)) leaf_name_data.push_back(is_global_bsr_ranges_limit_reached.get_name_leafdata());
    if (is_global_register_limit_reached.is_set || is_set(is_global_register_limit_reached.yfilter)) leaf_name_data.push_back(is_global_register_limit_reached.get_name_leafdata());
    if (is_global_route_limit_reached.is_set || is_set(is_global_route_limit_reached.yfilter)) leaf_name_data.push_back(is_global_route_limit_reached.get_name_leafdata());
    if (is_global_rxi_limit_reached.is_set || is_set(is_global_rxi_limit_reached.yfilter)) leaf_name_data.push_back(is_global_rxi_limit_reached.get_name_leafdata());
    if (is_maximum_enforcement_disabled.is_set || is_set(is_maximum_enforcement_disabled.yfilter)) leaf_name_data.push_back(is_maximum_enforcement_disabled.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.yfilter)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (is_ranges_limit_reached.is_set || is_set(is_ranges_limit_reached.yfilter)) leaf_name_data.push_back(is_ranges_limit_reached.get_name_leafdata());
    if (is_route_limit_reached.is_set || is_set(is_route_limit_reached.yfilter)) leaf_name_data.push_back(is_route_limit_reached.get_name_leafdata());
    if (ranges_count.is_set || is_set(ranges_count.yfilter)) leaf_name_data.push_back(ranges_count.get_name_leafdata());
    if (ranges_limit.is_set || is_set(ranges_limit.yfilter)) leaf_name_data.push_back(ranges_limit.get_name_leafdata());
    if (ranges_threshold.is_set || is_set(ranges_threshold.yfilter)) leaf_name_data.push_back(ranges_threshold.get_name_leafdata());
    if (register_count.is_set || is_set(register_count.yfilter)) leaf_name_data.push_back(register_count.get_name_leafdata());
    if (register_limit.is_set || is_set(register_limit.yfilter)) leaf_name_data.push_back(register_limit.get_name_leafdata());
    if (register_limit_reached.is_set || is_set(register_limit_reached.yfilter)) leaf_name_data.push_back(register_limit_reached.get_name_leafdata());
    if (register_threshold.is_set || is_set(register_threshold.yfilter)) leaf_name_data.push_back(register_threshold.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (route_limit.is_set || is_set(route_limit.yfilter)) leaf_name_data.push_back(route_limit.get_name_leafdata());
    if (route_low_water_mark.is_set || is_set(route_low_water_mark.yfilter)) leaf_name_data.push_back(route_low_water_mark.get_name_leafdata());
    if (route_threshold.is_set || is_set(route_threshold.yfilter)) leaf_name_data.push_back(route_threshold.get_name_leafdata());
    if (rxi_limit_reached.is_set || is_set(rxi_limit_reached.yfilter)) leaf_name_data.push_back(rxi_limit_reached.get_name_leafdata());
    if (rxi_low_water_mark.is_set || is_set(rxi_low_water_mark.yfilter)) leaf_name_data.push_back(rxi_low_water_mark.get_name_leafdata());
    if (topology_interface_state_count.is_set || is_set(topology_interface_state_count.yfilter)) leaf_name_data.push_back(topology_interface_state_count.get_name_leafdata());
    if (topology_interface_state_limit.is_set || is_set(topology_interface_state_limit.yfilter)) leaf_name_data.push_back(topology_interface_state_limit.get_name_leafdata());
    if (topology_interface_state_threshold.is_set || is_set(topology_interface_state_threshold.yfilter)) leaf_name_data.push_back(topology_interface_state_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Process::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Process::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Process::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bsr-candidate-rp-set-count")
    {
        bsr_candidate_rp_set_count = value;
        bsr_candidate_rp_set_count.value_namespace = name_space;
        bsr_candidate_rp_set_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-candidate-rp-set-limit")
    {
        bsr_candidate_rp_set_limit = value;
        bsr_candidate_rp_set_limit.value_namespace = name_space;
        bsr_candidate_rp_set_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-candidate-rp-set-threshold")
    {
        bsr_candidate_rp_set_threshold = value;
        bsr_candidate_rp_set_threshold.value_namespace = name_space;
        bsr_candidate_rp_set_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-range-threshold")
    {
        bsr_range_threshold = value;
        bsr_range_threshold.value_namespace = name_space;
        bsr_range_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-ranges-count")
    {
        bsr_ranges_count = value;
        bsr_ranges_count.value_namespace = name_space;
        bsr_ranges_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-ranges-limit")
    {
        bsr_ranges_limit = value;
        bsr_ranges_limit.value_namespace = name_space;
        bsr_ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-auto-rp-ranges-limit")
    {
        global_auto_rp_ranges_limit = value;
        global_auto_rp_ranges_limit.value_namespace = name_space;
        global_auto_rp_ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-candidate-rp-set-count")
    {
        global_bsr_candidate_rp_set_count = value;
        global_bsr_candidate_rp_set_count.value_namespace = name_space;
        global_bsr_candidate_rp_set_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-candidate-rp-set-limit")
    {
        global_bsr_candidate_rp_set_limit = value;
        global_bsr_candidate_rp_set_limit.value_namespace = name_space;
        global_bsr_candidate_rp_set_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-candidate-rp-set-threshold")
    {
        global_bsr_candidate_rp_set_threshold = value;
        global_bsr_candidate_rp_set_threshold.value_namespace = name_space;
        global_bsr_candidate_rp_set_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-ranges-count")
    {
        global_bsr_ranges_count = value;
        global_bsr_ranges_count.value_namespace = name_space;
        global_bsr_ranges_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-ranges-limit")
    {
        global_bsr_ranges_limit = value;
        global_bsr_ranges_limit.value_namespace = name_space;
        global_bsr_ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-bsr-ranges-threshold")
    {
        global_bsr_ranges_threshold = value;
        global_bsr_ranges_threshold.value_namespace = name_space;
        global_bsr_ranges_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-register-limit")
    {
        global_register_limit = value;
        global_register_limit.value_namespace = name_space;
        global_register_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bsr-ranges-threshold-reached")
    {
        is_bsr_ranges_threshold_reached = value;
        is_bsr_ranges_threshold_reached.value_namespace = name_space;
        is_bsr_ranges_threshold_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-auto-rp-ranges-limit-reached")
    {
        is_global_auto_rp_ranges_limit_reached = value;
        is_global_auto_rp_ranges_limit_reached.value_namespace = name_space;
        is_global_auto_rp_ranges_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-bsr-ranges-limit-reached")
    {
        is_global_bsr_ranges_limit_reached = value;
        is_global_bsr_ranges_limit_reached.value_namespace = name_space;
        is_global_bsr_ranges_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-register-limit-reached")
    {
        is_global_register_limit_reached = value;
        is_global_register_limit_reached.value_namespace = name_space;
        is_global_register_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-route-limit-reached")
    {
        is_global_route_limit_reached = value;
        is_global_route_limit_reached.value_namespace = name_space;
        is_global_route_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-global-rxi-limit-reached")
    {
        is_global_rxi_limit_reached = value;
        is_global_rxi_limit_reached.value_namespace = name_space;
        is_global_rxi_limit_reached.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-ranges-limit-reached")
    {
        is_ranges_limit_reached = value;
        is_ranges_limit_reached.value_namespace = name_space;
        is_ranges_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-route-limit-reached")
    {
        is_route_limit_reached = value;
        is_route_limit_reached.value_namespace = name_space;
        is_route_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ranges-count")
    {
        ranges_count = value;
        ranges_count.value_namespace = name_space;
        ranges_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ranges-limit")
    {
        ranges_limit = value;
        ranges_limit.value_namespace = name_space;
        ranges_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ranges-threshold")
    {
        ranges_threshold = value;
        ranges_threshold.value_namespace = name_space;
        ranges_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-count")
    {
        register_count = value;
        register_count.value_namespace = name_space;
        register_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-limit")
    {
        register_limit = value;
        register_limit.value_namespace = name_space;
        register_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-limit-reached")
    {
        register_limit_reached = value;
        register_limit_reached.value_namespace = name_space;
        register_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "register-threshold")
    {
        register_threshold = value;
        register_threshold.value_namespace = name_space;
        register_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-limit")
    {
        route_limit = value;
        route_limit.value_namespace = name_space;
        route_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-low-water-mark")
    {
        route_low_water_mark = value;
        route_low_water_mark.value_namespace = name_space;
        route_low_water_mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-threshold")
    {
        route_threshold = value;
        route_threshold.value_namespace = name_space;
        route_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxi-limit-reached")
    {
        rxi_limit_reached = value;
        rxi_limit_reached.value_namespace = name_space;
        rxi_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rxi-low-water-mark")
    {
        rxi_low_water_mark = value;
        rxi_low_water_mark.value_namespace = name_space;
        rxi_low_water_mark.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-interface-state-count")
    {
        topology_interface_state_count = value;
        topology_interface_state_count.value_namespace = name_space;
        topology_interface_state_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-interface-state-limit")
    {
        topology_interface_state_limit = value;
        topology_interface_state_limit.value_namespace = name_space;
        topology_interface_state_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-interface-state-threshold")
    {
        topology_interface_state_threshold = value;
        topology_interface_state_threshold.value_namespace = name_space;
        topology_interface_state_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Process::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bsr-candidate-rp-set-count")
    {
        bsr_candidate_rp_set_count.yfilter = yfilter;
    }
    if(value_path == "bsr-candidate-rp-set-limit")
    {
        bsr_candidate_rp_set_limit.yfilter = yfilter;
    }
    if(value_path == "bsr-candidate-rp-set-threshold")
    {
        bsr_candidate_rp_set_threshold.yfilter = yfilter;
    }
    if(value_path == "bsr-range-threshold")
    {
        bsr_range_threshold.yfilter = yfilter;
    }
    if(value_path == "bsr-ranges-count")
    {
        bsr_ranges_count.yfilter = yfilter;
    }
    if(value_path == "bsr-ranges-limit")
    {
        bsr_ranges_limit.yfilter = yfilter;
    }
    if(value_path == "global-auto-rp-ranges-limit")
    {
        global_auto_rp_ranges_limit.yfilter = yfilter;
    }
    if(value_path == "global-bsr-candidate-rp-set-count")
    {
        global_bsr_candidate_rp_set_count.yfilter = yfilter;
    }
    if(value_path == "global-bsr-candidate-rp-set-limit")
    {
        global_bsr_candidate_rp_set_limit.yfilter = yfilter;
    }
    if(value_path == "global-bsr-candidate-rp-set-threshold")
    {
        global_bsr_candidate_rp_set_threshold.yfilter = yfilter;
    }
    if(value_path == "global-bsr-ranges-count")
    {
        global_bsr_ranges_count.yfilter = yfilter;
    }
    if(value_path == "global-bsr-ranges-limit")
    {
        global_bsr_ranges_limit.yfilter = yfilter;
    }
    if(value_path == "global-bsr-ranges-threshold")
    {
        global_bsr_ranges_threshold.yfilter = yfilter;
    }
    if(value_path == "global-register-limit")
    {
        global_register_limit.yfilter = yfilter;
    }
    if(value_path == "is-bsr-ranges-threshold-reached")
    {
        is_bsr_ranges_threshold_reached.yfilter = yfilter;
    }
    if(value_path == "is-global-auto-rp-ranges-limit-reached")
    {
        is_global_auto_rp_ranges_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-global-bsr-ranges-limit-reached")
    {
        is_global_bsr_ranges_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-global-register-limit-reached")
    {
        is_global_register_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-global-route-limit-reached")
    {
        is_global_route_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-global-rxi-limit-reached")
    {
        is_global_rxi_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-maximum-enforcement-disabled")
    {
        is_maximum_enforcement_disabled.yfilter = yfilter;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory.yfilter = yfilter;
    }
    if(value_path == "is-ranges-limit-reached")
    {
        is_ranges_limit_reached.yfilter = yfilter;
    }
    if(value_path == "is-route-limit-reached")
    {
        is_route_limit_reached.yfilter = yfilter;
    }
    if(value_path == "ranges-count")
    {
        ranges_count.yfilter = yfilter;
    }
    if(value_path == "ranges-limit")
    {
        ranges_limit.yfilter = yfilter;
    }
    if(value_path == "ranges-threshold")
    {
        ranges_threshold.yfilter = yfilter;
    }
    if(value_path == "register-count")
    {
        register_count.yfilter = yfilter;
    }
    if(value_path == "register-limit")
    {
        register_limit.yfilter = yfilter;
    }
    if(value_path == "register-limit-reached")
    {
        register_limit_reached.yfilter = yfilter;
    }
    if(value_path == "register-threshold")
    {
        register_threshold.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "route-limit")
    {
        route_limit.yfilter = yfilter;
    }
    if(value_path == "route-low-water-mark")
    {
        route_low_water_mark.yfilter = yfilter;
    }
    if(value_path == "route-threshold")
    {
        route_threshold.yfilter = yfilter;
    }
    if(value_path == "rxi-limit-reached")
    {
        rxi_limit_reached.yfilter = yfilter;
    }
    if(value_path == "rxi-low-water-mark")
    {
        rxi_low_water_mark.yfilter = yfilter;
    }
    if(value_path == "topology-interface-state-count")
    {
        topology_interface_state_count.yfilter = yfilter;
    }
    if(value_path == "topology-interface-state-limit")
    {
        topology_interface_state_limit.yfilter = yfilter;
    }
    if(value_path == "topology-interface-state-threshold")
    {
        topology_interface_state_threshold.yfilter = yfilter;
    }
}

bool Pim::Standby::Process::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-candidate-rp-set-count" || name == "bsr-candidate-rp-set-limit" || name == "bsr-candidate-rp-set-threshold" || name == "bsr-range-threshold" || name == "bsr-ranges-count" || name == "bsr-ranges-limit" || name == "global-auto-rp-ranges-limit" || name == "global-bsr-candidate-rp-set-count" || name == "global-bsr-candidate-rp-set-limit" || name == "global-bsr-candidate-rp-set-threshold" || name == "global-bsr-ranges-count" || name == "global-bsr-ranges-limit" || name == "global-bsr-ranges-threshold" || name == "global-register-limit" || name == "is-bsr-ranges-threshold-reached" || name == "is-global-auto-rp-ranges-limit-reached" || name == "is-global-bsr-ranges-limit-reached" || name == "is-global-register-limit-reached" || name == "is-global-route-limit-reached" || name == "is-global-rxi-limit-reached" || name == "is-maximum-enforcement-disabled" || name == "is-node-low-memory" || name == "is-ranges-limit-reached" || name == "is-route-limit-reached" || name == "ranges-count" || name == "ranges-limit" || name == "ranges-threshold" || name == "register-count" || name == "register-limit" || name == "register-limit-reached" || name == "register-threshold" || name == "route-count" || name == "route-limit" || name == "route-low-water-mark" || name == "route-threshold" || name == "rxi-limit-reached" || name == "rxi-low-water-mark" || name == "topology-interface-state-count" || name == "topology-interface-state-limit" || name == "topology-interface-state-threshold")
        return true;
    return false;
}

Pim::Standby::Process::Nsf::Nsf()
    :
    configured_state{YType::boolean, "configured-state"},
    last_icd_notif_recv{YType::int64, "last-icd-notif-recv"},
    last_icd_notif_recv_sec{YType::int32, "last-icd-notif-recv-sec"},
    last_nsf_off{YType::int64, "last-nsf-off"},
    last_nsf_off_sec{YType::int32, "last-nsf-off-sec"},
    last_nsf_on{YType::int64, "last-nsf-on"},
    last_nsf_on_sec{YType::int32, "last-nsf-on-sec"},
    nsf_state{YType::boolean, "nsf-state"},
    nsf_time_left{YType::uint32, "nsf-time-left"},
    nsf_timeout{YType::uint32, "nsf-timeout"},
    respawn_count{YType::uint32, "respawn-count"},
    waiting_membership{YType::boolean, "waiting-membership"},
    waiting_timer{YType::boolean, "waiting-timer"}
{
    yang_name = "nsf"; yang_parent_name = "process";
}

Pim::Standby::Process::Nsf::~Nsf()
{
}

bool Pim::Standby::Process::Nsf::has_data() const
{
    return configured_state.is_set
	|| last_icd_notif_recv.is_set
	|| last_icd_notif_recv_sec.is_set
	|| last_nsf_off.is_set
	|| last_nsf_off_sec.is_set
	|| last_nsf_on.is_set
	|| last_nsf_on_sec.is_set
	|| nsf_state.is_set
	|| nsf_time_left.is_set
	|| nsf_timeout.is_set
	|| respawn_count.is_set
	|| waiting_membership.is_set
	|| waiting_timer.is_set;
}

bool Pim::Standby::Process::Nsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configured_state.yfilter)
	|| ydk::is_set(last_icd_notif_recv.yfilter)
	|| ydk::is_set(last_icd_notif_recv_sec.yfilter)
	|| ydk::is_set(last_nsf_off.yfilter)
	|| ydk::is_set(last_nsf_off_sec.yfilter)
	|| ydk::is_set(last_nsf_on.yfilter)
	|| ydk::is_set(last_nsf_on_sec.yfilter)
	|| ydk::is_set(nsf_state.yfilter)
	|| ydk::is_set(nsf_time_left.yfilter)
	|| ydk::is_set(nsf_timeout.yfilter)
	|| ydk::is_set(respawn_count.yfilter)
	|| ydk::is_set(waiting_membership.yfilter)
	|| ydk::is_set(waiting_timer.yfilter);
}

std::string Pim::Standby::Process::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Process::Nsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_state.is_set || is_set(configured_state.yfilter)) leaf_name_data.push_back(configured_state.get_name_leafdata());
    if (last_icd_notif_recv.is_set || is_set(last_icd_notif_recv.yfilter)) leaf_name_data.push_back(last_icd_notif_recv.get_name_leafdata());
    if (last_icd_notif_recv_sec.is_set || is_set(last_icd_notif_recv_sec.yfilter)) leaf_name_data.push_back(last_icd_notif_recv_sec.get_name_leafdata());
    if (last_nsf_off.is_set || is_set(last_nsf_off.yfilter)) leaf_name_data.push_back(last_nsf_off.get_name_leafdata());
    if (last_nsf_off_sec.is_set || is_set(last_nsf_off_sec.yfilter)) leaf_name_data.push_back(last_nsf_off_sec.get_name_leafdata());
    if (last_nsf_on.is_set || is_set(last_nsf_on.yfilter)) leaf_name_data.push_back(last_nsf_on.get_name_leafdata());
    if (last_nsf_on_sec.is_set || is_set(last_nsf_on_sec.yfilter)) leaf_name_data.push_back(last_nsf_on_sec.get_name_leafdata());
    if (nsf_state.is_set || is_set(nsf_state.yfilter)) leaf_name_data.push_back(nsf_state.get_name_leafdata());
    if (nsf_time_left.is_set || is_set(nsf_time_left.yfilter)) leaf_name_data.push_back(nsf_time_left.get_name_leafdata());
    if (nsf_timeout.is_set || is_set(nsf_timeout.yfilter)) leaf_name_data.push_back(nsf_timeout.get_name_leafdata());
    if (respawn_count.is_set || is_set(respawn_count.yfilter)) leaf_name_data.push_back(respawn_count.get_name_leafdata());
    if (waiting_membership.is_set || is_set(waiting_membership.yfilter)) leaf_name_data.push_back(waiting_membership.get_name_leafdata());
    if (waiting_timer.is_set || is_set(waiting_timer.yfilter)) leaf_name_data.push_back(waiting_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Process::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Process::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Process::Nsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-state")
    {
        configured_state = value;
        configured_state.value_namespace = name_space;
        configured_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-icd-notif-recv")
    {
        last_icd_notif_recv = value;
        last_icd_notif_recv.value_namespace = name_space;
        last_icd_notif_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-icd-notif-recv-sec")
    {
        last_icd_notif_recv_sec = value;
        last_icd_notif_recv_sec.value_namespace = name_space;
        last_icd_notif_recv_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-nsf-off")
    {
        last_nsf_off = value;
        last_nsf_off.value_namespace = name_space;
        last_nsf_off.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-nsf-off-sec")
    {
        last_nsf_off_sec = value;
        last_nsf_off_sec.value_namespace = name_space;
        last_nsf_off_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-nsf-on")
    {
        last_nsf_on = value;
        last_nsf_on.value_namespace = name_space;
        last_nsf_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-nsf-on-sec")
    {
        last_nsf_on_sec = value;
        last_nsf_on_sec.value_namespace = name_space;
        last_nsf_on_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-state")
    {
        nsf_state = value;
        nsf_state.value_namespace = name_space;
        nsf_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-time-left")
    {
        nsf_time_left = value;
        nsf_time_left.value_namespace = name_space;
        nsf_time_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsf-timeout")
    {
        nsf_timeout = value;
        nsf_timeout.value_namespace = name_space;
        nsf_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn-count")
    {
        respawn_count = value;
        respawn_count.value_namespace = name_space;
        respawn_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waiting-membership")
    {
        waiting_membership = value;
        waiting_membership.value_namespace = name_space;
        waiting_membership.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "waiting-timer")
    {
        waiting_timer = value;
        waiting_timer.value_namespace = name_space;
        waiting_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Process::Nsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-state")
    {
        configured_state.yfilter = yfilter;
    }
    if(value_path == "last-icd-notif-recv")
    {
        last_icd_notif_recv.yfilter = yfilter;
    }
    if(value_path == "last-icd-notif-recv-sec")
    {
        last_icd_notif_recv_sec.yfilter = yfilter;
    }
    if(value_path == "last-nsf-off")
    {
        last_nsf_off.yfilter = yfilter;
    }
    if(value_path == "last-nsf-off-sec")
    {
        last_nsf_off_sec.yfilter = yfilter;
    }
    if(value_path == "last-nsf-on")
    {
        last_nsf_on.yfilter = yfilter;
    }
    if(value_path == "last-nsf-on-sec")
    {
        last_nsf_on_sec.yfilter = yfilter;
    }
    if(value_path == "nsf-state")
    {
        nsf_state.yfilter = yfilter;
    }
    if(value_path == "nsf-time-left")
    {
        nsf_time_left.yfilter = yfilter;
    }
    if(value_path == "nsf-timeout")
    {
        nsf_timeout.yfilter = yfilter;
    }
    if(value_path == "respawn-count")
    {
        respawn_count.yfilter = yfilter;
    }
    if(value_path == "waiting-membership")
    {
        waiting_membership.yfilter = yfilter;
    }
    if(value_path == "waiting-timer")
    {
        waiting_timer.yfilter = yfilter;
    }
}

bool Pim::Standby::Process::Nsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-state" || name == "last-icd-notif-recv" || name == "last-icd-notif-recv-sec" || name == "last-nsf-off" || name == "last-nsf-off-sec" || name == "last-nsf-on" || name == "last-nsf-on-sec" || name == "nsf-state" || name == "nsf-time-left" || name == "nsf-timeout" || name == "respawn-count" || name == "waiting-membership" || name == "waiting-timer")
        return true;
    return false;
}

Pim::Standby::Process::Issu::Issu()
    :
    checkpoint_idt_timestamp{YType::uint64, "checkpoint-idt-timestamp"},
    eoc_received_timestamp{YType::uint64, "eoc-received-timestamp"},
    ihms_received_timestamp{YType::uint64, "ihms-received-timestamp"},
    informationvalid{YType::boolean, "informationvalid"},
    is_checkpoint_idt_done{YType::boolean, "is-checkpoint-idt-done"},
    is_eoc_received{YType::boolean, "is-eoc-received"},
    is_ihms_done_received{YType::boolean, "is-ihms-done-received"},
    is_nbr_sync_received{YType::boolean, "is-nbr-sync-received"},
    is_rib_sync_received{YType::boolean, "is-rib-sync-received"},
    last_ha_role_notification_received{YType::uint64, "last-ha-role-notification-received"},
    last_issu_phase_notification_received{YType::uint64, "last-issu-phase-notification-received"},
    last_issu_role_notification_received{YType::uint64, "last-issu-role-notification-received"},
    nbr_sync_received_timestamp{YType::uint64, "nbr-sync-received-timestamp"},
    phase_issu{YType::int32, "phase-issu"},
    rib_sync_received_timestamp{YType::uint64, "rib-sync-received-timestamp"},
    role_ha{YType::int32, "role-ha"},
    role_issu{YType::int32, "role-issu"}
{
    yang_name = "issu"; yang_parent_name = "process";
}

Pim::Standby::Process::Issu::~Issu()
{
}

bool Pim::Standby::Process::Issu::has_data() const
{
    return checkpoint_idt_timestamp.is_set
	|| eoc_received_timestamp.is_set
	|| ihms_received_timestamp.is_set
	|| informationvalid.is_set
	|| is_checkpoint_idt_done.is_set
	|| is_eoc_received.is_set
	|| is_ihms_done_received.is_set
	|| is_nbr_sync_received.is_set
	|| is_rib_sync_received.is_set
	|| last_ha_role_notification_received.is_set
	|| last_issu_phase_notification_received.is_set
	|| last_issu_role_notification_received.is_set
	|| nbr_sync_received_timestamp.is_set
	|| phase_issu.is_set
	|| rib_sync_received_timestamp.is_set
	|| role_ha.is_set
	|| role_issu.is_set;
}

bool Pim::Standby::Process::Issu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(checkpoint_idt_timestamp.yfilter)
	|| ydk::is_set(eoc_received_timestamp.yfilter)
	|| ydk::is_set(ihms_received_timestamp.yfilter)
	|| ydk::is_set(informationvalid.yfilter)
	|| ydk::is_set(is_checkpoint_idt_done.yfilter)
	|| ydk::is_set(is_eoc_received.yfilter)
	|| ydk::is_set(is_ihms_done_received.yfilter)
	|| ydk::is_set(is_nbr_sync_received.yfilter)
	|| ydk::is_set(is_rib_sync_received.yfilter)
	|| ydk::is_set(last_ha_role_notification_received.yfilter)
	|| ydk::is_set(last_issu_phase_notification_received.yfilter)
	|| ydk::is_set(last_issu_role_notification_received.yfilter)
	|| ydk::is_set(nbr_sync_received_timestamp.yfilter)
	|| ydk::is_set(phase_issu.yfilter)
	|| ydk::is_set(rib_sync_received_timestamp.yfilter)
	|| ydk::is_set(role_ha.yfilter)
	|| ydk::is_set(role_issu.yfilter);
}

std::string Pim::Standby::Process::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Process::Issu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (checkpoint_idt_timestamp.is_set || is_set(checkpoint_idt_timestamp.yfilter)) leaf_name_data.push_back(checkpoint_idt_timestamp.get_name_leafdata());
    if (eoc_received_timestamp.is_set || is_set(eoc_received_timestamp.yfilter)) leaf_name_data.push_back(eoc_received_timestamp.get_name_leafdata());
    if (ihms_received_timestamp.is_set || is_set(ihms_received_timestamp.yfilter)) leaf_name_data.push_back(ihms_received_timestamp.get_name_leafdata());
    if (informationvalid.is_set || is_set(informationvalid.yfilter)) leaf_name_data.push_back(informationvalid.get_name_leafdata());
    if (is_checkpoint_idt_done.is_set || is_set(is_checkpoint_idt_done.yfilter)) leaf_name_data.push_back(is_checkpoint_idt_done.get_name_leafdata());
    if (is_eoc_received.is_set || is_set(is_eoc_received.yfilter)) leaf_name_data.push_back(is_eoc_received.get_name_leafdata());
    if (is_ihms_done_received.is_set || is_set(is_ihms_done_received.yfilter)) leaf_name_data.push_back(is_ihms_done_received.get_name_leafdata());
    if (is_nbr_sync_received.is_set || is_set(is_nbr_sync_received.yfilter)) leaf_name_data.push_back(is_nbr_sync_received.get_name_leafdata());
    if (is_rib_sync_received.is_set || is_set(is_rib_sync_received.yfilter)) leaf_name_data.push_back(is_rib_sync_received.get_name_leafdata());
    if (last_ha_role_notification_received.is_set || is_set(last_ha_role_notification_received.yfilter)) leaf_name_data.push_back(last_ha_role_notification_received.get_name_leafdata());
    if (last_issu_phase_notification_received.is_set || is_set(last_issu_phase_notification_received.yfilter)) leaf_name_data.push_back(last_issu_phase_notification_received.get_name_leafdata());
    if (last_issu_role_notification_received.is_set || is_set(last_issu_role_notification_received.yfilter)) leaf_name_data.push_back(last_issu_role_notification_received.get_name_leafdata());
    if (nbr_sync_received_timestamp.is_set || is_set(nbr_sync_received_timestamp.yfilter)) leaf_name_data.push_back(nbr_sync_received_timestamp.get_name_leafdata());
    if (phase_issu.is_set || is_set(phase_issu.yfilter)) leaf_name_data.push_back(phase_issu.get_name_leafdata());
    if (rib_sync_received_timestamp.is_set || is_set(rib_sync_received_timestamp.yfilter)) leaf_name_data.push_back(rib_sync_received_timestamp.get_name_leafdata());
    if (role_ha.is_set || is_set(role_ha.yfilter)) leaf_name_data.push_back(role_ha.get_name_leafdata());
    if (role_issu.is_set || is_set(role_issu.yfilter)) leaf_name_data.push_back(role_issu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Process::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Process::Issu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Process::Issu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "checkpoint-idt-timestamp")
    {
        checkpoint_idt_timestamp = value;
        checkpoint_idt_timestamp.value_namespace = name_space;
        checkpoint_idt_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eoc-received-timestamp")
    {
        eoc_received_timestamp = value;
        eoc_received_timestamp.value_namespace = name_space;
        eoc_received_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ihms-received-timestamp")
    {
        ihms_received_timestamp = value;
        ihms_received_timestamp.value_namespace = name_space;
        ihms_received_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "informationvalid")
    {
        informationvalid = value;
        informationvalid.value_namespace = name_space;
        informationvalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-checkpoint-idt-done")
    {
        is_checkpoint_idt_done = value;
        is_checkpoint_idt_done.value_namespace = name_space;
        is_checkpoint_idt_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-eoc-received")
    {
        is_eoc_received = value;
        is_eoc_received.value_namespace = name_space;
        is_eoc_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ihms-done-received")
    {
        is_ihms_done_received = value;
        is_ihms_done_received.value_namespace = name_space;
        is_ihms_done_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nbr-sync-received")
    {
        is_nbr_sync_received = value;
        is_nbr_sync_received.value_namespace = name_space;
        is_nbr_sync_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-sync-received")
    {
        is_rib_sync_received = value;
        is_rib_sync_received.value_namespace = name_space;
        is_rib_sync_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-ha-role-notification-received")
    {
        last_ha_role_notification_received = value;
        last_ha_role_notification_received.value_namespace = name_space;
        last_ha_role_notification_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-issu-phase-notification-received")
    {
        last_issu_phase_notification_received = value;
        last_issu_phase_notification_received.value_namespace = name_space;
        last_issu_phase_notification_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-issu-role-notification-received")
    {
        last_issu_role_notification_received = value;
        last_issu_role_notification_received.value_namespace = name_space;
        last_issu_role_notification_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbr-sync-received-timestamp")
    {
        nbr_sync_received_timestamp = value;
        nbr_sync_received_timestamp.value_namespace = name_space;
        nbr_sync_received_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "phase-issu")
    {
        phase_issu = value;
        phase_issu.value_namespace = name_space;
        phase_issu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-sync-received-timestamp")
    {
        rib_sync_received_timestamp = value;
        rib_sync_received_timestamp.value_namespace = name_space;
        rib_sync_received_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role-ha")
    {
        role_ha = value;
        role_ha.value_namespace = name_space;
        role_ha.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role-issu")
    {
        role_issu = value;
        role_issu.value_namespace = name_space;
        role_issu.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Process::Issu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "checkpoint-idt-timestamp")
    {
        checkpoint_idt_timestamp.yfilter = yfilter;
    }
    if(value_path == "eoc-received-timestamp")
    {
        eoc_received_timestamp.yfilter = yfilter;
    }
    if(value_path == "ihms-received-timestamp")
    {
        ihms_received_timestamp.yfilter = yfilter;
    }
    if(value_path == "informationvalid")
    {
        informationvalid.yfilter = yfilter;
    }
    if(value_path == "is-checkpoint-idt-done")
    {
        is_checkpoint_idt_done.yfilter = yfilter;
    }
    if(value_path == "is-eoc-received")
    {
        is_eoc_received.yfilter = yfilter;
    }
    if(value_path == "is-ihms-done-received")
    {
        is_ihms_done_received.yfilter = yfilter;
    }
    if(value_path == "is-nbr-sync-received")
    {
        is_nbr_sync_received.yfilter = yfilter;
    }
    if(value_path == "is-rib-sync-received")
    {
        is_rib_sync_received.yfilter = yfilter;
    }
    if(value_path == "last-ha-role-notification-received")
    {
        last_ha_role_notification_received.yfilter = yfilter;
    }
    if(value_path == "last-issu-phase-notification-received")
    {
        last_issu_phase_notification_received.yfilter = yfilter;
    }
    if(value_path == "last-issu-role-notification-received")
    {
        last_issu_role_notification_received.yfilter = yfilter;
    }
    if(value_path == "nbr-sync-received-timestamp")
    {
        nbr_sync_received_timestamp.yfilter = yfilter;
    }
    if(value_path == "phase-issu")
    {
        phase_issu.yfilter = yfilter;
    }
    if(value_path == "rib-sync-received-timestamp")
    {
        rib_sync_received_timestamp.yfilter = yfilter;
    }
    if(value_path == "role-ha")
    {
        role_ha.yfilter = yfilter;
    }
    if(value_path == "role-issu")
    {
        role_issu.yfilter = yfilter;
    }
}

bool Pim::Standby::Process::Issu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-idt-timestamp" || name == "eoc-received-timestamp" || name == "ihms-received-timestamp" || name == "informationvalid" || name == "is-checkpoint-idt-done" || name == "is-eoc-received" || name == "is-ihms-done-received" || name == "is-nbr-sync-received" || name == "is-rib-sync-received" || name == "last-ha-role-notification-received" || name == "last-issu-phase-notification-received" || name == "last-issu-role-notification-received" || name == "nbr-sync-received-timestamp" || name == "phase-issu" || name == "rib-sync-received-timestamp" || name == "role-ha" || name == "role-issu")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "standby";
}

Pim::Standby::Vrfs::~Vrfs()
{
}

bool Pim::Standby::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    auto_rp(std::make_shared<Pim::Standby::Vrfs::Vrf::AutoRp>())
	,bgp_afs(std::make_shared<Pim::Standby::Vrfs::Vrf::BgpAfs>())
	,bidir_df_states(std::make_shared<Pim::Standby::Vrfs::Vrf::BidirDfStates>())
	,bidir_df_winners(std::make_shared<Pim::Standby::Vrfs::Vrf::BidirDfWinners>())
	,bsr(std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr>())
	,context(std::make_shared<Pim::Standby::Vrfs::Vrf::Context>())
	,gre(std::make_shared<Pim::Standby::Vrfs::Vrf::Gre>())
	,group_map_match_rpfs(std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs>())
	,group_map_match_sources(std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapMatchSources>())
	,group_map_rpfs(std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapRpfs>())
	,group_map_sources(std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapSources>())
	,ifrs_interfaces(std::make_shared<Pim::Standby::Vrfs::Vrf::IfrsInterfaces>())
	,ifrs_summary(std::make_shared<Pim::Standby::Vrfs::Vrf::IfrsSummary>())
	,interface_old_formats(std::make_shared<Pim::Standby::Vrfs::Vrf::InterfaceOldFormats>())
	,interface_statistics(std::make_shared<Pim::Standby::Vrfs::Vrf::InterfaceStatistics>())
	,interfaces(std::make_shared<Pim::Standby::Vrfs::Vrf::Interfaces>())
	,jp_statistics(std::make_shared<Pim::Standby::Vrfs::Vrf::JpStatistics>())
	,mib_databases(std::make_shared<Pim::Standby::Vrfs::Vrf::MibDatabases>())
	,multicast_static_routes(std::make_shared<Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes>())
	,neighbor_old_formats(std::make_shared<Pim::Standby::Vrfs::Vrf::NeighborOldFormats>())
	,neighbor_summaries(std::make_shared<Pim::Standby::Vrfs::Vrf::NeighborSummaries>())
	,neighbors(std::make_shared<Pim::Standby::Vrfs::Vrf::Neighbors>())
	,net_io_tunnels(std::make_shared<Pim::Standby::Vrfs::Vrf::NetIoTunnels>())
	,ranges(std::make_shared<Pim::Standby::Vrfs::Vrf::Ranges>())
	,route_policy(std::make_shared<Pim::Standby::Vrfs::Vrf::RoutePolicy>())
	,rpf_redirect(std::make_shared<Pim::Standby::Vrfs::Vrf::RpfRedirect>())
	,rpf_summary(std::make_shared<Pim::Standby::Vrfs::Vrf::RpfSummary>())
	,safs(std::make_shared<Pim::Standby::Vrfs::Vrf::Safs>())
	,summary(std::make_shared<Pim::Standby::Vrfs::Vrf::Summary>())
	,table_contexts(std::make_shared<Pim::Standby::Vrfs::Vrf::TableContexts>())
	,topologies(std::make_shared<Pim::Standby::Vrfs::Vrf::Topologies>())
	,topology_entry_flag_route_counts(std::make_shared<Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts>())
	,topology_interface_flag_route_counts(std::make_shared<Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts>())
	,topology_route_count(std::make_shared<Pim::Standby::Vrfs::Vrf::TopologyRouteCount>())
	,traffic_counters(std::make_shared<Pim::Standby::Vrfs::Vrf::TrafficCounters>())
	,tunnels(std::make_shared<Pim::Standby::Vrfs::Vrf::Tunnels>())
{
    auto_rp->parent = this;

    bgp_afs->parent = this;

    bidir_df_states->parent = this;

    bidir_df_winners->parent = this;

    bsr->parent = this;

    context->parent = this;

    gre->parent = this;

    group_map_match_rpfs->parent = this;

    group_map_match_sources->parent = this;

    group_map_rpfs->parent = this;

    group_map_sources->parent = this;

    ifrs_interfaces->parent = this;

    ifrs_summary->parent = this;

    interface_old_formats->parent = this;

    interface_statistics->parent = this;

    interfaces->parent = this;

    jp_statistics->parent = this;

    mib_databases->parent = this;

    multicast_static_routes->parent = this;

    neighbor_old_formats->parent = this;

    neighbor_summaries->parent = this;

    neighbors->parent = this;

    net_io_tunnels->parent = this;

    ranges->parent = this;

    route_policy->parent = this;

    rpf_redirect->parent = this;

    rpf_summary->parent = this;

    safs->parent = this;

    summary->parent = this;

    table_contexts->parent = this;

    topologies->parent = this;

    topology_entry_flag_route_counts->parent = this;

    topology_interface_flag_route_counts->parent = this;

    topology_route_count->parent = this;

    traffic_counters->parent = this;

    tunnels->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Pim::Standby::Vrfs::Vrf::~Vrf()
{
}

bool Pim::Standby::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (auto_rp !=  nullptr && auto_rp->has_data())
	|| (bgp_afs !=  nullptr && bgp_afs->has_data())
	|| (bidir_df_states !=  nullptr && bidir_df_states->has_data())
	|| (bidir_df_winners !=  nullptr && bidir_df_winners->has_data())
	|| (bsr !=  nullptr && bsr->has_data())
	|| (context !=  nullptr && context->has_data())
	|| (gre !=  nullptr && gre->has_data())
	|| (group_map_match_rpfs !=  nullptr && group_map_match_rpfs->has_data())
	|| (group_map_match_sources !=  nullptr && group_map_match_sources->has_data())
	|| (group_map_rpfs !=  nullptr && group_map_rpfs->has_data())
	|| (group_map_sources !=  nullptr && group_map_sources->has_data())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_data())
	|| (ifrs_summary !=  nullptr && ifrs_summary->has_data())
	|| (interface_old_formats !=  nullptr && interface_old_formats->has_data())
	|| (interface_statistics !=  nullptr && interface_statistics->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (jp_statistics !=  nullptr && jp_statistics->has_data())
	|| (mib_databases !=  nullptr && mib_databases->has_data())
	|| (multicast_static_routes !=  nullptr && multicast_static_routes->has_data())
	|| (neighbor_old_formats !=  nullptr && neighbor_old_formats->has_data())
	|| (neighbor_summaries !=  nullptr && neighbor_summaries->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (net_io_tunnels !=  nullptr && net_io_tunnels->has_data())
	|| (ranges !=  nullptr && ranges->has_data())
	|| (route_policy !=  nullptr && route_policy->has_data())
	|| (rpf_redirect !=  nullptr && rpf_redirect->has_data())
	|| (rpf_summary !=  nullptr && rpf_summary->has_data())
	|| (safs !=  nullptr && safs->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (table_contexts !=  nullptr && table_contexts->has_data())
	|| (topologies !=  nullptr && topologies->has_data())
	|| (topology_entry_flag_route_counts !=  nullptr && topology_entry_flag_route_counts->has_data())
	|| (topology_interface_flag_route_counts !=  nullptr && topology_interface_flag_route_counts->has_data())
	|| (topology_route_count !=  nullptr && topology_route_count->has_data())
	|| (traffic_counters !=  nullptr && traffic_counters->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool Pim::Standby::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (auto_rp !=  nullptr && auto_rp->has_operation())
	|| (bgp_afs !=  nullptr && bgp_afs->has_operation())
	|| (bidir_df_states !=  nullptr && bidir_df_states->has_operation())
	|| (bidir_df_winners !=  nullptr && bidir_df_winners->has_operation())
	|| (bsr !=  nullptr && bsr->has_operation())
	|| (context !=  nullptr && context->has_operation())
	|| (gre !=  nullptr && gre->has_operation())
	|| (group_map_match_rpfs !=  nullptr && group_map_match_rpfs->has_operation())
	|| (group_map_match_sources !=  nullptr && group_map_match_sources->has_operation())
	|| (group_map_rpfs !=  nullptr && group_map_rpfs->has_operation())
	|| (group_map_sources !=  nullptr && group_map_sources->has_operation())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_operation())
	|| (ifrs_summary !=  nullptr && ifrs_summary->has_operation())
	|| (interface_old_formats !=  nullptr && interface_old_formats->has_operation())
	|| (interface_statistics !=  nullptr && interface_statistics->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (jp_statistics !=  nullptr && jp_statistics->has_operation())
	|| (mib_databases !=  nullptr && mib_databases->has_operation())
	|| (multicast_static_routes !=  nullptr && multicast_static_routes->has_operation())
	|| (neighbor_old_formats !=  nullptr && neighbor_old_formats->has_operation())
	|| (neighbor_summaries !=  nullptr && neighbor_summaries->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (net_io_tunnels !=  nullptr && net_io_tunnels->has_operation())
	|| (ranges !=  nullptr && ranges->has_operation())
	|| (route_policy !=  nullptr && route_policy->has_operation())
	|| (rpf_redirect !=  nullptr && rpf_redirect->has_operation())
	|| (rpf_summary !=  nullptr && rpf_summary->has_operation())
	|| (safs !=  nullptr && safs->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (table_contexts !=  nullptr && table_contexts->has_operation())
	|| (topologies !=  nullptr && topologies->has_operation())
	|| (topology_entry_flag_route_counts !=  nullptr && topology_entry_flag_route_counts->has_operation())
	|| (topology_interface_flag_route_counts !=  nullptr && topology_interface_flag_route_counts->has_operation())
	|| (topology_route_count !=  nullptr && topology_route_count->has_operation())
	|| (traffic_counters !=  nullptr && traffic_counters->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-pim-oper:pim/standby/vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-rp")
    {
        if(auto_rp == nullptr)
        {
            auto_rp = std::make_shared<Pim::Standby::Vrfs::Vrf::AutoRp>();
        }
        return auto_rp;
    }

    if(child_yang_name == "bgp-afs")
    {
        if(bgp_afs == nullptr)
        {
            bgp_afs = std::make_shared<Pim::Standby::Vrfs::Vrf::BgpAfs>();
        }
        return bgp_afs;
    }

    if(child_yang_name == "bidir-df-states")
    {
        if(bidir_df_states == nullptr)
        {
            bidir_df_states = std::make_shared<Pim::Standby::Vrfs::Vrf::BidirDfStates>();
        }
        return bidir_df_states;
    }

    if(child_yang_name == "bidir-df-winners")
    {
        if(bidir_df_winners == nullptr)
        {
            bidir_df_winners = std::make_shared<Pim::Standby::Vrfs::Vrf::BidirDfWinners>();
        }
        return bidir_df_winners;
    }

    if(child_yang_name == "bsr")
    {
        if(bsr == nullptr)
        {
            bsr = std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr>();
        }
        return bsr;
    }

    if(child_yang_name == "context")
    {
        if(context == nullptr)
        {
            context = std::make_shared<Pim::Standby::Vrfs::Vrf::Context>();
        }
        return context;
    }

    if(child_yang_name == "gre")
    {
        if(gre == nullptr)
        {
            gre = std::make_shared<Pim::Standby::Vrfs::Vrf::Gre>();
        }
        return gre;
    }

    if(child_yang_name == "group-map-match-rpfs")
    {
        if(group_map_match_rpfs == nullptr)
        {
            group_map_match_rpfs = std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs>();
        }
        return group_map_match_rpfs;
    }

    if(child_yang_name == "group-map-match-sources")
    {
        if(group_map_match_sources == nullptr)
        {
            group_map_match_sources = std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapMatchSources>();
        }
        return group_map_match_sources;
    }

    if(child_yang_name == "group-map-rpfs")
    {
        if(group_map_rpfs == nullptr)
        {
            group_map_rpfs = std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapRpfs>();
        }
        return group_map_rpfs;
    }

    if(child_yang_name == "group-map-sources")
    {
        if(group_map_sources == nullptr)
        {
            group_map_sources = std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapSources>();
        }
        return group_map_sources;
    }

    if(child_yang_name == "ifrs-interfaces")
    {
        if(ifrs_interfaces == nullptr)
        {
            ifrs_interfaces = std::make_shared<Pim::Standby::Vrfs::Vrf::IfrsInterfaces>();
        }
        return ifrs_interfaces;
    }

    if(child_yang_name == "ifrs-summary")
    {
        if(ifrs_summary == nullptr)
        {
            ifrs_summary = std::make_shared<Pim::Standby::Vrfs::Vrf::IfrsSummary>();
        }
        return ifrs_summary;
    }

    if(child_yang_name == "interface-old-formats")
    {
        if(interface_old_formats == nullptr)
        {
            interface_old_formats = std::make_shared<Pim::Standby::Vrfs::Vrf::InterfaceOldFormats>();
        }
        return interface_old_formats;
    }

    if(child_yang_name == "interface-statistics")
    {
        if(interface_statistics == nullptr)
        {
            interface_statistics = std::make_shared<Pim::Standby::Vrfs::Vrf::InterfaceStatistics>();
        }
        return interface_statistics;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Pim::Standby::Vrfs::Vrf::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "jp-statistics")
    {
        if(jp_statistics == nullptr)
        {
            jp_statistics = std::make_shared<Pim::Standby::Vrfs::Vrf::JpStatistics>();
        }
        return jp_statistics;
    }

    if(child_yang_name == "mib-databases")
    {
        if(mib_databases == nullptr)
        {
            mib_databases = std::make_shared<Pim::Standby::Vrfs::Vrf::MibDatabases>();
        }
        return mib_databases;
    }

    if(child_yang_name == "multicast-static-routes")
    {
        if(multicast_static_routes == nullptr)
        {
            multicast_static_routes = std::make_shared<Pim::Standby::Vrfs::Vrf::MulticastStaticRoutes>();
        }
        return multicast_static_routes;
    }

    if(child_yang_name == "neighbor-old-formats")
    {
        if(neighbor_old_formats == nullptr)
        {
            neighbor_old_formats = std::make_shared<Pim::Standby::Vrfs::Vrf::NeighborOldFormats>();
        }
        return neighbor_old_formats;
    }

    if(child_yang_name == "neighbor-summaries")
    {
        if(neighbor_summaries == nullptr)
        {
            neighbor_summaries = std::make_shared<Pim::Standby::Vrfs::Vrf::NeighborSummaries>();
        }
        return neighbor_summaries;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Pim::Standby::Vrfs::Vrf::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "net-io-tunnels")
    {
        if(net_io_tunnels == nullptr)
        {
            net_io_tunnels = std::make_shared<Pim::Standby::Vrfs::Vrf::NetIoTunnels>();
        }
        return net_io_tunnels;
    }

    if(child_yang_name == "ranges")
    {
        if(ranges == nullptr)
        {
            ranges = std::make_shared<Pim::Standby::Vrfs::Vrf::Ranges>();
        }
        return ranges;
    }

    if(child_yang_name == "route-policy")
    {
        if(route_policy == nullptr)
        {
            route_policy = std::make_shared<Pim::Standby::Vrfs::Vrf::RoutePolicy>();
        }
        return route_policy;
    }

    if(child_yang_name == "rpf-redirect")
    {
        if(rpf_redirect == nullptr)
        {
            rpf_redirect = std::make_shared<Pim::Standby::Vrfs::Vrf::RpfRedirect>();
        }
        return rpf_redirect;
    }

    if(child_yang_name == "rpf-summary")
    {
        if(rpf_summary == nullptr)
        {
            rpf_summary = std::make_shared<Pim::Standby::Vrfs::Vrf::RpfSummary>();
        }
        return rpf_summary;
    }

    if(child_yang_name == "safs")
    {
        if(safs == nullptr)
        {
            safs = std::make_shared<Pim::Standby::Vrfs::Vrf::Safs>();
        }
        return safs;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Pim::Standby::Vrfs::Vrf::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "table-contexts")
    {
        if(table_contexts == nullptr)
        {
            table_contexts = std::make_shared<Pim::Standby::Vrfs::Vrf::TableContexts>();
        }
        return table_contexts;
    }

    if(child_yang_name == "topologies")
    {
        if(topologies == nullptr)
        {
            topologies = std::make_shared<Pim::Standby::Vrfs::Vrf::Topologies>();
        }
        return topologies;
    }

    if(child_yang_name == "topology-entry-flag-route-counts")
    {
        if(topology_entry_flag_route_counts == nullptr)
        {
            topology_entry_flag_route_counts = std::make_shared<Pim::Standby::Vrfs::Vrf::TopologyEntryFlagRouteCounts>();
        }
        return topology_entry_flag_route_counts;
    }

    if(child_yang_name == "topology-interface-flag-route-counts")
    {
        if(topology_interface_flag_route_counts == nullptr)
        {
            topology_interface_flag_route_counts = std::make_shared<Pim::Standby::Vrfs::Vrf::TopologyInterfaceFlagRouteCounts>();
        }
        return topology_interface_flag_route_counts;
    }

    if(child_yang_name == "topology-route-count")
    {
        if(topology_route_count == nullptr)
        {
            topology_route_count = std::make_shared<Pim::Standby::Vrfs::Vrf::TopologyRouteCount>();
        }
        return topology_route_count;
    }

    if(child_yang_name == "traffic-counters")
    {
        if(traffic_counters == nullptr)
        {
            traffic_counters = std::make_shared<Pim::Standby::Vrfs::Vrf::TrafficCounters>();
        }
        return traffic_counters;
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<Pim::Standby::Vrfs::Vrf::Tunnels>();
        }
        return tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_rp != nullptr)
    {
        children["auto-rp"] = auto_rp;
    }

    if(bgp_afs != nullptr)
    {
        children["bgp-afs"] = bgp_afs;
    }

    if(bidir_df_states != nullptr)
    {
        children["bidir-df-states"] = bidir_df_states;
    }

    if(bidir_df_winners != nullptr)
    {
        children["bidir-df-winners"] = bidir_df_winners;
    }

    if(bsr != nullptr)
    {
        children["bsr"] = bsr;
    }

    if(context != nullptr)
    {
        children["context"] = context;
    }

    if(gre != nullptr)
    {
        children["gre"] = gre;
    }

    if(group_map_match_rpfs != nullptr)
    {
        children["group-map-match-rpfs"] = group_map_match_rpfs;
    }

    if(group_map_match_sources != nullptr)
    {
        children["group-map-match-sources"] = group_map_match_sources;
    }

    if(group_map_rpfs != nullptr)
    {
        children["group-map-rpfs"] = group_map_rpfs;
    }

    if(group_map_sources != nullptr)
    {
        children["group-map-sources"] = group_map_sources;
    }

    if(ifrs_interfaces != nullptr)
    {
        children["ifrs-interfaces"] = ifrs_interfaces;
    }

    if(ifrs_summary != nullptr)
    {
        children["ifrs-summary"] = ifrs_summary;
    }

    if(interface_old_formats != nullptr)
    {
        children["interface-old-formats"] = interface_old_formats;
    }

    if(interface_statistics != nullptr)
    {
        children["interface-statistics"] = interface_statistics;
    }

    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(jp_statistics != nullptr)
    {
        children["jp-statistics"] = jp_statistics;
    }

    if(mib_databases != nullptr)
    {
        children["mib-databases"] = mib_databases;
    }

    if(multicast_static_routes != nullptr)
    {
        children["multicast-static-routes"] = multicast_static_routes;
    }

    if(neighbor_old_formats != nullptr)
    {
        children["neighbor-old-formats"] = neighbor_old_formats;
    }

    if(neighbor_summaries != nullptr)
    {
        children["neighbor-summaries"] = neighbor_summaries;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    if(net_io_tunnels != nullptr)
    {
        children["net-io-tunnels"] = net_io_tunnels;
    }

    if(ranges != nullptr)
    {
        children["ranges"] = ranges;
    }

    if(route_policy != nullptr)
    {
        children["route-policy"] = route_policy;
    }

    if(rpf_redirect != nullptr)
    {
        children["rpf-redirect"] = rpf_redirect;
    }

    if(rpf_summary != nullptr)
    {
        children["rpf-summary"] = rpf_summary;
    }

    if(safs != nullptr)
    {
        children["safs"] = safs;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(table_contexts != nullptr)
    {
        children["table-contexts"] = table_contexts;
    }

    if(topologies != nullptr)
    {
        children["topologies"] = topologies;
    }

    if(topology_entry_flag_route_counts != nullptr)
    {
        children["topology-entry-flag-route-counts"] = topology_entry_flag_route_counts;
    }

    if(topology_interface_flag_route_counts != nullptr)
    {
        children["topology-interface-flag-route-counts"] = topology_interface_flag_route_counts;
    }

    if(topology_route_count != nullptr)
    {
        children["topology-route-count"] = topology_route_count;
    }

    if(traffic_counters != nullptr)
    {
        children["traffic-counters"] = traffic_counters;
    }

    if(tunnels != nullptr)
    {
        children["tunnels"] = tunnels;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-rp" || name == "bgp-afs" || name == "bidir-df-states" || name == "bidir-df-winners" || name == "bsr" || name == "context" || name == "gre" || name == "group-map-match-rpfs" || name == "group-map-match-sources" || name == "group-map-rpfs" || name == "group-map-sources" || name == "ifrs-interfaces" || name == "ifrs-summary" || name == "interface-old-formats" || name == "interface-statistics" || name == "interfaces" || name == "jp-statistics" || name == "mib-databases" || name == "multicast-static-routes" || name == "neighbor-old-formats" || name == "neighbor-summaries" || name == "neighbors" || name == "net-io-tunnels" || name == "ranges" || name == "route-policy" || name == "rpf-redirect" || name == "rpf-summary" || name == "safs" || name == "summary" || name == "table-contexts" || name == "topologies" || name == "topology-entry-flag-route-counts" || name == "topology-interface-flag-route-counts" || name == "topology-route-count" || name == "traffic-counters" || name == "tunnels" || name == "vrf-name")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterfaces()
{
    yang_name = "ifrs-interfaces"; yang_parent_name = "vrf";
}

Pim::Standby::Vrfs::Vrf::IfrsInterfaces::~IfrsInterfaces()
{
}

bool Pim::Standby::Vrfs::Vrf::IfrsInterfaces::has_data() const
{
    for (std::size_t index=0; index<ifrs_interface.size(); index++)
    {
        if(ifrs_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::IfrsInterfaces::has_operation() const
{
    for (std::size_t index=0; index<ifrs_interface.size(); index++)
    {
        if(ifrs_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::IfrsInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interfaces";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::IfrsInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IfrsInterfaces' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::IfrsInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ifrs-interface")
    {
        for(auto const & c : ifrs_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface>();
        c->parent = this;
        ifrs_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::IfrsInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ifrs_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::IfrsInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::IfrsInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::IfrsInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifrs-interface")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IfrsInterface()
    :
    interface_name{YType::str, "interface-name"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    dr_priority{YType::uint32, "dr-priority"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    generation_id{YType::uint32, "generation-id"},
    hello_expiry{YType::uint64, "hello-expiry"},
    hello_interval{YType::uint16, "hello-interval"},
    idb_acl_name{YType::str, "idb-acl-name"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_enabled{YType::boolean, "is-enabled"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    neighbor_count{YType::uint16, "neighbor-count"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    override_interval{YType::uint16, "override-interval"},
    passive_interface{YType::boolean, "passive-interface"},
    propagation_delay{YType::uint16, "propagation-delay"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    virtual_interface{YType::boolean, "virtual-interface"}
    	,
    dr_address(std::make_shared<Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress>())
{
    dr_address->parent = this;

    yang_name = "ifrs-interface"; yang_parent_name = "ifrs-interfaces";
}

Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::~IfrsInterface()
{
}

bool Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::has_data() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| configured_override_interval.is_set
	|| configured_propagation_delay.is_set
	|| dr_priority.is_set
	|| external_neighbor_count.is_set
	|| generation_id.is_set
	|| hello_expiry.is_set
	|| hello_interval.is_set
	|| idb_acl_name.is_set
	|| idb_acl_provided.is_set
	|| idb_current_count.is_set
	|| idb_max_count.is_set
	|| idb_oor_enabled.is_set
	|| idb_threshold_count.is_set
	|| interface_address_mask.is_set
	|| interface_name_xr.is_set
	|| is_batch_asserts_capable.is_set
	|| is_bidirectional_capable.is_set
	|| is_enabled.is_set
	|| is_proxy_capable.is_set
	|| join_prune_interval.is_set
	|| neighbor_count.is_set
	|| neighbor_filter_name.is_set
	|| override_interval.is_set
	|| passive_interface.is_set
	|| propagation_delay.is_set
	|| prune_delay_enabled.is_set
	|| virtual_interface.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::has_operation() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(are_we_dr.yfilter)
	|| ydk::is_set(bfd_enabled.yfilter)
	|| ydk::is_set(bfd_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(configured_override_interval.yfilter)
	|| ydk::is_set(configured_propagation_delay.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(external_neighbor_count.yfilter)
	|| ydk::is_set(generation_id.yfilter)
	|| ydk::is_set(hello_expiry.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(idb_acl_name.yfilter)
	|| ydk::is_set(idb_acl_provided.yfilter)
	|| ydk::is_set(idb_current_count.yfilter)
	|| ydk::is_set(idb_max_count.yfilter)
	|| ydk::is_set(idb_oor_enabled.yfilter)
	|| ydk::is_set(idb_threshold_count.yfilter)
	|| ydk::is_set(interface_address_mask.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(is_batch_asserts_capable.yfilter)
	|| ydk::is_set(is_bidirectional_capable.yfilter)
	|| ydk::is_set(is_enabled.yfilter)
	|| ydk::is_set(is_proxy_capable.yfilter)
	|| ydk::is_set(join_prune_interval.yfilter)
	|| ydk::is_set(neighbor_count.yfilter)
	|| ydk::is_set(neighbor_filter_name.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| ydk::is_set(prune_delay_enabled.yfilter)
	|| ydk::is_set(virtual_interface.yfilter)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IfrsInterface' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.yfilter)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.yfilter)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.yfilter)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.yfilter)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.yfilter)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.yfilter)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.yfilter)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.yfilter)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.yfilter)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.yfilter)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.yfilter)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.yfilter)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.yfilter)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.yfilter)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.yfilter)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.yfilter)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.yfilter)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.yfilter)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.yfilter)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.yfilter)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.yfilter)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.yfilter)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.yfilter)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.yfilter)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dr-address")
    {
        if(dr_address == nullptr)
        {
            dr_address = std::make_shared<Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress>();
        }
        return dr_address;
    }

    if(child_yang_name == "interface-address")
    {
        for(auto const & c : interface_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dr_address != nullptr)
    {
        children["dr-address"] = dr_address;
    }

    for (auto const & c : interface_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
        are_we_dr.value_namespace = name_space;
        are_we_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
        bfd_enabled.value_namespace = name_space;
        bfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
        bfd_interval.value_namespace = name_space;
        bfd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
        configured_override_interval.value_namespace = name_space;
        configured_override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
        configured_propagation_delay.value_namespace = name_space;
        configured_propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
        external_neighbor_count.value_namespace = name_space;
        external_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
        generation_id.value_namespace = name_space;
        generation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
        hello_expiry.value_namespace = name_space;
        hello_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
        idb_acl_name.value_namespace = name_space;
        idb_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
        idb_acl_provided.value_namespace = name_space;
        idb_acl_provided.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
        idb_current_count.value_namespace = name_space;
        idb_current_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
        idb_max_count.value_namespace = name_space;
        idb_max_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
        idb_oor_enabled.value_namespace = name_space;
        idb_oor_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
        idb_threshold_count.value_namespace = name_space;
        idb_threshold_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
        interface_address_mask.value_namespace = name_space;
        interface_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
        is_batch_asserts_capable.value_namespace = name_space;
        is_batch_asserts_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
        is_bidirectional_capable.value_namespace = name_space;
        is_bidirectional_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
        is_enabled.value_namespace = name_space;
        is_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
        is_proxy_capable.value_namespace = name_space;
        is_proxy_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
        join_prune_interval.value_namespace = name_space;
        join_prune_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
        neighbor_count.value_namespace = name_space;
        neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
        neighbor_filter_name.value_namespace = name_space;
        neighbor_filter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
        prune_delay_enabled.value_namespace = name_space;
        prune_delay_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
        virtual_interface.value_namespace = name_space;
        virtual_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr.yfilter = yfilter;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval.yfilter = yfilter;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "generation-id")
    {
        generation_id.yfilter = yfilter;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name.yfilter = yfilter;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided.yfilter = yfilter;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count.yfilter = yfilter;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count.yfilter = yfilter;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled.yfilter = yfilter;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count.yfilter = yfilter;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable.yfilter = yfilter;
    }
    if(value_path == "is-enabled")
    {
        is_enabled.yfilter = yfilter;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable.yfilter = yfilter;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval.yfilter = yfilter;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled.yfilter = yfilter;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dr-address" || name == "interface-address" || name == "interface-name" || name == "are-we-dr" || name == "bfd-enabled" || name == "bfd-interval" || name == "bfd-multiplier" || name == "configured-override-interval" || name == "configured-propagation-delay" || name == "dr-priority" || name == "external-neighbor-count" || name == "generation-id" || name == "hello-expiry" || name == "hello-interval" || name == "idb-acl-name" || name == "idb-acl-provided" || name == "idb-current-count" || name == "idb-max-count" || name == "idb-oor-enabled" || name == "idb-threshold-count" || name == "interface-address-mask" || name == "interface-name-xr" || name == "is-batch-asserts-capable" || name == "is-bidirectional-capable" || name == "is-enabled" || name == "is-proxy-capable" || name == "join-prune-interval" || name == "neighbor-count" || name == "neighbor-filter-name" || name == "override-interval" || name == "passive-interface" || name == "propagation-delay" || name == "prune-delay-enabled" || name == "virtual-interface")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "dr-address"; yang_parent_name = "ifrs-interface";
}

Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::~DrAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DrAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::DrAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "interface-address"; yang_parent_name = "ifrs-interface";
}

Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Safs::Safs()
{
    yang_name = "safs"; yang_parent_name = "vrf";
}

Pim::Standby::Vrfs::Vrf::Safs::~Safs()
{
}

bool Pim::Standby::Vrfs::Vrf::Safs::has_data() const
{
    for (std::size_t index=0; index<saf.size(); index++)
    {
        if(saf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::Safs::has_operation() const
{
    for (std::size_t index=0; index<saf.size(); index++)
    {
        if(saf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Safs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "safs";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Safs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Safs' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Safs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "saf")
    {
        for(auto const & c : saf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf>();
        c->parent = this;
        saf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Safs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : saf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Safs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::Safs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::Safs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "saf")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::Saf()
    :
    saf_name{YType::enumeration, "saf-name"},
    topology_name{YType::str, "topology-name"}
    	,
    rpf_hash_source_groups(std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups>())
	,rpf_hash_sources(std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources>())
	,rpfs(std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs>())
{
    rpf_hash_source_groups->parent = this;

    rpf_hash_sources->parent = this;

    rpfs->parent = this;

    yang_name = "saf"; yang_parent_name = "safs";
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::~Saf()
{
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::has_data() const
{
    return saf_name.is_set
	|| topology_name.is_set
	|| (rpf_hash_source_groups !=  nullptr && rpf_hash_source_groups->has_data())
	|| (rpf_hash_sources !=  nullptr && rpf_hash_sources->has_data())
	|| (rpfs !=  nullptr && rpfs->has_data());
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter)
	|| (rpf_hash_source_groups !=  nullptr && rpf_hash_source_groups->has_operation())
	|| (rpf_hash_sources !=  nullptr && rpf_hash_sources->has_operation())
	|| (rpfs !=  nullptr && rpfs->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::Safs::Saf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "saf";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Safs::Saf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Saf' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Safs::Saf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-hash-source-groups")
    {
        if(rpf_hash_source_groups == nullptr)
        {
            rpf_hash_source_groups = std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups>();
        }
        return rpf_hash_source_groups;
    }

    if(child_yang_name == "rpf-hash-sources")
    {
        if(rpf_hash_sources == nullptr)
        {
            rpf_hash_sources = std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources>();
        }
        return rpf_hash_sources;
    }

    if(child_yang_name == "rpfs")
    {
        if(rpfs == nullptr)
        {
            rpfs = std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs>();
        }
        return rpfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Safs::Saf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rpf_hash_source_groups != nullptr)
    {
        children["rpf-hash-source-groups"] = rpf_hash_source_groups;
    }

    if(rpf_hash_sources != nullptr)
    {
        children["rpf-hash-sources"] = rpf_hash_sources;
    }

    if(rpfs != nullptr)
    {
        children["rpfs"] = rpfs;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-hash-source-groups" || name == "rpf-hash-sources" || name == "rpfs" || name == "saf-name" || name == "topology-name")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroups()
{
    yang_name = "rpf-hash-source-groups"; yang_parent_name = "saf";
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::~RpfHashSourceGroups()
{
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::has_data() const
{
    for (std::size_t index=0; index<rpf_hash_source_group.size(); index++)
    {
        if(rpf_hash_source_group[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::has_operation() const
{
    for (std::size_t index=0; index<rpf_hash_source_group.size(); index++)
    {
        if(rpf_hash_source_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-source-groups";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfHashSourceGroups' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-hash-source-group")
    {
        for(auto const & c : rpf_hash_source_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup>();
        c->parent = this;
        rpf_hash_source_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rpf_hash_source_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-hash-source-group")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::RpfHashSourceGroup()
    :
    group_address{YType::str, "group-address"},
    mask_length{YType::int32, "mask-length"},
    mofrr{YType::int32, "mofrr"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_multipath_enabled{YType::boolean, "next-hop-multipath-enabled"},
    secondary_next_hop_interface{YType::str, "secondary-next-hop-interface"},
    source_address{YType::str, "source-address"}
    	,
    next_hop_address(std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress>())
	,secondary_next_hop_address(std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress>())
{
    next_hop_address->parent = this;

    secondary_next_hop_address->parent = this;

    yang_name = "rpf-hash-source-group"; yang_parent_name = "rpf-hash-source-groups";
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::~RpfHashSourceGroup()
{
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::has_data() const
{
    return group_address.is_set
	|| mask_length.is_set
	|| mofrr.is_set
	|| next_hop_interface.is_set
	|| next_hop_multipath_enabled.is_set
	|| secondary_next_hop_interface.is_set
	|| source_address.is_set
	|| (next_hop_address !=  nullptr && next_hop_address->has_data())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_data());
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(mask_length.yfilter)
	|| ydk::is_set(mofrr.yfilter)
	|| ydk::is_set(next_hop_interface.yfilter)
	|| ydk::is_set(next_hop_multipath_enabled.yfilter)
	|| ydk::is_set(secondary_next_hop_interface.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| (next_hop_address !=  nullptr && next_hop_address->has_operation())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-source-group";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfHashSourceGroup' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (mask_length.is_set || is_set(mask_length.yfilter)) leaf_name_data.push_back(mask_length.get_name_leafdata());
    if (mofrr.is_set || is_set(mofrr.yfilter)) leaf_name_data.push_back(mofrr.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.yfilter)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_multipath_enabled.is_set || is_set(next_hop_multipath_enabled.yfilter)) leaf_name_data.push_back(next_hop_multipath_enabled.get_name_leafdata());
    if (secondary_next_hop_interface.is_set || is_set(secondary_next_hop_interface.yfilter)) leaf_name_data.push_back(secondary_next_hop_interface.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-address")
    {
        if(next_hop_address == nullptr)
        {
            next_hop_address = std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress>();
        }
        return next_hop_address;
    }

    if(child_yang_name == "secondary-next-hop-address")
    {
        if(secondary_next_hop_address == nullptr)
        {
            secondary_next_hop_address = std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress>();
        }
        return secondary_next_hop_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop_address != nullptr)
    {
        children["next-hop-address"] = next_hop_address;
    }

    if(secondary_next_hop_address != nullptr)
    {
        children["secondary-next-hop-address"] = secondary_next_hop_address;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask-length")
    {
        mask_length = value;
        mask_length.value_namespace = name_space;
        mask_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mofrr")
    {
        mofrr = value;
        mofrr.value_namespace = name_space;
        mofrr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
        next_hop_interface.value_namespace = name_space;
        next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-multipath-enabled")
    {
        next_hop_multipath_enabled = value;
        next_hop_multipath_enabled.value_namespace = name_space;
        next_hop_multipath_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-next-hop-interface")
    {
        secondary_next_hop_interface = value;
        secondary_next_hop_interface.value_namespace = name_space;
        secondary_next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "mask-length")
    {
        mask_length.yfilter = yfilter;
    }
    if(value_path == "mofrr")
    {
        mofrr.yfilter = yfilter;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-multipath-enabled")
    {
        next_hop_multipath_enabled.yfilter = yfilter;
    }
    if(value_path == "secondary-next-hop-interface")
    {
        secondary_next_hop_interface.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "secondary-next-hop-address" || name == "group-address" || name == "mask-length" || name == "mofrr" || name == "next-hop-interface" || name == "next-hop-multipath-enabled" || name == "secondary-next-hop-interface" || name == "source-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::NextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "next-hop-address"; yang_parent_name = "rpf-hash-source-group";
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::~NextHopAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-address";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHopAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::NextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::SecondaryNextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "secondary-next-hop-address"; yang_parent_name = "rpf-hash-source-group";
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::~SecondaryNextHopAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-next-hop-address";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryNextHopAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSourceGroups::RpfHashSourceGroup::SecondaryNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSources()
{
    yang_name = "rpf-hash-sources"; yang_parent_name = "saf";
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::~RpfHashSources()
{
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::has_data() const
{
    for (std::size_t index=0; index<rpf_hash_source.size(); index++)
    {
        if(rpf_hash_source[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::has_operation() const
{
    for (std::size_t index=0; index<rpf_hash_source.size(); index++)
    {
        if(rpf_hash_source[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-sources";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfHashSources' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-hash-source")
    {
        for(auto const & c : rpf_hash_source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource>();
        c->parent = this;
        rpf_hash_source.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rpf_hash_source)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-hash-source")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::RpfHashSource()
    :
    mofrr{YType::int32, "mofrr"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_multipath_enabled{YType::boolean, "next-hop-multipath-enabled"},
    secondary_next_hop_interface{YType::str, "secondary-next-hop-interface"},
    source_address{YType::str, "source-address"}
    	,
    next_hop_address(std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress>())
	,secondary_next_hop_address(std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress>())
{
    next_hop_address->parent = this;

    secondary_next_hop_address->parent = this;

    yang_name = "rpf-hash-source"; yang_parent_name = "rpf-hash-sources";
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::~RpfHashSource()
{
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::has_data() const
{
    return mofrr.is_set
	|| next_hop_interface.is_set
	|| next_hop_multipath_enabled.is_set
	|| secondary_next_hop_interface.is_set
	|| source_address.is_set
	|| (next_hop_address !=  nullptr && next_hop_address->has_data())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_data());
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mofrr.yfilter)
	|| ydk::is_set(next_hop_interface.yfilter)
	|| ydk::is_set(next_hop_multipath_enabled.yfilter)
	|| ydk::is_set(secondary_next_hop_interface.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| (next_hop_address !=  nullptr && next_hop_address->has_operation())
	|| (secondary_next_hop_address !=  nullptr && secondary_next_hop_address->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-hash-source";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfHashSource' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mofrr.is_set || is_set(mofrr.yfilter)) leaf_name_data.push_back(mofrr.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.yfilter)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_multipath_enabled.is_set || is_set(next_hop_multipath_enabled.yfilter)) leaf_name_data.push_back(next_hop_multipath_enabled.get_name_leafdata());
    if (secondary_next_hop_interface.is_set || is_set(secondary_next_hop_interface.yfilter)) leaf_name_data.push_back(secondary_next_hop_interface.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "next-hop-address")
    {
        if(next_hop_address == nullptr)
        {
            next_hop_address = std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress>();
        }
        return next_hop_address;
    }

    if(child_yang_name == "secondary-next-hop-address")
    {
        if(secondary_next_hop_address == nullptr)
        {
            secondary_next_hop_address = std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress>();
        }
        return secondary_next_hop_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(next_hop_address != nullptr)
    {
        children["next-hop-address"] = next_hop_address;
    }

    if(secondary_next_hop_address != nullptr)
    {
        children["secondary-next-hop-address"] = secondary_next_hop_address;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mofrr")
    {
        mofrr = value;
        mofrr.value_namespace = name_space;
        mofrr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
        next_hop_interface.value_namespace = name_space;
        next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-multipath-enabled")
    {
        next_hop_multipath_enabled = value;
        next_hop_multipath_enabled.value_namespace = name_space;
        next_hop_multipath_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-next-hop-interface")
    {
        secondary_next_hop_interface = value;
        secondary_next_hop_interface.value_namespace = name_space;
        secondary_next_hop_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mofrr")
    {
        mofrr.yfilter = yfilter;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface.yfilter = yfilter;
    }
    if(value_path == "next-hop-multipath-enabled")
    {
        next_hop_multipath_enabled.yfilter = yfilter;
    }
    if(value_path == "secondary-next-hop-interface")
    {
        secondary_next_hop_interface.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "secondary-next-hop-address" || name == "mofrr" || name == "next-hop-interface" || name == "next-hop-multipath-enabled" || name == "secondary-next-hop-interface" || name == "source-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::NextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "next-hop-address"; yang_parent_name = "rpf-hash-source";
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::~NextHopAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-address";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHopAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::NextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::SecondaryNextHopAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "secondary-next-hop-address"; yang_parent_name = "rpf-hash-source";
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::~SecondaryNextHopAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-next-hop-address";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryNextHopAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::RpfHashSources::RpfHashSource::SecondaryNextHopAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpfs()
{
    yang_name = "rpfs"; yang_parent_name = "saf";
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::~Rpfs()
{
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::has_data() const
{
    for (std::size_t index=0; index<rpf.size(); index++)
    {
        if(rpf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::has_operation() const
{
    for (std::size_t index=0; index<rpf.size(); index++)
    {
        if(rpf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpfs";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rpfs' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf")
    {
        for(auto const & c : rpf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf>();
        c->parent = this;
        rpf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rpf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::Rpf()
    :
    registered_address{YType::str, "registered-address"},
    is_connected{YType::uint8, "is-connected"},
    is_rpf_bgp_route{YType::boolean, "is-rpf-bgp-route"},
    metric{YType::uint32, "metric"},
    metric_preference{YType::uint32, "metric-preference"}
    	,
    registered_address_xr(std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr>())
{
    registered_address_xr->parent = this;

    yang_name = "rpf"; yang_parent_name = "rpfs";
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::~Rpf()
{
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::has_data() const
{
    for (std::size_t index=0; index<rpf_path.size(); index++)
    {
        if(rpf_path[index]->has_data())
            return true;
    }
    return registered_address.is_set
	|| is_connected.is_set
	|| is_rpf_bgp_route.is_set
	|| metric.is_set
	|| metric_preference.is_set
	|| (registered_address_xr !=  nullptr && registered_address_xr->has_data());
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::has_operation() const
{
    for (std::size_t index=0; index<rpf_path.size(); index++)
    {
        if(rpf_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(registered_address.yfilter)
	|| ydk::is_set(is_connected.yfilter)
	|| ydk::is_set(is_rpf_bgp_route.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_preference.yfilter)
	|| (registered_address_xr !=  nullptr && registered_address_xr->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf" <<"[registered-address='" <<registered_address <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rpf' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (registered_address.is_set || is_set(registered_address.yfilter)) leaf_name_data.push_back(registered_address.get_name_leafdata());
    if (is_connected.is_set || is_set(is_connected.yfilter)) leaf_name_data.push_back(is_connected.get_name_leafdata());
    if (is_rpf_bgp_route.is_set || is_set(is_rpf_bgp_route.yfilter)) leaf_name_data.push_back(is_rpf_bgp_route.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_preference.is_set || is_set(metric_preference.yfilter)) leaf_name_data.push_back(metric_preference.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "registered-address-xr")
    {
        if(registered_address_xr == nullptr)
        {
            registered_address_xr = std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr>();
        }
        return registered_address_xr;
    }

    if(child_yang_name == "rpf-path")
    {
        for(auto const & c : rpf_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath>();
        c->parent = this;
        rpf_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(registered_address_xr != nullptr)
    {
        children["registered-address-xr"] = registered_address_xr;
    }

    for (auto const & c : rpf_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "registered-address")
    {
        registered_address = value;
        registered_address.value_namespace = name_space;
        registered_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connected")
    {
        is_connected = value;
        is_connected.value_namespace = name_space;
        is_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rpf-bgp-route")
    {
        is_rpf_bgp_route = value;
        is_rpf_bgp_route.value_namespace = name_space;
        is_rpf_bgp_route.value_namespace_prefix = name_space_prefix;
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
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "registered-address")
    {
        registered_address.yfilter = yfilter;
    }
    if(value_path == "is-connected")
    {
        is_connected.yfilter = yfilter;
    }
    if(value_path == "is-rpf-bgp-route")
    {
        is_rpf_bgp_route.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-preference")
    {
        metric_preference.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "registered-address-xr" || name == "rpf-path" || name == "registered-address" || name == "is-connected" || name == "is-rpf-bgp-route" || name == "metric" || name == "metric-preference")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::RegisteredAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "registered-address-xr"; yang_parent_name = "rpf";
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::~RegisteredAddressXr()
{
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registered-address-xr";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RegisteredAddressXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RegisteredAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfPath()
    :
    connector{YType::str, "connector"},
    extranet_vrf_name{YType::str, "extranet-vrf-name"},
    is_connector_attribute_present{YType::boolean, "is-connector-attribute-present"},
    is_rpf_interface_disabled{YType::boolean, "is-rpf-interface-disabled"},
    is_via_lsm{YType::boolean, "is-via-lsm"},
    is_via_mlsm{YType::boolean, "is-via-mlsm"},
    rpf_interface_name{YType::str, "rpf-interface-name"}
    	,
    rpf_neighbor(std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor>())
	,rpf_nexthop(std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop>())
{
    rpf_neighbor->parent = this;

    rpf_nexthop->parent = this;

    yang_name = "rpf-path"; yang_parent_name = "rpf";
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::~RpfPath()
{
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::has_data() const
{
    return connector.is_set
	|| extranet_vrf_name.is_set
	|| is_connector_attribute_present.is_set
	|| is_rpf_interface_disabled.is_set
	|| is_via_lsm.is_set
	|| is_via_mlsm.is_set
	|| rpf_interface_name.is_set
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data())
	|| (rpf_nexthop !=  nullptr && rpf_nexthop->has_data());
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(connector.yfilter)
	|| ydk::is_set(extranet_vrf_name.yfilter)
	|| ydk::is_set(is_connector_attribute_present.yfilter)
	|| ydk::is_set(is_rpf_interface_disabled.yfilter)
	|| ydk::is_set(is_via_lsm.yfilter)
	|| ydk::is_set(is_via_mlsm.yfilter)
	|| ydk::is_set(rpf_interface_name.yfilter)
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation())
	|| (rpf_nexthop !=  nullptr && rpf_nexthop->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-path";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfPath' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connector.is_set || is_set(connector.yfilter)) leaf_name_data.push_back(connector.get_name_leafdata());
    if (extranet_vrf_name.is_set || is_set(extranet_vrf_name.yfilter)) leaf_name_data.push_back(extranet_vrf_name.get_name_leafdata());
    if (is_connector_attribute_present.is_set || is_set(is_connector_attribute_present.yfilter)) leaf_name_data.push_back(is_connector_attribute_present.get_name_leafdata());
    if (is_rpf_interface_disabled.is_set || is_set(is_rpf_interface_disabled.yfilter)) leaf_name_data.push_back(is_rpf_interface_disabled.get_name_leafdata());
    if (is_via_lsm.is_set || is_set(is_via_lsm.yfilter)) leaf_name_data.push_back(is_via_lsm.get_name_leafdata());
    if (is_via_mlsm.is_set || is_set(is_via_mlsm.yfilter)) leaf_name_data.push_back(is_via_mlsm.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.yfilter)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor == nullptr)
        {
            rpf_neighbor = std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor>();
        }
        return rpf_neighbor;
    }

    if(child_yang_name == "rpf-nexthop")
    {
        if(rpf_nexthop == nullptr)
        {
            rpf_nexthop = std::make_shared<Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop>();
        }
        return rpf_nexthop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(rpf_neighbor != nullptr)
    {
        children["rpf-neighbor"] = rpf_neighbor;
    }

    if(rpf_nexthop != nullptr)
    {
        children["rpf-nexthop"] = rpf_nexthop;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "connector")
    {
        connector = value;
        connector.value_namespace = name_space;
        connector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extranet-vrf-name")
    {
        extranet_vrf_name = value;
        extranet_vrf_name.value_namespace = name_space;
        extranet_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connector-attribute-present")
    {
        is_connector_attribute_present = value;
        is_connector_attribute_present.value_namespace = name_space;
        is_connector_attribute_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rpf-interface-disabled")
    {
        is_rpf_interface_disabled = value;
        is_rpf_interface_disabled.value_namespace = name_space;
        is_rpf_interface_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm = value;
        is_via_lsm.value_namespace = name_space;
        is_via_lsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-via-mlsm")
    {
        is_via_mlsm = value;
        is_via_mlsm.value_namespace = name_space;
        is_via_mlsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
        rpf_interface_name.value_namespace = name_space;
        rpf_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "connector")
    {
        connector.yfilter = yfilter;
    }
    if(value_path == "extranet-vrf-name")
    {
        extranet_vrf_name.yfilter = yfilter;
    }
    if(value_path == "is-connector-attribute-present")
    {
        is_connector_attribute_present.yfilter = yfilter;
    }
    if(value_path == "is-rpf-interface-disabled")
    {
        is_rpf_interface_disabled.yfilter = yfilter;
    }
    if(value_path == "is-via-lsm")
    {
        is_via_lsm.yfilter = yfilter;
    }
    if(value_path == "is-via-mlsm")
    {
        is_via_mlsm.yfilter = yfilter;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpf-neighbor" || name == "rpf-nexthop" || name == "connector" || name == "extranet-vrf-name" || name == "is-connector-attribute-present" || name == "is-rpf-interface-disabled" || name == "is-via-lsm" || name == "is-via-mlsm" || name == "rpf-interface-name")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-neighbor"; yang_parent_name = "rpf-path";
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfNeighbor' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::RpfNexthop()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-nexthop"; yang_parent_name = "rpf-path";
}

Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::~RpfNexthop()
{
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-nexthop";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfNexthop' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::Safs::Saf::Rpfs::Rpf::RpfPath::RpfNexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistics()
{
    yang_name = "interface-statistics"; yang_parent_name = "vrf";
}

Pim::Standby::Vrfs::Vrf::InterfaceStatistics::~InterfaceStatistics()
{
}

bool Pim::Standby::Vrfs::Vrf::InterfaceStatistics::has_data() const
{
    for (std::size_t index=0; index<interface_statistic.size(); index++)
    {
        if(interface_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::InterfaceStatistics::has_operation() const
{
    for (std::size_t index=0; index<interface_statistic.size(); index++)
    {
        if(interface_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::InterfaceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistics";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::InterfaceStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStatistics' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::InterfaceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-statistic")
    {
        for(auto const & c : interface_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic>();
        c->parent = this;
        interface_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::InterfaceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::InterfaceStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::InterfaceStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::InterfaceStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-statistic")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::InterfaceStatistic()
    :
    interface_name{YType::str, "interface-name"},
    input_assert{YType::uint32, "input-assert"},
    input_bsr_message{YType::uint32, "input-bsr-message"},
    input_candidate_rp_advertisement{YType::uint32, "input-candidate-rp-advertisement"},
    input_df_election{YType::uint32, "input-df-election"},
    input_graft_ack_message{YType::uint32, "input-graft-ack-message"},
    input_graft_message{YType::uint32, "input-graft-message"},
    input_hello{YType::uint32, "input-hello"},
    input_jp{YType::uint32, "input-jp"},
    input_miscellaneous{YType::uint32, "input-miscellaneous"},
    input_register{YType::uint32, "input-register"},
    input_register_stop{YType::uint32, "input-register-stop"},
    output_assert{YType::uint32, "output-assert"},
    output_bsr_message{YType::uint32, "output-bsr-message"},
    output_candidate_rp_advertisement{YType::uint32, "output-candidate-rp-advertisement"},
    output_df_election{YType::uint32, "output-df-election"},
    output_graft_ack_message{YType::uint32, "output-graft-ack-message"},
    output_graft_message{YType::uint32, "output-graft-message"},
    output_hello{YType::uint32, "output-hello"},
    output_jp{YType::uint32, "output-jp"},
    output_register{YType::uint32, "output-register"},
    output_register_stop{YType::uint32, "output-register-stop"}
{
    yang_name = "interface-statistic"; yang_parent_name = "interface-statistics";
}

Pim::Standby::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::~InterfaceStatistic()
{
}

bool Pim::Standby::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::has_data() const
{
    return interface_name.is_set
	|| input_assert.is_set
	|| input_bsr_message.is_set
	|| input_candidate_rp_advertisement.is_set
	|| input_df_election.is_set
	|| input_graft_ack_message.is_set
	|| input_graft_message.is_set
	|| input_hello.is_set
	|| input_jp.is_set
	|| input_miscellaneous.is_set
	|| input_register.is_set
	|| input_register_stop.is_set
	|| output_assert.is_set
	|| output_bsr_message.is_set
	|| output_candidate_rp_advertisement.is_set
	|| output_df_election.is_set
	|| output_graft_ack_message.is_set
	|| output_graft_message.is_set
	|| output_hello.is_set
	|| output_jp.is_set
	|| output_register.is_set
	|| output_register_stop.is_set;
}

bool Pim::Standby::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(input_assert.yfilter)
	|| ydk::is_set(input_bsr_message.yfilter)
	|| ydk::is_set(input_candidate_rp_advertisement.yfilter)
	|| ydk::is_set(input_df_election.yfilter)
	|| ydk::is_set(input_graft_ack_message.yfilter)
	|| ydk::is_set(input_graft_message.yfilter)
	|| ydk::is_set(input_hello.yfilter)
	|| ydk::is_set(input_jp.yfilter)
	|| ydk::is_set(input_miscellaneous.yfilter)
	|| ydk::is_set(input_register.yfilter)
	|| ydk::is_set(input_register_stop.yfilter)
	|| ydk::is_set(output_assert.yfilter)
	|| ydk::is_set(output_bsr_message.yfilter)
	|| ydk::is_set(output_candidate_rp_advertisement.yfilter)
	|| ydk::is_set(output_df_election.yfilter)
	|| ydk::is_set(output_graft_ack_message.yfilter)
	|| ydk::is_set(output_graft_message.yfilter)
	|| ydk::is_set(output_hello.yfilter)
	|| ydk::is_set(output_jp.yfilter)
	|| ydk::is_set(output_register.yfilter)
	|| ydk::is_set(output_register_stop.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-statistic" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStatistic' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (input_assert.is_set || is_set(input_assert.yfilter)) leaf_name_data.push_back(input_assert.get_name_leafdata());
    if (input_bsr_message.is_set || is_set(input_bsr_message.yfilter)) leaf_name_data.push_back(input_bsr_message.get_name_leafdata());
    if (input_candidate_rp_advertisement.is_set || is_set(input_candidate_rp_advertisement.yfilter)) leaf_name_data.push_back(input_candidate_rp_advertisement.get_name_leafdata());
    if (input_df_election.is_set || is_set(input_df_election.yfilter)) leaf_name_data.push_back(input_df_election.get_name_leafdata());
    if (input_graft_ack_message.is_set || is_set(input_graft_ack_message.yfilter)) leaf_name_data.push_back(input_graft_ack_message.get_name_leafdata());
    if (input_graft_message.is_set || is_set(input_graft_message.yfilter)) leaf_name_data.push_back(input_graft_message.get_name_leafdata());
    if (input_hello.is_set || is_set(input_hello.yfilter)) leaf_name_data.push_back(input_hello.get_name_leafdata());
    if (input_jp.is_set || is_set(input_jp.yfilter)) leaf_name_data.push_back(input_jp.get_name_leafdata());
    if (input_miscellaneous.is_set || is_set(input_miscellaneous.yfilter)) leaf_name_data.push_back(input_miscellaneous.get_name_leafdata());
    if (input_register.is_set || is_set(input_register.yfilter)) leaf_name_data.push_back(input_register.get_name_leafdata());
    if (input_register_stop.is_set || is_set(input_register_stop.yfilter)) leaf_name_data.push_back(input_register_stop.get_name_leafdata());
    if (output_assert.is_set || is_set(output_assert.yfilter)) leaf_name_data.push_back(output_assert.get_name_leafdata());
    if (output_bsr_message.is_set || is_set(output_bsr_message.yfilter)) leaf_name_data.push_back(output_bsr_message.get_name_leafdata());
    if (output_candidate_rp_advertisement.is_set || is_set(output_candidate_rp_advertisement.yfilter)) leaf_name_data.push_back(output_candidate_rp_advertisement.get_name_leafdata());
    if (output_df_election.is_set || is_set(output_df_election.yfilter)) leaf_name_data.push_back(output_df_election.get_name_leafdata());
    if (output_graft_ack_message.is_set || is_set(output_graft_ack_message.yfilter)) leaf_name_data.push_back(output_graft_ack_message.get_name_leafdata());
    if (output_graft_message.is_set || is_set(output_graft_message.yfilter)) leaf_name_data.push_back(output_graft_message.get_name_leafdata());
    if (output_hello.is_set || is_set(output_hello.yfilter)) leaf_name_data.push_back(output_hello.get_name_leafdata());
    if (output_jp.is_set || is_set(output_jp.yfilter)) leaf_name_data.push_back(output_jp.get_name_leafdata());
    if (output_register.is_set || is_set(output_register.yfilter)) leaf_name_data.push_back(output_register.get_name_leafdata());
    if (output_register_stop.is_set || is_set(output_register_stop.yfilter)) leaf_name_data.push_back(output_register_stop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-assert")
    {
        input_assert = value;
        input_assert.value_namespace = name_space;
        input_assert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-bsr-message")
    {
        input_bsr_message = value;
        input_bsr_message.value_namespace = name_space;
        input_bsr_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-candidate-rp-advertisement")
    {
        input_candidate_rp_advertisement = value;
        input_candidate_rp_advertisement.value_namespace = name_space;
        input_candidate_rp_advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-df-election")
    {
        input_df_election = value;
        input_df_election.value_namespace = name_space;
        input_df_election.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-graft-ack-message")
    {
        input_graft_ack_message = value;
        input_graft_ack_message.value_namespace = name_space;
        input_graft_ack_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-graft-message")
    {
        input_graft_message = value;
        input_graft_message.value_namespace = name_space;
        input_graft_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-hello")
    {
        input_hello = value;
        input_hello.value_namespace = name_space;
        input_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-jp")
    {
        input_jp = value;
        input_jp.value_namespace = name_space;
        input_jp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-miscellaneous")
    {
        input_miscellaneous = value;
        input_miscellaneous.value_namespace = name_space;
        input_miscellaneous.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-register")
    {
        input_register = value;
        input_register.value_namespace = name_space;
        input_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-register-stop")
    {
        input_register_stop = value;
        input_register_stop.value_namespace = name_space;
        input_register_stop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-assert")
    {
        output_assert = value;
        output_assert.value_namespace = name_space;
        output_assert.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-bsr-message")
    {
        output_bsr_message = value;
        output_bsr_message.value_namespace = name_space;
        output_bsr_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-candidate-rp-advertisement")
    {
        output_candidate_rp_advertisement = value;
        output_candidate_rp_advertisement.value_namespace = name_space;
        output_candidate_rp_advertisement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-df-election")
    {
        output_df_election = value;
        output_df_election.value_namespace = name_space;
        output_df_election.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-graft-ack-message")
    {
        output_graft_ack_message = value;
        output_graft_ack_message.value_namespace = name_space;
        output_graft_ack_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-graft-message")
    {
        output_graft_message = value;
        output_graft_message.value_namespace = name_space;
        output_graft_message.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-hello")
    {
        output_hello = value;
        output_hello.value_namespace = name_space;
        output_hello.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-jp")
    {
        output_jp = value;
        output_jp.value_namespace = name_space;
        output_jp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-register")
    {
        output_register = value;
        output_register.value_namespace = name_space;
        output_register.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-register-stop")
    {
        output_register_stop = value;
        output_register_stop.value_namespace = name_space;
        output_register_stop.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "input-assert")
    {
        input_assert.yfilter = yfilter;
    }
    if(value_path == "input-bsr-message")
    {
        input_bsr_message.yfilter = yfilter;
    }
    if(value_path == "input-candidate-rp-advertisement")
    {
        input_candidate_rp_advertisement.yfilter = yfilter;
    }
    if(value_path == "input-df-election")
    {
        input_df_election.yfilter = yfilter;
    }
    if(value_path == "input-graft-ack-message")
    {
        input_graft_ack_message.yfilter = yfilter;
    }
    if(value_path == "input-graft-message")
    {
        input_graft_message.yfilter = yfilter;
    }
    if(value_path == "input-hello")
    {
        input_hello.yfilter = yfilter;
    }
    if(value_path == "input-jp")
    {
        input_jp.yfilter = yfilter;
    }
    if(value_path == "input-miscellaneous")
    {
        input_miscellaneous.yfilter = yfilter;
    }
    if(value_path == "input-register")
    {
        input_register.yfilter = yfilter;
    }
    if(value_path == "input-register-stop")
    {
        input_register_stop.yfilter = yfilter;
    }
    if(value_path == "output-assert")
    {
        output_assert.yfilter = yfilter;
    }
    if(value_path == "output-bsr-message")
    {
        output_bsr_message.yfilter = yfilter;
    }
    if(value_path == "output-candidate-rp-advertisement")
    {
        output_candidate_rp_advertisement.yfilter = yfilter;
    }
    if(value_path == "output-df-election")
    {
        output_df_election.yfilter = yfilter;
    }
    if(value_path == "output-graft-ack-message")
    {
        output_graft_ack_message.yfilter = yfilter;
    }
    if(value_path == "output-graft-message")
    {
        output_graft_message.yfilter = yfilter;
    }
    if(value_path == "output-hello")
    {
        output_hello.yfilter = yfilter;
    }
    if(value_path == "output-jp")
    {
        output_jp.yfilter = yfilter;
    }
    if(value_path == "output-register")
    {
        output_register.yfilter = yfilter;
    }
    if(value_path == "output-register-stop")
    {
        output_register_stop.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::InterfaceStatistics::InterfaceStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "input-assert" || name == "input-bsr-message" || name == "input-candidate-rp-advertisement" || name == "input-df-election" || name == "input-graft-ack-message" || name == "input-graft-message" || name == "input-hello" || name == "input-jp" || name == "input-miscellaneous" || name == "input-register" || name == "input-register-stop" || name == "output-assert" || name == "output-bsr-message" || name == "output-candidate-rp-advertisement" || name == "output-df-election" || name == "output-graft-ack-message" || name == "output-graft-message" || name == "output-hello" || name == "output-jp" || name == "output-register" || name == "output-register-stop")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::TopologyRouteCount::TopologyRouteCount()
    :
    active_group_ranges{YType::uint32, "active-group-ranges"},
    group_ranges{YType::uint32, "group-ranges"},
    groute_count{YType::uint32, "groute-count"},
    is_node_low_memory{YType::boolean, "is-node-low-memory"},
    sg_route_count{YType::uint32, "sg-route-count"},
    sgr_route_count{YType::uint32, "sgr-route-count"}
    	,
    group_address(std::make_shared<Pim::Standby::Vrfs::Vrf::TopologyRouteCount::GroupAddress>())
{
    group_address->parent = this;

    yang_name = "topology-route-count"; yang_parent_name = "vrf";
}

Pim::Standby::Vrfs::Vrf::TopologyRouteCount::~TopologyRouteCount()
{
}

bool Pim::Standby::Vrfs::Vrf::TopologyRouteCount::has_data() const
{
    return active_group_ranges.is_set
	|| group_ranges.is_set
	|| groute_count.is_set
	|| is_node_low_memory.is_set
	|| sg_route_count.is_set
	|| sgr_route_count.is_set
	|| (group_address !=  nullptr && group_address->has_data());
}

bool Pim::Standby::Vrfs::Vrf::TopologyRouteCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_group_ranges.yfilter)
	|| ydk::is_set(group_ranges.yfilter)
	|| ydk::is_set(groute_count.yfilter)
	|| ydk::is_set(is_node_low_memory.yfilter)
	|| ydk::is_set(sg_route_count.yfilter)
	|| ydk::is_set(sgr_route_count.yfilter)
	|| (group_address !=  nullptr && group_address->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::TopologyRouteCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology-route-count";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::TopologyRouteCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TopologyRouteCount' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_group_ranges.is_set || is_set(active_group_ranges.yfilter)) leaf_name_data.push_back(active_group_ranges.get_name_leafdata());
    if (group_ranges.is_set || is_set(group_ranges.yfilter)) leaf_name_data.push_back(group_ranges.get_name_leafdata());
    if (groute_count.is_set || is_set(groute_count.yfilter)) leaf_name_data.push_back(groute_count.get_name_leafdata());
    if (is_node_low_memory.is_set || is_set(is_node_low_memory.yfilter)) leaf_name_data.push_back(is_node_low_memory.get_name_leafdata());
    if (sg_route_count.is_set || is_set(sg_route_count.yfilter)) leaf_name_data.push_back(sg_route_count.get_name_leafdata());
    if (sgr_route_count.is_set || is_set(sgr_route_count.yfilter)) leaf_name_data.push_back(sgr_route_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TopologyRouteCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address")
    {
        if(group_address == nullptr)
        {
            group_address = std::make_shared<Pim::Standby::Vrfs::Vrf::TopologyRouteCount::GroupAddress>();
        }
        return group_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TopologyRouteCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address != nullptr)
    {
        children["group-address"] = group_address;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::TopologyRouteCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-group-ranges")
    {
        active_group_ranges = value;
        active_group_ranges.value_namespace = name_space;
        active_group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-ranges")
    {
        group_ranges = value;
        group_ranges.value_namespace = name_space;
        group_ranges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groute-count")
    {
        groute_count = value;
        groute_count.value_namespace = name_space;
        groute_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory = value;
        is_node_low_memory.value_namespace = name_space;
        is_node_low_memory.value_namespace_prefix = name_space_prefix;
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
}

void Pim::Standby::Vrfs::Vrf::TopologyRouteCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-group-ranges")
    {
        active_group_ranges.yfilter = yfilter;
    }
    if(value_path == "group-ranges")
    {
        group_ranges.yfilter = yfilter;
    }
    if(value_path == "groute-count")
    {
        groute_count.yfilter = yfilter;
    }
    if(value_path == "is-node-low-memory")
    {
        is_node_low_memory.yfilter = yfilter;
    }
    if(value_path == "sg-route-count")
    {
        sg_route_count.yfilter = yfilter;
    }
    if(value_path == "sgr-route-count")
    {
        sgr_route_count.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::TopologyRouteCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "active-group-ranges" || name == "group-ranges" || name == "groute-count" || name == "is-node-low-memory" || name == "sg-route-count" || name == "sgr-route-count")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::TopologyRouteCount::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address"; yang_parent_name = "topology-route-count";
}

Pim::Standby::Vrfs::Vrf::TopologyRouteCount::GroupAddress::~GroupAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::TopologyRouteCount::GroupAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::TopologyRouteCount::GroupAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::TopologyRouteCount::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::TopologyRouteCount::GroupAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::TopologyRouteCount::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::TopologyRouteCount::GroupAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::TopologyRouteCount::GroupAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::TopologyRouteCount::GroupAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::TopologyRouteCount::GroupAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::JpStatistics::JpStatistics()
{
    yang_name = "jp-statistics"; yang_parent_name = "vrf";
}

Pim::Standby::Vrfs::Vrf::JpStatistics::~JpStatistics()
{
}

bool Pim::Standby::Vrfs::Vrf::JpStatistics::has_data() const
{
    for (std::size_t index=0; index<jp_statistic.size(); index++)
    {
        if(jp_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::JpStatistics::has_operation() const
{
    for (std::size_t index=0; index<jp_statistic.size(); index++)
    {
        if(jp_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::JpStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jp-statistics";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::JpStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'JpStatistics' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::JpStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "jp-statistic")
    {
        for(auto const & c : jp_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::JpStatistics::JpStatistic>();
        c->parent = this;
        jp_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::JpStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : jp_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::JpStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::JpStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::JpStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "jp-statistic")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::JpStatistics::JpStatistic::JpStatistic()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    mtu{YType::uint32, "mtu"},
    received{YType::uint32, "received"},
    received100{YType::uint16, "received100"},
    received_10k{YType::uint16, "received-10k"},
    received_1k{YType::uint16, "received-1k"},
    received_50k{YType::uint16, "received-50k"},
    transmitted{YType::uint32, "transmitted"},
    transmitted100{YType::uint16, "transmitted100"},
    transmitted_10k{YType::uint16, "transmitted-10k"},
    transmitted_1k{YType::uint16, "transmitted-1k"},
    transmitted_50k{YType::uint16, "transmitted-50k"}
{
    yang_name = "jp-statistic"; yang_parent_name = "jp-statistics";
}

Pim::Standby::Vrfs::Vrf::JpStatistics::JpStatistic::~JpStatistic()
{
}

bool Pim::Standby::Vrfs::Vrf::JpStatistics::JpStatistic::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| mtu.is_set
	|| received.is_set
	|| received100.is_set
	|| received_10k.is_set
	|| received_1k.is_set
	|| received_50k.is_set
	|| transmitted.is_set
	|| transmitted100.is_set
	|| transmitted_10k.is_set
	|| transmitted_1k.is_set
	|| transmitted_50k.is_set;
}

bool Pim::Standby::Vrfs::Vrf::JpStatistics::JpStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(received.yfilter)
	|| ydk::is_set(received100.yfilter)
	|| ydk::is_set(received_10k.yfilter)
	|| ydk::is_set(received_1k.yfilter)
	|| ydk::is_set(received_50k.yfilter)
	|| ydk::is_set(transmitted.yfilter)
	|| ydk::is_set(transmitted100.yfilter)
	|| ydk::is_set(transmitted_10k.yfilter)
	|| ydk::is_set(transmitted_1k.yfilter)
	|| ydk::is_set(transmitted_50k.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::JpStatistics::JpStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "jp-statistic" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::JpStatistics::JpStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'JpStatistic' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (received.is_set || is_set(received.yfilter)) leaf_name_data.push_back(received.get_name_leafdata());
    if (received100.is_set || is_set(received100.yfilter)) leaf_name_data.push_back(received100.get_name_leafdata());
    if (received_10k.is_set || is_set(received_10k.yfilter)) leaf_name_data.push_back(received_10k.get_name_leafdata());
    if (received_1k.is_set || is_set(received_1k.yfilter)) leaf_name_data.push_back(received_1k.get_name_leafdata());
    if (received_50k.is_set || is_set(received_50k.yfilter)) leaf_name_data.push_back(received_50k.get_name_leafdata());
    if (transmitted.is_set || is_set(transmitted.yfilter)) leaf_name_data.push_back(transmitted.get_name_leafdata());
    if (transmitted100.is_set || is_set(transmitted100.yfilter)) leaf_name_data.push_back(transmitted100.get_name_leafdata());
    if (transmitted_10k.is_set || is_set(transmitted_10k.yfilter)) leaf_name_data.push_back(transmitted_10k.get_name_leafdata());
    if (transmitted_1k.is_set || is_set(transmitted_1k.yfilter)) leaf_name_data.push_back(transmitted_1k.get_name_leafdata());
    if (transmitted_50k.is_set || is_set(transmitted_50k.yfilter)) leaf_name_data.push_back(transmitted_50k.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::JpStatistics::JpStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::JpStatistics::JpStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::JpStatistics::JpStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received")
    {
        received = value;
        received.value_namespace = name_space;
        received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received100")
    {
        received100 = value;
        received100.value_namespace = name_space;
        received100.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-10k")
    {
        received_10k = value;
        received_10k.value_namespace = name_space;
        received_10k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-1k")
    {
        received_1k = value;
        received_1k.value_namespace = name_space;
        received_1k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-50k")
    {
        received_50k = value;
        received_50k.value_namespace = name_space;
        received_50k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted")
    {
        transmitted = value;
        transmitted.value_namespace = name_space;
        transmitted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted100")
    {
        transmitted100 = value;
        transmitted100.value_namespace = name_space;
        transmitted100.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-10k")
    {
        transmitted_10k = value;
        transmitted_10k.value_namespace = name_space;
        transmitted_10k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-1k")
    {
        transmitted_1k = value;
        transmitted_1k.value_namespace = name_space;
        transmitted_1k.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmitted-50k")
    {
        transmitted_50k = value;
        transmitted_50k.value_namespace = name_space;
        transmitted_50k.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::JpStatistics::JpStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "received")
    {
        received.yfilter = yfilter;
    }
    if(value_path == "received100")
    {
        received100.yfilter = yfilter;
    }
    if(value_path == "received-10k")
    {
        received_10k.yfilter = yfilter;
    }
    if(value_path == "received-1k")
    {
        received_1k.yfilter = yfilter;
    }
    if(value_path == "received-50k")
    {
        received_50k.yfilter = yfilter;
    }
    if(value_path == "transmitted")
    {
        transmitted.yfilter = yfilter;
    }
    if(value_path == "transmitted100")
    {
        transmitted100.yfilter = yfilter;
    }
    if(value_path == "transmitted-10k")
    {
        transmitted_10k.yfilter = yfilter;
    }
    if(value_path == "transmitted-1k")
    {
        transmitted_1k.yfilter = yfilter;
    }
    if(value_path == "transmitted-50k")
    {
        transmitted_50k.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::JpStatistics::JpStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface-name-xr" || name == "mtu" || name == "received" || name == "received100" || name == "received-10k" || name == "received-1k" || name == "received-50k" || name == "transmitted" || name == "transmitted100" || name == "transmitted-10k" || name == "transmitted-1k" || name == "transmitted-50k")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabases()
{
    yang_name = "mib-databases"; yang_parent_name = "vrf";
}

Pim::Standby::Vrfs::Vrf::MibDatabases::~MibDatabases()
{
}

bool Pim::Standby::Vrfs::Vrf::MibDatabases::has_data() const
{
    for (std::size_t index=0; index<mib_database.size(); index++)
    {
        if(mib_database[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::MibDatabases::has_operation() const
{
    for (std::size_t index=0; index<mib_database.size(); index++)
    {
        if(mib_database[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::MibDatabases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib-databases";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::MibDatabases::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MibDatabases' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::MibDatabases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mib-database")
    {
        for(auto const & c : mib_database)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase>();
        c->parent = this;
        mib_database.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::MibDatabases::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mib_database)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::MibDatabases::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::MibDatabases::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::MibDatabases::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mib-database")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::MibDatabase()
    :
    assert_metric{YType::uint32, "assert-metric"},
    assert_metric_preference{YType::uint32, "assert-metric-preference"},
    assert_rpt_bit{YType::boolean, "assert-rpt-bit"},
    bidirectional_route{YType::boolean, "bidirectional-route"},
    group_address{YType::str, "group-address"},
    protocol{YType::enumeration, "protocol"},
    rpf_drop{YType::boolean, "rpf-drop"},
    rpf_extranet{YType::boolean, "rpf-extranet"},
    rpf_interface_name{YType::str, "rpf-interface-name"},
    rpf_mask{YType::uint32, "rpf-mask"},
    rpf_safi{YType::uint8, "rpf-safi"},
    rpf_table_name{YType::str, "rpf-table-name"},
    rpf_vrf_name{YType::str, "rpf-vrf-name"},
    source_address{YType::str, "source-address"},
    source_netmask{YType::int32, "source-netmask"},
    spt_bit{YType::boolean, "spt-bit"},
    upstream_assert_timer{YType::int32, "upstream-assert-timer"},
    uptime{YType::uint64, "uptime"}
    	,
    group_address_xr(std::make_shared<Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr>())
	,rpf_neighbor(std::make_shared<Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor>())
	,rpf_root(std::make_shared<Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot>())
	,source_address_xr(std::make_shared<Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr>())
{
    group_address_xr->parent = this;

    rpf_neighbor->parent = this;

    rpf_root->parent = this;

    source_address_xr->parent = this;

    yang_name = "mib-database"; yang_parent_name = "mib-databases";
}

Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::~MibDatabase()
{
}

bool Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::has_data() const
{
    return assert_metric.is_set
	|| assert_metric_preference.is_set
	|| assert_rpt_bit.is_set
	|| bidirectional_route.is_set
	|| group_address.is_set
	|| protocol.is_set
	|| rpf_drop.is_set
	|| rpf_extranet.is_set
	|| rpf_interface_name.is_set
	|| rpf_mask.is_set
	|| rpf_safi.is_set
	|| rpf_table_name.is_set
	|| rpf_vrf_name.is_set
	|| source_address.is_set
	|| source_netmask.is_set
	|| spt_bit.is_set
	|| upstream_assert_timer.is_set
	|| uptime.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data())
	|| (rpf_root !=  nullptr && rpf_root->has_data())
	|| (source_address_xr !=  nullptr && source_address_xr->has_data());
}

bool Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(assert_metric.yfilter)
	|| ydk::is_set(assert_metric_preference.yfilter)
	|| ydk::is_set(assert_rpt_bit.yfilter)
	|| ydk::is_set(bidirectional_route.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(rpf_drop.yfilter)
	|| ydk::is_set(rpf_extranet.yfilter)
	|| ydk::is_set(rpf_interface_name.yfilter)
	|| ydk::is_set(rpf_mask.yfilter)
	|| ydk::is_set(rpf_safi.yfilter)
	|| ydk::is_set(rpf_table_name.yfilter)
	|| ydk::is_set(rpf_vrf_name.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(source_netmask.yfilter)
	|| ydk::is_set(spt_bit.yfilter)
	|| ydk::is_set(upstream_assert_timer.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation())
	|| (rpf_root !=  nullptr && rpf_root->has_operation())
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib-database";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MibDatabase' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (assert_metric.is_set || is_set(assert_metric.yfilter)) leaf_name_data.push_back(assert_metric.get_name_leafdata());
    if (assert_metric_preference.is_set || is_set(assert_metric_preference.yfilter)) leaf_name_data.push_back(assert_metric_preference.get_name_leafdata());
    if (assert_rpt_bit.is_set || is_set(assert_rpt_bit.yfilter)) leaf_name_data.push_back(assert_rpt_bit.get_name_leafdata());
    if (bidirectional_route.is_set || is_set(bidirectional_route.yfilter)) leaf_name_data.push_back(bidirectional_route.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rpf_drop.is_set || is_set(rpf_drop.yfilter)) leaf_name_data.push_back(rpf_drop.get_name_leafdata());
    if (rpf_extranet.is_set || is_set(rpf_extranet.yfilter)) leaf_name_data.push_back(rpf_extranet.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.yfilter)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (rpf_mask.is_set || is_set(rpf_mask.yfilter)) leaf_name_data.push_back(rpf_mask.get_name_leafdata());
    if (rpf_safi.is_set || is_set(rpf_safi.yfilter)) leaf_name_data.push_back(rpf_safi.get_name_leafdata());
    if (rpf_table_name.is_set || is_set(rpf_table_name.yfilter)) leaf_name_data.push_back(rpf_table_name.get_name_leafdata());
    if (rpf_vrf_name.is_set || is_set(rpf_vrf_name.yfilter)) leaf_name_data.push_back(rpf_vrf_name.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_netmask.is_set || is_set(source_netmask.yfilter)) leaf_name_data.push_back(source_netmask.get_name_leafdata());
    if (spt_bit.is_set || is_set(spt_bit.yfilter)) leaf_name_data.push_back(spt_bit.get_name_leafdata());
    if (upstream_assert_timer.is_set || is_set(upstream_assert_timer.yfilter)) leaf_name_data.push_back(upstream_assert_timer.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor == nullptr)
        {
            rpf_neighbor = std::make_shared<Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor>();
        }
        return rpf_neighbor;
    }

    if(child_yang_name == "rpf-root")
    {
        if(rpf_root == nullptr)
        {
            rpf_root = std::make_shared<Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot>();
        }
        return rpf_root;
    }

    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr == nullptr)
        {
            source_address_xr = std::make_shared<Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr>();
        }
        return source_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    if(rpf_neighbor != nullptr)
    {
        children["rpf-neighbor"] = rpf_neighbor;
    }

    if(rpf_root != nullptr)
    {
        children["rpf-root"] = rpf_root;
    }

    if(source_address_xr != nullptr)
    {
        children["source-address-xr"] = source_address_xr;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "assert-metric")
    {
        assert_metric = value;
        assert_metric.value_namespace = name_space;
        assert_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assert-metric-preference")
    {
        assert_metric_preference = value;
        assert_metric_preference.value_namespace = name_space;
        assert_metric_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "assert-rpt-bit")
    {
        assert_rpt_bit = value;
        assert_rpt_bit.value_namespace = name_space;
        assert_rpt_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bidirectional-route")
    {
        bidirectional_route = value;
        bidirectional_route.value_namespace = name_space;
        bidirectional_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-drop")
    {
        rpf_drop = value;
        rpf_drop.value_namespace = name_space;
        rpf_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-extranet")
    {
        rpf_extranet = value;
        rpf_extranet.value_namespace = name_space;
        rpf_extranet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name = value;
        rpf_interface_name.value_namespace = name_space;
        rpf_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-mask")
    {
        rpf_mask = value;
        rpf_mask.value_namespace = name_space;
        rpf_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-safi")
    {
        rpf_safi = value;
        rpf_safi.value_namespace = name_space;
        rpf_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-table-name")
    {
        rpf_table_name = value;
        rpf_table_name.value_namespace = name_space;
        rpf_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name = value;
        rpf_vrf_name.value_namespace = name_space;
        rpf_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-netmask")
    {
        source_netmask = value;
        source_netmask.value_namespace = name_space;
        source_netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spt-bit")
    {
        spt_bit = value;
        spt_bit.value_namespace = name_space;
        spt_bit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upstream-assert-timer")
    {
        upstream_assert_timer = value;
        upstream_assert_timer.value_namespace = name_space;
        upstream_assert_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "assert-metric")
    {
        assert_metric.yfilter = yfilter;
    }
    if(value_path == "assert-metric-preference")
    {
        assert_metric_preference.yfilter = yfilter;
    }
    if(value_path == "assert-rpt-bit")
    {
        assert_rpt_bit.yfilter = yfilter;
    }
    if(value_path == "bidirectional-route")
    {
        bidirectional_route.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "rpf-drop")
    {
        rpf_drop.yfilter = yfilter;
    }
    if(value_path == "rpf-extranet")
    {
        rpf_extranet.yfilter = yfilter;
    }
    if(value_path == "rpf-interface-name")
    {
        rpf_interface_name.yfilter = yfilter;
    }
    if(value_path == "rpf-mask")
    {
        rpf_mask.yfilter = yfilter;
    }
    if(value_path == "rpf-safi")
    {
        rpf_safi.yfilter = yfilter;
    }
    if(value_path == "rpf-table-name")
    {
        rpf_table_name.yfilter = yfilter;
    }
    if(value_path == "rpf-vrf-name")
    {
        rpf_vrf_name.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "source-netmask")
    {
        source_netmask.yfilter = yfilter;
    }
    if(value_path == "spt-bit")
    {
        spt_bit.yfilter = yfilter;
    }
    if(value_path == "upstream-assert-timer")
    {
        upstream_assert_timer.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "rpf-neighbor" || name == "rpf-root" || name == "source-address-xr" || name == "assert-metric" || name == "assert-metric-preference" || name == "assert-rpt-bit" || name == "bidirectional-route" || name == "group-address" || name == "protocol" || name == "rpf-drop" || name == "rpf-extranet" || name == "rpf-interface-name" || name == "rpf-mask" || name == "rpf-safi" || name == "rpf-table-name" || name == "rpf-vrf-name" || name == "source-address" || name == "source-netmask" || name == "spt-bit" || name == "upstream-assert-timer" || name == "uptime")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address-xr"; yang_parent_name = "mib-database";
}

Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddressXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::SourceAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "mib-database";
}

Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-neighbor"; yang_parent_name = "mib-database";
}

Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfNeighbor' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::RpfRoot()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-root"; yang_parent_name = "mib-database";
}

Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::~RpfRoot()
{
}

bool Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-root";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfRoot' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::MibDatabases::MibDatabase::RpfRoot::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpfs()
{
    yang_name = "group-map-match-rpfs"; yang_parent_name = "vrf";
}

Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::~GroupMapMatchRpfs()
{
}

bool Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::has_data() const
{
    for (std::size_t index=0; index<group_map_match_rpf.size(); index++)
    {
        if(group_map_match_rpf[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::has_operation() const
{
    for (std::size_t index=0; index<group_map_match_rpf.size(); index++)
    {
        if(group_map_match_rpf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-match-rpfs";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupMapMatchRpfs' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-map-match-rpf")
    {
        for(auto const & c : group_map_match_rpf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf>();
        c->parent = this;
        group_map_match_rpf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_map_match_rpf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-map-match-rpf")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapMatchRpf()
    :
    group_address{YType::str, "group-address"},
    are_we_rp{YType::boolean, "are-we-rp"},
    rpf_interface_name{YType::str, "rpf-interface-name"},
    rpf_vrf_name{YType::str, "rpf-vrf-name"}
    	,
    group_map_information(std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation>())
	,rpf_neighbor(std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor>())
{
    group_map_information->parent = this;

    rpf_neighbor->parent = this;

    yang_name = "group-map-match-rpf"; yang_parent_name = "group-map-match-rpfs";
}

Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::~GroupMapMatchRpf()
{
}

bool Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::has_data() const
{
    return group_address.is_set
	|| are_we_rp.is_set
	|| rpf_interface_name.is_set
	|| rpf_vrf_name.is_set
	|| (group_map_information !=  nullptr && group_map_information->has_data())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_data());
}

bool Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(are_we_rp.yfilter)
	|| ydk::is_set(rpf_interface_name.yfilter)
	|| ydk::is_set(rpf_vrf_name.yfilter)
	|| (group_map_information !=  nullptr && group_map_information->has_operation())
	|| (rpf_neighbor !=  nullptr && rpf_neighbor->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-match-rpf" <<"[group-address='" <<group_address <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupMapMatchRpf' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (are_we_rp.is_set || is_set(are_we_rp.yfilter)) leaf_name_data.push_back(are_we_rp.get_name_leafdata());
    if (rpf_interface_name.is_set || is_set(rpf_interface_name.yfilter)) leaf_name_data.push_back(rpf_interface_name.get_name_leafdata());
    if (rpf_vrf_name.is_set || is_set(rpf_vrf_name.yfilter)) leaf_name_data.push_back(rpf_vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-map-information")
    {
        if(group_map_information == nullptr)
        {
            group_map_information = std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation>();
        }
        return group_map_information;
    }

    if(child_yang_name == "rpf-neighbor")
    {
        if(rpf_neighbor == nullptr)
        {
            rpf_neighbor = std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor>();
        }
        return rpf_neighbor;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_map_information != nullptr)
    {
        children["group-map-information"] = group_map_information;
    }

    if(rpf_neighbor != nullptr)
    {
        children["rpf-neighbor"] = rpf_neighbor;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
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

void Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
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

bool Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-map-information" || name == "rpf-neighbor" || name == "group-address" || name == "are-we-rp" || name == "rpf-interface-name" || name == "rpf-vrf-name")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::RpfNeighbor()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rpf-neighbor"; yang_parent_name = "group-map-match-rpf";
}

Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::~RpfNeighbor()
{
}

bool Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-neighbor";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfNeighbor' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::RpfNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::GroupMapInformation()
    :
    client{YType::enumeration, "client"},
    group_count{YType::uint32, "group-count"},
    is_override{YType::boolean, "is-override"},
    is_used{YType::boolean, "is-used"},
    mrib_active{YType::boolean, "mrib-active"},
    prefix_length{YType::int32, "prefix-length"},
    priority{YType::uint32, "priority"},
    protocol{YType::enumeration, "protocol"}
    	,
    prefix(std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix>())
	,rp_address(std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress>())
{
    prefix->parent = this;

    rp_address->parent = this;

    yang_name = "group-map-information"; yang_parent_name = "group-map-match-rpf";
}

Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::~GroupMapInformation()
{
}

bool Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::has_data() const
{
    return client.is_set
	|| group_count.is_set
	|| is_override.is_set
	|| is_used.is_set
	|| mrib_active.is_set
	|| prefix_length.is_set
	|| priority.is_set
	|| protocol.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (rp_address !=  nullptr && rp_address->has_data());
}

bool Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(is_override.yfilter)
	|| ydk::is_set(is_used.yfilter)
	|| ydk::is_set(mrib_active.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (rp_address !=  nullptr && rp_address->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-map-information";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupMapInformation' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (is_override.is_set || is_set(is_override.yfilter)) leaf_name_data.push_back(is_override.get_name_leafdata());
    if (is_used.is_set || is_set(is_used.yfilter)) leaf_name_data.push_back(is_used.get_name_leafdata());
    if (mrib_active.is_set || is_set(mrib_active.yfilter)) leaf_name_data.push_back(mrib_active.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "rp-address")
    {
        if(rp_address == nullptr)
        {
            rp_address = std::make_shared<Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress>();
        }
        return rp_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
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

void Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-override")
    {
        is_override = value;
        is_override.value_namespace = name_space;
        is_override.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "is-override")
    {
        is_override.yfilter = yfilter;
    }
    if(value_path == "is-used")
    {
        is_used.yfilter = yfilter;
    }
    if(value_path == "mrib-active")
    {
        mrib_active.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "rp-address" || name == "client" || name == "group-count" || name == "is-override" || name == "is-used" || name == "mrib-active" || name == "prefix-length" || name == "priority" || name == "protocol")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "group-map-information";
}

Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::~Prefix()
{
}

bool Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::RpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address"; yang_parent_name = "group-map-information";
}

Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::~RpAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::GroupMapMatchRpfs::GroupMapMatchRpf::GroupMapInformation::RpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormats()
{
    yang_name = "neighbor-old-formats"; yang_parent_name = "vrf";
}

Pim::Standby::Vrfs::Vrf::NeighborOldFormats::~NeighborOldFormats()
{
}

bool Pim::Standby::Vrfs::Vrf::NeighborOldFormats::has_data() const
{
    for (std::size_t index=0; index<neighbor_old_format.size(); index++)
    {
        if(neighbor_old_format[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::NeighborOldFormats::has_operation() const
{
    for (std::size_t index=0; index<neighbor_old_format.size(); index++)
    {
        if(neighbor_old_format[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::NeighborOldFormats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-old-formats";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::NeighborOldFormats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborOldFormats' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::NeighborOldFormats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-old-format")
    {
        for(auto const & c : neighbor_old_format)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat>();
        c->parent = this;
        neighbor_old_format.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::NeighborOldFormats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_old_format)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::NeighborOldFormats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::NeighborOldFormats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::NeighborOldFormats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-old-format")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborOldFormat()
    :
    dr_priority{YType::uint32, "dr-priority"},
    expires{YType::uint64, "expires"},
    expiry_timer{YType::uint64, "expiry-timer"},
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_bfd_state{YType::boolean, "is-bfd-state"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_dr_priority_capable{YType::boolean, "is-dr-priority-capable"},
    is_ecmp_redirect_capable{YType::boolean, "is-ecmp-redirect-capable"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    is_this_neighbor_dr{YType::boolean, "is-this-neighbor-dr"},
    is_this_neighbor_us{YType::boolean, "is-this-neighbor-us"},
    neighbor_address{YType::str, "neighbor-address"},
    override_interval{YType::uint16, "override-interval"},
    propagation_delay{YType::uint16, "propagation-delay"},
    uptime{YType::uint64, "uptime"}
{
    yang_name = "neighbor-old-format"; yang_parent_name = "neighbor-old-formats";
}

Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::~NeighborOldFormat()
{
}

bool Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::has_data() const
{
    for (std::size_t index=0; index<neighbor_address_xr.size(); index++)
    {
        if(neighbor_address_xr[index]->has_data())
            return true;
    }
    return dr_priority.is_set
	|| expires.is_set
	|| expiry_timer.is_set
	|| interface_name.is_set
	|| interface_name_xr.is_set
	|| is_batch_asserts_capable.is_set
	|| is_bfd_state.is_set
	|| is_bidirectional_capable.is_set
	|| is_dr_priority_capable.is_set
	|| is_ecmp_redirect_capable.is_set
	|| is_proxy_capable.is_set
	|| is_this_neighbor_dr.is_set
	|| is_this_neighbor_us.is_set
	|| neighbor_address.is_set
	|| override_interval.is_set
	|| propagation_delay.is_set
	|| uptime.is_set;
}

bool Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::has_operation() const
{
    for (std::size_t index=0; index<neighbor_address_xr.size(); index++)
    {
        if(neighbor_address_xr[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(expires.yfilter)
	|| ydk::is_set(expiry_timer.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(is_batch_asserts_capable.yfilter)
	|| ydk::is_set(is_bfd_state.yfilter)
	|| ydk::is_set(is_bidirectional_capable.yfilter)
	|| ydk::is_set(is_dr_priority_capable.yfilter)
	|| ydk::is_set(is_ecmp_redirect_capable.yfilter)
	|| ydk::is_set(is_proxy_capable.yfilter)
	|| ydk::is_set(is_this_neighbor_dr.yfilter)
	|| ydk::is_set(is_this_neighbor_us.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| ydk::is_set(uptime.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-old-format";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborOldFormat' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (expiry_timer.is_set || is_set(expiry_timer.yfilter)) leaf_name_data.push_back(expiry_timer.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.yfilter)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_bfd_state.is_set || is_set(is_bfd_state.yfilter)) leaf_name_data.push_back(is_bfd_state.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.yfilter)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_dr_priority_capable.is_set || is_set(is_dr_priority_capable.yfilter)) leaf_name_data.push_back(is_dr_priority_capable.get_name_leafdata());
    if (is_ecmp_redirect_capable.is_set || is_set(is_ecmp_redirect_capable.yfilter)) leaf_name_data.push_back(is_ecmp_redirect_capable.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.yfilter)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (is_this_neighbor_dr.is_set || is_set(is_this_neighbor_dr.yfilter)) leaf_name_data.push_back(is_this_neighbor_dr.get_name_leafdata());
    if (is_this_neighbor_us.is_set || is_set(is_this_neighbor_us.yfilter)) leaf_name_data.push_back(is_this_neighbor_us.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address-xr")
    {
        for(auto const & c : neighbor_address_xr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr>();
        c->parent = this;
        neighbor_address_xr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor_address_xr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
        is_batch_asserts_capable.value_namespace = name_space;
        is_batch_asserts_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-state")
    {
        is_bfd_state = value;
        is_bfd_state.value_namespace = name_space;
        is_bfd_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
        is_bidirectional_capable.value_namespace = name_space;
        is_bidirectional_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-dr-priority-capable")
    {
        is_dr_priority_capable = value;
        is_dr_priority_capable.value_namespace = name_space;
        is_dr_priority_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ecmp-redirect-capable")
    {
        is_ecmp_redirect_capable = value;
        is_ecmp_redirect_capable.value_namespace = name_space;
        is_ecmp_redirect_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
        is_proxy_capable.value_namespace = name_space;
        is_proxy_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-this-neighbor-dr")
    {
        is_this_neighbor_dr = value;
        is_this_neighbor_dr.value_namespace = name_space;
        is_this_neighbor_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-this-neighbor-us")
    {
        is_this_neighbor_us = value;
        is_this_neighbor_us.value_namespace = name_space;
        is_this_neighbor_us.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
    if(value_path == "expiry-timer")
    {
        expiry_timer.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable.yfilter = yfilter;
    }
    if(value_path == "is-bfd-state")
    {
        is_bfd_state.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable.yfilter = yfilter;
    }
    if(value_path == "is-dr-priority-capable")
    {
        is_dr_priority_capable.yfilter = yfilter;
    }
    if(value_path == "is-ecmp-redirect-capable")
    {
        is_ecmp_redirect_capable.yfilter = yfilter;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable.yfilter = yfilter;
    }
    if(value_path == "is-this-neighbor-dr")
    {
        is_this_neighbor_dr.yfilter = yfilter;
    }
    if(value_path == "is-this-neighbor-us")
    {
        is_this_neighbor_us.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address-xr" || name == "dr-priority" || name == "expires" || name == "expiry-timer" || name == "interface-name" || name == "interface-name-xr" || name == "is-batch-asserts-capable" || name == "is-bfd-state" || name == "is-bidirectional-capable" || name == "is-dr-priority-capable" || name == "is-ecmp-redirect-capable" || name == "is-proxy-capable" || name == "is-this-neighbor-dr" || name == "is-this-neighbor-us" || name == "neighbor-address" || name == "override-interval" || name == "propagation-delay" || name == "uptime")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::NeighborAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "neighbor-address-xr"; yang_parent_name = "neighbor-old-format";
}

Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::~NeighborAddressXr()
{
}

bool Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address-xr";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddressXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::NeighborOldFormats::NeighborOldFormat::NeighborAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::IfrsSummary::IfrsSummary()
    :
    configuration_count{YType::uint32, "configuration-count"},
    interface_count{YType::uint32, "interface-count"}
{
    yang_name = "ifrs-summary"; yang_parent_name = "vrf";
}

Pim::Standby::Vrfs::Vrf::IfrsSummary::~IfrsSummary()
{
}

bool Pim::Standby::Vrfs::Vrf::IfrsSummary::has_data() const
{
    return configuration_count.is_set
	|| interface_count.is_set;
}

bool Pim::Standby::Vrfs::Vrf::IfrsSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configuration_count.yfilter)
	|| ydk::is_set(interface_count.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::IfrsSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-summary";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::IfrsSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IfrsSummary' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configuration_count.is_set || is_set(configuration_count.yfilter)) leaf_name_data.push_back(configuration_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::IfrsSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::IfrsSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::IfrsSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configuration-count")
    {
        configuration_count = value;
        configuration_count.value_namespace = name_space;
        configuration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::IfrsSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configuration-count")
    {
        configuration_count.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::IfrsSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration-count" || name == "interface-count")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Ranges::Ranges()
{
    yang_name = "ranges"; yang_parent_name = "vrf";
}

Pim::Standby::Vrfs::Vrf::Ranges::~Ranges()
{
}

bool Pim::Standby::Vrfs::Vrf::Ranges::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::Ranges::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Ranges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ranges' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Ranges::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Ranges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::Ranges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::Ranges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Ranges::Range::Range()
    :
    client{YType::enumeration, "client"},
    client_xr{YType::enumeration, "client-xr"},
    expires{YType::uint64, "expires"},
    protocol{YType::enumeration, "protocol"},
    rp_address{YType::str, "rp-address"}
    	,
    rp_address_xr(std::make_shared<Pim::Standby::Vrfs::Vrf::Ranges::Range::RpAddressXr>())
	,source_of_information(std::make_shared<Pim::Standby::Vrfs::Vrf::Ranges::Range::SourceOfInformation>())
{
    rp_address_xr->parent = this;

    source_of_information->parent = this;

    yang_name = "range"; yang_parent_name = "ranges";
}

Pim::Standby::Vrfs::Vrf::Ranges::Range::~Range()
{
}

bool Pim::Standby::Vrfs::Vrf::Ranges::Range::has_data() const
{
    for (std::size_t index=0; index<group_range.size(); index++)
    {
        if(group_range[index]->has_data())
            return true;
    }
    return client.is_set
	|| client_xr.is_set
	|| expires.is_set
	|| protocol.is_set
	|| rp_address.is_set
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_data())
	|| (source_of_information !=  nullptr && source_of_information->has_data());
}

bool Pim::Standby::Vrfs::Vrf::Ranges::Range::has_operation() const
{
    for (std::size_t index=0; index<group_range.size(); index++)
    {
        if(group_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(client.yfilter)
	|| ydk::is_set(client_xr.yfilter)
	|| ydk::is_set(expires.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| (rp_address_xr !=  nullptr && rp_address_xr->has_operation())
	|| (source_of_information !=  nullptr && source_of_information->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::Ranges::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Ranges::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (client.is_set || is_set(client.yfilter)) leaf_name_data.push_back(client.get_name_leafdata());
    if (client_xr.is_set || is_set(client_xr.yfilter)) leaf_name_data.push_back(client_xr.get_name_leafdata());
    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Ranges::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-range")
    {
        for(auto const & c : group_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange>();
        c->parent = this;
        group_range.push_back(c);
        return c;
    }

    if(child_yang_name == "rp-address-xr")
    {
        if(rp_address_xr == nullptr)
        {
            rp_address_xr = std::make_shared<Pim::Standby::Vrfs::Vrf::Ranges::Range::RpAddressXr>();
        }
        return rp_address_xr;
    }

    if(child_yang_name == "source-of-information")
    {
        if(source_of_information == nullptr)
        {
            source_of_information = std::make_shared<Pim::Standby::Vrfs::Vrf::Ranges::Range::SourceOfInformation>();
        }
        return source_of_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Ranges::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_range)
    {
        children[c->get_segment_path()] = c;
    }

    if(rp_address_xr != nullptr)
    {
        children["rp-address-xr"] = rp_address_xr;
    }

    if(source_of_information != nullptr)
    {
        children["source-of-information"] = source_of_information;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Ranges::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "client")
    {
        client = value;
        client.value_namespace = name_space;
        client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-xr")
    {
        client_xr = value;
        client_xr.value_namespace = name_space;
        client_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expires")
    {
        expires = value;
        expires.value_namespace = name_space;
        expires.value_namespace_prefix = name_space_prefix;
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
}

void Pim::Standby::Vrfs::Vrf::Ranges::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "client")
    {
        client.yfilter = yfilter;
    }
    if(value_path == "client-xr")
    {
        client_xr.yfilter = yfilter;
    }
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Ranges::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-range" || name == "rp-address-xr" || name == "source-of-information" || name == "client" || name == "client-xr" || name == "expires" || name == "protocol" || name == "rp-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Ranges::Range::RpAddressXr::RpAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "rp-address-xr"; yang_parent_name = "range";
}

Pim::Standby::Vrfs::Vrf::Ranges::Range::RpAddressXr::~RpAddressXr()
{
}

bool Pim::Standby::Vrfs::Vrf::Ranges::Range::RpAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Ranges::Range::RpAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Ranges::Range::RpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-address-xr";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Ranges::Range::RpAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpAddressXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Ranges::Range::RpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Ranges::Range::RpAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Ranges::Range::RpAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::Ranges::Range::RpAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::Ranges::Range::RpAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Ranges::Range::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-of-information"; yang_parent_name = "range";
}

Pim::Standby::Vrfs::Vrf::Ranges::Range::SourceOfInformation::~SourceOfInformation()
{
}

bool Pim::Standby::Vrfs::Vrf::Ranges::Range::SourceOfInformation::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Ranges::Range::SourceOfInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Ranges::Range::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Ranges::Range::SourceOfInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceOfInformation' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Ranges::Range::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Ranges::Range::SourceOfInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Ranges::Range::SourceOfInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::Ranges::Range::SourceOfInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::Ranges::Range::SourceOfInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::GroupRange()
    :
    expires{YType::uint64, "expires"},
    prefix_length{YType::int32, "prefix-length"},
    uptime{YType::uint64, "uptime"}
    	,
    prefix(std::make_shared<Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix>())
	,source_of_information(std::make_shared<Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation>())
{
    prefix->parent = this;

    source_of_information->parent = this;

    yang_name = "group-range"; yang_parent_name = "range";
}

Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::~GroupRange()
{
}

bool Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::has_data() const
{
    return expires.is_set
	|| prefix_length.is_set
	|| uptime.is_set
	|| (prefix !=  nullptr && prefix->has_data())
	|| (source_of_information !=  nullptr && source_of_information->has_data());
}

bool Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expires.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation())
	|| (source_of_information !=  nullptr && source_of_information->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-range";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupRange' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expires.is_set || is_set(expires.yfilter)) leaf_name_data.push_back(expires.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix>();
        }
        return prefix;
    }

    if(child_yang_name == "source-of-information")
    {
        if(source_of_information == nullptr)
        {
            source_of_information = std::make_shared<Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation>();
        }
        return source_of_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prefix != nullptr)
    {
        children["prefix"] = prefix;
    }

    if(source_of_information != nullptr)
    {
        children["source-of-information"] = source_of_information;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expires")
    {
        expires = value;
        expires.value_namespace = name_space;
        expires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expires")
    {
        expires.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "source-of-information" || name == "expires" || name == "prefix-length" || name == "uptime")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::Prefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "prefix"; yang_parent_name = "group-range";
}

Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::~Prefix()
{
}

bool Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::SourceOfInformation()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-of-information"; yang_parent_name = "group-range";
}

Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::~SourceOfInformation()
{
}

bool Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-of-information";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceOfInformation' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::Ranges::Range::GroupRange::SourceOfInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormats()
{
    yang_name = "interface-old-formats"; yang_parent_name = "vrf";
}

Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::~InterfaceOldFormats()
{
}

bool Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::has_data() const
{
    for (std::size_t index=0; index<interface_old_format.size(); index++)
    {
        if(interface_old_format[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::has_operation() const
{
    for (std::size_t index=0; index<interface_old_format.size(); index++)
    {
        if(interface_old_format[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-formats";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceOldFormats' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-old-format")
    {
        for(auto const & c : interface_old_format)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat>();
        c->parent = this;
        interface_old_format.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_old_format)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-old-format")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceOldFormat()
    :
    interface_name{YType::str, "interface-name"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    dr_priority{YType::uint32, "dr-priority"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    generation_id{YType::uint32, "generation-id"},
    hello_expiry{YType::uint64, "hello-expiry"},
    hello_interval{YType::uint16, "hello-interval"},
    idb_acl_name{YType::str, "idb-acl-name"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_enabled{YType::boolean, "is-enabled"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    neighbor_count{YType::uint16, "neighbor-count"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    override_interval{YType::uint16, "override-interval"},
    passive_interface{YType::boolean, "passive-interface"},
    propagation_delay{YType::uint16, "propagation-delay"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    virtual_interface{YType::boolean, "virtual-interface"}
    	,
    dr_address(std::make_shared<Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress>())
{
    dr_address->parent = this;

    yang_name = "interface-old-format"; yang_parent_name = "interface-old-formats";
}

Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::~InterfaceOldFormat()
{
}

bool Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::has_data() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| configured_override_interval.is_set
	|| configured_propagation_delay.is_set
	|| dr_priority.is_set
	|| external_neighbor_count.is_set
	|| generation_id.is_set
	|| hello_expiry.is_set
	|| hello_interval.is_set
	|| idb_acl_name.is_set
	|| idb_acl_provided.is_set
	|| idb_current_count.is_set
	|| idb_max_count.is_set
	|| idb_oor_enabled.is_set
	|| idb_threshold_count.is_set
	|| interface_address_mask.is_set
	|| interface_name_xr.is_set
	|| is_batch_asserts_capable.is_set
	|| is_bidirectional_capable.is_set
	|| is_enabled.is_set
	|| is_proxy_capable.is_set
	|| join_prune_interval.is_set
	|| neighbor_count.is_set
	|| neighbor_filter_name.is_set
	|| override_interval.is_set
	|| passive_interface.is_set
	|| propagation_delay.is_set
	|| prune_delay_enabled.is_set
	|| virtual_interface.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::has_operation() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(are_we_dr.yfilter)
	|| ydk::is_set(bfd_enabled.yfilter)
	|| ydk::is_set(bfd_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(configured_override_interval.yfilter)
	|| ydk::is_set(configured_propagation_delay.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(external_neighbor_count.yfilter)
	|| ydk::is_set(generation_id.yfilter)
	|| ydk::is_set(hello_expiry.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(idb_acl_name.yfilter)
	|| ydk::is_set(idb_acl_provided.yfilter)
	|| ydk::is_set(idb_current_count.yfilter)
	|| ydk::is_set(idb_max_count.yfilter)
	|| ydk::is_set(idb_oor_enabled.yfilter)
	|| ydk::is_set(idb_threshold_count.yfilter)
	|| ydk::is_set(interface_address_mask.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(is_batch_asserts_capable.yfilter)
	|| ydk::is_set(is_bidirectional_capable.yfilter)
	|| ydk::is_set(is_enabled.yfilter)
	|| ydk::is_set(is_proxy_capable.yfilter)
	|| ydk::is_set(join_prune_interval.yfilter)
	|| ydk::is_set(neighbor_count.yfilter)
	|| ydk::is_set(neighbor_filter_name.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| ydk::is_set(prune_delay_enabled.yfilter)
	|| ydk::is_set(virtual_interface.yfilter)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-format" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceOldFormat' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.yfilter)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.yfilter)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.yfilter)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.yfilter)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.yfilter)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.yfilter)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.yfilter)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.yfilter)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.yfilter)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.yfilter)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.yfilter)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.yfilter)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.yfilter)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.yfilter)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.yfilter)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.yfilter)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.yfilter)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.yfilter)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.yfilter)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.yfilter)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.yfilter)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.yfilter)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.yfilter)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.yfilter)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dr-address")
    {
        if(dr_address == nullptr)
        {
            dr_address = std::make_shared<Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress>();
        }
        return dr_address;
    }

    if(child_yang_name == "interface-address")
    {
        for(auto const & c : interface_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dr_address != nullptr)
    {
        children["dr-address"] = dr_address;
    }

    for (auto const & c : interface_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
        are_we_dr.value_namespace = name_space;
        are_we_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
        bfd_enabled.value_namespace = name_space;
        bfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
        bfd_interval.value_namespace = name_space;
        bfd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
        configured_override_interval.value_namespace = name_space;
        configured_override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
        configured_propagation_delay.value_namespace = name_space;
        configured_propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
        external_neighbor_count.value_namespace = name_space;
        external_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
        generation_id.value_namespace = name_space;
        generation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
        hello_expiry.value_namespace = name_space;
        hello_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
        idb_acl_name.value_namespace = name_space;
        idb_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
        idb_acl_provided.value_namespace = name_space;
        idb_acl_provided.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
        idb_current_count.value_namespace = name_space;
        idb_current_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
        idb_max_count.value_namespace = name_space;
        idb_max_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
        idb_oor_enabled.value_namespace = name_space;
        idb_oor_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
        idb_threshold_count.value_namespace = name_space;
        idb_threshold_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
        interface_address_mask.value_namespace = name_space;
        interface_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
        is_batch_asserts_capable.value_namespace = name_space;
        is_batch_asserts_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
        is_bidirectional_capable.value_namespace = name_space;
        is_bidirectional_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
        is_enabled.value_namespace = name_space;
        is_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
        is_proxy_capable.value_namespace = name_space;
        is_proxy_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
        join_prune_interval.value_namespace = name_space;
        join_prune_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
        neighbor_count.value_namespace = name_space;
        neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
        neighbor_filter_name.value_namespace = name_space;
        neighbor_filter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
        prune_delay_enabled.value_namespace = name_space;
        prune_delay_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
        virtual_interface.value_namespace = name_space;
        virtual_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr.yfilter = yfilter;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval.yfilter = yfilter;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "generation-id")
    {
        generation_id.yfilter = yfilter;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name.yfilter = yfilter;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided.yfilter = yfilter;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count.yfilter = yfilter;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count.yfilter = yfilter;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled.yfilter = yfilter;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count.yfilter = yfilter;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable.yfilter = yfilter;
    }
    if(value_path == "is-enabled")
    {
        is_enabled.yfilter = yfilter;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable.yfilter = yfilter;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval.yfilter = yfilter;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled.yfilter = yfilter;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dr-address" || name == "interface-address" || name == "interface-name" || name == "are-we-dr" || name == "bfd-enabled" || name == "bfd-interval" || name == "bfd-multiplier" || name == "configured-override-interval" || name == "configured-propagation-delay" || name == "dr-priority" || name == "external-neighbor-count" || name == "generation-id" || name == "hello-expiry" || name == "hello-interval" || name == "idb-acl-name" || name == "idb-acl-provided" || name == "idb-current-count" || name == "idb-max-count" || name == "idb-oor-enabled" || name == "idb-threshold-count" || name == "interface-address-mask" || name == "interface-name-xr" || name == "is-batch-asserts-capable" || name == "is-bidirectional-capable" || name == "is-enabled" || name == "is-proxy-capable" || name == "join-prune-interval" || name == "neighbor-count" || name == "neighbor-filter-name" || name == "override-interval" || name == "passive-interface" || name == "propagation-delay" || name == "prune-delay-enabled" || name == "virtual-interface")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "dr-address"; yang_parent_name = "interface-old-format";
}

Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::~DrAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DrAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::DrAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "interface-address"; yang_parent_name = "interface-old-format";
}

Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Bsr::Bsr()
    :
    bsr_elections(std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::BsrElections>())
	,candidate_rps(std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps>())
	,rp_caches(std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::RpCaches>())
{
    bsr_elections->parent = this;

    candidate_rps->parent = this;

    rp_caches->parent = this;

    yang_name = "bsr"; yang_parent_name = "vrf";
}

Pim::Standby::Vrfs::Vrf::Bsr::~Bsr()
{
}

bool Pim::Standby::Vrfs::Vrf::Bsr::has_data() const
{
    return (bsr_elections !=  nullptr && bsr_elections->has_data())
	|| (candidate_rps !=  nullptr && candidate_rps->has_data())
	|| (rp_caches !=  nullptr && rp_caches->has_data());
}

bool Pim::Standby::Vrfs::Vrf::Bsr::has_operation() const
{
    return is_set(yfilter)
	|| (bsr_elections !=  nullptr && bsr_elections->has_operation())
	|| (candidate_rps !=  nullptr && candidate_rps->has_operation())
	|| (rp_caches !=  nullptr && rp_caches->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::Bsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Bsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bsr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Bsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsr-elections")
    {
        if(bsr_elections == nullptr)
        {
            bsr_elections = std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::BsrElections>();
        }
        return bsr_elections;
    }

    if(child_yang_name == "candidate-rps")
    {
        if(candidate_rps == nullptr)
        {
            candidate_rps = std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps>();
        }
        return candidate_rps;
    }

    if(child_yang_name == "rp-caches")
    {
        if(rp_caches == nullptr)
        {
            rp_caches = std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::RpCaches>();
        }
        return rp_caches;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Bsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bsr_elections != nullptr)
    {
        children["bsr-elections"] = bsr_elections;
    }

    if(candidate_rps != nullptr)
    {
        children["candidate-rps"] = candidate_rps;
    }

    if(rp_caches != nullptr)
    {
        children["rp-caches"] = rp_caches;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Bsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::Bsr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::Bsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-elections" || name == "candidate-rps" || name == "rp-caches")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCaches()
{
    yang_name = "rp-caches"; yang_parent_name = "bsr";
}

Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::~RpCaches()
{
}

bool Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::has_data() const
{
    for (std::size_t index=0; index<rp_cache.size(); index++)
    {
        if(rp_cache[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::has_operation() const
{
    for (std::size_t index=0; index<rp_cache.size(); index++)
    {
        if(rp_cache[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-caches";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpCaches' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rp-cache")
    {
        for(auto const & c : rp_cache)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache>();
        c->parent = this;
        rp_cache.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : rp_cache)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rp-cache")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::RpCache()
    :
    group_prefix{YType::str, "group-prefix"},
    candidate_rp_group_count{YType::uint32, "candidate-rp-group-count"},
    group_prefix_length{YType::uint32, "group-prefix-length"}
    	,
    candidate_rp_list(std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList>())
	,group_prefix_xr(std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr>())
{
    candidate_rp_list->parent = this;

    group_prefix_xr->parent = this;

    yang_name = "rp-cache"; yang_parent_name = "rp-caches";
}

Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::~RpCache()
{
}

bool Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::has_data() const
{
    return group_prefix.is_set
	|| candidate_rp_group_count.is_set
	|| group_prefix_length.is_set
	|| (candidate_rp_list !=  nullptr && candidate_rp_list->has_data())
	|| (group_prefix_xr !=  nullptr && group_prefix_xr->has_data());
}

bool Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_prefix.yfilter)
	|| ydk::is_set(candidate_rp_group_count.yfilter)
	|| ydk::is_set(group_prefix_length.yfilter)
	|| (candidate_rp_list !=  nullptr && candidate_rp_list->has_operation())
	|| (group_prefix_xr !=  nullptr && group_prefix_xr->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rp-cache" <<"[group-prefix='" <<group_prefix <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpCache' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_prefix.is_set || is_set(group_prefix.yfilter)) leaf_name_data.push_back(group_prefix.get_name_leafdata());
    if (candidate_rp_group_count.is_set || is_set(candidate_rp_group_count.yfilter)) leaf_name_data.push_back(candidate_rp_group_count.get_name_leafdata());
    if (group_prefix_length.is_set || is_set(group_prefix_length.yfilter)) leaf_name_data.push_back(group_prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-rp-list")
    {
        if(candidate_rp_list == nullptr)
        {
            candidate_rp_list = std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList>();
        }
        return candidate_rp_list;
    }

    if(child_yang_name == "group-prefix-xr")
    {
        if(group_prefix_xr == nullptr)
        {
            group_prefix_xr = std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr>();
        }
        return group_prefix_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_rp_list != nullptr)
    {
        children["candidate-rp-list"] = candidate_rp_list;
    }

    if(group_prefix_xr != nullptr)
    {
        children["group-prefix-xr"] = group_prefix_xr;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-prefix")
    {
        group_prefix = value;
        group_prefix.value_namespace = name_space;
        group_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-group-count")
    {
        candidate_rp_group_count = value;
        candidate_rp_group_count.value_namespace = name_space;
        candidate_rp_group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-prefix-length")
    {
        group_prefix_length = value;
        group_prefix_length.value_namespace = name_space;
        group_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-prefix")
    {
        group_prefix.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-group-count")
    {
        candidate_rp_group_count.yfilter = yfilter;
    }
    if(value_path == "group-prefix-length")
    {
        group_prefix_length.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-rp-list" || name == "group-prefix-xr" || name == "group-prefix" || name == "candidate-rp-group-count" || name == "group-prefix-length")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr::GroupPrefixXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-prefix-xr"; yang_parent_name = "rp-cache";
}

Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr::~GroupPrefixXr()
{
}

bool Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-prefix-xr";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupPrefixXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::GroupPrefixXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::CandidateRpList()
{
    yang_name = "candidate-rp-list"; yang_parent_name = "rp-cache";
}

Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::~CandidateRpList()
{
}

bool Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::has_data() const
{
    for (std::size_t index=0; index<pim_bsr_crp_bag.size(); index++)
    {
        if(pim_bsr_crp_bag[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::has_operation() const
{
    for (std::size_t index=0; index<pim_bsr_crp_bag.size(); index++)
    {
        if(pim_bsr_crp_bag[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp-list";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateRpList' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pim-bsr-crp-bag")
    {
        for(auto const & c : pim_bsr_crp_bag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag>();
        c->parent = this;
        pim_bsr_crp_bag.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pim_bsr_crp_bag)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pim-bsr-crp-bag")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::PimBsrCrpBag()
    :
    candidate_rp_expires{YType::uint16, "candidate-rp-expires"},
    candidate_rp_holdtime{YType::uint16, "candidate-rp-holdtime"},
    candidate_rp_priority{YType::uint8, "candidate-rp-priority"},
    candidate_rp_up_time{YType::uint16, "candidate-rp-up-time"},
    protocol{YType::enumeration, "protocol"}
    	,
    candidate_rp_address(std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress>())
{
    candidate_rp_address->parent = this;

    yang_name = "pim-bsr-crp-bag"; yang_parent_name = "candidate-rp-list";
}

Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::~PimBsrCrpBag()
{
}

bool Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::has_data() const
{
    return candidate_rp_expires.is_set
	|| candidate_rp_holdtime.is_set
	|| candidate_rp_priority.is_set
	|| candidate_rp_up_time.is_set
	|| protocol.is_set
	|| (candidate_rp_address !=  nullptr && candidate_rp_address->has_data());
}

bool Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(candidate_rp_expires.yfilter)
	|| ydk::is_set(candidate_rp_holdtime.yfilter)
	|| ydk::is_set(candidate_rp_priority.yfilter)
	|| ydk::is_set(candidate_rp_up_time.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| (candidate_rp_address !=  nullptr && candidate_rp_address->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim-bsr-crp-bag";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PimBsrCrpBag' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (candidate_rp_expires.is_set || is_set(candidate_rp_expires.yfilter)) leaf_name_data.push_back(candidate_rp_expires.get_name_leafdata());
    if (candidate_rp_holdtime.is_set || is_set(candidate_rp_holdtime.yfilter)) leaf_name_data.push_back(candidate_rp_holdtime.get_name_leafdata());
    if (candidate_rp_priority.is_set || is_set(candidate_rp_priority.yfilter)) leaf_name_data.push_back(candidate_rp_priority.get_name_leafdata());
    if (candidate_rp_up_time.is_set || is_set(candidate_rp_up_time.yfilter)) leaf_name_data.push_back(candidate_rp_up_time.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-rp-address")
    {
        if(candidate_rp_address == nullptr)
        {
            candidate_rp_address = std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress>();
        }
        return candidate_rp_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_rp_address != nullptr)
    {
        children["candidate-rp-address"] = candidate_rp_address;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "candidate-rp-expires")
    {
        candidate_rp_expires = value;
        candidate_rp_expires.value_namespace = name_space;
        candidate_rp_expires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-holdtime")
    {
        candidate_rp_holdtime = value;
        candidate_rp_holdtime.value_namespace = name_space;
        candidate_rp_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-priority")
    {
        candidate_rp_priority = value;
        candidate_rp_priority.value_namespace = name_space;
        candidate_rp_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-up-time")
    {
        candidate_rp_up_time = value;
        candidate_rp_up_time.value_namespace = name_space;
        candidate_rp_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "candidate-rp-expires")
    {
        candidate_rp_expires.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-holdtime")
    {
        candidate_rp_holdtime.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-priority")
    {
        candidate_rp_priority.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-up-time")
    {
        candidate_rp_up_time.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-rp-address" || name == "candidate-rp-expires" || name == "candidate-rp-holdtime" || name == "candidate-rp-priority" || name == "candidate-rp-up-time" || name == "protocol")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::CandidateRpAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "candidate-rp-address"; yang_parent_name = "pim-bsr-crp-bag";
}

Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::~CandidateRpAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp-address";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateRpAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::Bsr::RpCaches::RpCache::CandidateRpList::PimBsrCrpBag::CandidateRpAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRps()
{
    yang_name = "candidate-rps"; yang_parent_name = "bsr";
}

Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::~CandidateRps()
{
}

bool Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::has_data() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::has_operation() const
{
    for (std::size_t index=0; index<candidate_rp.size(); index++)
    {
        if(candidate_rp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rps";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateRps' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-rp")
    {
        for(auto const & c : candidate_rp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp>();
        c->parent = this;
        candidate_rp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : candidate_rp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-rp")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp()
    :
    rp_address{YType::str, "rp-address"},
    acl_name{YType::str, "acl-name"},
    candidate_rp_advance_interval{YType::uint16, "candidate-rp-advance-interval"},
    candidate_rp_mode{YType::enumeration, "candidate-rp-mode"},
    candidate_rp_scope{YType::int32, "candidate-rp-scope"},
    candidate_rp_uptime{YType::uint16, "candidate-rp-uptime"},
    crp_holdtime{YType::uint16, "crp-holdtime"},
    crp_priority{YType::uint8, "crp-priority"}
    	,
    candidate_rp(std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_>())
{
    candidate_rp->parent = this;

    yang_name = "candidate-rp"; yang_parent_name = "candidate-rps";
}

Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::~CandidateRp()
{
}

bool Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::has_data() const
{
    for (std::size_t index=0; index<crp_access.size(); index++)
    {
        if(crp_access[index]->has_data())
            return true;
    }
    return rp_address.is_set
	|| acl_name.is_set
	|| candidate_rp_advance_interval.is_set
	|| candidate_rp_mode.is_set
	|| candidate_rp_scope.is_set
	|| candidate_rp_uptime.is_set
	|| crp_holdtime.is_set
	|| crp_priority.is_set
	|| (candidate_rp !=  nullptr && candidate_rp->has_data());
}

bool Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::has_operation() const
{
    for (std::size_t index=0; index<crp_access.size(); index++)
    {
        if(crp_access[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(rp_address.yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(candidate_rp_advance_interval.yfilter)
	|| ydk::is_set(candidate_rp_mode.yfilter)
	|| ydk::is_set(candidate_rp_scope.yfilter)
	|| ydk::is_set(candidate_rp_uptime.yfilter)
	|| ydk::is_set(crp_holdtime.yfilter)
	|| ydk::is_set(crp_priority.yfilter)
	|| (candidate_rp !=  nullptr && candidate_rp->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp" <<"[rp-address='" <<rp_address <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateRp' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rp_address.is_set || is_set(rp_address.yfilter)) leaf_name_data.push_back(rp_address.get_name_leafdata());
    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (candidate_rp_advance_interval.is_set || is_set(candidate_rp_advance_interval.yfilter)) leaf_name_data.push_back(candidate_rp_advance_interval.get_name_leafdata());
    if (candidate_rp_mode.is_set || is_set(candidate_rp_mode.yfilter)) leaf_name_data.push_back(candidate_rp_mode.get_name_leafdata());
    if (candidate_rp_scope.is_set || is_set(candidate_rp_scope.yfilter)) leaf_name_data.push_back(candidate_rp_scope.get_name_leafdata());
    if (candidate_rp_uptime.is_set || is_set(candidate_rp_uptime.yfilter)) leaf_name_data.push_back(candidate_rp_uptime.get_name_leafdata());
    if (crp_holdtime.is_set || is_set(crp_holdtime.yfilter)) leaf_name_data.push_back(crp_holdtime.get_name_leafdata());
    if (crp_priority.is_set || is_set(crp_priority.yfilter)) leaf_name_data.push_back(crp_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate-rp")
    {
        if(candidate_rp == nullptr)
        {
            candidate_rp = std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_>();
        }
        return candidate_rp;
    }

    if(child_yang_name == "crp-access")
    {
        for(auto const & c : crp_access)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess>();
        c->parent = this;
        crp_access.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate_rp != nullptr)
    {
        children["candidate-rp"] = candidate_rp;
    }

    for (auto const & c : crp_access)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rp-address")
    {
        rp_address = value;
        rp_address.value_namespace = name_space;
        rp_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-advance-interval")
    {
        candidate_rp_advance_interval = value;
        candidate_rp_advance_interval.value_namespace = name_space;
        candidate_rp_advance_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-mode")
    {
        candidate_rp_mode = value;
        candidate_rp_mode.value_namespace = name_space;
        candidate_rp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-scope")
    {
        candidate_rp_scope = value;
        candidate_rp_scope.value_namespace = name_space;
        candidate_rp_scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-uptime")
    {
        candidate_rp_uptime = value;
        candidate_rp_uptime.value_namespace = name_space;
        candidate_rp_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crp-holdtime")
    {
        crp_holdtime = value;
        crp_holdtime.value_namespace = name_space;
        crp_holdtime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "crp-priority")
    {
        crp_priority = value;
        crp_priority.value_namespace = name_space;
        crp_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rp-address")
    {
        rp_address.yfilter = yfilter;
    }
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-advance-interval")
    {
        candidate_rp_advance_interval.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-mode")
    {
        candidate_rp_mode.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-scope")
    {
        candidate_rp_scope.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-uptime")
    {
        candidate_rp_uptime.yfilter = yfilter;
    }
    if(value_path == "crp-holdtime")
    {
        crp_holdtime.yfilter = yfilter;
    }
    if(value_path == "crp-priority")
    {
        crp_priority.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "candidate-rp" || name == "crp-access" || name == "rp-address" || name == "acl-name" || name == "candidate-rp-advance-interval" || name == "candidate-rp-mode" || name == "candidate-rp-scope" || name == "candidate-rp-uptime" || name == "crp-holdtime" || name == "crp-priority")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_::CandidateRp_()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "candidate-rp"; yang_parent_name = "candidate-rp";
}

Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_::~CandidateRp_()
{
}

bool Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-rp";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateRp_' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CandidateRp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess::CrpAccess()
    :
    acl_name{YType::str, "acl-name"},
    candidate_rp_mode{YType::enumeration, "candidate-rp-mode"}
{
    yang_name = "crp-access"; yang_parent_name = "candidate-rp";
}

Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess::~CrpAccess()
{
}

bool Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess::has_data() const
{
    return acl_name.is_set
	|| candidate_rp_mode.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(candidate_rp_mode.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "crp-access";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CrpAccess' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (candidate_rp_mode.is_set || is_set(candidate_rp_mode.yfilter)) leaf_name_data.push_back(candidate_rp_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-rp-mode")
    {
        candidate_rp_mode = value;
        candidate_rp_mode.value_namespace = name_space;
        candidate_rp_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "candidate-rp-mode")
    {
        candidate_rp_mode.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Bsr::CandidateRps::CandidateRp::CrpAccess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "candidate-rp-mode")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElections()
{
    yang_name = "bsr-elections"; yang_parent_name = "bsr";
}

Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::~BsrElections()
{
}

bool Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::has_data() const
{
    for (std::size_t index=0; index<bsr_election.size(); index++)
    {
        if(bsr_election[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::has_operation() const
{
    for (std::size_t index=0; index<bsr_election.size(); index++)
    {
        if(bsr_election[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-elections";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BsrElections' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsr-election")
    {
        for(auto const & c : bsr_election)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection>();
        c->parent = this;
        bsr_election.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bsr_election)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-election")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrElection()
    :
    pim_scope{YType::int32, "pim-scope"},
    bootstrap_timeout{YType::uint16, "bootstrap-timeout"},
    bsr_election_state{YType::uint32, "bsr-election-state"},
    bsr_mask_length{YType::uint8, "bsr-mask-length"},
    bsr_priority{YType::uint8, "bsr-priority"},
    bsr_scope{YType::uint16, "bsr-scope"},
    bsr_up_time{YType::uint16, "bsr-up-time"},
    candidate_bsr_flag{YType::boolean, "candidate-bsr-flag"},
    candidate_bsr_mask_length{YType::uint8, "candidate-bsr-mask-length"},
    candidate_bsr_priority{YType::uint8, "candidate-bsr-priority"},
    candidate_bsr_state{YType::uint32, "candidate-bsr-state"}
    	,
    bsr_address(std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress>())
	,candidate_bsr_address(std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress>())
{
    bsr_address->parent = this;

    candidate_bsr_address->parent = this;

    yang_name = "bsr-election"; yang_parent_name = "bsr-elections";
}

Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::~BsrElection()
{
}

bool Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::has_data() const
{
    return pim_scope.is_set
	|| bootstrap_timeout.is_set
	|| bsr_election_state.is_set
	|| bsr_mask_length.is_set
	|| bsr_priority.is_set
	|| bsr_scope.is_set
	|| bsr_up_time.is_set
	|| candidate_bsr_flag.is_set
	|| candidate_bsr_mask_length.is_set
	|| candidate_bsr_priority.is_set
	|| candidate_bsr_state.is_set
	|| (bsr_address !=  nullptr && bsr_address->has_data())
	|| (candidate_bsr_address !=  nullptr && candidate_bsr_address->has_data());
}

bool Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pim_scope.yfilter)
	|| ydk::is_set(bootstrap_timeout.yfilter)
	|| ydk::is_set(bsr_election_state.yfilter)
	|| ydk::is_set(bsr_mask_length.yfilter)
	|| ydk::is_set(bsr_priority.yfilter)
	|| ydk::is_set(bsr_scope.yfilter)
	|| ydk::is_set(bsr_up_time.yfilter)
	|| ydk::is_set(candidate_bsr_flag.yfilter)
	|| ydk::is_set(candidate_bsr_mask_length.yfilter)
	|| ydk::is_set(candidate_bsr_priority.yfilter)
	|| ydk::is_set(candidate_bsr_state.yfilter)
	|| (bsr_address !=  nullptr && bsr_address->has_operation())
	|| (candidate_bsr_address !=  nullptr && candidate_bsr_address->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-election" <<"[pim-scope='" <<pim_scope <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BsrElection' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pim_scope.is_set || is_set(pim_scope.yfilter)) leaf_name_data.push_back(pim_scope.get_name_leafdata());
    if (bootstrap_timeout.is_set || is_set(bootstrap_timeout.yfilter)) leaf_name_data.push_back(bootstrap_timeout.get_name_leafdata());
    if (bsr_election_state.is_set || is_set(bsr_election_state.yfilter)) leaf_name_data.push_back(bsr_election_state.get_name_leafdata());
    if (bsr_mask_length.is_set || is_set(bsr_mask_length.yfilter)) leaf_name_data.push_back(bsr_mask_length.get_name_leafdata());
    if (bsr_priority.is_set || is_set(bsr_priority.yfilter)) leaf_name_data.push_back(bsr_priority.get_name_leafdata());
    if (bsr_scope.is_set || is_set(bsr_scope.yfilter)) leaf_name_data.push_back(bsr_scope.get_name_leafdata());
    if (bsr_up_time.is_set || is_set(bsr_up_time.yfilter)) leaf_name_data.push_back(bsr_up_time.get_name_leafdata());
    if (candidate_bsr_flag.is_set || is_set(candidate_bsr_flag.yfilter)) leaf_name_data.push_back(candidate_bsr_flag.get_name_leafdata());
    if (candidate_bsr_mask_length.is_set || is_set(candidate_bsr_mask_length.yfilter)) leaf_name_data.push_back(candidate_bsr_mask_length.get_name_leafdata());
    if (candidate_bsr_priority.is_set || is_set(candidate_bsr_priority.yfilter)) leaf_name_data.push_back(candidate_bsr_priority.get_name_leafdata());
    if (candidate_bsr_state.is_set || is_set(candidate_bsr_state.yfilter)) leaf_name_data.push_back(candidate_bsr_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsr-address")
    {
        if(bsr_address == nullptr)
        {
            bsr_address = std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress>();
        }
        return bsr_address;
    }

    if(child_yang_name == "candidate-bsr-address")
    {
        if(candidate_bsr_address == nullptr)
        {
            candidate_bsr_address = std::make_shared<Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress>();
        }
        return candidate_bsr_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bsr_address != nullptr)
    {
        children["bsr-address"] = bsr_address;
    }

    if(candidate_bsr_address != nullptr)
    {
        children["candidate-bsr-address"] = candidate_bsr_address;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pim-scope")
    {
        pim_scope = value;
        pim_scope.value_namespace = name_space;
        pim_scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bootstrap-timeout")
    {
        bootstrap_timeout = value;
        bootstrap_timeout.value_namespace = name_space;
        bootstrap_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-election-state")
    {
        bsr_election_state = value;
        bsr_election_state.value_namespace = name_space;
        bsr_election_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-mask-length")
    {
        bsr_mask_length = value;
        bsr_mask_length.value_namespace = name_space;
        bsr_mask_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-priority")
    {
        bsr_priority = value;
        bsr_priority.value_namespace = name_space;
        bsr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-scope")
    {
        bsr_scope = value;
        bsr_scope.value_namespace = name_space;
        bsr_scope.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bsr-up-time")
    {
        bsr_up_time = value;
        bsr_up_time.value_namespace = name_space;
        bsr_up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-bsr-flag")
    {
        candidate_bsr_flag = value;
        candidate_bsr_flag.value_namespace = name_space;
        candidate_bsr_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-bsr-mask-length")
    {
        candidate_bsr_mask_length = value;
        candidate_bsr_mask_length.value_namespace = name_space;
        candidate_bsr_mask_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-bsr-priority")
    {
        candidate_bsr_priority = value;
        candidate_bsr_priority.value_namespace = name_space;
        candidate_bsr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "candidate-bsr-state")
    {
        candidate_bsr_state = value;
        candidate_bsr_state.value_namespace = name_space;
        candidate_bsr_state.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pim-scope")
    {
        pim_scope.yfilter = yfilter;
    }
    if(value_path == "bootstrap-timeout")
    {
        bootstrap_timeout.yfilter = yfilter;
    }
    if(value_path == "bsr-election-state")
    {
        bsr_election_state.yfilter = yfilter;
    }
    if(value_path == "bsr-mask-length")
    {
        bsr_mask_length.yfilter = yfilter;
    }
    if(value_path == "bsr-priority")
    {
        bsr_priority.yfilter = yfilter;
    }
    if(value_path == "bsr-scope")
    {
        bsr_scope.yfilter = yfilter;
    }
    if(value_path == "bsr-up-time")
    {
        bsr_up_time.yfilter = yfilter;
    }
    if(value_path == "candidate-bsr-flag")
    {
        candidate_bsr_flag.yfilter = yfilter;
    }
    if(value_path == "candidate-bsr-mask-length")
    {
        candidate_bsr_mask_length.yfilter = yfilter;
    }
    if(value_path == "candidate-bsr-priority")
    {
        candidate_bsr_priority.yfilter = yfilter;
    }
    if(value_path == "candidate-bsr-state")
    {
        candidate_bsr_state.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr-address" || name == "candidate-bsr-address" || name == "pim-scope" || name == "bootstrap-timeout" || name == "bsr-election-state" || name == "bsr-mask-length" || name == "bsr-priority" || name == "bsr-scope" || name == "bsr-up-time" || name == "candidate-bsr-flag" || name == "candidate-bsr-mask-length" || name == "candidate-bsr-priority" || name == "candidate-bsr-state")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress::BsrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "bsr-address"; yang_parent_name = "bsr-election";
}

Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress::~BsrAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr-address";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BsrAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::BsrAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress::CandidateBsrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "candidate-bsr-address"; yang_parent_name = "bsr-election";
}

Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress::~CandidateBsrAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-bsr-address";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateBsrAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::Bsr::BsrElections::BsrElection::CandidateBsrAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicy()
    :
    route_policy_statistics(std::make_shared<Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics>())
	,route_policy_tests(std::make_shared<Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests>())
{
    route_policy_statistics->parent = this;

    route_policy_tests->parent = this;

    yang_name = "route-policy"; yang_parent_name = "vrf";
}

Pim::Standby::Vrfs::Vrf::RoutePolicy::~RoutePolicy()
{
}

bool Pim::Standby::Vrfs::Vrf::RoutePolicy::has_data() const
{
    return (route_policy_statistics !=  nullptr && route_policy_statistics->has_data())
	|| (route_policy_tests !=  nullptr && route_policy_tests->has_data());
}

bool Pim::Standby::Vrfs::Vrf::RoutePolicy::has_operation() const
{
    return is_set(yfilter)
	|| (route_policy_statistics !=  nullptr && route_policy_statistics->has_operation())
	|| (route_policy_tests !=  nullptr && route_policy_tests->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::RoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::RoutePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePolicy' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::RoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-policy-statistics")
    {
        if(route_policy_statistics == nullptr)
        {
            route_policy_statistics = std::make_shared<Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics>();
        }
        return route_policy_statistics;
    }

    if(child_yang_name == "route-policy-tests")
    {
        if(route_policy_tests == nullptr)
        {
            route_policy_tests = std::make_shared<Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests>();
        }
        return route_policy_tests;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::RoutePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route_policy_statistics != nullptr)
    {
        children["route-policy-statistics"] = route_policy_statistics;
    }

    if(route_policy_tests != nullptr)
    {
        children["route-policy-tests"] = route_policy_tests;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::RoutePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::RoutePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::RoutePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-statistics" || name == "route-policy-tests")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::RoutePolicyStatistics()
    :
    any_table{YType::uint32, "any-table"},
    default_table{YType::uint32, "default-table"},
    drop{YType::uint32, "drop"},
    pass{YType::uint32, "pass"},
    policy_name{YType::str, "policy-name"},
    requests{YType::uint32, "requests"}
{
    yang_name = "route-policy-statistics"; yang_parent_name = "route-policy";
}

Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::~RoutePolicyStatistics()
{
}

bool Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::has_data() const
{
    return any_table.is_set
	|| default_table.is_set
	|| drop.is_set
	|| pass.is_set
	|| policy_name.is_set
	|| requests.is_set;
}

bool Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(any_table.yfilter)
	|| ydk::is_set(default_table.yfilter)
	|| ydk::is_set(drop.yfilter)
	|| ydk::is_set(pass.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(requests.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-statistics";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePolicyStatistics' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (any_table.is_set || is_set(any_table.yfilter)) leaf_name_data.push_back(any_table.get_name_leafdata());
    if (default_table.is_set || is_set(default_table.yfilter)) leaf_name_data.push_back(default_table.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (pass.is_set || is_set(pass.yfilter)) leaf_name_data.push_back(pass.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "any-table")
    {
        any_table = value;
        any_table.value_namespace = name_space;
        any_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-table")
    {
        default_table = value;
        default_table.value_namespace = name_space;
        default_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pass")
    {
        pass = value;
        pass.value_namespace = name_space;
        pass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "any-table")
    {
        any_table.yfilter = yfilter;
    }
    if(value_path == "default-table")
    {
        default_table.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
    if(value_path == "pass")
    {
        pass.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "any-table" || name == "default-table" || name == "drop" || name == "pass" || name == "policy-name" || name == "requests")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTests()
{
    yang_name = "route-policy-tests"; yang_parent_name = "route-policy";
}

Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::~RoutePolicyTests()
{
}

bool Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::has_data() const
{
    for (std::size_t index=0; index<route_policy_test.size(); index++)
    {
        if(route_policy_test[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::has_operation() const
{
    for (std::size_t index=0; index<route_policy_test.size(); index++)
    {
        if(route_policy_test[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-tests";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePolicyTests' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-policy-test")
    {
        for(auto const & c : route_policy_test)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest>();
        c->parent = this;
        route_policy_test.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : route_policy_test)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-policy-test")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::RoutePolicyTest()
    :
    afi{YType::uint32, "afi"},
    default_table{YType::boolean, "default-table"},
    ext_comm{YType::str, "ext-comm"},
    extended_community_rt{YType::str, "extended-community-rt"},
    group_address{YType::str, "group-address"},
    pass{YType::boolean, "pass"},
    policy_name{YType::str, "policy-name"},
    safi{YType::uint32, "safi"},
    source_address{YType::str, "source-address"},
    table_active{YType::boolean, "table-active"},
    table_exists{YType::boolean, "table-exists"},
    table_name{YType::str, "table-name"},
    vrf_name{YType::str, "vrf-name"}
    	,
    group_address_xr(std::make_shared<Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr>())
	,source_address_xr(std::make_shared<Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr>())
{
    group_address_xr->parent = this;

    source_address_xr->parent = this;

    yang_name = "route-policy-test"; yang_parent_name = "route-policy-tests";
}

Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::~RoutePolicyTest()
{
}

bool Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::has_data() const
{
    return afi.is_set
	|| default_table.is_set
	|| ext_comm.is_set
	|| extended_community_rt.is_set
	|| group_address.is_set
	|| pass.is_set
	|| policy_name.is_set
	|| safi.is_set
	|| source_address.is_set
	|| table_active.is_set
	|| table_exists.is_set
	|| table_name.is_set
	|| vrf_name.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (source_address_xr !=  nullptr && source_address_xr->has_data());
}

bool Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(default_table.yfilter)
	|| ydk::is_set(ext_comm.yfilter)
	|| ydk::is_set(extended_community_rt.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(pass.yfilter)
	|| ydk::is_set(policy_name.yfilter)
	|| ydk::is_set(safi.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(table_active.yfilter)
	|| ydk::is_set(table_exists.yfilter)
	|| ydk::is_set(table_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (source_address_xr !=  nullptr && source_address_xr->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-policy-test";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutePolicyTest' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (default_table.is_set || is_set(default_table.yfilter)) leaf_name_data.push_back(default_table.get_name_leafdata());
    if (ext_comm.is_set || is_set(ext_comm.yfilter)) leaf_name_data.push_back(ext_comm.get_name_leafdata());
    if (extended_community_rt.is_set || is_set(extended_community_rt.yfilter)) leaf_name_data.push_back(extended_community_rt.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (pass.is_set || is_set(pass.yfilter)) leaf_name_data.push_back(pass.get_name_leafdata());
    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (safi.is_set || is_set(safi.yfilter)) leaf_name_data.push_back(safi.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (table_active.is_set || is_set(table_active.yfilter)) leaf_name_data.push_back(table_active.get_name_leafdata());
    if (table_exists.is_set || is_set(table_exists.yfilter)) leaf_name_data.push_back(table_exists.get_name_leafdata());
    if (table_name.is_set || is_set(table_name.yfilter)) leaf_name_data.push_back(table_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "source-address-xr")
    {
        if(source_address_xr == nullptr)
        {
            source_address_xr = std::make_shared<Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr>();
        }
        return source_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    if(source_address_xr != nullptr)
    {
        children["source-address-xr"] = source_address_xr;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-table")
    {
        default_table = value;
        default_table.value_namespace = name_space;
        default_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ext-comm")
    {
        ext_comm = value;
        ext_comm.value_namespace = name_space;
        ext_comm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-rt")
    {
        extended_community_rt = value;
        extended_community_rt.value_namespace = name_space;
        extended_community_rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pass")
    {
        pass = value;
        pass.value_namespace = name_space;
        pass.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "safi")
    {
        safi = value;
        safi.value_namespace = name_space;
        safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-active")
    {
        table_active = value;
        table_active.value_namespace = name_space;
        table_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-exists")
    {
        table_exists = value;
        table_exists.value_namespace = name_space;
        table_exists.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-name")
    {
        table_name = value;
        table_name.value_namespace = name_space;
        table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "default-table")
    {
        default_table.yfilter = yfilter;
    }
    if(value_path == "ext-comm")
    {
        ext_comm.yfilter = yfilter;
    }
    if(value_path == "extended-community-rt")
    {
        extended_community_rt.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "pass")
    {
        pass.yfilter = yfilter;
    }
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
    if(value_path == "safi")
    {
        safi.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "table-active")
    {
        table_active.yfilter = yfilter;
    }
    if(value_path == "table-exists")
    {
        table_exists.yfilter = yfilter;
    }
    if(value_path == "table-name")
    {
        table_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "source-address-xr" || name == "afi" || name == "default-table" || name == "ext-comm" || name == "extended-community-rt" || name == "group-address" || name == "pass" || name == "policy-name" || name == "safi" || name == "source-address" || name == "table-active" || name == "table-exists" || name == "table-name" || name == "vrf-name")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::SourceAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address-xr"; yang_parent_name = "route-policy-test";
}

Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::~SourceAddressXr()
{
}

bool Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-xr";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddressXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::SourceAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "route-policy-test";
}

Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::~GroupAddressXr()
{
}

bool Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressXr' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::RoutePolicy::RoutePolicyTests::RoutePolicyTest::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::RpfSummary::RpfSummary()
    :
    default_safi{YType::uint32, "default-safi"},
    default_table_name{YType::str, "default-table-name"},
    is_isis_mtr_configured{YType::boolean, "is-isis-mtr-configured"},
    is_isis_te_configured{YType::boolean, "is-isis-te-configured"},
    is_mbgp_configured{YType::boolean, "is-mbgp-configured"},
    is_multipath_enabled{YType::boolean, "is-multipath-enabled"},
    is_multipath_interface_hash_enabled{YType::boolean, "is-multipath-interface-hash-enabled"},
    is_multipath_source_hash_enabled{YType::boolean, "is-multipath-source-hash-enabled"},
    is_multipath_source_next_hop_hash_enabled{YType::boolean, "is-multipath-source-next-hop-hash-enabled"},
    is_ospf_te_configured{YType::boolean, "is-ospf-te-configured"},
    is_rib_convergence{YType::boolean, "is-rib-convergence"},
    mo_frr_configured{YType::boolean, "mo-frr-configured"},
    rib_convergence_time_left{YType::uint32, "rib-convergence-time-left"},
    rib_convergence_timeout{YType::uint32, "rib-convergence-timeout"},
    rib_mo_frr_configured{YType::boolean, "rib-mo-frr-configured"},
    rpf_registrations{YType::uint32, "rpf-registrations"},
    rump_enabled{YType::boolean, "rump-enabled"}
{
    yang_name = "rpf-summary"; yang_parent_name = "vrf";
}

Pim::Standby::Vrfs::Vrf::RpfSummary::~RpfSummary()
{
}

bool Pim::Standby::Vrfs::Vrf::RpfSummary::has_data() const
{
    return default_safi.is_set
	|| default_table_name.is_set
	|| is_isis_mtr_configured.is_set
	|| is_isis_te_configured.is_set
	|| is_mbgp_configured.is_set
	|| is_multipath_enabled.is_set
	|| is_multipath_interface_hash_enabled.is_set
	|| is_multipath_source_hash_enabled.is_set
	|| is_multipath_source_next_hop_hash_enabled.is_set
	|| is_ospf_te_configured.is_set
	|| is_rib_convergence.is_set
	|| mo_frr_configured.is_set
	|| rib_convergence_time_left.is_set
	|| rib_convergence_timeout.is_set
	|| rib_mo_frr_configured.is_set
	|| rpf_registrations.is_set
	|| rump_enabled.is_set;
}

bool Pim::Standby::Vrfs::Vrf::RpfSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_safi.yfilter)
	|| ydk::is_set(default_table_name.yfilter)
	|| ydk::is_set(is_isis_mtr_configured.yfilter)
	|| ydk::is_set(is_isis_te_configured.yfilter)
	|| ydk::is_set(is_mbgp_configured.yfilter)
	|| ydk::is_set(is_multipath_enabled.yfilter)
	|| ydk::is_set(is_multipath_interface_hash_enabled.yfilter)
	|| ydk::is_set(is_multipath_source_hash_enabled.yfilter)
	|| ydk::is_set(is_multipath_source_next_hop_hash_enabled.yfilter)
	|| ydk::is_set(is_ospf_te_configured.yfilter)
	|| ydk::is_set(is_rib_convergence.yfilter)
	|| ydk::is_set(mo_frr_configured.yfilter)
	|| ydk::is_set(rib_convergence_time_left.yfilter)
	|| ydk::is_set(rib_convergence_timeout.yfilter)
	|| ydk::is_set(rib_mo_frr_configured.yfilter)
	|| ydk::is_set(rpf_registrations.yfilter)
	|| ydk::is_set(rump_enabled.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::RpfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpf-summary";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::RpfSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RpfSummary' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_safi.is_set || is_set(default_safi.yfilter)) leaf_name_data.push_back(default_safi.get_name_leafdata());
    if (default_table_name.is_set || is_set(default_table_name.yfilter)) leaf_name_data.push_back(default_table_name.get_name_leafdata());
    if (is_isis_mtr_configured.is_set || is_set(is_isis_mtr_configured.yfilter)) leaf_name_data.push_back(is_isis_mtr_configured.get_name_leafdata());
    if (is_isis_te_configured.is_set || is_set(is_isis_te_configured.yfilter)) leaf_name_data.push_back(is_isis_te_configured.get_name_leafdata());
    if (is_mbgp_configured.is_set || is_set(is_mbgp_configured.yfilter)) leaf_name_data.push_back(is_mbgp_configured.get_name_leafdata());
    if (is_multipath_enabled.is_set || is_set(is_multipath_enabled.yfilter)) leaf_name_data.push_back(is_multipath_enabled.get_name_leafdata());
    if (is_multipath_interface_hash_enabled.is_set || is_set(is_multipath_interface_hash_enabled.yfilter)) leaf_name_data.push_back(is_multipath_interface_hash_enabled.get_name_leafdata());
    if (is_multipath_source_hash_enabled.is_set || is_set(is_multipath_source_hash_enabled.yfilter)) leaf_name_data.push_back(is_multipath_source_hash_enabled.get_name_leafdata());
    if (is_multipath_source_next_hop_hash_enabled.is_set || is_set(is_multipath_source_next_hop_hash_enabled.yfilter)) leaf_name_data.push_back(is_multipath_source_next_hop_hash_enabled.get_name_leafdata());
    if (is_ospf_te_configured.is_set || is_set(is_ospf_te_configured.yfilter)) leaf_name_data.push_back(is_ospf_te_configured.get_name_leafdata());
    if (is_rib_convergence.is_set || is_set(is_rib_convergence.yfilter)) leaf_name_data.push_back(is_rib_convergence.get_name_leafdata());
    if (mo_frr_configured.is_set || is_set(mo_frr_configured.yfilter)) leaf_name_data.push_back(mo_frr_configured.get_name_leafdata());
    if (rib_convergence_time_left.is_set || is_set(rib_convergence_time_left.yfilter)) leaf_name_data.push_back(rib_convergence_time_left.get_name_leafdata());
    if (rib_convergence_timeout.is_set || is_set(rib_convergence_timeout.yfilter)) leaf_name_data.push_back(rib_convergence_timeout.get_name_leafdata());
    if (rib_mo_frr_configured.is_set || is_set(rib_mo_frr_configured.yfilter)) leaf_name_data.push_back(rib_mo_frr_configured.get_name_leafdata());
    if (rpf_registrations.is_set || is_set(rpf_registrations.yfilter)) leaf_name_data.push_back(rpf_registrations.get_name_leafdata());
    if (rump_enabled.is_set || is_set(rump_enabled.yfilter)) leaf_name_data.push_back(rump_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::RpfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::RpfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::RpfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-safi")
    {
        default_safi = value;
        default_safi.value_namespace = name_space;
        default_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-table-name")
    {
        default_table_name = value;
        default_table_name.value_namespace = name_space;
        default_table_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-isis-mtr-configured")
    {
        is_isis_mtr_configured = value;
        is_isis_mtr_configured.value_namespace = name_space;
        is_isis_mtr_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-isis-te-configured")
    {
        is_isis_te_configured = value;
        is_isis_te_configured.value_namespace = name_space;
        is_isis_te_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mbgp-configured")
    {
        is_mbgp_configured = value;
        is_mbgp_configured.value_namespace = name_space;
        is_mbgp_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multipath-enabled")
    {
        is_multipath_enabled = value;
        is_multipath_enabled.value_namespace = name_space;
        is_multipath_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multipath-interface-hash-enabled")
    {
        is_multipath_interface_hash_enabled = value;
        is_multipath_interface_hash_enabled.value_namespace = name_space;
        is_multipath_interface_hash_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multipath-source-hash-enabled")
    {
        is_multipath_source_hash_enabled = value;
        is_multipath_source_hash_enabled.value_namespace = name_space;
        is_multipath_source_hash_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multipath-source-next-hop-hash-enabled")
    {
        is_multipath_source_next_hop_hash_enabled = value;
        is_multipath_source_next_hop_hash_enabled.value_namespace = name_space;
        is_multipath_source_next_hop_hash_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ospf-te-configured")
    {
        is_ospf_te_configured = value;
        is_ospf_te_configured.value_namespace = name_space;
        is_ospf_te_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence = value;
        is_rib_convergence.value_namespace = name_space;
        is_rib_convergence.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mo-frr-configured")
    {
        mo_frr_configured = value;
        mo_frr_configured.value_namespace = name_space;
        mo_frr_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-convergence-time-left")
    {
        rib_convergence_time_left = value;
        rib_convergence_time_left.value_namespace = name_space;
        rib_convergence_time_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-convergence-timeout")
    {
        rib_convergence_timeout = value;
        rib_convergence_timeout.value_namespace = name_space;
        rib_convergence_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-mo-frr-configured")
    {
        rib_mo_frr_configured = value;
        rib_mo_frr_configured.value_namespace = name_space;
        rib_mo_frr_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations = value;
        rpf_registrations.value_namespace = name_space;
        rpf_registrations.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rump-enabled")
    {
        rump_enabled = value;
        rump_enabled.value_namespace = name_space;
        rump_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::RpfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-safi")
    {
        default_safi.yfilter = yfilter;
    }
    if(value_path == "default-table-name")
    {
        default_table_name.yfilter = yfilter;
    }
    if(value_path == "is-isis-mtr-configured")
    {
        is_isis_mtr_configured.yfilter = yfilter;
    }
    if(value_path == "is-isis-te-configured")
    {
        is_isis_te_configured.yfilter = yfilter;
    }
    if(value_path == "is-mbgp-configured")
    {
        is_mbgp_configured.yfilter = yfilter;
    }
    if(value_path == "is-multipath-enabled")
    {
        is_multipath_enabled.yfilter = yfilter;
    }
    if(value_path == "is-multipath-interface-hash-enabled")
    {
        is_multipath_interface_hash_enabled.yfilter = yfilter;
    }
    if(value_path == "is-multipath-source-hash-enabled")
    {
        is_multipath_source_hash_enabled.yfilter = yfilter;
    }
    if(value_path == "is-multipath-source-next-hop-hash-enabled")
    {
        is_multipath_source_next_hop_hash_enabled.yfilter = yfilter;
    }
    if(value_path == "is-ospf-te-configured")
    {
        is_ospf_te_configured.yfilter = yfilter;
    }
    if(value_path == "is-rib-convergence")
    {
        is_rib_convergence.yfilter = yfilter;
    }
    if(value_path == "mo-frr-configured")
    {
        mo_frr_configured.yfilter = yfilter;
    }
    if(value_path == "rib-convergence-time-left")
    {
        rib_convergence_time_left.yfilter = yfilter;
    }
    if(value_path == "rib-convergence-timeout")
    {
        rib_convergence_timeout.yfilter = yfilter;
    }
    if(value_path == "rib-mo-frr-configured")
    {
        rib_mo_frr_configured.yfilter = yfilter;
    }
    if(value_path == "rpf-registrations")
    {
        rpf_registrations.yfilter = yfilter;
    }
    if(value_path == "rump-enabled")
    {
        rump_enabled.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::RpfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-safi" || name == "default-table-name" || name == "is-isis-mtr-configured" || name == "is-isis-te-configured" || name == "is-mbgp-configured" || name == "is-multipath-enabled" || name == "is-multipath-interface-hash-enabled" || name == "is-multipath-source-hash-enabled" || name == "is-multipath-source-next-hop-hash-enabled" || name == "is-ospf-te-configured" || name == "is-rib-convergence" || name == "mo-frr-configured" || name == "rib-convergence-time-left" || name == "rib-convergence-timeout" || name == "rib-mo-frr-configured" || name == "rpf-registrations" || name == "rump-enabled")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "vrf";
}

Pim::Standby::Vrfs::Vrf::Interfaces::~Interfaces()
{
}

bool Pim::Standby::Vrfs::Vrf::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    are_we_dr{YType::boolean, "are-we-dr"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    configured_override_interval{YType::uint16, "configured-override-interval"},
    configured_propagation_delay{YType::uint16, "configured-propagation-delay"},
    dr_priority{YType::uint32, "dr-priority"},
    external_neighbor_count{YType::uint16, "external-neighbor-count"},
    generation_id{YType::uint32, "generation-id"},
    hello_expiry{YType::uint64, "hello-expiry"},
    hello_interval{YType::uint16, "hello-interval"},
    idb_acl_name{YType::str, "idb-acl-name"},
    idb_acl_provided{YType::boolean, "idb-acl-provided"},
    idb_current_count{YType::uint32, "idb-current-count"},
    idb_max_count{YType::uint32, "idb-max-count"},
    idb_oor_enabled{YType::boolean, "idb-oor-enabled"},
    idb_threshold_count{YType::uint32, "idb-threshold-count"},
    interface_address_mask{YType::uint8, "interface-address-mask"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_batch_asserts_capable{YType::boolean, "is-batch-asserts-capable"},
    is_bidirectional_capable{YType::boolean, "is-bidirectional-capable"},
    is_enabled{YType::boolean, "is-enabled"},
    is_proxy_capable{YType::boolean, "is-proxy-capable"},
    join_prune_interval{YType::uint16, "join-prune-interval"},
    neighbor_count{YType::uint16, "neighbor-count"},
    neighbor_filter_name{YType::str, "neighbor-filter-name"},
    override_interval{YType::uint16, "override-interval"},
    passive_interface{YType::boolean, "passive-interface"},
    propagation_delay{YType::uint16, "propagation-delay"},
    prune_delay_enabled{YType::boolean, "prune-delay-enabled"},
    virtual_interface{YType::boolean, "virtual-interface"}
    	,
    dr_address(std::make_shared<Pim::Standby::Vrfs::Vrf::Interfaces::Interface::DrAddress>())
{
    dr_address->parent = this;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Pim::Standby::Vrfs::Vrf::Interfaces::Interface::~Interface()
{
}

bool Pim::Standby::Vrfs::Vrf::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| are_we_dr.is_set
	|| bfd_enabled.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| configured_override_interval.is_set
	|| configured_propagation_delay.is_set
	|| dr_priority.is_set
	|| external_neighbor_count.is_set
	|| generation_id.is_set
	|| hello_expiry.is_set
	|| hello_interval.is_set
	|| idb_acl_name.is_set
	|| idb_acl_provided.is_set
	|| idb_current_count.is_set
	|| idb_max_count.is_set
	|| idb_oor_enabled.is_set
	|| idb_threshold_count.is_set
	|| interface_address_mask.is_set
	|| interface_name_xr.is_set
	|| is_batch_asserts_capable.is_set
	|| is_bidirectional_capable.is_set
	|| is_enabled.is_set
	|| is_proxy_capable.is_set
	|| join_prune_interval.is_set
	|| neighbor_count.is_set
	|| neighbor_filter_name.is_set
	|| override_interval.is_set
	|| passive_interface.is_set
	|| propagation_delay.is_set
	|| prune_delay_enabled.is_set
	|| virtual_interface.is_set
	|| (dr_address !=  nullptr && dr_address->has_data());
}

bool Pim::Standby::Vrfs::Vrf::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<interface_address.size(); index++)
    {
        if(interface_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(are_we_dr.yfilter)
	|| ydk::is_set(bfd_enabled.yfilter)
	|| ydk::is_set(bfd_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(configured_override_interval.yfilter)
	|| ydk::is_set(configured_propagation_delay.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(external_neighbor_count.yfilter)
	|| ydk::is_set(generation_id.yfilter)
	|| ydk::is_set(hello_expiry.yfilter)
	|| ydk::is_set(hello_interval.yfilter)
	|| ydk::is_set(idb_acl_name.yfilter)
	|| ydk::is_set(idb_acl_provided.yfilter)
	|| ydk::is_set(idb_current_count.yfilter)
	|| ydk::is_set(idb_max_count.yfilter)
	|| ydk::is_set(idb_oor_enabled.yfilter)
	|| ydk::is_set(idb_threshold_count.yfilter)
	|| ydk::is_set(interface_address_mask.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(is_batch_asserts_capable.yfilter)
	|| ydk::is_set(is_bidirectional_capable.yfilter)
	|| ydk::is_set(is_enabled.yfilter)
	|| ydk::is_set(is_proxy_capable.yfilter)
	|| ydk::is_set(join_prune_interval.yfilter)
	|| ydk::is_set(neighbor_count.yfilter)
	|| ydk::is_set(neighbor_filter_name.yfilter)
	|| ydk::is_set(override_interval.yfilter)
	|| ydk::is_set(passive_interface.yfilter)
	|| ydk::is_set(propagation_delay.yfilter)
	|| ydk::is_set(prune_delay_enabled.yfilter)
	|| ydk::is_set(virtual_interface.yfilter)
	|| (dr_address !=  nullptr && dr_address->has_operation());
}

std::string Pim::Standby::Vrfs::Vrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (are_we_dr.is_set || is_set(are_we_dr.yfilter)) leaf_name_data.push_back(are_we_dr.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.yfilter)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.yfilter)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (configured_override_interval.is_set || is_set(configured_override_interval.yfilter)) leaf_name_data.push_back(configured_override_interval.get_name_leafdata());
    if (configured_propagation_delay.is_set || is_set(configured_propagation_delay.yfilter)) leaf_name_data.push_back(configured_propagation_delay.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (external_neighbor_count.is_set || is_set(external_neighbor_count.yfilter)) leaf_name_data.push_back(external_neighbor_count.get_name_leafdata());
    if (generation_id.is_set || is_set(generation_id.yfilter)) leaf_name_data.push_back(generation_id.get_name_leafdata());
    if (hello_expiry.is_set || is_set(hello_expiry.yfilter)) leaf_name_data.push_back(hello_expiry.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.yfilter)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (idb_acl_name.is_set || is_set(idb_acl_name.yfilter)) leaf_name_data.push_back(idb_acl_name.get_name_leafdata());
    if (idb_acl_provided.is_set || is_set(idb_acl_provided.yfilter)) leaf_name_data.push_back(idb_acl_provided.get_name_leafdata());
    if (idb_current_count.is_set || is_set(idb_current_count.yfilter)) leaf_name_data.push_back(idb_current_count.get_name_leafdata());
    if (idb_max_count.is_set || is_set(idb_max_count.yfilter)) leaf_name_data.push_back(idb_max_count.get_name_leafdata());
    if (idb_oor_enabled.is_set || is_set(idb_oor_enabled.yfilter)) leaf_name_data.push_back(idb_oor_enabled.get_name_leafdata());
    if (idb_threshold_count.is_set || is_set(idb_threshold_count.yfilter)) leaf_name_data.push_back(idb_threshold_count.get_name_leafdata());
    if (interface_address_mask.is_set || is_set(interface_address_mask.yfilter)) leaf_name_data.push_back(interface_address_mask.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_batch_asserts_capable.is_set || is_set(is_batch_asserts_capable.yfilter)) leaf_name_data.push_back(is_batch_asserts_capable.get_name_leafdata());
    if (is_bidirectional_capable.is_set || is_set(is_bidirectional_capable.yfilter)) leaf_name_data.push_back(is_bidirectional_capable.get_name_leafdata());
    if (is_enabled.is_set || is_set(is_enabled.yfilter)) leaf_name_data.push_back(is_enabled.get_name_leafdata());
    if (is_proxy_capable.is_set || is_set(is_proxy_capable.yfilter)) leaf_name_data.push_back(is_proxy_capable.get_name_leafdata());
    if (join_prune_interval.is_set || is_set(join_prune_interval.yfilter)) leaf_name_data.push_back(join_prune_interval.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.yfilter)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());
    if (neighbor_filter_name.is_set || is_set(neighbor_filter_name.yfilter)) leaf_name_data.push_back(neighbor_filter_name.get_name_leafdata());
    if (override_interval.is_set || is_set(override_interval.yfilter)) leaf_name_data.push_back(override_interval.get_name_leafdata());
    if (passive_interface.is_set || is_set(passive_interface.yfilter)) leaf_name_data.push_back(passive_interface.get_name_leafdata());
    if (propagation_delay.is_set || is_set(propagation_delay.yfilter)) leaf_name_data.push_back(propagation_delay.get_name_leafdata());
    if (prune_delay_enabled.is_set || is_set(prune_delay_enabled.yfilter)) leaf_name_data.push_back(prune_delay_enabled.get_name_leafdata());
    if (virtual_interface.is_set || is_set(virtual_interface.yfilter)) leaf_name_data.push_back(virtual_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dr-address")
    {
        if(dr_address == nullptr)
        {
            dr_address = std::make_shared<Pim::Standby::Vrfs::Vrf::Interfaces::Interface::DrAddress>();
        }
        return dr_address;
    }

    if(child_yang_name == "interface-address")
    {
        for(auto const & c : interface_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress>();
        c->parent = this;
        interface_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dr_address != nullptr)
    {
        children["dr-address"] = dr_address;
    }

    for (auto const & c : interface_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr = value;
        are_we_dr.value_namespace = name_space;
        are_we_dr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
        bfd_enabled.value_namespace = name_space;
        bfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
        bfd_interval.value_namespace = name_space;
        bfd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval = value;
        configured_override_interval.value_namespace = name_space;
        configured_override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay = value;
        configured_propagation_delay.value_namespace = name_space;
        configured_propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count = value;
        external_neighbor_count.value_namespace = name_space;
        external_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation-id")
    {
        generation_id = value;
        generation_id.value_namespace = name_space;
        generation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry = value;
        hello_expiry.value_namespace = name_space;
        hello_expiry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
        hello_interval.value_namespace = name_space;
        hello_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name = value;
        idb_acl_name.value_namespace = name_space;
        idb_acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided = value;
        idb_acl_provided.value_namespace = name_space;
        idb_acl_provided.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count = value;
        idb_current_count.value_namespace = name_space;
        idb_current_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count = value;
        idb_max_count.value_namespace = name_space;
        idb_max_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled = value;
        idb_oor_enabled.value_namespace = name_space;
        idb_oor_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count = value;
        idb_threshold_count.value_namespace = name_space;
        idb_threshold_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask = value;
        interface_address_mask.value_namespace = name_space;
        interface_address_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable = value;
        is_batch_asserts_capable.value_namespace = name_space;
        is_batch_asserts_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable = value;
        is_bidirectional_capable.value_namespace = name_space;
        is_bidirectional_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-enabled")
    {
        is_enabled = value;
        is_enabled.value_namespace = name_space;
        is_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable = value;
        is_proxy_capable.value_namespace = name_space;
        is_proxy_capable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval = value;
        join_prune_interval.value_namespace = name_space;
        join_prune_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
        neighbor_count.value_namespace = name_space;
        neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name = value;
        neighbor_filter_name.value_namespace = name_space;
        neighbor_filter_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "override-interval")
    {
        override_interval = value;
        override_interval.value_namespace = name_space;
        override_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "passive-interface")
    {
        passive_interface = value;
        passive_interface.value_namespace = name_space;
        passive_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay = value;
        propagation_delay.value_namespace = name_space;
        propagation_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled = value;
        prune_delay_enabled.value_namespace = name_space;
        prune_delay_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface = value;
        virtual_interface.value_namespace = name_space;
        virtual_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Pim::Standby::Vrfs::Vrf::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "are-we-dr")
    {
        are_we_dr.yfilter = yfilter;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "configured-override-interval")
    {
        configured_override_interval.yfilter = yfilter;
    }
    if(value_path == "configured-propagation-delay")
    {
        configured_propagation_delay.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "external-neighbor-count")
    {
        external_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "generation-id")
    {
        generation_id.yfilter = yfilter;
    }
    if(value_path == "hello-expiry")
    {
        hello_expiry.yfilter = yfilter;
    }
    if(value_path == "hello-interval")
    {
        hello_interval.yfilter = yfilter;
    }
    if(value_path == "idb-acl-name")
    {
        idb_acl_name.yfilter = yfilter;
    }
    if(value_path == "idb-acl-provided")
    {
        idb_acl_provided.yfilter = yfilter;
    }
    if(value_path == "idb-current-count")
    {
        idb_current_count.yfilter = yfilter;
    }
    if(value_path == "idb-max-count")
    {
        idb_max_count.yfilter = yfilter;
    }
    if(value_path == "idb-oor-enabled")
    {
        idb_oor_enabled.yfilter = yfilter;
    }
    if(value_path == "idb-threshold-count")
    {
        idb_threshold_count.yfilter = yfilter;
    }
    if(value_path == "interface-address-mask")
    {
        interface_address_mask.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-batch-asserts-capable")
    {
        is_batch_asserts_capable.yfilter = yfilter;
    }
    if(value_path == "is-bidirectional-capable")
    {
        is_bidirectional_capable.yfilter = yfilter;
    }
    if(value_path == "is-enabled")
    {
        is_enabled.yfilter = yfilter;
    }
    if(value_path == "is-proxy-capable")
    {
        is_proxy_capable.yfilter = yfilter;
    }
    if(value_path == "join-prune-interval")
    {
        join_prune_interval.yfilter = yfilter;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-filter-name")
    {
        neighbor_filter_name.yfilter = yfilter;
    }
    if(value_path == "override-interval")
    {
        override_interval.yfilter = yfilter;
    }
    if(value_path == "passive-interface")
    {
        passive_interface.yfilter = yfilter;
    }
    if(value_path == "propagation-delay")
    {
        propagation_delay.yfilter = yfilter;
    }
    if(value_path == "prune-delay-enabled")
    {
        prune_delay_enabled.yfilter = yfilter;
    }
    if(value_path == "virtual-interface")
    {
        virtual_interface.yfilter = yfilter;
    }
}

bool Pim::Standby::Vrfs::Vrf::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dr-address" || name == "interface-address" || name == "interface-name" || name == "are-we-dr" || name == "bfd-enabled" || name == "bfd-interval" || name == "bfd-multiplier" || name == "configured-override-interval" || name == "configured-propagation-delay" || name == "dr-priority" || name == "external-neighbor-count" || name == "generation-id" || name == "hello-expiry" || name == "hello-interval" || name == "idb-acl-name" || name == "idb-acl-provided" || name == "idb-current-count" || name == "idb-max-count" || name == "idb-oor-enabled" || name == "idb-threshold-count" || name == "interface-address-mask" || name == "interface-name-xr" || name == "is-batch-asserts-capable" || name == "is-bidirectional-capable" || name == "is-enabled" || name == "is-proxy-capable" || name == "join-prune-interval" || name == "neighbor-count" || name == "neighbor-filter-name" || name == "override-interval" || name == "passive-interface" || name == "propagation-delay" || name == "prune-delay-enabled" || name == "virtual-interface")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Interfaces::Interface::DrAddress::DrAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "dr-address"; yang_parent_name = "interface";
}

Pim::Standby::Vrfs::Vrf::Interfaces::Interface::DrAddress::~DrAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::Interfaces::Interface::DrAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Interfaces::Interface::DrAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Interfaces::Interface::DrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dr-address";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Interfaces::Interface::DrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DrAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Interfaces::Interface::DrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Interfaces::Interface::DrAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Interfaces::Interface::DrAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::Interfaces::Interface::DrAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::Interfaces::Interface::DrAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::InterfaceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "interface-address"; yang_parent_name = "interface";
}

Pim::Standby::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::~InterfaceAddress()
{
}

bool Pim::Standby::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Pim::Standby::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-address";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceAddress' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Pim::Standby::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Pim::Standby::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Pim::Standby::Vrfs::Vrf::Interfaces::Interface::InterfaceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnels()
{
    yang_name = "net-io-tunnels"; yang_parent_name = "vrf";
}

Pim::Standby::Vrfs::Vrf::NetIoTunnels::~NetIoTunnels()
{
}

bool Pim::Standby::Vrfs::Vrf::NetIoTunnels::has_data() const
{
    for (std::size_t index=0; index<net_io_tunnel.size(); index++)
    {
        if(net_io_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Pim::Standby::Vrfs::Vrf::NetIoTunnels::has_operation() const
{
    for (std::size_t index=0; index<net_io_tunnel.size(); index++)
    {
        if(net_io_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pim::Standby::Vrfs::Vrf::NetIoTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "net-io-tunnels";

    return path_buffer.str();

}

const EntityPath Pim::Standby::Vrfs::Vrf::NetIoTunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetIoTunnels' in Cisco_IOS_XR_ipv4_pim_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pim::Standby::Vrfs::Vrf::NetIoTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "net-io-tunnel")
    {
        for(auto const & c : net_io_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Pim::Standby::Vrfs::Vrf::NetIoTunnels::NetIoTunnel>();
        c->parent = this;
        net_io_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Pim::Standby::Vrfs::Vrf::NetIoTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : net_io_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Pim::Standby::Vrfs::Vrf::NetIoTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pim::Standby::Vrfs::Vrf::NetIoTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pim::Standby::Vrfs::Vrf::NetIoTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "net-io-tunnel")
        return true;
    return false;
}


}
}

