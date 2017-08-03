
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_igmp_oper_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_igmp_oper {

Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "update";
}

Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::~SourceAddress()
{
}

bool Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address"; yang_parent_name = "update";
}

Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::~GroupAddress()
{
}

bool Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Igmp::Active::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::Ranges::Ranges()
{
    yang_name = "ranges"; yang_parent_name = "default-context";
}

Igmp::Active::DefaultContext::Ranges::~Ranges()
{
}

bool Igmp::Active::DefaultContext::Ranges::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Active::DefaultContext::Ranges::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Igmp::Active::DefaultContext::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::Ranges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::DefaultContext::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Igmp::Active::DefaultContext::Ranges::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Active::DefaultContext::Ranges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Igmp::Active::DefaultContext::Ranges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Igmp::Active::DefaultContext::Ranges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Igmp::Active::DefaultContext::Ranges::Range::Range()
    :
    group_address{YType::str, "group-address"},
    group_mask{YType::int32, "group-mask"},
    is_stale{YType::boolean, "is-stale"},
    prefix_length{YType::uint32, "prefix-length"},
    protocol{YType::enumeration, "protocol"}
    	,
    group_address_xr(std::make_shared<Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr>())
{
    group_address_xr->parent = this;

    yang_name = "range"; yang_parent_name = "ranges";
}

Igmp::Active::DefaultContext::Ranges::Range::~Range()
{
}

bool Igmp::Active::DefaultContext::Ranges::Range::has_data() const
{
    return group_address.is_set
	|| group_mask.is_set
	|| is_stale.is_set
	|| prefix_length.is_set
	|| protocol.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data());
}

bool Igmp::Active::DefaultContext::Ranges::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_mask.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Igmp::Active::DefaultContext::Ranges::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::Ranges::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/ranges/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_mask.is_set || is_set(group_mask.yfilter)) leaf_name_data.push_back(group_mask.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::DefaultContext::Ranges::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr>();
        }
        return group_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::Ranges::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    return children;
}

void Igmp::Active::DefaultContext::Ranges::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-mask")
    {
        group_mask = value;
        group_mask.value_namespace = name_space;
        group_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
        is_stale.value_namespace = name_space;
        is_stale.value_namespace_prefix = name_space_prefix;
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
}

void Igmp::Active::DefaultContext::Ranges::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "group-mask")
    {
        group_mask.yfilter = yfilter;
    }
    if(value_path == "is-stale")
    {
        is_stale.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::Ranges::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "group-address" || name == "group-mask" || name == "is-stale" || name == "prefix-length" || name == "protocol")
        return true;
    return false;
}

Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "range";
}

Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::~GroupAddressXr()
{
}

bool Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/ranges/range/" << get_segment_path();
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

std::shared_ptr<Entity> Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Igmp::Active::DefaultContext::Ranges::Range::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterfaces()
{
    yang_name = "ifrs-interfaces"; yang_parent_name = "default-context";
}

