
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_igmp_oper_1.hpp"
#include "Cisco_IOS_XR_ipv4_igmp_oper_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_igmp_oper {

Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "update";
}

Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::~SourceAddress()
{
}

bool Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address"; yang_parent_name = "update";
}

Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::~GroupAddress()
{
}

bool Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Standby::DefaultContext::Ranges::Ranges()
{
    yang_name = "ranges"; yang_parent_name = "default-context";
}

Mld::Standby::DefaultContext::Ranges::~Ranges()
{
}

bool Mld::Standby::DefaultContext::Ranges::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Standby::DefaultContext::Ranges::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Standby::DefaultContext::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::Ranges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::DefaultContext::Ranges::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::DefaultContext::Ranges::set_value(const std::string & value_path, std::string value)
{
}

Mld::Standby::DefaultContext::Ranges::Range::Range()
    :
    group_address{YType::str, "group-address"},
    group_mask{YType::int32, "group-mask"},
    is_stale{YType::boolean, "is-stale"},
    prefix_length{YType::uint32, "prefix-length"},
    protocol{YType::enumeration, "protocol"}
    	,
    group_address_xr(std::make_shared<Mld::Standby::DefaultContext::Ranges::Range::GroupAddressXr>())
{
    group_address_xr->parent = this;

    yang_name = "range"; yang_parent_name = "ranges";
}

Mld::Standby::DefaultContext::Ranges::Range::~Range()
{
}

bool Mld::Standby::DefaultContext::Ranges::Range::has_data() const
{
    return group_address.is_set
	|| group_mask.is_set
	|| is_stale.is_set
	|| prefix_length.is_set
	|| protocol.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data());
}

bool Mld::Standby::DefaultContext::Ranges::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_mask.operation)
	|| is_set(is_stale.operation)
	|| is_set(prefix_length.operation)
	|| is_set(protocol.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Mld::Standby::DefaultContext::Ranges::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::Ranges::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/ranges/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_mask.is_set || is_set(group_mask.operation)) leaf_name_data.push_back(group_mask.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.operation)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::Ranges::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Mld::Standby::DefaultContext::Ranges::Range::GroupAddressXr>();
        }
        return group_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::Ranges::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    return children;
}

void Mld::Standby::DefaultContext::Ranges::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-mask")
    {
        group_mask = value;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Mld::Standby::DefaultContext::Ranges::Range::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "range";
}

Mld::Standby::DefaultContext::Ranges::Range::GroupAddressXr::~GroupAddressXr()
{
}

bool Mld::Standby::DefaultContext::Ranges::Range::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::Ranges::Range::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Standby::DefaultContext::Ranges::Range::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::Ranges::Range::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/ranges/range/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::Ranges::Range::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::Ranges::Range::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::Ranges::Range::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterfaces()
{
    yang_name = "ifrs-interfaces"; yang_parent_name = "default-context";
}

Mld::Standby::DefaultContext::IfrsInterfaces::~IfrsInterfaces()
{
}

bool Mld::Standby::DefaultContext::IfrsInterfaces::has_data() const
{
    for (std::size_t index=0; index<ifrs_interface.size(); index++)
    {
        if(ifrs_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Standby::DefaultContext::IfrsInterfaces::has_operation() const
{
    for (std::size_t index=0; index<ifrs_interface.size(); index++)
    {
        if(ifrs_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Standby::DefaultContext::IfrsInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interfaces";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::IfrsInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::IfrsInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface>();
        c->parent = this;
        ifrs_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::IfrsInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ifrs_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::DefaultContext::IfrsInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IfrsInterface()
    :
    interface_name{YType::str, "interface-name"},
    join_group_count{YType::uint32, "join-group-count"}
    	,
    igmp_interface_entry(std::make_shared<Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry>())
{
    igmp_interface_entry->parent = this;

    yang_name = "ifrs-interface"; yang_parent_name = "ifrs-interfaces";
}

Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::~IfrsInterface()
{
}

bool Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::has_data() const
{
    return interface_name.is_set
	|| join_group_count.is_set
	|| (igmp_interface_entry !=  nullptr && igmp_interface_entry->has_data());
}

bool Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(join_group_count.operation)
	|| (igmp_interface_entry !=  nullptr && igmp_interface_entry->has_operation());
}

std::string Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/ifrs-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (join_group_count.is_set || is_set(join_group_count.operation)) leaf_name_data.push_back(join_group_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igmp-interface-entry")
    {
        if(igmp_interface_entry == nullptr)
        {
            igmp_interface_entry = std::make_shared<Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry>();
        }
        return igmp_interface_entry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igmp_interface_entry != nullptr)
    {
        children["igmp-interface-entry"] = igmp_interface_entry;
    }

    return children;
}

void Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "join-group-count")
    {
        join_group_count = value;
    }
}

Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::IgmpInterfaceEntry()
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
    address(std::make_shared<Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address>())
	,querier_address(std::make_shared<Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "igmp-interface-entry"; yang_parent_name = "ifrs-interface";
}

Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::~IgmpInterfaceEntry()
{
}

bool Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::has_data() const
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

bool Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp-interface-entry";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_entity_path(Entity* ancestor) const
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

    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_children() const
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

void Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "igmp-interface-entry";
}

Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::~Address()
{
}

bool Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "igmp-interface-entry";
}

Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "igmp-interface-entry";
}

Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Standby::DefaultContext::TrafficCounters::TrafficCounters()
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

Mld::Standby::DefaultContext::TrafficCounters::~TrafficCounters()
{
}

bool Mld::Standby::DefaultContext::TrafficCounters::has_data() const
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

bool Mld::Standby::DefaultContext::TrafficCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(auxillary_data_length_errors.operation)
	|| is_set(bad_scope_errors.operation)
	|| is_set(checksum_errors.operation)
	|| is_set(elapsed_time.operation)
	|| is_set(format_errors.operation)
	|| is_set(get_packet_failure.operation)
	|| is_set(input_disabled_idb.operation)
	|| is_set(input_dvmrp.operation)
	|| is_set(input_leaves.operation)
	|| is_set(input_martian_address.operation)
	|| is_set(input_mtrace.operation)
	|| is_set(input_no_assigned_vrf_id.operation)
	|| is_set(input_no_idb.operation)
	|| is_set(input_no_platform_support_mtrace.operation)
	|| is_set(input_no_vrf_in_idb.operation)
	|| is_set(input_no_vrf_mtrace.operation)
	|| is_set(input_pim.operation)
	|| is_set(input_queries.operation)
	|| is_set(input_reports.operation)
	|| is_set(invalid_source_address_errors.operation)
	|| is_set(miscellaneous_errors.operation)
	|| is_set(no_socket_connection.operation)
	|| is_set(output_dvmrp.operation)
	|| is_set(output_leaves.operation)
	|| is_set(output_mtrace.operation)
	|| is_set(output_no_parent_interface_handle.operation)
	|| is_set(output_pim.operation)
	|| is_set(output_queries.operation)
	|| is_set(output_reports.operation)
	|| is_set(packet_manager_input_errors.operation)
	|| is_set(packet_manager_output_errors.operation)
	|| is_set(packets_in.operation)
	|| is_set(packets_out.operation)
	|| is_set(receive_socket_errors.operation)
	|| is_set(socket_errors.operation);
}

std::string Mld::Standby::DefaultContext::TrafficCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-counters";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::TrafficCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auxillary_data_length_errors.is_set || is_set(auxillary_data_length_errors.operation)) leaf_name_data.push_back(auxillary_data_length_errors.get_name_leafdata());
    if (bad_scope_errors.is_set || is_set(bad_scope_errors.operation)) leaf_name_data.push_back(bad_scope_errors.get_name_leafdata());
    if (checksum_errors.is_set || is_set(checksum_errors.operation)) leaf_name_data.push_back(checksum_errors.get_name_leafdata());
    if (elapsed_time.is_set || is_set(elapsed_time.operation)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (format_errors.is_set || is_set(format_errors.operation)) leaf_name_data.push_back(format_errors.get_name_leafdata());
    if (get_packet_failure.is_set || is_set(get_packet_failure.operation)) leaf_name_data.push_back(get_packet_failure.get_name_leafdata());
    if (input_disabled_idb.is_set || is_set(input_disabled_idb.operation)) leaf_name_data.push_back(input_disabled_idb.get_name_leafdata());
    if (input_dvmrp.is_set || is_set(input_dvmrp.operation)) leaf_name_data.push_back(input_dvmrp.get_name_leafdata());
    if (input_leaves.is_set || is_set(input_leaves.operation)) leaf_name_data.push_back(input_leaves.get_name_leafdata());
    if (input_martian_address.is_set || is_set(input_martian_address.operation)) leaf_name_data.push_back(input_martian_address.get_name_leafdata());
    if (input_mtrace.is_set || is_set(input_mtrace.operation)) leaf_name_data.push_back(input_mtrace.get_name_leafdata());
    if (input_no_assigned_vrf_id.is_set || is_set(input_no_assigned_vrf_id.operation)) leaf_name_data.push_back(input_no_assigned_vrf_id.get_name_leafdata());
    if (input_no_idb.is_set || is_set(input_no_idb.operation)) leaf_name_data.push_back(input_no_idb.get_name_leafdata());
    if (input_no_platform_support_mtrace.is_set || is_set(input_no_platform_support_mtrace.operation)) leaf_name_data.push_back(input_no_platform_support_mtrace.get_name_leafdata());
    if (input_no_vrf_in_idb.is_set || is_set(input_no_vrf_in_idb.operation)) leaf_name_data.push_back(input_no_vrf_in_idb.get_name_leafdata());
    if (input_no_vrf_mtrace.is_set || is_set(input_no_vrf_mtrace.operation)) leaf_name_data.push_back(input_no_vrf_mtrace.get_name_leafdata());
    if (input_pim.is_set || is_set(input_pim.operation)) leaf_name_data.push_back(input_pim.get_name_leafdata());
    if (input_queries.is_set || is_set(input_queries.operation)) leaf_name_data.push_back(input_queries.get_name_leafdata());
    if (input_reports.is_set || is_set(input_reports.operation)) leaf_name_data.push_back(input_reports.get_name_leafdata());
    if (invalid_source_address_errors.is_set || is_set(invalid_source_address_errors.operation)) leaf_name_data.push_back(invalid_source_address_errors.get_name_leafdata());
    if (miscellaneous_errors.is_set || is_set(miscellaneous_errors.operation)) leaf_name_data.push_back(miscellaneous_errors.get_name_leafdata());
    if (no_socket_connection.is_set || is_set(no_socket_connection.operation)) leaf_name_data.push_back(no_socket_connection.get_name_leafdata());
    if (output_dvmrp.is_set || is_set(output_dvmrp.operation)) leaf_name_data.push_back(output_dvmrp.get_name_leafdata());
    if (output_leaves.is_set || is_set(output_leaves.operation)) leaf_name_data.push_back(output_leaves.get_name_leafdata());
    if (output_mtrace.is_set || is_set(output_mtrace.operation)) leaf_name_data.push_back(output_mtrace.get_name_leafdata());
    if (output_no_parent_interface_handle.is_set || is_set(output_no_parent_interface_handle.operation)) leaf_name_data.push_back(output_no_parent_interface_handle.get_name_leafdata());
    if (output_pim.is_set || is_set(output_pim.operation)) leaf_name_data.push_back(output_pim.get_name_leafdata());
    if (output_queries.is_set || is_set(output_queries.operation)) leaf_name_data.push_back(output_queries.get_name_leafdata());
    if (output_reports.is_set || is_set(output_reports.operation)) leaf_name_data.push_back(output_reports.get_name_leafdata());
    if (packet_manager_input_errors.is_set || is_set(packet_manager_input_errors.operation)) leaf_name_data.push_back(packet_manager_input_errors.get_name_leafdata());
    if (packet_manager_output_errors.is_set || is_set(packet_manager_output_errors.operation)) leaf_name_data.push_back(packet_manager_output_errors.get_name_leafdata());
    if (packets_in.is_set || is_set(packets_in.operation)) leaf_name_data.push_back(packets_in.get_name_leafdata());
    if (packets_out.is_set || is_set(packets_out.operation)) leaf_name_data.push_back(packets_out.get_name_leafdata());
    if (receive_socket_errors.is_set || is_set(receive_socket_errors.operation)) leaf_name_data.push_back(receive_socket_errors.get_name_leafdata());
    if (socket_errors.is_set || is_set(socket_errors.operation)) leaf_name_data.push_back(socket_errors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::TrafficCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::TrafficCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::TrafficCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auxillary-data-length-errors")
    {
        auxillary_data_length_errors = value;
    }
    if(value_path == "bad-scope-errors")
    {
        bad_scope_errors = value;
    }
    if(value_path == "checksum-errors")
    {
        checksum_errors = value;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
    }
    if(value_path == "format-errors")
    {
        format_errors = value;
    }
    if(value_path == "get-packet-failure")
    {
        get_packet_failure = value;
    }
    if(value_path == "input-disabled-idb")
    {
        input_disabled_idb = value;
    }
    if(value_path == "input-dvmrp")
    {
        input_dvmrp = value;
    }
    if(value_path == "input-leaves")
    {
        input_leaves = value;
    }
    if(value_path == "input-martian-address")
    {
        input_martian_address = value;
    }
    if(value_path == "input-mtrace")
    {
        input_mtrace = value;
    }
    if(value_path == "input-no-assigned-vrf-id")
    {
        input_no_assigned_vrf_id = value;
    }
    if(value_path == "input-no-idb")
    {
        input_no_idb = value;
    }
    if(value_path == "input-no-platform-support-mtrace")
    {
        input_no_platform_support_mtrace = value;
    }
    if(value_path == "input-no-vrf-in-idb")
    {
        input_no_vrf_in_idb = value;
    }
    if(value_path == "input-no-vrf-mtrace")
    {
        input_no_vrf_mtrace = value;
    }
    if(value_path == "input-pim")
    {
        input_pim = value;
    }
    if(value_path == "input-queries")
    {
        input_queries = value;
    }
    if(value_path == "input-reports")
    {
        input_reports = value;
    }
    if(value_path == "invalid-source-address-errors")
    {
        invalid_source_address_errors = value;
    }
    if(value_path == "miscellaneous-errors")
    {
        miscellaneous_errors = value;
    }
    if(value_path == "no-socket-connection")
    {
        no_socket_connection = value;
    }
    if(value_path == "output-dvmrp")
    {
        output_dvmrp = value;
    }
    if(value_path == "output-leaves")
    {
        output_leaves = value;
    }
    if(value_path == "output-mtrace")
    {
        output_mtrace = value;
    }
    if(value_path == "output-no-parent-interface-handle")
    {
        output_no_parent_interface_handle = value;
    }
    if(value_path == "output-pim")
    {
        output_pim = value;
    }
    if(value_path == "output-queries")
    {
        output_queries = value;
    }
    if(value_path == "output-reports")
    {
        output_reports = value;
    }
    if(value_path == "packet-manager-input-errors")
    {
        packet_manager_input_errors = value;
    }
    if(value_path == "packet-manager-output-errors")
    {
        packet_manager_output_errors = value;
    }
    if(value_path == "packets-in")
    {
        packets_in = value;
    }
    if(value_path == "packets-out")
    {
        packets_out = value;
    }
    if(value_path == "receive-socket-errors")
    {
        receive_socket_errors = value;
    }
    if(value_path == "socket-errors")
    {
        socket_errors = value;
    }
}

Mld::Standby::DefaultContext::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "default-context";
}

Mld::Standby::DefaultContext::Groups::~Groups()
{
}

bool Mld::Standby::DefaultContext::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Standby::DefaultContext::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Standby::DefaultContext::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::DefaultContext::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::DefaultContext::Groups::set_value(const std::string & value_path, std::string value)
{
}

Mld::Standby::DefaultContext::Groups::Group::Group()
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
    group_address_xr(std::make_shared<Mld::Standby::DefaultContext::Groups::Group::GroupAddressXr>())
	,last_reporter(std::make_shared<Mld::Standby::DefaultContext::Groups::Group::LastReporter>())
	,source_address(std::make_shared<Mld::Standby::DefaultContext::Groups::Group::SourceAddress>())
{
    group_address_xr->parent = this;

    last_reporter->parent = this;

    source_address->parent = this;

    yang_name = "group"; yang_parent_name = "groups";
}

Mld::Standby::DefaultContext::Groups::Group::~Group()
{
}

bool Mld::Standby::DefaultContext::Groups::Group::has_data() const
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

bool Mld::Standby::DefaultContext::Groups::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(explicit_tracking_enabled.operation)
	|| is_set(group_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_added.operation)
	|| is_set(is_low_memory.operation)
	|| is_set(is_self_join.operation)
	|| is_set(is_suppressed.operation)
	|| is_set(older_host_version1_timer.operation)
	|| is_set(older_host_version2_timer.operation)
	|| is_set(router_filter_mode.operation)
	|| is_set(row_status.operation)
	|| is_set(uptime.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (last_reporter !=  nullptr && last_reporter->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Mld::Standby::DefaultContext::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (explicit_tracking_enabled.is_set || is_set(explicit_tracking_enabled.operation)) leaf_name_data.push_back(explicit_tracking_enabled.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.operation)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.operation)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (is_self_join.is_set || is_set(is_self_join.operation)) leaf_name_data.push_back(is_self_join.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.operation)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());
    if (older_host_version1_timer.is_set || is_set(older_host_version1_timer.operation)) leaf_name_data.push_back(older_host_version1_timer.get_name_leafdata());
    if (older_host_version2_timer.is_set || is_set(older_host_version2_timer.operation)) leaf_name_data.push_back(older_host_version2_timer.get_name_leafdata());
    if (router_filter_mode.is_set || is_set(router_filter_mode.operation)) leaf_name_data.push_back(router_filter_mode.get_name_leafdata());
    if (row_status.is_set || is_set(row_status.operation)) leaf_name_data.push_back(row_status.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Mld::Standby::DefaultContext::Groups::Group::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "last-reporter")
    {
        if(last_reporter == nullptr)
        {
            last_reporter = std::make_shared<Mld::Standby::DefaultContext::Groups::Group::LastReporter>();
        }
        return last_reporter;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Mld::Standby::DefaultContext::Groups::Group::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::Groups::Group::get_children() const
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

void Mld::Standby::DefaultContext::Groups::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-added")
    {
        is_added = value;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
    }
    if(value_path == "is-self-join")
    {
        is_self_join = value;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed = value;
    }
    if(value_path == "older-host-version1-timer")
    {
        older_host_version1_timer = value;
    }
    if(value_path == "older-host-version2-timer")
    {
        older_host_version2_timer = value;
    }
    if(value_path == "router-filter-mode")
    {
        router_filter_mode = value;
    }
    if(value_path == "row-status")
    {
        row_status = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Mld::Standby::DefaultContext::Groups::Group::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "group";
}

Mld::Standby::DefaultContext::Groups::Group::GroupAddressXr::~GroupAddressXr()
{
}

bool Mld::Standby::DefaultContext::Groups::Group::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::Groups::Group::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Standby::DefaultContext::Groups::Group::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::Groups::Group::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/groups/group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::Groups::Group::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::Groups::Group::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::Groups::Group::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Standby::DefaultContext::Groups::Group::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "last-reporter"; yang_parent_name = "group";
}

Mld::Standby::DefaultContext::Groups::Group::LastReporter::~LastReporter()
{
}

bool Mld::Standby::DefaultContext::Groups::Group::LastReporter::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::Groups::Group::LastReporter::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Standby::DefaultContext::Groups::Group::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::Groups::Group::LastReporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/groups/group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::Groups::Group::LastReporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::Groups::Group::LastReporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::Groups::Group::LastReporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Standby::DefaultContext::Groups::Group::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "group";
}

Mld::Standby::DefaultContext::Groups::Group::SourceAddress::~SourceAddress()
{
}

bool Mld::Standby::DefaultContext::Groups::Group::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::Groups::Group::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Standby::DefaultContext::Groups::Group::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::Groups::Group::SourceAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/groups/group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::Groups::Group::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::Groups::Group::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::Groups::Group::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Standby::DefaultContext::GroupSummary::GroupSummary()
    :
    group_count{YType::uint32, "group-count"},
    groutes{YType::uint32, "groutes"},
    is_low_memory{YType::boolean, "is-low-memory"},
    sg_routes{YType::uint32, "sg-routes"}
{
    yang_name = "group-summary"; yang_parent_name = "default-context";
}

Mld::Standby::DefaultContext::GroupSummary::~GroupSummary()
{
}

bool Mld::Standby::DefaultContext::GroupSummary::has_data() const
{
    return group_count.is_set
	|| groutes.is_set
	|| is_low_memory.is_set
	|| sg_routes.is_set;
}

bool Mld::Standby::DefaultContext::GroupSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(group_count.operation)
	|| is_set(groutes.operation)
	|| is_set(is_low_memory.operation)
	|| is_set(sg_routes.operation);
}

std::string Mld::Standby::DefaultContext::GroupSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-summary";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::GroupSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (groutes.is_set || is_set(groutes.operation)) leaf_name_data.push_back(groutes.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.operation)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (sg_routes.is_set || is_set(sg_routes.operation)) leaf_name_data.push_back(sg_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::GroupSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::GroupSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::GroupSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "groutes")
    {
        groutes = value;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
    }
    if(value_path == "sg-routes")
    {
        sg_routes = value;
    }
}

Mld::Standby::DefaultContext::IfrsInterfaceSummary::IfrsInterfaceSummary()
    :
    configuration_count{YType::uint32, "configuration-count"},
    interface_count{YType::uint32, "interface-count"}
{
    yang_name = "ifrs-interface-summary"; yang_parent_name = "default-context";
}

Mld::Standby::DefaultContext::IfrsInterfaceSummary::~IfrsInterfaceSummary()
{
}

bool Mld::Standby::DefaultContext::IfrsInterfaceSummary::has_data() const
{
    return configuration_count.is_set
	|| interface_count.is_set;
}

bool Mld::Standby::DefaultContext::IfrsInterfaceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(configuration_count.operation)
	|| is_set(interface_count.operation);
}

std::string Mld::Standby::DefaultContext::IfrsInterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface-summary";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::IfrsInterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configuration_count.is_set || is_set(configuration_count.operation)) leaf_name_data.push_back(configuration_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.operation)) leaf_name_data.push_back(interface_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::IfrsInterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::IfrsInterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::IfrsInterfaceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configuration-count")
    {
        configuration_count = value;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
    }
}

Mld::Standby::DefaultContext::GlobalInterfaceTable::GlobalInterfaceTable()
{
    yang_name = "global-interface-table"; yang_parent_name = "default-context";
}

Mld::Standby::DefaultContext::GlobalInterfaceTable::~GlobalInterfaceTable()
{
}

bool Mld::Standby::DefaultContext::GlobalInterfaceTable::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Standby::DefaultContext::GlobalInterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Standby::DefaultContext::GlobalInterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-interface-table";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::GlobalInterfaceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::GlobalInterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::GlobalInterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::DefaultContext::GlobalInterfaceTable::set_value(const std::string & value_path, std::string value)
{
}

Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::Interface()
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
    address(std::make_shared<Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address>())
	,querier_address(std::make_shared<Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface"; yang_parent_name = "global-interface-table";
}

Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::~Interface()
{
}

