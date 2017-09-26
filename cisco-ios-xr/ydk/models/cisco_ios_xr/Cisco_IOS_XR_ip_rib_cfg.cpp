
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rib_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ip_rib_cfg {

Rib::Rib()
    :
    max_recursion_depth{YType::uint32, "max-recursion-depth"}
    	,
    af(std::make_shared<Rib::Af>())
{
    af->parent = this;

    yang_name = "rib"; yang_parent_name = "Cisco-IOS-XR-ip-rib-cfg"; is_top_level_class = true; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(max_recursion_depth.yfilter)
	|| (af !=  nullptr && af->has_operation());
}

std::string Rib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rib-cfg:rib";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_recursion_depth.is_set || is_set(max_recursion_depth.yfilter)) leaf_name_data.push_back(max_recursion_depth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        if(af == nullptr)
        {
            af = std::make_shared<Rib::Af>();
        }
        return af;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rib::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(af != nullptr)
    {
        children["af"] = af;
    }

    return children;
}

void Rib::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-recursion-depth")
    {
        max_recursion_depth = value;
        max_recursion_depth.value_namespace = name_space;
        max_recursion_depth.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-recursion-depth")
    {
        max_recursion_depth.yfilter = yfilter;
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

std::map<std::pair<std::string, std::string>, std::string> Rib::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Rib::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af" || name == "max-recursion-depth")
        return true;
    return false;
}

Rib::Af::Af()
    :
    ipv4(std::make_shared<Rib::Af::Ipv4>())
	,ipv6(std::make_shared<Rib::Af::Ipv6>())
{
    ipv4->parent = this;
    ipv6->parent = this;

    yang_name = "af"; yang_parent_name = "rib"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Rib::Af::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rib-cfg:rib/" << get_segment_path();
    return path_buffer.str();
}

std::string Rib::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rib::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Rib::Af::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Rib::Af::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rib::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4 != nullptr)
    {
        children["ipv4"] = ipv4;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Rib::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rib::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rib::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "ipv6")
        return true;
    return false;
}

Rib::Af::Ipv4::Ipv4()
    :
    next_hop_dampening_disable{YType::empty, "next-hop-dampening-disable"}
    	,
    redistribution_history(std::make_shared<Rib::Af::Ipv4::RedistributionHistory>())
{
    redistribution_history->parent = this;

    yang_name = "ipv4"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(next_hop_dampening_disable.yfilter)
	|| (redistribution_history !=  nullptr && redistribution_history->has_operation());
}

std::string Rib::Af::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rib-cfg:rib/af/" << get_segment_path();
    return path_buffer.str();
}

std::string Rib::Af::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Af::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_dampening_disable.is_set || is_set(next_hop_dampening_disable.yfilter)) leaf_name_data.push_back(next_hop_dampening_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rib::Af::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistribution-history")
    {
        if(redistribution_history == nullptr)
        {
            redistribution_history = std::make_shared<Rib::Af::Ipv4::RedistributionHistory>();
        }
        return redistribution_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rib::Af::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redistribution_history != nullptr)
    {
        children["redistribution-history"] = redistribution_history;
    }

    return children;
}

void Rib::Af::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-dampening-disable")
    {
        next_hop_dampening_disable = value;
        next_hop_dampening_disable.value_namespace = name_space;
        next_hop_dampening_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Af::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-dampening-disable")
    {
        next_hop_dampening_disable.yfilter = yfilter;
    }
}

bool Rib::Af::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redistribution-history" || name == "next-hop-dampening-disable")
        return true;
    return false;
}

Rib::Af::Ipv4::RedistributionHistory::RedistributionHistory()
    :
    bcdl_client{YType::uint32, "bcdl-client"},
    protocol_client{YType::uint32, "protocol-client"}
    	,
    keep(std::make_shared<Rib::Af::Ipv4::RedistributionHistory::Keep>())
{
    keep->parent = this;

    yang_name = "redistribution-history"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(bcdl_client.yfilter)
	|| ydk::is_set(protocol_client.yfilter)
	|| (keep !=  nullptr && keep->has_operation());
}

std::string Rib::Af::Ipv4::RedistributionHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rib-cfg:rib/af/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Rib::Af::Ipv4::RedistributionHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Af::Ipv4::RedistributionHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bcdl_client.is_set || is_set(bcdl_client.yfilter)) leaf_name_data.push_back(bcdl_client.get_name_leafdata());
    if (protocol_client.is_set || is_set(protocol_client.yfilter)) leaf_name_data.push_back(protocol_client.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rib::Af::Ipv4::RedistributionHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keep")
    {
        if(keep == nullptr)
        {
            keep = std::make_shared<Rib::Af::Ipv4::RedistributionHistory::Keep>();
        }
        return keep;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rib::Af::Ipv4::RedistributionHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(keep != nullptr)
    {
        children["keep"] = keep;
    }

    return children;
}

void Rib::Af::Ipv4::RedistributionHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bcdl-client")
    {
        bcdl_client = value;
        bcdl_client.value_namespace = name_space;
        bcdl_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-client")
    {
        protocol_client = value;
        protocol_client.value_namespace = name_space;
        protocol_client.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Af::Ipv4::RedistributionHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bcdl-client")
    {
        bcdl_client.yfilter = yfilter;
    }
    if(value_path == "protocol-client")
    {
        protocol_client.yfilter = yfilter;
    }
}

bool Rib::Af::Ipv4::RedistributionHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keep" || name == "bcdl-client" || name == "protocol-client")
        return true;
    return false;
}

Rib::Af::Ipv4::RedistributionHistory::Keep::Keep()
    :
    bcdl{YType::empty, "bcdl"}
{

    yang_name = "keep"; yang_parent_name = "redistribution-history"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(bcdl.yfilter);
}

std::string Rib::Af::Ipv4::RedistributionHistory::Keep::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rib-cfg:rib/af/ipv4/redistribution-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Rib::Af::Ipv4::RedistributionHistory::Keep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Af::Ipv4::RedistributionHistory::Keep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bcdl.is_set || is_set(bcdl.yfilter)) leaf_name_data.push_back(bcdl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rib::Af::Ipv4::RedistributionHistory::Keep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rib::Af::Ipv4::RedistributionHistory::Keep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rib::Af::Ipv4::RedistributionHistory::Keep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bcdl")
    {
        bcdl = value;
        bcdl.value_namespace = name_space;
        bcdl.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Af::Ipv4::RedistributionHistory::Keep::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bcdl")
    {
        bcdl.yfilter = yfilter;
    }
}

bool Rib::Af::Ipv4::RedistributionHistory::Keep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bcdl")
        return true;
    return false;
}