Igmp::Active::DefaultContext::IfrsInterfaces::~IfrsInterfaces()
{
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::has_data() const
{
    for (std::size_t index=0; index<ifrs_interface.size(); index++)
    {
        if(ifrs_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::has_operation() const
{
    for (std::size_t index=0; index<ifrs_interface.size(); index++)
    {
        if(ifrs_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Igmp::Active::DefaultContext::IfrsInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interfaces";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::IfrsInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::DefaultContext::IfrsInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface>();
        c->parent = this;
        ifrs_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::IfrsInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ifrs_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Active::DefaultContext::IfrsInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Igmp::Active::DefaultContext::IfrsInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifrs-interface")
        return true;
    return false;
}

Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IfrsInterface()
    :
    interface_name{YType::str, "interface-name"},
    join_group_count{YType::uint32, "join-group-count"}
    	,
    igmp_interface_entry(std::make_shared<Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry>())
{
    igmp_interface_entry->parent = this;

    yang_name = "ifrs-interface"; yang_parent_name = "ifrs-interfaces";
}

Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::~IfrsInterface()
{
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::has_data() const
{
    return interface_name.is_set
	|| join_group_count.is_set
	|| (igmp_interface_entry !=  nullptr && igmp_interface_entry->has_data());
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(join_group_count.yfilter)
	|| (igmp_interface_entry !=  nullptr && igmp_interface_entry->has_operation());
}

std::string Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/ifrs-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (join_group_count.is_set || is_set(join_group_count.yfilter)) leaf_name_data.push_back(join_group_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igmp-interface-entry")
    {
        if(igmp_interface_entry == nullptr)
        {
            igmp_interface_entry = std::make_shared<Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry>();
        }
        return igmp_interface_entry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igmp_interface_entry != nullptr)
    {
        children["igmp-interface-entry"] = igmp_interface_entry;
    }

    return children;
}

void Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "join-group-count")
    {
        join_group_count = value;
        join_group_count.value_namespace = name_space;
        join_group_count.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "join-group-count")
    {
        join_group_count.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igmp-interface-entry" || name == "interface-name" || name == "join-group-count")
        return true;
    return false;
}

Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::IgmpInterfaceEntry()
    :
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address>())
	,querier_address(std::make_shared<Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress>())
	,subscriber_address(std::make_shared<Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "igmp-interface-entry"; yang_parent_name = "ifrs-interface";
}

Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::~IgmpInterfaceEntry()
{
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::has_data() const
{
    return configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configuration_mcast_vrf_error.yfilter)
	|| ydk::is_set(configuration_mcast_vrf_set.yfilter)
	|| ydk::is_set(configurationvrf_error.yfilter)
	|| ydk::is_set(configurationvrf_set.yfilter)
	|| ydk::is_set(group_joins.yfilter)
	|| ydk::is_set(group_leaves.yfilter)
	|| ydk::is_set(host_version.yfilter)
	|| ydk::is_set(igmp_version.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(is_configurationverify.yfilter)
	|| ydk::is_set(is_identity_present.yfilter)
	|| ydk::is_set(is_im_state_registered.yfilter)
	|| ydk::is_set(is_interface_up.yfilter)
	|| ydk::is_set(is_ip_enabled.yfilter)
	|| ydk::is_set(is_las_registered.yfilter)
	|| ydk::is_set(is_las_request.yfilter)
	|| ydk::is_set(is_querier.yfilter)
	|| ydk::is_set(is_router_enabled.yfilter)
	|| ydk::is_set(is_subscriber.yfilter)
	|| ydk::is_set(las_get_address_count.yfilter)
	|| ydk::is_set(las_ll_add_update_count.yfilter)
	|| ydk::is_set(las_ll_registration_count.yfilter)
	|| ydk::is_set(las_ll_remove_update_count.yfilter)
	|| ydk::is_set(las_null_update_count.yfilter)
	|| ydk::is_set(las_unregistration_count.yfilter)
	|| ydk::is_set(las_update_count.yfilter)
	|| ydk::is_set(last_member_query_interval.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(mte_tuple_count.yfilter)
	|| ydk::is_set(mte_vrf_id.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(parent_ifhandle.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(proxy_interface.yfilter)
	|| ydk::is_set(querier_uptime.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(query_maximum_response_time.yfilter)
	|| ydk::is_set(query_timeout.yfilter)
	|| ydk::is_set(robustness.yfilter)
	|| ydk::is_set(router_uptime_in_seconds.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(subscriber_id.yfilter)
	|| ydk::is_set(subscriber_mode.yfilter)
	|| ydk::is_set(time_since_last_query_in_seconds.yfilter)
	|| ydk::is_set(time_since_last_report_in_seconds.yfilter)
	|| ydk::is_set(total_active_groups.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(vrf_state.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp-interface-entry";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgmpInterfaceEntry' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.yfilter)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.yfilter)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.yfilter)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.yfilter)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.yfilter)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.yfilter)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.yfilter)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.yfilter)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.yfilter)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.yfilter)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.yfilter)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.yfilter)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.yfilter)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.yfilter)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.yfilter)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.yfilter)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.yfilter)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.yfilter)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.yfilter)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.yfilter)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.yfilter)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.yfilter)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.yfilter)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.yfilter)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.yfilter)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.yfilter)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.yfilter)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.yfilter)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.yfilter)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.yfilter)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.yfilter)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.yfilter)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.yfilter)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.yfilter)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.yfilter)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.yfilter)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.yfilter)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.yfilter)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.yfilter)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.yfilter)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.yfilter)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(querier_address != nullptr)
    {
        children["querier-address"] = querier_address;
    }

    if(subscriber_address != nullptr)
    {
        children["subscriber-address"] = subscriber_address;
    }

    return children;
}

void Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
        configuration_mcast_vrf_error.value_namespace = name_space;
        configuration_mcast_vrf_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
        configuration_mcast_vrf_set.value_namespace = name_space;
        configuration_mcast_vrf_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
        configurationvrf_error.value_namespace = name_space;
        configurationvrf_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
        configurationvrf_set.value_namespace = name_space;
        configurationvrf_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
        group_joins.value_namespace = name_space;
        group_joins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
        group_leaves.value_namespace = name_space;
        group_leaves.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-version")
    {
        host_version = value;
        host_version.value_namespace = name_space;
        host_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
        igmp_version.value_namespace = name_space;
        igmp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
        is_configurationverify.value_namespace = name_space;
        is_configurationverify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
        is_identity_present.value_namespace = name_space;
        is_identity_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
        is_im_state_registered.value_namespace = name_space;
        is_im_state_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
        is_interface_up.value_namespace = name_space;
        is_interface_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
        is_ip_enabled.value_namespace = name_space;
        is_ip_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
        is_las_registered.value_namespace = name_space;
        is_las_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
        is_las_request.value_namespace = name_space;
        is_las_request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
        is_querier.value_namespace = name_space;
        is_querier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
        is_router_enabled.value_namespace = name_space;
        is_router_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
        is_subscriber.value_namespace = name_space;
        is_subscriber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
        las_get_address_count.value_namespace = name_space;
        las_get_address_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
        las_ll_add_update_count.value_namespace = name_space;
        las_ll_add_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
        las_ll_registration_count.value_namespace = name_space;
        las_ll_registration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
        las_ll_remove_update_count.value_namespace = name_space;
        las_ll_remove_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
        las_null_update_count.value_namespace = name_space;
        las_null_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
        las_unregistration_count.value_namespace = name_space;
        las_unregistration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
        las_update_count.value_namespace = name_space;
        las_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
        last_member_query_interval.value_namespace = name_space;
        last_member_query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
        mte_tuple_count.value_namespace = name_space;
        mte_tuple_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
        mte_vrf_id.value_namespace = name_space;
        mte_vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
        parent_ifhandle.value_namespace = name_space;
        parent_ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
        proxy_interface.value_namespace = name_space;
        proxy_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
        querier_uptime.value_namespace = name_space;
        querier_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
        query_maximum_response_time.value_namespace = name_space;
        query_maximum_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
        query_timeout.value_namespace = name_space;
        query_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness")
    {
        robustness = value;
        robustness.value_namespace = name_space;
        robustness.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
        router_uptime_in_seconds.value_namespace = name_space;
        router_uptime_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
        subscriber_id.value_namespace = name_space;
        subscriber_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
        subscriber_mode.value_namespace = name_space;
        subscriber_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
        time_since_last_query_in_seconds.value_namespace = name_space;
        time_since_last_query_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
        time_since_last_report_in_seconds.value_namespace = name_space;
        time_since_last_report_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
        total_active_groups.value_namespace = name_space;
        total_active_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
        vrf_state.value_namespace = name_space;
        vrf_state.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error.yfilter = yfilter;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set.yfilter = yfilter;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error.yfilter = yfilter;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set.yfilter = yfilter;
    }
    if(value_path == "group-joins")
    {
        group_joins.yfilter = yfilter;
    }
    if(value_path == "group-leaves")
    {
        group_leaves.yfilter = yfilter;
    }
    if(value_path == "host-version")
    {
        host_version.yfilter = yfilter;
    }
    if(value_path == "igmp-version")
    {
        igmp_version.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify.yfilter = yfilter;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present.yfilter = yfilter;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered.yfilter = yfilter;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up.yfilter = yfilter;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled.yfilter = yfilter;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered.yfilter = yfilter;
    }
    if(value_path == "is-las-request")
    {
        is_las_request.yfilter = yfilter;
    }
    if(value_path == "is-querier")
    {
        is_querier.yfilter = yfilter;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled.yfilter = yfilter;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber.yfilter = yfilter;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count.yfilter = yfilter;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count.yfilter = yfilter;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count.yfilter = yfilter;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count.yfilter = yfilter;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count.yfilter = yfilter;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count.yfilter = yfilter;
    }
    if(value_path == "las-update-count")
    {
        las_update_count.yfilter = yfilter;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count.yfilter = yfilter;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface.yfilter = yfilter;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time.yfilter = yfilter;
    }
    if(value_path == "query-timeout")
    {
        query_timeout.yfilter = yfilter;
    }
    if(value_path == "robustness")
    {
        robustness.yfilter = yfilter;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id.yfilter = yfilter;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode.yfilter = yfilter;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds.yfilter = yfilter;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "vrf-state")
    {
        vrf_state.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "querier-address" || name == "subscriber-address" || name == "configuration-mcast-vrf-error" || name == "configuration-mcast-vrf-set" || name == "configurationvrf-error" || name == "configurationvrf-set" || name == "group-joins" || name == "group-leaves" || name == "host-version" || name == "igmp-version" || name == "interface-name-xr" || name == "is-configurationverify" || name == "is-identity-present" || name == "is-im-state-registered" || name == "is-interface-up" || name == "is-ip-enabled" || name == "is-las-registered" || name == "is-las-request" || name == "is-querier" || name == "is-router-enabled" || name == "is-subscriber" || name == "las-get-address-count" || name == "las-ll-add-update-count" || name == "las-ll-registration-count" || name == "las-ll-remove-update-count" || name == "las-null-update-count" || name == "las-unregistration-count" || name == "las-update-count" || name == "last-member-query-interval" || name == "location" || name == "mte-tuple-count" || name == "mte-vrf-id" || name == "mtu" || name == "parent-ifhandle" || name == "prefix-length" || name == "proxy-interface" || name == "querier-uptime" || name == "query-interval" || name == "query-maximum-response-time" || name == "query-timeout" || name == "robustness" || name == "router-uptime-in-seconds" || name == "state" || name == "subscriber-id" || name == "subscriber-mode" || name == "time-since-last-query-in-seconds" || name == "time-since-last-report-in-seconds" || name == "total-active-groups" || name == "vrf-id" || name == "vrf-state")
        return true;
    return false;
}

Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "igmp-interface-entry";
}

Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::~Address()
{
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "igmp-interface-entry";
}

Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "igmp-interface-entry";
}

Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Igmp::Active::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::TrafficCounters::TrafficCounters()
    :
    auxillary_data_length_errors{YType::uint32, "auxillary-data-length-errors"},
    bad_scope_errors{YType::uint32, "bad-scope-errors"},
    checksum_errors{YType::uint32, "checksum-errors"},
    elapsed_time{YType::uint32, "elapsed-time"},
    format_errors{YType::uint32, "format-errors"},
    get_packet_failure{YType::uint32, "get-packet-failure"},
    input_disabled_idb{YType::uint32, "input-disabled-idb"},
    input_dvmrp{YType::uint32, "input-dvmrp"},
    input_leaves{YType::uint32, "input-leaves"},
    input_martian_address{YType::uint32, "input-martian-address"},
    input_mtrace{YType::uint32, "input-mtrace"},
    input_no_assigned_vrf_id{YType::uint32, "input-no-assigned-vrf-id"},
    input_no_idb{YType::uint32, "input-no-idb"},
    input_no_platform_support_mtrace{YType::uint32, "input-no-platform-support-mtrace"},
    input_no_vrf_in_idb{YType::uint32, "input-no-vrf-in-idb"},
    input_no_vrf_mtrace{YType::uint32, "input-no-vrf-mtrace"},
    input_pim{YType::uint32, "input-pim"},
    input_queries{YType::uint32, "input-queries"},
    input_reports{YType::uint32, "input-reports"},
    invalid_source_address_errors{YType::uint32, "invalid-source-address-errors"},
    miscellaneous_errors{YType::uint32, "miscellaneous-errors"},
    no_socket_connection{YType::uint32, "no-socket-connection"},
    output_dvmrp{YType::uint32, "output-dvmrp"},
    output_leaves{YType::uint32, "output-leaves"},
    output_mtrace{YType::uint32, "output-mtrace"},
    output_no_parent_interface_handle{YType::uint32, "output-no-parent-interface-handle"},
    output_pim{YType::uint32, "output-pim"},
    output_queries{YType::uint32, "output-queries"},
    output_reports{YType::uint32, "output-reports"},
    packet_manager_input_errors{YType::uint32, "packet-manager-input-errors"},
    packet_manager_output_errors{YType::uint32, "packet-manager-output-errors"},
    packets_in{YType::uint32, "packets-in"},
    packets_out{YType::uint32, "packets-out"},
    receive_socket_errors{YType::uint32, "receive-socket-errors"},
    socket_errors{YType::uint32, "socket-errors"}
{
    yang_name = "traffic-counters"; yang_parent_name = "default-context";
}

Igmp::Active::DefaultContext::TrafficCounters::~TrafficCounters()
{
}

bool Igmp::Active::DefaultContext::TrafficCounters::has_data() const
{
    return auxillary_data_length_errors.is_set
	|| bad_scope_errors.is_set
	|| checksum_errors.is_set
	|| elapsed_time.is_set
	|| format_errors.is_set
	|| get_packet_failure.is_set
	|| input_disabled_idb.is_set
	|| input_dvmrp.is_set
	|| input_leaves.is_set
	|| input_martian_address.is_set
	|| input_mtrace.is_set
	|| input_no_assigned_vrf_id.is_set
	|| input_no_idb.is_set
	|| input_no_platform_support_mtrace.is_set
	|| input_no_vrf_in_idb.is_set
	|| input_no_vrf_mtrace.is_set
	|| input_pim.is_set
	|| input_queries.is_set
	|| input_reports.is_set
	|| invalid_source_address_errors.is_set
	|| miscellaneous_errors.is_set
	|| no_socket_connection.is_set
	|| output_dvmrp.is_set
	|| output_leaves.is_set
	|| output_mtrace.is_set
	|| output_no_parent_interface_handle.is_set
	|| output_pim.is_set
	|| output_queries.is_set
	|| output_reports.is_set
	|| packet_manager_input_errors.is_set
	|| packet_manager_output_errors.is_set
	|| packets_in.is_set
	|| packets_out.is_set
	|| receive_socket_errors.is_set
	|| socket_errors.is_set;
}

bool Igmp::Active::DefaultContext::TrafficCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(auxillary_data_length_errors.yfilter)
	|| ydk::is_set(bad_scope_errors.yfilter)
	|| ydk::is_set(checksum_errors.yfilter)
	|| ydk::is_set(elapsed_time.yfilter)
	|| ydk::is_set(format_errors.yfilter)
	|| ydk::is_set(get_packet_failure.yfilter)
	|| ydk::is_set(input_disabled_idb.yfilter)
	|| ydk::is_set(input_dvmrp.yfilter)
	|| ydk::is_set(input_leaves.yfilter)
	|| ydk::is_set(input_martian_address.yfilter)
	|| ydk::is_set(input_mtrace.yfilter)
	|| ydk::is_set(input_no_assigned_vrf_id.yfilter)
	|| ydk::is_set(input_no_idb.yfilter)
	|| ydk::is_set(input_no_platform_support_mtrace.yfilter)
	|| ydk::is_set(input_no_vrf_in_idb.yfilter)
	|| ydk::is_set(input_no_vrf_mtrace.yfilter)
	|| ydk::is_set(input_pim.yfilter)
	|| ydk::is_set(input_queries.yfilter)
	|| ydk::is_set(input_reports.yfilter)
	|| ydk::is_set(invalid_source_address_errors.yfilter)
	|| ydk::is_set(miscellaneous_errors.yfilter)
	|| ydk::is_set(no_socket_connection.yfilter)
	|| ydk::is_set(output_dvmrp.yfilter)
	|| ydk::is_set(output_leaves.yfilter)
	|| ydk::is_set(output_mtrace.yfilter)
	|| ydk::is_set(output_no_parent_interface_handle.yfilter)
	|| ydk::is_set(output_pim.yfilter)
	|| ydk::is_set(output_queries.yfilter)
	|| ydk::is_set(output_reports.yfilter)
	|| ydk::is_set(packet_manager_input_errors.yfilter)
	|| ydk::is_set(packet_manager_output_errors.yfilter)
	|| ydk::is_set(packets_in.yfilter)
	|| ydk::is_set(packets_out.yfilter)
	|| ydk::is_set(receive_socket_errors.yfilter)
	|| ydk::is_set(socket_errors.yfilter);
}

std::string Igmp::Active::DefaultContext::TrafficCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-counters";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::TrafficCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auxillary_data_length_errors.is_set || is_set(auxillary_data_length_errors.yfilter)) leaf_name_data.push_back(auxillary_data_length_errors.get_name_leafdata());
    if (bad_scope_errors.is_set || is_set(bad_scope_errors.yfilter)) leaf_name_data.push_back(bad_scope_errors.get_name_leafdata());
    if (checksum_errors.is_set || is_set(checksum_errors.yfilter)) leaf_name_data.push_back(checksum_errors.get_name_leafdata());
    if (elapsed_time.is_set || is_set(elapsed_time.yfilter)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (format_errors.is_set || is_set(format_errors.yfilter)) leaf_name_data.push_back(format_errors.get_name_leafdata());
    if (get_packet_failure.is_set || is_set(get_packet_failure.yfilter)) leaf_name_data.push_back(get_packet_failure.get_name_leafdata());
    if (input_disabled_idb.is_set || is_set(input_disabled_idb.yfilter)) leaf_name_data.push_back(input_disabled_idb.get_name_leafdata());
    if (input_dvmrp.is_set || is_set(input_dvmrp.yfilter)) leaf_name_data.push_back(input_dvmrp.get_name_leafdata());
    if (input_leaves.is_set || is_set(input_leaves.yfilter)) leaf_name_data.push_back(input_leaves.get_name_leafdata());
    if (input_martian_address.is_set || is_set(input_martian_address.yfilter)) leaf_name_data.push_back(input_martian_address.get_name_leafdata());
    if (input_mtrace.is_set || is_set(input_mtrace.yfilter)) leaf_name_data.push_back(input_mtrace.get_name_leafdata());
    if (input_no_assigned_vrf_id.is_set || is_set(input_no_assigned_vrf_id.yfilter)) leaf_name_data.push_back(input_no_assigned_vrf_id.get_name_leafdata());
    if (input_no_idb.is_set || is_set(input_no_idb.yfilter)) leaf_name_data.push_back(input_no_idb.get_name_leafdata());
    if (input_no_platform_support_mtrace.is_set || is_set(input_no_platform_support_mtrace.yfilter)) leaf_name_data.push_back(input_no_platform_support_mtrace.get_name_leafdata());
    if (input_no_vrf_in_idb.is_set || is_set(input_no_vrf_in_idb.yfilter)) leaf_name_data.push_back(input_no_vrf_in_idb.get_name_leafdata());
    if (input_no_vrf_mtrace.is_set || is_set(input_no_vrf_mtrace.yfilter)) leaf_name_data.push_back(input_no_vrf_mtrace.get_name_leafdata());
    if (input_pim.is_set || is_set(input_pim.yfilter)) leaf_name_data.push_back(input_pim.get_name_leafdata());
    if (input_queries.is_set || is_set(input_queries.yfilter)) leaf_name_data.push_back(input_queries.get_name_leafdata());
    if (input_reports.is_set || is_set(input_reports.yfilter)) leaf_name_data.push_back(input_reports.get_name_leafdata());
    if (invalid_source_address_errors.is_set || is_set(invalid_source_address_errors.yfilter)) leaf_name_data.push_back(invalid_source_address_errors.get_name_leafdata());
    if (miscellaneous_errors.is_set || is_set(miscellaneous_errors.yfilter)) leaf_name_data.push_back(miscellaneous_errors.get_name_leafdata());
    if (no_socket_connection.is_set || is_set(no_socket_connection.yfilter)) leaf_name_data.push_back(no_socket_connection.get_name_leafdata());
    if (output_dvmrp.is_set || is_set(output_dvmrp.yfilter)) leaf_name_data.push_back(output_dvmrp.get_name_leafdata());
    if (output_leaves.is_set || is_set(output_leaves.yfilter)) leaf_name_data.push_back(output_leaves.get_name_leafdata());
    if (output_mtrace.is_set || is_set(output_mtrace.yfilter)) leaf_name_data.push_back(output_mtrace.get_name_leafdata());
    if (output_no_parent_interface_handle.is_set || is_set(output_no_parent_interface_handle.yfilter)) leaf_name_data.push_back(output_no_parent_interface_handle.get_name_leafdata());
    if (output_pim.is_set || is_set(output_pim.yfilter)) leaf_name_data.push_back(output_pim.get_name_leafdata());
    if (output_queries.is_set || is_set(output_queries.yfilter)) leaf_name_data.push_back(output_queries.get_name_leafdata());
    if (output_reports.is_set || is_set(output_reports.yfilter)) leaf_name_data.push_back(output_reports.get_name_leafdata());
    if (packet_manager_input_errors.is_set || is_set(packet_manager_input_errors.yfilter)) leaf_name_data.push_back(packet_manager_input_errors.get_name_leafdata());
    if (packet_manager_output_errors.is_set || is_set(packet_manager_output_errors.yfilter)) leaf_name_data.push_back(packet_manager_output_errors.get_name_leafdata());
    if (packets_in.is_set || is_set(packets_in.yfilter)) leaf_name_data.push_back(packets_in.get_name_leafdata());
    if (packets_out.is_set || is_set(packets_out.yfilter)) leaf_name_data.push_back(packets_out.get_name_leafdata());
    if (receive_socket_errors.is_set || is_set(receive_socket_errors.yfilter)) leaf_name_data.push_back(receive_socket_errors.get_name_leafdata());
    if (socket_errors.is_set || is_set(socket_errors.yfilter)) leaf_name_data.push_back(socket_errors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::DefaultContext::TrafficCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::TrafficCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Active::DefaultContext::TrafficCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "auxillary-data-length-errors")
    {
        auxillary_data_length_errors = value;
        auxillary_data_length_errors.value_namespace = name_space;
        auxillary_data_length_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-scope-errors")
    {
        bad_scope_errors = value;
        bad_scope_errors.value_namespace = name_space;
        bad_scope_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checksum-errors")
    {
        checksum_errors = value;
        checksum_errors.value_namespace = name_space;
        checksum_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
        elapsed_time.value_namespace = name_space;
        elapsed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format-errors")
    {
        format_errors = value;
        format_errors.value_namespace = name_space;
        format_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "get-packet-failure")
    {
        get_packet_failure = value;
        get_packet_failure.value_namespace = name_space;
        get_packet_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-disabled-idb")
    {
        input_disabled_idb = value;
        input_disabled_idb.value_namespace = name_space;
        input_disabled_idb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-dvmrp")
    {
        input_dvmrp = value;
        input_dvmrp.value_namespace = name_space;
        input_dvmrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-leaves")
    {
        input_leaves = value;
        input_leaves.value_namespace = name_space;
        input_leaves.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-martian-address")
    {
        input_martian_address = value;
        input_martian_address.value_namespace = name_space;
        input_martian_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-mtrace")
    {
        input_mtrace = value;
        input_mtrace.value_namespace = name_space;
        input_mtrace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-no-assigned-vrf-id")
    {
        input_no_assigned_vrf_id = value;
        input_no_assigned_vrf_id.value_namespace = name_space;
        input_no_assigned_vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-no-idb")
    {
        input_no_idb = value;
        input_no_idb.value_namespace = name_space;
        input_no_idb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-no-platform-support-mtrace")
    {
        input_no_platform_support_mtrace = value;
        input_no_platform_support_mtrace.value_namespace = name_space;
        input_no_platform_support_mtrace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-no-vrf-in-idb")
    {
        input_no_vrf_in_idb = value;
        input_no_vrf_in_idb.value_namespace = name_space;
        input_no_vrf_in_idb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-no-vrf-mtrace")
    {
        input_no_vrf_mtrace = value;
        input_no_vrf_mtrace.value_namespace = name_space;
        input_no_vrf_mtrace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-pim")
    {
        input_pim = value;
        input_pim.value_namespace = name_space;
        input_pim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-queries")
    {
        input_queries = value;
        input_queries.value_namespace = name_space;
        input_queries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-reports")
    {
        input_reports = value;
        input_reports.value_namespace = name_space;
        input_reports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-source-address-errors")
    {
        invalid_source_address_errors = value;
        invalid_source_address_errors.value_namespace = name_space;
        invalid_source_address_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "miscellaneous-errors")
    {
        miscellaneous_errors = value;
        miscellaneous_errors.value_namespace = name_space;
        miscellaneous_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-socket-connection")
    {
        no_socket_connection = value;
        no_socket_connection.value_namespace = name_space;
        no_socket_connection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-dvmrp")
    {
        output_dvmrp = value;
        output_dvmrp.value_namespace = name_space;
        output_dvmrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-leaves")
    {
        output_leaves = value;
        output_leaves.value_namespace = name_space;
        output_leaves.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-mtrace")
    {
        output_mtrace = value;
        output_mtrace.value_namespace = name_space;
        output_mtrace.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-no-parent-interface-handle")
    {
        output_no_parent_interface_handle = value;
        output_no_parent_interface_handle.value_namespace = name_space;
        output_no_parent_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-pim")
    {
        output_pim = value;
        output_pim.value_namespace = name_space;
        output_pim.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-queries")
    {
        output_queries = value;
        output_queries.value_namespace = name_space;
        output_queries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-reports")
    {
        output_reports = value;
        output_reports.value_namespace = name_space;
        output_reports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-manager-input-errors")
    {
        packet_manager_input_errors = value;
        packet_manager_input_errors.value_namespace = name_space;
        packet_manager_input_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-manager-output-errors")
    {
        packet_manager_output_errors = value;
        packet_manager_output_errors.value_namespace = name_space;
        packet_manager_output_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-in")
    {
        packets_in = value;
        packets_in.value_namespace = name_space;
        packets_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packets-out")
    {
        packets_out = value;
        packets_out.value_namespace = name_space;
        packets_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-socket-errors")
    {
        receive_socket_errors = value;
        receive_socket_errors.value_namespace = name_space;
        receive_socket_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "socket-errors")
    {
        socket_errors = value;
        socket_errors.value_namespace = name_space;
        socket_errors.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Active::DefaultContext::TrafficCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "auxillary-data-length-errors")
    {
        auxillary_data_length_errors.yfilter = yfilter;
    }
    if(value_path == "bad-scope-errors")
    {
        bad_scope_errors.yfilter = yfilter;
    }
    if(value_path == "checksum-errors")
    {
        checksum_errors.yfilter = yfilter;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time.yfilter = yfilter;
    }
    if(value_path == "format-errors")
    {
        format_errors.yfilter = yfilter;
    }
    if(value_path == "get-packet-failure")
    {
        get_packet_failure.yfilter = yfilter;
    }
    if(value_path == "input-disabled-idb")
    {
        input_disabled_idb.yfilter = yfilter;
    }
    if(value_path == "input-dvmrp")
    {
        input_dvmrp.yfilter = yfilter;
    }
    if(value_path == "input-leaves")
    {
        input_leaves.yfilter = yfilter;
    }
    if(value_path == "input-martian-address")
    {
        input_martian_address.yfilter = yfilter;
    }
    if(value_path == "input-mtrace")
    {
        input_mtrace.yfilter = yfilter;
    }
    if(value_path == "input-no-assigned-vrf-id")
    {
        input_no_assigned_vrf_id.yfilter = yfilter;
    }
    if(value_path == "input-no-idb")
    {
        input_no_idb.yfilter = yfilter;
    }
    if(value_path == "input-no-platform-support-mtrace")
    {
        input_no_platform_support_mtrace.yfilter = yfilter;
    }
    if(value_path == "input-no-vrf-in-idb")
    {
        input_no_vrf_in_idb.yfilter = yfilter;
    }
    if(value_path == "input-no-vrf-mtrace")
    {
        input_no_vrf_mtrace.yfilter = yfilter;
    }
    if(value_path == "input-pim")
    {
        input_pim.yfilter = yfilter;
    }
    if(value_path == "input-queries")
    {
        input_queries.yfilter = yfilter;
    }
    if(value_path == "input-reports")
    {
        input_reports.yfilter = yfilter;
    }
    if(value_path == "invalid-source-address-errors")
    {
        invalid_source_address_errors.yfilter = yfilter;
    }
    if(value_path == "miscellaneous-errors")
    {
        miscellaneous_errors.yfilter = yfilter;
    }
    if(value_path == "no-socket-connection")
    {
        no_socket_connection.yfilter = yfilter;
    }
    if(value_path == "output-dvmrp")
    {
        output_dvmrp.yfilter = yfilter;
    }
    if(value_path == "output-leaves")
    {
        output_leaves.yfilter = yfilter;
    }
    if(value_path == "output-mtrace")
    {
        output_mtrace.yfilter = yfilter;
    }
    if(value_path == "output-no-parent-interface-handle")
    {
        output_no_parent_interface_handle.yfilter = yfilter;
    }
    if(value_path == "output-pim")
    {
        output_pim.yfilter = yfilter;
    }
    if(value_path == "output-queries")
    {
        output_queries.yfilter = yfilter;
    }
    if(value_path == "output-reports")
    {
        output_reports.yfilter = yfilter;
    }
    if(value_path == "packet-manager-input-errors")
    {
        packet_manager_input_errors.yfilter = yfilter;
    }
    if(value_path == "packet-manager-output-errors")
    {
        packet_manager_output_errors.yfilter = yfilter;
    }
    if(value_path == "packets-in")
    {
        packets_in.yfilter = yfilter;
    }
    if(value_path == "packets-out")
    {
        packets_out.yfilter = yfilter;
    }
    if(value_path == "receive-socket-errors")
    {
        receive_socket_errors.yfilter = yfilter;
    }
    if(value_path == "socket-errors")
    {
        socket_errors.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::TrafficCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auxillary-data-length-errors" || name == "bad-scope-errors" || name == "checksum-errors" || name == "elapsed-time" || name == "format-errors" || name == "get-packet-failure" || name == "input-disabled-idb" || name == "input-dvmrp" || name == "input-leaves" || name == "input-martian-address" || name == "input-mtrace" || name == "input-no-assigned-vrf-id" || name == "input-no-idb" || name == "input-no-platform-support-mtrace" || name == "input-no-vrf-in-idb" || name == "input-no-vrf-mtrace" || name == "input-pim" || name == "input-queries" || name == "input-reports" || name == "invalid-source-address-errors" || name == "miscellaneous-errors" || name == "no-socket-connection" || name == "output-dvmrp" || name == "output-leaves" || name == "output-mtrace" || name == "output-no-parent-interface-handle" || name == "output-pim" || name == "output-queries" || name == "output-reports" || name == "packet-manager-input-errors" || name == "packet-manager-output-errors" || name == "packets-in" || name == "packets-out" || name == "receive-socket-errors" || name == "socket-errors")
        return true;
    return false;
}

Igmp::Active::DefaultContext::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "default-context";
}

Igmp::Active::DefaultContext::Groups::~Groups()
{
}

bool Igmp::Active::DefaultContext::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Active::DefaultContext::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Igmp::Active::DefaultContext::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::DefaultContext::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Active::DefaultContext::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Active::DefaultContext::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Igmp::Active::DefaultContext::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Igmp::Active::DefaultContext::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Igmp::Active::DefaultContext::Groups::Group::Group()
    :
    expiration_time{YType::int32, "expiration-time"},
    explicit_tracking_enabled{YType::boolean, "explicit-tracking-enabled"},
    group_address{YType::str, "group-address"},
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_added{YType::boolean, "is-added"},
    is_low_memory{YType::boolean, "is-low-memory"},
    is_self_join{YType::boolean, "is-self-join"},
    is_suppressed{YType::boolean, "is-suppressed"},
    older_host_version1_timer{YType::uint32, "older-host-version1-timer"},
    older_host_version2_timer{YType::uint32, "older-host-version2-timer"},
    router_filter_mode{YType::uint8, "router-filter-mode"},
    row_status{YType::str, "row-status"},
    uptime{YType::uint64, "uptime"}
    	,
    group_address_xr(std::make_shared<Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr>())
	,last_reporter(std::make_shared<Igmp::Active::DefaultContext::Groups::Group::LastReporter>())
	,source_address(std::make_shared<Igmp::Active::DefaultContext::Groups::Group::SourceAddress>())
{
    group_address_xr->parent = this;

    last_reporter->parent = this;

    source_address->parent = this;

    yang_name = "group"; yang_parent_name = "groups";
}

Igmp::Active::DefaultContext::Groups::Group::~Group()
{
}

bool Igmp::Active::DefaultContext::Groups::Group::has_data() const
{
    return expiration_time.is_set
	|| explicit_tracking_enabled.is_set
	|| group_address.is_set
	|| interface_name.is_set
	|| interface_name_xr.is_set
	|| is_added.is_set
	|| is_low_memory.is_set
	|| is_self_join.is_set
	|| is_suppressed.is_set
	|| older_host_version1_timer.is_set
	|| older_host_version2_timer.is_set
	|| router_filter_mode.is_set
	|| row_status.is_set
	|| uptime.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data())
	|| (last_reporter !=  nullptr && last_reporter->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Igmp::Active::DefaultContext::Groups::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expiration_time.yfilter)
	|| ydk::is_set(explicit_tracking_enabled.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(is_added.yfilter)
	|| ydk::is_set(is_low_memory.yfilter)
	|| ydk::is_set(is_self_join.yfilter)
	|| ydk::is_set(is_suppressed.yfilter)
	|| ydk::is_set(older_host_version1_timer.yfilter)
	|| ydk::is_set(older_host_version2_timer.yfilter)
	|| ydk::is_set(router_filter_mode.yfilter)
	|| ydk::is_set(row_status.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (last_reporter !=  nullptr && last_reporter->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Igmp::Active::DefaultContext::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.yfilter)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (explicit_tracking_enabled.is_set || is_set(explicit_tracking_enabled.yfilter)) leaf_name_data.push_back(explicit_tracking_enabled.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.yfilter)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.yfilter)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (is_self_join.is_set || is_set(is_self_join.yfilter)) leaf_name_data.push_back(is_self_join.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.yfilter)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());
    if (older_host_version1_timer.is_set || is_set(older_host_version1_timer.yfilter)) leaf_name_data.push_back(older_host_version1_timer.get_name_leafdata());
    if (older_host_version2_timer.is_set || is_set(older_host_version2_timer.yfilter)) leaf_name_data.push_back(older_host_version2_timer.get_name_leafdata());
    if (router_filter_mode.is_set || is_set(router_filter_mode.yfilter)) leaf_name_data.push_back(router_filter_mode.get_name_leafdata());
    if (row_status.is_set || is_set(row_status.yfilter)) leaf_name_data.push_back(row_status.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::DefaultContext::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "last-reporter")
    {
        if(last_reporter == nullptr)
        {
            last_reporter = std::make_shared<Igmp::Active::DefaultContext::Groups::Group::LastReporter>();
        }
        return last_reporter;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Igmp::Active::DefaultContext::Groups::Group::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    if(last_reporter != nullptr)
    {
        children["last-reporter"] = last_reporter;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Igmp::Active::DefaultContext::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
        expiration_time.value_namespace = name_space;
        expiration_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled = value;
        explicit_tracking_enabled.value_namespace = name_space;
        explicit_tracking_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "is-added")
    {
        is_added = value;
        is_added.value_namespace = name_space;
        is_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
        is_low_memory.value_namespace = name_space;
        is_low_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-self-join")
    {
        is_self_join = value;
        is_self_join.value_namespace = name_space;
        is_self_join.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed = value;
        is_suppressed.value_namespace = name_space;
        is_suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "older-host-version1-timer")
    {
        older_host_version1_timer = value;
        older_host_version1_timer.value_namespace = name_space;
        older_host_version1_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "older-host-version2-timer")
    {
        older_host_version2_timer = value;
        older_host_version2_timer.value_namespace = name_space;
        older_host_version2_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-filter-mode")
    {
        router_filter_mode = value;
        router_filter_mode.value_namespace = name_space;
        router_filter_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "row-status")
    {
        row_status = value;
        row_status.value_namespace = name_space;
        row_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Active::DefaultContext::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expiration-time")
    {
        expiration_time.yfilter = yfilter;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-added")
    {
        is_added.yfilter = yfilter;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory.yfilter = yfilter;
    }
    if(value_path == "is-self-join")
    {
        is_self_join.yfilter = yfilter;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed.yfilter = yfilter;
    }
    if(value_path == "older-host-version1-timer")
    {
        older_host_version1_timer.yfilter = yfilter;
    }
    if(value_path == "older-host-version2-timer")
    {
        older_host_version2_timer.yfilter = yfilter;
    }
    if(value_path == "router-filter-mode")
    {
        router_filter_mode.yfilter = yfilter;
    }
    if(value_path == "row-status")
    {
        row_status.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "last-reporter" || name == "source-address" || name == "expiration-time" || name == "explicit-tracking-enabled" || name == "group-address" || name == "interface-name" || name == "interface-name-xr" || name == "is-added" || name == "is-low-memory" || name == "is-self-join" || name == "is-suppressed" || name == "older-host-version1-timer" || name == "older-host-version2-timer" || name == "router-filter-mode" || name == "row-status" || name == "uptime")
        return true;
    return false;
}

Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "group";
}

Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::~GroupAddressXr()
{
}

bool Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/groups/group/" << get_segment_path();
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

std::shared_ptr<Entity> Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Igmp::Active::DefaultContext::Groups::Group::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::Groups::Group::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "last-reporter"; yang_parent_name = "group";
}

Igmp::Active::DefaultContext::Groups::Group::LastReporter::~LastReporter()
{
}

bool Igmp::Active::DefaultContext::Groups::Group::LastReporter::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::Groups::Group::LastReporter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::Groups::Group::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::Groups::Group::LastReporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/groups/group/" << get_segment_path();
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

std::shared_ptr<Entity> Igmp::Active::DefaultContext::Groups::Group::LastReporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::Groups::Group::LastReporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Active::DefaultContext::Groups::Group::LastReporter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Igmp::Active::DefaultContext::Groups::Group::LastReporter::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Igmp::Active::DefaultContext::Groups::Group::LastReporter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::Groups::Group::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "group";
}

Igmp::Active::DefaultContext::Groups::Group::SourceAddress::~SourceAddress()
{
}

bool Igmp::Active::DefaultContext::Groups::Group::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::Groups::Group::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::Groups::Group::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::Groups::Group::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/groups/group/" << get_segment_path();
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

std::shared_ptr<Entity> Igmp::Active::DefaultContext::Groups::Group::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::Groups::Group::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Active::DefaultContext::Groups::Group::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Igmp::Active::DefaultContext::Groups::Group::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Igmp::Active::DefaultContext::Groups::Group::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::GroupSummary::GroupSummary()
    :
    group_count{YType::uint32, "group-count"},
    groutes{YType::uint32, "groutes"},
    is_low_memory{YType::boolean, "is-low-memory"},
    sg_routes{YType::uint32, "sg-routes"}
{
    yang_name = "group-summary"; yang_parent_name = "default-context";
}

Igmp::Active::DefaultContext::GroupSummary::~GroupSummary()
{
}

bool Igmp::Active::DefaultContext::GroupSummary::has_data() const
{
    return group_count.is_set
	|| groutes.is_set
	|| is_low_memory.is_set
	|| sg_routes.is_set;
}

bool Igmp::Active::DefaultContext::GroupSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(groutes.yfilter)
	|| ydk::is_set(is_low_memory.yfilter)
	|| ydk::is_set(sg_routes.yfilter);
}

std::string Igmp::Active::DefaultContext::GroupSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-summary";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::GroupSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (groutes.is_set || is_set(groutes.yfilter)) leaf_name_data.push_back(groutes.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.yfilter)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (sg_routes.is_set || is_set(sg_routes.yfilter)) leaf_name_data.push_back(sg_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::DefaultContext::GroupSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::GroupSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Active::DefaultContext::GroupSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groutes")
    {
        groutes = value;
        groutes.value_namespace = name_space;
        groutes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
        is_low_memory.value_namespace = name_space;
        is_low_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sg-routes")
    {
        sg_routes = value;
        sg_routes.value_namespace = name_space;
        sg_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Active::DefaultContext::GroupSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "groutes")
    {
        groutes.yfilter = yfilter;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory.yfilter = yfilter;
    }
    if(value_path == "sg-routes")
    {
        sg_routes.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::GroupSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-count" || name == "groutes" || name == "is-low-memory" || name == "sg-routes")
        return true;
    return false;
}

Igmp::Active::DefaultContext::IfrsInterfaceSummary::IfrsInterfaceSummary()
    :
    configuration_count{YType::uint32, "configuration-count"},
    interface_count{YType::uint32, "interface-count"}
{
    yang_name = "ifrs-interface-summary"; yang_parent_name = "default-context";
}

Igmp::Active::DefaultContext::IfrsInterfaceSummary::~IfrsInterfaceSummary()
{
}

bool Igmp::Active::DefaultContext::IfrsInterfaceSummary::has_data() const
{
    return configuration_count.is_set
	|| interface_count.is_set;
}

bool Igmp::Active::DefaultContext::IfrsInterfaceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configuration_count.yfilter)
	|| ydk::is_set(interface_count.yfilter);
}

std::string Igmp::Active::DefaultContext::IfrsInterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface-summary";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::IfrsInterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/" << get_segment_path();
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

std::shared_ptr<Entity> Igmp::Active::DefaultContext::IfrsInterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::IfrsInterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Active::DefaultContext::IfrsInterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Igmp::Active::DefaultContext::IfrsInterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Igmp::Active::DefaultContext::IfrsInterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration-count" || name == "interface-count")
        return true;
    return false;
}

Igmp::Active::DefaultContext::GlobalInterfaceTable::GlobalInterfaceTable()
{
    yang_name = "global-interface-table"; yang_parent_name = "default-context";
}

Igmp::Active::DefaultContext::GlobalInterfaceTable::~GlobalInterfaceTable()
{
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Igmp::Active::DefaultContext::GlobalInterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-interface-table";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::GlobalInterfaceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::DefaultContext::GlobalInterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::GlobalInterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Active::DefaultContext::GlobalInterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Igmp::Active::DefaultContext::GlobalInterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address>())
	,querier_address(std::make_shared<Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress>())
	,subscriber_address(std::make_shared<Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface"; yang_parent_name = "global-interface-table";
}

Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::~Interface()
{
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(configuration_mcast_vrf_error.yfilter)
	|| ydk::is_set(configuration_mcast_vrf_set.yfilter)
	|| ydk::is_set(configurationvrf_error.yfilter)
	|| ydk::is_set(configurationvrf_set.yfilter)
	|| ydk::is_set(group_joins.yfilter)
	|| ydk::is_set(group_leaves.yfilter)
	|| ydk::is_set(host_version.yfilter)
	|| ydk::is_set(igmp_version.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(is_configurationverify.yfilter)
	|| ydk::is_set(is_identity_present.yfilter)
	|| ydk::is_set(is_im_state_registered.yfilter)
	|| ydk::is_set(is_interface_up.yfilter)
	|| ydk::is_set(is_ip_enabled.yfilter)
	|| ydk::is_set(is_las_registered.yfilter)
	|| ydk::is_set(is_las_request.yfilter)
	|| ydk::is_set(is_querier.yfilter)
	|| ydk::is_set(is_router_enabled.yfilter)
	|| ydk::is_set(is_subscriber.yfilter)
	|| ydk::is_set(las_get_address_count.yfilter)
	|| ydk::is_set(las_ll_add_update_count.yfilter)
	|| ydk::is_set(las_ll_registration_count.yfilter)
	|| ydk::is_set(las_ll_remove_update_count.yfilter)
	|| ydk::is_set(las_null_update_count.yfilter)
	|| ydk::is_set(las_unregistration_count.yfilter)
	|| ydk::is_set(las_update_count.yfilter)
	|| ydk::is_set(last_member_query_interval.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(mte_tuple_count.yfilter)
	|| ydk::is_set(mte_vrf_id.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(parent_ifhandle.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(proxy_interface.yfilter)
	|| ydk::is_set(querier_uptime.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(query_maximum_response_time.yfilter)
	|| ydk::is_set(query_timeout.yfilter)
	|| ydk::is_set(robustness.yfilter)
	|| ydk::is_set(router_uptime_in_seconds.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(subscriber_id.yfilter)
	|| ydk::is_set(subscriber_mode.yfilter)
	|| ydk::is_set(time_since_last_query_in_seconds.yfilter)
	|| ydk::is_set(time_since_last_report_in_seconds.yfilter)
	|| ydk::is_set(total_active_groups.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(vrf_state.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/global-interface-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.yfilter)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.yfilter)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.yfilter)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.yfilter)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.yfilter)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.yfilter)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.yfilter)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.yfilter)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.yfilter)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.yfilter)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.yfilter)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.yfilter)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.yfilter)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.yfilter)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.yfilter)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.yfilter)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.yfilter)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.yfilter)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.yfilter)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.yfilter)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.yfilter)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.yfilter)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.yfilter)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.yfilter)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.yfilter)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.yfilter)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.yfilter)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.yfilter)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.yfilter)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.yfilter)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.yfilter)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.yfilter)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.yfilter)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.yfilter)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.yfilter)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.yfilter)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.yfilter)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.yfilter)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.yfilter)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.yfilter)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.yfilter)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(querier_address != nullptr)
    {
        children["querier-address"] = querier_address;
    }

    if(subscriber_address != nullptr)
    {
        children["subscriber-address"] = subscriber_address;
    }

    return children;
}

void Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
        configuration_mcast_vrf_error.value_namespace = name_space;
        configuration_mcast_vrf_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
        configuration_mcast_vrf_set.value_namespace = name_space;
        configuration_mcast_vrf_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
        configurationvrf_error.value_namespace = name_space;
        configurationvrf_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
        configurationvrf_set.value_namespace = name_space;
        configurationvrf_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
        group_joins.value_namespace = name_space;
        group_joins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
        group_leaves.value_namespace = name_space;
        group_leaves.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-version")
    {
        host_version = value;
        host_version.value_namespace = name_space;
        host_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
        igmp_version.value_namespace = name_space;
        igmp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
        is_configurationverify.value_namespace = name_space;
        is_configurationverify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
        is_identity_present.value_namespace = name_space;
        is_identity_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
        is_im_state_registered.value_namespace = name_space;
        is_im_state_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
        is_interface_up.value_namespace = name_space;
        is_interface_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
        is_ip_enabled.value_namespace = name_space;
        is_ip_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
        is_las_registered.value_namespace = name_space;
        is_las_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
        is_las_request.value_namespace = name_space;
        is_las_request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
        is_querier.value_namespace = name_space;
        is_querier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
        is_router_enabled.value_namespace = name_space;
        is_router_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
        is_subscriber.value_namespace = name_space;
        is_subscriber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
        las_get_address_count.value_namespace = name_space;
        las_get_address_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
        las_ll_add_update_count.value_namespace = name_space;
        las_ll_add_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
        las_ll_registration_count.value_namespace = name_space;
        las_ll_registration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
        las_ll_remove_update_count.value_namespace = name_space;
        las_ll_remove_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
        las_null_update_count.value_namespace = name_space;
        las_null_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
        las_unregistration_count.value_namespace = name_space;
        las_unregistration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
        las_update_count.value_namespace = name_space;
        las_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
        last_member_query_interval.value_namespace = name_space;
        last_member_query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
        mte_tuple_count.value_namespace = name_space;
        mte_tuple_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
        mte_vrf_id.value_namespace = name_space;
        mte_vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
        parent_ifhandle.value_namespace = name_space;
        parent_ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
        proxy_interface.value_namespace = name_space;
        proxy_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
        querier_uptime.value_namespace = name_space;
        querier_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
        query_maximum_response_time.value_namespace = name_space;
        query_maximum_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
        query_timeout.value_namespace = name_space;
        query_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness")
    {
        robustness = value;
        robustness.value_namespace = name_space;
        robustness.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
        router_uptime_in_seconds.value_namespace = name_space;
        router_uptime_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
        subscriber_id.value_namespace = name_space;
        subscriber_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
        subscriber_mode.value_namespace = name_space;
        subscriber_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
        time_since_last_query_in_seconds.value_namespace = name_space;
        time_since_last_query_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
        time_since_last_report_in_seconds.value_namespace = name_space;
        time_since_last_report_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
        total_active_groups.value_namespace = name_space;
        total_active_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
        vrf_state.value_namespace = name_space;
        vrf_state.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error.yfilter = yfilter;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set.yfilter = yfilter;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error.yfilter = yfilter;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set.yfilter = yfilter;
    }
    if(value_path == "group-joins")
    {
        group_joins.yfilter = yfilter;
    }
    if(value_path == "group-leaves")
    {
        group_leaves.yfilter = yfilter;
    }
    if(value_path == "host-version")
    {
        host_version.yfilter = yfilter;
    }
    if(value_path == "igmp-version")
    {
        igmp_version.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify.yfilter = yfilter;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present.yfilter = yfilter;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered.yfilter = yfilter;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up.yfilter = yfilter;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled.yfilter = yfilter;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered.yfilter = yfilter;
    }
    if(value_path == "is-las-request")
    {
        is_las_request.yfilter = yfilter;
    }
    if(value_path == "is-querier")
    {
        is_querier.yfilter = yfilter;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled.yfilter = yfilter;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber.yfilter = yfilter;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count.yfilter = yfilter;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count.yfilter = yfilter;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count.yfilter = yfilter;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count.yfilter = yfilter;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count.yfilter = yfilter;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count.yfilter = yfilter;
    }
    if(value_path == "las-update-count")
    {
        las_update_count.yfilter = yfilter;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count.yfilter = yfilter;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface.yfilter = yfilter;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time.yfilter = yfilter;
    }
    if(value_path == "query-timeout")
    {
        query_timeout.yfilter = yfilter;
    }
    if(value_path == "robustness")
    {
        robustness.yfilter = yfilter;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id.yfilter = yfilter;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode.yfilter = yfilter;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds.yfilter = yfilter;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "vrf-state")
    {
        vrf_state.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "querier-address" || name == "subscriber-address" || name == "interface-name" || name == "configuration-mcast-vrf-error" || name == "configuration-mcast-vrf-set" || name == "configurationvrf-error" || name == "configurationvrf-set" || name == "group-joins" || name == "group-leaves" || name == "host-version" || name == "igmp-version" || name == "interface-name-xr" || name == "is-configurationverify" || name == "is-identity-present" || name == "is-im-state-registered" || name == "is-interface-up" || name == "is-ip-enabled" || name == "is-las-registered" || name == "is-las-request" || name == "is-querier" || name == "is-router-enabled" || name == "is-subscriber" || name == "las-get-address-count" || name == "las-ll-add-update-count" || name == "las-ll-registration-count" || name == "las-ll-remove-update-count" || name == "las-null-update-count" || name == "las-unregistration-count" || name == "las-update-count" || name == "last-member-query-interval" || name == "location" || name == "mte-tuple-count" || name == "mte-vrf-id" || name == "mtu" || name == "parent-ifhandle" || name == "prefix-length" || name == "proxy-interface" || name == "querier-uptime" || name == "query-interval" || name == "query-maximum-response-time" || name == "query-timeout" || name == "robustness" || name == "router-uptime-in-seconds" || name == "state" || name == "subscriber-id" || name == "subscriber-mode" || name == "time-since-last-query-in-seconds" || name == "time-since-last-report-in-seconds" || name == "total-active-groups" || name == "vrf-id" || name == "vrf-state")
        return true;
    return false;
}

Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface";
}

Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::~Address()
{
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface";
}

Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface";
}

Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Igmp::Active::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetails()
{
    yang_name = "ssm-map-details"; yang_parent_name = "default-context";
}

Igmp::Active::DefaultContext::SsmMapDetails::~SsmMapDetails()
{
}

bool Igmp::Active::DefaultContext::SsmMapDetails::has_data() const
{
    for (std::size_t index=0; index<ssm_map_detail.size(); index++)
    {
        if(ssm_map_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Active::DefaultContext::SsmMapDetails::has_operation() const
{
    for (std::size_t index=0; index<ssm_map_detail.size(); index++)
    {
        if(ssm_map_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Igmp::Active::DefaultContext::SsmMapDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map-details";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::SsmMapDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::DefaultContext::SsmMapDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssm-map-detail")
    {
        for(auto const & c : ssm_map_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail>();
        c->parent = this;
        ssm_map_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::SsmMapDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ssm_map_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Active::DefaultContext::SsmMapDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Igmp::Active::DefaultContext::SsmMapDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Igmp::Active::DefaultContext::SsmMapDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssm-map-detail")
        return true;
    return false;
}

Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::SsmMapDetail()
    :
    elapsed_time{YType::uint64, "elapsed-time"},
    expiration_time{YType::uint32, "expiration-time"},
    group_address{YType::str, "group-address"},
    query_interval{YType::uint32, "query-interval"},
    response_pending{YType::boolean, "response-pending"},
    ssm_map_type{YType::enumeration, "ssm-map-type"}
    	,
    map_info(std::make_shared<Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo>())
{
    map_info->parent = this;

    yang_name = "ssm-map-detail"; yang_parent_name = "ssm-map-details";
}

Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::~SsmMapDetail()
{
}

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::has_data() const
{
    for (std::size_t index=0; index<sources.size(); index++)
    {
        if(sources[index]->has_data())
            return true;
    }
    return elapsed_time.is_set
	|| expiration_time.is_set
	|| group_address.is_set
	|| query_interval.is_set
	|| response_pending.is_set
	|| ssm_map_type.is_set
	|| (map_info !=  nullptr && map_info->has_data());
}

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::has_operation() const
{
    for (std::size_t index=0; index<sources.size(); index++)
    {
        if(sources[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(elapsed_time.yfilter)
	|| ydk::is_set(expiration_time.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(response_pending.yfilter)
	|| ydk::is_set(ssm_map_type.yfilter)
	|| (map_info !=  nullptr && map_info->has_operation());
}

std::string Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map-detail";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/ssm-map-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (elapsed_time.is_set || is_set(elapsed_time.yfilter)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (expiration_time.is_set || is_set(expiration_time.yfilter)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (response_pending.is_set || is_set(response_pending.yfilter)) leaf_name_data.push_back(response_pending.get_name_leafdata());
    if (ssm_map_type.is_set || is_set(ssm_map_type.yfilter)) leaf_name_data.push_back(ssm_map_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-info")
    {
        if(map_info == nullptr)
        {
            map_info = std::make_shared<Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo>();
        }
        return map_info;
    }

    if(child_yang_name == "sources")
    {
        for(auto const & c : sources)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources>();
        c->parent = this;
        sources.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(map_info != nullptr)
    {
        children["map-info"] = map_info;
    }

    for (auto const & c : sources)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
        elapsed_time.value_namespace = name_space;
        elapsed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expiration-time")
    {
        expiration_time = value;
        expiration_time.value_namespace = name_space;
        expiration_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-pending")
    {
        response_pending = value;
        response_pending.value_namespace = name_space;
        response_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssm-map-type")
    {
        ssm_map_type = value;
        ssm_map_type.value_namespace = name_space;
        ssm_map_type.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "elapsed-time")
    {
        elapsed_time.yfilter = yfilter;
    }
    if(value_path == "expiration-time")
    {
        expiration_time.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "response-pending")
    {
        response_pending.yfilter = yfilter;
    }
    if(value_path == "ssm-map-type")
    {
        ssm_map_type.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-info" || name == "sources" || name == "elapsed-time" || name == "expiration-time" || name == "group-address" || name == "query-interval" || name == "response-pending" || name == "ssm-map-type")
        return true;
    return false;
}

Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::MapInfo()
    :
    map_type{YType::uint32, "map-type"},
    source_counts{YType::uint32, "source-counts"}
    	,
    group_address_xr(std::make_shared<Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr>())
{
    group_address_xr->parent = this;

    yang_name = "map-info"; yang_parent_name = "ssm-map-detail";
}

Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::~MapInfo()
{
}

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::has_data() const
{
    return map_type.is_set
	|| source_counts.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data());
}

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map_type.yfilter)
	|| ydk::is_set(source_counts.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-info";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/ssm-map-details/ssm-map-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_type.is_set || is_set(map_type.yfilter)) leaf_name_data.push_back(map_type.get_name_leafdata());
    if (source_counts.is_set || is_set(source_counts.yfilter)) leaf_name_data.push_back(source_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr>();
        }
        return group_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    return children;
}

void Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map-type")
    {
        map_type = value;
        map_type.value_namespace = name_space;
        map_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-counts")
    {
        source_counts = value;
        source_counts.value_namespace = name_space;
        source_counts.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map-type")
    {
        map_type.yfilter = yfilter;
    }
    if(value_path == "source-counts")
    {
        source_counts.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "map-type" || name == "source-counts")
        return true;
    return false;
}

Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "map-info";
}

Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::~GroupAddressXr()
{
}

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/ssm-map-details/ssm-map-detail/map-info/" << get_segment_path();
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

std::shared_ptr<Entity> Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::Sources()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "sources"; yang_parent_name = "ssm-map-detail";
}

Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::~Sources()
{
}

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sources";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/ssm-map-details/ssm-map-detail/" << get_segment_path();
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

std::shared_ptr<Entity> Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Igmp::Active::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOffs()
{
    yang_name = "interface-state-offs"; yang_parent_name = "default-context";
}

Igmp::Active::DefaultContext::InterfaceStateOffs::~InterfaceStateOffs()
{
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::has_data() const
{
    for (std::size_t index=0; index<interface_state_off.size(); index++)
    {
        if(interface_state_off[index]->has_data())
            return true;
    }
    return false;
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::has_operation() const
{
    for (std::size_t index=0; index<interface_state_off.size(); index++)
    {
        if(interface_state_off[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Igmp::Active::DefaultContext::InterfaceStateOffs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-offs";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::InterfaceStateOffs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::DefaultContext::InterfaceStateOffs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-state-off")
    {
        for(auto const & c : interface_state_off)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff>();
        c->parent = this;
        interface_state_off.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::InterfaceStateOffs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_state_off)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Igmp::Active::DefaultContext::InterfaceStateOffs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Igmp::Active::DefaultContext::InterfaceStateOffs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-state-off")
        return true;
    return false;
}

Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::InterfaceStateOff()
    :
    interface_name{YType::str, "interface-name"},
    configuration_mcast_vrf_error{YType::boolean, "configuration-mcast-vrf-error"},
    configuration_mcast_vrf_set{YType::boolean, "configuration-mcast-vrf-set"},
    configurationvrf_error{YType::boolean, "configurationvrf-error"},
    configurationvrf_set{YType::boolean, "configurationvrf-set"},
    group_joins{YType::uint32, "group-joins"},
    group_leaves{YType::uint32, "group-leaves"},
    host_version{YType::uint8, "host-version"},
    igmp_version{YType::uint8, "igmp-version"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_configurationverify{YType::boolean, "is-configurationverify"},
    is_identity_present{YType::boolean, "is-identity-present"},
    is_im_state_registered{YType::boolean, "is-im-state-registered"},
    is_interface_up{YType::boolean, "is-interface-up"},
    is_ip_enabled{YType::boolean, "is-ip-enabled"},
    is_las_registered{YType::boolean, "is-las-registered"},
    is_las_request{YType::boolean, "is-las-request"},
    is_querier{YType::boolean, "is-querier"},
    is_router_enabled{YType::boolean, "is-router-enabled"},
    is_subscriber{YType::boolean, "is-subscriber"},
    las_get_address_count{YType::uint32, "las-get-address-count"},
    las_ll_add_update_count{YType::uint32, "las-ll-add-update-count"},
    las_ll_registration_count{YType::uint32, "las-ll-registration-count"},
    las_ll_remove_update_count{YType::uint32, "las-ll-remove-update-count"},
    las_null_update_count{YType::uint32, "las-null-update-count"},
    las_unregistration_count{YType::uint32, "las-unregistration-count"},
    las_update_count{YType::uint32, "las-update-count"},
    last_member_query_interval{YType::uint16, "last-member-query-interval"},
    location{YType::uint32, "location"},
    mte_tuple_count{YType::uint32, "mte-tuple-count"},
    mte_vrf_id{YType::uint32, "mte-vrf-id"},
    mtu{YType::uint32, "mtu"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    prefix_length{YType::uint32, "prefix-length"},
    proxy_interface{YType::str, "proxy-interface"},
    querier_uptime{YType::uint16, "querier-uptime"},
    query_interval{YType::uint16, "query-interval"},
    query_maximum_response_time{YType::uint16, "query-maximum-response-time"},
    query_timeout{YType::uint16, "query-timeout"},
    robustness{YType::uint32, "robustness"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    state{YType::uint32, "state"},
    subscriber_id{YType::str, "subscriber-id"},
    subscriber_mode{YType::uint32, "subscriber-mode"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"},
    total_active_groups{YType::uint32, "total-active-groups"},
    vrf_id{YType::uint32, "vrf-id"},
    vrf_state{YType::uint32, "vrf-state"}
    	,
    address(std::make_shared<Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address>())
	,querier_address(std::make_shared<Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress>())
	,subscriber_address(std::make_shared<Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface-state-off"; yang_parent_name = "interface-state-offs";
}

Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::~InterfaceStateOff()
{
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::has_data() const
{
    return interface_name.is_set
	|| configuration_mcast_vrf_error.is_set
	|| configuration_mcast_vrf_set.is_set
	|| configurationvrf_error.is_set
	|| configurationvrf_set.is_set
	|| group_joins.is_set
	|| group_leaves.is_set
	|| host_version.is_set
	|| igmp_version.is_set
	|| interface_name_xr.is_set
	|| is_configurationverify.is_set
	|| is_identity_present.is_set
	|| is_im_state_registered.is_set
	|| is_interface_up.is_set
	|| is_ip_enabled.is_set
	|| is_las_registered.is_set
	|| is_las_request.is_set
	|| is_querier.is_set
	|| is_router_enabled.is_set
	|| is_subscriber.is_set
	|| las_get_address_count.is_set
	|| las_ll_add_update_count.is_set
	|| las_ll_registration_count.is_set
	|| las_ll_remove_update_count.is_set
	|| las_null_update_count.is_set
	|| las_unregistration_count.is_set
	|| las_update_count.is_set
	|| last_member_query_interval.is_set
	|| location.is_set
	|| mte_tuple_count.is_set
	|| mte_vrf_id.is_set
	|| mtu.is_set
	|| parent_ifhandle.is_set
	|| prefix_length.is_set
	|| proxy_interface.is_set
	|| querier_uptime.is_set
	|| query_interval.is_set
	|| query_maximum_response_time.is_set
	|| query_timeout.is_set
	|| robustness.is_set
	|| router_uptime_in_seconds.is_set
	|| state.is_set
	|| subscriber_id.is_set
	|| subscriber_mode.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set
	|| total_active_groups.is_set
	|| vrf_id.is_set
	|| vrf_state.is_set
	|| (address !=  nullptr && address->has_data())
	|| (querier_address !=  nullptr && querier_address->has_data())
	|| (subscriber_address !=  nullptr && subscriber_address->has_data());
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(configuration_mcast_vrf_error.yfilter)
	|| ydk::is_set(configuration_mcast_vrf_set.yfilter)
	|| ydk::is_set(configurationvrf_error.yfilter)
	|| ydk::is_set(configurationvrf_set.yfilter)
	|| ydk::is_set(group_joins.yfilter)
	|| ydk::is_set(group_leaves.yfilter)
	|| ydk::is_set(host_version.yfilter)
	|| ydk::is_set(igmp_version.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(is_configurationverify.yfilter)
	|| ydk::is_set(is_identity_present.yfilter)
	|| ydk::is_set(is_im_state_registered.yfilter)
	|| ydk::is_set(is_interface_up.yfilter)
	|| ydk::is_set(is_ip_enabled.yfilter)
	|| ydk::is_set(is_las_registered.yfilter)
	|| ydk::is_set(is_las_request.yfilter)
	|| ydk::is_set(is_querier.yfilter)
	|| ydk::is_set(is_router_enabled.yfilter)
	|| ydk::is_set(is_subscriber.yfilter)
	|| ydk::is_set(las_get_address_count.yfilter)
	|| ydk::is_set(las_ll_add_update_count.yfilter)
	|| ydk::is_set(las_ll_registration_count.yfilter)
	|| ydk::is_set(las_ll_remove_update_count.yfilter)
	|| ydk::is_set(las_null_update_count.yfilter)
	|| ydk::is_set(las_unregistration_count.yfilter)
	|| ydk::is_set(las_update_count.yfilter)
	|| ydk::is_set(last_member_query_interval.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(mte_tuple_count.yfilter)
	|| ydk::is_set(mte_vrf_id.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(parent_ifhandle.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(proxy_interface.yfilter)
	|| ydk::is_set(querier_uptime.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(query_maximum_response_time.yfilter)
	|| ydk::is_set(query_timeout.yfilter)
	|| ydk::is_set(robustness.yfilter)
	|| ydk::is_set(router_uptime_in_seconds.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(subscriber_id.yfilter)
	|| ydk::is_set(subscriber_mode.yfilter)
	|| ydk::is_set(time_since_last_query_in_seconds.yfilter)
	|| ydk::is_set(time_since_last_report_in_seconds.yfilter)
	|| ydk::is_set(total_active_groups.yfilter)
	|| ydk::is_set(vrf_id.yfilter)
	|| ydk::is_set(vrf_state.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-off" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:igmp/active/default-context/interface-state-offs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.yfilter)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.yfilter)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.yfilter)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.yfilter)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.yfilter)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.yfilter)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.yfilter)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.yfilter)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.yfilter)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.yfilter)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.yfilter)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.yfilter)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.yfilter)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.yfilter)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.yfilter)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.yfilter)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.yfilter)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.yfilter)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.yfilter)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.yfilter)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.yfilter)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.yfilter)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.yfilter)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.yfilter)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.yfilter)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.yfilter)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.yfilter)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.yfilter)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.yfilter)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.yfilter)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.yfilter)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.yfilter)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.yfilter)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.yfilter)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.yfilter)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.yfilter)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.yfilter)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.yfilter)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.yfilter)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.yfilter)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.yfilter)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.yfilter)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(querier_address != nullptr)
    {
        children["querier-address"] = querier_address;
    }

    if(subscriber_address != nullptr)
    {
        children["subscriber-address"] = subscriber_address;
    }

    return children;
}

void Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
        configuration_mcast_vrf_error.value_namespace = name_space;
        configuration_mcast_vrf_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
        configuration_mcast_vrf_set.value_namespace = name_space;
        configuration_mcast_vrf_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
        configurationvrf_error.value_namespace = name_space;
        configurationvrf_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
        configurationvrf_set.value_namespace = name_space;
        configurationvrf_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
        group_joins.value_namespace = name_space;
        group_joins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
        group_leaves.value_namespace = name_space;
        group_leaves.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-version")
    {
        host_version = value;
        host_version.value_namespace = name_space;
        host_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
        igmp_version.value_namespace = name_space;
        igmp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
        is_configurationverify.value_namespace = name_space;
        is_configurationverify.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
        is_identity_present.value_namespace = name_space;
        is_identity_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
        is_im_state_registered.value_namespace = name_space;
        is_im_state_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
        is_interface_up.value_namespace = name_space;
        is_interface_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
        is_ip_enabled.value_namespace = name_space;
        is_ip_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
        is_las_registered.value_namespace = name_space;
        is_las_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
        is_las_request.value_namespace = name_space;
        is_las_request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
        is_querier.value_namespace = name_space;
        is_querier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
        is_router_enabled.value_namespace = name_space;
        is_router_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
        is_subscriber.value_namespace = name_space;
        is_subscriber.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
        las_get_address_count.value_namespace = name_space;
        las_get_address_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
        las_ll_add_update_count.value_namespace = name_space;
        las_ll_add_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
        las_ll_registration_count.value_namespace = name_space;
        las_ll_registration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
        las_ll_remove_update_count.value_namespace = name_space;
        las_ll_remove_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
        las_null_update_count.value_namespace = name_space;
        las_null_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
        las_unregistration_count.value_namespace = name_space;
        las_unregistration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
        las_update_count.value_namespace = name_space;
        las_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
        last_member_query_interval.value_namespace = name_space;
        last_member_query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
        mte_tuple_count.value_namespace = name_space;
        mte_tuple_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
        mte_vrf_id.value_namespace = name_space;
        mte_vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
        parent_ifhandle.value_namespace = name_space;
        parent_ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
        proxy_interface.value_namespace = name_space;
        proxy_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
        querier_uptime.value_namespace = name_space;
        querier_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
        query_maximum_response_time.value_namespace = name_space;
        query_maximum_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
        query_timeout.value_namespace = name_space;
        query_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness")
    {
        robustness = value;
        robustness.value_namespace = name_space;
        robustness.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
        router_uptime_in_seconds.value_namespace = name_space;
        router_uptime_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
        subscriber_id.value_namespace = name_space;
        subscriber_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
        subscriber_mode.value_namespace = name_space;
        subscriber_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
        time_since_last_query_in_seconds.value_namespace = name_space;
        time_since_last_query_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
        time_since_last_report_in_seconds.value_namespace = name_space;
        time_since_last_report_in_seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
        total_active_groups.value_namespace = name_space;
        total_active_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
        vrf_id.value_namespace = name_space;
        vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
        vrf_state.value_namespace = name_space;
        vrf_state.value_namespace_prefix = name_space_prefix;
    }
}

void Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error.yfilter = yfilter;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set.yfilter = yfilter;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error.yfilter = yfilter;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set.yfilter = yfilter;
    }
    if(value_path == "group-joins")
    {
        group_joins.yfilter = yfilter;
    }
    if(value_path == "group-leaves")
    {
        group_leaves.yfilter = yfilter;
    }
    if(value_path == "host-version")
    {
        host_version.yfilter = yfilter;
    }
    if(value_path == "igmp-version")
    {
        igmp_version.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify.yfilter = yfilter;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present.yfilter = yfilter;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered.yfilter = yfilter;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up.yfilter = yfilter;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled.yfilter = yfilter;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered.yfilter = yfilter;
    }
    if(value_path == "is-las-request")
    {
        is_las_request.yfilter = yfilter;
    }
    if(value_path == "is-querier")
    {
        is_querier.yfilter = yfilter;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled.yfilter = yfilter;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber.yfilter = yfilter;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count.yfilter = yfilter;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count.yfilter = yfilter;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count.yfilter = yfilter;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count.yfilter = yfilter;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count.yfilter = yfilter;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count.yfilter = yfilter;
    }
    if(value_path == "las-update-count")
    {
        las_update_count.yfilter = yfilter;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count.yfilter = yfilter;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface.yfilter = yfilter;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time.yfilter = yfilter;
    }
    if(value_path == "query-timeout")
    {
        query_timeout.yfilter = yfilter;
    }
    if(value_path == "robustness")
    {
        robustness.yfilter = yfilter;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id.yfilter = yfilter;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode.yfilter = yfilter;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds.yfilter = yfilter;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups.yfilter = yfilter;
    }
    if(value_path == "vrf-id")
    {
        vrf_id.yfilter = yfilter;
    }
    if(value_path == "vrf-state")
    {
        vrf_state.yfilter = yfilter;
    }
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "querier-address" || name == "subscriber-address" || name == "interface-name" || name == "configuration-mcast-vrf-error" || name == "configuration-mcast-vrf-set" || name == "configurationvrf-error" || name == "configurationvrf-set" || name == "group-joins" || name == "group-leaves" || name == "host-version" || name == "igmp-version" || name == "interface-name-xr" || name == "is-configurationverify" || name == "is-identity-present" || name == "is-im-state-registered" || name == "is-interface-up" || name == "is-ip-enabled" || name == "is-las-registered" || name == "is-las-request" || name == "is-querier" || name == "is-router-enabled" || name == "is-subscriber" || name == "las-get-address-count" || name == "las-ll-add-update-count" || name == "las-ll-registration-count" || name == "las-ll-remove-update-count" || name == "las-null-update-count" || name == "las-unregistration-count" || name == "las-update-count" || name == "last-member-query-interval" || name == "location" || name == "mte-tuple-count" || name == "mte-vrf-id" || name == "mtu" || name == "parent-ifhandle" || name == "prefix-length" || name == "proxy-interface" || name == "querier-uptime" || name == "query-interval" || name == "query-maximum-response-time" || name == "query-timeout" || name == "robustness" || name == "router-uptime-in-seconds" || name == "state" || name == "subscriber-id" || name == "subscriber-mode" || name == "time-since-last-query-in-seconds" || name == "time-since-last-report-in-seconds" || name == "total-active-groups" || name == "vrf-id" || name == "vrf-state")
        return true;
    return false;
}

Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-state-off";
}

Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::~Address()
{
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-state-off";
}

Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::~QuerierAddress()
{
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'QuerierAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-state-off";
}

Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::~SubscriberAddress()
{
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SubscriberAddress' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Igmp::Active::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}


}
}