bool Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::has_data() const
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

bool Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/global-interface-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::get_children() const
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

void Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface";
}

Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::~Address()
{
}

bool Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface";
}

Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface";
}

Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetails()
{
    yang_name = "ssm-map-details"; yang_parent_name = "default-context";
}

Mld::Standby::DefaultContext::SsmMapDetails::~SsmMapDetails()
{
}

bool Mld::Standby::DefaultContext::SsmMapDetails::has_data() const
{
    for (std::size_t index=0; index<ssm_map_detail.size(); index++)
    {
        if(ssm_map_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Standby::DefaultContext::SsmMapDetails::has_operation() const
{
    for (std::size_t index=0; index<ssm_map_detail.size(); index++)
    {
        if(ssm_map_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Standby::DefaultContext::SsmMapDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map-details";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::SsmMapDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::SsmMapDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail>();
        c->parent = this;
        ssm_map_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::SsmMapDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ssm_map_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::DefaultContext::SsmMapDetails::set_value(const std::string & value_path, std::string value)
{
}

Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::SsmMapDetail()
    :
    elapsed_time{YType::uint64, "elapsed-time"},
    expiration_time{YType::uint32, "expiration-time"},
    group_address{YType::str, "group-address"},
    query_interval{YType::uint32, "query-interval"},
    response_pending{YType::boolean, "response-pending"},
    ssm_map_type{YType::enumeration, "ssm-map-type"}
    	,
    map_info(std::make_shared<Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo>())
{
    map_info->parent = this;

    yang_name = "ssm-map-detail"; yang_parent_name = "ssm-map-details";
}

Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::~SsmMapDetail()
{
}

bool Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::has_data() const
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

bool Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::has_operation() const
{
    for (std::size_t index=0; index<sources.size(); index++)
    {
        if(sources[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(elapsed_time.operation)
	|| is_set(expiration_time.operation)
	|| is_set(group_address.operation)
	|| is_set(query_interval.operation)
	|| is_set(response_pending.operation)
	|| is_set(ssm_map_type.operation)
	|| (map_info !=  nullptr && map_info->has_operation());
}

std::string Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map-detail";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/ssm-map-details/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (elapsed_time.is_set || is_set(elapsed_time.operation)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (response_pending.is_set || is_set(response_pending.operation)) leaf_name_data.push_back(response_pending.get_name_leafdata());
    if (ssm_map_type.is_set || is_set(ssm_map_type.operation)) leaf_name_data.push_back(ssm_map_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-info")
    {
        if(map_info == nullptr)
        {
            map_info = std::make_shared<Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo>();
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
        auto c = std::make_shared<Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources>();
        c->parent = this;
        sources.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::get_children() const
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

void Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
    }
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "response-pending")
    {
        response_pending = value;
    }
    if(value_path == "ssm-map-type")
    {
        ssm_map_type = value;
    }
}

Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::MapInfo()
    :
    map_type{YType::uint32, "map-type"},
    source_counts{YType::uint32, "source-counts"}
    	,
    group_address_xr(std::make_shared<Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr>())
{
    group_address_xr->parent = this;

    yang_name = "map-info"; yang_parent_name = "ssm-map-detail";
}

Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::~MapInfo()
{
}

bool Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::has_data() const
{
    return map_type.is_set
	|| source_counts.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data());
}

bool Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(map_type.operation)
	|| is_set(source_counts.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-info";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/ssm-map-details/ssm-map-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_type.is_set || is_set(map_type.operation)) leaf_name_data.push_back(map_type.get_name_leafdata());
    if (source_counts.is_set || is_set(source_counts.operation)) leaf_name_data.push_back(source_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr>();
        }
        return group_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    return children;
}

void Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-type")
    {
        map_type = value;
    }
    if(value_path == "source-counts")
    {
        source_counts = value;
    }
}

Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "map-info";
}

Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::~GroupAddressXr()
{
}

bool Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/ssm-map-details/ssm-map-detail/map-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::Sources()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "sources"; yang_parent_name = "ssm-map-detail";
}

Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::~Sources()
{
}

bool Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sources";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/ssm-map-details/ssm-map-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOffs()
{
    yang_name = "interface-state-offs"; yang_parent_name = "default-context";
}

Mld::Standby::DefaultContext::InterfaceStateOffs::~InterfaceStateOffs()
{
}

bool Mld::Standby::DefaultContext::InterfaceStateOffs::has_data() const
{
    for (std::size_t index=0; index<interface_state_off.size(); index++)
    {
        if(interface_state_off[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Standby::DefaultContext::InterfaceStateOffs::has_operation() const
{
    for (std::size_t index=0; index<interface_state_off.size(); index++)
    {
        if(interface_state_off[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Standby::DefaultContext::InterfaceStateOffs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-offs";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::InterfaceStateOffs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceStateOffs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff>();
        c->parent = this;
        interface_state_off.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceStateOffs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_state_off)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::DefaultContext::InterfaceStateOffs::set_value(const std::string & value_path, std::string value)
{
}

Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::InterfaceStateOff()
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
    address(std::make_shared<Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address>())
	,querier_address(std::make_shared<Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface-state-off"; yang_parent_name = "interface-state-offs";
}

Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::~InterfaceStateOff()
{
}

bool Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::has_data() const
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

bool Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-off" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/interface-state-offs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_children() const
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

void Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-state-off";
}

Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::~Address()
{
}

bool Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-state-off";
}

Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-state-off";
}

Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOns()
{
    yang_name = "interface-old-format-state-ons"; yang_parent_name = "default-context";
}

Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::~InterfaceOldFormatStateOns()
{
}

bool Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::has_data() const
{
    for (std::size_t index=0; index<interface_old_format_state_on.size(); index++)
    {
        if(interface_old_format_state_on[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::has_operation() const
{
    for (std::size_t index=0; index<interface_old_format_state_on.size(); index++)
    {
        if(interface_old_format_state_on[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-format-state-ons";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-old-format-state-on")
    {
        for(auto const & c : interface_old_format_state_on)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn>();
        c->parent = this;
        interface_old_format_state_on.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_old_format_state_on)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::set_value(const std::string & value_path, std::string value)
{
}

Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::InterfaceOldFormatStateOn()
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
    address(std::make_shared<Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address>())
	,querier_address(std::make_shared<Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface-old-format-state-on"; yang_parent_name = "interface-old-format-state-ons";
}

Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::~InterfaceOldFormatStateOn()
{
}

bool Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::has_data() const
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

bool Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-format-state-on" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/interface-old-format-state-ons/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_children() const
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

void Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-old-format-state-on";
}

Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::~Address()
{
}

bool Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-old-format-state-on";
}

Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-old-format-state-on";
}

Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Active()
    :
    default_context(std::make_shared<Mld::Active::DefaultContext>())
	,process(std::make_shared<Mld::Active::Process>())
	,vrfs(std::make_shared<Mld::Active::Vrfs>())
{
    default_context->parent = this;

    process->parent = this;

    vrfs->parent = this;

    yang_name = "active"; yang_parent_name = "mld";
}

Mld::Active::~Active()
{
}

bool Mld::Active::has_data() const
{
    return (default_context !=  nullptr && default_context->has_data())
	|| (process !=  nullptr && process->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Mld::Active::has_operation() const
{
    return is_set(operation)
	|| (default_context !=  nullptr && default_context->has_operation())
	|| (process !=  nullptr && process->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Mld::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

const EntityPath Mld::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-context")
    {
        if(default_context == nullptr)
        {
            default_context = std::make_shared<Mld::Active::DefaultContext>();
        }
        return default_context;
    }

    if(child_yang_name == "process")
    {
        if(process == nullptr)
        {
            process = std::make_shared<Mld::Active::Process>();
        }
        return process;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Mld::Active::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_context != nullptr)
    {
        children["default-context"] = default_context;
    }

    if(process != nullptr)
    {
        children["process"] = process;
    }

    if(vrfs != nullptr)
    {
        children["vrfs"] = vrfs;
    }

    return children;
}

void Mld::Active::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "active";
}

Mld::Active::Vrfs::~Vrfs()
{
}

bool Mld::Active::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    detail_groups(std::make_shared<Mld::Active::Vrfs::Vrf::DetailGroups>())
	,explicit_groups(std::make_shared<Mld::Active::Vrfs::Vrf::ExplicitGroups>())
	,global_interface_table(std::make_shared<Mld::Active::Vrfs::Vrf::GlobalInterfaceTable>())
	,group_summary(std::make_shared<Mld::Active::Vrfs::Vrf::GroupSummary>())
	,groups(std::make_shared<Mld::Active::Vrfs::Vrf::Groups>())
	,ifrs_interface_summary(std::make_shared<Mld::Active::Vrfs::Vrf::IfrsInterfaceSummary>())
	,ifrs_interfaces(std::make_shared<Mld::Active::Vrfs::Vrf::IfrsInterfaces>())
	,interface_old_format_state_ons(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns>())
	,interface_old_formats(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceOldFormats>())
	,interface_state_off_old_formats(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats>())
	,interface_state_offs(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOffs>())
	,interface_state_ons(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOns>())
	,interface_table(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceTable>())
	,interface_unicast_qos_adjusts(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts>())
	,non_active_groups(std::make_shared<Mld::Active::Vrfs::Vrf::NonActiveGroups>())
	,ranges(std::make_shared<Mld::Active::Vrfs::Vrf::Ranges>())
	,ssm_map_details(std::make_shared<Mld::Active::Vrfs::Vrf::SsmMapDetails>())
	,ssm_maps(std::make_shared<Mld::Active::Vrfs::Vrf::SsmMaps>())
	,summary(std::make_shared<Mld::Active::Vrfs::Vrf::Summary>())
	,traffic_counters(std::make_shared<Mld::Active::Vrfs::Vrf::TrafficCounters>())
{
    detail_groups->parent = this;

    explicit_groups->parent = this;

    global_interface_table->parent = this;

    group_summary->parent = this;

    groups->parent = this;

    ifrs_interface_summary->parent = this;

    ifrs_interfaces->parent = this;

    interface_old_format_state_ons->parent = this;

    interface_old_formats->parent = this;

    interface_state_off_old_formats->parent = this;

    interface_state_offs->parent = this;

    interface_state_ons->parent = this;

    interface_table->parent = this;

    interface_unicast_qos_adjusts->parent = this;

    non_active_groups->parent = this;

    ranges->parent = this;

    ssm_map_details->parent = this;

    ssm_maps->parent = this;

    summary->parent = this;

    traffic_counters->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Mld::Active::Vrfs::Vrf::~Vrf()
{
}

bool Mld::Active::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (detail_groups !=  nullptr && detail_groups->has_data())
	|| (explicit_groups !=  nullptr && explicit_groups->has_data())
	|| (global_interface_table !=  nullptr && global_interface_table->has_data())
	|| (group_summary !=  nullptr && group_summary->has_data())
	|| (groups !=  nullptr && groups->has_data())
	|| (ifrs_interface_summary !=  nullptr && ifrs_interface_summary->has_data())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_data())
	|| (interface_old_format_state_ons !=  nullptr && interface_old_format_state_ons->has_data())
	|| (interface_old_formats !=  nullptr && interface_old_formats->has_data())
	|| (interface_state_off_old_formats !=  nullptr && interface_state_off_old_formats->has_data())
	|| (interface_state_offs !=  nullptr && interface_state_offs->has_data())
	|| (interface_state_ons !=  nullptr && interface_state_ons->has_data())
	|| (interface_table !=  nullptr && interface_table->has_data())
	|| (interface_unicast_qos_adjusts !=  nullptr && interface_unicast_qos_adjusts->has_data())
	|| (non_active_groups !=  nullptr && non_active_groups->has_data())
	|| (ranges !=  nullptr && ranges->has_data())
	|| (ssm_map_details !=  nullptr && ssm_map_details->has_data())
	|| (ssm_maps !=  nullptr && ssm_maps->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (traffic_counters !=  nullptr && traffic_counters->has_data());
}

bool Mld::Active::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (detail_groups !=  nullptr && detail_groups->has_operation())
	|| (explicit_groups !=  nullptr && explicit_groups->has_operation())
	|| (global_interface_table !=  nullptr && global_interface_table->has_operation())
	|| (group_summary !=  nullptr && group_summary->has_operation())
	|| (groups !=  nullptr && groups->has_operation())
	|| (ifrs_interface_summary !=  nullptr && ifrs_interface_summary->has_operation())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_operation())
	|| (interface_old_format_state_ons !=  nullptr && interface_old_format_state_ons->has_operation())
	|| (interface_old_formats !=  nullptr && interface_old_formats->has_operation())
	|| (interface_state_off_old_formats !=  nullptr && interface_state_off_old_formats->has_operation())
	|| (interface_state_offs !=  nullptr && interface_state_offs->has_operation())
	|| (interface_state_ons !=  nullptr && interface_state_ons->has_operation())
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (interface_unicast_qos_adjusts !=  nullptr && interface_unicast_qos_adjusts->has_operation())
	|| (non_active_groups !=  nullptr && non_active_groups->has_operation())
	|| (ranges !=  nullptr && ranges->has_operation())
	|| (ssm_map_details !=  nullptr && ssm_map_details->has_operation())
	|| (ssm_maps !=  nullptr && ssm_maps->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (traffic_counters !=  nullptr && traffic_counters->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-groups")
    {
        if(detail_groups == nullptr)
        {
            detail_groups = std::make_shared<Mld::Active::Vrfs::Vrf::DetailGroups>();
        }
        return detail_groups;
    }

    if(child_yang_name == "explicit-groups")
    {
        if(explicit_groups == nullptr)
        {
            explicit_groups = std::make_shared<Mld::Active::Vrfs::Vrf::ExplicitGroups>();
        }
        return explicit_groups;
    }

    if(child_yang_name == "global-interface-table")
    {
        if(global_interface_table == nullptr)
        {
            global_interface_table = std::make_shared<Mld::Active::Vrfs::Vrf::GlobalInterfaceTable>();
        }
        return global_interface_table;
    }

    if(child_yang_name == "group-summary")
    {
        if(group_summary == nullptr)
        {
            group_summary = std::make_shared<Mld::Active::Vrfs::Vrf::GroupSummary>();
        }
        return group_summary;
    }

    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<Mld::Active::Vrfs::Vrf::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "ifrs-interface-summary")
    {
        if(ifrs_interface_summary == nullptr)
        {
            ifrs_interface_summary = std::make_shared<Mld::Active::Vrfs::Vrf::IfrsInterfaceSummary>();
        }
        return ifrs_interface_summary;
    }

    if(child_yang_name == "ifrs-interfaces")
    {
        if(ifrs_interfaces == nullptr)
        {
            ifrs_interfaces = std::make_shared<Mld::Active::Vrfs::Vrf::IfrsInterfaces>();
        }
        return ifrs_interfaces;
    }

    if(child_yang_name == "interface-old-format-state-ons")
    {
        if(interface_old_format_state_ons == nullptr)
        {
            interface_old_format_state_ons = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns>();
        }
        return interface_old_format_state_ons;
    }

    if(child_yang_name == "interface-old-formats")
    {
        if(interface_old_formats == nullptr)
        {
            interface_old_formats = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceOldFormats>();
        }
        return interface_old_formats;
    }

    if(child_yang_name == "interface-state-off-old-formats")
    {
        if(interface_state_off_old_formats == nullptr)
        {
            interface_state_off_old_formats = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats>();
        }
        return interface_state_off_old_formats;
    }

    if(child_yang_name == "interface-state-offs")
    {
        if(interface_state_offs == nullptr)
        {
            interface_state_offs = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOffs>();
        }
        return interface_state_offs;
    }

    if(child_yang_name == "interface-state-ons")
    {
        if(interface_state_ons == nullptr)
        {
            interface_state_ons = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOns>();
        }
        return interface_state_ons;
    }

    if(child_yang_name == "interface-table")
    {
        if(interface_table == nullptr)
        {
            interface_table = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceTable>();
        }
        return interface_table;
    }

    if(child_yang_name == "interface-unicast-qos-adjusts")
    {
        if(interface_unicast_qos_adjusts == nullptr)
        {
            interface_unicast_qos_adjusts = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts>();
        }
        return interface_unicast_qos_adjusts;
    }

    if(child_yang_name == "non-active-groups")
    {
        if(non_active_groups == nullptr)
        {
            non_active_groups = std::make_shared<Mld::Active::Vrfs::Vrf::NonActiveGroups>();
        }
        return non_active_groups;
    }

    if(child_yang_name == "ranges")
    {
        if(ranges == nullptr)
        {
            ranges = std::make_shared<Mld::Active::Vrfs::Vrf::Ranges>();
        }
        return ranges;
    }

    if(child_yang_name == "ssm-map-details")
    {
        if(ssm_map_details == nullptr)
        {
            ssm_map_details = std::make_shared<Mld::Active::Vrfs::Vrf::SsmMapDetails>();
        }
        return ssm_map_details;
    }

    if(child_yang_name == "ssm-maps")
    {
        if(ssm_maps == nullptr)
        {
            ssm_maps = std::make_shared<Mld::Active::Vrfs::Vrf::SsmMaps>();
        }
        return ssm_maps;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Mld::Active::Vrfs::Vrf::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "traffic-counters")
    {
        if(traffic_counters == nullptr)
        {
            traffic_counters = std::make_shared<Mld::Active::Vrfs::Vrf::TrafficCounters>();
        }
        return traffic_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail_groups != nullptr)
    {
        children["detail-groups"] = detail_groups;
    }

    if(explicit_groups != nullptr)
    {
        children["explicit-groups"] = explicit_groups;
    }

    if(global_interface_table != nullptr)
    {
        children["global-interface-table"] = global_interface_table;
    }

    if(group_summary != nullptr)
    {
        children["group-summary"] = group_summary;
    }

    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    if(ifrs_interface_summary != nullptr)
    {
        children["ifrs-interface-summary"] = ifrs_interface_summary;
    }

    if(ifrs_interfaces != nullptr)
    {
        children["ifrs-interfaces"] = ifrs_interfaces;
    }

    if(interface_old_format_state_ons != nullptr)
    {
        children["interface-old-format-state-ons"] = interface_old_format_state_ons;
    }

    if(interface_old_formats != nullptr)
    {
        children["interface-old-formats"] = interface_old_formats;
    }

    if(interface_state_off_old_formats != nullptr)
    {
        children["interface-state-off-old-formats"] = interface_state_off_old_formats;
    }

    if(interface_state_offs != nullptr)
    {
        children["interface-state-offs"] = interface_state_offs;
    }

    if(interface_state_ons != nullptr)
    {
        children["interface-state-ons"] = interface_state_ons;
    }

    if(interface_table != nullptr)
    {
        children["interface-table"] = interface_table;
    }

    if(interface_unicast_qos_adjusts != nullptr)
    {
        children["interface-unicast-qos-adjusts"] = interface_unicast_qos_adjusts;
    }

    if(non_active_groups != nullptr)
    {
        children["non-active-groups"] = non_active_groups;
    }

    if(ranges != nullptr)
    {
        children["ranges"] = ranges;
    }

    if(ssm_map_details != nullptr)
    {
        children["ssm-map-details"] = ssm_map_details;
    }

    if(ssm_maps != nullptr)
    {
        children["ssm-maps"] = ssm_maps;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(traffic_counters != nullptr)
    {
        children["traffic-counters"] = traffic_counters;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Mld::Active::Vrfs::Vrf::Summary::Summary()
    :
    disabled_interface_count{YType::uint32, "disabled-interface-count"},
    enabled_interface_count{YType::uint32, "enabled-interface-count"},
    group_count{YType::uint32, "group-count"},
    group_limit{YType::uint32, "group-limit"},
    is_disabled{YType::boolean, "is-disabled"},
    node_low_memory{YType::boolean, "node-low-memory"},
    robustness{YType::uint32, "robustness"},
    supported_interfaces{YType::uint32, "supported-interfaces"},
    tunnel_mte_config_count{YType::uint32, "tunnel-mte-config-count"},
    unsupported_interfaces{YType::uint32, "unsupported-interfaces"}
{
    yang_name = "summary"; yang_parent_name = "vrf";
}

Mld::Active::Vrfs::Vrf::Summary::~Summary()
{
}

bool Mld::Active::Vrfs::Vrf::Summary::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return disabled_interface_count.is_set
	|| enabled_interface_count.is_set
	|| group_count.is_set
	|| group_limit.is_set
	|| is_disabled.is_set
	|| node_low_memory.is_set
	|| robustness.is_set
	|| supported_interfaces.is_set
	|| tunnel_mte_config_count.is_set
	|| unsupported_interfaces.is_set;
}

bool Mld::Active::Vrfs::Vrf::Summary::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(disabled_interface_count.operation)
	|| is_set(enabled_interface_count.operation)
	|| is_set(group_count.operation)
	|| is_set(group_limit.operation)
	|| is_set(is_disabled.operation)
	|| is_set(node_low_memory.operation)
	|| is_set(robustness.operation)
	|| is_set(supported_interfaces.operation)
	|| is_set(tunnel_mte_config_count.operation)
	|| is_set(unsupported_interfaces.operation);
}

std::string Mld::Active::Vrfs::Vrf::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled_interface_count.is_set || is_set(disabled_interface_count.operation)) leaf_name_data.push_back(disabled_interface_count.get_name_leafdata());
    if (enabled_interface_count.is_set || is_set(enabled_interface_count.operation)) leaf_name_data.push_back(enabled_interface_count.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (group_limit.is_set || is_set(group_limit.operation)) leaf_name_data.push_back(group_limit.get_name_leafdata());
    if (is_disabled.is_set || is_set(is_disabled.operation)) leaf_name_data.push_back(is_disabled.get_name_leafdata());
    if (node_low_memory.is_set || is_set(node_low_memory.operation)) leaf_name_data.push_back(node_low_memory.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (supported_interfaces.is_set || is_set(supported_interfaces.operation)) leaf_name_data.push_back(supported_interfaces.get_name_leafdata());
    if (tunnel_mte_config_count.is_set || is_set(tunnel_mte_config_count.operation)) leaf_name_data.push_back(tunnel_mte_config_count.get_name_leafdata());
    if (unsupported_interfaces.is_set || is_set(unsupported_interfaces.operation)) leaf_name_data.push_back(unsupported_interfaces.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf::Summary::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disabled-interface-count")
    {
        disabled_interface_count = value;
    }
    if(value_path == "enabled-interface-count")
    {
        enabled_interface_count = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "group-limit")
    {
        group_limit = value;
    }
    if(value_path == "is-disabled")
    {
        is_disabled = value;
    }
    if(value_path == "node-low-memory")
    {
        node_low_memory = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "supported-interfaces")
    {
        supported_interfaces = value;
    }
    if(value_path == "tunnel-mte-config-count")
    {
        tunnel_mte_config_count = value;
    }
    if(value_path == "unsupported-interfaces")
    {
        unsupported_interfaces = value;
    }
}

Mld::Active::Vrfs::Vrf::Summary::Interface::Interface()
    :
    group_count{YType::uint32, "group-count"},
    group_limit{YType::uint32, "group-limit"},
    interface_name{YType::str, "interface-name"},
    on_off{YType::boolean, "on-off"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"}
{
    yang_name = "interface"; yang_parent_name = "summary";
}

Mld::Active::Vrfs::Vrf::Summary::Interface::~Interface()
{
}

bool Mld::Active::Vrfs::Vrf::Summary::Interface::has_data() const
{
    return group_count.is_set
	|| group_limit.is_set
	|| interface_name.is_set
	|| on_off.is_set
	|| parent_ifhandle.is_set
	|| router_uptime_in_seconds.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set;
}

bool Mld::Active::Vrfs::Vrf::Summary::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(group_count.operation)
	|| is_set(group_limit.operation)
	|| is_set(interface_name.operation)
	|| is_set(on_off.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation);
}

std::string Mld::Active::Vrfs::Vrf::Summary::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::Summary::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (group_limit.is_set || is_set(group_limit.operation)) leaf_name_data.push_back(group_limit.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (on_off.is_set || is_set(on_off.operation)) leaf_name_data.push_back(on_off.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::Summary::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::Summary::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::Summary::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "group-limit")
    {
        group_limit = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "on-off")
    {
        on_off = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOns()
{
    yang_name = "interface-state-ons"; yang_parent_name = "vrf";
}

Mld::Active::Vrfs::Vrf::InterfaceStateOns::~InterfaceStateOns()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOns::has_data() const
{
    for (std::size_t index=0; index<interface_state_on.size(); index++)
    {
        if(interface_state_on[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOns::has_operation() const
{
    for (std::size_t index=0; index<interface_state_on.size(); index++)
    {
        if(interface_state_on[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceStateOns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-ons";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceStateOns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStateOns' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceStateOns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-state-on")
    {
        for(auto const & c : interface_state_on)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn>();
        c->parent = this;
        interface_state_on.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceStateOns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_state_on)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceStateOns::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::InterfaceStateOn()
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
    address(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address>())
	,querier_address(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface-state-on"; yang_parent_name = "interface-state-ons";
}

Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::~InterfaceStateOn()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::has_data() const
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

bool Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-on" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStateOn' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::get_children() const
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

void Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-state-on";
}

Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::~Address()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-state-on";
}

Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-state-on";
}

Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroups()
{
    yang_name = "detail-groups"; yang_parent_name = "vrf";
}

Mld::Active::Vrfs::Vrf::DetailGroups::~DetailGroups()
{
}

bool Mld::Active::Vrfs::Vrf::DetailGroups::has_data() const
{
    for (std::size_t index=0; index<detail_group.size(); index++)
    {
        if(detail_group[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::Vrfs::Vrf::DetailGroups::has_operation() const
{
    for (std::size_t index=0; index<detail_group.size(); index++)
    {
        if(detail_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::Vrfs::Vrf::DetailGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-groups";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::DetailGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DetailGroups' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::DetailGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-group")
    {
        for(auto const & c : detail_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup>();
        c->parent = this;
        detail_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::DetailGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : detail_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::DetailGroups::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::DetailGroup()
    :
    group_address{YType::str, "group-address"},
    interface_name{YType::str, "interface-name"},
    is_host_exclude_mode{YType::boolean, "is-host-exclude-mode"},
    is_router_exclude_mode{YType::boolean, "is-router-exclude-mode"},
    source_address{YType::str, "source-address"}
    	,
    group_info(std::make_shared<Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo>())
{
    group_info->parent = this;

    yang_name = "detail-group"; yang_parent_name = "detail-groups";
}

Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::~DetailGroup()
{
}

bool Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::has_data() const
{
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_data())
            return true;
    }
    return group_address.is_set
	|| interface_name.is_set
	|| is_host_exclude_mode.is_set
	|| is_router_exclude_mode.is_set
	|| source_address.is_set
	|| (group_info !=  nullptr && group_info->has_data());
}

bool Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::has_operation() const
{
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(is_host_exclude_mode.operation)
	|| is_set(is_router_exclude_mode.operation)
	|| is_set(source_address.operation)
	|| (group_info !=  nullptr && group_info->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-group";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DetailGroup' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_host_exclude_mode.is_set || is_set(is_host_exclude_mode.operation)) leaf_name_data.push_back(is_host_exclude_mode.get_name_leafdata());
    if (is_router_exclude_mode.is_set || is_set(is_router_exclude_mode.operation)) leaf_name_data.push_back(is_router_exclude_mode.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-info")
    {
        if(group_info == nullptr)
        {
            group_info = std::make_shared<Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo>();
        }
        return group_info;
    }

    if(child_yang_name == "source")
    {
        for(auto const & c : source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source>();
        c->parent = this;
        source.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_info != nullptr)
    {
        children["group-info"] = group_info;
    }

    for (auto const & c : source)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-host-exclude-mode")
    {
        is_host_exclude_mode = value;
    }
    if(value_path == "is-router-exclude-mode")
    {
        is_router_exclude_mode = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
}

Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupInfo()
    :
    expiration_time{YType::int32, "expiration-time"},
    explicit_tracking_enabled{YType::boolean, "explicit-tracking-enabled"},
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
    group_address_xr(std::make_shared<Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr>())
	,last_reporter(std::make_shared<Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter>())
	,source_address(std::make_shared<Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress>())
{
    group_address_xr->parent = this;

    last_reporter->parent = this;

    source_address->parent = this;

    yang_name = "group-info"; yang_parent_name = "detail-group";
}

Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::~GroupInfo()
{
}

bool Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::has_data() const
{
    return expiration_time.is_set
	|| explicit_tracking_enabled.is_set
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

bool Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(explicit_tracking_enabled.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_added.operation)
	|| is_set(is_low_memory.operation)
	|| is_set(is_self_join.operation)
	|| is_set(is_suppressed.operation)
	|| is_set(older_host_version1_timer.operation)
	|| is_set(older_host_version2_timer.operation)
	|| is_set(router_filter_mode.operation)
	|| is_set(row_status.operation)
	|| is_set(uptime.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (last_reporter !=  nullptr && last_reporter->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-info";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupInfo' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (explicit_tracking_enabled.is_set || is_set(explicit_tracking_enabled.operation)) leaf_name_data.push_back(explicit_tracking_enabled.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.operation)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.operation)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (is_self_join.is_set || is_set(is_self_join.operation)) leaf_name_data.push_back(is_self_join.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.operation)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());
    if (older_host_version1_timer.is_set || is_set(older_host_version1_timer.operation)) leaf_name_data.push_back(older_host_version1_timer.get_name_leafdata());
    if (older_host_version2_timer.is_set || is_set(older_host_version2_timer.operation)) leaf_name_data.push_back(older_host_version2_timer.get_name_leafdata());
    if (router_filter_mode.is_set || is_set(router_filter_mode.operation)) leaf_name_data.push_back(router_filter_mode.get_name_leafdata());
    if (row_status.is_set || is_set(row_status.operation)) leaf_name_data.push_back(row_status.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "last-reporter")
    {
        if(last_reporter == nullptr)
        {
            last_reporter = std::make_shared<Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter>();
        }
        return last_reporter;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::get_children() const
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

void Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-added")
    {
        is_added = value;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
    }
    if(value_path == "is-self-join")
    {
        is_self_join = value;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed = value;
    }
    if(value_path == "older-host-version1-timer")
    {
        older_host_version1_timer = value;
    }
    if(value_path == "older-host-version2-timer")
    {
        older_host_version2_timer = value;
    }
    if(value_path == "router-filter-mode")
    {
        router_filter_mode = value;
    }
    if(value_path == "row-status")
    {
        row_status = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "group-info";
}

Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::~GroupAddressXr()
{
}

bool Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressXr' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "last-reporter"; yang_parent_name = "group-info";
}

Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::~LastReporter()
{
}

bool Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastReporter' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "group-info";
}

Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::~SourceAddress()
{
}

bool Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::Source()
    :
    expiration_time{YType::int32, "expiration-time"},
    flags{YType::int32, "flags"},
    is_added{YType::boolean, "is-added"},
    is_forward{YType::boolean, "is-forward"},
    is_local{YType::boolean, "is-local"},
    is_remote{YType::boolean, "is-remote"},
    is_we_report{YType::boolean, "is-we-report"},
    uptime{YType::uint64, "uptime"}
    	,
    source_address(std::make_shared<Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress>())
{
    source_address->parent = this;

    yang_name = "source"; yang_parent_name = "detail-group";
}

Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::~Source()
{
}

bool Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::has_data() const
{
    return expiration_time.is_set
	|| flags.is_set
	|| is_added.is_set
	|| is_forward.is_set
	|| is_local.is_set
	|| is_remote.is_set
	|| is_we_report.is_set
	|| uptime.is_set
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(flags.operation)
	|| is_set(is_added.operation)
	|| is_set(is_forward.operation)
	|| is_set(is_local.operation)
	|| is_set(is_remote.operation)
	|| is_set(is_we_report.operation)
	|| is_set(uptime.operation)
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.operation)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_forward.is_set || is_set(is_forward.operation)) leaf_name_data.push_back(is_forward.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.operation)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (is_remote.is_set || is_set(is_remote.operation)) leaf_name_data.push_back(is_remote.get_name_leafdata());
    if (is_we_report.is_set || is_set(is_we_report.operation)) leaf_name_data.push_back(is_we_report.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "is-added")
    {
        is_added = value;
    }
    if(value_path == "is-forward")
    {
        is_forward = value;
    }
    if(value_path == "is-local")
    {
        is_local = value;
    }
    if(value_path == "is-remote")
    {
        is_remote = value;
    }
    if(value_path == "is-we-report")
    {
        is_we_report = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "source";
}

Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::~SourceAddress()
{
}

bool Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups()
{
    yang_name = "non-active-groups"; yang_parent_name = "vrf";
}

Mld::Active::Vrfs::Vrf::NonActiveGroups::~NonActiveGroups()
{
}

bool Mld::Active::Vrfs::Vrf::NonActiveGroups::has_data() const
{
    for (std::size_t index=0; index<non_active_groups.size(); index++)
    {
        if(non_active_groups[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::Vrfs::Vrf::NonActiveGroups::has_operation() const
{
    for (std::size_t index=0; index<non_active_groups.size(); index++)
    {
        if(non_active_groups[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::Vrfs::Vrf::NonActiveGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-active-groups";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::NonActiveGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonActiveGroups' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::NonActiveGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "non-active-groups")
    {
        for(auto const & c : non_active_groups)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_>();
        c->parent = this;
        non_active_groups.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::NonActiveGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : non_active_groups)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::NonActiveGroups::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::NonActiveGroups_()
    :
    interface{YType::str, "interface"},
    reason_for_non_activity{YType::str, "reason-for-non-activity"}
    	,
    group_address(std::make_shared<Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress>())
	,source_address(std::make_shared<Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress>())
{
    group_address->parent = this;

    source_address->parent = this;

    yang_name = "non-active-groups"; yang_parent_name = "non-active-groups";
}

Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::~NonActiveGroups_()
{
}

bool Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::has_data() const
{
    return interface.is_set
	|| reason_for_non_activity.is_set
	|| (group_address !=  nullptr && group_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(reason_for_non_activity.operation)
	|| (group_address !=  nullptr && group_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-active-groups";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NonActiveGroups_' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (reason_for_non_activity.is_set || is_set(reason_for_non_activity.operation)) leaf_name_data.push_back(reason_for_non_activity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address")
    {
        if(group_address == nullptr)
        {
            group_address = std::make_shared<Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress>();
        }
        return group_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address != nullptr)
    {
        children["group-address"] = group_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "reason-for-non-activity")
    {
        reason_for_non_activity = value;
    }
}

Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address"; yang_parent_name = "non-active-groups";
}

Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::~GroupAddress()
{
}

bool Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "non-active-groups";
}

Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::~SourceAddress()
{
}

bool Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::SsmMaps::SsmMaps()
{
    yang_name = "ssm-maps"; yang_parent_name = "vrf";
}

Mld::Active::Vrfs::Vrf::SsmMaps::~SsmMaps()
{
}

bool Mld::Active::Vrfs::Vrf::SsmMaps::has_data() const
{
    for (std::size_t index=0; index<ssm_map.size(); index++)
    {
        if(ssm_map[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::Vrfs::Vrf::SsmMaps::has_operation() const
{
    for (std::size_t index=0; index<ssm_map.size(); index++)
    {
        if(ssm_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::Vrfs::Vrf::SsmMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-maps";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::SsmMaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SsmMaps' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::SsmMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssm-map")
    {
        for(auto const & c : ssm_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap>();
        c->parent = this;
        ssm_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::SsmMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ssm_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::SsmMaps::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::SsmMap()
    :
    group_address{YType::str, "group-address"},
    map_type{YType::uint32, "map-type"},
    source_counts{YType::uint32, "source-counts"},
    ssm_map_type{YType::enumeration, "ssm-map-type"}
    	,
    group_address_xr(std::make_shared<Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr>())
{
    group_address_xr->parent = this;

    yang_name = "ssm-map"; yang_parent_name = "ssm-maps";
}

Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::~SsmMap()
{
}

bool Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::has_data() const
{
    return group_address.is_set
	|| map_type.is_set
	|| source_counts.is_set
	|| ssm_map_type.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data());
}

bool Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(map_type.operation)
	|| is_set(source_counts.operation)
	|| is_set(ssm_map_type.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SsmMap' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (map_type.is_set || is_set(map_type.operation)) leaf_name_data.push_back(map_type.get_name_leafdata());
    if (source_counts.is_set || is_set(source_counts.operation)) leaf_name_data.push_back(source_counts.get_name_leafdata());
    if (ssm_map_type.is_set || is_set(ssm_map_type.operation)) leaf_name_data.push_back(ssm_map_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr>();
        }
        return group_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "map-type")
    {
        map_type = value;
    }
    if(value_path == "source-counts")
    {
        source_counts = value;
    }
    if(value_path == "ssm-map-type")
    {
        ssm_map_type = value;
    }
}

Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "ssm-map";
}

Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::~GroupAddressXr()
{
}

bool Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressXr' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroups()
{
    yang_name = "explicit-groups"; yang_parent_name = "vrf";
}

Mld::Active::Vrfs::Vrf::ExplicitGroups::~ExplicitGroups()
{
}

bool Mld::Active::Vrfs::Vrf::ExplicitGroups::has_data() const
{
    for (std::size_t index=0; index<explicit_group.size(); index++)
    {
        if(explicit_group[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::Vrfs::Vrf::ExplicitGroups::has_operation() const
{
    for (std::size_t index=0; index<explicit_group.size(); index++)
    {
        if(explicit_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::Vrfs::Vrf::ExplicitGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-groups";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::ExplicitGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExplicitGroups' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::ExplicitGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "explicit-group")
    {
        for(auto const & c : explicit_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup>();
        c->parent = this;
        explicit_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::ExplicitGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : explicit_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::ExplicitGroups::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::ExplicitGroup()
    :
    exclude_hosts{YType::uint32, "exclude-hosts"},
    group_address{YType::str, "group-address"},
    include_hosts{YType::uint32, "include-hosts"},
    interface_name{YType::str, "interface-name"},
    source_address{YType::str, "source-address"}
    	,
    group_info(std::make_shared<Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo>())
{
    group_info->parent = this;

    yang_name = "explicit-group"; yang_parent_name = "explicit-groups";
}

Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::~ExplicitGroup()
{
}

bool Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return exclude_hosts.is_set
	|| group_address.is_set
	|| include_hosts.is_set
	|| interface_name.is_set
	|| source_address.is_set
	|| (group_info !=  nullptr && group_info->has_data());
}

bool Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(exclude_hosts.operation)
	|| is_set(group_address.operation)
	|| is_set(include_hosts.operation)
	|| is_set(interface_name.operation)
	|| is_set(source_address.operation)
	|| (group_info !=  nullptr && group_info->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-group";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExplicitGroup' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclude_hosts.is_set || is_set(exclude_hosts.operation)) leaf_name_data.push_back(exclude_hosts.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (include_hosts.is_set || is_set(include_hosts.operation)) leaf_name_data.push_back(include_hosts.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-info")
    {
        if(group_info == nullptr)
        {
            group_info = std::make_shared<Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo>();
        }
        return group_info;
    }

    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_info != nullptr)
    {
        children["group-info"] = group_info;
    }

    for (auto const & c : host)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "exclude-hosts")
    {
        exclude_hosts = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "include-hosts")
    {
        include_hosts = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
}

Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupInfo()
    :
    expiration_time{YType::int32, "expiration-time"},
    explicit_tracking_enabled{YType::boolean, "explicit-tracking-enabled"},
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
    group_address_xr(std::make_shared<Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr>())
	,last_reporter(std::make_shared<Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter>())
	,source_address(std::make_shared<Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress>())
{
    group_address_xr->parent = this;

    last_reporter->parent = this;

    source_address->parent = this;

    yang_name = "group-info"; yang_parent_name = "explicit-group";
}

Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::~GroupInfo()
{
}

bool Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::has_data() const
{
    return expiration_time.is_set
	|| explicit_tracking_enabled.is_set
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

bool Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(explicit_tracking_enabled.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_added.operation)
	|| is_set(is_low_memory.operation)
	|| is_set(is_self_join.operation)
	|| is_set(is_suppressed.operation)
	|| is_set(older_host_version1_timer.operation)
	|| is_set(older_host_version2_timer.operation)
	|| is_set(router_filter_mode.operation)
	|| is_set(row_status.operation)
	|| is_set(uptime.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (last_reporter !=  nullptr && last_reporter->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-info";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupInfo' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (explicit_tracking_enabled.is_set || is_set(explicit_tracking_enabled.operation)) leaf_name_data.push_back(explicit_tracking_enabled.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.operation)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.operation)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (is_self_join.is_set || is_set(is_self_join.operation)) leaf_name_data.push_back(is_self_join.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.operation)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());
    if (older_host_version1_timer.is_set || is_set(older_host_version1_timer.operation)) leaf_name_data.push_back(older_host_version1_timer.get_name_leafdata());
    if (older_host_version2_timer.is_set || is_set(older_host_version2_timer.operation)) leaf_name_data.push_back(older_host_version2_timer.get_name_leafdata());
    if (router_filter_mode.is_set || is_set(router_filter_mode.operation)) leaf_name_data.push_back(router_filter_mode.get_name_leafdata());
    if (row_status.is_set || is_set(row_status.operation)) leaf_name_data.push_back(row_status.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "last-reporter")
    {
        if(last_reporter == nullptr)
        {
            last_reporter = std::make_shared<Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter>();
        }
        return last_reporter;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::get_children() const
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

void Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-added")
    {
        is_added = value;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
    }
    if(value_path == "is-self-join")
    {
        is_self_join = value;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed = value;
    }
    if(value_path == "older-host-version1-timer")
    {
        older_host_version1_timer = value;
    }
    if(value_path == "older-host-version2-timer")
    {
        older_host_version2_timer = value;
    }
    if(value_path == "router-filter-mode")
    {
        router_filter_mode = value;
    }
    if(value_path == "row-status")
    {
        row_status = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "group-info";
}

Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::~GroupAddressXr()
{
}

bool Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressXr' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "last-reporter"; yang_parent_name = "group-info";
}

Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::~LastReporter()
{
}

bool Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastReporter' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "group-info";
}

Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::~SourceAddress()
{
}

bool Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Host()
    :
    expiration_time{YType::uint32, "expiration-time"},
    is_exclude{YType::boolean, "is-exclude"},
    source_count{YType::uint32, "source-count"},
    uptime{YType::uint32, "uptime"}
    	,
    address(std::make_shared<Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address>())
{
    address->parent = this;

    yang_name = "host"; yang_parent_name = "explicit-group";
}

Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::~Host()
{
}

bool Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::has_data() const
{
    for (std::size_t index=0; index<source_address.size(); index++)
    {
        if(source_address[index]->has_data())
            return true;
    }
    return expiration_time.is_set
	|| is_exclude.is_set
	|| source_count.is_set
	|| uptime.is_set
	|| (address !=  nullptr && address->has_data());
}

bool Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::has_operation() const
{
    for (std::size_t index=0; index<source_address.size(); index++)
    {
        if(source_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(is_exclude.operation)
	|| is_set(source_count.operation)
	|| is_set(uptime.operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (is_exclude.is_set || is_set(is_exclude.operation)) leaf_name_data.push_back(is_exclude.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.operation)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address>();
        }
        return address;
    }

    if(child_yang_name == "source-address")
    {
        for(auto const & c : source_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress>();
        c->parent = this;
        source_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    for (auto const & c : source_address)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "is-exclude")
    {
        is_exclude = value;
    }
    if(value_path == "source-count")
    {
        source_count = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "host";
}

Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::~Address()
{
}

bool Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "host";
}

Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::~SourceAddress()
{
}

bool Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceTable::InterfaceTable()
{
    yang_name = "interface-table"; yang_parent_name = "vrf";
}

Mld::Active::Vrfs::Vrf::InterfaceTable::~InterfaceTable()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceTable::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::Vrfs::Vrf::InterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceTable' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceTable::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceTable::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::Interface()
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
    address(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::Address>())
	,querier_address(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface"; yang_parent_name = "interface-table";
}

Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::~Interface()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::has_data() const
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

bool Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::get_children() const
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

void Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface";
}

Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::Address::~Address()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::Address::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface";
}

Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface";
}

Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormats()
{
    yang_name = "interface-old-formats"; yang_parent_name = "vrf";
}

Mld::Active::Vrfs::Vrf::InterfaceOldFormats::~InterfaceOldFormats()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceOldFormats::has_data() const
{
    for (std::size_t index=0; index<interface_old_format.size(); index++)
    {
        if(interface_old_format[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::Vrfs::Vrf::InterfaceOldFormats::has_operation() const
{
    for (std::size_t index=0; index<interface_old_format.size(); index++)
    {
        if(interface_old_format[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceOldFormats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-formats";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceOldFormats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceOldFormats' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceOldFormats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat>();
        c->parent = this;
        interface_old_format.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceOldFormats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_old_format)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceOldFormats::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::InterfaceOldFormat()
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
    address(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address>())
	,querier_address(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface-old-format"; yang_parent_name = "interface-old-formats";
}

Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::~InterfaceOldFormat()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::has_data() const
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

bool Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-format" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceOldFormat' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::get_children() const
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

void Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-old-format";
}

Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address::~Address()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-old-format";
}

Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-old-format";
}

Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceOldFormats::InterfaceOldFormat::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormats()
{
    yang_name = "interface-state-off-old-formats"; yang_parent_name = "vrf";
}

Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::~InterfaceStateOffOldFormats()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::has_data() const
{
    for (std::size_t index=0; index<interface_state_off_old_format.size(); index++)
    {
        if(interface_state_off_old_format[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::has_operation() const
{
    for (std::size_t index=0; index<interface_state_off_old_format.size(); index++)
    {
        if(interface_state_off_old_format[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-off-old-formats";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStateOffOldFormats' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-state-off-old-format")
    {
        for(auto const & c : interface_state_off_old_format)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat>();
        c->parent = this;
        interface_state_off_old_format.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_state_off_old_format)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::InterfaceStateOffOldFormat()
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
    address(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address>())
	,querier_address(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface-state-off-old-format"; yang_parent_name = "interface-state-off-old-formats";
}

Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::~InterfaceStateOffOldFormat()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::has_data() const
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

bool Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-off-old-format" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStateOffOldFormat' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::get_children() const
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

void Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-state-off-old-format";
}

Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::~Address()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-state-off-old-format";
}

Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-state-off-old-format";
}

Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceStateOffOldFormats::InterfaceStateOffOldFormat::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjusts()
{
    yang_name = "interface-unicast-qos-adjusts"; yang_parent_name = "vrf";
}

Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::~InterfaceUnicastQosAdjusts()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::has_data() const
{
    for (std::size_t index=0; index<interface_unicast_qos_adjust.size(); index++)
    {
        if(interface_unicast_qos_adjust[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::has_operation() const
{
    for (std::size_t index=0; index<interface_unicast_qos_adjust.size(); index++)
    {
        if(interface_unicast_qos_adjust[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-unicast-qos-adjusts";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceUnicastQosAdjusts' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-unicast-qos-adjust")
    {
        for(auto const & c : interface_unicast_qos_adjust)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust>();
        c->parent = this;
        interface_unicast_qos_adjust.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_unicast_qos_adjust)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::InterfaceUnicastQosAdjust()
    :
    interface_name{YType::str, "interface-name"},
    is_virtual_access{YType::boolean, "is-virtual-access"},
    rate{YType::uint32, "rate"},
    rate_decrements{YType::uint32, "rate-decrements"},
    rate_increments{YType::uint32, "rate-increments"}
{
    yang_name = "interface-unicast-qos-adjust"; yang_parent_name = "interface-unicast-qos-adjusts";
}

Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::~InterfaceUnicastQosAdjust()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::has_data() const
{
    for (std::size_t index=0; index<update.size(); index++)
    {
        if(update[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| is_virtual_access.is_set
	|| rate.is_set
	|| rate_decrements.is_set
	|| rate_increments.is_set;
}

bool Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::has_operation() const
{
    for (std::size_t index=0; index<update.size(); index++)
    {
        if(update[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_virtual_access.operation)
	|| is_set(rate.operation)
	|| is_set(rate_decrements.operation)
	|| is_set(rate_increments.operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-unicast-qos-adjust" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceUnicastQosAdjust' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_virtual_access.is_set || is_set(is_virtual_access.operation)) leaf_name_data.push_back(is_virtual_access.get_name_leafdata());
    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (rate_decrements.is_set || is_set(rate_decrements.operation)) leaf_name_data.push_back(rate_decrements.get_name_leafdata());
    if (rate_increments.is_set || is_set(rate_increments.operation)) leaf_name_data.push_back(rate_increments.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update")
    {
        for(auto const & c : update)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update>();
        c->parent = this;
        update.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : update)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-virtual-access")
    {
        is_virtual_access = value;
    }
    if(value_path == "rate")
    {
        rate = value;
    }
    if(value_path == "rate-decrements")
    {
        rate_decrements = value;
    }
    if(value_path == "rate-increments")
    {
        rate_increments = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::Update()
    :
    is_add{YType::boolean, "is-add"},
    received_time{YType::uint64, "received-time"},
    weight{YType::uint32, "weight"}
    	,
    group_address(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress>())
	,source_address(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress>())
{
    group_address->parent = this;

    source_address->parent = this;

    yang_name = "update"; yang_parent_name = "interface-unicast-qos-adjust";
}

Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::~Update()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::has_data() const
{
    return is_add.is_set
	|| received_time.is_set
	|| weight.is_set
	|| (group_address !=  nullptr && group_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::has_operation() const
{
    return is_set(operation)
	|| is_set(is_add.operation)
	|| is_set(received_time.operation)
	|| is_set(weight.operation)
	|| (group_address !=  nullptr && group_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Update' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_add.is_set || is_set(is_add.operation)) leaf_name_data.push_back(is_add.get_name_leafdata());
    if (received_time.is_set || is_set(received_time.operation)) leaf_name_data.push_back(received_time.get_name_leafdata());
    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address")
    {
        if(group_address == nullptr)
        {
            group_address = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress>();
        }
        return group_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address != nullptr)
    {
        children["group-address"] = group_address;
    }

    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-add")
    {
        is_add = value;
    }
    if(value_path == "received-time")
    {
        received_time = value;
    }
    if(value_path == "weight")
    {
        weight = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "update";
}

Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::~SourceAddress()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address"; yang_parent_name = "update";
}

Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::~GroupAddress()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::Ranges::Ranges()
{
    yang_name = "ranges"; yang_parent_name = "vrf";
}

Mld::Active::Vrfs::Vrf::Ranges::~Ranges()
{
}

bool Mld::Active::Vrfs::Vrf::Ranges::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::Vrfs::Vrf::Ranges::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::Vrfs::Vrf::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::Ranges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ranges' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf::Ranges::Range>();
        c->parent = this;
        range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::Ranges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::Ranges::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::Vrfs::Vrf::Ranges::Range::Range()
    :
    group_address{YType::str, "group-address"},
    group_mask{YType::int32, "group-mask"},
    is_stale{YType::boolean, "is-stale"},
    prefix_length{YType::uint32, "prefix-length"},
    protocol{YType::enumeration, "protocol"}
    	,
    group_address_xr(std::make_shared<Mld::Active::Vrfs::Vrf::Ranges::Range::GroupAddressXr>())
{
    group_address_xr->parent = this;

    yang_name = "range"; yang_parent_name = "ranges";
}

Mld::Active::Vrfs::Vrf::Ranges::Range::~Range()
{
}

bool Mld::Active::Vrfs::Vrf::Ranges::Range::has_data() const
{
    return group_address.is_set
	|| group_mask.is_set
	|| is_stale.is_set
	|| prefix_length.is_set
	|| protocol.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data());
}

bool Mld::Active::Vrfs::Vrf::Ranges::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(group_mask.operation)
	|| is_set(is_stale.operation)
	|| is_set(prefix_length.operation)
	|| is_set(protocol.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::Ranges::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::Ranges::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_mask.is_set || is_set(group_mask.operation)) leaf_name_data.push_back(group_mask.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.operation)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::Ranges::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Mld::Active::Vrfs::Vrf::Ranges::Range::GroupAddressXr>();
        }
        return group_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::Ranges::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::Ranges::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "group-mask")
    {
        group_mask = value;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Mld::Active::Vrfs::Vrf::Ranges::Range::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "range";
}

Mld::Active::Vrfs::Vrf::Ranges::Range::GroupAddressXr::~GroupAddressXr()
{
}

bool Mld::Active::Vrfs::Vrf::Ranges::Range::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::Ranges::Range::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::Ranges::Range::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::Ranges::Range::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressXr' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::Ranges::Range::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::Ranges::Range::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::Ranges::Range::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterfaces()
{
    yang_name = "ifrs-interfaces"; yang_parent_name = "vrf";
}

Mld::Active::Vrfs::Vrf::IfrsInterfaces::~IfrsInterfaces()
{
}

bool Mld::Active::Vrfs::Vrf::IfrsInterfaces::has_data() const
{
    for (std::size_t index=0; index<ifrs_interface.size(); index++)
    {
        if(ifrs_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::Vrfs::Vrf::IfrsInterfaces::has_operation() const
{
    for (std::size_t index=0; index<ifrs_interface.size(); index++)
    {
        if(ifrs_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::Vrfs::Vrf::IfrsInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interfaces";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::IfrsInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IfrsInterfaces' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::IfrsInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface>();
        c->parent = this;
        ifrs_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::IfrsInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ifrs_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::IfrsInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IfrsInterface()
    :
    interface_name{YType::str, "interface-name"},
    join_group_count{YType::uint32, "join-group-count"}
    	,
    igmp_interface_entry(std::make_shared<Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry>())
{
    igmp_interface_entry->parent = this;

    yang_name = "ifrs-interface"; yang_parent_name = "ifrs-interfaces";
}

Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::~IfrsInterface()
{
}

bool Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::has_data() const
{
    return interface_name.is_set
	|| join_group_count.is_set
	|| (igmp_interface_entry !=  nullptr && igmp_interface_entry->has_data());
}

bool Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(join_group_count.operation)
	|| (igmp_interface_entry !=  nullptr && igmp_interface_entry->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IfrsInterface' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (join_group_count.is_set || is_set(join_group_count.operation)) leaf_name_data.push_back(join_group_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igmp-interface-entry")
    {
        if(igmp_interface_entry == nullptr)
        {
            igmp_interface_entry = std::make_shared<Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry>();
        }
        return igmp_interface_entry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igmp_interface_entry != nullptr)
    {
        children["igmp-interface-entry"] = igmp_interface_entry;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "join-group-count")
    {
        join_group_count = value;
    }
}

Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::IgmpInterfaceEntry()
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
    address(std::make_shared<Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address>())
	,querier_address(std::make_shared<Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "igmp-interface-entry"; yang_parent_name = "ifrs-interface";
}

Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::~IgmpInterfaceEntry()
{
}

bool Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::has_data() const
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

bool Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp-interface-entry";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_entity_path(Entity* ancestor) const
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

    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_children() const
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

void Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "igmp-interface-entry";
}

Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::~Address()
{
}

bool Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "igmp-interface-entry";
}

Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "igmp-interface-entry";
}

Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::TrafficCounters::TrafficCounters()
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
    yang_name = "traffic-counters"; yang_parent_name = "vrf";
}

Mld::Active::Vrfs::Vrf::TrafficCounters::~TrafficCounters()
{
}

bool Mld::Active::Vrfs::Vrf::TrafficCounters::has_data() const
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

bool Mld::Active::Vrfs::Vrf::TrafficCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(auxillary_data_length_errors.operation)
	|| is_set(bad_scope_errors.operation)
	|| is_set(checksum_errors.operation)
	|| is_set(elapsed_time.operation)
	|| is_set(format_errors.operation)
	|| is_set(get_packet_failure.operation)
	|| is_set(input_disabled_idb.operation)
	|| is_set(input_dvmrp.operation)
	|| is_set(input_leaves.operation)
	|| is_set(input_martian_address.operation)
	|| is_set(input_mtrace.operation)
	|| is_set(input_no_assigned_vrf_id.operation)
	|| is_set(input_no_idb.operation)
	|| is_set(input_no_platform_support_mtrace.operation)
	|| is_set(input_no_vrf_in_idb.operation)
	|| is_set(input_no_vrf_mtrace.operation)
	|| is_set(input_pim.operation)
	|| is_set(input_queries.operation)
	|| is_set(input_reports.operation)
	|| is_set(invalid_source_address_errors.operation)
	|| is_set(miscellaneous_errors.operation)
	|| is_set(no_socket_connection.operation)
	|| is_set(output_dvmrp.operation)
	|| is_set(output_leaves.operation)
	|| is_set(output_mtrace.operation)
	|| is_set(output_no_parent_interface_handle.operation)
	|| is_set(output_pim.operation)
	|| is_set(output_queries.operation)
	|| is_set(output_reports.operation)
	|| is_set(packet_manager_input_errors.operation)
	|| is_set(packet_manager_output_errors.operation)
	|| is_set(packets_in.operation)
	|| is_set(packets_out.operation)
	|| is_set(receive_socket_errors.operation)
	|| is_set(socket_errors.operation);
}

std::string Mld::Active::Vrfs::Vrf::TrafficCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-counters";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::TrafficCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficCounters' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auxillary_data_length_errors.is_set || is_set(auxillary_data_length_errors.operation)) leaf_name_data.push_back(auxillary_data_length_errors.get_name_leafdata());
    if (bad_scope_errors.is_set || is_set(bad_scope_errors.operation)) leaf_name_data.push_back(bad_scope_errors.get_name_leafdata());
    if (checksum_errors.is_set || is_set(checksum_errors.operation)) leaf_name_data.push_back(checksum_errors.get_name_leafdata());
    if (elapsed_time.is_set || is_set(elapsed_time.operation)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (format_errors.is_set || is_set(format_errors.operation)) leaf_name_data.push_back(format_errors.get_name_leafdata());
    if (get_packet_failure.is_set || is_set(get_packet_failure.operation)) leaf_name_data.push_back(get_packet_failure.get_name_leafdata());
    if (input_disabled_idb.is_set || is_set(input_disabled_idb.operation)) leaf_name_data.push_back(input_disabled_idb.get_name_leafdata());
    if (input_dvmrp.is_set || is_set(input_dvmrp.operation)) leaf_name_data.push_back(input_dvmrp.get_name_leafdata());
    if (input_leaves.is_set || is_set(input_leaves.operation)) leaf_name_data.push_back(input_leaves.get_name_leafdata());
    if (input_martian_address.is_set || is_set(input_martian_address.operation)) leaf_name_data.push_back(input_martian_address.get_name_leafdata());
    if (input_mtrace.is_set || is_set(input_mtrace.operation)) leaf_name_data.push_back(input_mtrace.get_name_leafdata());
    if (input_no_assigned_vrf_id.is_set || is_set(input_no_assigned_vrf_id.operation)) leaf_name_data.push_back(input_no_assigned_vrf_id.get_name_leafdata());
    if (input_no_idb.is_set || is_set(input_no_idb.operation)) leaf_name_data.push_back(input_no_idb.get_name_leafdata());
    if (input_no_platform_support_mtrace.is_set || is_set(input_no_platform_support_mtrace.operation)) leaf_name_data.push_back(input_no_platform_support_mtrace.get_name_leafdata());
    if (input_no_vrf_in_idb.is_set || is_set(input_no_vrf_in_idb.operation)) leaf_name_data.push_back(input_no_vrf_in_idb.get_name_leafdata());
    if (input_no_vrf_mtrace.is_set || is_set(input_no_vrf_mtrace.operation)) leaf_name_data.push_back(input_no_vrf_mtrace.get_name_leafdata());
    if (input_pim.is_set || is_set(input_pim.operation)) leaf_name_data.push_back(input_pim.get_name_leafdata());
    if (input_queries.is_set || is_set(input_queries.operation)) leaf_name_data.push_back(input_queries.get_name_leafdata());
    if (input_reports.is_set || is_set(input_reports.operation)) leaf_name_data.push_back(input_reports.get_name_leafdata());
    if (invalid_source_address_errors.is_set || is_set(invalid_source_address_errors.operation)) leaf_name_data.push_back(invalid_source_address_errors.get_name_leafdata());
    if (miscellaneous_errors.is_set || is_set(miscellaneous_errors.operation)) leaf_name_data.push_back(miscellaneous_errors.get_name_leafdata());
    if (no_socket_connection.is_set || is_set(no_socket_connection.operation)) leaf_name_data.push_back(no_socket_connection.get_name_leafdata());
    if (output_dvmrp.is_set || is_set(output_dvmrp.operation)) leaf_name_data.push_back(output_dvmrp.get_name_leafdata());
    if (output_leaves.is_set || is_set(output_leaves.operation)) leaf_name_data.push_back(output_leaves.get_name_leafdata());
    if (output_mtrace.is_set || is_set(output_mtrace.operation)) leaf_name_data.push_back(output_mtrace.get_name_leafdata());
    if (output_no_parent_interface_handle.is_set || is_set(output_no_parent_interface_handle.operation)) leaf_name_data.push_back(output_no_parent_interface_handle.get_name_leafdata());
    if (output_pim.is_set || is_set(output_pim.operation)) leaf_name_data.push_back(output_pim.get_name_leafdata());
    if (output_queries.is_set || is_set(output_queries.operation)) leaf_name_data.push_back(output_queries.get_name_leafdata());
    if (output_reports.is_set || is_set(output_reports.operation)) leaf_name_data.push_back(output_reports.get_name_leafdata());
    if (packet_manager_input_errors.is_set || is_set(packet_manager_input_errors.operation)) leaf_name_data.push_back(packet_manager_input_errors.get_name_leafdata());
    if (packet_manager_output_errors.is_set || is_set(packet_manager_output_errors.operation)) leaf_name_data.push_back(packet_manager_output_errors.get_name_leafdata());
    if (packets_in.is_set || is_set(packets_in.operation)) leaf_name_data.push_back(packets_in.get_name_leafdata());
    if (packets_out.is_set || is_set(packets_out.operation)) leaf_name_data.push_back(packets_out.get_name_leafdata());
    if (receive_socket_errors.is_set || is_set(receive_socket_errors.operation)) leaf_name_data.push_back(receive_socket_errors.get_name_leafdata());
    if (socket_errors.is_set || is_set(socket_errors.operation)) leaf_name_data.push_back(socket_errors.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::TrafficCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::TrafficCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::TrafficCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auxillary-data-length-errors")
    {
        auxillary_data_length_errors = value;
    }
    if(value_path == "bad-scope-errors")
    {
        bad_scope_errors = value;
    }
    if(value_path == "checksum-errors")
    {
        checksum_errors = value;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
    }
    if(value_path == "format-errors")
    {
        format_errors = value;
    }
    if(value_path == "get-packet-failure")
    {
        get_packet_failure = value;
    }
    if(value_path == "input-disabled-idb")
    {
        input_disabled_idb = value;
    }
    if(value_path == "input-dvmrp")
    {
        input_dvmrp = value;
    }
    if(value_path == "input-leaves")
    {
        input_leaves = value;
    }
    if(value_path == "input-martian-address")
    {
        input_martian_address = value;
    }
    if(value_path == "input-mtrace")
    {
        input_mtrace = value;
    }
    if(value_path == "input-no-assigned-vrf-id")
    {
        input_no_assigned_vrf_id = value;
    }
    if(value_path == "input-no-idb")
    {
        input_no_idb = value;
    }
    if(value_path == "input-no-platform-support-mtrace")
    {
        input_no_platform_support_mtrace = value;
    }
    if(value_path == "input-no-vrf-in-idb")
    {
        input_no_vrf_in_idb = value;
    }
    if(value_path == "input-no-vrf-mtrace")
    {
        input_no_vrf_mtrace = value;
    }
    if(value_path == "input-pim")
    {
        input_pim = value;
    }
    if(value_path == "input-queries")
    {
        input_queries = value;
    }
    if(value_path == "input-reports")
    {
        input_reports = value;
    }
    if(value_path == "invalid-source-address-errors")
    {
        invalid_source_address_errors = value;
    }
    if(value_path == "miscellaneous-errors")
    {
        miscellaneous_errors = value;
    }
    if(value_path == "no-socket-connection")
    {
        no_socket_connection = value;
    }
    if(value_path == "output-dvmrp")
    {
        output_dvmrp = value;
    }
    if(value_path == "output-leaves")
    {
        output_leaves = value;
    }
    if(value_path == "output-mtrace")
    {
        output_mtrace = value;
    }
    if(value_path == "output-no-parent-interface-handle")
    {
        output_no_parent_interface_handle = value;
    }
    if(value_path == "output-pim")
    {
        output_pim = value;
    }
    if(value_path == "output-queries")
    {
        output_queries = value;
    }
    if(value_path == "output-reports")
    {
        output_reports = value;
    }
    if(value_path == "packet-manager-input-errors")
    {
        packet_manager_input_errors = value;
    }
    if(value_path == "packet-manager-output-errors")
    {
        packet_manager_output_errors = value;
    }
    if(value_path == "packets-in")
    {
        packets_in = value;
    }
    if(value_path == "packets-out")
    {
        packets_out = value;
    }
    if(value_path == "receive-socket-errors")
    {
        receive_socket_errors = value;
    }
    if(value_path == "socket-errors")
    {
        socket_errors = value;
    }
}

Mld::Active::Vrfs::Vrf::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "vrf";
}

Mld::Active::Vrfs::Vrf::Groups::~Groups()
{
}

bool Mld::Active::Vrfs::Vrf::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::Vrfs::Vrf::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::Vrfs::Vrf::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Groups' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::Groups::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::Vrfs::Vrf::Groups::Group::Group()
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
    group_address_xr(std::make_shared<Mld::Active::Vrfs::Vrf::Groups::Group::GroupAddressXr>())
	,last_reporter(std::make_shared<Mld::Active::Vrfs::Vrf::Groups::Group::LastReporter>())
	,source_address(std::make_shared<Mld::Active::Vrfs::Vrf::Groups::Group::SourceAddress>())
{
    group_address_xr->parent = this;

    last_reporter->parent = this;

    source_address->parent = this;

    yang_name = "group"; yang_parent_name = "groups";
}

Mld::Active::Vrfs::Vrf::Groups::Group::~Group()
{
}

bool Mld::Active::Vrfs::Vrf::Groups::Group::has_data() const
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

bool Mld::Active::Vrfs::Vrf::Groups::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(explicit_tracking_enabled.operation)
	|| is_set(group_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_added.operation)
	|| is_set(is_low_memory.operation)
	|| is_set(is_self_join.operation)
	|| is_set(is_suppressed.operation)
	|| is_set(older_host_version1_timer.operation)
	|| is_set(older_host_version2_timer.operation)
	|| is_set(router_filter_mode.operation)
	|| is_set(row_status.operation)
	|| is_set(uptime.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (last_reporter !=  nullptr && last_reporter->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Group' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (explicit_tracking_enabled.is_set || is_set(explicit_tracking_enabled.operation)) leaf_name_data.push_back(explicit_tracking_enabled.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.operation)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.operation)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (is_self_join.is_set || is_set(is_self_join.operation)) leaf_name_data.push_back(is_self_join.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.operation)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());
    if (older_host_version1_timer.is_set || is_set(older_host_version1_timer.operation)) leaf_name_data.push_back(older_host_version1_timer.get_name_leafdata());
    if (older_host_version2_timer.is_set || is_set(older_host_version2_timer.operation)) leaf_name_data.push_back(older_host_version2_timer.get_name_leafdata());
    if (router_filter_mode.is_set || is_set(router_filter_mode.operation)) leaf_name_data.push_back(router_filter_mode.get_name_leafdata());
    if (row_status.is_set || is_set(row_status.operation)) leaf_name_data.push_back(row_status.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Mld::Active::Vrfs::Vrf::Groups::Group::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "last-reporter")
    {
        if(last_reporter == nullptr)
        {
            last_reporter = std::make_shared<Mld::Active::Vrfs::Vrf::Groups::Group::LastReporter>();
        }
        return last_reporter;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Mld::Active::Vrfs::Vrf::Groups::Group::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::Groups::Group::get_children() const
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

void Mld::Active::Vrfs::Vrf::Groups::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-added")
    {
        is_added = value;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
    }
    if(value_path == "is-self-join")
    {
        is_self_join = value;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed = value;
    }
    if(value_path == "older-host-version1-timer")
    {
        older_host_version1_timer = value;
    }
    if(value_path == "older-host-version2-timer")
    {
        older_host_version2_timer = value;
    }
    if(value_path == "router-filter-mode")
    {
        router_filter_mode = value;
    }
    if(value_path == "row-status")
    {
        row_status = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Mld::Active::Vrfs::Vrf::Groups::Group::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "group";
}

Mld::Active::Vrfs::Vrf::Groups::Group::GroupAddressXr::~GroupAddressXr()
{
}

bool Mld::Active::Vrfs::Vrf::Groups::Group::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::Groups::Group::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::Groups::Group::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::Groups::Group::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressXr' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::Groups::Group::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::Groups::Group::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::Groups::Group::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::Groups::Group::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "last-reporter"; yang_parent_name = "group";
}

Mld::Active::Vrfs::Vrf::Groups::Group::LastReporter::~LastReporter()
{
}

bool Mld::Active::Vrfs::Vrf::Groups::Group::LastReporter::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::Groups::Group::LastReporter::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::Groups::Group::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::Groups::Group::LastReporter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastReporter' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::Groups::Group::LastReporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::Groups::Group::LastReporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::Groups::Group::LastReporter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::Groups::Group::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "source-address"; yang_parent_name = "group";
}

Mld::Active::Vrfs::Vrf::Groups::Group::SourceAddress::~SourceAddress()
{
}

bool Mld::Active::Vrfs::Vrf::Groups::Group::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::Groups::Group::SourceAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::Groups::Group::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::Groups::Group::SourceAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::Groups::Group::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::Groups::Group::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::Groups::Group::SourceAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::GroupSummary::GroupSummary()
    :
    group_count{YType::uint32, "group-count"},
    groutes{YType::uint32, "groutes"},
    is_low_memory{YType::boolean, "is-low-memory"},
    sg_routes{YType::uint32, "sg-routes"}
{
    yang_name = "group-summary"; yang_parent_name = "vrf";
}

Mld::Active::Vrfs::Vrf::GroupSummary::~GroupSummary()
{
}

bool Mld::Active::Vrfs::Vrf::GroupSummary::has_data() const
{
    return group_count.is_set
	|| groutes.is_set
	|| is_low_memory.is_set
	|| sg_routes.is_set;
}

bool Mld::Active::Vrfs::Vrf::GroupSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(group_count.operation)
	|| is_set(groutes.operation)
	|| is_set(is_low_memory.operation)
	|| is_set(sg_routes.operation);
}

std::string Mld::Active::Vrfs::Vrf::GroupSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-summary";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::GroupSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupSummary' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (groutes.is_set || is_set(groutes.operation)) leaf_name_data.push_back(groutes.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.operation)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (sg_routes.is_set || is_set(sg_routes.operation)) leaf_name_data.push_back(sg_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::GroupSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::GroupSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::GroupSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "groutes")
    {
        groutes = value;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
    }
    if(value_path == "sg-routes")
    {
        sg_routes = value;
    }
}

Mld::Active::Vrfs::Vrf::IfrsInterfaceSummary::IfrsInterfaceSummary()
    :
    configuration_count{YType::uint32, "configuration-count"},
    interface_count{YType::uint32, "interface-count"}
{
    yang_name = "ifrs-interface-summary"; yang_parent_name = "vrf";
}

Mld::Active::Vrfs::Vrf::IfrsInterfaceSummary::~IfrsInterfaceSummary()
{
}

bool Mld::Active::Vrfs::Vrf::IfrsInterfaceSummary::has_data() const
{
    return configuration_count.is_set
	|| interface_count.is_set;
}

bool Mld::Active::Vrfs::Vrf::IfrsInterfaceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(configuration_count.operation)
	|| is_set(interface_count.operation);
}

std::string Mld::Active::Vrfs::Vrf::IfrsInterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface-summary";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::IfrsInterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IfrsInterfaceSummary' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configuration_count.is_set || is_set(configuration_count.operation)) leaf_name_data.push_back(configuration_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.operation)) leaf_name_data.push_back(interface_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::IfrsInterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::IfrsInterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::IfrsInterfaceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configuration-count")
    {
        configuration_count = value;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
    }
}

Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::GlobalInterfaceTable()
{
    yang_name = "global-interface-table"; yang_parent_name = "vrf";
}

Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::~GlobalInterfaceTable()
{
}

bool Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-interface-table";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalInterfaceTable' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::Interface()
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
    address(std::make_shared<Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address>())
	,querier_address(std::make_shared<Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface"; yang_parent_name = "global-interface-table";
}

Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::~Interface()
{
}

bool Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::has_data() const
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

bool Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::get_children() const
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

void Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface";
}

Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::~Address()
{
}

bool Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface";
}

Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface";
}

Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetails()
{
    yang_name = "ssm-map-details"; yang_parent_name = "vrf";
}

Mld::Active::Vrfs::Vrf::SsmMapDetails::~SsmMapDetails()
{
}

bool Mld::Active::Vrfs::Vrf::SsmMapDetails::has_data() const
{
    for (std::size_t index=0; index<ssm_map_detail.size(); index++)
    {
        if(ssm_map_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::Vrfs::Vrf::SsmMapDetails::has_operation() const
{
    for (std::size_t index=0; index<ssm_map_detail.size(); index++)
    {
        if(ssm_map_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::Vrfs::Vrf::SsmMapDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map-details";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::SsmMapDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SsmMapDetails' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::SsmMapDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail>();
        c->parent = this;
        ssm_map_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::SsmMapDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ssm_map_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::SsmMapDetails::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::SsmMapDetail()
    :
    elapsed_time{YType::uint64, "elapsed-time"},
    expiration_time{YType::uint32, "expiration-time"},
    group_address{YType::str, "group-address"},
    query_interval{YType::uint32, "query-interval"},
    response_pending{YType::boolean, "response-pending"},
    ssm_map_type{YType::enumeration, "ssm-map-type"}
    	,
    map_info(std::make_shared<Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo>())
{
    map_info->parent = this;

    yang_name = "ssm-map-detail"; yang_parent_name = "ssm-map-details";
}

Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::~SsmMapDetail()
{
}

bool Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::has_data() const
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

bool Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::has_operation() const
{
    for (std::size_t index=0; index<sources.size(); index++)
    {
        if(sources[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(elapsed_time.operation)
	|| is_set(expiration_time.operation)
	|| is_set(group_address.operation)
	|| is_set(query_interval.operation)
	|| is_set(response_pending.operation)
	|| is_set(ssm_map_type.operation)
	|| (map_info !=  nullptr && map_info->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map-detail";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SsmMapDetail' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (elapsed_time.is_set || is_set(elapsed_time.operation)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (response_pending.is_set || is_set(response_pending.operation)) leaf_name_data.push_back(response_pending.get_name_leafdata());
    if (ssm_map_type.is_set || is_set(ssm_map_type.operation)) leaf_name_data.push_back(ssm_map_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "map-info")
    {
        if(map_info == nullptr)
        {
            map_info = std::make_shared<Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo>();
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
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources>();
        c->parent = this;
        sources.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::get_children() const
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

void Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
    }
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "response-pending")
    {
        response_pending = value;
    }
    if(value_path == "ssm-map-type")
    {
        ssm_map_type = value;
    }
}

Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::MapInfo()
    :
    map_type{YType::uint32, "map-type"},
    source_counts{YType::uint32, "source-counts"}
    	,
    group_address_xr(std::make_shared<Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr>())
{
    group_address_xr->parent = this;

    yang_name = "map-info"; yang_parent_name = "ssm-map-detail";
}

Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::~MapInfo()
{
}

bool Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::has_data() const
{
    return map_type.is_set
	|| source_counts.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data());
}

bool Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(map_type.operation)
	|| is_set(source_counts.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-info";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MapInfo' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_type.is_set || is_set(map_type.operation)) leaf_name_data.push_back(map_type.get_name_leafdata());
    if (source_counts.is_set || is_set(source_counts.operation)) leaf_name_data.push_back(source_counts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr>();
        }
        return group_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "map-type")
    {
        map_type = value;
    }
    if(value_path == "source-counts")
    {
        source_counts = value;
    }
}

Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "map-info";
}

Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::~GroupAddressXr()
{
}

bool Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GroupAddressXr' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::Sources()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "sources"; yang_parent_name = "ssm-map-detail";
}

Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::~Sources()
{
}

bool Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sources";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sources' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOffs()
{
    yang_name = "interface-state-offs"; yang_parent_name = "vrf";
}

Mld::Active::Vrfs::Vrf::InterfaceStateOffs::~InterfaceStateOffs()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOffs::has_data() const
{
    for (std::size_t index=0; index<interface_state_off.size(); index++)
    {
        if(interface_state_off[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOffs::has_operation() const
{
    for (std::size_t index=0; index<interface_state_off.size(); index++)
    {
        if(interface_state_off[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceStateOffs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-offs";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceStateOffs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStateOffs' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceStateOffs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff>();
        c->parent = this;
        interface_state_off.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceStateOffs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_state_off)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceStateOffs::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::InterfaceStateOff()
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
    address(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address>())
	,querier_address(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface-state-off"; yang_parent_name = "interface-state-offs";
}

Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::~InterfaceStateOff()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::has_data() const
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

bool Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-off" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceStateOff' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::get_children() const
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

void Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-state-off";
}

Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::~Address()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-state-off";
}

Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-state-off";
}

Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOns()
{
    yang_name = "interface-old-format-state-ons"; yang_parent_name = "vrf";
}

Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::~InterfaceOldFormatStateOns()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::has_data() const
{
    for (std::size_t index=0; index<interface_old_format_state_on.size(); index++)
    {
        if(interface_old_format_state_on[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::has_operation() const
{
    for (std::size_t index=0; index<interface_old_format_state_on.size(); index++)
    {
        if(interface_old_format_state_on[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-format-state-ons";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceOldFormatStateOns' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-old-format-state-on")
    {
        for(auto const & c : interface_old_format_state_on)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn>();
        c->parent = this;
        interface_old_format_state_on.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_old_format_state_on)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::InterfaceOldFormatStateOn()
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
    address(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address>())
	,querier_address(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface-old-format-state-on"; yang_parent_name = "interface-old-format-state-ons";
}

Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::~InterfaceOldFormatStateOn()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::has_data() const
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

bool Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-old-format-state-on" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceOldFormatStateOn' in Cisco_IOS_XR_ipv4_igmp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::get_children() const
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

void Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-old-format-state-on";
}

Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::~Address()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-old-format-state-on";
}

Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-old-format-state-on";
}

Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Vrfs::Vrf::InterfaceOldFormatStateOns::InterfaceOldFormatStateOn::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::Process::Process()
    :
    amt_gatewaies(std::make_shared<Mld::Active::Process::AmtGatewaies>())
	,amt_summary(std::make_shared<Mld::Active::Process::AmtSummary>())
	,bvi_statistics(std::make_shared<Mld::Active::Process::BviStatistics>())
	,nsf(std::make_shared<Mld::Active::Process::Nsf>())
	,nsr(std::make_shared<Mld::Active::Process::Nsr>())
	,unicast_qos_adjust_stats(std::make_shared<Mld::Active::Process::UnicastQosAdjustStats>())
{
    amt_gatewaies->parent = this;

    amt_summary->parent = this;

    bvi_statistics->parent = this;

    nsf->parent = this;

    nsr->parent = this;

    unicast_qos_adjust_stats->parent = this;

    yang_name = "process"; yang_parent_name = "active";
}

Mld::Active::Process::~Process()
{
}

bool Mld::Active::Process::has_data() const
{
    return (amt_gatewaies !=  nullptr && amt_gatewaies->has_data())
	|| (amt_summary !=  nullptr && amt_summary->has_data())
	|| (bvi_statistics !=  nullptr && bvi_statistics->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (unicast_qos_adjust_stats !=  nullptr && unicast_qos_adjust_stats->has_data());
}

bool Mld::Active::Process::has_operation() const
{
    return is_set(operation)
	|| (amt_gatewaies !=  nullptr && amt_gatewaies->has_operation())
	|| (amt_summary !=  nullptr && amt_summary->has_operation())
	|| (bvi_statistics !=  nullptr && bvi_statistics->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (unicast_qos_adjust_stats !=  nullptr && unicast_qos_adjust_stats->has_operation());
}

std::string Mld::Active::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";

    return path_buffer.str();

}

const EntityPath Mld::Active::Process::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "amt-gatewaies")
    {
        if(amt_gatewaies == nullptr)
        {
            amt_gatewaies = std::make_shared<Mld::Active::Process::AmtGatewaies>();
        }
        return amt_gatewaies;
    }

    if(child_yang_name == "amt-summary")
    {
        if(amt_summary == nullptr)
        {
            amt_summary = std::make_shared<Mld::Active::Process::AmtSummary>();
        }
        return amt_summary;
    }

    if(child_yang_name == "bvi-statistics")
    {
        if(bvi_statistics == nullptr)
        {
            bvi_statistics = std::make_shared<Mld::Active::Process::BviStatistics>();
        }
        return bvi_statistics;
    }

    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Mld::Active::Process::Nsf>();
        }
        return nsf;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<Mld::Active::Process::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "unicast-qos-adjust-stats")
    {
        if(unicast_qos_adjust_stats == nullptr)
        {
            unicast_qos_adjust_stats = std::make_shared<Mld::Active::Process::UnicastQosAdjustStats>();
        }
        return unicast_qos_adjust_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Process::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(amt_gatewaies != nullptr)
    {
        children["amt-gatewaies"] = amt_gatewaies;
    }

    if(amt_summary != nullptr)
    {
        children["amt-summary"] = amt_summary;
    }

    if(bvi_statistics != nullptr)
    {
        children["bvi-statistics"] = bvi_statistics;
    }

    if(nsf != nullptr)
    {
        children["nsf"] = nsf;
    }

    if(nsr != nullptr)
    {
        children["nsr"] = nsr;
    }

    if(unicast_qos_adjust_stats != nullptr)
    {
        children["unicast-qos-adjust-stats"] = unicast_qos_adjust_stats;
    }

    return children;
}

void Mld::Active::Process::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::Process::AmtSummary::AmtSummary()
    :
    anycast_prefix{YType::str, "anycast-prefix"},
    gateway_count{YType::uint32, "gateway-count"},
    is_acl_configured{YType::boolean, "is-acl-configured"},
    is_gateway_simulation{YType::boolean, "is-gateway-simulation"},
    is_ou_of_resource{YType::boolean, "is-ou-of-resource"},
    max_gateway{YType::uint32, "max-gateway"},
    mtu{YType::uint32, "mtu"},
    prefix_length{YType::uint32, "prefix-length"},
    query_interval{YType::uint32, "query-interval"},
    relay_address{YType::str, "relay-address"},
    tos{YType::uint32, "tos"},
    ttl{YType::uint32, "ttl"},
    tunnel_configured_maximum{YType::uint32, "tunnel-configured-maximum"},
    tunnel_count{YType::uint32, "tunnel-count"}
{
    yang_name = "amt-summary"; yang_parent_name = "process";
}

Mld::Active::Process::AmtSummary::~AmtSummary()
{
}

bool Mld::Active::Process::AmtSummary::has_data() const
{
    return anycast_prefix.is_set
	|| gateway_count.is_set
	|| is_acl_configured.is_set
	|| is_gateway_simulation.is_set
	|| is_ou_of_resource.is_set
	|| max_gateway.is_set
	|| mtu.is_set
	|| prefix_length.is_set
	|| query_interval.is_set
	|| relay_address.is_set
	|| tos.is_set
	|| ttl.is_set
	|| tunnel_configured_maximum.is_set
	|| tunnel_count.is_set;
}

bool Mld::Active::Process::AmtSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(anycast_prefix.operation)
	|| is_set(gateway_count.operation)
	|| is_set(is_acl_configured.operation)
	|| is_set(is_gateway_simulation.operation)
	|| is_set(is_ou_of_resource.operation)
	|| is_set(max_gateway.operation)
	|| is_set(mtu.operation)
	|| is_set(prefix_length.operation)
	|| is_set(query_interval.operation)
	|| is_set(relay_address.operation)
	|| is_set(tos.operation)
	|| is_set(ttl.operation)
	|| is_set(tunnel_configured_maximum.operation)
	|| is_set(tunnel_count.operation);
}

std::string Mld::Active::Process::AmtSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amt-summary";

    return path_buffer.str();

}

const EntityPath Mld::Active::Process::AmtSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anycast_prefix.is_set || is_set(anycast_prefix.operation)) leaf_name_data.push_back(anycast_prefix.get_name_leafdata());
    if (gateway_count.is_set || is_set(gateway_count.operation)) leaf_name_data.push_back(gateway_count.get_name_leafdata());
    if (is_acl_configured.is_set || is_set(is_acl_configured.operation)) leaf_name_data.push_back(is_acl_configured.get_name_leafdata());
    if (is_gateway_simulation.is_set || is_set(is_gateway_simulation.operation)) leaf_name_data.push_back(is_gateway_simulation.get_name_leafdata());
    if (is_ou_of_resource.is_set || is_set(is_ou_of_resource.operation)) leaf_name_data.push_back(is_ou_of_resource.get_name_leafdata());
    if (max_gateway.is_set || is_set(max_gateway.operation)) leaf_name_data.push_back(max_gateway.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (relay_address.is_set || is_set(relay_address.operation)) leaf_name_data.push_back(relay_address.get_name_leafdata());
    if (tos.is_set || is_set(tos.operation)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.operation)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (tunnel_configured_maximum.is_set || is_set(tunnel_configured_maximum.operation)) leaf_name_data.push_back(tunnel_configured_maximum.get_name_leafdata());
    if (tunnel_count.is_set || is_set(tunnel_count.operation)) leaf_name_data.push_back(tunnel_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Process::AmtSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Process::AmtSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Process::AmtSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "anycast-prefix")
    {
        anycast_prefix = value;
    }
    if(value_path == "gateway-count")
    {
        gateway_count = value;
    }
    if(value_path == "is-acl-configured")
    {
        is_acl_configured = value;
    }
    if(value_path == "is-gateway-simulation")
    {
        is_gateway_simulation = value;
    }
    if(value_path == "is-ou-of-resource")
    {
        is_ou_of_resource = value;
    }
    if(value_path == "max-gateway")
    {
        max_gateway = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "relay-address")
    {
        relay_address = value;
    }
    if(value_path == "tos")
    {
        tos = value;
    }
    if(value_path == "ttl")
    {
        ttl = value;
    }
    if(value_path == "tunnel-configured-maximum")
    {
        tunnel_configured_maximum = value;
    }
    if(value_path == "tunnel-count")
    {
        tunnel_count = value;
    }
}

Mld::Active::Process::Nsr::Nsr()
    :
    collab_conv_done{YType::boolean, "collab-conv-done"},
    count_proc_connection_dn{YType::uint32, "count-proc-connection-dn"},
    count_proc_connection_up{YType::uint32, "count-proc-connection-up"},
    count_rmf_not_ready{YType::uint32, "count-rmf-not-ready"},
    count_rmf_ready{YType::uint32, "count-rmf-ready"},
    last_proc{YType::uint64, "last-proc"},
    last_proc_connection_dn{YType::uint64, "last-proc-connection-dn"},
    last_proc_connection_up{YType::uint64, "last-proc-connection-up"},
    last_rmf_not_ready{YType::uint64, "last-rmf-not-ready"},
    last_rmf_ready{YType::uint64, "last-rmf-ready"},
    partner_proc_connected{YType::boolean, "partner-proc-connected"},
    rmf_notification_done{YType::boolean, "rmf-notification-done"},
    state{YType::uint8, "state"}
{
    yang_name = "nsr"; yang_parent_name = "process";
}

Mld::Active::Process::Nsr::~Nsr()
{
}

bool Mld::Active::Process::Nsr::has_data() const
{
    return collab_conv_done.is_set
	|| count_proc_connection_dn.is_set
	|| count_proc_connection_up.is_set
	|| count_rmf_not_ready.is_set
	|| count_rmf_ready.is_set
	|| last_proc.is_set
	|| last_proc_connection_dn.is_set
	|| last_proc_connection_up.is_set
	|| last_rmf_not_ready.is_set
	|| last_rmf_ready.is_set
	|| partner_proc_connected.is_set
	|| rmf_notification_done.is_set
	|| state.is_set;
}

bool Mld::Active::Process::Nsr::has_operation() const
{
    return is_set(operation)
	|| is_set(collab_conv_done.operation)
	|| is_set(count_proc_connection_dn.operation)
	|| is_set(count_proc_connection_up.operation)
	|| is_set(count_rmf_not_ready.operation)
	|| is_set(count_rmf_ready.operation)
	|| is_set(last_proc.operation)
	|| is_set(last_proc_connection_dn.operation)
	|| is_set(last_proc_connection_up.operation)
	|| is_set(last_rmf_not_ready.operation)
	|| is_set(last_rmf_ready.operation)
	|| is_set(partner_proc_connected.operation)
	|| is_set(rmf_notification_done.operation)
	|| is_set(state.operation);
}

std::string Mld::Active::Process::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";

    return path_buffer.str();

}

const EntityPath Mld::Active::Process::Nsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collab_conv_done.is_set || is_set(collab_conv_done.operation)) leaf_name_data.push_back(collab_conv_done.get_name_leafdata());
    if (count_proc_connection_dn.is_set || is_set(count_proc_connection_dn.operation)) leaf_name_data.push_back(count_proc_connection_dn.get_name_leafdata());
    if (count_proc_connection_up.is_set || is_set(count_proc_connection_up.operation)) leaf_name_data.push_back(count_proc_connection_up.get_name_leafdata());
    if (count_rmf_not_ready.is_set || is_set(count_rmf_not_ready.operation)) leaf_name_data.push_back(count_rmf_not_ready.get_name_leafdata());
    if (count_rmf_ready.is_set || is_set(count_rmf_ready.operation)) leaf_name_data.push_back(count_rmf_ready.get_name_leafdata());
    if (last_proc.is_set || is_set(last_proc.operation)) leaf_name_data.push_back(last_proc.get_name_leafdata());
    if (last_proc_connection_dn.is_set || is_set(last_proc_connection_dn.operation)) leaf_name_data.push_back(last_proc_connection_dn.get_name_leafdata());
    if (last_proc_connection_up.is_set || is_set(last_proc_connection_up.operation)) leaf_name_data.push_back(last_proc_connection_up.get_name_leafdata());
    if (last_rmf_not_ready.is_set || is_set(last_rmf_not_ready.operation)) leaf_name_data.push_back(last_rmf_not_ready.get_name_leafdata());
    if (last_rmf_ready.is_set || is_set(last_rmf_ready.operation)) leaf_name_data.push_back(last_rmf_ready.get_name_leafdata());
    if (partner_proc_connected.is_set || is_set(partner_proc_connected.operation)) leaf_name_data.push_back(partner_proc_connected.get_name_leafdata());
    if (rmf_notification_done.is_set || is_set(rmf_notification_done.operation)) leaf_name_data.push_back(rmf_notification_done.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Process::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Process::Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Process::Nsr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "collab-conv-done")
    {
        collab_conv_done = value;
    }
    if(value_path == "count-proc-connection-dn")
    {
        count_proc_connection_dn = value;
    }
    if(value_path == "count-proc-connection-up")
    {
        count_proc_connection_up = value;
    }
    if(value_path == "count-rmf-not-ready")
    {
        count_rmf_not_ready = value;
    }
    if(value_path == "count-rmf-ready")
    {
        count_rmf_ready = value;
    }
    if(value_path == "last-proc")
    {
        last_proc = value;
    }
    if(value_path == "last-proc-connection-dn")
    {
        last_proc_connection_dn = value;
    }
    if(value_path == "last-proc-connection-up")
    {
        last_proc_connection_up = value;
    }
    if(value_path == "last-rmf-not-ready")
    {
        last_rmf_not_ready = value;
    }
    if(value_path == "last-rmf-ready")
    {
        last_rmf_ready = value;
    }
    if(value_path == "partner-proc-connected")
    {
        partner_proc_connected = value;
    }
    if(value_path == "rmf-notification-done")
    {
        rmf_notification_done = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Mld::Active::Process::AmtGatewaies::AmtGatewaies()
{
    yang_name = "amt-gatewaies"; yang_parent_name = "process";
}

Mld::Active::Process::AmtGatewaies::~AmtGatewaies()
{
}

bool Mld::Active::Process::AmtGatewaies::has_data() const
{
    for (std::size_t index=0; index<amt_gateway.size(); index++)
    {
        if(amt_gateway[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::Process::AmtGatewaies::has_operation() const
{
    for (std::size_t index=0; index<amt_gateway.size(); index++)
    {
        if(amt_gateway[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::Process::AmtGatewaies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amt-gatewaies";

    return path_buffer.str();

}

const EntityPath Mld::Active::Process::AmtGatewaies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Process::AmtGatewaies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "amt-gateway")
    {
        for(auto const & c : amt_gateway)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::Process::AmtGatewaies::AmtGateway>();
        c->parent = this;
        amt_gateway.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Process::AmtGatewaies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : amt_gateway)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::Process::AmtGatewaies::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::Process::AmtGatewaies::AmtGateway::AmtGateway()
    :
    amt_nonce{YType::uint32, "amt-nonce"},
    amt_port{YType::uint32, "amt-port"},
    amtgw{YType::str, "amtgw"},
    amtnh{YType::uint32, "amtnh"},
    gateway_address{YType::str, "gateway-address"},
    idb{YType::uint64, "idb"},
    key_len{YType::uint32, "key-len"},
    mem_upd_in{YType::uint32, "mem-upd-in"},
    mem_upd_out{YType::uint32, "mem-upd-out"},
    port{YType::int32, "port"}
{
    yang_name = "amt-gateway"; yang_parent_name = "amt-gatewaies";
}

Mld::Active::Process::AmtGatewaies::AmtGateway::~AmtGateway()
{
}

bool Mld::Active::Process::AmtGatewaies::AmtGateway::has_data() const
{
    return amt_nonce.is_set
	|| amt_port.is_set
	|| amtgw.is_set
	|| amtnh.is_set
	|| gateway_address.is_set
	|| idb.is_set
	|| key_len.is_set
	|| mem_upd_in.is_set
	|| mem_upd_out.is_set
	|| port.is_set;
}

bool Mld::Active::Process::AmtGatewaies::AmtGateway::has_operation() const
{
    return is_set(operation)
	|| is_set(amt_nonce.operation)
	|| is_set(amt_port.operation)
	|| is_set(amtgw.operation)
	|| is_set(amtnh.operation)
	|| is_set(gateway_address.operation)
	|| is_set(idb.operation)
	|| is_set(key_len.operation)
	|| is_set(mem_upd_in.operation)
	|| is_set(mem_upd_out.operation)
	|| is_set(port.operation);
}

std::string Mld::Active::Process::AmtGatewaies::AmtGateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amt-gateway";

    return path_buffer.str();

}

const EntityPath Mld::Active::Process::AmtGatewaies::AmtGateway::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/process/amt-gatewaies/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (amt_nonce.is_set || is_set(amt_nonce.operation)) leaf_name_data.push_back(amt_nonce.get_name_leafdata());
    if (amt_port.is_set || is_set(amt_port.operation)) leaf_name_data.push_back(amt_port.get_name_leafdata());
    if (amtgw.is_set || is_set(amtgw.operation)) leaf_name_data.push_back(amtgw.get_name_leafdata());
    if (amtnh.is_set || is_set(amtnh.operation)) leaf_name_data.push_back(amtnh.get_name_leafdata());
    if (gateway_address.is_set || is_set(gateway_address.operation)) leaf_name_data.push_back(gateway_address.get_name_leafdata());
    if (idb.is_set || is_set(idb.operation)) leaf_name_data.push_back(idb.get_name_leafdata());
    if (key_len.is_set || is_set(key_len.operation)) leaf_name_data.push_back(key_len.get_name_leafdata());
    if (mem_upd_in.is_set || is_set(mem_upd_in.operation)) leaf_name_data.push_back(mem_upd_in.get_name_leafdata());
    if (mem_upd_out.is_set || is_set(mem_upd_out.operation)) leaf_name_data.push_back(mem_upd_out.get_name_leafdata());
    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Process::AmtGatewaies::AmtGateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Process::AmtGatewaies::AmtGateway::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Process::AmtGatewaies::AmtGateway::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "amt-nonce")
    {
        amt_nonce = value;
    }
    if(value_path == "amt-port")
    {
        amt_port = value;
    }
    if(value_path == "amtgw")
    {
        amtgw = value;
    }
    if(value_path == "amtnh")
    {
        amtnh = value;
    }
    if(value_path == "gateway-address")
    {
        gateway_address = value;
    }
    if(value_path == "idb")
    {
        idb = value;
    }
    if(value_path == "key-len")
    {
        key_len = value;
    }
    if(value_path == "mem-upd-in")
    {
        mem_upd_in = value;
    }
    if(value_path == "mem-upd-out")
    {
        mem_upd_out = value;
    }
    if(value_path == "port")
    {
        port = value;
    }
}

Mld::Active::Process::UnicastQosAdjustStats::UnicastQosAdjustStats()
    :
    add_to_batches{YType::uint32, "add-to-batches"},
    batches{YType::uint16, "batches"},
    delete_to_batches{YType::uint32, "delete-to-batches"},
    is_qos_s_sweeped{YType::boolean, "is-qos-s-sweeped"},
    is_resync_received{YType::boolean, "is-resync-received"},
    is_resync_required{YType::boolean, "is-resync-required"},
    is_resync_start_sent{YType::boolean, "is-resync-start-sent"},
    last_download_time{YType::uint64, "last-download-time"},
    last_sweep_time{YType::uint64, "last-sweep-time"},
    queues{YType::uint16, "queues"},
    received_resync_requests{YType::uint32, "received-resync-requests"},
    send_comm_errors{YType::uint32, "send-comm-errors"},
    send_errors{YType::uint32, "send-errors"},
    send_partial_errors{YType::uint32, "send-partial-errors"},
    send_success{YType::uint32, "send-success"},
    sent_resync_bulks{YType::uint32, "sent-resync-bulks"}
{
    yang_name = "unicast-qos-adjust-stats"; yang_parent_name = "process";
}

Mld::Active::Process::UnicastQosAdjustStats::~UnicastQosAdjustStats()
{
}

bool Mld::Active::Process::UnicastQosAdjustStats::has_data() const
{
    return add_to_batches.is_set
	|| batches.is_set
	|| delete_to_batches.is_set
	|| is_qos_s_sweeped.is_set
	|| is_resync_received.is_set
	|| is_resync_required.is_set
	|| is_resync_start_sent.is_set
	|| last_download_time.is_set
	|| last_sweep_time.is_set
	|| queues.is_set
	|| received_resync_requests.is_set
	|| send_comm_errors.is_set
	|| send_errors.is_set
	|| send_partial_errors.is_set
	|| send_success.is_set
	|| sent_resync_bulks.is_set;
}

bool Mld::Active::Process::UnicastQosAdjustStats::has_operation() const
{
    return is_set(operation)
	|| is_set(add_to_batches.operation)
	|| is_set(batches.operation)
	|| is_set(delete_to_batches.operation)
	|| is_set(is_qos_s_sweeped.operation)
	|| is_set(is_resync_received.operation)
	|| is_set(is_resync_required.operation)
	|| is_set(is_resync_start_sent.operation)
	|| is_set(last_download_time.operation)
	|| is_set(last_sweep_time.operation)
	|| is_set(queues.operation)
	|| is_set(received_resync_requests.operation)
	|| is_set(send_comm_errors.operation)
	|| is_set(send_errors.operation)
	|| is_set(send_partial_errors.operation)
	|| is_set(send_success.operation)
	|| is_set(sent_resync_bulks.operation);
}

std::string Mld::Active::Process::UnicastQosAdjustStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-qos-adjust-stats";

    return path_buffer.str();

}

const EntityPath Mld::Active::Process::UnicastQosAdjustStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add_to_batches.is_set || is_set(add_to_batches.operation)) leaf_name_data.push_back(add_to_batches.get_name_leafdata());
    if (batches.is_set || is_set(batches.operation)) leaf_name_data.push_back(batches.get_name_leafdata());
    if (delete_to_batches.is_set || is_set(delete_to_batches.operation)) leaf_name_data.push_back(delete_to_batches.get_name_leafdata());
    if (is_qos_s_sweeped.is_set || is_set(is_qos_s_sweeped.operation)) leaf_name_data.push_back(is_qos_s_sweeped.get_name_leafdata());
    if (is_resync_received.is_set || is_set(is_resync_received.operation)) leaf_name_data.push_back(is_resync_received.get_name_leafdata());
    if (is_resync_required.is_set || is_set(is_resync_required.operation)) leaf_name_data.push_back(is_resync_required.get_name_leafdata());
    if (is_resync_start_sent.is_set || is_set(is_resync_start_sent.operation)) leaf_name_data.push_back(is_resync_start_sent.get_name_leafdata());
    if (last_download_time.is_set || is_set(last_download_time.operation)) leaf_name_data.push_back(last_download_time.get_name_leafdata());
    if (last_sweep_time.is_set || is_set(last_sweep_time.operation)) leaf_name_data.push_back(last_sweep_time.get_name_leafdata());
    if (queues.is_set || is_set(queues.operation)) leaf_name_data.push_back(queues.get_name_leafdata());
    if (received_resync_requests.is_set || is_set(received_resync_requests.operation)) leaf_name_data.push_back(received_resync_requests.get_name_leafdata());
    if (send_comm_errors.is_set || is_set(send_comm_errors.operation)) leaf_name_data.push_back(send_comm_errors.get_name_leafdata());
    if (send_errors.is_set || is_set(send_errors.operation)) leaf_name_data.push_back(send_errors.get_name_leafdata());
    if (send_partial_errors.is_set || is_set(send_partial_errors.operation)) leaf_name_data.push_back(send_partial_errors.get_name_leafdata());
    if (send_success.is_set || is_set(send_success.operation)) leaf_name_data.push_back(send_success.get_name_leafdata());
    if (sent_resync_bulks.is_set || is_set(sent_resync_bulks.operation)) leaf_name_data.push_back(sent_resync_bulks.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Process::UnicastQosAdjustStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Process::UnicastQosAdjustStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Process::UnicastQosAdjustStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "add-to-batches")
    {
        add_to_batches = value;
    }
    if(value_path == "batches")
    {
        batches = value;
    }
    if(value_path == "delete-to-batches")
    {
        delete_to_batches = value;
    }
    if(value_path == "is-qos-s-sweeped")
    {
        is_qos_s_sweeped = value;
    }
    if(value_path == "is-resync-received")
    {
        is_resync_received = value;
    }
    if(value_path == "is-resync-required")
    {
        is_resync_required = value;
    }
    if(value_path == "is-resync-start-sent")
    {
        is_resync_start_sent = value;
    }
    if(value_path == "last-download-time")
    {
        last_download_time = value;
    }
    if(value_path == "last-sweep-time")
    {
        last_sweep_time = value;
    }
    if(value_path == "queues")
    {
        queues = value;
    }
    if(value_path == "received-resync-requests")
    {
        received_resync_requests = value;
    }
    if(value_path == "send-comm-errors")
    {
        send_comm_errors = value;
    }
    if(value_path == "send-errors")
    {
        send_errors = value;
    }
    if(value_path == "send-partial-errors")
    {
        send_partial_errors = value;
    }
    if(value_path == "send-success")
    {
        send_success = value;
    }
    if(value_path == "sent-resync-bulks")
    {
        sent_resync_bulks = value;
    }
}

Mld::Active::Process::BviStatistics::BviStatistics()
    :
    null_buffer_handles{YType::uint32, "null-buffer-handles"},
    receive_buffers{YType::uint32, "receive-buffers"},
    release_buffers{YType::uint32, "release-buffers"},
    release_fail_buffers{YType::uint32, "release-fail-buffers"},
    rx_add_mrouter_msg{YType::uint32, "rx-add-mrouter-msg"},
    rx_delete_mrouter_msg{YType::uint32, "rx-delete-mrouter-msg"},
    rx_igmp_packet_success{YType::uint32, "rx-igmp-packet-success"},
    rx_ipc_close_notif{YType::uint32, "rx-ipc-close-notif"},
    rx_ipc_connect_notif{YType::uint32, "rx-ipc-connect-notif"},
    rx_ipc_error_notif{YType::uint32, "rx-ipc-error-notif"},
    rx_ipc_input_wait_notif{YType::uint32, "rx-ipc-input-wait-notif"},
    rx_ipc_lwm_notif{YType::uint32, "rx-ipc-lwm-notif"},
    rx_ipc_open_notif{YType::uint32, "rx-ipc-open-notif"},
    rx_ipc_output_notif{YType::uint32, "rx-ipc-output-notif"},
    rx_ipc_publish_notif{YType::uint32, "rx-ipc-publish-notif"},
    rx_ipc_q_full_notif{YType::uint32, "rx-ipc-q-full-notif"},
    rx_ipc_send_status_notif{YType::uint32, "rx-ipc-send-status-notif"},
    rx_sweep_mrouter_msg{YType::uint32, "rx-sweep-mrouter-msg"},
    rx_unknown_mrouter_msg{YType::uint32, "rx-unknown-mrouter-msg"},
    send_blocks{YType::uint32, "send-blocks"},
    tx_add_mrouter_msg{YType::uint32, "tx-add-mrouter-msg"},
    tx_buffer_errors{YType::uint32, "tx-buffer-errors"},
    tx_buffers{YType::uint32, "tx-buffers"},
    tx_delete_mrouter_msg{YType::uint32, "tx-delete-mrouter-msg"},
    tx_mrouter_buffers{YType::uint32, "tx-mrouter-buffers"},
    tx_protocol_buffers{YType::uint32, "tx-protocol-buffers"},
    tx_sweep_mrouter_msg{YType::uint32, "tx-sweep-mrouter-msg"},
    tx_unknown_buffers{YType::uint32, "tx-unknown-buffers"},
    tx_unknown_mrouter_msg{YType::uint32, "tx-unknown-mrouter-msg"},
    wtx_msg_drop_dc{YType::uint32, "wtx-msg-drop-dc"},
    wtx_msg_drop_nomem{YType::uint32, "wtx-msg-drop-nomem"},
    wtx_msg_freed{YType::uint32, "wtx-msg-freed"},
    wtx_msg_proto_sent{YType::uint32, "wtx-msg-proto-sent"},
    wtx_msg_recvd{YType::uint32, "wtx-msg-recvd"},
    wtx_msg_sent{YType::uint32, "wtx-msg-sent"}
{
    yang_name = "bvi-statistics"; yang_parent_name = "process";
}

Mld::Active::Process::BviStatistics::~BviStatistics()
{
}

bool Mld::Active::Process::BviStatistics::has_data() const
{
    return null_buffer_handles.is_set
	|| receive_buffers.is_set
	|| release_buffers.is_set
	|| release_fail_buffers.is_set
	|| rx_add_mrouter_msg.is_set
	|| rx_delete_mrouter_msg.is_set
	|| rx_igmp_packet_success.is_set
	|| rx_ipc_close_notif.is_set
	|| rx_ipc_connect_notif.is_set
	|| rx_ipc_error_notif.is_set
	|| rx_ipc_input_wait_notif.is_set
	|| rx_ipc_lwm_notif.is_set
	|| rx_ipc_open_notif.is_set
	|| rx_ipc_output_notif.is_set
	|| rx_ipc_publish_notif.is_set
	|| rx_ipc_q_full_notif.is_set
	|| rx_ipc_send_status_notif.is_set
	|| rx_sweep_mrouter_msg.is_set
	|| rx_unknown_mrouter_msg.is_set
	|| send_blocks.is_set
	|| tx_add_mrouter_msg.is_set
	|| tx_buffer_errors.is_set
	|| tx_buffers.is_set
	|| tx_delete_mrouter_msg.is_set
	|| tx_mrouter_buffers.is_set
	|| tx_protocol_buffers.is_set
	|| tx_sweep_mrouter_msg.is_set
	|| tx_unknown_buffers.is_set
	|| tx_unknown_mrouter_msg.is_set
	|| wtx_msg_drop_dc.is_set
	|| wtx_msg_drop_nomem.is_set
	|| wtx_msg_freed.is_set
	|| wtx_msg_proto_sent.is_set
	|| wtx_msg_recvd.is_set
	|| wtx_msg_sent.is_set;
}

bool Mld::Active::Process::BviStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(null_buffer_handles.operation)
	|| is_set(receive_buffers.operation)
	|| is_set(release_buffers.operation)
	|| is_set(release_fail_buffers.operation)
	|| is_set(rx_add_mrouter_msg.operation)
	|| is_set(rx_delete_mrouter_msg.operation)
	|| is_set(rx_igmp_packet_success.operation)
	|| is_set(rx_ipc_close_notif.operation)
	|| is_set(rx_ipc_connect_notif.operation)
	|| is_set(rx_ipc_error_notif.operation)
	|| is_set(rx_ipc_input_wait_notif.operation)
	|| is_set(rx_ipc_lwm_notif.operation)
	|| is_set(rx_ipc_open_notif.operation)
	|| is_set(rx_ipc_output_notif.operation)
	|| is_set(rx_ipc_publish_notif.operation)
	|| is_set(rx_ipc_q_full_notif.operation)
	|| is_set(rx_ipc_send_status_notif.operation)
	|| is_set(rx_sweep_mrouter_msg.operation)
	|| is_set(rx_unknown_mrouter_msg.operation)
	|| is_set(send_blocks.operation)
	|| is_set(tx_add_mrouter_msg.operation)
	|| is_set(tx_buffer_errors.operation)
	|| is_set(tx_buffers.operation)
	|| is_set(tx_delete_mrouter_msg.operation)
	|| is_set(tx_mrouter_buffers.operation)
	|| is_set(tx_protocol_buffers.operation)
	|| is_set(tx_sweep_mrouter_msg.operation)
	|| is_set(tx_unknown_buffers.operation)
	|| is_set(tx_unknown_mrouter_msg.operation)
	|| is_set(wtx_msg_drop_dc.operation)
	|| is_set(wtx_msg_drop_nomem.operation)
	|| is_set(wtx_msg_freed.operation)
	|| is_set(wtx_msg_proto_sent.operation)
	|| is_set(wtx_msg_recvd.operation)
	|| is_set(wtx_msg_sent.operation);
}

std::string Mld::Active::Process::BviStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bvi-statistics";

    return path_buffer.str();

}

const EntityPath Mld::Active::Process::BviStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null_buffer_handles.is_set || is_set(null_buffer_handles.operation)) leaf_name_data.push_back(null_buffer_handles.get_name_leafdata());
    if (receive_buffers.is_set || is_set(receive_buffers.operation)) leaf_name_data.push_back(receive_buffers.get_name_leafdata());
    if (release_buffers.is_set || is_set(release_buffers.operation)) leaf_name_data.push_back(release_buffers.get_name_leafdata());
    if (release_fail_buffers.is_set || is_set(release_fail_buffers.operation)) leaf_name_data.push_back(release_fail_buffers.get_name_leafdata());
    if (rx_add_mrouter_msg.is_set || is_set(rx_add_mrouter_msg.operation)) leaf_name_data.push_back(rx_add_mrouter_msg.get_name_leafdata());
    if (rx_delete_mrouter_msg.is_set || is_set(rx_delete_mrouter_msg.operation)) leaf_name_data.push_back(rx_delete_mrouter_msg.get_name_leafdata());
    if (rx_igmp_packet_success.is_set || is_set(rx_igmp_packet_success.operation)) leaf_name_data.push_back(rx_igmp_packet_success.get_name_leafdata());
    if (rx_ipc_close_notif.is_set || is_set(rx_ipc_close_notif.operation)) leaf_name_data.push_back(rx_ipc_close_notif.get_name_leafdata());
    if (rx_ipc_connect_notif.is_set || is_set(rx_ipc_connect_notif.operation)) leaf_name_data.push_back(rx_ipc_connect_notif.get_name_leafdata());
    if (rx_ipc_error_notif.is_set || is_set(rx_ipc_error_notif.operation)) leaf_name_data.push_back(rx_ipc_error_notif.get_name_leafdata());
    if (rx_ipc_input_wait_notif.is_set || is_set(rx_ipc_input_wait_notif.operation)) leaf_name_data.push_back(rx_ipc_input_wait_notif.get_name_leafdata());
    if (rx_ipc_lwm_notif.is_set || is_set(rx_ipc_lwm_notif.operation)) leaf_name_data.push_back(rx_ipc_lwm_notif.get_name_leafdata());
    if (rx_ipc_open_notif.is_set || is_set(rx_ipc_open_notif.operation)) leaf_name_data.push_back(rx_ipc_open_notif.get_name_leafdata());
    if (rx_ipc_output_notif.is_set || is_set(rx_ipc_output_notif.operation)) leaf_name_data.push_back(rx_ipc_output_notif.get_name_leafdata());
    if (rx_ipc_publish_notif.is_set || is_set(rx_ipc_publish_notif.operation)) leaf_name_data.push_back(rx_ipc_publish_notif.get_name_leafdata());
    if (rx_ipc_q_full_notif.is_set || is_set(rx_ipc_q_full_notif.operation)) leaf_name_data.push_back(rx_ipc_q_full_notif.get_name_leafdata());
    if (rx_ipc_send_status_notif.is_set || is_set(rx_ipc_send_status_notif.operation)) leaf_name_data.push_back(rx_ipc_send_status_notif.get_name_leafdata());
    if (rx_sweep_mrouter_msg.is_set || is_set(rx_sweep_mrouter_msg.operation)) leaf_name_data.push_back(rx_sweep_mrouter_msg.get_name_leafdata());
    if (rx_unknown_mrouter_msg.is_set || is_set(rx_unknown_mrouter_msg.operation)) leaf_name_data.push_back(rx_unknown_mrouter_msg.get_name_leafdata());
    if (send_blocks.is_set || is_set(send_blocks.operation)) leaf_name_data.push_back(send_blocks.get_name_leafdata());
    if (tx_add_mrouter_msg.is_set || is_set(tx_add_mrouter_msg.operation)) leaf_name_data.push_back(tx_add_mrouter_msg.get_name_leafdata());
    if (tx_buffer_errors.is_set || is_set(tx_buffer_errors.operation)) leaf_name_data.push_back(tx_buffer_errors.get_name_leafdata());
    if (tx_buffers.is_set || is_set(tx_buffers.operation)) leaf_name_data.push_back(tx_buffers.get_name_leafdata());
    if (tx_delete_mrouter_msg.is_set || is_set(tx_delete_mrouter_msg.operation)) leaf_name_data.push_back(tx_delete_mrouter_msg.get_name_leafdata());
    if (tx_mrouter_buffers.is_set || is_set(tx_mrouter_buffers.operation)) leaf_name_data.push_back(tx_mrouter_buffers.get_name_leafdata());
    if (tx_protocol_buffers.is_set || is_set(tx_protocol_buffers.operation)) leaf_name_data.push_back(tx_protocol_buffers.get_name_leafdata());
    if (tx_sweep_mrouter_msg.is_set || is_set(tx_sweep_mrouter_msg.operation)) leaf_name_data.push_back(tx_sweep_mrouter_msg.get_name_leafdata());
    if (tx_unknown_buffers.is_set || is_set(tx_unknown_buffers.operation)) leaf_name_data.push_back(tx_unknown_buffers.get_name_leafdata());
    if (tx_unknown_mrouter_msg.is_set || is_set(tx_unknown_mrouter_msg.operation)) leaf_name_data.push_back(tx_unknown_mrouter_msg.get_name_leafdata());
    if (wtx_msg_drop_dc.is_set || is_set(wtx_msg_drop_dc.operation)) leaf_name_data.push_back(wtx_msg_drop_dc.get_name_leafdata());
    if (wtx_msg_drop_nomem.is_set || is_set(wtx_msg_drop_nomem.operation)) leaf_name_data.push_back(wtx_msg_drop_nomem.get_name_leafdata());
    if (wtx_msg_freed.is_set || is_set(wtx_msg_freed.operation)) leaf_name_data.push_back(wtx_msg_freed.get_name_leafdata());
    if (wtx_msg_proto_sent.is_set || is_set(wtx_msg_proto_sent.operation)) leaf_name_data.push_back(wtx_msg_proto_sent.get_name_leafdata());
    if (wtx_msg_recvd.is_set || is_set(wtx_msg_recvd.operation)) leaf_name_data.push_back(wtx_msg_recvd.get_name_leafdata());
    if (wtx_msg_sent.is_set || is_set(wtx_msg_sent.operation)) leaf_name_data.push_back(wtx_msg_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Process::BviStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Process::BviStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Process::BviStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "null-buffer-handles")
    {
        null_buffer_handles = value;
    }
    if(value_path == "receive-buffers")
    {
        receive_buffers = value;
    }
    if(value_path == "release-buffers")
    {
        release_buffers = value;
    }
    if(value_path == "release-fail-buffers")
    {
        release_fail_buffers = value;
    }
    if(value_path == "rx-add-mrouter-msg")
    {
        rx_add_mrouter_msg = value;
    }
    if(value_path == "rx-delete-mrouter-msg")
    {
        rx_delete_mrouter_msg = value;
    }
    if(value_path == "rx-igmp-packet-success")
    {
        rx_igmp_packet_success = value;
    }
    if(value_path == "rx-ipc-close-notif")
    {
        rx_ipc_close_notif = value;
    }
    if(value_path == "rx-ipc-connect-notif")
    {
        rx_ipc_connect_notif = value;
    }
    if(value_path == "rx-ipc-error-notif")
    {
        rx_ipc_error_notif = value;
    }
    if(value_path == "rx-ipc-input-wait-notif")
    {
        rx_ipc_input_wait_notif = value;
    }
    if(value_path == "rx-ipc-lwm-notif")
    {
        rx_ipc_lwm_notif = value;
    }
    if(value_path == "rx-ipc-open-notif")
    {
        rx_ipc_open_notif = value;
    }
    if(value_path == "rx-ipc-output-notif")
    {
        rx_ipc_output_notif = value;
    }
    if(value_path == "rx-ipc-publish-notif")
    {
        rx_ipc_publish_notif = value;
    }
    if(value_path == "rx-ipc-q-full-notif")
    {
        rx_ipc_q_full_notif = value;
    }
    if(value_path == "rx-ipc-send-status-notif")
    {
        rx_ipc_send_status_notif = value;
    }
    if(value_path == "rx-sweep-mrouter-msg")
    {
        rx_sweep_mrouter_msg = value;
    }
    if(value_path == "rx-unknown-mrouter-msg")
    {
        rx_unknown_mrouter_msg = value;
    }
    if(value_path == "send-blocks")
    {
        send_blocks = value;
    }
    if(value_path == "tx-add-mrouter-msg")
    {
        tx_add_mrouter_msg = value;
    }
    if(value_path == "tx-buffer-errors")
    {
        tx_buffer_errors = value;
    }
    if(value_path == "tx-buffers")
    {
        tx_buffers = value;
    }
    if(value_path == "tx-delete-mrouter-msg")
    {
        tx_delete_mrouter_msg = value;
    }
    if(value_path == "tx-mrouter-buffers")
    {
        tx_mrouter_buffers = value;
    }
    if(value_path == "tx-protocol-buffers")
    {
        tx_protocol_buffers = value;
    }
    if(value_path == "tx-sweep-mrouter-msg")
    {
        tx_sweep_mrouter_msg = value;
    }
    if(value_path == "tx-unknown-buffers")
    {
        tx_unknown_buffers = value;
    }
    if(value_path == "tx-unknown-mrouter-msg")
    {
        tx_unknown_mrouter_msg = value;
    }
    if(value_path == "wtx-msg-drop-dc")
    {
        wtx_msg_drop_dc = value;
    }
    if(value_path == "wtx-msg-drop-nomem")
    {
        wtx_msg_drop_nomem = value;
    }
    if(value_path == "wtx-msg-freed")
    {
        wtx_msg_freed = value;
    }
    if(value_path == "wtx-msg-proto-sent")
    {
        wtx_msg_proto_sent = value;
    }
    if(value_path == "wtx-msg-recvd")
    {
        wtx_msg_recvd = value;
    }
    if(value_path == "wtx-msg-sent")
    {
        wtx_msg_sent = value;
    }
}

Mld::Active::Process::Nsf::Nsf()
    :
    is_multicast_nsf_active{YType::boolean, "is-multicast-nsf-active"},
    last_icd_notif_recv{YType::int64, "last-icd-notif-recv"},
    last_icd_notif_recv_min{YType::int32, "last-icd-notif-recv-min"},
    last_nsf_off{YType::int64, "last-nsf-off"},
    last_nsf_off_min{YType::int32, "last-nsf-off-min"},
    last_nsf_on{YType::int64, "last-nsf-on"},
    last_nsf_on_min{YType::int32, "last-nsf-on-min"},
    multicast_nsf_time_left{YType::uint32, "multicast-nsf-time-left"},
    multicast_nsf_timeout{YType::uint32, "multicast-nsf-timeout"},
    respawn_count{YType::uint32, "respawn-count"}
{
    yang_name = "nsf"; yang_parent_name = "process";
}

Mld::Active::Process::Nsf::~Nsf()
{
}

bool Mld::Active::Process::Nsf::has_data() const
{
    return is_multicast_nsf_active.is_set
	|| last_icd_notif_recv.is_set
	|| last_icd_notif_recv_min.is_set
	|| last_nsf_off.is_set
	|| last_nsf_off_min.is_set
	|| last_nsf_on.is_set
	|| last_nsf_on_min.is_set
	|| multicast_nsf_time_left.is_set
	|| multicast_nsf_timeout.is_set
	|| respawn_count.is_set;
}

bool Mld::Active::Process::Nsf::has_operation() const
{
    return is_set(operation)
	|| is_set(is_multicast_nsf_active.operation)
	|| is_set(last_icd_notif_recv.operation)
	|| is_set(last_icd_notif_recv_min.operation)
	|| is_set(last_nsf_off.operation)
	|| is_set(last_nsf_off_min.operation)
	|| is_set(last_nsf_on.operation)
	|| is_set(last_nsf_on_min.operation)
	|| is_set(multicast_nsf_time_left.operation)
	|| is_set(multicast_nsf_timeout.operation)
	|| is_set(respawn_count.operation);
}

std::string Mld::Active::Process::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";

    return path_buffer.str();

}

const EntityPath Mld::Active::Process::Nsf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/process/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_multicast_nsf_active.is_set || is_set(is_multicast_nsf_active.operation)) leaf_name_data.push_back(is_multicast_nsf_active.get_name_leafdata());
    if (last_icd_notif_recv.is_set || is_set(last_icd_notif_recv.operation)) leaf_name_data.push_back(last_icd_notif_recv.get_name_leafdata());
    if (last_icd_notif_recv_min.is_set || is_set(last_icd_notif_recv_min.operation)) leaf_name_data.push_back(last_icd_notif_recv_min.get_name_leafdata());
    if (last_nsf_off.is_set || is_set(last_nsf_off.operation)) leaf_name_data.push_back(last_nsf_off.get_name_leafdata());
    if (last_nsf_off_min.is_set || is_set(last_nsf_off_min.operation)) leaf_name_data.push_back(last_nsf_off_min.get_name_leafdata());
    if (last_nsf_on.is_set || is_set(last_nsf_on.operation)) leaf_name_data.push_back(last_nsf_on.get_name_leafdata());
    if (last_nsf_on_min.is_set || is_set(last_nsf_on_min.operation)) leaf_name_data.push_back(last_nsf_on_min.get_name_leafdata());
    if (multicast_nsf_time_left.is_set || is_set(multicast_nsf_time_left.operation)) leaf_name_data.push_back(multicast_nsf_time_left.get_name_leafdata());
    if (multicast_nsf_timeout.is_set || is_set(multicast_nsf_timeout.operation)) leaf_name_data.push_back(multicast_nsf_timeout.get_name_leafdata());
    if (respawn_count.is_set || is_set(respawn_count.operation)) leaf_name_data.push_back(respawn_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::Process::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::Process::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::Process::Nsf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-multicast-nsf-active")
    {
        is_multicast_nsf_active = value;
    }
    if(value_path == "last-icd-notif-recv")
    {
        last_icd_notif_recv = value;
    }
    if(value_path == "last-icd-notif-recv-min")
    {
        last_icd_notif_recv_min = value;
    }
    if(value_path == "last-nsf-off")
    {
        last_nsf_off = value;
    }
    if(value_path == "last-nsf-off-min")
    {
        last_nsf_off_min = value;
    }
    if(value_path == "last-nsf-on")
    {
        last_nsf_on = value;
    }
    if(value_path == "last-nsf-on-min")
    {
        last_nsf_on_min = value;
    }
    if(value_path == "multicast-nsf-time-left")
    {
        multicast_nsf_time_left = value;
    }
    if(value_path == "multicast-nsf-timeout")
    {
        multicast_nsf_timeout = value;
    }
    if(value_path == "respawn-count")
    {
        respawn_count = value;
    }
}

Mld::Active::DefaultContext::DefaultContext()
    :
    detail_groups(std::make_shared<Mld::Active::DefaultContext::DetailGroups>())
	,explicit_groups(std::make_shared<Mld::Active::DefaultContext::ExplicitGroups>())
	,global_interface_table(std::make_shared<Mld::Active::DefaultContext::GlobalInterfaceTable>())
	,group_summary(std::make_shared<Mld::Active::DefaultContext::GroupSummary>())
	,groups(std::make_shared<Mld::Active::DefaultContext::Groups>())
	,ifrs_interface_summary(std::make_shared<Mld::Active::DefaultContext::IfrsInterfaceSummary>())
	,ifrs_interfaces(std::make_shared<Mld::Active::DefaultContext::IfrsInterfaces>())
	,interface_old_format_state_ons(std::make_shared<Mld::Active::DefaultContext::InterfaceOldFormatStateOns>())
	,interface_old_formats(std::make_shared<Mld::Active::DefaultContext::InterfaceOldFormats>())
	,interface_state_off_old_formats(std::make_shared<Mld::Active::DefaultContext::InterfaceStateOffOldFormats>())
	,interface_state_offs(std::make_shared<Mld::Active::DefaultContext::InterfaceStateOffs>())
	,interface_state_ons(std::make_shared<Mld::Active::DefaultContext::InterfaceStateOns>())
	,interface_table(std::make_shared<Mld::Active::DefaultContext::InterfaceTable>())
	,interface_unicast_qos_adjusts(std::make_shared<Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts>())
	,non_active_groups(std::make_shared<Mld::Active::DefaultContext::NonActiveGroups>())
	,ranges(std::make_shared<Mld::Active::DefaultContext::Ranges>())
	,ssm_map_details(std::make_shared<Mld::Active::DefaultContext::SsmMapDetails>())
	,ssm_maps(std::make_shared<Mld::Active::DefaultContext::SsmMaps>())
	,summary(std::make_shared<Mld::Active::DefaultContext::Summary>())
	,traffic_counters(std::make_shared<Mld::Active::DefaultContext::TrafficCounters>())
{
    detail_groups->parent = this;

    explicit_groups->parent = this;

    global_interface_table->parent = this;

    group_summary->parent = this;

    groups->parent = this;

    ifrs_interface_summary->parent = this;

    ifrs_interfaces->parent = this;

    interface_old_format_state_ons->parent = this;

    interface_old_formats->parent = this;

    interface_state_off_old_formats->parent = this;

    interface_state_offs->parent = this;

    interface_state_ons->parent = this;

    interface_table->parent = this;

    interface_unicast_qos_adjusts->parent = this;

    non_active_groups->parent = this;

    ranges->parent = this;

    ssm_map_details->parent = this;

    ssm_maps->parent = this;

    summary->parent = this;

    traffic_counters->parent = this;

    yang_name = "default-context"; yang_parent_name = "active";
}

Mld::Active::DefaultContext::~DefaultContext()
{
}

bool Mld::Active::DefaultContext::has_data() const
{
    return (detail_groups !=  nullptr && detail_groups->has_data())
	|| (explicit_groups !=  nullptr && explicit_groups->has_data())
	|| (global_interface_table !=  nullptr && global_interface_table->has_data())
	|| (group_summary !=  nullptr && group_summary->has_data())
	|| (groups !=  nullptr && groups->has_data())
	|| (ifrs_interface_summary !=  nullptr && ifrs_interface_summary->has_data())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_data())
	|| (interface_old_format_state_ons !=  nullptr && interface_old_format_state_ons->has_data())
	|| (interface_old_formats !=  nullptr && interface_old_formats->has_data())
	|| (interface_state_off_old_formats !=  nullptr && interface_state_off_old_formats->has_data())
	|| (interface_state_offs !=  nullptr && interface_state_offs->has_data())
	|| (interface_state_ons !=  nullptr && interface_state_ons->has_data())
	|| (interface_table !=  nullptr && interface_table->has_data())
	|| (interface_unicast_qos_adjusts !=  nullptr && interface_unicast_qos_adjusts->has_data())
	|| (non_active_groups !=  nullptr && non_active_groups->has_data())
	|| (ranges !=  nullptr && ranges->has_data())
	|| (ssm_map_details !=  nullptr && ssm_map_details->has_data())
	|| (ssm_maps !=  nullptr && ssm_maps->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (traffic_counters !=  nullptr && traffic_counters->has_data());
}

bool Mld::Active::DefaultContext::has_operation() const
{
    return is_set(operation)
	|| (detail_groups !=  nullptr && detail_groups->has_operation())
	|| (explicit_groups !=  nullptr && explicit_groups->has_operation())
	|| (global_interface_table !=  nullptr && global_interface_table->has_operation())
	|| (group_summary !=  nullptr && group_summary->has_operation())
	|| (groups !=  nullptr && groups->has_operation())
	|| (ifrs_interface_summary !=  nullptr && ifrs_interface_summary->has_operation())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_operation())
	|| (interface_old_format_state_ons !=  nullptr && interface_old_format_state_ons->has_operation())
	|| (interface_old_formats !=  nullptr && interface_old_formats->has_operation())
	|| (interface_state_off_old_formats !=  nullptr && interface_state_off_old_formats->has_operation())
	|| (interface_state_offs !=  nullptr && interface_state_offs->has_operation())
	|| (interface_state_ons !=  nullptr && interface_state_ons->has_operation())
	|| (interface_table !=  nullptr && interface_table->has_operation())
	|| (interface_unicast_qos_adjusts !=  nullptr && interface_unicast_qos_adjusts->has_operation())
	|| (non_active_groups !=  nullptr && non_active_groups->has_operation())
	|| (ranges !=  nullptr && ranges->has_operation())
	|| (ssm_map_details !=  nullptr && ssm_map_details->has_operation())
	|| (ssm_maps !=  nullptr && ssm_maps->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (traffic_counters !=  nullptr && traffic_counters->has_operation());
}

std::string Mld::Active::DefaultContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-context";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-groups")
    {
        if(detail_groups == nullptr)
        {
            detail_groups = std::make_shared<Mld::Active::DefaultContext::DetailGroups>();
        }
        return detail_groups;
    }

    if(child_yang_name == "explicit-groups")
    {
        if(explicit_groups == nullptr)
        {
            explicit_groups = std::make_shared<Mld::Active::DefaultContext::ExplicitGroups>();
        }
        return explicit_groups;
    }

    if(child_yang_name == "global-interface-table")
    {
        if(global_interface_table == nullptr)
        {
            global_interface_table = std::make_shared<Mld::Active::DefaultContext::GlobalInterfaceTable>();
        }
        return global_interface_table;
    }

    if(child_yang_name == "group-summary")
    {
        if(group_summary == nullptr)
        {
            group_summary = std::make_shared<Mld::Active::DefaultContext::GroupSummary>();
        }
        return group_summary;
    }

    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<Mld::Active::DefaultContext::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "ifrs-interface-summary")
    {
        if(ifrs_interface_summary == nullptr)
        {
            ifrs_interface_summary = std::make_shared<Mld::Active::DefaultContext::IfrsInterfaceSummary>();
        }
        return ifrs_interface_summary;
    }

    if(child_yang_name == "ifrs-interfaces")
    {
        if(ifrs_interfaces == nullptr)
        {
            ifrs_interfaces = std::make_shared<Mld::Active::DefaultContext::IfrsInterfaces>();
        }
        return ifrs_interfaces;
    }

    if(child_yang_name == "interface-old-format-state-ons")
    {
        if(interface_old_format_state_ons == nullptr)
        {
            interface_old_format_state_ons = std::make_shared<Mld::Active::DefaultContext::InterfaceOldFormatStateOns>();
        }
        return interface_old_format_state_ons;
    }

    if(child_yang_name == "interface-old-formats")
    {
        if(interface_old_formats == nullptr)
        {
            interface_old_formats = std::make_shared<Mld::Active::DefaultContext::InterfaceOldFormats>();
        }
        return interface_old_formats;
    }

    if(child_yang_name == "interface-state-off-old-formats")
    {
        if(interface_state_off_old_formats == nullptr)
        {
            interface_state_off_old_formats = std::make_shared<Mld::Active::DefaultContext::InterfaceStateOffOldFormats>();
        }
        return interface_state_off_old_formats;
    }

    if(child_yang_name == "interface-state-offs")
    {
        if(interface_state_offs == nullptr)
        {
            interface_state_offs = std::make_shared<Mld::Active::DefaultContext::InterfaceStateOffs>();
        }
        return interface_state_offs;
    }

    if(child_yang_name == "interface-state-ons")
    {
        if(interface_state_ons == nullptr)
        {
            interface_state_ons = std::make_shared<Mld::Active::DefaultContext::InterfaceStateOns>();
        }
        return interface_state_ons;
    }

    if(child_yang_name == "interface-table")
    {
        if(interface_table == nullptr)
        {
            interface_table = std::make_shared<Mld::Active::DefaultContext::InterfaceTable>();
        }
        return interface_table;
    }

    if(child_yang_name == "interface-unicast-qos-adjusts")
    {
        if(interface_unicast_qos_adjusts == nullptr)
        {
            interface_unicast_qos_adjusts = std::make_shared<Mld::Active::DefaultContext::InterfaceUnicastQosAdjusts>();
        }
        return interface_unicast_qos_adjusts;
    }

    if(child_yang_name == "non-active-groups")
    {
        if(non_active_groups == nullptr)
        {
            non_active_groups = std::make_shared<Mld::Active::DefaultContext::NonActiveGroups>();
        }
        return non_active_groups;
    }

    if(child_yang_name == "ranges")
    {
        if(ranges == nullptr)
        {
            ranges = std::make_shared<Mld::Active::DefaultContext::Ranges>();
        }
        return ranges;
    }

    if(child_yang_name == "ssm-map-details")
    {
        if(ssm_map_details == nullptr)
        {
            ssm_map_details = std::make_shared<Mld::Active::DefaultContext::SsmMapDetails>();
        }
        return ssm_map_details;
    }

    if(child_yang_name == "ssm-maps")
    {
        if(ssm_maps == nullptr)
        {
            ssm_maps = std::make_shared<Mld::Active::DefaultContext::SsmMaps>();
        }
        return ssm_maps;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Mld::Active::DefaultContext::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "traffic-counters")
    {
        if(traffic_counters == nullptr)
        {
            traffic_counters = std::make_shared<Mld::Active::DefaultContext::TrafficCounters>();
        }
        return traffic_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail_groups != nullptr)
    {
        children["detail-groups"] = detail_groups;
    }

    if(explicit_groups != nullptr)
    {
        children["explicit-groups"] = explicit_groups;
    }

    if(global_interface_table != nullptr)
    {
        children["global-interface-table"] = global_interface_table;
    }

    if(group_summary != nullptr)
    {
        children["group-summary"] = group_summary;
    }

    if(groups != nullptr)
    {
        children["groups"] = groups;
    }

    if(ifrs_interface_summary != nullptr)
    {
        children["ifrs-interface-summary"] = ifrs_interface_summary;
    }

    if(ifrs_interfaces != nullptr)
    {
        children["ifrs-interfaces"] = ifrs_interfaces;
    }

    if(interface_old_format_state_ons != nullptr)
    {
        children["interface-old-format-state-ons"] = interface_old_format_state_ons;
    }

    if(interface_old_formats != nullptr)
    {
        children["interface-old-formats"] = interface_old_formats;
    }

    if(interface_state_off_old_formats != nullptr)
    {
        children["interface-state-off-old-formats"] = interface_state_off_old_formats;
    }

    if(interface_state_offs != nullptr)
    {
        children["interface-state-offs"] = interface_state_offs;
    }

    if(interface_state_ons != nullptr)
    {
        children["interface-state-ons"] = interface_state_ons;
    }

    if(interface_table != nullptr)
    {
        children["interface-table"] = interface_table;
    }

    if(interface_unicast_qos_adjusts != nullptr)
    {
        children["interface-unicast-qos-adjusts"] = interface_unicast_qos_adjusts;
    }

    if(non_active_groups != nullptr)
    {
        children["non-active-groups"] = non_active_groups;
    }

    if(ranges != nullptr)
    {
        children["ranges"] = ranges;
    }

    if(ssm_map_details != nullptr)
    {
        children["ssm-map-details"] = ssm_map_details;
    }

    if(ssm_maps != nullptr)
    {
        children["ssm-maps"] = ssm_maps;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(traffic_counters != nullptr)
    {
        children["traffic-counters"] = traffic_counters;
    }

    return children;
}

void Mld::Active::DefaultContext::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::DefaultContext::Summary::Summary()
    :
    disabled_interface_count{YType::uint32, "disabled-interface-count"},
    enabled_interface_count{YType::uint32, "enabled-interface-count"},
    group_count{YType::uint32, "group-count"},
    group_limit{YType::uint32, "group-limit"},
    is_disabled{YType::boolean, "is-disabled"},
    node_low_memory{YType::boolean, "node-low-memory"},
    robustness{YType::uint32, "robustness"},
    supported_interfaces{YType::uint32, "supported-interfaces"},
    tunnel_mte_config_count{YType::uint32, "tunnel-mte-config-count"},
    unsupported_interfaces{YType::uint32, "unsupported-interfaces"}
{
    yang_name = "summary"; yang_parent_name = "default-context";
}

Mld::Active::DefaultContext::Summary::~Summary()
{
}

bool Mld::Active::DefaultContext::Summary::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return disabled_interface_count.is_set
	|| enabled_interface_count.is_set
	|| group_count.is_set
	|| group_limit.is_set
	|| is_disabled.is_set
	|| node_low_memory.is_set
	|| robustness.is_set
	|| supported_interfaces.is_set
	|| tunnel_mte_config_count.is_set
	|| unsupported_interfaces.is_set;
}

bool Mld::Active::DefaultContext::Summary::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(disabled_interface_count.operation)
	|| is_set(enabled_interface_count.operation)
	|| is_set(group_count.operation)
	|| is_set(group_limit.operation)
	|| is_set(is_disabled.operation)
	|| is_set(node_low_memory.operation)
	|| is_set(robustness.operation)
	|| is_set(supported_interfaces.operation)
	|| is_set(tunnel_mte_config_count.operation)
	|| is_set(unsupported_interfaces.operation);
}

std::string Mld::Active::DefaultContext::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled_interface_count.is_set || is_set(disabled_interface_count.operation)) leaf_name_data.push_back(disabled_interface_count.get_name_leafdata());
    if (enabled_interface_count.is_set || is_set(enabled_interface_count.operation)) leaf_name_data.push_back(enabled_interface_count.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (group_limit.is_set || is_set(group_limit.operation)) leaf_name_data.push_back(group_limit.get_name_leafdata());
    if (is_disabled.is_set || is_set(is_disabled.operation)) leaf_name_data.push_back(is_disabled.get_name_leafdata());
    if (node_low_memory.is_set || is_set(node_low_memory.operation)) leaf_name_data.push_back(node_low_memory.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (supported_interfaces.is_set || is_set(supported_interfaces.operation)) leaf_name_data.push_back(supported_interfaces.get_name_leafdata());
    if (tunnel_mte_config_count.is_set || is_set(tunnel_mte_config_count.operation)) leaf_name_data.push_back(tunnel_mte_config_count.get_name_leafdata());
    if (unsupported_interfaces.is_set || is_set(unsupported_interfaces.operation)) leaf_name_data.push_back(unsupported_interfaces.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Active::DefaultContext::Summary::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::DefaultContext::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disabled-interface-count")
    {
        disabled_interface_count = value;
    }
    if(value_path == "enabled-interface-count")
    {
        enabled_interface_count = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "group-limit")
    {
        group_limit = value;
    }
    if(value_path == "is-disabled")
    {
        is_disabled = value;
    }
    if(value_path == "node-low-memory")
    {
        node_low_memory = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "supported-interfaces")
    {
        supported_interfaces = value;
    }
    if(value_path == "tunnel-mte-config-count")
    {
        tunnel_mte_config_count = value;
    }
    if(value_path == "unsupported-interfaces")
    {
        unsupported_interfaces = value;
    }
}

Mld::Active::DefaultContext::Summary::Interface::Interface()
    :
    group_count{YType::uint32, "group-count"},
    group_limit{YType::uint32, "group-limit"},
    interface_name{YType::str, "interface-name"},
    on_off{YType::boolean, "on-off"},
    parent_ifhandle{YType::str, "parent-ifhandle"},
    router_uptime_in_seconds{YType::uint32, "router-uptime-in-seconds"},
    time_since_last_query_in_seconds{YType::uint32, "time-since-last-query-in-seconds"},
    time_since_last_report_in_seconds{YType::uint32, "time-since-last-report-in-seconds"}
{
    yang_name = "interface"; yang_parent_name = "summary";
}

Mld::Active::DefaultContext::Summary::Interface::~Interface()
{
}

bool Mld::Active::DefaultContext::Summary::Interface::has_data() const
{
    return group_count.is_set
	|| group_limit.is_set
	|| interface_name.is_set
	|| on_off.is_set
	|| parent_ifhandle.is_set
	|| router_uptime_in_seconds.is_set
	|| time_since_last_query_in_seconds.is_set
	|| time_since_last_report_in_seconds.is_set;
}

bool Mld::Active::DefaultContext::Summary::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(group_count.operation)
	|| is_set(group_limit.operation)
	|| is_set(interface_name.operation)
	|| is_set(on_off.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation);
}

std::string Mld::Active::DefaultContext::Summary::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::Summary::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (group_limit.is_set || is_set(group_limit.operation)) leaf_name_data.push_back(group_limit.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (on_off.is_set || is_set(on_off.operation)) leaf_name_data.push_back(on_off.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::Summary::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::Summary::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::Summary::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "group-limit")
    {
        group_limit = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "on-off")
    {
        on_off = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
}

Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOns()
{
    yang_name = "interface-state-ons"; yang_parent_name = "default-context";
}

Mld::Active::DefaultContext::InterfaceStateOns::~InterfaceStateOns()
{
}

bool Mld::Active::DefaultContext::InterfaceStateOns::has_data() const
{
    for (std::size_t index=0; index<interface_state_on.size(); index++)
    {
        if(interface_state_on[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::DefaultContext::InterfaceStateOns::has_operation() const
{
    for (std::size_t index=0; index<interface_state_on.size(); index++)
    {
        if(interface_state_on[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::DefaultContext::InterfaceStateOns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-ons";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceStateOns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceStateOns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-state-on")
    {
        for(auto const & c : interface_state_on)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn>();
        c->parent = this;
        interface_state_on.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceStateOns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_state_on)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::DefaultContext::InterfaceStateOns::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::InterfaceStateOn()
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
    address(std::make_shared<Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address>())
	,querier_address(std::make_shared<Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress>())
{
    address->parent = this;

    querier_address->parent = this;

    subscriber_address->parent = this;

    yang_name = "interface-state-on"; yang_parent_name = "interface-state-ons";
}

Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::~InterfaceStateOn()
{
}

bool Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::has_data() const
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

bool Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(configuration_mcast_vrf_error.operation)
	|| is_set(configuration_mcast_vrf_set.operation)
	|| is_set(configurationvrf_error.operation)
	|| is_set(configurationvrf_set.operation)
	|| is_set(group_joins.operation)
	|| is_set(group_leaves.operation)
	|| is_set(host_version.operation)
	|| is_set(igmp_version.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_configurationverify.operation)
	|| is_set(is_identity_present.operation)
	|| is_set(is_im_state_registered.operation)
	|| is_set(is_interface_up.operation)
	|| is_set(is_ip_enabled.operation)
	|| is_set(is_las_registered.operation)
	|| is_set(is_las_request.operation)
	|| is_set(is_querier.operation)
	|| is_set(is_router_enabled.operation)
	|| is_set(is_subscriber.operation)
	|| is_set(las_get_address_count.operation)
	|| is_set(las_ll_add_update_count.operation)
	|| is_set(las_ll_registration_count.operation)
	|| is_set(las_ll_remove_update_count.operation)
	|| is_set(las_null_update_count.operation)
	|| is_set(las_unregistration_count.operation)
	|| is_set(las_update_count.operation)
	|| is_set(last_member_query_interval.operation)
	|| is_set(location.operation)
	|| is_set(mte_tuple_count.operation)
	|| is_set(mte_vrf_id.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_ifhandle.operation)
	|| is_set(prefix_length.operation)
	|| is_set(proxy_interface.operation)
	|| is_set(querier_uptime.operation)
	|| is_set(query_interval.operation)
	|| is_set(query_maximum_response_time.operation)
	|| is_set(query_timeout.operation)
	|| is_set(robustness.operation)
	|| is_set(router_uptime_in_seconds.operation)
	|| is_set(state.operation)
	|| is_set(subscriber_id.operation)
	|| is_set(subscriber_mode.operation)
	|| is_set(time_since_last_query_in_seconds.operation)
	|| is_set(time_since_last_report_in_seconds.operation)
	|| is_set(total_active_groups.operation)
	|| is_set(vrf_id.operation)
	|| is_set(vrf_state.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (querier_address !=  nullptr && querier_address->has_operation())
	|| (subscriber_address !=  nullptr && subscriber_address->has_operation());
}

std::string Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-on" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/interface-state-ons/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (configuration_mcast_vrf_error.is_set || is_set(configuration_mcast_vrf_error.operation)) leaf_name_data.push_back(configuration_mcast_vrf_error.get_name_leafdata());
    if (configuration_mcast_vrf_set.is_set || is_set(configuration_mcast_vrf_set.operation)) leaf_name_data.push_back(configuration_mcast_vrf_set.get_name_leafdata());
    if (configurationvrf_error.is_set || is_set(configurationvrf_error.operation)) leaf_name_data.push_back(configurationvrf_error.get_name_leafdata());
    if (configurationvrf_set.is_set || is_set(configurationvrf_set.operation)) leaf_name_data.push_back(configurationvrf_set.get_name_leafdata());
    if (group_joins.is_set || is_set(group_joins.operation)) leaf_name_data.push_back(group_joins.get_name_leafdata());
    if (group_leaves.is_set || is_set(group_leaves.operation)) leaf_name_data.push_back(group_leaves.get_name_leafdata());
    if (host_version.is_set || is_set(host_version.operation)) leaf_name_data.push_back(host_version.get_name_leafdata());
    if (igmp_version.is_set || is_set(igmp_version.operation)) leaf_name_data.push_back(igmp_version.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_configurationverify.is_set || is_set(is_configurationverify.operation)) leaf_name_data.push_back(is_configurationverify.get_name_leafdata());
    if (is_identity_present.is_set || is_set(is_identity_present.operation)) leaf_name_data.push_back(is_identity_present.get_name_leafdata());
    if (is_im_state_registered.is_set || is_set(is_im_state_registered.operation)) leaf_name_data.push_back(is_im_state_registered.get_name_leafdata());
    if (is_interface_up.is_set || is_set(is_interface_up.operation)) leaf_name_data.push_back(is_interface_up.get_name_leafdata());
    if (is_ip_enabled.is_set || is_set(is_ip_enabled.operation)) leaf_name_data.push_back(is_ip_enabled.get_name_leafdata());
    if (is_las_registered.is_set || is_set(is_las_registered.operation)) leaf_name_data.push_back(is_las_registered.get_name_leafdata());
    if (is_las_request.is_set || is_set(is_las_request.operation)) leaf_name_data.push_back(is_las_request.get_name_leafdata());
    if (is_querier.is_set || is_set(is_querier.operation)) leaf_name_data.push_back(is_querier.get_name_leafdata());
    if (is_router_enabled.is_set || is_set(is_router_enabled.operation)) leaf_name_data.push_back(is_router_enabled.get_name_leafdata());
    if (is_subscriber.is_set || is_set(is_subscriber.operation)) leaf_name_data.push_back(is_subscriber.get_name_leafdata());
    if (las_get_address_count.is_set || is_set(las_get_address_count.operation)) leaf_name_data.push_back(las_get_address_count.get_name_leafdata());
    if (las_ll_add_update_count.is_set || is_set(las_ll_add_update_count.operation)) leaf_name_data.push_back(las_ll_add_update_count.get_name_leafdata());
    if (las_ll_registration_count.is_set || is_set(las_ll_registration_count.operation)) leaf_name_data.push_back(las_ll_registration_count.get_name_leafdata());
    if (las_ll_remove_update_count.is_set || is_set(las_ll_remove_update_count.operation)) leaf_name_data.push_back(las_ll_remove_update_count.get_name_leafdata());
    if (las_null_update_count.is_set || is_set(las_null_update_count.operation)) leaf_name_data.push_back(las_null_update_count.get_name_leafdata());
    if (las_unregistration_count.is_set || is_set(las_unregistration_count.operation)) leaf_name_data.push_back(las_unregistration_count.get_name_leafdata());
    if (las_update_count.is_set || is_set(las_update_count.operation)) leaf_name_data.push_back(las_update_count.get_name_leafdata());
    if (last_member_query_interval.is_set || is_set(last_member_query_interval.operation)) leaf_name_data.push_back(last_member_query_interval.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mte_tuple_count.is_set || is_set(mte_tuple_count.operation)) leaf_name_data.push_back(mte_tuple_count.get_name_leafdata());
    if (mte_vrf_id.is_set || is_set(mte_vrf_id.operation)) leaf_name_data.push_back(mte_vrf_id.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.operation)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (proxy_interface.is_set || is_set(proxy_interface.operation)) leaf_name_data.push_back(proxy_interface.get_name_leafdata());
    if (querier_uptime.is_set || is_set(querier_uptime.operation)) leaf_name_data.push_back(querier_uptime.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.operation)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (query_maximum_response_time.is_set || is_set(query_maximum_response_time.operation)) leaf_name_data.push_back(query_maximum_response_time.get_name_leafdata());
    if (query_timeout.is_set || is_set(query_timeout.operation)) leaf_name_data.push_back(query_timeout.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.operation)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.operation)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());
    if (subscriber_mode.is_set || is_set(subscriber_mode.operation)) leaf_name_data.push_back(subscriber_mode.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.operation)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.operation)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());
    if (total_active_groups.is_set || is_set(total_active_groups.operation)) leaf_name_data.push_back(total_active_groups.get_name_leafdata());
    if (vrf_id.is_set || is_set(vrf_id.operation)) leaf_name_data.push_back(vrf_id.get_name_leafdata());
    if (vrf_state.is_set || is_set(vrf_state.operation)) leaf_name_data.push_back(vrf_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::get_children() const
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

void Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "configuration-mcast-vrf-error")
    {
        configuration_mcast_vrf_error = value;
    }
    if(value_path == "configuration-mcast-vrf-set")
    {
        configuration_mcast_vrf_set = value;
    }
    if(value_path == "configurationvrf-error")
    {
        configurationvrf_error = value;
    }
    if(value_path == "configurationvrf-set")
    {
        configurationvrf_set = value;
    }
    if(value_path == "group-joins")
    {
        group_joins = value;
    }
    if(value_path == "group-leaves")
    {
        group_leaves = value;
    }
    if(value_path == "host-version")
    {
        host_version = value;
    }
    if(value_path == "igmp-version")
    {
        igmp_version = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-configurationverify")
    {
        is_configurationverify = value;
    }
    if(value_path == "is-identity-present")
    {
        is_identity_present = value;
    }
    if(value_path == "is-im-state-registered")
    {
        is_im_state_registered = value;
    }
    if(value_path == "is-interface-up")
    {
        is_interface_up = value;
    }
    if(value_path == "is-ip-enabled")
    {
        is_ip_enabled = value;
    }
    if(value_path == "is-las-registered")
    {
        is_las_registered = value;
    }
    if(value_path == "is-las-request")
    {
        is_las_request = value;
    }
    if(value_path == "is-querier")
    {
        is_querier = value;
    }
    if(value_path == "is-router-enabled")
    {
        is_router_enabled = value;
    }
    if(value_path == "is-subscriber")
    {
        is_subscriber = value;
    }
    if(value_path == "las-get-address-count")
    {
        las_get_address_count = value;
    }
    if(value_path == "las-ll-add-update-count")
    {
        las_ll_add_update_count = value;
    }
    if(value_path == "las-ll-registration-count")
    {
        las_ll_registration_count = value;
    }
    if(value_path == "las-ll-remove-update-count")
    {
        las_ll_remove_update_count = value;
    }
    if(value_path == "las-null-update-count")
    {
        las_null_update_count = value;
    }
    if(value_path == "las-unregistration-count")
    {
        las_unregistration_count = value;
    }
    if(value_path == "las-update-count")
    {
        las_update_count = value;
    }
    if(value_path == "last-member-query-interval")
    {
        last_member_query_interval = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mte-tuple-count")
    {
        mte_tuple_count = value;
    }
    if(value_path == "mte-vrf-id")
    {
        mte_vrf_id = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "proxy-interface")
    {
        proxy_interface = value;
    }
    if(value_path == "querier-uptime")
    {
        querier_uptime = value;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
    }
    if(value_path == "query-maximum-response-time")
    {
        query_maximum_response_time = value;
    }
    if(value_path == "query-timeout")
    {
        query_timeout = value;
    }
    if(value_path == "robustness")
    {
        robustness = value;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
    if(value_path == "subscriber-mode")
    {
        subscriber_mode = value;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds = value;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds = value;
    }
    if(value_path == "total-active-groups")
    {
        total_active_groups = value;
    }
    if(value_path == "vrf-id")
    {
        vrf_id = value;
    }
    if(value_path == "vrf-state")
    {
        vrf_state = value;
    }
}

Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "interface-state-on";
}

Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::~Address()
{
}

bool Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "querier-address"; yang_parent_name = "interface-state-on";
}

Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "subscriber-address"; yang_parent_name = "interface-state-on";
}

Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_entity_path(Entity* ancestor) const
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

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Mld::Active::DefaultContext::DetailGroups::DetailGroups()
{
    yang_name = "detail-groups"; yang_parent_name = "default-context";
}

Mld::Active::DefaultContext::DetailGroups::~DetailGroups()
{
}

bool Mld::Active::DefaultContext::DetailGroups::has_data() const
{
    for (std::size_t index=0; index<detail_group.size(); index++)
    {
        if(detail_group[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Active::DefaultContext::DetailGroups::has_operation() const
{
    for (std::size_t index=0; index<detail_group.size(); index++)
    {
        if(detail_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Mld::Active::DefaultContext::DetailGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-groups";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::DetailGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::DetailGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-group")
    {
        for(auto const & c : detail_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::DefaultContext::DetailGroups::DetailGroup>();
        c->parent = this;
        detail_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::DetailGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : detail_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::DefaultContext::DetailGroups::set_value(const std::string & value_path, std::string value)
{
}

Mld::Active::DefaultContext::DetailGroups::DetailGroup::DetailGroup()
    :
    group_address{YType::str, "group-address"},
    interface_name{YType::str, "interface-name"},
    is_host_exclude_mode{YType::boolean, "is-host-exclude-mode"},
    is_router_exclude_mode{YType::boolean, "is-router-exclude-mode"},
    source_address{YType::str, "source-address"}
    	,
    group_info(std::make_shared<Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo>())
{
    group_info->parent = this;

    yang_name = "detail-group"; yang_parent_name = "detail-groups";
}

Mld::Active::DefaultContext::DetailGroups::DetailGroup::~DetailGroup()
{
}

bool Mld::Active::DefaultContext::DetailGroups::DetailGroup::has_data() const
{
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_data())
            return true;
    }
    return group_address.is_set
	|| interface_name.is_set
	|| is_host_exclude_mode.is_set
	|| is_router_exclude_mode.is_set
	|| source_address.is_set
	|| (group_info !=  nullptr && group_info->has_data());
}

bool Mld::Active::DefaultContext::DetailGroups::DetailGroup::has_operation() const
{
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(group_address.operation)
	|| is_set(interface_name.operation)
	|| is_set(is_host_exclude_mode.operation)
	|| is_set(is_router_exclude_mode.operation)
	|| is_set(source_address.operation)
	|| (group_info !=  nullptr && group_info->has_operation());
}

std::string Mld::Active::DefaultContext::DetailGroups::DetailGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-group";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::DetailGroups::DetailGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/detail-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.operation)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_host_exclude_mode.is_set || is_set(is_host_exclude_mode.operation)) leaf_name_data.push_back(is_host_exclude_mode.get_name_leafdata());
    if (is_router_exclude_mode.is_set || is_set(is_router_exclude_mode.operation)) leaf_name_data.push_back(is_router_exclude_mode.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::DetailGroups::DetailGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-info")
    {
        if(group_info == nullptr)
        {
            group_info = std::make_shared<Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo>();
        }
        return group_info;
    }

    if(child_yang_name == "source")
    {
        for(auto const & c : source)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Mld::Active::DefaultContext::DetailGroups::DetailGroup::Source>();
        c->parent = this;
        source.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::DetailGroups::DetailGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_info != nullptr)
    {
        children["group-info"] = group_info;
    }

    for (auto const & c : source)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Active::DefaultContext::DetailGroups::DetailGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-address")
    {
        group_address = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-host-exclude-mode")
    {
        is_host_exclude_mode = value;
    }
    if(value_path == "is-router-exclude-mode")
    {
        is_router_exclude_mode = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
}

Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupInfo()
    :
    expiration_time{YType::int32, "expiration-time"},
    explicit_tracking_enabled{YType::boolean, "explicit-tracking-enabled"},
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
    group_address_xr(std::make_shared<Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr>())
	,last_reporter(std::make_shared<Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter>())
	,source_address(std::make_shared<Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress>())
{
    group_address_xr->parent = this;

    last_reporter->parent = this;

    source_address->parent = this;

    yang_name = "group-info"; yang_parent_name = "detail-group";
}

Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::~GroupInfo()
{
}

bool Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::has_data() const
{
    return expiration_time.is_set
	|| explicit_tracking_enabled.is_set
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

bool Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(expiration_time.operation)
	|| is_set(explicit_tracking_enabled.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_added.operation)
	|| is_set(is_low_memory.operation)
	|| is_set(is_self_join.operation)
	|| is_set(is_suppressed.operation)
	|| is_set(older_host_version1_timer.operation)
	|| is_set(older_host_version2_timer.operation)
	|| is_set(router_filter_mode.operation)
	|| is_set(row_status.operation)
	|| is_set(uptime.operation)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation())
	|| (last_reporter !=  nullptr && last_reporter->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-info";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/detail-groups/detail-group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.operation)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (explicit_tracking_enabled.is_set || is_set(explicit_tracking_enabled.operation)) leaf_name_data.push_back(explicit_tracking_enabled.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.operation)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.operation)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (is_self_join.is_set || is_set(is_self_join.operation)) leaf_name_data.push_back(is_self_join.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.operation)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());
    if (older_host_version1_timer.is_set || is_set(older_host_version1_timer.operation)) leaf_name_data.push_back(older_host_version1_timer.get_name_leafdata());
    if (older_host_version2_timer.is_set || is_set(older_host_version2_timer.operation)) leaf_name_data.push_back(older_host_version2_timer.get_name_leafdata());
    if (router_filter_mode.is_set || is_set(router_filter_mode.operation)) leaf_name_data.push_back(router_filter_mode.get_name_leafdata());
    if (row_status.is_set || is_set(row_status.operation)) leaf_name_data.push_back(row_status.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.operation)) leaf_name_data.push_back(uptime.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "last-reporter")
    {
        if(last_reporter == nullptr)
        {
            last_reporter = std::make_shared<Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter>();
        }
        return last_reporter;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::get_children() const
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

void Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-added")
    {
        is_added = value;
    }
    if(value_path == "is-low-memory")
    {
        is_low_memory = value;
    }
    if(value_path == "is-self-join")
    {
        is_self_join = value;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed = value;
    }
    if(value_path == "older-host-version1-timer")
    {
        older_host_version1_timer = value;
    }
    if(value_path == "older-host-version2-timer")
    {
        older_host_version2_timer = value;
    }
    if(value_path == "router-filter-mode")
    {
        router_filter_mode = value;
    }
    if(value_path == "row-status")
    {
        row_status = value;
    }
    if(value_path == "uptime")
    {
        uptime = value;
    }
}

Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "group-address-xr"; yang_parent_name = "group-info";
}

Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::~GroupAddressXr()
{
}

bool Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";

    return path_buffer.str();

}

const EntityPath Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/active/default-context/detail-groups/detail-group/group-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Active::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}


}
}