Rib::Af::Ipv6::Ipv6()
    :
    next_hop_dampening_disable{YType::empty, "next-hop-dampening-disable"}
    	,
    redistribution_history(std::make_shared<Rib::Af::Ipv6::RedistributionHistory>())
{
    redistribution_history->parent = this;

    yang_name = "ipv6"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(next_hop_dampening_disable.yfilter)
	|| (redistribution_history !=  nullptr && redistribution_history->has_operation());
}

std::string Rib::Af::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rib-cfg:rib/af/" << get_segment_path();
    return path_buffer.str();
}

std::string Rib::Af::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Af::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_dampening_disable.is_set || is_set(next_hop_dampening_disable.yfilter)) leaf_name_data.push_back(next_hop_dampening_disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rib::Af::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redistribution-history")
    {
        if(redistribution_history == nullptr)
        {
            redistribution_history = std::make_shared<Rib::Af::Ipv6::RedistributionHistory>();
        }
        return redistribution_history;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rib::Af::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redistribution_history != nullptr)
    {
        children["redistribution-history"] = redistribution_history;
    }

    return children;
}

void Rib::Af::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-dampening-disable")
    {
        next_hop_dampening_disable = value;
        next_hop_dampening_disable.value_namespace = name_space;
        next_hop_dampening_disable.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Af::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-dampening-disable")
    {
        next_hop_dampening_disable.yfilter = yfilter;
    }
}

bool Rib::Af::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redistribution-history" || name == "next-hop-dampening-disable")
        return true;
    return false;
}

Rib::Af::Ipv6::RedistributionHistory::RedistributionHistory()
    :
    bcdl_client{YType::uint32, "bcdl-client"},
    protocol_client{YType::uint32, "protocol-client"}
    	,
    keep(std::make_shared<Rib::Af::Ipv6::RedistributionHistory::Keep>())
{
    keep->parent = this;

    yang_name = "redistribution-history"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(bcdl_client.yfilter)
	|| ydk::is_set(protocol_client.yfilter)
	|| (keep !=  nullptr && keep->has_operation());
}

std::string Rib::Af::Ipv6::RedistributionHistory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rib-cfg:rib/af/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Rib::Af::Ipv6::RedistributionHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution-history";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Af::Ipv6::RedistributionHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bcdl_client.is_set || is_set(bcdl_client.yfilter)) leaf_name_data.push_back(bcdl_client.get_name_leafdata());
    if (protocol_client.is_set || is_set(protocol_client.yfilter)) leaf_name_data.push_back(protocol_client.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rib::Af::Ipv6::RedistributionHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "keep")
    {
        if(keep == nullptr)
        {
            keep = std::make_shared<Rib::Af::Ipv6::RedistributionHistory::Keep>();
        }
        return keep;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rib::Af::Ipv6::RedistributionHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(keep != nullptr)
    {
        children["keep"] = keep;
    }

    return children;
}

void Rib::Af::Ipv6::RedistributionHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bcdl-client")
    {
        bcdl_client = value;
        bcdl_client.value_namespace = name_space;
        bcdl_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-client")
    {
        protocol_client = value;
        protocol_client.value_namespace = name_space;
        protocol_client.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Af::Ipv6::RedistributionHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bcdl-client")
    {
        bcdl_client.yfilter = yfilter;
    }
    if(value_path == "protocol-client")
    {
        protocol_client.yfilter = yfilter;
    }
}

bool Rib::Af::Ipv6::RedistributionHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keep" || name == "bcdl-client" || name == "protocol-client")
        return true;
    return false;
}

Rib::Af::Ipv6::RedistributionHistory::Keep::Keep()
    :
    bcdl{YType::empty, "bcdl"}
{

    yang_name = "keep"; yang_parent_name = "redistribution-history"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(bcdl.yfilter);
}

std::string Rib::Af::Ipv6::RedistributionHistory::Keep::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rib-cfg:rib/af/ipv6/redistribution-history/" << get_segment_path();
    return path_buffer.str();
}

std::string Rib::Af::Ipv6::RedistributionHistory::Keep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keep";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rib::Af::Ipv6::RedistributionHistory::Keep::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bcdl.is_set || is_set(bcdl.yfilter)) leaf_name_data.push_back(bcdl.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rib::Af::Ipv6::RedistributionHistory::Keep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rib::Af::Ipv6::RedistributionHistory::Keep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rib::Af::Ipv6::RedistributionHistory::Keep::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bcdl")
    {
        bcdl = value;
        bcdl.value_namespace = name_space;
        bcdl.value_namespace_prefix = name_space_prefix;
    }
}

void Rib::Af::Ipv6::RedistributionHistory::Keep::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bcdl")
    {
        bcdl.yfilter = yfilter;
    }
}

bool Rib::Af::Ipv6::RedistributionHistory::Keep::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bcdl")
        return true;
    return false;
}


}
}

