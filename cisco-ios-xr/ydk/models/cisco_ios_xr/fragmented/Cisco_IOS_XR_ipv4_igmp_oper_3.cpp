
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_igmp_oper_3.hpp"
#include "Cisco_IOS_XR_ipv4_igmp_oper_4.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_igmp_oper {

Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "querier-address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::QuerierAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "subscriber-address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Active::Vrfs::Vrf::InterfaceTable::Interface::SubscriberAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjusts()
{

    yang_name = "interface-unicast-qos-adjusts"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-unicast-qos-adjusts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-unicast-qos-adjust")
        return true;
    return false;
}

Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::InterfaceUnicastQosAdjust()
    :
    interface_name{YType::str, "interface-name"},
    is_virtual_access{YType::boolean, "is-virtual-access"},
    rate{YType::uint32, "rate"},
    rate_decrements{YType::uint32, "rate-decrements"},
    rate_increments{YType::uint32, "rate-increments"}
{

    yang_name = "interface-unicast-qos-adjust"; yang_parent_name = "interface-unicast-qos-adjusts"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_virtual_access.yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(rate_decrements.yfilter)
	|| ydk::is_set(rate_increments.yfilter);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-unicast-qos-adjust" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_virtual_access.is_set || is_set(is_virtual_access.yfilter)) leaf_name_data.push_back(is_virtual_access.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (rate_decrements.is_set || is_set(rate_decrements.yfilter)) leaf_name_data.push_back(rate_decrements.get_name_leafdata());
    if (rate_increments.is_set || is_set(rate_increments.yfilter)) leaf_name_data.push_back(rate_increments.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-virtual-access")
    {
        is_virtual_access = value;
        is_virtual_access.value_namespace = name_space;
        is_virtual_access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-decrements")
    {
        rate_decrements = value;
        rate_decrements.value_namespace = name_space;
        rate_decrements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-increments")
    {
        rate_increments = value;
        rate_increments.value_namespace = name_space;
        rate_increments.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-virtual-access")
    {
        is_virtual_access.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "rate-decrements")
    {
        rate_decrements.yfilter = yfilter;
    }
    if(value_path == "rate-increments")
    {
        rate_increments.yfilter = yfilter;
    }
}

bool Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update" || name == "interface-name" || name == "is-virtual-access" || name == "rate" || name == "rate-decrements" || name == "rate-increments")
        return true;
    return false;
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

    yang_name = "update"; yang_parent_name = "interface-unicast-qos-adjust"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(is_add.yfilter)
	|| ydk::is_set(received_time.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (group_address !=  nullptr && group_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_add.is_set || is_set(is_add.yfilter)) leaf_name_data.push_back(is_add.get_name_leafdata());
    if (received_time.is_set || is_set(received_time.yfilter)) leaf_name_data.push_back(received_time.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-add")
    {
        is_add = value;
        is_add.value_namespace = name_space;
        is_add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-time")
    {
        received_time = value;
        received_time.value_namespace = name_space;
        received_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-add")
    {
        is_add.yfilter = yfilter;
    }
    if(value_path == "received-time")
    {
        received_time.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "source-address" || name == "is-add" || name == "received-time" || name == "weight")
        return true;
    return false;
}

Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address"; yang_parent_name = "update"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "update"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Active::Vrfs::Vrf::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups()
{

    yang_name = "non-active-groups"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Mld::Active::Vrfs::Vrf::NonActiveGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-active-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::NonActiveGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::NonActiveGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Active::Vrfs::Vrf::NonActiveGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Active::Vrfs::Vrf::NonActiveGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-active-groups")
        return true;
    return false;
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

    yang_name = "non-active-groups"; yang_parent_name = "non-active-groups"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(reason_for_non_activity.yfilter)
	|| (group_address !=  nullptr && group_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-active-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (reason_for_non_activity.is_set || is_set(reason_for_non_activity.yfilter)) leaf_name_data.push_back(reason_for_non_activity.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason-for-non-activity")
    {
        reason_for_non_activity = value;
        reason_for_non_activity.value_namespace = name_space;
        reason_for_non_activity.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "reason-for-non-activity")
    {
        reason_for_non_activity.yfilter = yfilter;
    }
}

bool Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "source-address" || name == "interface" || name == "reason-for-non-activity")
        return true;
    return false;
}

Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address"; yang_parent_name = "non-active-groups"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::GroupAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "non-active-groups"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Active::Vrfs::Vrf::NonActiveGroups::NonActiveGroups_::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Active::Vrfs::Vrf::Ranges::Ranges()
{

    yang_name = "ranges"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Mld::Active::Vrfs::Vrf::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::Ranges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::Ranges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Active::Vrfs::Vrf::Ranges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Active::Vrfs::Vrf::Ranges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
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

    yang_name = "range"; yang_parent_name = "ranges"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_mask.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::Ranges::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::Ranges::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_mask.is_set || is_set(group_mask.yfilter)) leaf_name_data.push_back(group_mask.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::Ranges::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Active::Vrfs::Vrf::Ranges::Range::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Active::Vrfs::Vrf::Ranges::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "group-address" || name == "group-mask" || name == "is-stale" || name == "prefix-length" || name == "protocol")
        return true;
    return false;
}

Mld::Active::Vrfs::Vrf::Ranges::Range::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Active::Vrfs::Vrf::Ranges::Range::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::Ranges::Range::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::Ranges::Range::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Active::Vrfs::Vrf::Ranges::Range::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Active::Vrfs::Vrf::Ranges::Range::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetails()
{

    yang_name = "ssm-map-details"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Mld::Active::Vrfs::Vrf::SsmMapDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::SsmMapDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::SsmMapDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Active::Vrfs::Vrf::SsmMapDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Active::Vrfs::Vrf::SsmMapDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssm-map-detail")
        return true;
    return false;
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

    yang_name = "ssm-map-detail"; yang_parent_name = "ssm-map-details"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(elapsed_time.yfilter)
	|| ydk::is_set(expiration_time.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(response_pending.yfilter)
	|| ydk::is_set(ssm_map_type.yfilter)
	|| (map_info !=  nullptr && map_info->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (elapsed_time.is_set || is_set(elapsed_time.yfilter)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (expiration_time.is_set || is_set(expiration_time.yfilter)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (response_pending.is_set || is_set(response_pending.yfilter)) leaf_name_data.push_back(response_pending.get_name_leafdata());
    if (ssm_map_type.is_set || is_set(ssm_map_type.yfilter)) leaf_name_data.push_back(ssm_map_type.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-info" || name == "sources" || name == "elapsed-time" || name == "expiration-time" || name == "group-address" || name == "query-interval" || name == "response-pending" || name == "ssm-map-type")
        return true;
    return false;
}

Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::MapInfo()
    :
    map_type{YType::uint32, "map-type"},
    source_counts{YType::uint32, "source-counts"}
    	,
    group_address_xr(std::make_shared<Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr>())
{
    group_address_xr->parent = this;

    yang_name = "map-info"; yang_parent_name = "ssm-map-detail"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(map_type.yfilter)
	|| ydk::is_set(source_counts.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_type.is_set || is_set(map_type.yfilter)) leaf_name_data.push_back(map_type.get_name_leafdata());
    if (source_counts.is_set || is_set(source_counts.yfilter)) leaf_name_data.push_back(source_counts.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "map-type" || name == "source-counts")
        return true;
    return false;
}

Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "map-info"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::Sources()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "sources"; yang_parent_name = "ssm-map-detail"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Active::Vrfs::Vrf::SsmMapDetails::SsmMapDetail::Sources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Active::Vrfs::Vrf::SsmMaps::SsmMaps()
{

    yang_name = "ssm-maps"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter);
}

std::string Mld::Active::Vrfs::Vrf::SsmMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-maps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::SsmMaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::SsmMaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Active::Vrfs::Vrf::SsmMaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Active::Vrfs::Vrf::SsmMaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssm-map")
        return true;
    return false;
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

    yang_name = "ssm-map"; yang_parent_name = "ssm-maps"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(map_type.yfilter)
	|| ydk::is_set(source_counts.yfilter)
	|| ydk::is_set(ssm_map_type.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (map_type.is_set || is_set(map_type.yfilter)) leaf_name_data.push_back(map_type.get_name_leafdata());
    if (source_counts.is_set || is_set(source_counts.yfilter)) leaf_name_data.push_back(source_counts.get_name_leafdata());
    if (ssm_map_type.is_set || is_set(ssm_map_type.yfilter)) leaf_name_data.push_back(ssm_map_type.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "ssm-map-type")
    {
        ssm_map_type = value;
        ssm_map_type.value_namespace = name_space;
        ssm_map_type.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "map-type")
    {
        map_type.yfilter = yfilter;
    }
    if(value_path == "source-counts")
    {
        source_counts.yfilter = yfilter;
    }
    if(value_path == "ssm-map-type")
    {
        ssm_map_type.yfilter = yfilter;
    }
}

bool Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "group-address" || name == "map-type" || name == "source-counts" || name == "ssm-map-type")
        return true;
    return false;
}

Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "ssm-map"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Active::Vrfs::Vrf::SsmMaps::SsmMap::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
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

    yang_name = "summary"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(disabled_interface_count.yfilter)
	|| ydk::is_set(enabled_interface_count.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(group_limit.yfilter)
	|| ydk::is_set(is_disabled.yfilter)
	|| ydk::is_set(node_low_memory.yfilter)
	|| ydk::is_set(robustness.yfilter)
	|| ydk::is_set(supported_interfaces.yfilter)
	|| ydk::is_set(tunnel_mte_config_count.yfilter)
	|| ydk::is_set(unsupported_interfaces.yfilter);
}

std::string Mld::Active::Vrfs::Vrf::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled_interface_count.is_set || is_set(disabled_interface_count.yfilter)) leaf_name_data.push_back(disabled_interface_count.get_name_leafdata());
    if (enabled_interface_count.is_set || is_set(enabled_interface_count.yfilter)) leaf_name_data.push_back(enabled_interface_count.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (group_limit.is_set || is_set(group_limit.yfilter)) leaf_name_data.push_back(group_limit.get_name_leafdata());
    if (is_disabled.is_set || is_set(is_disabled.yfilter)) leaf_name_data.push_back(is_disabled.get_name_leafdata());
    if (node_low_memory.is_set || is_set(node_low_memory.yfilter)) leaf_name_data.push_back(node_low_memory.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.yfilter)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (supported_interfaces.is_set || is_set(supported_interfaces.yfilter)) leaf_name_data.push_back(supported_interfaces.get_name_leafdata());
    if (tunnel_mte_config_count.is_set || is_set(tunnel_mte_config_count.yfilter)) leaf_name_data.push_back(tunnel_mte_config_count.get_name_leafdata());
    if (unsupported_interfaces.is_set || is_set(unsupported_interfaces.yfilter)) leaf_name_data.push_back(unsupported_interfaces.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disabled-interface-count")
    {
        disabled_interface_count = value;
        disabled_interface_count.value_namespace = name_space;
        disabled_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled-interface-count")
    {
        enabled_interface_count = value;
        enabled_interface_count.value_namespace = name_space;
        enabled_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-limit")
    {
        group_limit = value;
        group_limit.value_namespace = name_space;
        group_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-disabled")
    {
        is_disabled = value;
        is_disabled.value_namespace = name_space;
        is_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-low-memory")
    {
        node_low_memory = value;
        node_low_memory.value_namespace = name_space;
        node_low_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness")
    {
        robustness = value;
        robustness.value_namespace = name_space;
        robustness.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supported-interfaces")
    {
        supported_interfaces = value;
        supported_interfaces.value_namespace = name_space;
        supported_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-mte-config-count")
    {
        tunnel_mte_config_count = value;
        tunnel_mte_config_count.value_namespace = name_space;
        tunnel_mte_config_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsupported-interfaces")
    {
        unsupported_interfaces = value;
        unsupported_interfaces.value_namespace = name_space;
        unsupported_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Active::Vrfs::Vrf::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disabled-interface-count")
    {
        disabled_interface_count.yfilter = yfilter;
    }
    if(value_path == "enabled-interface-count")
    {
        enabled_interface_count.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "group-limit")
    {
        group_limit.yfilter = yfilter;
    }
    if(value_path == "is-disabled")
    {
        is_disabled.yfilter = yfilter;
    }
    if(value_path == "node-low-memory")
    {
        node_low_memory.yfilter = yfilter;
    }
    if(value_path == "robustness")
    {
        robustness.yfilter = yfilter;
    }
    if(value_path == "supported-interfaces")
    {
        supported_interfaces.yfilter = yfilter;
    }
    if(value_path == "tunnel-mte-config-count")
    {
        tunnel_mte_config_count.yfilter = yfilter;
    }
    if(value_path == "unsupported-interfaces")
    {
        unsupported_interfaces.yfilter = yfilter;
    }
}

bool Mld::Active::Vrfs::Vrf::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "disabled-interface-count" || name == "enabled-interface-count" || name == "group-count" || name == "group-limit" || name == "is-disabled" || name == "node-low-memory" || name == "robustness" || name == "supported-interfaces" || name == "tunnel-mte-config-count" || name == "unsupported-interfaces")
        return true;
    return false;
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

    yang_name = "interface"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(group_limit.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(on_off.yfilter)
	|| ydk::is_set(parent_ifhandle.yfilter)
	|| ydk::is_set(router_uptime_in_seconds.yfilter)
	|| ydk::is_set(time_since_last_query_in_seconds.yfilter)
	|| ydk::is_set(time_since_last_report_in_seconds.yfilter);
}

std::string Mld::Active::Vrfs::Vrf::Summary::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::Summary::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (group_limit.is_set || is_set(group_limit.yfilter)) leaf_name_data.push_back(group_limit.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (on_off.is_set || is_set(on_off.yfilter)) leaf_name_data.push_back(on_off.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.yfilter)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.yfilter)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.yfilter)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.yfilter)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::Summary::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-limit")
    {
        group_limit = value;
        group_limit.value_namespace = name_space;
        group_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-off")
    {
        on_off = value;
        on_off.value_namespace = name_space;
        on_off.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
        parent_ifhandle.value_namespace = name_space;
        parent_ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
        router_uptime_in_seconds.value_namespace = name_space;
        router_uptime_in_seconds.value_namespace_prefix = name_space_prefix;
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
}

void Mld::Active::Vrfs::Vrf::Summary::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "group-limit")
    {
        group_limit.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "on-off")
    {
        on_off.yfilter = yfilter;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle.yfilter = yfilter;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds.yfilter = yfilter;
    }
}

bool Mld::Active::Vrfs::Vrf::Summary::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-count" || name == "group-limit" || name == "interface-name" || name == "on-off" || name == "parent-ifhandle" || name == "router-uptime-in-seconds" || name == "time-since-last-query-in-seconds" || name == "time-since-last-report-in-seconds")
        return true;
    return false;
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

    yang_name = "traffic-counters"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
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

std::string Mld::Active::Vrfs::Vrf::TrafficCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Active::Vrfs::Vrf::TrafficCounters::get_name_leaf_data() const
{
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

    return leaf_name_data;

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

void Mld::Active::Vrfs::Vrf::TrafficCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Active::Vrfs::Vrf::TrafficCounters::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Active::Vrfs::Vrf::TrafficCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auxillary-data-length-errors" || name == "bad-scope-errors" || name == "checksum-errors" || name == "elapsed-time" || name == "format-errors" || name == "get-packet-failure" || name == "input-disabled-idb" || name == "input-dvmrp" || name == "input-leaves" || name == "input-martian-address" || name == "input-mtrace" || name == "input-no-assigned-vrf-id" || name == "input-no-idb" || name == "input-no-platform-support-mtrace" || name == "input-no-vrf-in-idb" || name == "input-no-vrf-mtrace" || name == "input-pim" || name == "input-queries" || name == "input-reports" || name == "invalid-source-address-errors" || name == "miscellaneous-errors" || name == "no-socket-connection" || name == "output-dvmrp" || name == "output-leaves" || name == "output-mtrace" || name == "output-no-parent-interface-handle" || name == "output-pim" || name == "output-queries" || name == "output-reports" || name == "packet-manager-input-errors" || name == "packet-manager-output-errors" || name == "packets-in" || name == "packets-out" || name == "receive-socket-errors" || name == "socket-errors")
        return true;
    return false;
}

Mld::Standby::Standby()
    :
    default_context(std::make_shared<Mld::Standby::DefaultContext>())
	,process(std::make_shared<Mld::Standby::Process>())
	,vrfs(std::make_shared<Mld::Standby::Vrfs>())
{
    default_context->parent = this;
    process->parent = this;
    vrfs->parent = this;

    yang_name = "standby"; yang_parent_name = "mld"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::~Standby()
{
}

bool Mld::Standby::has_data() const
{
    return (default_context !=  nullptr && default_context->has_data())
	|| (process !=  nullptr && process->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Mld::Standby::has_operation() const
{
    return is_set(yfilter)
	|| (default_context !=  nullptr && default_context->has_operation())
	|| (process !=  nullptr && process->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Mld::Standby::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default-context")
    {
        if(default_context == nullptr)
        {
            default_context = std::make_shared<Mld::Standby::DefaultContext>();
        }
        return default_context;
    }

    if(child_yang_name == "process")
    {
        if(process == nullptr)
        {
            process = std::make_shared<Mld::Standby::Process>();
        }
        return process;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Mld::Standby::Vrfs>();
        }
        return vrfs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::get_children() const
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

void Mld::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default-context" || name == "process" || name == "vrfs")
        return true;
    return false;
}

Mld::Standby::DefaultContext::DefaultContext()
    :
    detail_groups(std::make_shared<Mld::Standby::DefaultContext::DetailGroups>())
	,explicit_groups(std::make_shared<Mld::Standby::DefaultContext::ExplicitGroups>())
	,global_interface_table(std::make_shared<Mld::Standby::DefaultContext::GlobalInterfaceTable>())
	,group_summary(std::make_shared<Mld::Standby::DefaultContext::GroupSummary>())
	,groups(std::make_shared<Mld::Standby::DefaultContext::Groups>())
	,ifrs_interface_summary(std::make_shared<Mld::Standby::DefaultContext::IfrsInterfaceSummary>())
	,ifrs_interfaces(std::make_shared<Mld::Standby::DefaultContext::IfrsInterfaces>())
	,interface_state_offs(std::make_shared<Mld::Standby::DefaultContext::InterfaceStateOffs>())
	,interface_state_ons(std::make_shared<Mld::Standby::DefaultContext::InterfaceStateOns>())
	,interface_table(std::make_shared<Mld::Standby::DefaultContext::InterfaceTable>())
	,interface_unicast_qos_adjusts(std::make_shared<Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts>())
	,non_active_groups(std::make_shared<Mld::Standby::DefaultContext::NonActiveGroups>())
	,ranges(std::make_shared<Mld::Standby::DefaultContext::Ranges>())
	,ssm_map_details(std::make_shared<Mld::Standby::DefaultContext::SsmMapDetails>())
	,ssm_maps(std::make_shared<Mld::Standby::DefaultContext::SsmMaps>())
	,summary(std::make_shared<Mld::Standby::DefaultContext::Summary>())
	,traffic_counters(std::make_shared<Mld::Standby::DefaultContext::TrafficCounters>())
{
    detail_groups->parent = this;
    explicit_groups->parent = this;
    global_interface_table->parent = this;
    group_summary->parent = this;
    groups->parent = this;
    ifrs_interface_summary->parent = this;
    ifrs_interfaces->parent = this;
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

    yang_name = "default-context"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::~DefaultContext()
{
}

bool Mld::Standby::DefaultContext::has_data() const
{
    return (detail_groups !=  nullptr && detail_groups->has_data())
	|| (explicit_groups !=  nullptr && explicit_groups->has_data())
	|| (global_interface_table !=  nullptr && global_interface_table->has_data())
	|| (group_summary !=  nullptr && group_summary->has_data())
	|| (groups !=  nullptr && groups->has_data())
	|| (ifrs_interface_summary !=  nullptr && ifrs_interface_summary->has_data())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_data())
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

bool Mld::Standby::DefaultContext::has_operation() const
{
    return is_set(yfilter)
	|| (detail_groups !=  nullptr && detail_groups->has_operation())
	|| (explicit_groups !=  nullptr && explicit_groups->has_operation())
	|| (global_interface_table !=  nullptr && global_interface_table->has_operation())
	|| (group_summary !=  nullptr && group_summary->has_operation())
	|| (groups !=  nullptr && groups->has_operation())
	|| (ifrs_interface_summary !=  nullptr && ifrs_interface_summary->has_operation())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_operation())
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

std::string Mld::Standby::DefaultContext::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-groups")
    {
        if(detail_groups == nullptr)
        {
            detail_groups = std::make_shared<Mld::Standby::DefaultContext::DetailGroups>();
        }
        return detail_groups;
    }

    if(child_yang_name == "explicit-groups")
    {
        if(explicit_groups == nullptr)
        {
            explicit_groups = std::make_shared<Mld::Standby::DefaultContext::ExplicitGroups>();
        }
        return explicit_groups;
    }

    if(child_yang_name == "global-interface-table")
    {
        if(global_interface_table == nullptr)
        {
            global_interface_table = std::make_shared<Mld::Standby::DefaultContext::GlobalInterfaceTable>();
        }
        return global_interface_table;
    }

    if(child_yang_name == "group-summary")
    {
        if(group_summary == nullptr)
        {
            group_summary = std::make_shared<Mld::Standby::DefaultContext::GroupSummary>();
        }
        return group_summary;
    }

    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<Mld::Standby::DefaultContext::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "ifrs-interface-summary")
    {
        if(ifrs_interface_summary == nullptr)
        {
            ifrs_interface_summary = std::make_shared<Mld::Standby::DefaultContext::IfrsInterfaceSummary>();
        }
        return ifrs_interface_summary;
    }

    if(child_yang_name == "ifrs-interfaces")
    {
        if(ifrs_interfaces == nullptr)
        {
            ifrs_interfaces = std::make_shared<Mld::Standby::DefaultContext::IfrsInterfaces>();
        }
        return ifrs_interfaces;
    }

    if(child_yang_name == "interface-state-offs")
    {
        if(interface_state_offs == nullptr)
        {
            interface_state_offs = std::make_shared<Mld::Standby::DefaultContext::InterfaceStateOffs>();
        }
        return interface_state_offs;
    }

    if(child_yang_name == "interface-state-ons")
    {
        if(interface_state_ons == nullptr)
        {
            interface_state_ons = std::make_shared<Mld::Standby::DefaultContext::InterfaceStateOns>();
        }
        return interface_state_ons;
    }

    if(child_yang_name == "interface-table")
    {
        if(interface_table == nullptr)
        {
            interface_table = std::make_shared<Mld::Standby::DefaultContext::InterfaceTable>();
        }
        return interface_table;
    }

    if(child_yang_name == "interface-unicast-qos-adjusts")
    {
        if(interface_unicast_qos_adjusts == nullptr)
        {
            interface_unicast_qos_adjusts = std::make_shared<Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts>();
        }
        return interface_unicast_qos_adjusts;
    }

    if(child_yang_name == "non-active-groups")
    {
        if(non_active_groups == nullptr)
        {
            non_active_groups = std::make_shared<Mld::Standby::DefaultContext::NonActiveGroups>();
        }
        return non_active_groups;
    }

    if(child_yang_name == "ranges")
    {
        if(ranges == nullptr)
        {
            ranges = std::make_shared<Mld::Standby::DefaultContext::Ranges>();
        }
        return ranges;
    }

    if(child_yang_name == "ssm-map-details")
    {
        if(ssm_map_details == nullptr)
        {
            ssm_map_details = std::make_shared<Mld::Standby::DefaultContext::SsmMapDetails>();
        }
        return ssm_map_details;
    }

    if(child_yang_name == "ssm-maps")
    {
        if(ssm_maps == nullptr)
        {
            ssm_maps = std::make_shared<Mld::Standby::DefaultContext::SsmMaps>();
        }
        return ssm_maps;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Mld::Standby::DefaultContext::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "traffic-counters")
    {
        if(traffic_counters == nullptr)
        {
            traffic_counters = std::make_shared<Mld::Standby::DefaultContext::TrafficCounters>();
        }
        return traffic_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::get_children() const
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

void Mld::Standby::DefaultContext::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::DefaultContext::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::DefaultContext::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-groups" || name == "explicit-groups" || name == "global-interface-table" || name == "group-summary" || name == "groups" || name == "ifrs-interface-summary" || name == "ifrs-interfaces" || name == "interface-state-offs" || name == "interface-state-ons" || name == "interface-table" || name == "interface-unicast-qos-adjusts" || name == "non-active-groups" || name == "ranges" || name == "ssm-map-details" || name == "ssm-maps" || name == "summary" || name == "traffic-counters")
        return true;
    return false;
}

Mld::Standby::DefaultContext::DetailGroups::DetailGroups()
{

    yang_name = "detail-groups"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::DetailGroups::~DetailGroups()
{
}

bool Mld::Standby::DefaultContext::DetailGroups::has_data() const
{
    for (std::size_t index=0; index<detail_group.size(); index++)
    {
        if(detail_group[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Standby::DefaultContext::DetailGroups::has_operation() const
{
    for (std::size_t index=0; index<detail_group.size(); index++)
    {
        if(detail_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::Standby::DefaultContext::DetailGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::DetailGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::DetailGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::DetailGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::DefaultContext::DetailGroups::DetailGroup>();
        c->parent = this;
        detail_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::DetailGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : detail_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::DefaultContext::DetailGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::DefaultContext::DetailGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::DefaultContext::DetailGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-group")
        return true;
    return false;
}

Mld::Standby::DefaultContext::DetailGroups::DetailGroup::DetailGroup()
    :
    group_address{YType::str, "group-address"},
    interface_name{YType::str, "interface-name"},
    is_host_exclude_mode{YType::boolean, "is-host-exclude-mode"},
    is_router_exclude_mode{YType::boolean, "is-router-exclude-mode"},
    source_address{YType::str, "source-address"}
    	,
    group_info(std::make_shared<Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo>())
{
    group_info->parent = this;

    yang_name = "detail-group"; yang_parent_name = "detail-groups"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::DetailGroups::DetailGroup::~DetailGroup()
{
}

bool Mld::Standby::DefaultContext::DetailGroups::DetailGroup::has_data() const
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

bool Mld::Standby::DefaultContext::DetailGroups::DetailGroup::has_operation() const
{
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_host_exclude_mode.yfilter)
	|| ydk::is_set(is_router_exclude_mode.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| (group_info !=  nullptr && group_info->has_operation());
}

std::string Mld::Standby::DefaultContext::DetailGroups::DetailGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/detail-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::DetailGroups::DetailGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::DetailGroups::DetailGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_host_exclude_mode.is_set || is_set(is_host_exclude_mode.yfilter)) leaf_name_data.push_back(is_host_exclude_mode.get_name_leafdata());
    if (is_router_exclude_mode.is_set || is_set(is_router_exclude_mode.yfilter)) leaf_name_data.push_back(is_router_exclude_mode.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::DetailGroups::DetailGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-info")
    {
        if(group_info == nullptr)
        {
            group_info = std::make_shared<Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo>();
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
        auto c = std::make_shared<Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source>();
        c->parent = this;
        source.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::DetailGroups::DetailGroup::get_children() const
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

void Mld::Standby::DefaultContext::DetailGroups::DetailGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "is-host-exclude-mode")
    {
        is_host_exclude_mode = value;
        is_host_exclude_mode.value_namespace = name_space;
        is_host_exclude_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-router-exclude-mode")
    {
        is_router_exclude_mode = value;
        is_router_exclude_mode.value_namespace = name_space;
        is_router_exclude_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Standby::DefaultContext::DetailGroups::DetailGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-host-exclude-mode")
    {
        is_host_exclude_mode.yfilter = yfilter;
    }
    if(value_path == "is-router-exclude-mode")
    {
        is_router_exclude_mode.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool Mld::Standby::DefaultContext::DetailGroups::DetailGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-info" || name == "source" || name == "group-address" || name == "interface-name" || name == "is-host-exclude-mode" || name == "is-router-exclude-mode" || name == "source-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupInfo()
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
    group_address_xr(std::make_shared<Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr>())
	,last_reporter(std::make_shared<Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter>())
	,source_address(std::make_shared<Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress>())
{
    group_address_xr->parent = this;
    last_reporter->parent = this;
    source_address->parent = this;

    yang_name = "group-info"; yang_parent_name = "detail-group"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::~GroupInfo()
{
}

bool Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::has_data() const
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

bool Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expiration_time.yfilter)
	|| ydk::is_set(explicit_tracking_enabled.yfilter)
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

std::string Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/detail-groups/detail-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.yfilter)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (explicit_tracking_enabled.is_set || is_set(explicit_tracking_enabled.yfilter)) leaf_name_data.push_back(explicit_tracking_enabled.get_name_leafdata());
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

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "last-reporter")
    {
        if(last_reporter == nullptr)
        {
            last_reporter = std::make_shared<Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter>();
        }
        return last_reporter;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::get_children() const
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

void Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expiration-time")
    {
        expiration_time.yfilter = yfilter;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled.yfilter = yfilter;
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

bool Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "last-reporter" || name == "source-address" || name == "expiration-time" || name == "explicit-tracking-enabled" || name == "interface-name-xr" || name == "is-added" || name == "is-low-memory" || name == "is-self-join" || name == "is-suppressed" || name == "older-host-version1-timer" || name == "older-host-version2-timer" || name == "router-filter-mode" || name == "row-status" || name == "uptime")
        return true;
    return false;
}

Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "group-info"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::~GroupAddressXr()
{
}

bool Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/detail-groups/detail-group/group-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "last-reporter"; yang_parent_name = "group-info"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::~LastReporter()
{
}

bool Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/detail-groups/detail-group/group-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::LastReporter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "group-info"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::~SourceAddress()
{
}

bool Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/detail-groups/detail-group/group-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::DetailGroups::DetailGroup::GroupInfo::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::Source()
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
    source_address(std::make_shared<Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress>())
{
    source_address->parent = this;

    yang_name = "source"; yang_parent_name = "detail-group"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::~Source()
{
}

bool Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::has_data() const
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

bool Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expiration_time.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(is_added.yfilter)
	|| ydk::is_set(is_forward.yfilter)
	|| ydk::is_set(is_local.yfilter)
	|| ydk::is_set(is_remote.yfilter)
	|| ydk::is_set(is_we_report.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/detail-groups/detail-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.yfilter)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.yfilter)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_forward.is_set || is_set(is_forward.yfilter)) leaf_name_data.push_back(is_forward.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.yfilter)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (is_remote.is_set || is_set(is_remote.yfilter)) leaf_name_data.push_back(is_remote.get_name_leafdata());
    if (is_we_report.is_set || is_set(is_we_report.yfilter)) leaf_name_data.push_back(is_we_report.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
        expiration_time.value_namespace = name_space;
        expiration_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-added")
    {
        is_added = value;
        is_added.value_namespace = name_space;
        is_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-forward")
    {
        is_forward = value;
        is_forward.value_namespace = name_space;
        is_forward.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local")
    {
        is_local = value;
        is_local.value_namespace = name_space;
        is_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote")
    {
        is_remote = value;
        is_remote.value_namespace = name_space;
        is_remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-we-report")
    {
        is_we_report = value;
        is_we_report.value_namespace = name_space;
        is_we_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expiration-time")
    {
        expiration_time.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "is-added")
    {
        is_added.yfilter = yfilter;
    }
    if(value_path == "is-forward")
    {
        is_forward.yfilter = yfilter;
    }
    if(value_path == "is-local")
    {
        is_local.yfilter = yfilter;
    }
    if(value_path == "is-remote")
    {
        is_remote.yfilter = yfilter;
    }
    if(value_path == "is-we-report")
    {
        is_we_report.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "expiration-time" || name == "flags" || name == "is-added" || name == "is-forward" || name == "is-local" || name == "is-remote" || name == "is-we-report" || name == "uptime")
        return true;
    return false;
}

Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::~SourceAddress()
{
}

bool Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/detail-groups/detail-group/source/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::DetailGroups::DetailGroup::Source::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroups()
{

    yang_name = "explicit-groups"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::ExplicitGroups::~ExplicitGroups()
{
}

bool Mld::Standby::DefaultContext::ExplicitGroups::has_data() const
{
    for (std::size_t index=0; index<explicit_group.size(); index++)
    {
        if(explicit_group[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Standby::DefaultContext::ExplicitGroups::has_operation() const
{
    for (std::size_t index=0; index<explicit_group.size(); index++)
    {
        if(explicit_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::Standby::DefaultContext::ExplicitGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::ExplicitGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::ExplicitGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::ExplicitGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup>();
        c->parent = this;
        explicit_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::ExplicitGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : explicit_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::DefaultContext::ExplicitGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::DefaultContext::ExplicitGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::DefaultContext::ExplicitGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-group")
        return true;
    return false;
}

Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::ExplicitGroup()
    :
    exclude_hosts{YType::uint32, "exclude-hosts"},
    group_address{YType::str, "group-address"},
    include_hosts{YType::uint32, "include-hosts"},
    interface_name{YType::str, "interface-name"},
    source_address{YType::str, "source-address"}
    	,
    group_info(std::make_shared<Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo>())
{
    group_info->parent = this;

    yang_name = "explicit-group"; yang_parent_name = "explicit-groups"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::~ExplicitGroup()
{
}

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::has_data() const
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

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(exclude_hosts.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(include_hosts.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| (group_info !=  nullptr && group_info->has_operation());
}

std::string Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/explicit-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclude_hosts.is_set || is_set(exclude_hosts.yfilter)) leaf_name_data.push_back(exclude_hosts.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (include_hosts.is_set || is_set(include_hosts.yfilter)) leaf_name_data.push_back(include_hosts.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-info")
    {
        if(group_info == nullptr)
        {
            group_info = std::make_shared<Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo>();
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
        auto c = std::make_shared<Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::get_children() const
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

void Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclude-hosts")
    {
        exclude_hosts = value;
        exclude_hosts.value_namespace = name_space;
        exclude_hosts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-hosts")
    {
        include_hosts = value;
        include_hosts.value_namespace = name_space;
        include_hosts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclude-hosts")
    {
        exclude_hosts.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "include-hosts")
    {
        include_hosts.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-info" || name == "host" || name == "exclude-hosts" || name == "group-address" || name == "include-hosts" || name == "interface-name" || name == "source-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupInfo()
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
    group_address_xr(std::make_shared<Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr>())
	,last_reporter(std::make_shared<Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter>())
	,source_address(std::make_shared<Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress>())
{
    group_address_xr->parent = this;
    last_reporter->parent = this;
    source_address->parent = this;

    yang_name = "group-info"; yang_parent_name = "explicit-group"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::~GroupInfo()
{
}

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::has_data() const
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

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expiration_time.yfilter)
	|| ydk::is_set(explicit_tracking_enabled.yfilter)
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

std::string Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/explicit-groups/explicit-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.yfilter)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (explicit_tracking_enabled.is_set || is_set(explicit_tracking_enabled.yfilter)) leaf_name_data.push_back(explicit_tracking_enabled.get_name_leafdata());
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

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "last-reporter")
    {
        if(last_reporter == nullptr)
        {
            last_reporter = std::make_shared<Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter>();
        }
        return last_reporter;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::get_children() const
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

void Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expiration-time")
    {
        expiration_time.yfilter = yfilter;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled.yfilter = yfilter;
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

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "last-reporter" || name == "source-address" || name == "expiration-time" || name == "explicit-tracking-enabled" || name == "interface-name-xr" || name == "is-added" || name == "is-low-memory" || name == "is-self-join" || name == "is-suppressed" || name == "older-host-version1-timer" || name == "older-host-version2-timer" || name == "router-filter-mode" || name == "row-status" || name == "uptime")
        return true;
    return false;
}

Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "group-info"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::~GroupAddressXr()
{
}

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/explicit-groups/explicit-group/group-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "last-reporter"; yang_parent_name = "group-info"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::~LastReporter()
{
}

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/explicit-groups/explicit-group/group-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "group-info"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::~SourceAddress()
{
}

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/explicit-groups/explicit-group/group-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Host()
    :
    expiration_time{YType::uint32, "expiration-time"},
    is_exclude{YType::boolean, "is-exclude"},
    source_count{YType::uint32, "source-count"},
    uptime{YType::uint32, "uptime"}
    	,
    address(std::make_shared<Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address>())
{
    address->parent = this;

    yang_name = "host"; yang_parent_name = "explicit-group"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::~Host()
{
}

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::has_data() const
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

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::has_operation() const
{
    for (std::size_t index=0; index<source_address.size(); index++)
    {
        if(source_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(expiration_time.yfilter)
	|| ydk::is_set(is_exclude.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/explicit-groups/explicit-group/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.yfilter)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (is_exclude.is_set || is_set(is_exclude.yfilter)) leaf_name_data.push_back(is_exclude.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address>();
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
        auto c = std::make_shared<Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress>();
        c->parent = this;
        source_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::get_children() const
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

void Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
        expiration_time.value_namespace = name_space;
        expiration_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-exclude")
    {
        is_exclude = value;
        is_exclude.value_namespace = name_space;
        is_exclude.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expiration-time")
    {
        expiration_time.yfilter = yfilter;
    }
    if(value_path == "is-exclude")
    {
        is_exclude.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "source-address" || name == "expiration-time" || name == "is-exclude" || name == "source-count" || name == "uptime")
        return true;
    return false;
}

Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::~Address()
{
}

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/explicit-groups/explicit-group/host/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::~SourceAddress()
{
}

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/explicit-groups/explicit-group/host/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::ExplicitGroups::ExplicitGroup::Host::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::GlobalInterfaceTable::GlobalInterfaceTable()
{

    yang_name = "global-interface-table"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Mld::Standby::DefaultContext::GlobalInterfaceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::GlobalInterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-interface-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::GlobalInterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void Mld::Standby::DefaultContext::GlobalInterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::DefaultContext::GlobalInterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::DefaultContext::GlobalInterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
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

    yang_name = "interface"; yang_parent_name = "global-interface-table"; is_top_level_class = false; has_list_ancestor = false;
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

std::string Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/global-interface-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::get_name_leaf_data() const
{
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

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "querier-address" || name == "subscriber-address" || name == "interface-name" || name == "configuration-mcast-vrf-error" || name == "configuration-mcast-vrf-set" || name == "configurationvrf-error" || name == "configurationvrf-set" || name == "group-joins" || name == "group-leaves" || name == "host-version" || name == "igmp-version" || name == "interface-name-xr" || name == "is-configurationverify" || name == "is-identity-present" || name == "is-im-state-registered" || name == "is-interface-up" || name == "is-ip-enabled" || name == "is-las-registered" || name == "is-las-request" || name == "is-querier" || name == "is-router-enabled" || name == "is-subscriber" || name == "las-get-address-count" || name == "las-ll-add-update-count" || name == "las-ll-registration-count" || name == "las-ll-remove-update-count" || name == "las-null-update-count" || name == "las-unregistration-count" || name == "las-update-count" || name == "last-member-query-interval" || name == "location" || name == "mte-tuple-count" || name == "mte-vrf-id" || name == "mtu" || name == "parent-ifhandle" || name == "prefix-length" || name == "proxy-interface" || name == "querier-uptime" || name == "query-interval" || name == "query-maximum-response-time" || name == "query-timeout" || name == "robustness" || name == "router-uptime-in-seconds" || name == "state" || name == "subscriber-id" || name == "subscriber-mode" || name == "time-since-last-query-in-seconds" || name == "time-since-last-report-in-seconds" || name == "total-active-groups" || name == "vrf-id" || name == "vrf-state")
        return true;
    return false;
}

Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "querier-address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::QuerierAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "subscriber-address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::GlobalInterfaceTable::Interface::SubscriberAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::GroupSummary::GroupSummary()
    :
    group_count{YType::uint32, "group-count"},
    groutes{YType::uint32, "groutes"},
    is_low_memory{YType::boolean, "is-low-memory"},
    sg_routes{YType::uint32, "sg-routes"}
{

    yang_name = "group-summary"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(groutes.yfilter)
	|| ydk::is_set(is_low_memory.yfilter)
	|| ydk::is_set(sg_routes.yfilter);
}

std::string Mld::Standby::DefaultContext::GroupSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::GroupSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::GroupSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (groutes.is_set || is_set(groutes.yfilter)) leaf_name_data.push_back(groutes.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.yfilter)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (sg_routes.is_set || is_set(sg_routes.yfilter)) leaf_name_data.push_back(sg_routes.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::GroupSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::GroupSummary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::GroupSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-count" || name == "groutes" || name == "is-low-memory" || name == "sg-routes")
        return true;
    return false;
}

Mld::Standby::DefaultContext::Groups::Groups()
{

    yang_name = "groups"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Mld::Standby::DefaultContext::Groups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void Mld::Standby::DefaultContext::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::DefaultContext::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::DefaultContext::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
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

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = false;
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

std::string Mld::Standby::DefaultContext::Groups::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::Groups::Group::get_name_leaf_data() const
{
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

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "last-reporter" || name == "source-address" || name == "expiration-time" || name == "explicit-tracking-enabled" || name == "group-address" || name == "interface-name" || name == "interface-name-xr" || name == "is-added" || name == "is-low-memory" || name == "is-self-join" || name == "is-suppressed" || name == "older-host-version1-timer" || name == "older-host-version2-timer" || name == "router-filter-mode" || name == "row-status" || name == "uptime")
        return true;
    return false;
}

Mld::Standby::DefaultContext::Groups::Group::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::Groups::Group::GroupAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/groups/group/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::Groups::Group::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::Groups::Group::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::Groups::Group::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::Groups::Group::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::Groups::Group::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::Groups::Group::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "last-reporter"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::Groups::Group::LastReporter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/groups/group/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::Groups::Group::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::Groups::Group::LastReporter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::Groups::Group::LastReporter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::Groups::Group::LastReporter::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::Groups::Group::LastReporter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::Groups::Group::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::Groups::Group::SourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/groups/group/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::Groups::Group::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::Groups::Group::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::Groups::Group::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::Groups::Group::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::Groups::Group::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::IfrsInterfaceSummary::IfrsInterfaceSummary()
    :
    configuration_count{YType::uint32, "configuration-count"},
    interface_count{YType::uint32, "interface-count"}
{

    yang_name = "ifrs-interface-summary"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(configuration_count.yfilter)
	|| ydk::is_set(interface_count.yfilter);
}

std::string Mld::Standby::DefaultContext::IfrsInterfaceSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::IfrsInterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::IfrsInterfaceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configuration_count.is_set || is_set(configuration_count.yfilter)) leaf_name_data.push_back(configuration_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::IfrsInterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::IfrsInterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::IfrsInterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration-count" || name == "interface-count")
        return true;
    return false;
}

Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterfaces()
{

    yang_name = "ifrs-interfaces"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Mld::Standby::DefaultContext::IfrsInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::IfrsInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::IfrsInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void Mld::Standby::DefaultContext::IfrsInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::DefaultContext::IfrsInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::DefaultContext::IfrsInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifrs-interface")
        return true;
    return false;
}

Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IfrsInterface()
    :
    interface_name{YType::str, "interface-name"},
    join_group_count{YType::uint32, "join-group-count"}
    	,
    igmp_interface_entry(std::make_shared<Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry>())
{
    igmp_interface_entry->parent = this;

    yang_name = "ifrs-interface"; yang_parent_name = "ifrs-interfaces"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(join_group_count.yfilter)
	|| (igmp_interface_entry !=  nullptr && igmp_interface_entry->has_operation());
}

std::string Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/ifrs-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (join_group_count.is_set || is_set(join_group_count.yfilter)) leaf_name_data.push_back(join_group_count.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igmp-interface-entry" || name == "interface-name" || name == "join-group-count")
        return true;
    return false;
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

    yang_name = "igmp-interface-entry"; yang_parent_name = "ifrs-interface"; is_top_level_class = false; has_list_ancestor = true;
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

std::string Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp-interface-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_name_leaf_data() const
{
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

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "querier-address" || name == "subscriber-address" || name == "configuration-mcast-vrf-error" || name == "configuration-mcast-vrf-set" || name == "configurationvrf-error" || name == "configurationvrf-set" || name == "group-joins" || name == "group-leaves" || name == "host-version" || name == "igmp-version" || name == "interface-name-xr" || name == "is-configurationverify" || name == "is-identity-present" || name == "is-im-state-registered" || name == "is-interface-up" || name == "is-ip-enabled" || name == "is-las-registered" || name == "is-las-request" || name == "is-querier" || name == "is-router-enabled" || name == "is-subscriber" || name == "las-get-address-count" || name == "las-ll-add-update-count" || name == "las-ll-registration-count" || name == "las-ll-remove-update-count" || name == "las-null-update-count" || name == "las-unregistration-count" || name == "las-update-count" || name == "last-member-query-interval" || name == "location" || name == "mte-tuple-count" || name == "mte-vrf-id" || name == "mtu" || name == "parent-ifhandle" || name == "prefix-length" || name == "proxy-interface" || name == "querier-uptime" || name == "query-interval" || name == "query-maximum-response-time" || name == "query-timeout" || name == "robustness" || name == "router-uptime-in-seconds" || name == "state" || name == "subscriber-id" || name == "subscriber-mode" || name == "time-since-last-query-in-seconds" || name == "time-since-last-report-in-seconds" || name == "total-active-groups" || name == "vrf-id" || name == "vrf-state")
        return true;
    return false;
}

Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "igmp-interface-entry"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "querier-address"; yang_parent_name = "igmp-interface-entry"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "subscriber-address"; yang_parent_name = "igmp-interface-entry"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOffs()
{

    yang_name = "interface-state-offs"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Mld::Standby::DefaultContext::InterfaceStateOffs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::InterfaceStateOffs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-offs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::InterfaceStateOffs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void Mld::Standby::DefaultContext::InterfaceStateOffs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::DefaultContext::InterfaceStateOffs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::DefaultContext::InterfaceStateOffs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-state-off")
        return true;
    return false;
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

    yang_name = "interface-state-off"; yang_parent_name = "interface-state-offs"; is_top_level_class = false; has_list_ancestor = false;
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

std::string Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/interface-state-offs/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-off" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::get_name_leaf_data() const
{
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

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "querier-address" || name == "subscriber-address" || name == "interface-name" || name == "configuration-mcast-vrf-error" || name == "configuration-mcast-vrf-set" || name == "configurationvrf-error" || name == "configurationvrf-set" || name == "group-joins" || name == "group-leaves" || name == "host-version" || name == "igmp-version" || name == "interface-name-xr" || name == "is-configurationverify" || name == "is-identity-present" || name == "is-im-state-registered" || name == "is-interface-up" || name == "is-ip-enabled" || name == "is-las-registered" || name == "is-las-request" || name == "is-querier" || name == "is-router-enabled" || name == "is-subscriber" || name == "las-get-address-count" || name == "las-ll-add-update-count" || name == "las-ll-registration-count" || name == "las-ll-remove-update-count" || name == "las-null-update-count" || name == "las-unregistration-count" || name == "las-update-count" || name == "last-member-query-interval" || name == "location" || name == "mte-tuple-count" || name == "mte-vrf-id" || name == "mtu" || name == "parent-ifhandle" || name == "prefix-length" || name == "proxy-interface" || name == "querier-uptime" || name == "query-interval" || name == "query-maximum-response-time" || name == "query-timeout" || name == "robustness" || name == "router-uptime-in-seconds" || name == "state" || name == "subscriber-id" || name == "subscriber-mode" || name == "time-since-last-query-in-seconds" || name == "time-since-last-report-in-seconds" || name == "total-active-groups" || name == "vrf-id" || name == "vrf-state")
        return true;
    return false;
}

Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "interface-state-off"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "querier-address"; yang_parent_name = "interface-state-off"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "subscriber-address"; yang_parent_name = "interface-state-off"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOns()
{

    yang_name = "interface-state-ons"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::InterfaceStateOns::~InterfaceStateOns()
{
}

bool Mld::Standby::DefaultContext::InterfaceStateOns::has_data() const
{
    for (std::size_t index=0; index<interface_state_on.size(); index++)
    {
        if(interface_state_on[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Standby::DefaultContext::InterfaceStateOns::has_operation() const
{
    for (std::size_t index=0; index<interface_state_on.size(); index++)
    {
        if(interface_state_on[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::Standby::DefaultContext::InterfaceStateOns::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::InterfaceStateOns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-ons";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::InterfaceStateOns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceStateOns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn>();
        c->parent = this;
        interface_state_on.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceStateOns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_state_on)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::DefaultContext::InterfaceStateOns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::DefaultContext::InterfaceStateOns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::DefaultContext::InterfaceStateOns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-state-on")
        return true;
    return false;
}

Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::InterfaceStateOn()
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
    address(std::make_shared<Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address>())
	,querier_address(std::make_shared<Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress>())
{
    address->parent = this;
    querier_address->parent = this;
    subscriber_address->parent = this;

    yang_name = "interface-state-on"; yang_parent_name = "interface-state-ons"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::~InterfaceStateOn()
{
}

bool Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::has_data() const
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

bool Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::has_operation() const
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

std::string Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/interface-state-ons/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-on" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::get_name_leaf_data() const
{
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

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::get_children() const
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

void Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "querier-address" || name == "subscriber-address" || name == "interface-name" || name == "configuration-mcast-vrf-error" || name == "configuration-mcast-vrf-set" || name == "configurationvrf-error" || name == "configurationvrf-set" || name == "group-joins" || name == "group-leaves" || name == "host-version" || name == "igmp-version" || name == "interface-name-xr" || name == "is-configurationverify" || name == "is-identity-present" || name == "is-im-state-registered" || name == "is-interface-up" || name == "is-ip-enabled" || name == "is-las-registered" || name == "is-las-request" || name == "is-querier" || name == "is-router-enabled" || name == "is-subscriber" || name == "las-get-address-count" || name == "las-ll-add-update-count" || name == "las-ll-registration-count" || name == "las-ll-remove-update-count" || name == "las-null-update-count" || name == "las-unregistration-count" || name == "las-update-count" || name == "last-member-query-interval" || name == "location" || name == "mte-tuple-count" || name == "mte-vrf-id" || name == "mtu" || name == "parent-ifhandle" || name == "prefix-length" || name == "proxy-interface" || name == "querier-uptime" || name == "query-interval" || name == "query-maximum-response-time" || name == "query-timeout" || name == "robustness" || name == "router-uptime-in-seconds" || name == "state" || name == "subscriber-id" || name == "subscriber-mode" || name == "time-since-last-query-in-seconds" || name == "time-since-last-report-in-seconds" || name == "total-active-groups" || name == "vrf-id" || name == "vrf-state")
        return true;
    return false;
}

Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "interface-state-on"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::~Address()
{
}

bool Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "querier-address"; yang_parent_name = "interface-state-on"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::QuerierAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "subscriber-address"; yang_parent_name = "interface-state-on"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::InterfaceStateOns::InterfaceStateOn::SubscriberAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::InterfaceTable::InterfaceTable()
{

    yang_name = "interface-table"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::InterfaceTable::~InterfaceTable()
{
}

bool Mld::Standby::DefaultContext::InterfaceTable::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Standby::DefaultContext::InterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::Standby::DefaultContext::InterfaceTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::InterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::InterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::DefaultContext::InterfaceTable::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::DefaultContext::InterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::DefaultContext::InterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::DefaultContext::InterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Mld::Standby::DefaultContext::InterfaceTable::Interface::Interface()
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
    address(std::make_shared<Mld::Standby::DefaultContext::InterfaceTable::Interface::Address>())
	,querier_address(std::make_shared<Mld::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress>())
{
    address->parent = this;
    querier_address->parent = this;
    subscriber_address->parent = this;

    yang_name = "interface"; yang_parent_name = "interface-table"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::InterfaceTable::Interface::~Interface()
{
}

bool Mld::Standby::DefaultContext::InterfaceTable::Interface::has_data() const
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

bool Mld::Standby::DefaultContext::InterfaceTable::Interface::has_operation() const
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

std::string Mld::Standby::DefaultContext::InterfaceTable::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/interface-table/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::InterfaceTable::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::InterfaceTable::Interface::get_name_leaf_data() const
{
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

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceTable::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Standby::DefaultContext::InterfaceTable::Interface::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceTable::Interface::get_children() const
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

void Mld::Standby::DefaultContext::InterfaceTable::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::InterfaceTable::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::InterfaceTable::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "querier-address" || name == "subscriber-address" || name == "interface-name" || name == "configuration-mcast-vrf-error" || name == "configuration-mcast-vrf-set" || name == "configurationvrf-error" || name == "configurationvrf-set" || name == "group-joins" || name == "group-leaves" || name == "host-version" || name == "igmp-version" || name == "interface-name-xr" || name == "is-configurationverify" || name == "is-identity-present" || name == "is-im-state-registered" || name == "is-interface-up" || name == "is-ip-enabled" || name == "is-las-registered" || name == "is-las-request" || name == "is-querier" || name == "is-router-enabled" || name == "is-subscriber" || name == "las-get-address-count" || name == "las-ll-add-update-count" || name == "las-ll-registration-count" || name == "las-ll-remove-update-count" || name == "las-null-update-count" || name == "las-unregistration-count" || name == "las-update-count" || name == "last-member-query-interval" || name == "location" || name == "mte-tuple-count" || name == "mte-vrf-id" || name == "mtu" || name == "parent-ifhandle" || name == "prefix-length" || name == "proxy-interface" || name == "querier-uptime" || name == "query-interval" || name == "query-maximum-response-time" || name == "query-timeout" || name == "robustness" || name == "router-uptime-in-seconds" || name == "state" || name == "subscriber-id" || name == "subscriber-mode" || name == "time-since-last-query-in-seconds" || name == "time-since-last-report-in-seconds" || name == "total-active-groups" || name == "vrf-id" || name == "vrf-state")
        return true;
    return false;
}

Mld::Standby::DefaultContext::InterfaceTable::Interface::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::DefaultContext::InterfaceTable::Interface::Address::~Address()
{
}

bool Mld::Standby::DefaultContext::InterfaceTable::Interface::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::InterfaceTable::Interface::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::InterfaceTable::Interface::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::InterfaceTable::Interface::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceTable::Interface::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceTable::Interface::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::InterfaceTable::Interface::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::InterfaceTable::Interface::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::InterfaceTable::Interface::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "querier-address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::InterfaceTable::Interface::QuerierAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "subscriber-address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::InterfaceTable::Interface::SubscriberAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjusts()
{

    yang_name = "interface-unicast-qos-adjusts"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::~InterfaceUnicastQosAdjusts()
{
}

bool Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::has_data() const
{
    for (std::size_t index=0; index<interface_unicast_qos_adjust.size(); index++)
    {
        if(interface_unicast_qos_adjust[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::has_operation() const
{
    for (std::size_t index=0; index<interface_unicast_qos_adjust.size(); index++)
    {
        if(interface_unicast_qos_adjust[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-unicast-qos-adjusts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust>();
        c->parent = this;
        interface_unicast_qos_adjust.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_unicast_qos_adjust)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-unicast-qos-adjust")
        return true;
    return false;
}

Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::InterfaceUnicastQosAdjust()
    :
    interface_name{YType::str, "interface-name"},
    is_virtual_access{YType::boolean, "is-virtual-access"},
    rate{YType::uint32, "rate"},
    rate_decrements{YType::uint32, "rate-decrements"},
    rate_increments{YType::uint32, "rate-increments"}
{

    yang_name = "interface-unicast-qos-adjust"; yang_parent_name = "interface-unicast-qos-adjusts"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::~InterfaceUnicastQosAdjust()
{
}

bool Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::has_data() const
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

bool Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::has_operation() const
{
    for (std::size_t index=0; index<update.size(); index++)
    {
        if(update[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_virtual_access.yfilter)
	|| ydk::is_set(rate.yfilter)
	|| ydk::is_set(rate_decrements.yfilter)
	|| ydk::is_set(rate_increments.yfilter);
}

std::string Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/interface-unicast-qos-adjusts/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-unicast-qos-adjust" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_virtual_access.is_set || is_set(is_virtual_access.yfilter)) leaf_name_data.push_back(is_virtual_access.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());
    if (rate_decrements.is_set || is_set(rate_decrements.yfilter)) leaf_name_data.push_back(rate_decrements.get_name_leafdata());
    if (rate_increments.is_set || is_set(rate_increments.yfilter)) leaf_name_data.push_back(rate_increments.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update>();
        c->parent = this;
        update.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : update)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-virtual-access")
    {
        is_virtual_access = value;
        is_virtual_access.value_namespace = name_space;
        is_virtual_access.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-decrements")
    {
        rate_decrements = value;
        rate_decrements.value_namespace = name_space;
        rate_decrements.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate-increments")
    {
        rate_increments = value;
        rate_increments.value_namespace = name_space;
        rate_increments.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-virtual-access")
    {
        is_virtual_access.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
    if(value_path == "rate-decrements")
    {
        rate_decrements.yfilter = yfilter;
    }
    if(value_path == "rate-increments")
    {
        rate_increments.yfilter = yfilter;
    }
}

bool Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update" || name == "interface-name" || name == "is-virtual-access" || name == "rate" || name == "rate-decrements" || name == "rate-increments")
        return true;
    return false;
}

Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::Update()
    :
    is_add{YType::boolean, "is-add"},
    received_time{YType::uint64, "received-time"},
    weight{YType::uint32, "weight"}
    	,
    group_address(std::make_shared<Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress>())
	,source_address(std::make_shared<Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress>())
{
    group_address->parent = this;
    source_address->parent = this;

    yang_name = "update"; yang_parent_name = "interface-unicast-qos-adjust"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::~Update()
{
}

bool Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::has_data() const
{
    return is_add.is_set
	|| received_time.is_set
	|| weight.is_set
	|| (group_address !=  nullptr && group_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_add.yfilter)
	|| ydk::is_set(received_time.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (group_address !=  nullptr && group_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_add.is_set || is_set(is_add.yfilter)) leaf_name_data.push_back(is_add.get_name_leafdata());
    if (received_time.is_set || is_set(received_time.yfilter)) leaf_name_data.push_back(received_time.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address")
    {
        if(group_address == nullptr)
        {
            group_address = std::make_shared<Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress>();
        }
        return group_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::get_children() const
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

void Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-add")
    {
        is_add = value;
        is_add.value_namespace = name_space;
        is_add.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-time")
    {
        received_time = value;
        received_time.value_namespace = name_space;
        received_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-add")
    {
        is_add.yfilter = yfilter;
    }
    if(value_path == "received-time")
    {
        received_time.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "source-address" || name == "is-add" || name == "received-time" || name == "weight")
        return true;
    return false;
}

Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address"; yang_parent_name = "update"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::GroupAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "update"; is_top_level_class = false; has_list_ancestor = true;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::InterfaceUnicastQosAdjusts::InterfaceUnicastQosAdjust::Update::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups()
{

    yang_name = "non-active-groups"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::NonActiveGroups::~NonActiveGroups()
{
}

bool Mld::Standby::DefaultContext::NonActiveGroups::has_data() const
{
    for (std::size_t index=0; index<non_active_groups.size(); index++)
    {
        if(non_active_groups[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Standby::DefaultContext::NonActiveGroups::has_operation() const
{
    for (std::size_t index=0; index<non_active_groups.size(); index++)
    {
        if(non_active_groups[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::Standby::DefaultContext::NonActiveGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::NonActiveGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-active-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::NonActiveGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::NonActiveGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_>();
        c->parent = this;
        non_active_groups.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::NonActiveGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : non_active_groups)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::DefaultContext::NonActiveGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::DefaultContext::NonActiveGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::DefaultContext::NonActiveGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "non-active-groups")
        return true;
    return false;
}

Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::NonActiveGroups_()
    :
    interface{YType::str, "interface"},
    reason_for_non_activity{YType::str, "reason-for-non-activity"}
    	,
    group_address(std::make_shared<Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress>())
	,source_address(std::make_shared<Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress>())
{
    group_address->parent = this;
    source_address->parent = this;

    yang_name = "non-active-groups"; yang_parent_name = "non-active-groups"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::~NonActiveGroups_()
{
}

bool Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::has_data() const
{
    return interface.is_set
	|| reason_for_non_activity.is_set
	|| (group_address !=  nullptr && group_address->has_data())
	|| (source_address !=  nullptr && source_address->has_data());
}

bool Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(reason_for_non_activity.yfilter)
	|| (group_address !=  nullptr && group_address->has_operation())
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/non-active-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "non-active-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (reason_for_non_activity.is_set || is_set(reason_for_non_activity.yfilter)) leaf_name_data.push_back(reason_for_non_activity.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address")
    {
        if(group_address == nullptr)
        {
            group_address = std::make_shared<Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress>();
        }
        return group_address;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::get_children() const
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

void Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason-for-non-activity")
    {
        reason_for_non_activity = value;
        reason_for_non_activity.value_namespace = name_space;
        reason_for_non_activity.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "reason-for-non-activity")
    {
        reason_for_non_activity.yfilter = yfilter;
    }
}

bool Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address" || name == "source-address" || name == "interface" || name == "reason-for-non-activity")
        return true;
    return false;
}

Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::GroupAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address"; yang_parent_name = "non-active-groups"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::~GroupAddress()
{
}

bool Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/non-active-groups/non-active-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::GroupAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "non-active-groups"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::~SourceAddress()
{
}

bool Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/non-active-groups/non-active-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::NonActiveGroups::NonActiveGroups_::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::Ranges::Ranges()
{

    yang_name = "ranges"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Mld::Standby::DefaultContext::Ranges::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::Ranges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void Mld::Standby::DefaultContext::Ranges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::DefaultContext::Ranges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::DefaultContext::Ranges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
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

    yang_name = "range"; yang_parent_name = "ranges"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(group_mask.yfilter)
	|| ydk::is_set(is_stale.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Mld::Standby::DefaultContext::Ranges::Range::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/ranges/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::Ranges::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::Ranges::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (group_mask.is_set || is_set(group_mask.yfilter)) leaf_name_data.push_back(group_mask.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.yfilter)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::Ranges::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::Ranges::Range::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::Ranges::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "group-address" || name == "group-mask" || name == "is-stale" || name == "prefix-length" || name == "protocol")
        return true;
    return false;
}

Mld::Standby::DefaultContext::Ranges::Range::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::Ranges::Range::GroupAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/ranges/range/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::Ranges::Range::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::Ranges::Range::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::Ranges::Range::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::Ranges::Range::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::Ranges::Range::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetails()
{

    yang_name = "ssm-map-details"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter);
}

std::string Mld::Standby::DefaultContext::SsmMapDetails::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::SsmMapDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::SsmMapDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

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

void Mld::Standby::DefaultContext::SsmMapDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::DefaultContext::SsmMapDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::DefaultContext::SsmMapDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssm-map-detail")
        return true;
    return false;
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

    yang_name = "ssm-map-detail"; yang_parent_name = "ssm-map-details"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(elapsed_time.yfilter)
	|| ydk::is_set(expiration_time.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(response_pending.yfilter)
	|| ydk::is_set(ssm_map_type.yfilter)
	|| (map_info !=  nullptr && map_info->has_operation());
}

std::string Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/ssm-map-details/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (elapsed_time.is_set || is_set(elapsed_time.yfilter)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (expiration_time.is_set || is_set(expiration_time.yfilter)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (response_pending.is_set || is_set(response_pending.yfilter)) leaf_name_data.push_back(response_pending.get_name_leafdata());
    if (ssm_map_type.is_set || is_set(ssm_map_type.yfilter)) leaf_name_data.push_back(ssm_map_type.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map-info" || name == "sources" || name == "elapsed-time" || name == "expiration-time" || name == "group-address" || name == "query-interval" || name == "response-pending" || name == "ssm-map-type")
        return true;
    return false;
}

Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::MapInfo()
    :
    map_type{YType::uint32, "map-type"},
    source_counts{YType::uint32, "source-counts"}
    	,
    group_address_xr(std::make_shared<Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr>())
{
    group_address_xr->parent = this;

    yang_name = "map-info"; yang_parent_name = "ssm-map-detail"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(map_type.yfilter)
	|| ydk::is_set(source_counts.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/ssm-map-details/ssm-map-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map_type.is_set || is_set(map_type.yfilter)) leaf_name_data.push_back(map_type.get_name_leafdata());
    if (source_counts.is_set || is_set(source_counts.yfilter)) leaf_name_data.push_back(source_counts.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "map-type" || name == "source-counts")
        return true;
    return false;
}

Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "map-info"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/ssm-map-details/ssm-map-detail/map-info/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::MapInfo::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::Sources()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "sources"; yang_parent_name = "ssm-map-detail"; is_top_level_class = false; has_list_ancestor = false;
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
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/ssm-map-details/ssm-map-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sources";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::SsmMapDetails::SsmMapDetail::Sources::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::SsmMaps::SsmMaps()
{

    yang_name = "ssm-maps"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::SsmMaps::~SsmMaps()
{
}

bool Mld::Standby::DefaultContext::SsmMaps::has_data() const
{
    for (std::size_t index=0; index<ssm_map.size(); index++)
    {
        if(ssm_map[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Standby::DefaultContext::SsmMaps::has_operation() const
{
    for (std::size_t index=0; index<ssm_map.size(); index++)
    {
        if(ssm_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::Standby::DefaultContext::SsmMaps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::SsmMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-maps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::SsmMaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::SsmMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::DefaultContext::SsmMaps::SsmMap>();
        c->parent = this;
        ssm_map.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::SsmMaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ssm_map)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::DefaultContext::SsmMaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::DefaultContext::SsmMaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::DefaultContext::SsmMaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssm-map")
        return true;
    return false;
}

Mld::Standby::DefaultContext::SsmMaps::SsmMap::SsmMap()
    :
    group_address{YType::str, "group-address"},
    map_type{YType::uint32, "map-type"},
    source_counts{YType::uint32, "source-counts"},
    ssm_map_type{YType::enumeration, "ssm-map-type"}
    	,
    group_address_xr(std::make_shared<Mld::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr>())
{
    group_address_xr->parent = this;

    yang_name = "ssm-map"; yang_parent_name = "ssm-maps"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::SsmMaps::SsmMap::~SsmMap()
{
}

bool Mld::Standby::DefaultContext::SsmMaps::SsmMap::has_data() const
{
    return group_address.is_set
	|| map_type.is_set
	|| source_counts.is_set
	|| ssm_map_type.is_set
	|| (group_address_xr !=  nullptr && group_address_xr->has_data());
}

bool Mld::Standby::DefaultContext::SsmMaps::SsmMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(map_type.yfilter)
	|| ydk::is_set(source_counts.yfilter)
	|| ydk::is_set(ssm_map_type.yfilter)
	|| (group_address_xr !=  nullptr && group_address_xr->has_operation());
}

std::string Mld::Standby::DefaultContext::SsmMaps::SsmMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/ssm-maps/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::SsmMaps::SsmMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::SsmMaps::SsmMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (map_type.is_set || is_set(map_type.yfilter)) leaf_name_data.push_back(map_type.get_name_leafdata());
    if (source_counts.is_set || is_set(source_counts.yfilter)) leaf_name_data.push_back(source_counts.get_name_leafdata());
    if (ssm_map_type.is_set || is_set(ssm_map_type.yfilter)) leaf_name_data.push_back(ssm_map_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::SsmMaps::SsmMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Mld::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr>();
        }
        return group_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::SsmMaps::SsmMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group_address_xr != nullptr)
    {
        children["group-address-xr"] = group_address_xr;
    }

    return children;
}

void Mld::Standby::DefaultContext::SsmMaps::SsmMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "ssm-map-type")
    {
        ssm_map_type = value;
        ssm_map_type.value_namespace = name_space;
        ssm_map_type.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Standby::DefaultContext::SsmMaps::SsmMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "map-type")
    {
        map_type.yfilter = yfilter;
    }
    if(value_path == "source-counts")
    {
        source_counts.yfilter = yfilter;
    }
    if(value_path == "ssm-map-type")
    {
        ssm_map_type.yfilter = yfilter;
    }
}

bool Mld::Standby::DefaultContext::SsmMaps::SsmMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "group-address" || name == "map-type" || name == "source-counts" || name == "ssm-map-type")
        return true;
    return false;
}

Mld::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "ssm-map"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::~GroupAddressXr()
{
}

bool Mld::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/ssm-maps/ssm-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::SsmMaps::SsmMap::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::DefaultContext::Summary::Summary()
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

    yang_name = "summary"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::Summary::~Summary()
{
}

bool Mld::Standby::DefaultContext::Summary::has_data() const
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

bool Mld::Standby::DefaultContext::Summary::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(disabled_interface_count.yfilter)
	|| ydk::is_set(enabled_interface_count.yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(group_limit.yfilter)
	|| ydk::is_set(is_disabled.yfilter)
	|| ydk::is_set(node_low_memory.yfilter)
	|| ydk::is_set(robustness.yfilter)
	|| ydk::is_set(supported_interfaces.yfilter)
	|| ydk::is_set(tunnel_mte_config_count.yfilter)
	|| ydk::is_set(unsupported_interfaces.yfilter);
}

std::string Mld::Standby::DefaultContext::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled_interface_count.is_set || is_set(disabled_interface_count.yfilter)) leaf_name_data.push_back(disabled_interface_count.get_name_leafdata());
    if (enabled_interface_count.is_set || is_set(enabled_interface_count.yfilter)) leaf_name_data.push_back(enabled_interface_count.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (group_limit.is_set || is_set(group_limit.yfilter)) leaf_name_data.push_back(group_limit.get_name_leafdata());
    if (is_disabled.is_set || is_set(is_disabled.yfilter)) leaf_name_data.push_back(is_disabled.get_name_leafdata());
    if (node_low_memory.is_set || is_set(node_low_memory.yfilter)) leaf_name_data.push_back(node_low_memory.get_name_leafdata());
    if (robustness.is_set || is_set(robustness.yfilter)) leaf_name_data.push_back(robustness.get_name_leafdata());
    if (supported_interfaces.is_set || is_set(supported_interfaces.yfilter)) leaf_name_data.push_back(supported_interfaces.get_name_leafdata());
    if (tunnel_mte_config_count.is_set || is_set(tunnel_mte_config_count.yfilter)) leaf_name_data.push_back(tunnel_mte_config_count.get_name_leafdata());
    if (unsupported_interfaces.is_set || is_set(unsupported_interfaces.yfilter)) leaf_name_data.push_back(unsupported_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::DefaultContext::Summary::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::DefaultContext::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disabled-interface-count")
    {
        disabled_interface_count = value;
        disabled_interface_count.value_namespace = name_space;
        disabled_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled-interface-count")
    {
        enabled_interface_count = value;
        enabled_interface_count.value_namespace = name_space;
        enabled_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-limit")
    {
        group_limit = value;
        group_limit.value_namespace = name_space;
        group_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-disabled")
    {
        is_disabled = value;
        is_disabled.value_namespace = name_space;
        is_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-low-memory")
    {
        node_low_memory = value;
        node_low_memory.value_namespace = name_space;
        node_low_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "robustness")
    {
        robustness = value;
        robustness.value_namespace = name_space;
        robustness.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "supported-interfaces")
    {
        supported_interfaces = value;
        supported_interfaces.value_namespace = name_space;
        supported_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-mte-config-count")
    {
        tunnel_mte_config_count = value;
        tunnel_mte_config_count.value_namespace = name_space;
        tunnel_mte_config_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsupported-interfaces")
    {
        unsupported_interfaces = value;
        unsupported_interfaces.value_namespace = name_space;
        unsupported_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Standby::DefaultContext::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disabled-interface-count")
    {
        disabled_interface_count.yfilter = yfilter;
    }
    if(value_path == "enabled-interface-count")
    {
        enabled_interface_count.yfilter = yfilter;
    }
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "group-limit")
    {
        group_limit.yfilter = yfilter;
    }
    if(value_path == "is-disabled")
    {
        is_disabled.yfilter = yfilter;
    }
    if(value_path == "node-low-memory")
    {
        node_low_memory.yfilter = yfilter;
    }
    if(value_path == "robustness")
    {
        robustness.yfilter = yfilter;
    }
    if(value_path == "supported-interfaces")
    {
        supported_interfaces.yfilter = yfilter;
    }
    if(value_path == "tunnel-mte-config-count")
    {
        tunnel_mte_config_count.yfilter = yfilter;
    }
    if(value_path == "unsupported-interfaces")
    {
        unsupported_interfaces.yfilter = yfilter;
    }
}

bool Mld::Standby::DefaultContext::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "disabled-interface-count" || name == "enabled-interface-count" || name == "group-count" || name == "group-limit" || name == "is-disabled" || name == "node-low-memory" || name == "robustness" || name == "supported-interfaces" || name == "tunnel-mte-config-count" || name == "unsupported-interfaces")
        return true;
    return false;
}

Mld::Standby::DefaultContext::Summary::Interface::Interface()
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

    yang_name = "interface"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::DefaultContext::Summary::Interface::~Interface()
{
}

bool Mld::Standby::DefaultContext::Summary::Interface::has_data() const
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

bool Mld::Standby::DefaultContext::Summary::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(group_limit.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(on_off.yfilter)
	|| ydk::is_set(parent_ifhandle.yfilter)
	|| ydk::is_set(router_uptime_in_seconds.yfilter)
	|| ydk::is_set(time_since_last_query_in_seconds.yfilter)
	|| ydk::is_set(time_since_last_report_in_seconds.yfilter);
}

std::string Mld::Standby::DefaultContext::Summary::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::Summary::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::Summary::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (group_limit.is_set || is_set(group_limit.yfilter)) leaf_name_data.push_back(group_limit.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (on_off.is_set || is_set(on_off.yfilter)) leaf_name_data.push_back(on_off.get_name_leafdata());
    if (parent_ifhandle.is_set || is_set(parent_ifhandle.yfilter)) leaf_name_data.push_back(parent_ifhandle.get_name_leafdata());
    if (router_uptime_in_seconds.is_set || is_set(router_uptime_in_seconds.yfilter)) leaf_name_data.push_back(router_uptime_in_seconds.get_name_leafdata());
    if (time_since_last_query_in_seconds.is_set || is_set(time_since_last_query_in_seconds.yfilter)) leaf_name_data.push_back(time_since_last_query_in_seconds.get_name_leafdata());
    if (time_since_last_report_in_seconds.is_set || is_set(time_since_last_report_in_seconds.yfilter)) leaf_name_data.push_back(time_since_last_report_in_seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::DefaultContext::Summary::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::DefaultContext::Summary::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::DefaultContext::Summary::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-count")
    {
        group_count = value;
        group_count.value_namespace = name_space;
        group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-limit")
    {
        group_limit = value;
        group_limit.value_namespace = name_space;
        group_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "on-off")
    {
        on_off = value;
        on_off.value_namespace = name_space;
        on_off.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle = value;
        parent_ifhandle.value_namespace = name_space;
        parent_ifhandle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds = value;
        router_uptime_in_seconds.value_namespace = name_space;
        router_uptime_in_seconds.value_namespace_prefix = name_space_prefix;
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
}

void Mld::Standby::DefaultContext::Summary::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-count")
    {
        group_count.yfilter = yfilter;
    }
    if(value_path == "group-limit")
    {
        group_limit.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "on-off")
    {
        on_off.yfilter = yfilter;
    }
    if(value_path == "parent-ifhandle")
    {
        parent_ifhandle.yfilter = yfilter;
    }
    if(value_path == "router-uptime-in-seconds")
    {
        router_uptime_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-since-last-query-in-seconds")
    {
        time_since_last_query_in_seconds.yfilter = yfilter;
    }
    if(value_path == "time-since-last-report-in-seconds")
    {
        time_since_last_report_in_seconds.yfilter = yfilter;
    }
}

bool Mld::Standby::DefaultContext::Summary::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-count" || name == "group-limit" || name == "interface-name" || name == "on-off" || name == "parent-ifhandle" || name == "router-uptime-in-seconds" || name == "time-since-last-query-in-seconds" || name == "time-since-last-report-in-seconds")
        return true;
    return false;
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

    yang_name = "traffic-counters"; yang_parent_name = "default-context"; is_top_level_class = false; has_list_ancestor = false;
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

std::string Mld::Standby::DefaultContext::TrafficCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/default-context/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::DefaultContext::TrafficCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::DefaultContext::TrafficCounters::get_name_leaf_data() const
{
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

    return leaf_name_data;

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

void Mld::Standby::DefaultContext::TrafficCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::DefaultContext::TrafficCounters::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::DefaultContext::TrafficCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auxillary-data-length-errors" || name == "bad-scope-errors" || name == "checksum-errors" || name == "elapsed-time" || name == "format-errors" || name == "get-packet-failure" || name == "input-disabled-idb" || name == "input-dvmrp" || name == "input-leaves" || name == "input-martian-address" || name == "input-mtrace" || name == "input-no-assigned-vrf-id" || name == "input-no-idb" || name == "input-no-platform-support-mtrace" || name == "input-no-vrf-in-idb" || name == "input-no-vrf-mtrace" || name == "input-pim" || name == "input-queries" || name == "input-reports" || name == "invalid-source-address-errors" || name == "miscellaneous-errors" || name == "no-socket-connection" || name == "output-dvmrp" || name == "output-leaves" || name == "output-mtrace" || name == "output-no-parent-interface-handle" || name == "output-pim" || name == "output-queries" || name == "output-reports" || name == "packet-manager-input-errors" || name == "packet-manager-output-errors" || name == "packets-in" || name == "packets-out" || name == "receive-socket-errors" || name == "socket-errors")
        return true;
    return false;
}

Mld::Standby::Process::Process()
    :
    amt_gatewaies(std::make_shared<Mld::Standby::Process::AmtGatewaies>())
	,amt_summary(std::make_shared<Mld::Standby::Process::AmtSummary>())
	,bvi_statistics(std::make_shared<Mld::Standby::Process::BviStatistics>())
	,nsf(std::make_shared<Mld::Standby::Process::Nsf>())
	,nsr(std::make_shared<Mld::Standby::Process::Nsr>())
	,unicast_qos_adjust_stats(std::make_shared<Mld::Standby::Process::UnicastQosAdjustStats>())
{
    amt_gatewaies->parent = this;
    amt_summary->parent = this;
    bvi_statistics->parent = this;
    nsf->parent = this;
    nsr->parent = this;
    unicast_qos_adjust_stats->parent = this;

    yang_name = "process"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::Process::~Process()
{
}

bool Mld::Standby::Process::has_data() const
{
    return (amt_gatewaies !=  nullptr && amt_gatewaies->has_data())
	|| (amt_summary !=  nullptr && amt_summary->has_data())
	|| (bvi_statistics !=  nullptr && bvi_statistics->has_data())
	|| (nsf !=  nullptr && nsf->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (unicast_qos_adjust_stats !=  nullptr && unicast_qos_adjust_stats->has_data());
}

bool Mld::Standby::Process::has_operation() const
{
    return is_set(yfilter)
	|| (amt_gatewaies !=  nullptr && amt_gatewaies->has_operation())
	|| (amt_summary !=  nullptr && amt_summary->has_operation())
	|| (bvi_statistics !=  nullptr && bvi_statistics->has_operation())
	|| (nsf !=  nullptr && nsf->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (unicast_qos_adjust_stats !=  nullptr && unicast_qos_adjust_stats->has_operation());
}

std::string Mld::Standby::Process::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::Process::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Process::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Process::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "amt-gatewaies")
    {
        if(amt_gatewaies == nullptr)
        {
            amt_gatewaies = std::make_shared<Mld::Standby::Process::AmtGatewaies>();
        }
        return amt_gatewaies;
    }

    if(child_yang_name == "amt-summary")
    {
        if(amt_summary == nullptr)
        {
            amt_summary = std::make_shared<Mld::Standby::Process::AmtSummary>();
        }
        return amt_summary;
    }

    if(child_yang_name == "bvi-statistics")
    {
        if(bvi_statistics == nullptr)
        {
            bvi_statistics = std::make_shared<Mld::Standby::Process::BviStatistics>();
        }
        return bvi_statistics;
    }

    if(child_yang_name == "nsf")
    {
        if(nsf == nullptr)
        {
            nsf = std::make_shared<Mld::Standby::Process::Nsf>();
        }
        return nsf;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<Mld::Standby::Process::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "unicast-qos-adjust-stats")
    {
        if(unicast_qos_adjust_stats == nullptr)
        {
            unicast_qos_adjust_stats = std::make_shared<Mld::Standby::Process::UnicastQosAdjustStats>();
        }
        return unicast_qos_adjust_stats;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Process::get_children() const
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

void Mld::Standby::Process::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::Process::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::Process::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "amt-gatewaies" || name == "amt-summary" || name == "bvi-statistics" || name == "nsf" || name == "nsr" || name == "unicast-qos-adjust-stats")
        return true;
    return false;
}

Mld::Standby::Process::AmtGatewaies::AmtGatewaies()
{

    yang_name = "amt-gatewaies"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::Process::AmtGatewaies::~AmtGatewaies()
{
}

bool Mld::Standby::Process::AmtGatewaies::has_data() const
{
    for (std::size_t index=0; index<amt_gateway.size(); index++)
    {
        if(amt_gateway[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Standby::Process::AmtGatewaies::has_operation() const
{
    for (std::size_t index=0; index<amt_gateway.size(); index++)
    {
        if(amt_gateway[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::Standby::Process::AmtGatewaies::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/process/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::Process::AmtGatewaies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amt-gatewaies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Process::AmtGatewaies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Process::AmtGatewaies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::Process::AmtGatewaies::AmtGateway>();
        c->parent = this;
        amt_gateway.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Process::AmtGatewaies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : amt_gateway)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::Process::AmtGatewaies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::Process::AmtGatewaies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::Process::AmtGatewaies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "amt-gateway")
        return true;
    return false;
}

Mld::Standby::Process::AmtGatewaies::AmtGateway::AmtGateway()
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

    yang_name = "amt-gateway"; yang_parent_name = "amt-gatewaies"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::Process::AmtGatewaies::AmtGateway::~AmtGateway()
{
}

bool Mld::Standby::Process::AmtGatewaies::AmtGateway::has_data() const
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

bool Mld::Standby::Process::AmtGatewaies::AmtGateway::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(amt_nonce.yfilter)
	|| ydk::is_set(amt_port.yfilter)
	|| ydk::is_set(amtgw.yfilter)
	|| ydk::is_set(amtnh.yfilter)
	|| ydk::is_set(gateway_address.yfilter)
	|| ydk::is_set(idb.yfilter)
	|| ydk::is_set(key_len.yfilter)
	|| ydk::is_set(mem_upd_in.yfilter)
	|| ydk::is_set(mem_upd_out.yfilter)
	|| ydk::is_set(port.yfilter);
}

std::string Mld::Standby::Process::AmtGatewaies::AmtGateway::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/process/amt-gatewaies/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::Process::AmtGatewaies::AmtGateway::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amt-gateway";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Process::AmtGatewaies::AmtGateway::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (amt_nonce.is_set || is_set(amt_nonce.yfilter)) leaf_name_data.push_back(amt_nonce.get_name_leafdata());
    if (amt_port.is_set || is_set(amt_port.yfilter)) leaf_name_data.push_back(amt_port.get_name_leafdata());
    if (amtgw.is_set || is_set(amtgw.yfilter)) leaf_name_data.push_back(amtgw.get_name_leafdata());
    if (amtnh.is_set || is_set(amtnh.yfilter)) leaf_name_data.push_back(amtnh.get_name_leafdata());
    if (gateway_address.is_set || is_set(gateway_address.yfilter)) leaf_name_data.push_back(gateway_address.get_name_leafdata());
    if (idb.is_set || is_set(idb.yfilter)) leaf_name_data.push_back(idb.get_name_leafdata());
    if (key_len.is_set || is_set(key_len.yfilter)) leaf_name_data.push_back(key_len.get_name_leafdata());
    if (mem_upd_in.is_set || is_set(mem_upd_in.yfilter)) leaf_name_data.push_back(mem_upd_in.get_name_leafdata());
    if (mem_upd_out.is_set || is_set(mem_upd_out.yfilter)) leaf_name_data.push_back(mem_upd_out.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Process::AmtGatewaies::AmtGateway::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Process::AmtGatewaies::AmtGateway::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Process::AmtGatewaies::AmtGateway::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "amt-nonce")
    {
        amt_nonce = value;
        amt_nonce.value_namespace = name_space;
        amt_nonce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "amt-port")
    {
        amt_port = value;
        amt_port.value_namespace = name_space;
        amt_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "amtgw")
    {
        amtgw = value;
        amtgw.value_namespace = name_space;
        amtgw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "amtnh")
    {
        amtnh = value;
        amtnh.value_namespace = name_space;
        amtnh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway-address")
    {
        gateway_address = value;
        gateway_address.value_namespace = name_space;
        gateway_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idb")
    {
        idb = value;
        idb.value_namespace = name_space;
        idb.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "key-len")
    {
        key_len = value;
        key_len.value_namespace = name_space;
        key_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mem-upd-in")
    {
        mem_upd_in = value;
        mem_upd_in.value_namespace = name_space;
        mem_upd_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mem-upd-out")
    {
        mem_upd_out = value;
        mem_upd_out.value_namespace = name_space;
        mem_upd_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Standby::Process::AmtGatewaies::AmtGateway::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "amt-nonce")
    {
        amt_nonce.yfilter = yfilter;
    }
    if(value_path == "amt-port")
    {
        amt_port.yfilter = yfilter;
    }
    if(value_path == "amtgw")
    {
        amtgw.yfilter = yfilter;
    }
    if(value_path == "amtnh")
    {
        amtnh.yfilter = yfilter;
    }
    if(value_path == "gateway-address")
    {
        gateway_address.yfilter = yfilter;
    }
    if(value_path == "idb")
    {
        idb.yfilter = yfilter;
    }
    if(value_path == "key-len")
    {
        key_len.yfilter = yfilter;
    }
    if(value_path == "mem-upd-in")
    {
        mem_upd_in.yfilter = yfilter;
    }
    if(value_path == "mem-upd-out")
    {
        mem_upd_out.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
}

bool Mld::Standby::Process::AmtGatewaies::AmtGateway::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "amt-nonce" || name == "amt-port" || name == "amtgw" || name == "amtnh" || name == "gateway-address" || name == "idb" || name == "key-len" || name == "mem-upd-in" || name == "mem-upd-out" || name == "port")
        return true;
    return false;
}

Mld::Standby::Process::AmtSummary::AmtSummary()
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

    yang_name = "amt-summary"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::Process::AmtSummary::~AmtSummary()
{
}

bool Mld::Standby::Process::AmtSummary::has_data() const
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

bool Mld::Standby::Process::AmtSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(anycast_prefix.yfilter)
	|| ydk::is_set(gateway_count.yfilter)
	|| ydk::is_set(is_acl_configured.yfilter)
	|| ydk::is_set(is_gateway_simulation.yfilter)
	|| ydk::is_set(is_ou_of_resource.yfilter)
	|| ydk::is_set(max_gateway.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(query_interval.yfilter)
	|| ydk::is_set(relay_address.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(ttl.yfilter)
	|| ydk::is_set(tunnel_configured_maximum.yfilter)
	|| ydk::is_set(tunnel_count.yfilter);
}

std::string Mld::Standby::Process::AmtSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/process/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::Process::AmtSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "amt-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Process::AmtSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (anycast_prefix.is_set || is_set(anycast_prefix.yfilter)) leaf_name_data.push_back(anycast_prefix.get_name_leafdata());
    if (gateway_count.is_set || is_set(gateway_count.yfilter)) leaf_name_data.push_back(gateway_count.get_name_leafdata());
    if (is_acl_configured.is_set || is_set(is_acl_configured.yfilter)) leaf_name_data.push_back(is_acl_configured.get_name_leafdata());
    if (is_gateway_simulation.is_set || is_set(is_gateway_simulation.yfilter)) leaf_name_data.push_back(is_gateway_simulation.get_name_leafdata());
    if (is_ou_of_resource.is_set || is_set(is_ou_of_resource.yfilter)) leaf_name_data.push_back(is_ou_of_resource.get_name_leafdata());
    if (max_gateway.is_set || is_set(max_gateway.yfilter)) leaf_name_data.push_back(max_gateway.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (query_interval.is_set || is_set(query_interval.yfilter)) leaf_name_data.push_back(query_interval.get_name_leafdata());
    if (relay_address.is_set || is_set(relay_address.yfilter)) leaf_name_data.push_back(relay_address.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (ttl.is_set || is_set(ttl.yfilter)) leaf_name_data.push_back(ttl.get_name_leafdata());
    if (tunnel_configured_maximum.is_set || is_set(tunnel_configured_maximum.yfilter)) leaf_name_data.push_back(tunnel_configured_maximum.get_name_leafdata());
    if (tunnel_count.is_set || is_set(tunnel_count.yfilter)) leaf_name_data.push_back(tunnel_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Process::AmtSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Process::AmtSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Process::AmtSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "anycast-prefix")
    {
        anycast_prefix = value;
        anycast_prefix.value_namespace = name_space;
        anycast_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway-count")
    {
        gateway_count = value;
        gateway_count.value_namespace = name_space;
        gateway_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-acl-configured")
    {
        is_acl_configured = value;
        is_acl_configured.value_namespace = name_space;
        is_acl_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-gateway-simulation")
    {
        is_gateway_simulation = value;
        is_gateway_simulation.value_namespace = name_space;
        is_gateway_simulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ou-of-resource")
    {
        is_ou_of_resource = value;
        is_ou_of_resource.value_namespace = name_space;
        is_ou_of_resource.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-gateway")
    {
        max_gateway = value;
        max_gateway.value_namespace = name_space;
        max_gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "query-interval")
    {
        query_interval = value;
        query_interval.value_namespace = name_space;
        query_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "relay-address")
    {
        relay_address = value;
        relay_address.value_namespace = name_space;
        relay_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ttl")
    {
        ttl = value;
        ttl.value_namespace = name_space;
        ttl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-configured-maximum")
    {
        tunnel_configured_maximum = value;
        tunnel_configured_maximum.value_namespace = name_space;
        tunnel_configured_maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-count")
    {
        tunnel_count = value;
        tunnel_count.value_namespace = name_space;
        tunnel_count.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Standby::Process::AmtSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "anycast-prefix")
    {
        anycast_prefix.yfilter = yfilter;
    }
    if(value_path == "gateway-count")
    {
        gateway_count.yfilter = yfilter;
    }
    if(value_path == "is-acl-configured")
    {
        is_acl_configured.yfilter = yfilter;
    }
    if(value_path == "is-gateway-simulation")
    {
        is_gateway_simulation.yfilter = yfilter;
    }
    if(value_path == "is-ou-of-resource")
    {
        is_ou_of_resource.yfilter = yfilter;
    }
    if(value_path == "max-gateway")
    {
        max_gateway.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "query-interval")
    {
        query_interval.yfilter = yfilter;
    }
    if(value_path == "relay-address")
    {
        relay_address.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "ttl")
    {
        ttl.yfilter = yfilter;
    }
    if(value_path == "tunnel-configured-maximum")
    {
        tunnel_configured_maximum.yfilter = yfilter;
    }
    if(value_path == "tunnel-count")
    {
        tunnel_count.yfilter = yfilter;
    }
}

bool Mld::Standby::Process::AmtSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "anycast-prefix" || name == "gateway-count" || name == "is-acl-configured" || name == "is-gateway-simulation" || name == "is-ou-of-resource" || name == "max-gateway" || name == "mtu" || name == "prefix-length" || name == "query-interval" || name == "relay-address" || name == "tos" || name == "ttl" || name == "tunnel-configured-maximum" || name == "tunnel-count")
        return true;
    return false;
}

Mld::Standby::Process::BviStatistics::BviStatistics()
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

    yang_name = "bvi-statistics"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::Process::BviStatistics::~BviStatistics()
{
}

bool Mld::Standby::Process::BviStatistics::has_data() const
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

bool Mld::Standby::Process::BviStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(null_buffer_handles.yfilter)
	|| ydk::is_set(receive_buffers.yfilter)
	|| ydk::is_set(release_buffers.yfilter)
	|| ydk::is_set(release_fail_buffers.yfilter)
	|| ydk::is_set(rx_add_mrouter_msg.yfilter)
	|| ydk::is_set(rx_delete_mrouter_msg.yfilter)
	|| ydk::is_set(rx_igmp_packet_success.yfilter)
	|| ydk::is_set(rx_ipc_close_notif.yfilter)
	|| ydk::is_set(rx_ipc_connect_notif.yfilter)
	|| ydk::is_set(rx_ipc_error_notif.yfilter)
	|| ydk::is_set(rx_ipc_input_wait_notif.yfilter)
	|| ydk::is_set(rx_ipc_lwm_notif.yfilter)
	|| ydk::is_set(rx_ipc_open_notif.yfilter)
	|| ydk::is_set(rx_ipc_output_notif.yfilter)
	|| ydk::is_set(rx_ipc_publish_notif.yfilter)
	|| ydk::is_set(rx_ipc_q_full_notif.yfilter)
	|| ydk::is_set(rx_ipc_send_status_notif.yfilter)
	|| ydk::is_set(rx_sweep_mrouter_msg.yfilter)
	|| ydk::is_set(rx_unknown_mrouter_msg.yfilter)
	|| ydk::is_set(send_blocks.yfilter)
	|| ydk::is_set(tx_add_mrouter_msg.yfilter)
	|| ydk::is_set(tx_buffer_errors.yfilter)
	|| ydk::is_set(tx_buffers.yfilter)
	|| ydk::is_set(tx_delete_mrouter_msg.yfilter)
	|| ydk::is_set(tx_mrouter_buffers.yfilter)
	|| ydk::is_set(tx_protocol_buffers.yfilter)
	|| ydk::is_set(tx_sweep_mrouter_msg.yfilter)
	|| ydk::is_set(tx_unknown_buffers.yfilter)
	|| ydk::is_set(tx_unknown_mrouter_msg.yfilter)
	|| ydk::is_set(wtx_msg_drop_dc.yfilter)
	|| ydk::is_set(wtx_msg_drop_nomem.yfilter)
	|| ydk::is_set(wtx_msg_freed.yfilter)
	|| ydk::is_set(wtx_msg_proto_sent.yfilter)
	|| ydk::is_set(wtx_msg_recvd.yfilter)
	|| ydk::is_set(wtx_msg_sent.yfilter);
}

std::string Mld::Standby::Process::BviStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/process/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::Process::BviStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bvi-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Process::BviStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (null_buffer_handles.is_set || is_set(null_buffer_handles.yfilter)) leaf_name_data.push_back(null_buffer_handles.get_name_leafdata());
    if (receive_buffers.is_set || is_set(receive_buffers.yfilter)) leaf_name_data.push_back(receive_buffers.get_name_leafdata());
    if (release_buffers.is_set || is_set(release_buffers.yfilter)) leaf_name_data.push_back(release_buffers.get_name_leafdata());
    if (release_fail_buffers.is_set || is_set(release_fail_buffers.yfilter)) leaf_name_data.push_back(release_fail_buffers.get_name_leafdata());
    if (rx_add_mrouter_msg.is_set || is_set(rx_add_mrouter_msg.yfilter)) leaf_name_data.push_back(rx_add_mrouter_msg.get_name_leafdata());
    if (rx_delete_mrouter_msg.is_set || is_set(rx_delete_mrouter_msg.yfilter)) leaf_name_data.push_back(rx_delete_mrouter_msg.get_name_leafdata());
    if (rx_igmp_packet_success.is_set || is_set(rx_igmp_packet_success.yfilter)) leaf_name_data.push_back(rx_igmp_packet_success.get_name_leafdata());
    if (rx_ipc_close_notif.is_set || is_set(rx_ipc_close_notif.yfilter)) leaf_name_data.push_back(rx_ipc_close_notif.get_name_leafdata());
    if (rx_ipc_connect_notif.is_set || is_set(rx_ipc_connect_notif.yfilter)) leaf_name_data.push_back(rx_ipc_connect_notif.get_name_leafdata());
    if (rx_ipc_error_notif.is_set || is_set(rx_ipc_error_notif.yfilter)) leaf_name_data.push_back(rx_ipc_error_notif.get_name_leafdata());
    if (rx_ipc_input_wait_notif.is_set || is_set(rx_ipc_input_wait_notif.yfilter)) leaf_name_data.push_back(rx_ipc_input_wait_notif.get_name_leafdata());
    if (rx_ipc_lwm_notif.is_set || is_set(rx_ipc_lwm_notif.yfilter)) leaf_name_data.push_back(rx_ipc_lwm_notif.get_name_leafdata());
    if (rx_ipc_open_notif.is_set || is_set(rx_ipc_open_notif.yfilter)) leaf_name_data.push_back(rx_ipc_open_notif.get_name_leafdata());
    if (rx_ipc_output_notif.is_set || is_set(rx_ipc_output_notif.yfilter)) leaf_name_data.push_back(rx_ipc_output_notif.get_name_leafdata());
    if (rx_ipc_publish_notif.is_set || is_set(rx_ipc_publish_notif.yfilter)) leaf_name_data.push_back(rx_ipc_publish_notif.get_name_leafdata());
    if (rx_ipc_q_full_notif.is_set || is_set(rx_ipc_q_full_notif.yfilter)) leaf_name_data.push_back(rx_ipc_q_full_notif.get_name_leafdata());
    if (rx_ipc_send_status_notif.is_set || is_set(rx_ipc_send_status_notif.yfilter)) leaf_name_data.push_back(rx_ipc_send_status_notif.get_name_leafdata());
    if (rx_sweep_mrouter_msg.is_set || is_set(rx_sweep_mrouter_msg.yfilter)) leaf_name_data.push_back(rx_sweep_mrouter_msg.get_name_leafdata());
    if (rx_unknown_mrouter_msg.is_set || is_set(rx_unknown_mrouter_msg.yfilter)) leaf_name_data.push_back(rx_unknown_mrouter_msg.get_name_leafdata());
    if (send_blocks.is_set || is_set(send_blocks.yfilter)) leaf_name_data.push_back(send_blocks.get_name_leafdata());
    if (tx_add_mrouter_msg.is_set || is_set(tx_add_mrouter_msg.yfilter)) leaf_name_data.push_back(tx_add_mrouter_msg.get_name_leafdata());
    if (tx_buffer_errors.is_set || is_set(tx_buffer_errors.yfilter)) leaf_name_data.push_back(tx_buffer_errors.get_name_leafdata());
    if (tx_buffers.is_set || is_set(tx_buffers.yfilter)) leaf_name_data.push_back(tx_buffers.get_name_leafdata());
    if (tx_delete_mrouter_msg.is_set || is_set(tx_delete_mrouter_msg.yfilter)) leaf_name_data.push_back(tx_delete_mrouter_msg.get_name_leafdata());
    if (tx_mrouter_buffers.is_set || is_set(tx_mrouter_buffers.yfilter)) leaf_name_data.push_back(tx_mrouter_buffers.get_name_leafdata());
    if (tx_protocol_buffers.is_set || is_set(tx_protocol_buffers.yfilter)) leaf_name_data.push_back(tx_protocol_buffers.get_name_leafdata());
    if (tx_sweep_mrouter_msg.is_set || is_set(tx_sweep_mrouter_msg.yfilter)) leaf_name_data.push_back(tx_sweep_mrouter_msg.get_name_leafdata());
    if (tx_unknown_buffers.is_set || is_set(tx_unknown_buffers.yfilter)) leaf_name_data.push_back(tx_unknown_buffers.get_name_leafdata());
    if (tx_unknown_mrouter_msg.is_set || is_set(tx_unknown_mrouter_msg.yfilter)) leaf_name_data.push_back(tx_unknown_mrouter_msg.get_name_leafdata());
    if (wtx_msg_drop_dc.is_set || is_set(wtx_msg_drop_dc.yfilter)) leaf_name_data.push_back(wtx_msg_drop_dc.get_name_leafdata());
    if (wtx_msg_drop_nomem.is_set || is_set(wtx_msg_drop_nomem.yfilter)) leaf_name_data.push_back(wtx_msg_drop_nomem.get_name_leafdata());
    if (wtx_msg_freed.is_set || is_set(wtx_msg_freed.yfilter)) leaf_name_data.push_back(wtx_msg_freed.get_name_leafdata());
    if (wtx_msg_proto_sent.is_set || is_set(wtx_msg_proto_sent.yfilter)) leaf_name_data.push_back(wtx_msg_proto_sent.get_name_leafdata());
    if (wtx_msg_recvd.is_set || is_set(wtx_msg_recvd.yfilter)) leaf_name_data.push_back(wtx_msg_recvd.get_name_leafdata());
    if (wtx_msg_sent.is_set || is_set(wtx_msg_sent.yfilter)) leaf_name_data.push_back(wtx_msg_sent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Process::BviStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Process::BviStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Process::BviStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "null-buffer-handles")
    {
        null_buffer_handles = value;
        null_buffer_handles.value_namespace = name_space;
        null_buffer_handles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-buffers")
    {
        receive_buffers = value;
        receive_buffers.value_namespace = name_space;
        receive_buffers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "release-buffers")
    {
        release_buffers = value;
        release_buffers.value_namespace = name_space;
        release_buffers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "release-fail-buffers")
    {
        release_fail_buffers = value;
        release_fail_buffers.value_namespace = name_space;
        release_fail_buffers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-add-mrouter-msg")
    {
        rx_add_mrouter_msg = value;
        rx_add_mrouter_msg.value_namespace = name_space;
        rx_add_mrouter_msg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-delete-mrouter-msg")
    {
        rx_delete_mrouter_msg = value;
        rx_delete_mrouter_msg.value_namespace = name_space;
        rx_delete_mrouter_msg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-igmp-packet-success")
    {
        rx_igmp_packet_success = value;
        rx_igmp_packet_success.value_namespace = name_space;
        rx_igmp_packet_success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-ipc-close-notif")
    {
        rx_ipc_close_notif = value;
        rx_ipc_close_notif.value_namespace = name_space;
        rx_ipc_close_notif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-ipc-connect-notif")
    {
        rx_ipc_connect_notif = value;
        rx_ipc_connect_notif.value_namespace = name_space;
        rx_ipc_connect_notif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-ipc-error-notif")
    {
        rx_ipc_error_notif = value;
        rx_ipc_error_notif.value_namespace = name_space;
        rx_ipc_error_notif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-ipc-input-wait-notif")
    {
        rx_ipc_input_wait_notif = value;
        rx_ipc_input_wait_notif.value_namespace = name_space;
        rx_ipc_input_wait_notif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-ipc-lwm-notif")
    {
        rx_ipc_lwm_notif = value;
        rx_ipc_lwm_notif.value_namespace = name_space;
        rx_ipc_lwm_notif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-ipc-open-notif")
    {
        rx_ipc_open_notif = value;
        rx_ipc_open_notif.value_namespace = name_space;
        rx_ipc_open_notif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-ipc-output-notif")
    {
        rx_ipc_output_notif = value;
        rx_ipc_output_notif.value_namespace = name_space;
        rx_ipc_output_notif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-ipc-publish-notif")
    {
        rx_ipc_publish_notif = value;
        rx_ipc_publish_notif.value_namespace = name_space;
        rx_ipc_publish_notif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-ipc-q-full-notif")
    {
        rx_ipc_q_full_notif = value;
        rx_ipc_q_full_notif.value_namespace = name_space;
        rx_ipc_q_full_notif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-ipc-send-status-notif")
    {
        rx_ipc_send_status_notif = value;
        rx_ipc_send_status_notif.value_namespace = name_space;
        rx_ipc_send_status_notif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-sweep-mrouter-msg")
    {
        rx_sweep_mrouter_msg = value;
        rx_sweep_mrouter_msg.value_namespace = name_space;
        rx_sweep_mrouter_msg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-unknown-mrouter-msg")
    {
        rx_unknown_mrouter_msg = value;
        rx_unknown_mrouter_msg.value_namespace = name_space;
        rx_unknown_mrouter_msg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-blocks")
    {
        send_blocks = value;
        send_blocks.value_namespace = name_space;
        send_blocks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-add-mrouter-msg")
    {
        tx_add_mrouter_msg = value;
        tx_add_mrouter_msg.value_namespace = name_space;
        tx_add_mrouter_msg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-buffer-errors")
    {
        tx_buffer_errors = value;
        tx_buffer_errors.value_namespace = name_space;
        tx_buffer_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-buffers")
    {
        tx_buffers = value;
        tx_buffers.value_namespace = name_space;
        tx_buffers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-delete-mrouter-msg")
    {
        tx_delete_mrouter_msg = value;
        tx_delete_mrouter_msg.value_namespace = name_space;
        tx_delete_mrouter_msg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-mrouter-buffers")
    {
        tx_mrouter_buffers = value;
        tx_mrouter_buffers.value_namespace = name_space;
        tx_mrouter_buffers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-protocol-buffers")
    {
        tx_protocol_buffers = value;
        tx_protocol_buffers.value_namespace = name_space;
        tx_protocol_buffers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-sweep-mrouter-msg")
    {
        tx_sweep_mrouter_msg = value;
        tx_sweep_mrouter_msg.value_namespace = name_space;
        tx_sweep_mrouter_msg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-unknown-buffers")
    {
        tx_unknown_buffers = value;
        tx_unknown_buffers.value_namespace = name_space;
        tx_unknown_buffers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-unknown-mrouter-msg")
    {
        tx_unknown_mrouter_msg = value;
        tx_unknown_mrouter_msg.value_namespace = name_space;
        tx_unknown_mrouter_msg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wtx-msg-drop-dc")
    {
        wtx_msg_drop_dc = value;
        wtx_msg_drop_dc.value_namespace = name_space;
        wtx_msg_drop_dc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wtx-msg-drop-nomem")
    {
        wtx_msg_drop_nomem = value;
        wtx_msg_drop_nomem.value_namespace = name_space;
        wtx_msg_drop_nomem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wtx-msg-freed")
    {
        wtx_msg_freed = value;
        wtx_msg_freed.value_namespace = name_space;
        wtx_msg_freed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wtx-msg-proto-sent")
    {
        wtx_msg_proto_sent = value;
        wtx_msg_proto_sent.value_namespace = name_space;
        wtx_msg_proto_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wtx-msg-recvd")
    {
        wtx_msg_recvd = value;
        wtx_msg_recvd.value_namespace = name_space;
        wtx_msg_recvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wtx-msg-sent")
    {
        wtx_msg_sent = value;
        wtx_msg_sent.value_namespace = name_space;
        wtx_msg_sent.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Standby::Process::BviStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "null-buffer-handles")
    {
        null_buffer_handles.yfilter = yfilter;
    }
    if(value_path == "receive-buffers")
    {
        receive_buffers.yfilter = yfilter;
    }
    if(value_path == "release-buffers")
    {
        release_buffers.yfilter = yfilter;
    }
    if(value_path == "release-fail-buffers")
    {
        release_fail_buffers.yfilter = yfilter;
    }
    if(value_path == "rx-add-mrouter-msg")
    {
        rx_add_mrouter_msg.yfilter = yfilter;
    }
    if(value_path == "rx-delete-mrouter-msg")
    {
        rx_delete_mrouter_msg.yfilter = yfilter;
    }
    if(value_path == "rx-igmp-packet-success")
    {
        rx_igmp_packet_success.yfilter = yfilter;
    }
    if(value_path == "rx-ipc-close-notif")
    {
        rx_ipc_close_notif.yfilter = yfilter;
    }
    if(value_path == "rx-ipc-connect-notif")
    {
        rx_ipc_connect_notif.yfilter = yfilter;
    }
    if(value_path == "rx-ipc-error-notif")
    {
        rx_ipc_error_notif.yfilter = yfilter;
    }
    if(value_path == "rx-ipc-input-wait-notif")
    {
        rx_ipc_input_wait_notif.yfilter = yfilter;
    }
    if(value_path == "rx-ipc-lwm-notif")
    {
        rx_ipc_lwm_notif.yfilter = yfilter;
    }
    if(value_path == "rx-ipc-open-notif")
    {
        rx_ipc_open_notif.yfilter = yfilter;
    }
    if(value_path == "rx-ipc-output-notif")
    {
        rx_ipc_output_notif.yfilter = yfilter;
    }
    if(value_path == "rx-ipc-publish-notif")
    {
        rx_ipc_publish_notif.yfilter = yfilter;
    }
    if(value_path == "rx-ipc-q-full-notif")
    {
        rx_ipc_q_full_notif.yfilter = yfilter;
    }
    if(value_path == "rx-ipc-send-status-notif")
    {
        rx_ipc_send_status_notif.yfilter = yfilter;
    }
    if(value_path == "rx-sweep-mrouter-msg")
    {
        rx_sweep_mrouter_msg.yfilter = yfilter;
    }
    if(value_path == "rx-unknown-mrouter-msg")
    {
        rx_unknown_mrouter_msg.yfilter = yfilter;
    }
    if(value_path == "send-blocks")
    {
        send_blocks.yfilter = yfilter;
    }
    if(value_path == "tx-add-mrouter-msg")
    {
        tx_add_mrouter_msg.yfilter = yfilter;
    }
    if(value_path == "tx-buffer-errors")
    {
        tx_buffer_errors.yfilter = yfilter;
    }
    if(value_path == "tx-buffers")
    {
        tx_buffers.yfilter = yfilter;
    }
    if(value_path == "tx-delete-mrouter-msg")
    {
        tx_delete_mrouter_msg.yfilter = yfilter;
    }
    if(value_path == "tx-mrouter-buffers")
    {
        tx_mrouter_buffers.yfilter = yfilter;
    }
    if(value_path == "tx-protocol-buffers")
    {
        tx_protocol_buffers.yfilter = yfilter;
    }
    if(value_path == "tx-sweep-mrouter-msg")
    {
        tx_sweep_mrouter_msg.yfilter = yfilter;
    }
    if(value_path == "tx-unknown-buffers")
    {
        tx_unknown_buffers.yfilter = yfilter;
    }
    if(value_path == "tx-unknown-mrouter-msg")
    {
        tx_unknown_mrouter_msg.yfilter = yfilter;
    }
    if(value_path == "wtx-msg-drop-dc")
    {
        wtx_msg_drop_dc.yfilter = yfilter;
    }
    if(value_path == "wtx-msg-drop-nomem")
    {
        wtx_msg_drop_nomem.yfilter = yfilter;
    }
    if(value_path == "wtx-msg-freed")
    {
        wtx_msg_freed.yfilter = yfilter;
    }
    if(value_path == "wtx-msg-proto-sent")
    {
        wtx_msg_proto_sent.yfilter = yfilter;
    }
    if(value_path == "wtx-msg-recvd")
    {
        wtx_msg_recvd.yfilter = yfilter;
    }
    if(value_path == "wtx-msg-sent")
    {
        wtx_msg_sent.yfilter = yfilter;
    }
}

bool Mld::Standby::Process::BviStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "null-buffer-handles" || name == "receive-buffers" || name == "release-buffers" || name == "release-fail-buffers" || name == "rx-add-mrouter-msg" || name == "rx-delete-mrouter-msg" || name == "rx-igmp-packet-success" || name == "rx-ipc-close-notif" || name == "rx-ipc-connect-notif" || name == "rx-ipc-error-notif" || name == "rx-ipc-input-wait-notif" || name == "rx-ipc-lwm-notif" || name == "rx-ipc-open-notif" || name == "rx-ipc-output-notif" || name == "rx-ipc-publish-notif" || name == "rx-ipc-q-full-notif" || name == "rx-ipc-send-status-notif" || name == "rx-sweep-mrouter-msg" || name == "rx-unknown-mrouter-msg" || name == "send-blocks" || name == "tx-add-mrouter-msg" || name == "tx-buffer-errors" || name == "tx-buffers" || name == "tx-delete-mrouter-msg" || name == "tx-mrouter-buffers" || name == "tx-protocol-buffers" || name == "tx-sweep-mrouter-msg" || name == "tx-unknown-buffers" || name == "tx-unknown-mrouter-msg" || name == "wtx-msg-drop-dc" || name == "wtx-msg-drop-nomem" || name == "wtx-msg-freed" || name == "wtx-msg-proto-sent" || name == "wtx-msg-recvd" || name == "wtx-msg-sent")
        return true;
    return false;
}

Mld::Standby::Process::Nsf::Nsf()
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

    yang_name = "nsf"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::Process::Nsf::~Nsf()
{
}

bool Mld::Standby::Process::Nsf::has_data() const
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

bool Mld::Standby::Process::Nsf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_multicast_nsf_active.yfilter)
	|| ydk::is_set(last_icd_notif_recv.yfilter)
	|| ydk::is_set(last_icd_notif_recv_min.yfilter)
	|| ydk::is_set(last_nsf_off.yfilter)
	|| ydk::is_set(last_nsf_off_min.yfilter)
	|| ydk::is_set(last_nsf_on.yfilter)
	|| ydk::is_set(last_nsf_on_min.yfilter)
	|| ydk::is_set(multicast_nsf_time_left.yfilter)
	|| ydk::is_set(multicast_nsf_timeout.yfilter)
	|| ydk::is_set(respawn_count.yfilter);
}

std::string Mld::Standby::Process::Nsf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/process/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::Process::Nsf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Process::Nsf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_multicast_nsf_active.is_set || is_set(is_multicast_nsf_active.yfilter)) leaf_name_data.push_back(is_multicast_nsf_active.get_name_leafdata());
    if (last_icd_notif_recv.is_set || is_set(last_icd_notif_recv.yfilter)) leaf_name_data.push_back(last_icd_notif_recv.get_name_leafdata());
    if (last_icd_notif_recv_min.is_set || is_set(last_icd_notif_recv_min.yfilter)) leaf_name_data.push_back(last_icd_notif_recv_min.get_name_leafdata());
    if (last_nsf_off.is_set || is_set(last_nsf_off.yfilter)) leaf_name_data.push_back(last_nsf_off.get_name_leafdata());
    if (last_nsf_off_min.is_set || is_set(last_nsf_off_min.yfilter)) leaf_name_data.push_back(last_nsf_off_min.get_name_leafdata());
    if (last_nsf_on.is_set || is_set(last_nsf_on.yfilter)) leaf_name_data.push_back(last_nsf_on.get_name_leafdata());
    if (last_nsf_on_min.is_set || is_set(last_nsf_on_min.yfilter)) leaf_name_data.push_back(last_nsf_on_min.get_name_leafdata());
    if (multicast_nsf_time_left.is_set || is_set(multicast_nsf_time_left.yfilter)) leaf_name_data.push_back(multicast_nsf_time_left.get_name_leafdata());
    if (multicast_nsf_timeout.is_set || is_set(multicast_nsf_timeout.yfilter)) leaf_name_data.push_back(multicast_nsf_timeout.get_name_leafdata());
    if (respawn_count.is_set || is_set(respawn_count.yfilter)) leaf_name_data.push_back(respawn_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Process::Nsf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Process::Nsf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Process::Nsf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-multicast-nsf-active")
    {
        is_multicast_nsf_active = value;
        is_multicast_nsf_active.value_namespace = name_space;
        is_multicast_nsf_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-icd-notif-recv")
    {
        last_icd_notif_recv = value;
        last_icd_notif_recv.value_namespace = name_space;
        last_icd_notif_recv.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-icd-notif-recv-min")
    {
        last_icd_notif_recv_min = value;
        last_icd_notif_recv_min.value_namespace = name_space;
        last_icd_notif_recv_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-nsf-off")
    {
        last_nsf_off = value;
        last_nsf_off.value_namespace = name_space;
        last_nsf_off.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-nsf-off-min")
    {
        last_nsf_off_min = value;
        last_nsf_off_min.value_namespace = name_space;
        last_nsf_off_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-nsf-on")
    {
        last_nsf_on = value;
        last_nsf_on.value_namespace = name_space;
        last_nsf_on.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-nsf-on-min")
    {
        last_nsf_on_min = value;
        last_nsf_on_min.value_namespace = name_space;
        last_nsf_on_min.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-nsf-time-left")
    {
        multicast_nsf_time_left = value;
        multicast_nsf_time_left.value_namespace = name_space;
        multicast_nsf_time_left.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multicast-nsf-timeout")
    {
        multicast_nsf_timeout = value;
        multicast_nsf_timeout.value_namespace = name_space;
        multicast_nsf_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "respawn-count")
    {
        respawn_count = value;
        respawn_count.value_namespace = name_space;
        respawn_count.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Standby::Process::Nsf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-multicast-nsf-active")
    {
        is_multicast_nsf_active.yfilter = yfilter;
    }
    if(value_path == "last-icd-notif-recv")
    {
        last_icd_notif_recv.yfilter = yfilter;
    }
    if(value_path == "last-icd-notif-recv-min")
    {
        last_icd_notif_recv_min.yfilter = yfilter;
    }
    if(value_path == "last-nsf-off")
    {
        last_nsf_off.yfilter = yfilter;
    }
    if(value_path == "last-nsf-off-min")
    {
        last_nsf_off_min.yfilter = yfilter;
    }
    if(value_path == "last-nsf-on")
    {
        last_nsf_on.yfilter = yfilter;
    }
    if(value_path == "last-nsf-on-min")
    {
        last_nsf_on_min.yfilter = yfilter;
    }
    if(value_path == "multicast-nsf-time-left")
    {
        multicast_nsf_time_left.yfilter = yfilter;
    }
    if(value_path == "multicast-nsf-timeout")
    {
        multicast_nsf_timeout.yfilter = yfilter;
    }
    if(value_path == "respawn-count")
    {
        respawn_count.yfilter = yfilter;
    }
}

bool Mld::Standby::Process::Nsf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-multicast-nsf-active" || name == "last-icd-notif-recv" || name == "last-icd-notif-recv-min" || name == "last-nsf-off" || name == "last-nsf-off-min" || name == "last-nsf-on" || name == "last-nsf-on-min" || name == "multicast-nsf-time-left" || name == "multicast-nsf-timeout" || name == "respawn-count")
        return true;
    return false;
}

Mld::Standby::Process::Nsr::Nsr()
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

    yang_name = "nsr"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::Process::Nsr::~Nsr()
{
}

bool Mld::Standby::Process::Nsr::has_data() const
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

bool Mld::Standby::Process::Nsr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(collab_conv_done.yfilter)
	|| ydk::is_set(count_proc_connection_dn.yfilter)
	|| ydk::is_set(count_proc_connection_up.yfilter)
	|| ydk::is_set(count_rmf_not_ready.yfilter)
	|| ydk::is_set(count_rmf_ready.yfilter)
	|| ydk::is_set(last_proc.yfilter)
	|| ydk::is_set(last_proc_connection_dn.yfilter)
	|| ydk::is_set(last_proc_connection_up.yfilter)
	|| ydk::is_set(last_rmf_not_ready.yfilter)
	|| ydk::is_set(last_rmf_ready.yfilter)
	|| ydk::is_set(partner_proc_connected.yfilter)
	|| ydk::is_set(rmf_notification_done.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Mld::Standby::Process::Nsr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/process/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::Process::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Process::Nsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collab_conv_done.is_set || is_set(collab_conv_done.yfilter)) leaf_name_data.push_back(collab_conv_done.get_name_leafdata());
    if (count_proc_connection_dn.is_set || is_set(count_proc_connection_dn.yfilter)) leaf_name_data.push_back(count_proc_connection_dn.get_name_leafdata());
    if (count_proc_connection_up.is_set || is_set(count_proc_connection_up.yfilter)) leaf_name_data.push_back(count_proc_connection_up.get_name_leafdata());
    if (count_rmf_not_ready.is_set || is_set(count_rmf_not_ready.yfilter)) leaf_name_data.push_back(count_rmf_not_ready.get_name_leafdata());
    if (count_rmf_ready.is_set || is_set(count_rmf_ready.yfilter)) leaf_name_data.push_back(count_rmf_ready.get_name_leafdata());
    if (last_proc.is_set || is_set(last_proc.yfilter)) leaf_name_data.push_back(last_proc.get_name_leafdata());
    if (last_proc_connection_dn.is_set || is_set(last_proc_connection_dn.yfilter)) leaf_name_data.push_back(last_proc_connection_dn.get_name_leafdata());
    if (last_proc_connection_up.is_set || is_set(last_proc_connection_up.yfilter)) leaf_name_data.push_back(last_proc_connection_up.get_name_leafdata());
    if (last_rmf_not_ready.is_set || is_set(last_rmf_not_ready.yfilter)) leaf_name_data.push_back(last_rmf_not_ready.get_name_leafdata());
    if (last_rmf_ready.is_set || is_set(last_rmf_ready.yfilter)) leaf_name_data.push_back(last_rmf_ready.get_name_leafdata());
    if (partner_proc_connected.is_set || is_set(partner_proc_connected.yfilter)) leaf_name_data.push_back(partner_proc_connected.get_name_leafdata());
    if (rmf_notification_done.is_set || is_set(rmf_notification_done.yfilter)) leaf_name_data.push_back(rmf_notification_done.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Process::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Process::Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Process::Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "collab-conv-done")
    {
        collab_conv_done = value;
        collab_conv_done.value_namespace = name_space;
        collab_conv_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count-proc-connection-dn")
    {
        count_proc_connection_dn = value;
        count_proc_connection_dn.value_namespace = name_space;
        count_proc_connection_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "count-proc-connection-up")
    {
        count_proc_connection_up = value;
        count_proc_connection_up.value_namespace = name_space;
        count_proc_connection_up.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-proc")
    {
        last_proc = value;
        last_proc.value_namespace = name_space;
        last_proc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-proc-connection-dn")
    {
        last_proc_connection_dn = value;
        last_proc_connection_dn.value_namespace = name_space;
        last_proc_connection_dn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-proc-connection-up")
    {
        last_proc_connection_up = value;
        last_proc_connection_up.value_namespace = name_space;
        last_proc_connection_up.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "partner-proc-connected")
    {
        partner_proc_connected = value;
        partner_proc_connected.value_namespace = name_space;
        partner_proc_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rmf-notification-done")
    {
        rmf_notification_done = value;
        rmf_notification_done.value_namespace = name_space;
        rmf_notification_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Standby::Process::Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "collab-conv-done")
    {
        collab_conv_done.yfilter = yfilter;
    }
    if(value_path == "count-proc-connection-dn")
    {
        count_proc_connection_dn.yfilter = yfilter;
    }
    if(value_path == "count-proc-connection-up")
    {
        count_proc_connection_up.yfilter = yfilter;
    }
    if(value_path == "count-rmf-not-ready")
    {
        count_rmf_not_ready.yfilter = yfilter;
    }
    if(value_path == "count-rmf-ready")
    {
        count_rmf_ready.yfilter = yfilter;
    }
    if(value_path == "last-proc")
    {
        last_proc.yfilter = yfilter;
    }
    if(value_path == "last-proc-connection-dn")
    {
        last_proc_connection_dn.yfilter = yfilter;
    }
    if(value_path == "last-proc-connection-up")
    {
        last_proc_connection_up.yfilter = yfilter;
    }
    if(value_path == "last-rmf-not-ready")
    {
        last_rmf_not_ready.yfilter = yfilter;
    }
    if(value_path == "last-rmf-ready")
    {
        last_rmf_ready.yfilter = yfilter;
    }
    if(value_path == "partner-proc-connected")
    {
        partner_proc_connected.yfilter = yfilter;
    }
    if(value_path == "rmf-notification-done")
    {
        rmf_notification_done.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Mld::Standby::Process::Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collab-conv-done" || name == "count-proc-connection-dn" || name == "count-proc-connection-up" || name == "count-rmf-not-ready" || name == "count-rmf-ready" || name == "last-proc" || name == "last-proc-connection-dn" || name == "last-proc-connection-up" || name == "last-rmf-not-ready" || name == "last-rmf-ready" || name == "partner-proc-connected" || name == "rmf-notification-done" || name == "state")
        return true;
    return false;
}

Mld::Standby::Process::UnicastQosAdjustStats::UnicastQosAdjustStats()
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

    yang_name = "unicast-qos-adjust-stats"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::Process::UnicastQosAdjustStats::~UnicastQosAdjustStats()
{
}

bool Mld::Standby::Process::UnicastQosAdjustStats::has_data() const
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

bool Mld::Standby::Process::UnicastQosAdjustStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(add_to_batches.yfilter)
	|| ydk::is_set(batches.yfilter)
	|| ydk::is_set(delete_to_batches.yfilter)
	|| ydk::is_set(is_qos_s_sweeped.yfilter)
	|| ydk::is_set(is_resync_received.yfilter)
	|| ydk::is_set(is_resync_required.yfilter)
	|| ydk::is_set(is_resync_start_sent.yfilter)
	|| ydk::is_set(last_download_time.yfilter)
	|| ydk::is_set(last_sweep_time.yfilter)
	|| ydk::is_set(queues.yfilter)
	|| ydk::is_set(received_resync_requests.yfilter)
	|| ydk::is_set(send_comm_errors.yfilter)
	|| ydk::is_set(send_errors.yfilter)
	|| ydk::is_set(send_partial_errors.yfilter)
	|| ydk::is_set(send_success.yfilter)
	|| ydk::is_set(sent_resync_bulks.yfilter);
}

std::string Mld::Standby::Process::UnicastQosAdjustStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/process/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::Process::UnicastQosAdjustStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-qos-adjust-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Process::UnicastQosAdjustStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (add_to_batches.is_set || is_set(add_to_batches.yfilter)) leaf_name_data.push_back(add_to_batches.get_name_leafdata());
    if (batches.is_set || is_set(batches.yfilter)) leaf_name_data.push_back(batches.get_name_leafdata());
    if (delete_to_batches.is_set || is_set(delete_to_batches.yfilter)) leaf_name_data.push_back(delete_to_batches.get_name_leafdata());
    if (is_qos_s_sweeped.is_set || is_set(is_qos_s_sweeped.yfilter)) leaf_name_data.push_back(is_qos_s_sweeped.get_name_leafdata());
    if (is_resync_received.is_set || is_set(is_resync_received.yfilter)) leaf_name_data.push_back(is_resync_received.get_name_leafdata());
    if (is_resync_required.is_set || is_set(is_resync_required.yfilter)) leaf_name_data.push_back(is_resync_required.get_name_leafdata());
    if (is_resync_start_sent.is_set || is_set(is_resync_start_sent.yfilter)) leaf_name_data.push_back(is_resync_start_sent.get_name_leafdata());
    if (last_download_time.is_set || is_set(last_download_time.yfilter)) leaf_name_data.push_back(last_download_time.get_name_leafdata());
    if (last_sweep_time.is_set || is_set(last_sweep_time.yfilter)) leaf_name_data.push_back(last_sweep_time.get_name_leafdata());
    if (queues.is_set || is_set(queues.yfilter)) leaf_name_data.push_back(queues.get_name_leafdata());
    if (received_resync_requests.is_set || is_set(received_resync_requests.yfilter)) leaf_name_data.push_back(received_resync_requests.get_name_leafdata());
    if (send_comm_errors.is_set || is_set(send_comm_errors.yfilter)) leaf_name_data.push_back(send_comm_errors.get_name_leafdata());
    if (send_errors.is_set || is_set(send_errors.yfilter)) leaf_name_data.push_back(send_errors.get_name_leafdata());
    if (send_partial_errors.is_set || is_set(send_partial_errors.yfilter)) leaf_name_data.push_back(send_partial_errors.get_name_leafdata());
    if (send_success.is_set || is_set(send_success.yfilter)) leaf_name_data.push_back(send_success.get_name_leafdata());
    if (sent_resync_bulks.is_set || is_set(sent_resync_bulks.yfilter)) leaf_name_data.push_back(sent_resync_bulks.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Process::UnicastQosAdjustStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Process::UnicastQosAdjustStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Process::UnicastQosAdjustStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "add-to-batches")
    {
        add_to_batches = value;
        add_to_batches.value_namespace = name_space;
        add_to_batches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "batches")
    {
        batches = value;
        batches.value_namespace = name_space;
        batches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete-to-batches")
    {
        delete_to_batches = value;
        delete_to_batches.value_namespace = name_space;
        delete_to_batches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-qos-s-sweeped")
    {
        is_qos_s_sweeped = value;
        is_qos_s_sweeped.value_namespace = name_space;
        is_qos_s_sweeped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-resync-received")
    {
        is_resync_received = value;
        is_resync_received.value_namespace = name_space;
        is_resync_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-resync-required")
    {
        is_resync_required = value;
        is_resync_required.value_namespace = name_space;
        is_resync_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-resync-start-sent")
    {
        is_resync_start_sent = value;
        is_resync_start_sent.value_namespace = name_space;
        is_resync_start_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-download-time")
    {
        last_download_time = value;
        last_download_time.value_namespace = name_space;
        last_download_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-sweep-time")
    {
        last_sweep_time = value;
        last_sweep_time.value_namespace = name_space;
        last_sweep_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "queues")
    {
        queues = value;
        queues.value_namespace = name_space;
        queues.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-resync-requests")
    {
        received_resync_requests = value;
        received_resync_requests.value_namespace = name_space;
        received_resync_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-comm-errors")
    {
        send_comm_errors = value;
        send_comm_errors.value_namespace = name_space;
        send_comm_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-errors")
    {
        send_errors = value;
        send_errors.value_namespace = name_space;
        send_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-partial-errors")
    {
        send_partial_errors = value;
        send_partial_errors.value_namespace = name_space;
        send_partial_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-success")
    {
        send_success = value;
        send_success.value_namespace = name_space;
        send_success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-resync-bulks")
    {
        sent_resync_bulks = value;
        sent_resync_bulks.value_namespace = name_space;
        sent_resync_bulks.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Standby::Process::UnicastQosAdjustStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "add-to-batches")
    {
        add_to_batches.yfilter = yfilter;
    }
    if(value_path == "batches")
    {
        batches.yfilter = yfilter;
    }
    if(value_path == "delete-to-batches")
    {
        delete_to_batches.yfilter = yfilter;
    }
    if(value_path == "is-qos-s-sweeped")
    {
        is_qos_s_sweeped.yfilter = yfilter;
    }
    if(value_path == "is-resync-received")
    {
        is_resync_received.yfilter = yfilter;
    }
    if(value_path == "is-resync-required")
    {
        is_resync_required.yfilter = yfilter;
    }
    if(value_path == "is-resync-start-sent")
    {
        is_resync_start_sent.yfilter = yfilter;
    }
    if(value_path == "last-download-time")
    {
        last_download_time.yfilter = yfilter;
    }
    if(value_path == "last-sweep-time")
    {
        last_sweep_time.yfilter = yfilter;
    }
    if(value_path == "queues")
    {
        queues.yfilter = yfilter;
    }
    if(value_path == "received-resync-requests")
    {
        received_resync_requests.yfilter = yfilter;
    }
    if(value_path == "send-comm-errors")
    {
        send_comm_errors.yfilter = yfilter;
    }
    if(value_path == "send-errors")
    {
        send_errors.yfilter = yfilter;
    }
    if(value_path == "send-partial-errors")
    {
        send_partial_errors.yfilter = yfilter;
    }
    if(value_path == "send-success")
    {
        send_success.yfilter = yfilter;
    }
    if(value_path == "sent-resync-bulks")
    {
        sent_resync_bulks.yfilter = yfilter;
    }
}

bool Mld::Standby::Process::UnicastQosAdjustStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "add-to-batches" || name == "batches" || name == "delete-to-batches" || name == "is-qos-s-sweeped" || name == "is-resync-received" || name == "is-resync-required" || name == "is-resync-start-sent" || name == "last-download-time" || name == "last-sweep-time" || name == "queues" || name == "received-resync-requests" || name == "send-comm-errors" || name == "send-errors" || name == "send-partial-errors" || name == "send-success" || name == "sent-resync-bulks")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrfs()
{

    yang_name = "vrfs"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::Vrfs::~Vrfs()
{
}

bool Mld::Standby::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Standby::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::Standby::Vrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    detail_groups(std::make_shared<Mld::Standby::Vrfs::Vrf::DetailGroups>())
	,explicit_groups(std::make_shared<Mld::Standby::Vrfs::Vrf::ExplicitGroups>())
	,global_interface_table(std::make_shared<Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable>())
	,group_summary(std::make_shared<Mld::Standby::Vrfs::Vrf::GroupSummary>())
	,groups(std::make_shared<Mld::Standby::Vrfs::Vrf::Groups>())
	,ifrs_interface_summary(std::make_shared<Mld::Standby::Vrfs::Vrf::IfrsInterfaceSummary>())
	,ifrs_interfaces(std::make_shared<Mld::Standby::Vrfs::Vrf::IfrsInterfaces>())
	,interface_state_offs(std::make_shared<Mld::Standby::Vrfs::Vrf::InterfaceStateOffs>())
	,interface_state_ons(std::make_shared<Mld::Standby::Vrfs::Vrf::InterfaceStateOns>())
	,interface_table(std::make_shared<Mld::Standby::Vrfs::Vrf::InterfaceTable>())
	,interface_unicast_qos_adjusts(std::make_shared<Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts>())
	,non_active_groups(std::make_shared<Mld::Standby::Vrfs::Vrf::NonActiveGroups>())
	,ranges(std::make_shared<Mld::Standby::Vrfs::Vrf::Ranges>())
	,ssm_map_details(std::make_shared<Mld::Standby::Vrfs::Vrf::SsmMapDetails>())
	,ssm_maps(std::make_shared<Mld::Standby::Vrfs::Vrf::SsmMaps>())
	,summary(std::make_shared<Mld::Standby::Vrfs::Vrf::Summary>())
	,traffic_counters(std::make_shared<Mld::Standby::Vrfs::Vrf::TrafficCounters>())
{
    detail_groups->parent = this;
    explicit_groups->parent = this;
    global_interface_table->parent = this;
    group_summary->parent = this;
    groups->parent = this;
    ifrs_interface_summary->parent = this;
    ifrs_interfaces->parent = this;
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

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = false;
}

Mld::Standby::Vrfs::Vrf::~Vrf()
{
}

bool Mld::Standby::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (detail_groups !=  nullptr && detail_groups->has_data())
	|| (explicit_groups !=  nullptr && explicit_groups->has_data())
	|| (global_interface_table !=  nullptr && global_interface_table->has_data())
	|| (group_summary !=  nullptr && group_summary->has_data())
	|| (groups !=  nullptr && groups->has_data())
	|| (ifrs_interface_summary !=  nullptr && ifrs_interface_summary->has_data())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_data())
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

bool Mld::Standby::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (detail_groups !=  nullptr && detail_groups->has_operation())
	|| (explicit_groups !=  nullptr && explicit_groups->has_operation())
	|| (global_interface_table !=  nullptr && global_interface_table->has_operation())
	|| (group_summary !=  nullptr && group_summary->has_operation())
	|| (groups !=  nullptr && groups->has_operation())
	|| (ifrs_interface_summary !=  nullptr && ifrs_interface_summary->has_operation())
	|| (ifrs_interfaces !=  nullptr && ifrs_interfaces->has_operation())
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

std::string Mld::Standby::Vrfs::Vrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-igmp-oper:mld/standby/vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string Mld::Standby::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-groups")
    {
        if(detail_groups == nullptr)
        {
            detail_groups = std::make_shared<Mld::Standby::Vrfs::Vrf::DetailGroups>();
        }
        return detail_groups;
    }

    if(child_yang_name == "explicit-groups")
    {
        if(explicit_groups == nullptr)
        {
            explicit_groups = std::make_shared<Mld::Standby::Vrfs::Vrf::ExplicitGroups>();
        }
        return explicit_groups;
    }

    if(child_yang_name == "global-interface-table")
    {
        if(global_interface_table == nullptr)
        {
            global_interface_table = std::make_shared<Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable>();
        }
        return global_interface_table;
    }

    if(child_yang_name == "group-summary")
    {
        if(group_summary == nullptr)
        {
            group_summary = std::make_shared<Mld::Standby::Vrfs::Vrf::GroupSummary>();
        }
        return group_summary;
    }

    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<Mld::Standby::Vrfs::Vrf::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "ifrs-interface-summary")
    {
        if(ifrs_interface_summary == nullptr)
        {
            ifrs_interface_summary = std::make_shared<Mld::Standby::Vrfs::Vrf::IfrsInterfaceSummary>();
        }
        return ifrs_interface_summary;
    }

    if(child_yang_name == "ifrs-interfaces")
    {
        if(ifrs_interfaces == nullptr)
        {
            ifrs_interfaces = std::make_shared<Mld::Standby::Vrfs::Vrf::IfrsInterfaces>();
        }
        return ifrs_interfaces;
    }

    if(child_yang_name == "interface-state-offs")
    {
        if(interface_state_offs == nullptr)
        {
            interface_state_offs = std::make_shared<Mld::Standby::Vrfs::Vrf::InterfaceStateOffs>();
        }
        return interface_state_offs;
    }

    if(child_yang_name == "interface-state-ons")
    {
        if(interface_state_ons == nullptr)
        {
            interface_state_ons = std::make_shared<Mld::Standby::Vrfs::Vrf::InterfaceStateOns>();
        }
        return interface_state_ons;
    }

    if(child_yang_name == "interface-table")
    {
        if(interface_table == nullptr)
        {
            interface_table = std::make_shared<Mld::Standby::Vrfs::Vrf::InterfaceTable>();
        }
        return interface_table;
    }

    if(child_yang_name == "interface-unicast-qos-adjusts")
    {
        if(interface_unicast_qos_adjusts == nullptr)
        {
            interface_unicast_qos_adjusts = std::make_shared<Mld::Standby::Vrfs::Vrf::InterfaceUnicastQosAdjusts>();
        }
        return interface_unicast_qos_adjusts;
    }

    if(child_yang_name == "non-active-groups")
    {
        if(non_active_groups == nullptr)
        {
            non_active_groups = std::make_shared<Mld::Standby::Vrfs::Vrf::NonActiveGroups>();
        }
        return non_active_groups;
    }

    if(child_yang_name == "ranges")
    {
        if(ranges == nullptr)
        {
            ranges = std::make_shared<Mld::Standby::Vrfs::Vrf::Ranges>();
        }
        return ranges;
    }

    if(child_yang_name == "ssm-map-details")
    {
        if(ssm_map_details == nullptr)
        {
            ssm_map_details = std::make_shared<Mld::Standby::Vrfs::Vrf::SsmMapDetails>();
        }
        return ssm_map_details;
    }

    if(child_yang_name == "ssm-maps")
    {
        if(ssm_maps == nullptr)
        {
            ssm_maps = std::make_shared<Mld::Standby::Vrfs::Vrf::SsmMaps>();
        }
        return ssm_maps;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Mld::Standby::Vrfs::Vrf::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "traffic-counters")
    {
        if(traffic_counters == nullptr)
        {
            traffic_counters = std::make_shared<Mld::Standby::Vrfs::Vrf::TrafficCounters>();
        }
        return traffic_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::get_children() const
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

void Mld::Standby::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Standby::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Mld::Standby::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-groups" || name == "explicit-groups" || name == "global-interface-table" || name == "group-summary" || name == "groups" || name == "ifrs-interface-summary" || name == "ifrs-interfaces" || name == "interface-state-offs" || name == "interface-state-ons" || name == "interface-table" || name == "interface-unicast-qos-adjusts" || name == "non-active-groups" || name == "ranges" || name == "ssm-map-details" || name == "ssm-maps" || name == "summary" || name == "traffic-counters" || name == "vrf-name")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroups()
{

    yang_name = "detail-groups"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::DetailGroups::~DetailGroups()
{
}

bool Mld::Standby::Vrfs::Vrf::DetailGroups::has_data() const
{
    for (std::size_t index=0; index<detail_group.size(); index++)
    {
        if(detail_group[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Standby::Vrfs::Vrf::DetailGroups::has_operation() const
{
    for (std::size_t index=0; index<detail_group.size(); index++)
    {
        if(detail_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::DetailGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::DetailGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::DetailGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup>();
        c->parent = this;
        detail_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::DetailGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : detail_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::Vrfs::Vrf::DetailGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::Vrfs::Vrf::DetailGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::Vrfs::Vrf::DetailGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-group")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::DetailGroup()
    :
    group_address{YType::str, "group-address"},
    interface_name{YType::str, "interface-name"},
    is_host_exclude_mode{YType::boolean, "is-host-exclude-mode"},
    is_router_exclude_mode{YType::boolean, "is-router-exclude-mode"},
    source_address{YType::str, "source-address"}
    	,
    group_info(std::make_shared<Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo>())
{
    group_info->parent = this;

    yang_name = "detail-group"; yang_parent_name = "detail-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::~DetailGroup()
{
}

bool Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::has_data() const
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

bool Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::has_operation() const
{
    for (std::size_t index=0; index<source.size(); index++)
    {
        if(source[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(is_host_exclude_mode.yfilter)
	|| ydk::is_set(is_router_exclude_mode.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| (group_info !=  nullptr && group_info->has_operation());
}

std::string Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_host_exclude_mode.is_set || is_set(is_host_exclude_mode.yfilter)) leaf_name_data.push_back(is_host_exclude_mode.get_name_leafdata());
    if (is_router_exclude_mode.is_set || is_set(is_router_exclude_mode.yfilter)) leaf_name_data.push_back(is_router_exclude_mode.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-info")
    {
        if(group_info == nullptr)
        {
            group_info = std::make_shared<Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo>();
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
        auto c = std::make_shared<Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source>();
        c->parent = this;
        source.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::get_children() const
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

void Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "is-host-exclude-mode")
    {
        is_host_exclude_mode = value;
        is_host_exclude_mode.value_namespace = name_space;
        is_host_exclude_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-router-exclude-mode")
    {
        is_router_exclude_mode = value;
        is_router_exclude_mode.value_namespace = name_space;
        is_router_exclude_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "is-host-exclude-mode")
    {
        is_host_exclude_mode.yfilter = yfilter;
    }
    if(value_path == "is-router-exclude-mode")
    {
        is_router_exclude_mode.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-info" || name == "source" || name == "group-address" || name == "interface-name" || name == "is-host-exclude-mode" || name == "is-router-exclude-mode" || name == "source-address")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupInfo()
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
    group_address_xr(std::make_shared<Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr>())
	,last_reporter(std::make_shared<Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter>())
	,source_address(std::make_shared<Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress>())
{
    group_address_xr->parent = this;
    last_reporter->parent = this;
    source_address->parent = this;

    yang_name = "group-info"; yang_parent_name = "detail-group"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::~GroupInfo()
{
}

bool Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::has_data() const
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

bool Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expiration_time.yfilter)
	|| ydk::is_set(explicit_tracking_enabled.yfilter)
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

std::string Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.yfilter)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (explicit_tracking_enabled.is_set || is_set(explicit_tracking_enabled.yfilter)) leaf_name_data.push_back(explicit_tracking_enabled.get_name_leafdata());
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

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "last-reporter")
    {
        if(last_reporter == nullptr)
        {
            last_reporter = std::make_shared<Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter>();
        }
        return last_reporter;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::get_children() const
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

void Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expiration-time")
    {
        expiration_time.yfilter = yfilter;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled.yfilter = yfilter;
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

bool Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "last-reporter" || name == "source-address" || name == "expiration-time" || name == "explicit-tracking-enabled" || name == "interface-name-xr" || name == "is-added" || name == "is-low-memory" || name == "is-self-join" || name == "is-suppressed" || name == "older-host-version1-timer" || name == "older-host-version2-timer" || name == "router-filter-mode" || name == "row-status" || name == "uptime")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "group-info"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::~GroupAddressXr()
{
}

bool Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "last-reporter"; yang_parent_name = "group-info"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::~LastReporter()
{
}

bool Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::LastReporter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "group-info"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::~SourceAddress()
{
}

bool Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::GroupInfo::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::Source()
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
    source_address(std::make_shared<Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress>())
{
    source_address->parent = this;

    yang_name = "source"; yang_parent_name = "detail-group"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::~Source()
{
}

bool Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::has_data() const
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

bool Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expiration_time.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(is_added.yfilter)
	|| ydk::is_set(is_forward.yfilter)
	|| ydk::is_set(is_local.yfilter)
	|| ydk::is_set(is_remote.yfilter)
	|| ydk::is_set(is_we_report.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (source_address !=  nullptr && source_address->has_operation());
}

std::string Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.yfilter)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (is_added.is_set || is_set(is_added.yfilter)) leaf_name_data.push_back(is_added.get_name_leafdata());
    if (is_forward.is_set || is_set(is_forward.yfilter)) leaf_name_data.push_back(is_forward.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.yfilter)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (is_remote.is_set || is_set(is_remote.yfilter)) leaf_name_data.push_back(is_remote.get_name_leafdata());
    if (is_we_report.is_set || is_set(is_we_report.yfilter)) leaf_name_data.push_back(is_we_report.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_address != nullptr)
    {
        children["source-address"] = source_address;
    }

    return children;
}

void Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
        expiration_time.value_namespace = name_space;
        expiration_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-added")
    {
        is_added = value;
        is_added.value_namespace = name_space;
        is_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-forward")
    {
        is_forward = value;
        is_forward.value_namespace = name_space;
        is_forward.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local")
    {
        is_local = value;
        is_local.value_namespace = name_space;
        is_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-remote")
    {
        is_remote = value;
        is_remote.value_namespace = name_space;
        is_remote.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-we-report")
    {
        is_we_report = value;
        is_we_report.value_namespace = name_space;
        is_we_report.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expiration-time")
    {
        expiration_time.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "is-added")
    {
        is_added.yfilter = yfilter;
    }
    if(value_path == "is-forward")
    {
        is_forward.yfilter = yfilter;
    }
    if(value_path == "is-local")
    {
        is_local.yfilter = yfilter;
    }
    if(value_path == "is-remote")
    {
        is_remote.yfilter = yfilter;
    }
    if(value_path == "is-we-report")
    {
        is_we_report.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "expiration-time" || name == "flags" || name == "is-added" || name == "is-forward" || name == "is-local" || name == "is-remote" || name == "is-we-report" || name == "uptime")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::~SourceAddress()
{
}

bool Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::DetailGroups::DetailGroup::Source::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroups()
{

    yang_name = "explicit-groups"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::ExplicitGroups::~ExplicitGroups()
{
}

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::has_data() const
{
    for (std::size_t index=0; index<explicit_group.size(); index++)
    {
        if(explicit_group[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::has_operation() const
{
    for (std::size_t index=0; index<explicit_group.size(); index++)
    {
        if(explicit_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::ExplicitGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::ExplicitGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::ExplicitGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup>();
        c->parent = this;
        explicit_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::ExplicitGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : explicit_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::Vrfs::Vrf::ExplicitGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::Vrfs::Vrf::ExplicitGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "explicit-group")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::ExplicitGroup()
    :
    exclude_hosts{YType::uint32, "exclude-hosts"},
    group_address{YType::str, "group-address"},
    include_hosts{YType::uint32, "include-hosts"},
    interface_name{YType::str, "interface-name"},
    source_address{YType::str, "source-address"}
    	,
    group_info(std::make_shared<Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo>())
{
    group_info->parent = this;

    yang_name = "explicit-group"; yang_parent_name = "explicit-groups"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::~ExplicitGroup()
{
}

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::has_data() const
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

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(exclude_hosts.yfilter)
	|| ydk::is_set(group_address.yfilter)
	|| ydk::is_set(include_hosts.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| (group_info !=  nullptr && group_info->has_operation());
}

std::string Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "explicit-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (exclude_hosts.is_set || is_set(exclude_hosts.yfilter)) leaf_name_data.push_back(exclude_hosts.get_name_leafdata());
    if (group_address.is_set || is_set(group_address.yfilter)) leaf_name_data.push_back(group_address.get_name_leafdata());
    if (include_hosts.is_set || is_set(include_hosts.yfilter)) leaf_name_data.push_back(include_hosts.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-info")
    {
        if(group_info == nullptr)
        {
            group_info = std::make_shared<Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo>();
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
        auto c = std::make_shared<Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::get_children() const
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

void Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "exclude-hosts")
    {
        exclude_hosts = value;
        exclude_hosts.value_namespace = name_space;
        exclude_hosts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-address")
    {
        group_address = value;
        group_address.value_namespace = name_space;
        group_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-hosts")
    {
        include_hosts = value;
        include_hosts.value_namespace = name_space;
        include_hosts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "exclude-hosts")
    {
        exclude_hosts.yfilter = yfilter;
    }
    if(value_path == "group-address")
    {
        group_address.yfilter = yfilter;
    }
    if(value_path == "include-hosts")
    {
        include_hosts.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
}

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-info" || name == "host" || name == "exclude-hosts" || name == "group-address" || name == "include-hosts" || name == "interface-name" || name == "source-address")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupInfo()
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
    group_address_xr(std::make_shared<Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr>())
	,last_reporter(std::make_shared<Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter>())
	,source_address(std::make_shared<Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress>())
{
    group_address_xr->parent = this;
    last_reporter->parent = this;
    source_address->parent = this;

    yang_name = "group-info"; yang_parent_name = "explicit-group"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::~GroupInfo()
{
}

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::has_data() const
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

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(expiration_time.yfilter)
	|| ydk::is_set(explicit_tracking_enabled.yfilter)
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

std::string Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.yfilter)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (explicit_tracking_enabled.is_set || is_set(explicit_tracking_enabled.yfilter)) leaf_name_data.push_back(explicit_tracking_enabled.get_name_leafdata());
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

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "last-reporter")
    {
        if(last_reporter == nullptr)
        {
            last_reporter = std::make_shared<Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter>();
        }
        return last_reporter;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::get_children() const
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

void Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expiration-time")
    {
        expiration_time.yfilter = yfilter;
    }
    if(value_path == "explicit-tracking-enabled")
    {
        explicit_tracking_enabled.yfilter = yfilter;
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

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "last-reporter" || name == "source-address" || name == "expiration-time" || name == "explicit-tracking-enabled" || name == "interface-name-xr" || name == "is-added" || name == "is-low-memory" || name == "is-self-join" || name == "is-suppressed" || name == "older-host-version1-timer" || name == "older-host-version2-timer" || name == "router-filter-mode" || name == "row-status" || name == "uptime")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "group-info"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::~GroupAddressXr()
{
}

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "last-reporter"; yang_parent_name = "group-info"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::~LastReporter()
{
}

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::LastReporter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "group-info"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::~SourceAddress()
{
}

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::GroupInfo::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Host()
    :
    expiration_time{YType::uint32, "expiration-time"},
    is_exclude{YType::boolean, "is-exclude"},
    source_count{YType::uint32, "source-count"},
    uptime{YType::uint32, "uptime"}
    	,
    address(std::make_shared<Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address>())
{
    address->parent = this;

    yang_name = "host"; yang_parent_name = "explicit-group"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::~Host()
{
}

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::has_data() const
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

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::has_operation() const
{
    for (std::size_t index=0; index<source_address.size(); index++)
    {
        if(source_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(expiration_time.yfilter)
	|| ydk::is_set(is_exclude.yfilter)
	|| ydk::is_set(source_count.yfilter)
	|| ydk::is_set(uptime.yfilter)
	|| (address !=  nullptr && address->has_operation());
}

std::string Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (expiration_time.is_set || is_set(expiration_time.yfilter)) leaf_name_data.push_back(expiration_time.get_name_leafdata());
    if (is_exclude.is_set || is_set(is_exclude.yfilter)) leaf_name_data.push_back(is_exclude.get_name_leafdata());
    if (source_count.is_set || is_set(source_count.yfilter)) leaf_name_data.push_back(source_count.get_name_leafdata());
    if (uptime.is_set || is_set(uptime.yfilter)) leaf_name_data.push_back(uptime.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address>();
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
        auto c = std::make_shared<Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress>();
        c->parent = this;
        source_address.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::get_children() const
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

void Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "expiration-time")
    {
        expiration_time = value;
        expiration_time.value_namespace = name_space;
        expiration_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-exclude")
    {
        is_exclude = value;
        is_exclude.value_namespace = name_space;
        is_exclude.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-count")
    {
        source_count = value;
        source_count.value_namespace = name_space;
        source_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uptime")
    {
        uptime = value;
        uptime.value_namespace = name_space;
        uptime.value_namespace_prefix = name_space_prefix;
    }
}

void Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "expiration-time")
    {
        expiration_time.yfilter = yfilter;
    }
    if(value_path == "is-exclude")
    {
        is_exclude.yfilter = yfilter;
    }
    if(value_path == "source-count")
    {
        source_count.yfilter = yfilter;
    }
    if(value_path == "uptime")
    {
        uptime.yfilter = yfilter;
    }
}

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "source-address" || name == "expiration-time" || name == "is-exclude" || name == "source-count" || name == "uptime")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::~Address()
{
}

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::~SourceAddress()
{
}

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::ExplicitGroups::ExplicitGroup::Host::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::GlobalInterfaceTable()
{

    yang_name = "global-interface-table"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::~GlobalInterfaceTable()
{
}

bool Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-interface-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Interface()
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
    address(std::make_shared<Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address>())
	,querier_address(std::make_shared<Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress>())
{
    address->parent = this;
    querier_address->parent = this;
    subscriber_address->parent = this;

    yang_name = "interface"; yang_parent_name = "global-interface-table"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::~Interface()
{
}

bool Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::has_data() const
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

bool Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::has_operation() const
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

std::string Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::get_name_leaf_data() const
{
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

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::get_children() const
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

void Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "querier-address" || name == "subscriber-address" || name == "interface-name" || name == "configuration-mcast-vrf-error" || name == "configuration-mcast-vrf-set" || name == "configurationvrf-error" || name == "configurationvrf-set" || name == "group-joins" || name == "group-leaves" || name == "host-version" || name == "igmp-version" || name == "interface-name-xr" || name == "is-configurationverify" || name == "is-identity-present" || name == "is-im-state-registered" || name == "is-interface-up" || name == "is-ip-enabled" || name == "is-las-registered" || name == "is-las-request" || name == "is-querier" || name == "is-router-enabled" || name == "is-subscriber" || name == "las-get-address-count" || name == "las-ll-add-update-count" || name == "las-ll-registration-count" || name == "las-ll-remove-update-count" || name == "las-null-update-count" || name == "las-unregistration-count" || name == "las-update-count" || name == "last-member-query-interval" || name == "location" || name == "mte-tuple-count" || name == "mte-vrf-id" || name == "mtu" || name == "parent-ifhandle" || name == "prefix-length" || name == "proxy-interface" || name == "querier-uptime" || name == "query-interval" || name == "query-maximum-response-time" || name == "query-timeout" || name == "robustness" || name == "router-uptime-in-seconds" || name == "state" || name == "subscriber-id" || name == "subscriber-mode" || name == "time-since-last-query-in-seconds" || name == "time-since-last-report-in-seconds" || name == "total-active-groups" || name == "vrf-id" || name == "vrf-state")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::~Address()
{
}

bool Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "querier-address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::QuerierAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "subscriber-address"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::GlobalInterfaceTable::Interface::SubscriberAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::GroupSummary::GroupSummary()
    :
    group_count{YType::uint32, "group-count"},
    groutes{YType::uint32, "groutes"},
    is_low_memory{YType::boolean, "is-low-memory"},
    sg_routes{YType::uint32, "sg-routes"}
{

    yang_name = "group-summary"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::GroupSummary::~GroupSummary()
{
}

bool Mld::Standby::Vrfs::Vrf::GroupSummary::has_data() const
{
    return group_count.is_set
	|| groutes.is_set
	|| is_low_memory.is_set
	|| sg_routes.is_set;
}

bool Mld::Standby::Vrfs::Vrf::GroupSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_count.yfilter)
	|| ydk::is_set(groutes.yfilter)
	|| ydk::is_set(is_low_memory.yfilter)
	|| ydk::is_set(sg_routes.yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::GroupSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::GroupSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_count.is_set || is_set(group_count.yfilter)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (groutes.is_set || is_set(groutes.yfilter)) leaf_name_data.push_back(groutes.get_name_leafdata());
    if (is_low_memory.is_set || is_set(is_low_memory.yfilter)) leaf_name_data.push_back(is_low_memory.get_name_leafdata());
    if (sg_routes.is_set || is_set(sg_routes.yfilter)) leaf_name_data.push_back(sg_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::GroupSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::GroupSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Vrfs::Vrf::GroupSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::GroupSummary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::GroupSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-count" || name == "groutes" || name == "is-low-memory" || name == "sg-routes")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::Groups::Groups()
{

    yang_name = "groups"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::Groups::~Groups()
{
}

bool Mld::Standby::Vrfs::Vrf::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Standby::Vrfs::Vrf::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::Vrfs::Vrf::Groups::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::Vrfs::Vrf::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::Vrfs::Vrf::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::Vrfs::Vrf::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::Groups::Group::Group()
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
    group_address_xr(std::make_shared<Mld::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr>())
	,last_reporter(std::make_shared<Mld::Standby::Vrfs::Vrf::Groups::Group::LastReporter>())
	,source_address(std::make_shared<Mld::Standby::Vrfs::Vrf::Groups::Group::SourceAddress>())
{
    group_address_xr->parent = this;
    last_reporter->parent = this;
    source_address->parent = this;

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::Groups::Group::~Group()
{
}

bool Mld::Standby::Vrfs::Vrf::Groups::Group::has_data() const
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

bool Mld::Standby::Vrfs::Vrf::Groups::Group::has_operation() const
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

std::string Mld::Standby::Vrfs::Vrf::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::Groups::Group::get_name_leaf_data() const
{
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

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-address-xr")
    {
        if(group_address_xr == nullptr)
        {
            group_address_xr = std::make_shared<Mld::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr>();
        }
        return group_address_xr;
    }

    if(child_yang_name == "last-reporter")
    {
        if(last_reporter == nullptr)
        {
            last_reporter = std::make_shared<Mld::Standby::Vrfs::Vrf::Groups::Group::LastReporter>();
        }
        return last_reporter;
    }

    if(child_yang_name == "source-address")
    {
        if(source_address == nullptr)
        {
            source_address = std::make_shared<Mld::Standby::Vrfs::Vrf::Groups::Group::SourceAddress>();
        }
        return source_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::Groups::Group::get_children() const
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

void Mld::Standby::Vrfs::Vrf::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-address-xr" || name == "last-reporter" || name == "source-address" || name == "expiration-time" || name == "explicit-tracking-enabled" || name == "group-address" || name == "interface-name" || name == "interface-name-xr" || name == "is-added" || name == "is-low-memory" || name == "is-self-join" || name == "is-suppressed" || name == "older-host-version1-timer" || name == "older-host-version2-timer" || name == "router-filter-mode" || name == "row-status" || name == "uptime")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr::GroupAddressXr()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "group-address-xr"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr::~GroupAddressXr()
{
}

bool Mld::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::Groups::Group::GroupAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::Groups::Group::LastReporter::LastReporter()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "last-reporter"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::Groups::Group::LastReporter::~LastReporter()
{
}

bool Mld::Standby::Vrfs::Vrf::Groups::Group::LastReporter::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::Vrfs::Vrf::Groups::Group::LastReporter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::Groups::Group::LastReporter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reporter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::Groups::Group::LastReporter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::Groups::Group::LastReporter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::Groups::Group::LastReporter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Vrfs::Vrf::Groups::Group::LastReporter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::Groups::Group::LastReporter::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::Groups::Group::LastReporter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::Groups::Group::SourceAddress::SourceAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "source-address"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::Groups::Group::SourceAddress::~SourceAddress()
{
}

bool Mld::Standby::Vrfs::Vrf::Groups::Group::SourceAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::Vrfs::Vrf::Groups::Group::SourceAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::Groups::Group::SourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::Groups::Group::SourceAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::Groups::Group::SourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::Groups::Group::SourceAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Vrfs::Vrf::Groups::Group::SourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::Groups::Group::SourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::Groups::Group::SourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::IfrsInterfaceSummary::IfrsInterfaceSummary()
    :
    configuration_count{YType::uint32, "configuration-count"},
    interface_count{YType::uint32, "interface-count"}
{

    yang_name = "ifrs-interface-summary"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::IfrsInterfaceSummary::~IfrsInterfaceSummary()
{
}

bool Mld::Standby::Vrfs::Vrf::IfrsInterfaceSummary::has_data() const
{
    return configuration_count.is_set
	|| interface_count.is_set;
}

bool Mld::Standby::Vrfs::Vrf::IfrsInterfaceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configuration_count.yfilter)
	|| ydk::is_set(interface_count.yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::IfrsInterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::IfrsInterfaceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configuration_count.is_set || is_set(configuration_count.yfilter)) leaf_name_data.push_back(configuration_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::IfrsInterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::IfrsInterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Vrfs::Vrf::IfrsInterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::IfrsInterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::IfrsInterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configuration-count" || name == "interface-count")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterfaces()
{

    yang_name = "ifrs-interfaces"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::IfrsInterfaces::~IfrsInterfaces()
{
}

bool Mld::Standby::Vrfs::Vrf::IfrsInterfaces::has_data() const
{
    for (std::size_t index=0; index<ifrs_interface.size(); index++)
    {
        if(ifrs_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Standby::Vrfs::Vrf::IfrsInterfaces::has_operation() const
{
    for (std::size_t index=0; index<ifrs_interface.size(); index++)
    {
        if(ifrs_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::IfrsInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::IfrsInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::IfrsInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface>();
        c->parent = this;
        ifrs_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::IfrsInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ifrs_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::Vrfs::Vrf::IfrsInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::Vrfs::Vrf::IfrsInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::Vrfs::Vrf::IfrsInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ifrs-interface")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IfrsInterface()
    :
    interface_name{YType::str, "interface-name"},
    join_group_count{YType::uint32, "join-group-count"}
    	,
    igmp_interface_entry(std::make_shared<Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry>())
{
    igmp_interface_entry->parent = this;

    yang_name = "ifrs-interface"; yang_parent_name = "ifrs-interfaces"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::~IfrsInterface()
{
}

bool Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::has_data() const
{
    return interface_name.is_set
	|| join_group_count.is_set
	|| (igmp_interface_entry !=  nullptr && igmp_interface_entry->has_data());
}

bool Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(join_group_count.yfilter)
	|| (igmp_interface_entry !=  nullptr && igmp_interface_entry->has_operation());
}

std::string Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ifrs-interface" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (join_group_count.is_set || is_set(join_group_count.yfilter)) leaf_name_data.push_back(join_group_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igmp-interface-entry")
    {
        if(igmp_interface_entry == nullptr)
        {
            igmp_interface_entry = std::make_shared<Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry>();
        }
        return igmp_interface_entry;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(igmp_interface_entry != nullptr)
    {
        children["igmp-interface-entry"] = igmp_interface_entry;
    }

    return children;
}

void Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igmp-interface-entry" || name == "interface-name" || name == "join-group-count")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::IgmpInterfaceEntry()
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
    address(std::make_shared<Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address>())
	,querier_address(std::make_shared<Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress>())
{
    address->parent = this;
    querier_address->parent = this;
    subscriber_address->parent = this;

    yang_name = "igmp-interface-entry"; yang_parent_name = "ifrs-interface"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::~IgmpInterfaceEntry()
{
}

bool Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::has_data() const
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

bool Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::has_operation() const
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

std::string Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp-interface-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_name_leaf_data() const
{
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

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::get_children() const
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

void Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "querier-address" || name == "subscriber-address" || name == "configuration-mcast-vrf-error" || name == "configuration-mcast-vrf-set" || name == "configurationvrf-error" || name == "configurationvrf-set" || name == "group-joins" || name == "group-leaves" || name == "host-version" || name == "igmp-version" || name == "interface-name-xr" || name == "is-configurationverify" || name == "is-identity-present" || name == "is-im-state-registered" || name == "is-interface-up" || name == "is-ip-enabled" || name == "is-las-registered" || name == "is-las-request" || name == "is-querier" || name == "is-router-enabled" || name == "is-subscriber" || name == "las-get-address-count" || name == "las-ll-add-update-count" || name == "las-ll-registration-count" || name == "las-ll-remove-update-count" || name == "las-null-update-count" || name == "las-unregistration-count" || name == "las-update-count" || name == "last-member-query-interval" || name == "location" || name == "mte-tuple-count" || name == "mte-vrf-id" || name == "mtu" || name == "parent-ifhandle" || name == "prefix-length" || name == "proxy-interface" || name == "querier-uptime" || name == "query-interval" || name == "query-maximum-response-time" || name == "query-timeout" || name == "robustness" || name == "router-uptime-in-seconds" || name == "state" || name == "subscriber-id" || name == "subscriber-mode" || name == "time-since-last-query-in-seconds" || name == "time-since-last-report-in-seconds" || name == "total-active-groups" || name == "vrf-id" || name == "vrf-state")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "igmp-interface-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::~Address()
{
}

bool Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "querier-address"; yang_parent_name = "igmp-interface-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::QuerierAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::SubscriberAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "subscriber-address"; yang_parent_name = "igmp-interface-entry"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::~SubscriberAddress()
{
}

bool Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::IfrsInterfaces::IfrsInterface::IgmpInterfaceEntry::SubscriberAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOffs()
{

    yang_name = "interface-state-offs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::~InterfaceStateOffs()
{
}

bool Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::has_data() const
{
    for (std::size_t index=0; index<interface_state_off.size(); index++)
    {
        if(interface_state_off[index]->has_data())
            return true;
    }
    return false;
}

bool Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::has_operation() const
{
    for (std::size_t index=0; index<interface_state_off.size(); index++)
    {
        if(interface_state_off[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-offs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff>();
        c->parent = this;
        interface_state_off.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_state_off)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-state-off")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::InterfaceStateOff()
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
    address(std::make_shared<Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address>())
	,querier_address(std::make_shared<Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress>())
	,subscriber_address(std::make_shared<Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress>())
{
    address->parent = this;
    querier_address->parent = this;
    subscriber_address->parent = this;

    yang_name = "interface-state-off"; yang_parent_name = "interface-state-offs"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::~InterfaceStateOff()
{
}

bool Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::has_data() const
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

bool Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::has_operation() const
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

std::string Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-state-off" <<"[interface-name='" <<interface_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::get_name_leaf_data() const
{
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

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address>();
        }
        return address;
    }

    if(child_yang_name == "querier-address")
    {
        if(querier_address == nullptr)
        {
            querier_address = std::make_shared<Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress>();
        }
        return querier_address;
    }

    if(child_yang_name == "subscriber-address")
    {
        if(subscriber_address == nullptr)
        {
            subscriber_address = std::make_shared<Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::SubscriberAddress>();
        }
        return subscriber_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::get_children() const
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

void Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "querier-address" || name == "subscriber-address" || name == "interface-name" || name == "configuration-mcast-vrf-error" || name == "configuration-mcast-vrf-set" || name == "configurationvrf-error" || name == "configurationvrf-set" || name == "group-joins" || name == "group-leaves" || name == "host-version" || name == "igmp-version" || name == "interface-name-xr" || name == "is-configurationverify" || name == "is-identity-present" || name == "is-im-state-registered" || name == "is-interface-up" || name == "is-ip-enabled" || name == "is-las-registered" || name == "is-las-request" || name == "is-querier" || name == "is-router-enabled" || name == "is-subscriber" || name == "las-get-address-count" || name == "las-ll-add-update-count" || name == "las-ll-registration-count" || name == "las-ll-remove-update-count" || name == "las-null-update-count" || name == "las-unregistration-count" || name == "las-update-count" || name == "last-member-query-interval" || name == "location" || name == "mte-tuple-count" || name == "mte-vrf-id" || name == "mtu" || name == "parent-ifhandle" || name == "prefix-length" || name == "proxy-interface" || name == "querier-uptime" || name == "query-interval" || name == "query-maximum-response-time" || name == "query-timeout" || name == "robustness" || name == "router-uptime-in-seconds" || name == "state" || name == "subscriber-id" || name == "subscriber-mode" || name == "time-since-last-query-in-seconds" || name == "time-since-last-report-in-seconds" || name == "total-active-groups" || name == "vrf-id" || name == "vrf-state")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "address"; yang_parent_name = "interface-state-off"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::~Address()
{
}

bool Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::QuerierAddress()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "querier-address"; yang_parent_name = "interface-state-off"; is_top_level_class = false; has_list_ancestor = true;
}

Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::~QuerierAddress()
{
}

bool Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::has_data() const
{
    return af_name.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "querier-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Mld::Standby::Vrfs::Vrf::InterfaceStateOffs::InterfaceStateOff::QuerierAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}


}
}

