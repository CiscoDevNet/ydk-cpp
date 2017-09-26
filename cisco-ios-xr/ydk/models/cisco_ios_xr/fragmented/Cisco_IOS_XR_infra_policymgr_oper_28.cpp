
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_28.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_34.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_32.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_33.hpp"
#include "Cisco_IOS_XR_infra_policymgr_oper_29.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_policymgr_oper {

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::Ipv4AddrArray()
    :
    mask{YType::str, "mask"},
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv4-addr-array"; yang_parent_name = "dst-addr-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::~Ipv4AddrArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::has_data() const
{
    return mask.is_set
	|| prefix.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addr-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv4::Ipv4AddrArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "prefix")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::DstAddrIpv6()
{

    yang_name = "dst-addr-ipv6"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::~DstAddrIpv6()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::has_data() const
{
    for (std::size_t index=0; index<ipv6_addr_array.size(); index++)
    {
        if(ipv6_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::has_operation() const
{
    for (std::size_t index=0; index<ipv6_addr_array.size(); index++)
    {
        if(ipv6_addr_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-addr-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-addr-array")
    {
        for(auto const & c : ipv6_addr_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray>();
        c->parent = this;
        ipv6_addr_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_addr_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-addr-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::Ipv6AddrArray()
    :
    mask{YType::uint32, "mask"},
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv6-addr-array"; yang_parent_name = "dst-addr-ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::~Ipv6AddrArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::has_data() const
{
    return mask.is_set
	|| prefix.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addr-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstAddrIpv6::Ipv6AddrArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "prefix")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::DstMac()
    :
    mac_addr{YType::uint16, "mac-addr"},
    mask{YType::uint16, "mask"}
{

    yang_name = "dst-mac"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::~DstMac()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::has_data() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::has_operation() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac_addr.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_addr_name_datas = mac_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_addr_name_datas.begin(), mac_addr_name_datas.end());
    auto mask_name_datas = mask.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mask_name_datas.begin(), mask_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-addr")
    {
        mac_addr.append(value);
    }
    if(value_path == "mask")
    {
        mask.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-addr")
    {
        mac_addr.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-addr" || name == "mask")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::DstPort()
{

    yang_name = "dst-port"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::~DstPort()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dst-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::Uint16RngArray()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "dst-port"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::DstPort::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::EtherServiceAcl()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "ether-service-acl"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::~EtherServiceAcl()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ether-service-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::EtherServiceAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Ethertype()
{

    yang_name = "ethertype"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::~Ethertype()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethertype";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::Uint16RngArray()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "ethertype"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ethertype::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeyData()
    :
    idle_timeout{YType::uint16, "idle-timeout"},
    max_count{YType::uint16, "max-count"}
    	,
    flow_keys(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys>())
{
    flow_keys->parent = this;

    yang_name = "flow-key-data"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::~FlowKeyData()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::has_data() const
{
    return idle_timeout.is_set
	|| max_count.is_set
	|| (flow_keys !=  nullptr && flow_keys->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(idle_timeout.yfilter)
	|| ydk::is_set(max_count.yfilter)
	|| (flow_keys !=  nullptr && flow_keys->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-key-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_timeout.is_set || is_set(idle_timeout.yfilter)) leaf_name_data.push_back(idle_timeout.get_name_leafdata());
    if (max_count.is_set || is_set(max_count.yfilter)) leaf_name_data.push_back(max_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-keys")
    {
        if(flow_keys == nullptr)
        {
            flow_keys = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys>();
        }
        return flow_keys;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_keys != nullptr)
    {
        children["flow-keys"] = flow_keys;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "idle-timeout")
    {
        idle_timeout = value;
        idle_timeout.value_namespace = name_space;
        idle_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-count")
    {
        max_count = value;
        max_count.value_namespace = name_space;
        max_count.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "idle-timeout")
    {
        idle_timeout.yfilter = yfilter;
    }
    if(value_path == "max-count")
    {
        max_count.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-keys" || name == "idle-timeout" || name == "max-count")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::FlowKeys()
    :
    keys{YType::str, "keys"},
    num{YType::uint8, "num"}
{

    yang_name = "flow-keys"; yang_parent_name = "flow-key-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::~FlowKeys()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::has_data() const
{
    return keys.is_set
	|| num.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(keys.yfilter)
	|| ydk::is_set(num.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-keys";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keys.is_set || is_set(keys.yfilter)) leaf_name_data.push_back(keys.get_name_leafdata());
    if (num.is_set || is_set(num.yfilter)) leaf_name_data.push_back(num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "keys")
    {
        keys = value;
        keys.value_namespace = name_space;
        keys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num")
    {
        num = value;
        num.value_namespace = name_space;
        num.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "keys")
    {
        keys.yfilter = yfilter;
    }
    if(value_path == "num")
    {
        num.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowKeyData::FlowKeys::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "keys" || name == "num")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::FlowTag()
{

    yang_name = "flow-tag"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::~FlowTag()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::Uint8RngArray()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "flow-tag"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FlowTag::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::FrDe()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "fr-de"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::~FrDe()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr-de";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::FrDlci()
{

    yang_name = "fr-dlci"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::~FrDlci()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr-dlci";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::Uint16RngArray()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "fr-dlci"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::FrDlci::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::IcmpV4()
    :
    code{YType::uint8, "code"},
    type{YType::uint8, "type"}
{

    yang_name = "icmp-v4"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::~IcmpV4()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::has_data() const
{
    return code.is_set
	|| type.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-v4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "type")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::IcmpV6()
    :
    code{YType::uint8, "code"},
    type{YType::uint8, "type"}
{

    yang_name = "icmp-v6"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::~IcmpV6()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::has_data() const
{
    return code.is_set
	|| type.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(code.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmp-v6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code.is_set || is_set(code.yfilter)) leaf_name_data.push_back(code.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "code")
    {
        code = value;
        code.value_namespace = name_space;
        code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "code")
    {
        code.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::IcmpV6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "code" || name == "type")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Icmpv4Code()
{

    yang_name = "icmpv4-code"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::~Icmpv4Code()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv4-code";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::Uint8RngArray()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv4-code"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Code::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Icmpv4Type()
{

    yang_name = "icmpv4-type"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::~Icmpv4Type()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv4-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::Uint8RngArray()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv4-type"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv4Type::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Icmpv6Code()
{

    yang_name = "icmpv6-code"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::~Icmpv6Code()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv6-code";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::Uint8RngArray()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv6-code"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Code::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Icmpv6Type()
{

    yang_name = "icmpv6-type"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::~Icmpv6Type()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "icmpv6-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::Uint8RngArray()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "icmpv6-type"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Icmpv6Type::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::InputInterface()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "input-interface"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::~InputInterface()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::InputIntfhdl()
    :
    uint64_array{YType::uint64, "uint64_array"}
{

    yang_name = "input-intfhdl"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::~InputIntfhdl()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::has_data() const
{
    for (auto const & leaf : uint64_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::has_operation() const
{
    for (auto const & leaf : uint64_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint64_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input-intfhdl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint64_array_name_datas = uint64_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint64_array_name_datas.begin(), uint64_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint64_array")
    {
        uint64_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint64_array")
    {
        uint64_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::InputIntfhdl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint64_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::Ipv4Acl()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "ipv4-acl"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::~Ipv4Acl()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Ipv4Dscp()
{

    yang_name = "ipv4-dscp"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::~Ipv4Dscp()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::Uint8RngArray()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "ipv4-dscp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Dscp::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Ipv4PacketLen()
{

    yang_name = "ipv4-packet-len"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::~Ipv4PacketLen()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-packet-len";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::Uint16RngArray()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "ipv4-packet-len"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4PacketLen::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::Ipv4Prec()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "ipv4-prec"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::~Ipv4Prec()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-prec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv4Prec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::Ipv6Acl()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "ipv6-acl"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::~Ipv6Acl()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Ipv6Dscp()
{

    yang_name = "ipv6-dscp"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::~Ipv6Dscp()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-dscp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::Uint8RngArray()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "ipv6-dscp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Dscp::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Ipv6PacketLen()
{

    yang_name = "ipv6-packet-len"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::~Ipv6PacketLen()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-packet-len";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::Uint16RngArray()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "ipv6-packet-len"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6PacketLen::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::Ipv6Prec()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "ipv6-prec"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::~Ipv6Prec()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-prec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Ipv6Prec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::MediaType()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "media-type"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::~MediaType()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MediaType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::MplsDispIpv4Acl()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "mpls-disp-ipv4-acl"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::~MplsDispIpv4Acl()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-disp-ipv4-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv4Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::MplsDispIpv6Acl()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "mpls-disp-ipv6-acl"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::~MplsDispIpv6Acl()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-disp-ipv6-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsDispIpv6Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::MplsExp()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "mpls-exp"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::~MplsExp()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-exp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::MplsExpImp()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "mpls-exp-imp"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::~MplsExpImp()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-exp-imp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsExpImp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::MplsTopLabel()
{

    yang_name = "mpls-top-label"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::~MplsTopLabel()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::has_data() const
{
    for (std::size_t index=0; index<uint32_rng_array.size(); index++)
    {
        if(uint32_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::has_operation() const
{
    for (std::size_t index=0; index<uint32_rng_array.size(); index++)
    {
        if(uint32_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-top-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint32_rng_array")
    {
        for(auto const & c : uint32_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray>();
        c->parent = this;
        uint32_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint32_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint32_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::Uint32RngArray()
    :
    max{YType::uint32, "max"},
    min{YType::uint32, "min"}
{

    yang_name = "uint32_rng_array"; yang_parent_name = "mpls-top-label"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::~Uint32RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint32_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::MplsTopLabel::Uint32RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPort()
{

    yang_name = "nas-port"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::~NasPort()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::has_data() const
{
    for (std::size_t index=0; index<nas_port_array.size(); index++)
    {
        if(nas_port_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::has_operation() const
{
    for (std::size_t index=0; index<nas_port_array.size(); index++)
    {
        if(nas_port_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nas-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nas-port-array")
    {
        for(auto const & c : nas_port_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray>();
        c->parent = this;
        nas_port_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nas_port_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nas-port-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::NasPortArray()
    :
    operator_{YType::enumeration, "operator"},
    sub_id{YType::enumeration, "sub-id"},
    value_{YType::uint32, "value"}
{

    yang_name = "nas-port-array"; yang_parent_name = "nas-port"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::~NasPortArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::has_data() const
{
    return operator_.is_set
	|| sub_id.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(operator_.yfilter)
	|| ydk::is_set(sub_id.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nas-port-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (operator_.is_set || is_set(operator_.yfilter)) leaf_name_data.push_back(operator_.get_name_leafdata());
    if (sub_id.is_set || is_set(sub_id.yfilter)) leaf_name_data.push_back(sub_id.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "operator")
    {
        operator_ = value;
        operator_.value_namespace = name_space;
        operator_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-id")
    {
        sub_id = value;
        sub_id.value_namespace = name_space;
        sub_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "operator")
    {
        operator_.yfilter = yfilter;
    }
    if(value_path == "sub-id")
    {
        sub_id.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::NasPort::NasPortArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "operator" || name == "sub-id" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::PacketLen()
{

    yang_name = "packet-len"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::~PacketLen()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "packet-len";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::Uint16RngArray()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "packet-len"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::PacketLen::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::Prec()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "prec"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::~Prec()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Prec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Proto()
{

    yang_name = "proto"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::~Proto()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::Uint16RngArray()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "proto"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Proto::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::QosGroup()
{

    yang_name = "qos-group"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::~QosGroup()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qos-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::Uint16RngArray()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "qos-group"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::QosGroup::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::RemoteId()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "remote-id"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::~RemoteId()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::RemoteIdRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "remote-id-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::~RemoteIdRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-id-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::RemoteIdRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::ServiceName()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "service-name"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::~ServiceName()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::ServiceNameRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "service-name-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::~ServiceNameRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-name-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::ServiceNameRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::SrcAddrIpv4()
{

    yang_name = "src-addr-ipv4"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::~SrcAddrIpv4()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::has_data() const
{
    for (std::size_t index=0; index<ipv4_addr_array.size(); index++)
    {
        if(ipv4_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::has_operation() const
{
    for (std::size_t index=0; index<ipv4_addr_array.size(); index++)
    {
        if(ipv4_addr_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-addr-ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-addr-array")
    {
        for(auto const & c : ipv4_addr_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray>();
        c->parent = this;
        ipv4_addr_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_addr_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-addr-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::Ipv4AddrArray()
    :
    mask{YType::str, "mask"},
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv4-addr-array"; yang_parent_name = "src-addr-ipv4"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::~Ipv4AddrArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::has_data() const
{
    return mask.is_set
	|| prefix.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-addr-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv4::Ipv4AddrArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "prefix")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::SrcAddrIpv6()
{

    yang_name = "src-addr-ipv6"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::~SrcAddrIpv6()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::has_data() const
{
    for (std::size_t index=0; index<ipv6_addr_array.size(); index++)
    {
        if(ipv6_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::has_operation() const
{
    for (std::size_t index=0; index<ipv6_addr_array.size(); index++)
    {
        if(ipv6_addr_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-addr-ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6-addr-array")
    {
        for(auto const & c : ipv6_addr_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray>();
        c->parent = this;
        ipv6_addr_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv6_addr_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-addr-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::Ipv6AddrArray()
    :
    mask{YType::uint32, "mask"},
    prefix{YType::str, "prefix"}
{

    yang_name = "ipv6-addr-array"; yang_parent_name = "src-addr-ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::~Ipv6AddrArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::has_data() const
{
    return mask.is_set
	|| prefix.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-addr-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrIpv6::Ipv6AddrArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "prefix")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::SrcAddrMac()
{

    yang_name = "src-addr-mac"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::~SrcAddrMac()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::has_data() const
{
    for (std::size_t index=0; index<mac_addr_array.size(); index++)
    {
        if(mac_addr_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::has_operation() const
{
    for (std::size_t index=0; index<mac_addr_array.size(); index++)
    {
        if(mac_addr_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-addr-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-addr-array")
    {
        for(auto const & c : mac_addr_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray>();
        c->parent = this;
        mac_addr_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mac_addr_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-addr-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::MacAddrArray()
    :
    mac_addr{YType::uint16, "mac-addr"},
    mask{YType::uint16, "mask"}
{

    yang_name = "mac-addr-array"; yang_parent_name = "src-addr-mac"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::~MacAddrArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::has_data() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::has_operation() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac_addr.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-addr-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_addr_name_datas = mac_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_addr_name_datas.begin(), mac_addr_name_datas.end());
    auto mask_name_datas = mask.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mask_name_datas.begin(), mask_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-addr")
    {
        mac_addr.append(value);
    }
    if(value_path == "mask")
    {
        mask.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-addr")
    {
        mac_addr.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcAddrMac::MacAddrArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-addr" || name == "mask")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::SrcMac()
    :
    mac_addr{YType::uint16, "mac-addr"},
    mask{YType::uint16, "mask"}
{

    yang_name = "src-mac"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::~SrcMac()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::has_data() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::has_operation() const
{
    for (auto const & leaf : mac_addr.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    for (auto const & leaf : mask.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mac_addr.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto mac_addr_name_datas = mac_addr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mac_addr_name_datas.begin(), mac_addr_name_datas.end());
    auto mask_name_datas = mask.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mask_name_datas.begin(), mask_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-addr")
    {
        mac_addr.append(value);
    }
    if(value_path == "mask")
    {
        mask.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-addr")
    {
        mac_addr.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-addr" || name == "mask")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::SrcPort()
{

    yang_name = "src-port"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::~SrcPort()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "src-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray::Uint16RngArray()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "src-port"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SrcPort::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::SubsProtocol()
    :
    uint8_array{YType::uint8, "uint8_array"}
{

    yang_name = "subs-protocol"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::~SubsProtocol()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::has_data() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::has_operation() const
{
    for (auto const & leaf : uint8_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(uint8_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subs-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto uint8_array_name_datas = uint8_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), uint8_array_name_datas.begin(), uint8_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "uint8_array")
    {
        uint8_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "uint8_array")
    {
        uint8_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::SubsProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::TcpFlag()
    :
    match_any{YType::boolean, "match-any"},
    value_{YType::uint16, "value"}
{

    yang_name = "tcp-flag"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::~TcpFlag()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::has_data() const
{
    return match_any.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(match_any.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-flag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_any.is_set || is_set(match_any.yfilter)) leaf_name_data.push_back(match_any.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "match-any")
    {
        match_any = value;
        match_any.value_namespace = name_space;
        match_any.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "match-any")
    {
        match_any.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TcpFlag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-any" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::Timer()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "timer"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::~Timer()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Timer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::TimerRegexp()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "timer-regexp"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::~TimerRegexp()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timer-regexp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TimerRegexp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::TrafficClass()
{

    yang_name = "traffic-class"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::~TrafficClass()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::has_data() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::has_operation() const
{
    for (std::size_t index=0; index<uint8_rng_array.size(); index++)
    {
        if(uint8_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-class";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint8_rng_array")
    {
        for(auto const & c : uint8_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray>();
        c->parent = this;
        uint8_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint8_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint8_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::Uint8RngArray()
    :
    max{YType::uint8, "max"},
    min{YType::uint8, "min"}
{

    yang_name = "uint8_rng_array"; yang_parent_name = "traffic-class"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::~Uint8RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint8_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TrafficClass::Uint8RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::TunnelName()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "tunnel-name"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::~TunnelName()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::TunnelNameRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "tunnel-name-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::~TunnelNameRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-name-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::TunnelNameRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::UnauthDomain()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "unauth-domain"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::~UnauthDomain()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unauth-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::UnauthDomainRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "unauth-domain-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::~UnauthDomainRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unauth-domain-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthDomainRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::UnauthUsername()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "unauth-username"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::~UnauthUsername()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unauth-username";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsername::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::UnauthUsernameRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "unauth-username-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::~UnauthUsernameRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unauth-username-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UnauthUsernameRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::UserName()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "user-name"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::~UserName()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::UserNameRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "user-name-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::~UserNameRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-name-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::UserNameRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::VendorId()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "vendor-id"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::~VendorId()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vendor-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::VendorIdRegex()
    :
    string_array{YType::str, "string-array"}
{

    yang_name = "vendor-id-regex"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::~VendorIdRegex()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::has_data() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::has_operation() const
{
    for (auto const & leaf : string_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(string_array.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vendor-id-regex";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto string_array_name_datas = string_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), string_array_name_datas.begin(), string_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string-array")
    {
        string_array.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string-array")
    {
        string_array.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VendorIdRegex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::Vlan()
{

    yang_name = "vlan"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::~Vlan()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::has_data() const
{
    for (std::size_t index=0; index<vlan_id_array.size(); index++)
    {
        if(vlan_id_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::has_operation() const
{
    for (std::size_t index=0; index<vlan_id_array.size(); index++)
    {
        if(vlan_id_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-id-array")
    {
        for(auto const & c : vlan_id_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray>();
        c->parent = this;
        vlan_id_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan_id_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::VlanIdArray()
    :
    mask{YType::uint16, "mask"},
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "vlan-id-array"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::~VlanIdArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::has_data() const
{
    return mask.is_set
	|| max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-id-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::Vlan::VlanIdArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mask" || name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::VlanInr()
{

    yang_name = "vlan-inr"; yang_parent_name = "match-data"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::~VlanInr()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::has_data() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::has_operation() const
{
    for (std::size_t index=0; index<uint16_rng_array.size(); index++)
    {
        if(uint16_rng_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-inr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "uint16_rng_array")
    {
        for(auto const & c : uint16_rng_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray>();
        c->parent = this;
        uint16_rng_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : uint16_rng_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "uint16_rng_array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::Uint16RngArray()
    :
    max{YType::uint16, "max"},
    min{YType::uint16, "min"}
{

    yang_name = "uint16_rng_array"; yang_parent_name = "vlan-inr"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::~Uint16RngArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::has_data() const
{
    return max.is_set
	|| min.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter)
	|| ydk::is_set(min.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uint16_rng_array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());
    if (min.is_set || is_set(min.yfilter)) leaf_name_data.push_back(min.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min")
    {
        min = value;
        min.value_namespace = name_space;
        min.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
    if(value_path == "min")
    {
        min.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP::ClassMapBg::MatchInfop::ClassMatchInfoSt::MatchData::VlanInr::Uint16RngArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max" || name == "min")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarList()
    :
    offset{YType::uint8, "offset"}
{

    yang_name = "pmap-var-list"; yang_parent_name = "policy-map-bg"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::~PmapVarList()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::has_data() const
{
    for (std::size_t index=0; index<pmap_var_list_arr.size(); index++)
    {
        if(pmap_var_list_arr[index]->has_data())
            return true;
    }
    for (auto const & leaf : offset.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::has_operation() const
{
    for (std::size_t index=0; index<pmap_var_list_arr.size(); index++)
    {
        if(pmap_var_list_arr[index]->has_operation())
            return true;
    }
    for (auto const & leaf : offset.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(offset.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-var-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto offset_name_datas = offset.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), offset_name_datas.begin(), offset_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmap-var-list-arr")
    {
        for(auto const & c : pmap_var_list_arr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr>();
        c->parent = this;
        pmap_var_list_arr.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pmap_var_list_arr)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "offset")
    {
        offset.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "offset")
    {
        offset.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmap-var-list-arr" || name == "offset")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::PmapVarListArr()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
    	,
    val(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::Val>())
{
    val->parent = this;

    yang_name = "pmap-var-list-arr"; yang_parent_name = "pmap-var-list"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::~PmapVarListArr()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::has_data() const
{
    return id.is_set
	|| name.is_set
	|| (val !=  nullptr && val->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(name.yfilter)
	|| (val !=  nullptr && val->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-var-list-arr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "val")
    {
        if(val == nullptr)
        {
            val = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::Val>();
        }
        return val;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(val != nullptr)
    {
        children["val"] = val;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "val" || name == "id" || name == "name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::Val::Val()
    :
    class_name{YType::str, "class-name"},
    dscp_val{YType::uint8, "dscp-val"},
    param_uint32_val{YType::uint32, "param-uint32-val"},
    prec_val{YType::uint8, "prec-val"},
    type{YType::enumeration, "type"},
    uint16_val{YType::uint16, "uint16_val"},
    uint32_val{YType::uint32, "uint32_val"},
    uint8_val{YType::uint8, "uint8_val"}
{

    yang_name = "val"; yang_parent_name = "pmap-var-list-arr"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::Val::~Val()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::Val::has_data() const
{
    return class_name.is_set
	|| dscp_val.is_set
	|| param_uint32_val.is_set
	|| prec_val.is_set
	|| type.is_set
	|| uint16_val.is_set
	|| uint32_val.is_set
	|| uint8_val.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::Val::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(dscp_val.yfilter)
	|| ydk::is_set(param_uint32_val.yfilter)
	|| ydk::is_set(prec_val.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(uint16_val.yfilter)
	|| ydk::is_set(uint32_val.yfilter)
	|| ydk::is_set(uint8_val.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::Val::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "val";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::Val::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (dscp_val.is_set || is_set(dscp_val.yfilter)) leaf_name_data.push_back(dscp_val.get_name_leafdata());
    if (param_uint32_val.is_set || is_set(param_uint32_val.yfilter)) leaf_name_data.push_back(param_uint32_val.get_name_leafdata());
    if (prec_val.is_set || is_set(prec_val.yfilter)) leaf_name_data.push_back(prec_val.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (uint16_val.is_set || is_set(uint16_val.yfilter)) leaf_name_data.push_back(uint16_val.get_name_leafdata());
    if (uint32_val.is_set || is_set(uint32_val.yfilter)) leaf_name_data.push_back(uint32_val.get_name_leafdata());
    if (uint8_val.is_set || is_set(uint8_val.yfilter)) leaf_name_data.push_back(uint8_val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::Val::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::Val::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::Val::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp-val")
    {
        dscp_val = value;
        dscp_val.value_namespace = name_space;
        dscp_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "param-uint32-val")
    {
        param_uint32_val = value;
        param_uint32_val.value_namespace = name_space;
        param_uint32_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec-val")
    {
        prec_val = value;
        prec_val.value_namespace = name_space;
        prec_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uint16_val")
    {
        uint16_val = value;
        uint16_val.value_namespace = name_space;
        uint16_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uint32_val")
    {
        uint32_val = value;
        uint32_val.value_namespace = name_space;
        uint32_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uint8_val")
    {
        uint8_val = value;
        uint8_val.value_namespace = name_space;
        uint8_val.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::Val::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "dscp-val")
    {
        dscp_val.yfilter = yfilter;
    }
    if(value_path == "param-uint32-val")
    {
        param_uint32_val.yfilter = yfilter;
    }
    if(value_path == "prec-val")
    {
        prec_val.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "uint16_val")
    {
        uint16_val.yfilter = yfilter;
    }
    if(value_path == "uint32_val")
    {
        uint32_val.yfilter = yfilter;
    }
    if(value_path == "uint8_val")
    {
        uint8_val.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Input::Detail::Pmaps::PolicyMapBg::PmapVarList::PmapVarListArr::Val::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-name" || name == "dscp-val" || name == "param-uint32-val" || name == "prec-val" || name == "type" || name == "uint16_val" || name == "uint32_val" || name == "uint8_val")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Output()
    :
    detail(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail>())
{
    detail->parent = this;

    yang_name = "output"; yang_parent_name = "if-name"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::~Output()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::has_data() const
{
    return (detail !=  nullptr && detail->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::has_operation() const
{
    return is_set(yfilter)
	|| (detail !=  nullptr && detail->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Detail()
    :
    parent_pmap_name{YType::str, "parent-pmap-name"},
    pmap_type{YType::enumeration, "pmap-type"},
    subscriber_grp{YType::str, "subscriber-grp"}
{

    yang_name = "detail"; yang_parent_name = "output"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::~Detail()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::has_data() const
{
    for (std::size_t index=0; index<pmap_var_list.size(); index++)
    {
        if(pmap_var_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pmaps.size(); index++)
    {
        if(pmaps[index]->has_data())
            return true;
    }
    for (auto const & leaf : subscriber_grp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return parent_pmap_name.is_set
	|| pmap_type.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::has_operation() const
{
    for (std::size_t index=0; index<pmap_var_list.size(); index++)
    {
        if(pmap_var_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pmaps.size(); index++)
    {
        if(pmaps[index]->has_operation())
            return true;
    }
    for (auto const & leaf : subscriber_grp.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(parent_pmap_name.yfilter)
	|| ydk::is_set(pmap_type.yfilter)
	|| ydk::is_set(subscriber_grp.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parent_pmap_name.is_set || is_set(parent_pmap_name.yfilter)) leaf_name_data.push_back(parent_pmap_name.get_name_leafdata());
    if (pmap_type.is_set || is_set(pmap_type.yfilter)) leaf_name_data.push_back(pmap_type.get_name_leafdata());

    auto subscriber_grp_name_datas = subscriber_grp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), subscriber_grp_name_datas.begin(), subscriber_grp_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pmap-var-list")
    {
        for(auto const & c : pmap_var_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList>();
        c->parent = this;
        pmap_var_list.push_back(c);
        return c;
    }

    if(child_yang_name == "pmaps")
    {
        for(auto const & c : pmaps)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps>();
        c->parent = this;
        pmaps.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pmap_var_list)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pmaps)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "parent-pmap-name")
    {
        parent_pmap_name = value;
        parent_pmap_name.value_namespace = name_space;
        parent_pmap_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmap-type")
    {
        pmap_type = value;
        pmap_type.value_namespace = name_space;
        pmap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "subscriber-grp")
    {
        subscriber_grp.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "parent-pmap-name")
    {
        parent_pmap_name.yfilter = yfilter;
    }
    if(value_path == "pmap-type")
    {
        pmap_type.yfilter = yfilter;
    }
    if(value_path == "subscriber-grp")
    {
        subscriber_grp.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pmap-var-list" || name == "pmaps" || name == "parent-pmap-name" || name == "pmap-type" || name == "subscriber-grp")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::PmapVarList()
{

    yang_name = "pmap-var-list"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::~PmapVarList()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::has_data() const
{
    for (std::size_t index=0; index<var_list.size(); index++)
    {
        if(var_list[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::has_operation() const
{
    for (std::size_t index=0; index<var_list.size(); index++)
    {
        if(var_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmap-var-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "var-list")
    {
        for(auto const & c : var_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::VarList>();
        c->parent = this;
        var_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : var_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "var-list")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::VarList::VarList()
    :
    class_name{YType::str, "class-name"},
    dscp_val{YType::uint8, "dscp-val"},
    param_uint32_val{YType::uint32, "param-uint32-val"},
    prec_val{YType::uint8, "prec-val"},
    type{YType::enumeration, "type"},
    uint16_val{YType::uint16, "uint16_val"},
    uint32_val{YType::uint32, "uint32_val"},
    uint8_val{YType::uint8, "uint8_val"}
{

    yang_name = "var-list"; yang_parent_name = "pmap-var-list"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::VarList::~VarList()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::VarList::has_data() const
{
    return class_name.is_set
	|| dscp_val.is_set
	|| param_uint32_val.is_set
	|| prec_val.is_set
	|| type.is_set
	|| uint16_val.is_set
	|| uint32_val.is_set
	|| uint8_val.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::VarList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_name.yfilter)
	|| ydk::is_set(dscp_val.yfilter)
	|| ydk::is_set(param_uint32_val.yfilter)
	|| ydk::is_set(prec_val.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(uint16_val.yfilter)
	|| ydk::is_set(uint32_val.yfilter)
	|| ydk::is_set(uint8_val.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::VarList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "var-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::VarList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.yfilter)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (dscp_val.is_set || is_set(dscp_val.yfilter)) leaf_name_data.push_back(dscp_val.get_name_leafdata());
    if (param_uint32_val.is_set || is_set(param_uint32_val.yfilter)) leaf_name_data.push_back(param_uint32_val.get_name_leafdata());
    if (prec_val.is_set || is_set(prec_val.yfilter)) leaf_name_data.push_back(prec_val.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (uint16_val.is_set || is_set(uint16_val.yfilter)) leaf_name_data.push_back(uint16_val.get_name_leafdata());
    if (uint32_val.is_set || is_set(uint32_val.yfilter)) leaf_name_data.push_back(uint32_val.get_name_leafdata());
    if (uint8_val.is_set || is_set(uint8_val.yfilter)) leaf_name_data.push_back(uint8_val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::VarList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::VarList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::VarList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-name")
    {
        class_name = value;
        class_name.value_namespace = name_space;
        class_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dscp-val")
    {
        dscp_val = value;
        dscp_val.value_namespace = name_space;
        dscp_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "param-uint32-val")
    {
        param_uint32_val = value;
        param_uint32_val.value_namespace = name_space;
        param_uint32_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prec-val")
    {
        prec_val = value;
        prec_val.value_namespace = name_space;
        prec_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uint16_val")
    {
        uint16_val = value;
        uint16_val.value_namespace = name_space;
        uint16_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uint32_val")
    {
        uint32_val = value;
        uint32_val.value_namespace = name_space;
        uint32_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uint8_val")
    {
        uint8_val = value;
        uint8_val.value_namespace = name_space;
        uint8_val.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::VarList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-name")
    {
        class_name.yfilter = yfilter;
    }
    if(value_path == "dscp-val")
    {
        dscp_val.yfilter = yfilter;
    }
    if(value_path == "param-uint32-val")
    {
        param_uint32_val.yfilter = yfilter;
    }
    if(value_path == "prec-val")
    {
        prec_val.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "uint16_val")
    {
        uint16_val.yfilter = yfilter;
    }
    if(value_path == "uint32_val")
    {
        uint32_val.yfilter = yfilter;
    }
    if(value_path == "uint8_val")
    {
        uint8_val.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::PmapVarList::VarList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-name" || name == "dscp-val" || name == "param-uint32-val" || name == "prec-val" || name == "type" || name == "uint16_val" || name == "uint32_val" || name == "uint8_val")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::Pmaps()
{

    yang_name = "pmaps"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::~Pmaps()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::has_data() const
{
    for (std::size_t index=0; index<policy_map_bg.size(); index++)
    {
        if(policy_map_bg[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::has_operation() const
{
    for (std::size_t index=0; index<policy_map_bg.size(); index++)
    {
        if(policy_map_bg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmaps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-map-bg")
    {
        for(auto const & c : policy_map_bg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg>();
        c->parent = this;
        policy_map_bg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_map_bg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-map-bg")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::PolicyMapBg()
    :
    description{YType::str, "description"},
    name{YType::str, "name"},
    type{YType::enumeration, "type"}
    	,
    event_infop(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop>())
	,pmap_var_list(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::PmapVarList>())
{
    event_infop->parent = this;
    pmap_var_list->parent = this;

    yang_name = "policy-map-bg"; yang_parent_name = "pmaps"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::~PolicyMapBg()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::has_data() const
{
    return description.is_set
	|| name.is_set
	|| type.is_set
	|| (event_infop !=  nullptr && event_infop->has_data())
	|| (pmap_var_list !=  nullptr && pmap_var_list->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (event_infop !=  nullptr && event_infop->has_operation())
	|| (pmap_var_list !=  nullptr && pmap_var_list->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-bg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event-infop")
    {
        if(event_infop == nullptr)
        {
            event_infop = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop>();
        }
        return event_infop;
    }

    if(child_yang_name == "pmap-var-list")
    {
        if(pmap_var_list == nullptr)
        {
            pmap_var_list = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::PmapVarList>();
        }
        return pmap_var_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(event_infop != nullptr)
    {
        children["event-infop"] = event_infop;
    }

    if(pmap_var_list != nullptr)
    {
        children["pmap-var-list"] = pmap_var_list;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-infop" || name == "pmap-var-list" || name == "description" || name == "name" || name == "type")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::EventInfop()
{

    yang_name = "event-infop"; yang_parent_name = "policy-map-bg"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::~EventInfop()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::has_data() const
{
    for (std::size_t index=0; index<policy_event_info_bg.size(); index++)
    {
        if(policy_event_info_bg[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::has_operation() const
{
    for (std::size_t index=0; index<policy_event_info_bg.size(); index++)
    {
        if(policy_event_info_bg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-infop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-event-info-bg")
    {
        for(auto const & c : policy_event_info_bg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg>();
        c->parent = this;
        policy_event_info_bg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_event_info_bg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-event-info-bg")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::PolicyEventInfoBg()
    :
    avl_tree{YType::uint64, "avl-tree"},
    cond_eval{YType::enumeration, "cond-eval"},
    event_type{YType::enumeration, "event-type"},
    flags{YType::uint32, "flags"}
    	,
    class_infop(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop>())
{
    class_infop->parent = this;

    yang_name = "policy-event-info-bg"; yang_parent_name = "event-infop"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::~PolicyEventInfoBg()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::has_data() const
{
    return avl_tree.is_set
	|| cond_eval.is_set
	|| event_type.is_set
	|| flags.is_set
	|| (class_infop !=  nullptr && class_infop->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(avl_tree.yfilter)
	|| ydk::is_set(cond_eval.yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| (class_infop !=  nullptr && class_infop->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-event-info-bg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (avl_tree.is_set || is_set(avl_tree.yfilter)) leaf_name_data.push_back(avl_tree.get_name_leafdata());
    if (cond_eval.is_set || is_set(cond_eval.yfilter)) leaf_name_data.push_back(cond_eval.get_name_leafdata());
    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-infop")
    {
        if(class_infop == nullptr)
        {
            class_infop = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop>();
        }
        return class_infop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(class_infop != nullptr)
    {
        children["class-infop"] = class_infop;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "avl-tree")
    {
        avl_tree = value;
        avl_tree.value_namespace = name_space;
        avl_tree.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cond-eval")
    {
        cond_eval = value;
        cond_eval.value_namespace = name_space;
        cond_eval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "avl-tree")
    {
        avl_tree.yfilter = yfilter;
    }
    if(value_path == "cond-eval")
    {
        cond_eval.yfilter = yfilter;
    }
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-infop" || name == "avl-tree" || name == "cond-eval" || name == "event-type" || name == "flags")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::ClassInfop()
{

    yang_name = "class-infop"; yang_parent_name = "policy-event-info-bg"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::~ClassInfop()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::has_data() const
{
    for (std::size_t index=0; index<policy_class_info_bg.size(); index++)
    {
        if(policy_class_info_bg[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::has_operation() const
{
    for (std::size_t index=0; index<policy_class_info_bg.size(); index++)
    {
        if(policy_class_info_bg[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-infop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-class-info-bg")
    {
        for(auto const & c : policy_class_info_bg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg>();
        c->parent = this;
        policy_class_info_bg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_class_info_bg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-class-info-bg")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::PolicyClassInfoBg()
    :
    ctype{YType::enumeration, "ctype"},
    exe_strat{YType::enumeration, "exe-strat"},
    flags{YType::uint32, "flags"},
    num_actions{YType::uint16, "num-actions"},
    policy_class_hd{YType::uint32, "policy-class-hd"},
    seq{YType::uint32, "seq"},
    version{YType::uint8, "version"}
    	,
    act_infop(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop>())
	,cl_encode(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode>())
	,clmp_p(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP>())
{
    act_infop->parent = this;
    cl_encode->parent = this;
    clmp_p->parent = this;

    yang_name = "policy-class-info-bg"; yang_parent_name = "class-infop"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::~PolicyClassInfoBg()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::has_data() const
{
    return ctype.is_set
	|| exe_strat.is_set
	|| flags.is_set
	|| num_actions.is_set
	|| policy_class_hd.is_set
	|| seq.is_set
	|| version.is_set
	|| (act_infop !=  nullptr && act_infop->has_data())
	|| (cl_encode !=  nullptr && cl_encode->has_data())
	|| (clmp_p !=  nullptr && clmp_p->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(exe_strat.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(num_actions.yfilter)
	|| ydk::is_set(policy_class_hd.yfilter)
	|| ydk::is_set(seq.yfilter)
	|| ydk::is_set(version.yfilter)
	|| (act_infop !=  nullptr && act_infop->has_operation())
	|| (cl_encode !=  nullptr && cl_encode->has_operation())
	|| (clmp_p !=  nullptr && clmp_p->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-info-bg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (exe_strat.is_set || is_set(exe_strat.yfilter)) leaf_name_data.push_back(exe_strat.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (num_actions.is_set || is_set(num_actions.yfilter)) leaf_name_data.push_back(num_actions.get_name_leafdata());
    if (policy_class_hd.is_set || is_set(policy_class_hd.yfilter)) leaf_name_data.push_back(policy_class_hd.get_name_leafdata());
    if (seq.is_set || is_set(seq.yfilter)) leaf_name_data.push_back(seq.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "act-infop")
    {
        if(act_infop == nullptr)
        {
            act_infop = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop>();
        }
        return act_infop;
    }

    if(child_yang_name == "cl-encode")
    {
        if(cl_encode == nullptr)
        {
            cl_encode = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClEncode>();
        }
        return cl_encode;
    }

    if(child_yang_name == "clmp-p")
    {
        if(clmp_p == nullptr)
        {
            clmp_p = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ClmpP>();
        }
        return clmp_p;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(act_infop != nullptr)
    {
        children["act-infop"] = act_infop;
    }

    if(cl_encode != nullptr)
    {
        children["cl-encode"] = cl_encode;
    }

    if(clmp_p != nullptr)
    {
        children["clmp-p"] = clmp_p;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exe-strat")
    {
        exe_strat = value;
        exe_strat.value_namespace = name_space;
        exe_strat.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-actions")
    {
        num_actions = value;
        num_actions.value_namespace = name_space;
        num_actions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-class-hd")
    {
        policy_class_hd = value;
        policy_class_hd.value_namespace = name_space;
        policy_class_hd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq")
    {
        seq = value;
        seq.value_namespace = name_space;
        seq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "exe-strat")
    {
        exe_strat.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "num-actions")
    {
        num_actions.yfilter = yfilter;
    }
    if(value_path == "policy-class-hd")
    {
        policy_class_hd.yfilter = yfilter;
    }
    if(value_path == "seq")
    {
        seq.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "act-infop" || name == "cl-encode" || name == "clmp-p" || name == "ctype" || name == "exe-strat" || name == "flags" || name == "num-actions" || name == "policy-class-hd" || name == "seq" || name == "version")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::ActInfop()
{

    yang_name = "act-infop"; yang_parent_name = "policy-class-info-bg"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::~ActInfop()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::has_data() const
{
    for (std::size_t index=0; index<policy_action_info_st.size(); index++)
    {
        if(policy_action_info_st[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::has_operation() const
{
    for (std::size_t index=0; index<policy_action_info_st.size(); index++)
    {
        if(policy_action_info_st[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "act-infop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy-action-info-st")
    {
        for(auto const & c : policy_action_info_st)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt>();
        c->parent = this;
        policy_action_info_st.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : policy_action_info_st)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-action-info-st")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::PolicyActionInfoSt()
    :
    flags{YType::uint16, "flags"},
    seq{YType::uint16, "seq"}
    	,
    actp(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp>())
{
    actp->parent = this;

    yang_name = "policy-action-info-st"; yang_parent_name = "act-infop"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::~PolicyActionInfoSt()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::has_data() const
{
    return flags.is_set
	|| seq.is_set
	|| (actp !=  nullptr && actp->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(seq.yfilter)
	|| (actp !=  nullptr && actp->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-action-info-st";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (seq.is_set || is_set(seq.yfilter)) leaf_name_data.push_back(seq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "actp")
    {
        if(actp == nullptr)
        {
            actp = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp>();
        }
        return actp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(actp != nullptr)
    {
        children["actp"] = actp;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seq")
    {
        seq = value;
        seq.value_namespace = name_space;
        seq.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "seq")
    {
        seq.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "actp" || name == "flags" || name == "seq")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Actp()
    :
    data_p{YType::uint32, "data-p"},
    type{YType::enumeration, "type"}
    	,
    accounting_event_aaa(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa>())
	,acct_aaa_list(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList>())
	,act_template(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate>())
	,afm_react(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact>())
	,authen_aaa(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa>())
	,authorize_id(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId>())
	,bwrem(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem>())
	,cac(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac>())
	,child_policy(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy>())
	,collect_id(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId>())
	,copy(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy>())
	,deact_template(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate>())
	,decode_id(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId>())
	,encap(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap>())
	,flow_parm(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm>())
	,fmm(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm>())
	,httpr(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr>())
	,ipcbr(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr>())
	,ipv4_nh(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh>())
	,ipv6_nh(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh>())
	,mark(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark>())
	,mark2(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2>())
	,mdi(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi>())
	,mdi_rtp(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp>())
	,min_bw(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw>())
	,out_intf(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf>())
	,pbf(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf>())
	,pfc(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc>())
	,police(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police>())
	,prepaid_cfg(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg>())
	,prio(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio>())
	,proxy_aaa(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa>())
	,punt(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt>())
	,qlimit(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit>())
	,query_ancp(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp>())
	,redirect(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Redirect>())
	,rtp(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp>())
	,rtp_j2k(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K>())
	,rtp_mmr(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr>())
	,rtp_voice(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice>())
	,serv_func(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ServFunc>())
	,set_timer(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer>())
	,sfrag(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag>())
	,shape(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape>())
	,stop_timer(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer>())
	,timeout_idle(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle>())
	,wred(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred>())
{
    accounting_event_aaa->parent = this;
    acct_aaa_list->parent = this;
    act_template->parent = this;
    afm_react->parent = this;
    authen_aaa->parent = this;
    authorize_id->parent = this;
    bwrem->parent = this;
    cac->parent = this;
    child_policy->parent = this;
    collect_id->parent = this;
    copy->parent = this;
    deact_template->parent = this;
    decode_id->parent = this;
    encap->parent = this;
    flow_parm->parent = this;
    fmm->parent = this;
    httpr->parent = this;
    ipcbr->parent = this;
    ipv4_nh->parent = this;
    ipv6_nh->parent = this;
    mark->parent = this;
    mark2->parent = this;
    mdi->parent = this;
    mdi_rtp->parent = this;
    min_bw->parent = this;
    out_intf->parent = this;
    pbf->parent = this;
    pfc->parent = this;
    police->parent = this;
    prepaid_cfg->parent = this;
    prio->parent = this;
    proxy_aaa->parent = this;
    punt->parent = this;
    qlimit->parent = this;
    query_ancp->parent = this;
    redirect->parent = this;
    rtp->parent = this;
    rtp_j2k->parent = this;
    rtp_mmr->parent = this;
    rtp_voice->parent = this;
    serv_func->parent = this;
    set_timer->parent = this;
    sfrag->parent = this;
    shape->parent = this;
    stop_timer->parent = this;
    timeout_idle->parent = this;
    wred->parent = this;

    yang_name = "actp"; yang_parent_name = "policy-action-info-st"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::~Actp()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::has_data() const
{
    return data_p.is_set
	|| type.is_set
	|| (accounting_event_aaa !=  nullptr && accounting_event_aaa->has_data())
	|| (acct_aaa_list !=  nullptr && acct_aaa_list->has_data())
	|| (act_template !=  nullptr && act_template->has_data())
	|| (afm_react !=  nullptr && afm_react->has_data())
	|| (authen_aaa !=  nullptr && authen_aaa->has_data())
	|| (authorize_id !=  nullptr && authorize_id->has_data())
	|| (bwrem !=  nullptr && bwrem->has_data())
	|| (cac !=  nullptr && cac->has_data())
	|| (child_policy !=  nullptr && child_policy->has_data())
	|| (collect_id !=  nullptr && collect_id->has_data())
	|| (copy !=  nullptr && copy->has_data())
	|| (deact_template !=  nullptr && deact_template->has_data())
	|| (decode_id !=  nullptr && decode_id->has_data())
	|| (encap !=  nullptr && encap->has_data())
	|| (flow_parm !=  nullptr && flow_parm->has_data())
	|| (fmm !=  nullptr && fmm->has_data())
	|| (httpr !=  nullptr && httpr->has_data())
	|| (ipcbr !=  nullptr && ipcbr->has_data())
	|| (ipv4_nh !=  nullptr && ipv4_nh->has_data())
	|| (ipv6_nh !=  nullptr && ipv6_nh->has_data())
	|| (mark !=  nullptr && mark->has_data())
	|| (mark2 !=  nullptr && mark2->has_data())
	|| (mdi !=  nullptr && mdi->has_data())
	|| (mdi_rtp !=  nullptr && mdi_rtp->has_data())
	|| (min_bw !=  nullptr && min_bw->has_data())
	|| (out_intf !=  nullptr && out_intf->has_data())
	|| (pbf !=  nullptr && pbf->has_data())
	|| (pfc !=  nullptr && pfc->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (prepaid_cfg !=  nullptr && prepaid_cfg->has_data())
	|| (prio !=  nullptr && prio->has_data())
	|| (proxy_aaa !=  nullptr && proxy_aaa->has_data())
	|| (punt !=  nullptr && punt->has_data())
	|| (qlimit !=  nullptr && qlimit->has_data())
	|| (query_ancp !=  nullptr && query_ancp->has_data())
	|| (redirect !=  nullptr && redirect->has_data())
	|| (rtp !=  nullptr && rtp->has_data())
	|| (rtp_j2k !=  nullptr && rtp_j2k->has_data())
	|| (rtp_mmr !=  nullptr && rtp_mmr->has_data())
	|| (rtp_voice !=  nullptr && rtp_voice->has_data())
	|| (serv_func !=  nullptr && serv_func->has_data())
	|| (set_timer !=  nullptr && set_timer->has_data())
	|| (sfrag !=  nullptr && sfrag->has_data())
	|| (shape !=  nullptr && shape->has_data())
	|| (stop_timer !=  nullptr && stop_timer->has_data())
	|| (timeout_idle !=  nullptr && timeout_idle->has_data())
	|| (wred !=  nullptr && wred->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_p.yfilter)
	|| ydk::is_set(type.yfilter)
	|| (accounting_event_aaa !=  nullptr && accounting_event_aaa->has_operation())
	|| (acct_aaa_list !=  nullptr && acct_aaa_list->has_operation())
	|| (act_template !=  nullptr && act_template->has_operation())
	|| (afm_react !=  nullptr && afm_react->has_operation())
	|| (authen_aaa !=  nullptr && authen_aaa->has_operation())
	|| (authorize_id !=  nullptr && authorize_id->has_operation())
	|| (bwrem !=  nullptr && bwrem->has_operation())
	|| (cac !=  nullptr && cac->has_operation())
	|| (child_policy !=  nullptr && child_policy->has_operation())
	|| (collect_id !=  nullptr && collect_id->has_operation())
	|| (copy !=  nullptr && copy->has_operation())
	|| (deact_template !=  nullptr && deact_template->has_operation())
	|| (decode_id !=  nullptr && decode_id->has_operation())
	|| (encap !=  nullptr && encap->has_operation())
	|| (flow_parm !=  nullptr && flow_parm->has_operation())
	|| (fmm !=  nullptr && fmm->has_operation())
	|| (httpr !=  nullptr && httpr->has_operation())
	|| (ipcbr !=  nullptr && ipcbr->has_operation())
	|| (ipv4_nh !=  nullptr && ipv4_nh->has_operation())
	|| (ipv6_nh !=  nullptr && ipv6_nh->has_operation())
	|| (mark !=  nullptr && mark->has_operation())
	|| (mark2 !=  nullptr && mark2->has_operation())
	|| (mdi !=  nullptr && mdi->has_operation())
	|| (mdi_rtp !=  nullptr && mdi_rtp->has_operation())
	|| (min_bw !=  nullptr && min_bw->has_operation())
	|| (out_intf !=  nullptr && out_intf->has_operation())
	|| (pbf !=  nullptr && pbf->has_operation())
	|| (pfc !=  nullptr && pfc->has_operation())
	|| (police !=  nullptr && police->has_operation())
	|| (prepaid_cfg !=  nullptr && prepaid_cfg->has_operation())
	|| (prio !=  nullptr && prio->has_operation())
	|| (proxy_aaa !=  nullptr && proxy_aaa->has_operation())
	|| (punt !=  nullptr && punt->has_operation())
	|| (qlimit !=  nullptr && qlimit->has_operation())
	|| (query_ancp !=  nullptr && query_ancp->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (rtp !=  nullptr && rtp->has_operation())
	|| (rtp_j2k !=  nullptr && rtp_j2k->has_operation())
	|| (rtp_mmr !=  nullptr && rtp_mmr->has_operation())
	|| (rtp_voice !=  nullptr && rtp_voice->has_operation())
	|| (serv_func !=  nullptr && serv_func->has_operation())
	|| (set_timer !=  nullptr && set_timer->has_operation())
	|| (sfrag !=  nullptr && sfrag->has_operation())
	|| (shape !=  nullptr && shape->has_operation())
	|| (stop_timer !=  nullptr && stop_timer->has_operation())
	|| (timeout_idle !=  nullptr && timeout_idle->has_operation())
	|| (wred !=  nullptr && wred->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "actp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_p.is_set || is_set(data_p.yfilter)) leaf_name_data.push_back(data_p.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting-event-aaa")
    {
        if(accounting_event_aaa == nullptr)
        {
            accounting_event_aaa = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa>();
        }
        return accounting_event_aaa;
    }

    if(child_yang_name == "acct-aaa-list")
    {
        if(acct_aaa_list == nullptr)
        {
            acct_aaa_list = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList>();
        }
        return acct_aaa_list;
    }

    if(child_yang_name == "act-template")
    {
        if(act_template == nullptr)
        {
            act_template = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate>();
        }
        return act_template;
    }

    if(child_yang_name == "afm-react")
    {
        if(afm_react == nullptr)
        {
            afm_react = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact>();
        }
        return afm_react;
    }

    if(child_yang_name == "authen-aaa")
    {
        if(authen_aaa == nullptr)
        {
            authen_aaa = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa>();
        }
        return authen_aaa;
    }

    if(child_yang_name == "authorize-id")
    {
        if(authorize_id == nullptr)
        {
            authorize_id = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId>();
        }
        return authorize_id;
    }

    if(child_yang_name == "bwrem")
    {
        if(bwrem == nullptr)
        {
            bwrem = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem>();
        }
        return bwrem;
    }

    if(child_yang_name == "cac")
    {
        if(cac == nullptr)
        {
            cac = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac>();
        }
        return cac;
    }

    if(child_yang_name == "child-policy")
    {
        if(child_policy == nullptr)
        {
            child_policy = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy>();
        }
        return child_policy;
    }

    if(child_yang_name == "collect-id")
    {
        if(collect_id == nullptr)
        {
            collect_id = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId>();
        }
        return collect_id;
    }

    if(child_yang_name == "copy")
    {
        if(copy == nullptr)
        {
            copy = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy>();
        }
        return copy;
    }

    if(child_yang_name == "deact-template")
    {
        if(deact_template == nullptr)
        {
            deact_template = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate>();
        }
        return deact_template;
    }

    if(child_yang_name == "decode-id")
    {
        if(decode_id == nullptr)
        {
            decode_id = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId>();
        }
        return decode_id;
    }

    if(child_yang_name == "encap")
    {
        if(encap == nullptr)
        {
            encap = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap>();
        }
        return encap;
    }

    if(child_yang_name == "flow-parm")
    {
        if(flow_parm == nullptr)
        {
            flow_parm = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm>();
        }
        return flow_parm;
    }

    if(child_yang_name == "fmm")
    {
        if(fmm == nullptr)
        {
            fmm = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm>();
        }
        return fmm;
    }

    if(child_yang_name == "httpr")
    {
        if(httpr == nullptr)
        {
            httpr = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr>();
        }
        return httpr;
    }

    if(child_yang_name == "ipcbr")
    {
        if(ipcbr == nullptr)
        {
            ipcbr = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr>();
        }
        return ipcbr;
    }

    if(child_yang_name == "ipv4-nh")
    {
        if(ipv4_nh == nullptr)
        {
            ipv4_nh = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh>();
        }
        return ipv4_nh;
    }

    if(child_yang_name == "ipv6-nh")
    {
        if(ipv6_nh == nullptr)
        {
            ipv6_nh = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh>();
        }
        return ipv6_nh;
    }

    if(child_yang_name == "mark")
    {
        if(mark == nullptr)
        {
            mark = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark>();
        }
        return mark;
    }

    if(child_yang_name == "mark2")
    {
        if(mark2 == nullptr)
        {
            mark2 = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2>();
        }
        return mark2;
    }

    if(child_yang_name == "mdi")
    {
        if(mdi == nullptr)
        {
            mdi = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi>();
        }
        return mdi;
    }

    if(child_yang_name == "mdi-rtp")
    {
        if(mdi_rtp == nullptr)
        {
            mdi_rtp = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp>();
        }
        return mdi_rtp;
    }

    if(child_yang_name == "min-bw")
    {
        if(min_bw == nullptr)
        {
            min_bw = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw>();
        }
        return min_bw;
    }

    if(child_yang_name == "out-intf")
    {
        if(out_intf == nullptr)
        {
            out_intf = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf>();
        }
        return out_intf;
    }

    if(child_yang_name == "pbf")
    {
        if(pbf == nullptr)
        {
            pbf = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf>();
        }
        return pbf;
    }

    if(child_yang_name == "pfc")
    {
        if(pfc == nullptr)
        {
            pfc = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc>();
        }
        return pfc;
    }

    if(child_yang_name == "police")
    {
        if(police == nullptr)
        {
            police = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Police>();
        }
        return police;
    }

    if(child_yang_name == "prepaid-cfg")
    {
        if(prepaid_cfg == nullptr)
        {
            prepaid_cfg = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::PrepaidCfg>();
        }
        return prepaid_cfg;
    }

    if(child_yang_name == "prio")
    {
        if(prio == nullptr)
        {
            prio = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Prio>();
        }
        return prio;
    }

    if(child_yang_name == "proxy-aaa")
    {
        if(proxy_aaa == nullptr)
        {
            proxy_aaa = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ProxyAaa>();
        }
        return proxy_aaa;
    }

    if(child_yang_name == "punt")
    {
        if(punt == nullptr)
        {
            punt = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Punt>();
        }
        return punt;
    }

    if(child_yang_name == "qlimit")
    {
        if(qlimit == nullptr)
        {
            qlimit = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Qlimit>();
        }
        return qlimit;
    }

    if(child_yang_name == "query-ancp")
    {
        if(query_ancp == nullptr)
        {
            query_ancp = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::QueryAncp>();
        }
        return query_ancp;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "rtp")
    {
        if(rtp == nullptr)
        {
            rtp = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Rtp>();
        }
        return rtp;
    }

    if(child_yang_name == "rtp-j2k")
    {
        if(rtp_j2k == nullptr)
        {
            rtp_j2k = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpJ2K>();
        }
        return rtp_j2k;
    }

    if(child_yang_name == "rtp-mmr")
    {
        if(rtp_mmr == nullptr)
        {
            rtp_mmr = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpMmr>();
        }
        return rtp_mmr;
    }

    if(child_yang_name == "rtp-voice")
    {
        if(rtp_voice == nullptr)
        {
            rtp_voice = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::RtpVoice>();
        }
        return rtp_voice;
    }

    if(child_yang_name == "serv-func")
    {
        if(serv_func == nullptr)
        {
            serv_func = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ServFunc>();
        }
        return serv_func;
    }

    if(child_yang_name == "set-timer")
    {
        if(set_timer == nullptr)
        {
            set_timer = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::SetTimer>();
        }
        return set_timer;
    }

    if(child_yang_name == "sfrag")
    {
        if(sfrag == nullptr)
        {
            sfrag = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Sfrag>();
        }
        return sfrag;
    }

    if(child_yang_name == "shape")
    {
        if(shape == nullptr)
        {
            shape = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Shape>();
        }
        return shape;
    }

    if(child_yang_name == "stop-timer")
    {
        if(stop_timer == nullptr)
        {
            stop_timer = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::StopTimer>();
        }
        return stop_timer;
    }

    if(child_yang_name == "timeout-idle")
    {
        if(timeout_idle == nullptr)
        {
            timeout_idle = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::TimeoutIdle>();
        }
        return timeout_idle;
    }

    if(child_yang_name == "wred")
    {
        if(wred == nullptr)
        {
            wred = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Wred>();
        }
        return wred;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting_event_aaa != nullptr)
    {
        children["accounting-event-aaa"] = accounting_event_aaa;
    }

    if(acct_aaa_list != nullptr)
    {
        children["acct-aaa-list"] = acct_aaa_list;
    }

    if(act_template != nullptr)
    {
        children["act-template"] = act_template;
    }

    if(afm_react != nullptr)
    {
        children["afm-react"] = afm_react;
    }

    if(authen_aaa != nullptr)
    {
        children["authen-aaa"] = authen_aaa;
    }

    if(authorize_id != nullptr)
    {
        children["authorize-id"] = authorize_id;
    }

    if(bwrem != nullptr)
    {
        children["bwrem"] = bwrem;
    }

    if(cac != nullptr)
    {
        children["cac"] = cac;
    }

    if(child_policy != nullptr)
    {
        children["child-policy"] = child_policy;
    }

    if(collect_id != nullptr)
    {
        children["collect-id"] = collect_id;
    }

    if(copy != nullptr)
    {
        children["copy"] = copy;
    }

    if(deact_template != nullptr)
    {
        children["deact-template"] = deact_template;
    }

    if(decode_id != nullptr)
    {
        children["decode-id"] = decode_id;
    }

    if(encap != nullptr)
    {
        children["encap"] = encap;
    }

    if(flow_parm != nullptr)
    {
        children["flow-parm"] = flow_parm;
    }

    if(fmm != nullptr)
    {
        children["fmm"] = fmm;
    }

    if(httpr != nullptr)
    {
        children["httpr"] = httpr;
    }

    if(ipcbr != nullptr)
    {
        children["ipcbr"] = ipcbr;
    }

    if(ipv4_nh != nullptr)
    {
        children["ipv4-nh"] = ipv4_nh;
    }

    if(ipv6_nh != nullptr)
    {
        children["ipv6-nh"] = ipv6_nh;
    }

    if(mark != nullptr)
    {
        children["mark"] = mark;
    }

    if(mark2 != nullptr)
    {
        children["mark2"] = mark2;
    }

    if(mdi != nullptr)
    {
        children["mdi"] = mdi;
    }

    if(mdi_rtp != nullptr)
    {
        children["mdi-rtp"] = mdi_rtp;
    }

    if(min_bw != nullptr)
    {
        children["min-bw"] = min_bw;
    }

    if(out_intf != nullptr)
    {
        children["out-intf"] = out_intf;
    }

    if(pbf != nullptr)
    {
        children["pbf"] = pbf;
    }

    if(pfc != nullptr)
    {
        children["pfc"] = pfc;
    }

    if(police != nullptr)
    {
        children["police"] = police;
    }

    if(prepaid_cfg != nullptr)
    {
        children["prepaid-cfg"] = prepaid_cfg;
    }

    if(prio != nullptr)
    {
        children["prio"] = prio;
    }

    if(proxy_aaa != nullptr)
    {
        children["proxy-aaa"] = proxy_aaa;
    }

    if(punt != nullptr)
    {
        children["punt"] = punt;
    }

    if(qlimit != nullptr)
    {
        children["qlimit"] = qlimit;
    }

    if(query_ancp != nullptr)
    {
        children["query-ancp"] = query_ancp;
    }

    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    if(rtp != nullptr)
    {
        children["rtp"] = rtp;
    }

    if(rtp_j2k != nullptr)
    {
        children["rtp-j2k"] = rtp_j2k;
    }

    if(rtp_mmr != nullptr)
    {
        children["rtp-mmr"] = rtp_mmr;
    }

    if(rtp_voice != nullptr)
    {
        children["rtp-voice"] = rtp_voice;
    }

    if(serv_func != nullptr)
    {
        children["serv-func"] = serv_func;
    }

    if(set_timer != nullptr)
    {
        children["set-timer"] = set_timer;
    }

    if(sfrag != nullptr)
    {
        children["sfrag"] = sfrag;
    }

    if(shape != nullptr)
    {
        children["shape"] = shape;
    }

    if(stop_timer != nullptr)
    {
        children["stop-timer"] = stop_timer;
    }

    if(timeout_idle != nullptr)
    {
        children["timeout-idle"] = timeout_idle;
    }

    if(wred != nullptr)
    {
        children["wred"] = wred;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-p")
    {
        data_p = value;
        data_p.value_namespace = name_space;
        data_p.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-p")
    {
        data_p.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting-event-aaa" || name == "acct-aaa-list" || name == "act-template" || name == "afm-react" || name == "authen-aaa" || name == "authorize-id" || name == "bwrem" || name == "cac" || name == "child-policy" || name == "collect-id" || name == "copy" || name == "deact-template" || name == "decode-id" || name == "encap" || name == "flow-parm" || name == "fmm" || name == "httpr" || name == "ipcbr" || name == "ipv4-nh" || name == "ipv6-nh" || name == "mark" || name == "mark2" || name == "mdi" || name == "mdi-rtp" || name == "min-bw" || name == "out-intf" || name == "pbf" || name == "pfc" || name == "police" || name == "prepaid-cfg" || name == "prio" || name == "proxy-aaa" || name == "punt" || name == "qlimit" || name == "query-ancp" || name == "redirect" || name == "rtp" || name == "rtp-j2k" || name == "rtp-mmr" || name == "rtp-voice" || name == "serv-func" || name == "set-timer" || name == "sfrag" || name == "shape" || name == "stop-timer" || name == "timeout-idle" || name == "wred" || name == "data-p" || name == "type")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::AccountingEventAaa()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    action{YType::enumeration, "action"}
{

    yang_name = "accounting-event-aaa"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::~AccountingEventAaa()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::has_data() const
{
    return aaa_list_name.is_set
	|| action.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_list_name.yfilter)
	|| ydk::is_set(action.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting-event-aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.yfilter)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
        aaa_list_name.value_namespace = name_space;
        aaa_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AccountingEventAaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-list-name" || name == "action")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::AcctAaaList()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    secs{YType::uint32, "secs"}
{

    yang_name = "acct-aaa-list"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::~AcctAaaList()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::has_data() const
{
    return aaa_list_name.is_set
	|| secs.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_list_name.yfilter)
	|| ydk::is_set(secs.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acct-aaa-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.yfilter)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (secs.is_set || is_set(secs.yfilter)) leaf_name_data.push_back(secs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
        aaa_list_name.value_namespace = name_space;
        aaa_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secs")
    {
        secs = value;
        secs.value_namespace = name_space;
        secs.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name.yfilter = yfilter;
    }
    if(value_path == "secs")
    {
        secs.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AcctAaaList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-list-name" || name == "secs")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::ActTemplate()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    flags{YType::uint32, "flags"},
    template_name{YType::str, "template-name"}
{

    yang_name = "act-template"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::~ActTemplate()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::has_data() const
{
    return aaa_list_name.is_set
	|| flags.is_set
	|| template_name.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_list_name.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "act-template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.yfilter)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
        aaa_list_name.value_namespace = name_space;
        aaa_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ActTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-list-name" || name == "flags" || name == "template-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::AfmReact()
{

    yang_name = "afm-react"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::~AfmReact()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::has_data() const
{
    for (std::size_t index=0; index<action_afmon_react_info.size(); index++)
    {
        if(action_afmon_react_info[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::has_operation() const
{
    for (std::size_t index=0; index<action_afmon_react_info.size(); index++)
    {
        if(action_afmon_react_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afm-react";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-afmon-react-info")
    {
        for(auto const & c : action_afmon_react_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo>();
        c->parent = this;
        action_afmon_react_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action_afmon_react_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-afmon-react-info")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::ActionAfmonReactInfo()
    :
    alm_grp_thresh{YType::uint16, "alm-grp-thresh"},
    alm_severity{YType::uint8, "alm-severity"},
    alm_type{YType::uint8, "alm-type"},
    clone_ifh{YType::uint32, "clone-ifh"},
    criterion{YType::uint8, "criterion"},
    description{YType::str, "description"},
    notif_actns{YType::uint8, "notif-actns"},
    oper_id{YType::uint32, "oper-id"},
    trig_level_1{YType::str, "trig-level-1"},
    trig_level_2{YType::str, "trig-level-2"},
    trig_num_intvls{YType::uint32, "trig-num-intvls"},
    trig_relop{YType::uint8, "trig-relop"},
    trig_type{YType::uint8, "trig-type"}
{

    yang_name = "action-afmon-react-info"; yang_parent_name = "afm-react"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::~ActionAfmonReactInfo()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::has_data() const
{
    return alm_grp_thresh.is_set
	|| alm_severity.is_set
	|| alm_type.is_set
	|| clone_ifh.is_set
	|| criterion.is_set
	|| description.is_set
	|| notif_actns.is_set
	|| oper_id.is_set
	|| trig_level_1.is_set
	|| trig_level_2.is_set
	|| trig_num_intvls.is_set
	|| trig_relop.is_set
	|| trig_type.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alm_grp_thresh.yfilter)
	|| ydk::is_set(alm_severity.yfilter)
	|| ydk::is_set(alm_type.yfilter)
	|| ydk::is_set(clone_ifh.yfilter)
	|| ydk::is_set(criterion.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(notif_actns.yfilter)
	|| ydk::is_set(oper_id.yfilter)
	|| ydk::is_set(trig_level_1.yfilter)
	|| ydk::is_set(trig_level_2.yfilter)
	|| ydk::is_set(trig_num_intvls.yfilter)
	|| ydk::is_set(trig_relop.yfilter)
	|| ydk::is_set(trig_type.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-afmon-react-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alm_grp_thresh.is_set || is_set(alm_grp_thresh.yfilter)) leaf_name_data.push_back(alm_grp_thresh.get_name_leafdata());
    if (alm_severity.is_set || is_set(alm_severity.yfilter)) leaf_name_data.push_back(alm_severity.get_name_leafdata());
    if (alm_type.is_set || is_set(alm_type.yfilter)) leaf_name_data.push_back(alm_type.get_name_leafdata());
    if (clone_ifh.is_set || is_set(clone_ifh.yfilter)) leaf_name_data.push_back(clone_ifh.get_name_leafdata());
    if (criterion.is_set || is_set(criterion.yfilter)) leaf_name_data.push_back(criterion.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (notif_actns.is_set || is_set(notif_actns.yfilter)) leaf_name_data.push_back(notif_actns.get_name_leafdata());
    if (oper_id.is_set || is_set(oper_id.yfilter)) leaf_name_data.push_back(oper_id.get_name_leafdata());
    if (trig_level_1.is_set || is_set(trig_level_1.yfilter)) leaf_name_data.push_back(trig_level_1.get_name_leafdata());
    if (trig_level_2.is_set || is_set(trig_level_2.yfilter)) leaf_name_data.push_back(trig_level_2.get_name_leafdata());
    if (trig_num_intvls.is_set || is_set(trig_num_intvls.yfilter)) leaf_name_data.push_back(trig_num_intvls.get_name_leafdata());
    if (trig_relop.is_set || is_set(trig_relop.yfilter)) leaf_name_data.push_back(trig_relop.get_name_leafdata());
    if (trig_type.is_set || is_set(trig_type.yfilter)) leaf_name_data.push_back(trig_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alm-grp-thresh")
    {
        alm_grp_thresh = value;
        alm_grp_thresh.value_namespace = name_space;
        alm_grp_thresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alm-severity")
    {
        alm_severity = value;
        alm_severity.value_namespace = name_space;
        alm_severity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alm-type")
    {
        alm_type = value;
        alm_type.value_namespace = name_space;
        alm_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clone-ifh")
    {
        clone_ifh = value;
        clone_ifh.value_namespace = name_space;
        clone_ifh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "criterion")
    {
        criterion = value;
        criterion.value_namespace = name_space;
        criterion.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notif-actns")
    {
        notif_actns = value;
        notif_actns.value_namespace = name_space;
        notif_actns.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "oper-id")
    {
        oper_id = value;
        oper_id.value_namespace = name_space;
        oper_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trig-level-1")
    {
        trig_level_1 = value;
        trig_level_1.value_namespace = name_space;
        trig_level_1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trig-level-2")
    {
        trig_level_2 = value;
        trig_level_2.value_namespace = name_space;
        trig_level_2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trig-num-intvls")
    {
        trig_num_intvls = value;
        trig_num_intvls.value_namespace = name_space;
        trig_num_intvls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trig-relop")
    {
        trig_relop = value;
        trig_relop.value_namespace = name_space;
        trig_relop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trig-type")
    {
        trig_type = value;
        trig_type.value_namespace = name_space;
        trig_type.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alm-grp-thresh")
    {
        alm_grp_thresh.yfilter = yfilter;
    }
    if(value_path == "alm-severity")
    {
        alm_severity.yfilter = yfilter;
    }
    if(value_path == "alm-type")
    {
        alm_type.yfilter = yfilter;
    }
    if(value_path == "clone-ifh")
    {
        clone_ifh.yfilter = yfilter;
    }
    if(value_path == "criterion")
    {
        criterion.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "notif-actns")
    {
        notif_actns.yfilter = yfilter;
    }
    if(value_path == "oper-id")
    {
        oper_id.yfilter = yfilter;
    }
    if(value_path == "trig-level-1")
    {
        trig_level_1.yfilter = yfilter;
    }
    if(value_path == "trig-level-2")
    {
        trig_level_2.yfilter = yfilter;
    }
    if(value_path == "trig-num-intvls")
    {
        trig_num_intvls.yfilter = yfilter;
    }
    if(value_path == "trig-relop")
    {
        trig_relop.yfilter = yfilter;
    }
    if(value_path == "trig-type")
    {
        trig_type.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AfmReact::ActionAfmonReactInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alm-grp-thresh" || name == "alm-severity" || name == "alm-type" || name == "clone-ifh" || name == "criterion" || name == "description" || name == "notif-actns" || name == "oper-id" || name == "trig-level-1" || name == "trig-level-2" || name == "trig-num-intvls" || name == "trig-relop" || name == "trig-type")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::AuthenAaa()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    authen_password{YType::str, "authen-password"}
{

    yang_name = "authen-aaa"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::~AuthenAaa()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::has_data() const
{
    return aaa_list_name.is_set
	|| authen_password.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_list_name.yfilter)
	|| ydk::is_set(authen_password.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authen-aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.yfilter)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (authen_password.is_set || is_set(authen_password.yfilter)) leaf_name_data.push_back(authen_password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
        aaa_list_name.value_namespace = name_space;
        aaa_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-password")
    {
        authen_password = value;
        authen_password.value_namespace = name_space;
        authen_password.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name.yfilter = yfilter;
    }
    if(value_path == "authen-password")
    {
        authen_password.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthenAaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-list-name" || name == "authen-password")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::AuthorizeId()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    format_name{YType::str, "format-name"},
    id{YType::uint8, "id"},
    password{YType::str, "password"}
{

    yang_name = "authorize-id"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::~AuthorizeId()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::has_data() const
{
    return aaa_list_name.is_set
	|| format_name.is_set
	|| id.is_set
	|| password.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_list_name.yfilter)
	|| ydk::is_set(format_name.yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.yfilter)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (format_name.is_set || is_set(format_name.yfilter)) leaf_name_data.push_back(format_name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
        aaa_list_name.value_namespace = name_space;
        aaa_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format-name")
    {
        format_name = value;
        format_name.value_namespace = name_space;
        format_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name.yfilter = yfilter;
    }
    if(value_path == "format-name")
    {
        format_name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::AuthorizeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-list-name" || name == "format-name" || name == "id" || name == "password")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem()
    :
    bwrem(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_>())
{
    bwrem->parent = this;

    yang_name = "bwrem"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::~Bwrem()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::has_data() const
{
    return (bwrem !=  nullptr && bwrem->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::has_operation() const
{
    return is_set(yfilter)
	|| (bwrem !=  nullptr && bwrem->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bwrem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bwrem")
    {
        if(bwrem == nullptr)
        {
            bwrem = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_>();
        }
        return bwrem;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bwrem != nullptr)
    {
        children["bwrem"] = bwrem;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bwrem")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::Bwrem_()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "bwrem"; yang_parent_name = "bwrem"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::~Bwrem_()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bwrem";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Bwrem::Bwrem_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Cac()
    :
    cac_type{YType::uint8, "cac-type"},
    idle_timeout{YType::uint16, "idle-timeout"}
    	,
    flow_rate(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate>())
	,rate(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate>())
{
    flow_rate->parent = this;
    rate->parent = this;

    yang_name = "cac"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::~Cac()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::has_data() const
{
    return cac_type.is_set
	|| idle_timeout.is_set
	|| (flow_rate !=  nullptr && flow_rate->has_data())
	|| (rate !=  nullptr && rate->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cac_type.yfilter)
	|| ydk::is_set(idle_timeout.yfilter)
	|| (flow_rate !=  nullptr && flow_rate->has_operation())
	|| (rate !=  nullptr && rate->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cac_type.is_set || is_set(cac_type.yfilter)) leaf_name_data.push_back(cac_type.get_name_leafdata());
    if (idle_timeout.is_set || is_set(idle_timeout.yfilter)) leaf_name_data.push_back(idle_timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-rate")
    {
        if(flow_rate == nullptr)
        {
            flow_rate = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate>();
        }
        return flow_rate;
    }

    if(child_yang_name == "rate")
    {
        if(rate == nullptr)
        {
            rate = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate>();
        }
        return rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flow_rate != nullptr)
    {
        children["flow-rate"] = flow_rate;
    }

    if(rate != nullptr)
    {
        children["rate"] = rate;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cac-type")
    {
        cac_type = value;
        cac_type.value_namespace = name_space;
        cac_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-timeout")
    {
        idle_timeout = value;
        idle_timeout.value_namespace = name_space;
        idle_timeout.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cac-type")
    {
        cac_type.yfilter = yfilter;
    }
    if(value_path == "idle-timeout")
    {
        idle_timeout.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-rate" || name == "rate" || name == "cac-type" || name == "idle-timeout")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::FlowRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "flow-rate"; yang_parent_name = "cac"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::~FlowRate()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::FlowRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::Rate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "rate"; yang_parent_name = "cac"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::~Rate()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Cac::Rate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::ChildPolicy()
    :
    enc{YType::enumeration, "enc"}
    	,
    hd_info(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo>())
	,info(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info>())
{
    hd_info->parent = this;
    info->parent = this;

    yang_name = "child-policy"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::~ChildPolicy()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::has_data() const
{
    return enc.is_set
	|| (hd_info !=  nullptr && hd_info->has_data())
	|| (info !=  nullptr && info->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enc.yfilter)
	|| (hd_info !=  nullptr && hd_info->has_operation())
	|| (info !=  nullptr && info->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "child-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enc.is_set || is_set(enc.yfilter)) leaf_name_data.push_back(enc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hd-info")
    {
        if(hd_info == nullptr)
        {
            hd_info = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo>();
        }
        return hd_info;
    }

    if(child_yang_name == "info")
    {
        if(info == nullptr)
        {
            info = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info>();
        }
        return info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hd_info != nullptr)
    {
        children["hd-info"] = hd_info;
    }

    if(info != nullptr)
    {
        children["info"] = info;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enc")
    {
        enc = value;
        enc.value_namespace = name_space;
        enc.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enc")
    {
        enc.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hd-info" || name == "info" || name == "enc")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::HdInfo()
    :
    hd{YType::uint64, "hd"}
    	,
    data_hd(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd>())
{
    data_hd->parent = this;

    yang_name = "hd-info"; yang_parent_name = "child-policy"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::~HdInfo()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::has_data() const
{
    return hd.is_set
	|| (data_hd !=  nullptr && data_hd->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hd.yfilter)
	|| (data_hd !=  nullptr && data_hd->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hd-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hd.is_set || is_set(hd.yfilter)) leaf_name_data.push_back(hd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "data-hd")
    {
        if(data_hd == nullptr)
        {
            data_hd = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd>();
        }
        return data_hd;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(data_hd != nullptr)
    {
        children["data-hd"] = data_hd;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hd")
    {
        hd = value;
        hd.value_namespace = name_space;
        hd.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hd")
    {
        hd.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "data-hd" || name == "hd")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::DataHd()
{

    yang_name = "data-hd"; yang_parent_name = "hd-info"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::~DataHd()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::has_data() const
{
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::has_operation() const
{
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "data-hd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::HdInfo::DataHd::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::Info()
    :
    name{YType::str, "name"},
    type{YType::enumeration, "type"}
{

    yang_name = "info"; yang_parent_name = "child-policy"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::~Info()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::has_data() const
{
    return name.is_set
	|| type.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::ChildPolicy::Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "type")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::CollectId()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    id{YType::enumeration, "id"}
{

    yang_name = "collect-id"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::~CollectId()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::has_data() const
{
    return aaa_list_name.is_set
	|| id.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_list_name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collect-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.yfilter)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
        aaa_list_name.value_namespace = name_space;
        aaa_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::CollectId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-list-name" || name == "id")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::Copy()
    :
    app_id{YType::uint32, "app-id"},
    local_id{YType::uint32, "local-id"},
    num_byte{YType::uint32, "num-byte"},
    sn_index{YType::uint32, "sn-index"},
    sn_name{YType::str, "sn-name"},
    sn_type{YType::enumeration, "sn-type"},
    vsnode_type{YType::enumeration, "vsnode-type"}
{

    yang_name = "copy"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::~Copy()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::has_data() const
{
    return app_id.is_set
	|| local_id.is_set
	|| num_byte.is_set
	|| sn_index.is_set
	|| sn_name.is_set
	|| sn_type.is_set
	|| vsnode_type.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(app_id.yfilter)
	|| ydk::is_set(local_id.yfilter)
	|| ydk::is_set(num_byte.yfilter)
	|| ydk::is_set(sn_index.yfilter)
	|| ydk::is_set(sn_name.yfilter)
	|| ydk::is_set(sn_type.yfilter)
	|| ydk::is_set(vsnode_type.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "copy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_id.is_set || is_set(app_id.yfilter)) leaf_name_data.push_back(app_id.get_name_leafdata());
    if (local_id.is_set || is_set(local_id.yfilter)) leaf_name_data.push_back(local_id.get_name_leafdata());
    if (num_byte.is_set || is_set(num_byte.yfilter)) leaf_name_data.push_back(num_byte.get_name_leafdata());
    if (sn_index.is_set || is_set(sn_index.yfilter)) leaf_name_data.push_back(sn_index.get_name_leafdata());
    if (sn_name.is_set || is_set(sn_name.yfilter)) leaf_name_data.push_back(sn_name.get_name_leafdata());
    if (sn_type.is_set || is_set(sn_type.yfilter)) leaf_name_data.push_back(sn_type.get_name_leafdata());
    if (vsnode_type.is_set || is_set(vsnode_type.yfilter)) leaf_name_data.push_back(vsnode_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app-id")
    {
        app_id = value;
        app_id.value_namespace = name_space;
        app_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-id")
    {
        local_id = value;
        local_id.value_namespace = name_space;
        local_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-byte")
    {
        num_byte = value;
        num_byte.value_namespace = name_space;
        num_byte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sn-index")
    {
        sn_index = value;
        sn_index.value_namespace = name_space;
        sn_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sn-name")
    {
        sn_name = value;
        sn_name.value_namespace = name_space;
        sn_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sn-type")
    {
        sn_type = value;
        sn_type.value_namespace = name_space;
        sn_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vsnode-type")
    {
        vsnode_type = value;
        vsnode_type.value_namespace = name_space;
        vsnode_type.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app-id")
    {
        app_id.yfilter = yfilter;
    }
    if(value_path == "local-id")
    {
        local_id.yfilter = yfilter;
    }
    if(value_path == "num-byte")
    {
        num_byte.yfilter = yfilter;
    }
    if(value_path == "sn-index")
    {
        sn_index.yfilter = yfilter;
    }
    if(value_path == "sn-name")
    {
        sn_name.yfilter = yfilter;
    }
    if(value_path == "sn-type")
    {
        sn_type.yfilter = yfilter;
    }
    if(value_path == "vsnode-type")
    {
        vsnode_type.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Copy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app-id" || name == "local-id" || name == "num-byte" || name == "sn-index" || name == "sn-name" || name == "sn-type" || name == "vsnode-type")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::DeactTemplate()
    :
    aaa_list_name{YType::str, "aaa-list-name"},
    flags{YType::uint32, "flags"},
    template_name{YType::str, "template-name"}
{

    yang_name = "deact-template"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::~DeactTemplate()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::has_data() const
{
    return aaa_list_name.is_set
	|| flags.is_set
	|| template_name.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aaa_list_name.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(template_name.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deact-template";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list_name.is_set || is_set(aaa_list_name.yfilter)) leaf_name_data.push_back(aaa_list_name.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name = value;
        aaa_list_name.value_namespace = name_space;
        aaa_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aaa-list-name")
    {
        aaa_list_name.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DeactTemplate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa-list-name" || name == "flags" || name == "template-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::DecodeId()
    :
    format_name{YType::str, "format-name"},
    id{YType::enumeration, "id"}
{

    yang_name = "decode-id"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::~DecodeId()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::has_data() const
{
    return format_name.is_set
	|| id.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(format_name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "decode-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format_name.is_set || is_set(format_name.yfilter)) leaf_name_data.push_back(format_name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "format-name")
    {
        format_name = value;
        format_name.value_namespace = name_space;
        format_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "format-name")
    {
        format_name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::DecodeId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "format-name" || name == "id")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::Encap()
    :
    seq{YType::uint8, "seq"}
{

    yang_name = "encap"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::~Encap()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::has_data() const
{
    return seq.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seq.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seq.is_set || is_set(seq.yfilter)) leaf_name_data.push_back(seq.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seq")
    {
        seq = value;
        seq.value_namespace = name_space;
        seq.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seq")
    {
        seq.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Encap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seq")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::FlowParm()
    :
    flow_timeout{YType::uint32, "flow-timeout"},
    intvl_hist{YType::uint32, "intvl-hist"},
    max_mon_flows{YType::uint32, "max-mon-flows"},
    mon_interval{YType::uint32, "mon-interval"}
{

    yang_name = "flow-parm"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::~FlowParm()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::has_data() const
{
    return flow_timeout.is_set
	|| intvl_hist.is_set
	|| max_mon_flows.is_set
	|| mon_interval.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_timeout.yfilter)
	|| ydk::is_set(intvl_hist.yfilter)
	|| ydk::is_set(max_mon_flows.yfilter)
	|| ydk::is_set(mon_interval.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-parm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_timeout.is_set || is_set(flow_timeout.yfilter)) leaf_name_data.push_back(flow_timeout.get_name_leafdata());
    if (intvl_hist.is_set || is_set(intvl_hist.yfilter)) leaf_name_data.push_back(intvl_hist.get_name_leafdata());
    if (max_mon_flows.is_set || is_set(max_mon_flows.yfilter)) leaf_name_data.push_back(max_mon_flows.get_name_leafdata());
    if (mon_interval.is_set || is_set(mon_interval.yfilter)) leaf_name_data.push_back(mon_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-timeout")
    {
        flow_timeout = value;
        flow_timeout.value_namespace = name_space;
        flow_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "intvl-hist")
    {
        intvl_hist = value;
        intvl_hist.value_namespace = name_space;
        intvl_hist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-mon-flows")
    {
        max_mon_flows = value;
        max_mon_flows.value_namespace = name_space;
        max_mon_flows.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mon-interval")
    {
        mon_interval = value;
        mon_interval.value_namespace = name_space;
        mon_interval.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-timeout")
    {
        flow_timeout.yfilter = yfilter;
    }
    if(value_path == "intvl-hist")
    {
        intvl_hist.yfilter = yfilter;
    }
    if(value_path == "max-mon-flows")
    {
        max_mon_flows.yfilter = yfilter;
    }
    if(value_path == "mon-interval")
    {
        mon_interval.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::FlowParm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-timeout" || name == "intvl-hist" || name == "max-mon-flows" || name == "mon-interval")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::Fmm()
    :
    fmm_name{YType::str, "fmm-name"}
{

    yang_name = "fmm"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::~Fmm()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::has_data() const
{
    return fmm_name.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fmm_name.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fmm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fmm_name.is_set || is_set(fmm_name.yfilter)) leaf_name_data.push_back(fmm_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fmm-name")
    {
        fmm_name = value;
        fmm_name.value_namespace = name_space;
        fmm_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fmm-name")
    {
        fmm_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Fmm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fmm-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::Httpr()
    :
    redirect_url{YType::str, "redirect-url"}
{

    yang_name = "httpr"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::~Httpr()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::has_data() const
{
    return redirect_url.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(redirect_url.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "httpr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redirect_url.is_set || is_set(redirect_url.yfilter)) leaf_name_data.push_back(redirect_url.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "redirect-url")
    {
        redirect_url = value;
        redirect_url.value_namespace = name_space;
        redirect_url.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "redirect-url")
    {
        redirect_url.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Httpr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "redirect-url")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::Ipcbr()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    ip_pkt_rate{YType::uint32, "ip-pkt-rate"},
    media_pkt_size{YType::uint32, "media-pkt-size"},
    media_pkts_per_ip{YType::uint32, "media-pkts-per-ip"}
    	,
    ip_bit_rate(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate>())
	,media_bit_rate(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate>())
{
    ip_bit_rate->parent = this;
    media_bit_rate->parent = this;

    yang_name = "ipcbr"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::~Ipcbr()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::has_data() const
{
    return action_metric_type.is_set
	|| ip_pkt_rate.is_set
	|| media_pkt_size.is_set
	|| media_pkts_per_ip.is_set
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_data())
	|| (media_bit_rate !=  nullptr && media_bit_rate->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action_metric_type.yfilter)
	|| ydk::is_set(ip_pkt_rate.yfilter)
	|| ydk::is_set(media_pkt_size.yfilter)
	|| ydk::is_set(media_pkts_per_ip.yfilter)
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_operation())
	|| (media_bit_rate !=  nullptr && media_bit_rate->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipcbr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.yfilter)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (ip_pkt_rate.is_set || is_set(ip_pkt_rate.yfilter)) leaf_name_data.push_back(ip_pkt_rate.get_name_leafdata());
    if (media_pkt_size.is_set || is_set(media_pkt_size.yfilter)) leaf_name_data.push_back(media_pkt_size.get_name_leafdata());
    if (media_pkts_per_ip.is_set || is_set(media_pkts_per_ip.yfilter)) leaf_name_data.push_back(media_pkts_per_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-bit-rate")
    {
        if(ip_bit_rate == nullptr)
        {
            ip_bit_rate = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate>();
        }
        return ip_bit_rate;
    }

    if(child_yang_name == "media-bit-rate")
    {
        if(media_bit_rate == nullptr)
        {
            media_bit_rate = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate>();
        }
        return media_bit_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_bit_rate != nullptr)
    {
        children["ip-bit-rate"] = ip_bit_rate;
    }

    if(media_bit_rate != nullptr)
    {
        children["media-bit-rate"] = media_bit_rate;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
        action_metric_type.value_namespace = name_space;
        action_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate = value;
        ip_pkt_rate.value_namespace = name_space;
        ip_pkt_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-pkt-size")
    {
        media_pkt_size = value;
        media_pkt_size.value_namespace = name_space;
        media_pkt_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "media-pkts-per-ip")
    {
        media_pkts_per_ip = value;
        media_pkts_per_ip.value_namespace = name_space;
        media_pkts_per_ip.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type.yfilter = yfilter;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate.yfilter = yfilter;
    }
    if(value_path == "media-pkt-size")
    {
        media_pkt_size.yfilter = yfilter;
    }
    if(value_path == "media-pkts-per-ip")
    {
        media_pkts_per_ip.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-bit-rate" || name == "media-bit-rate" || name == "action-metric-type" || name == "ip-pkt-rate" || name == "media-pkt-size" || name == "media-pkts-per-ip")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::IpBitRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "ip-bit-rate"; yang_parent_name = "ipcbr"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::~IpBitRate()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-bit-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::IpBitRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::MediaBitRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "media-bit-rate"; yang_parent_name = "ipcbr"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::~MediaBitRate()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-bit-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipcbr::MediaBitRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::Ipv4Nh()
{

    yang_name = "ipv4-nh"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::~Ipv4Nh()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::has_data() const
{
    for (std::size_t index=0; index<action_ipv4_nh_info_array.size(); index++)
    {
        if(action_ipv4_nh_info_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::has_operation() const
{
    for (std::size_t index=0; index<action_ipv4_nh_info_array.size(); index++)
    {
        if(action_ipv4_nh_info_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-nh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-ipv4-nh-info-array")
    {
        for(auto const & c : action_ipv4_nh_info_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray>();
        c->parent = this;
        action_ipv4_nh_info_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action_ipv4_nh_info_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-ipv4-nh-info-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::ActionIpv4NhInfoArray()
    :
    nh_addr{YType::str, "nh-addr"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "action-ipv4-nh-info-array"; yang_parent_name = "ipv4-nh"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::~ActionIpv4NhInfoArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::has_data() const
{
    return nh_addr.is_set
	|| vrf_name.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nh_addr.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-ipv4-nh-info-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nh_addr.is_set || is_set(nh_addr.yfilter)) leaf_name_data.push_back(nh_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nh-addr")
    {
        nh_addr = value;
        nh_addr.value_namespace = name_space;
        nh_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nh-addr")
    {
        nh_addr.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv4Nh::ActionIpv4NhInfoArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-addr" || name == "vrf-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::Ipv6Nh()
{

    yang_name = "ipv6-nh"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::~Ipv6Nh()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::has_data() const
{
    for (std::size_t index=0; index<action_ipv6_nh_info_array.size(); index++)
    {
        if(action_ipv6_nh_info_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::has_operation() const
{
    for (std::size_t index=0; index<action_ipv6_nh_info_array.size(); index++)
    {
        if(action_ipv6_nh_info_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-nh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-ipv6-nh-info-array")
    {
        for(auto const & c : action_ipv6_nh_info_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray>();
        c->parent = this;
        action_ipv6_nh_info_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action_ipv6_nh_info_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-ipv6-nh-info-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::ActionIpv6NhInfoArray()
    :
    nh_addr{YType::str, "nh-addr"},
    vrf_name{YType::str, "vrf-name"}
{

    yang_name = "action-ipv6-nh-info-array"; yang_parent_name = "ipv6-nh"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::~ActionIpv6NhInfoArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::has_data() const
{
    return nh_addr.is_set
	|| vrf_name.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nh_addr.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-ipv6-nh-info-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nh_addr.is_set || is_set(nh_addr.yfilter)) leaf_name_data.push_back(nh_addr.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nh-addr")
    {
        nh_addr = value;
        nh_addr.value_namespace = name_space;
        nh_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nh-addr")
    {
        nh_addr.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Ipv6Nh::ActionIpv6NhInfoArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nh-addr" || name == "vrf-name")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::Mark()
{

    yang_name = "mark"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::~Mark()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::has_data() const
{
    for (std::size_t index=0; index<action_mark_info.size(); index++)
    {
        if(action_mark_info[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::has_operation() const
{
    for (std::size_t index=0; index<action_mark_info.size(); index++)
    {
        if(action_mark_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-mark-info")
    {
        for(auto const & c : action_mark_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo>();
        c->parent = this;
        action_mark_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action_mark_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-mark-info")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::ActionMarkInfo()
    :
    mark_flags{YType::uint32, "mark-flags"},
    type{YType::enumeration, "type"},
    value_{YType::uint16, "value"}
{

    yang_name = "action-mark-info"; yang_parent_name = "mark"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::~ActionMarkInfo()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::has_data() const
{
    return mark_flags.is_set
	|| type.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_flags.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-mark-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_flags.is_set || is_set(mark_flags.yfilter)) leaf_name_data.push_back(mark_flags.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-flags")
    {
        mark_flags = value;
        mark_flags.value_namespace = name_space;
        mark_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-flags")
    {
        mark_flags.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark::ActionMarkInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-flags" || name == "type" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::Mark2()
{

    yang_name = "mark2"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::~Mark2()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::has_data() const
{
    for (std::size_t index=0; index<action_mark2_info.size(); index++)
    {
        if(action_mark2_info[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::has_operation() const
{
    for (std::size_t index=0; index<action_mark2_info.size(); index++)
    {
        if(action_mark2_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mark2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-mark2-info")
    {
        for(auto const & c : action_mark2_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info>();
        c->parent = this;
        action_mark2_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action_mark2_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-mark2-info")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::ActionMark2Info()
    :
    mark_flags{YType::uint8, "mark-flags"},
    type{YType::uint8, "type"},
    value_{YType::uint32, "value"},
    value_overflow{YType::uint16, "value-overflow"}
{

    yang_name = "action-mark2-info"; yang_parent_name = "mark2"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::~ActionMark2Info()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::has_data() const
{
    return mark_flags.is_set
	|| type.is_set
	|| value_.is_set
	|| value_overflow.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mark_flags.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(value_overflow.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-mark2-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mark_flags.is_set || is_set(mark_flags.yfilter)) leaf_name_data.push_back(mark_flags.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (value_overflow.is_set || is_set(value_overflow.yfilter)) leaf_name_data.push_back(value_overflow.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mark-flags")
    {
        mark_flags = value;
        mark_flags.value_namespace = name_space;
        mark_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value-overflow")
    {
        value_overflow = value;
        value_overflow.value_namespace = name_space;
        value_overflow.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mark-flags")
    {
        mark_flags.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "value-overflow")
    {
        value_overflow.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mark2::ActionMark2Info::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mark-flags" || name == "type" || name == "value" || name == "value-overflow")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::Mdi()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    filtered_pkt_rate{YType::uint32, "filtered-pkt-rate"},
    ip_pkt_rate{YType::uint32, "ip-pkt-rate"},
    pids{YType::uint32, "pids"}
    	,
    ip_bit_rate(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate>())
{
    ip_bit_rate->parent = this;

    yang_name = "mdi"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::~Mdi()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::has_data() const
{
    for (auto const & leaf : pids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return action_metric_type.is_set
	|| filtered_pkt_rate.is_set
	|| ip_pkt_rate.is_set
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::has_operation() const
{
    for (auto const & leaf : pids.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_metric_type.yfilter)
	|| ydk::is_set(filtered_pkt_rate.yfilter)
	|| ydk::is_set(ip_pkt_rate.yfilter)
	|| ydk::is_set(pids.yfilter)
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.yfilter)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (filtered_pkt_rate.is_set || is_set(filtered_pkt_rate.yfilter)) leaf_name_data.push_back(filtered_pkt_rate.get_name_leafdata());
    if (ip_pkt_rate.is_set || is_set(ip_pkt_rate.yfilter)) leaf_name_data.push_back(ip_pkt_rate.get_name_leafdata());

    auto pids_name_datas = pids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pids_name_datas.begin(), pids_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-bit-rate")
    {
        if(ip_bit_rate == nullptr)
        {
            ip_bit_rate = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate>();
        }
        return ip_bit_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_bit_rate != nullptr)
    {
        children["ip-bit-rate"] = ip_bit_rate;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
        action_metric_type.value_namespace = name_space;
        action_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filtered-pkt-rate")
    {
        filtered_pkt_rate = value;
        filtered_pkt_rate.value_namespace = name_space;
        filtered_pkt_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate = value;
        ip_pkt_rate.value_namespace = name_space;
        ip_pkt_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pids")
    {
        pids.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type.yfilter = yfilter;
    }
    if(value_path == "filtered-pkt-rate")
    {
        filtered_pkt_rate.yfilter = yfilter;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate.yfilter = yfilter;
    }
    if(value_path == "pids")
    {
        pids.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-bit-rate" || name == "action-metric-type" || name == "filtered-pkt-rate" || name == "ip-pkt-rate" || name == "pids")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::IpBitRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "ip-bit-rate"; yang_parent_name = "mdi"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::~IpBitRate()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-bit-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Mdi::IpBitRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::MdiRtp()
    :
    action_metric_type{YType::enumeration, "action-metric-type"},
    filtered_pkt_rate{YType::uint32, "filtered-pkt-rate"},
    ip_pkt_rate{YType::uint32, "ip-pkt-rate"},
    pids{YType::uint32, "pids"}
    	,
    ip_bit_rate(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate>())
{
    ip_bit_rate->parent = this;

    yang_name = "mdi-rtp"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::~MdiRtp()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::has_data() const
{
    for (auto const & leaf : pids.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return action_metric_type.is_set
	|| filtered_pkt_rate.is_set
	|| ip_pkt_rate.is_set
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::has_operation() const
{
    for (auto const & leaf : pids.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action_metric_type.yfilter)
	|| ydk::is_set(filtered_pkt_rate.yfilter)
	|| ydk::is_set(ip_pkt_rate.yfilter)
	|| ydk::is_set(pids.yfilter)
	|| (ip_bit_rate !=  nullptr && ip_bit_rate->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdi-rtp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_metric_type.is_set || is_set(action_metric_type.yfilter)) leaf_name_data.push_back(action_metric_type.get_name_leafdata());
    if (filtered_pkt_rate.is_set || is_set(filtered_pkt_rate.yfilter)) leaf_name_data.push_back(filtered_pkt_rate.get_name_leafdata());
    if (ip_pkt_rate.is_set || is_set(ip_pkt_rate.yfilter)) leaf_name_data.push_back(ip_pkt_rate.get_name_leafdata());

    auto pids_name_datas = pids.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), pids_name_datas.begin(), pids_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-bit-rate")
    {
        if(ip_bit_rate == nullptr)
        {
            ip_bit_rate = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate>();
        }
        return ip_bit_rate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_bit_rate != nullptr)
    {
        children["ip-bit-rate"] = ip_bit_rate;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type = value;
        action_metric_type.value_namespace = name_space;
        action_metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filtered-pkt-rate")
    {
        filtered_pkt_rate = value;
        filtered_pkt_rate.value_namespace = name_space;
        filtered_pkt_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate = value;
        ip_pkt_rate.value_namespace = name_space;
        ip_pkt_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pids")
    {
        pids.append(value);
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action-metric-type")
    {
        action_metric_type.yfilter = yfilter;
    }
    if(value_path == "filtered-pkt-rate")
    {
        filtered_pkt_rate.yfilter = yfilter;
    }
    if(value_path == "ip-pkt-rate")
    {
        ip_pkt_rate.yfilter = yfilter;
    }
    if(value_path == "pids")
    {
        pids.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-bit-rate" || name == "action-metric-type" || name == "filtered-pkt-rate" || name == "ip-pkt-rate" || name == "pids")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::IpBitRate()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "ip-bit-rate"; yang_parent_name = "mdi-rtp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::~IpBitRate()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-bit-rate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MdiRtp::IpBitRate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::MinBw()
    :
    bw(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw>())
{
    bw->parent = this;

    yang_name = "min-bw"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::~MinBw()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::has_data() const
{
    return (bw !=  nullptr && bw->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::has_operation() const
{
    return is_set(yfilter)
	|| (bw !=  nullptr && bw->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-bw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bw")
    {
        if(bw == nullptr)
        {
            bw = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw>();
        }
        return bw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bw != nullptr)
    {
        children["bw"] = bw;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bw")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::Bw()
    :
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "bw"; yang_parent_name = "min-bw"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::~Bw()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unit")
    {
        unit = value;
        unit.value_namespace = name_space;
        unit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::MinBw::Bw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unit" || name == "value")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf::OutIntf()
    :
    out_ifname{YType::str, "out-ifname"}
{

    yang_name = "out-intf"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf::~OutIntf()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf::has_data() const
{
    return out_ifname.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(out_ifname.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out-intf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out_ifname.is_set || is_set(out_ifname.yfilter)) leaf_name_data.push_back(out_ifname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "out-ifname")
    {
        out_ifname = value;
        out_ifname.value_namespace = name_space;
        out_ifname.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "out-ifname")
    {
        out_ifname.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::OutIntf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "out-ifname")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::Pbf()
{

    yang_name = "pbf"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::~Pbf()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::has_data() const
{
    for (std::size_t index=0; index<action_pbf_info_array.size(); index++)
    {
        if(action_pbf_info_array[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::has_operation() const
{
    for (std::size_t index=0; index<action_pbf_info_array.size(); index++)
    {
        if(action_pbf_info_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-pbf-info-array")
    {
        for(auto const & c : action_pbf_info_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray>();
        c->parent = this;
        action_pbf_info_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : action_pbf_info_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action-pbf-info-array")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::ActionPbfInfoArray()
    :
    addr{YType::str, "addr"},
    rt{YType::str, "rt"},
    rt_type{YType::uint8, "rt-type"},
    vrf{YType::str, "vrf"}
{

    yang_name = "action-pbf-info-array"; yang_parent_name = "pbf"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::~ActionPbfInfoArray()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::has_data() const
{
    return addr.is_set
	|| rt.is_set
	|| rt_type.is_set
	|| vrf.is_set;
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr.yfilter)
	|| ydk::is_set(rt.yfilter)
	|| ydk::is_set(rt_type.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-pbf-info-array";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr.is_set || is_set(addr.yfilter)) leaf_name_data.push_back(addr.get_name_leafdata());
    if (rt.is_set || is_set(rt.yfilter)) leaf_name_data.push_back(rt.get_name_leafdata());
    if (rt_type.is_set || is_set(rt_type.yfilter)) leaf_name_data.push_back(rt_type.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr")
    {
        addr = value;
        addr.value_namespace = name_space;
        addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt")
    {
        rt = value;
        rt.value_namespace = name_space;
        rt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-type")
    {
        rt_type = value;
        rt_type.value_namespace = name_space;
        rt_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr")
    {
        addr.yfilter = yfilter;
    }
    if(value_path == "rt")
    {
        rt.yfilter = yfilter;
    }
    if(value_path == "rt-type")
    {
        rt_type.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pbf::ActionPbfInfoArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr" || name == "rt" || name == "rt-type" || name == "vrf")
        return true;
    return false;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::Pfc()
    :
    buffer_size_flag{YType::uint32, "buffer-size-flag"},
    pfc_pause_set{YType::uint32, "pfc-pause-set"}
    	,
    buffer_size(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize>())
	,pause_threshold(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold>())
	,resume_threshold(std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold>())
{
    buffer_size->parent = this;
    pause_threshold->parent = this;
    resume_threshold->parent = this;

    yang_name = "pfc"; yang_parent_name = "actp"; is_top_level_class = false; has_list_ancestor = true;
}

PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::~Pfc()
{
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::has_data() const
{
    return buffer_size_flag.is_set
	|| pfc_pause_set.is_set
	|| (buffer_size !=  nullptr && buffer_size->has_data())
	|| (pause_threshold !=  nullptr && pause_threshold->has_data())
	|| (resume_threshold !=  nullptr && resume_threshold->has_data());
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(buffer_size_flag.yfilter)
	|| ydk::is_set(pfc_pause_set.yfilter)
	|| (buffer_size !=  nullptr && buffer_size->has_operation())
	|| (pause_threshold !=  nullptr && pause_threshold->has_operation())
	|| (resume_threshold !=  nullptr && resume_threshold->has_operation());
}

std::string PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfc";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (buffer_size_flag.is_set || is_set(buffer_size_flag.yfilter)) leaf_name_data.push_back(buffer_size_flag.get_name_leafdata());
    if (pfc_pause_set.is_set || is_set(pfc_pause_set.yfilter)) leaf_name_data.push_back(pfc_pause_set.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "buffer-size")
    {
        if(buffer_size == nullptr)
        {
            buffer_size = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::BufferSize>();
        }
        return buffer_size;
    }

    if(child_yang_name == "pause-threshold")
    {
        if(pause_threshold == nullptr)
        {
            pause_threshold = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::PauseThreshold>();
        }
        return pause_threshold;
    }

    if(child_yang_name == "resume-threshold")
    {
        if(resume_threshold == nullptr)
        {
            resume_threshold = std::make_shared<PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::ResumeThreshold>();
        }
        return resume_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(buffer_size != nullptr)
    {
        children["buffer-size"] = buffer_size;
    }

    if(pause_threshold != nullptr)
    {
        children["pause-threshold"] = pause_threshold;
    }

    if(resume_threshold != nullptr)
    {
        children["resume-threshold"] = resume_threshold;
    }

    return children;
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "buffer-size-flag")
    {
        buffer_size_flag = value;
        buffer_size_flag.value_namespace = name_space;
        buffer_size_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pfc-pause-set")
    {
        pfc_pause_set = value;
        pfc_pause_set.value_namespace = name_space;
        pfc_pause_set.value_namespace_prefix = name_space_prefix;
    }
}

void PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "buffer-size-flag")
    {
        buffer_size_flag.yfilter = yfilter;
    }
    if(value_path == "pfc-pause-set")
    {
        pfc_pause_set.yfilter = yfilter;
    }
}

bool PolicyManager::Global::PolicyMapAppliedTypes::PolicyMapAppliedType::IfNames::IfName::Output::Detail::Pmaps::PolicyMapBg::EventInfop::PolicyEventInfoBg::ClassInfop::PolicyClassInfoBg::ActInfop::PolicyActionInfoSt::Actp::Pfc::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "buffer-size" || name == "pause-threshold" || name == "resume-threshold" || name == "buffer-size-flag" || name == "pfc-pause-set")
        return true;
    return false;
}


}
}

