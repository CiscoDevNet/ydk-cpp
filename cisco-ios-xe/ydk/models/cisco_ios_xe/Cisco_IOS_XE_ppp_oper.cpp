
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_ppp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_ppp_oper {

PppData::PppData()
    :
    ppp_interface(this, {"phy_ifname"})
    , ppp_statistics(nullptr) // presence node
    , pppoe(nullptr) // presence node
{

    yang_name = "ppp-data"; yang_parent_name = "Cisco-IOS-XE-ppp-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

PppData::~PppData()
{
}

bool PppData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ppp_interface.len(); index++)
    {
        if(ppp_interface[index]->has_data())
            return true;
    }
    return (ppp_statistics !=  nullptr && ppp_statistics->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool PppData::has_operation() const
{
    for (std::size_t index=0; index<ppp_interface.len(); index++)
    {
        if(ppp_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ppp_statistics !=  nullptr && ppp_statistics->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string PppData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ppp-oper:ppp-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> PppData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ppp-interface")
    {
        auto c = std::make_shared<PppData::PppInterface>();
        c->parent = this;
        ppp_interface.append(c);
        return c;
    }

    if(child_yang_name == "ppp-statistics")
    {
        if(ppp_statistics == nullptr)
        {
            ppp_statistics = std::make_shared<PppData::PppStatistics>();
        }
        return ppp_statistics;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<PppData::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ppp_interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(ppp_statistics != nullptr)
    {
        children["ppp-statistics"] = ppp_statistics;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void PppData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void PppData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> PppData::clone_ptr() const
{
    return std::make_shared<PppData>();
}

std::string PppData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string PppData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function PppData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> PppData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool PppData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ppp-interface" || name == "ppp-statistics" || name == "pppoe")
        return true;
    return false;
}

PppData::PppInterface::PppInterface()
    :
    phy_ifname{YType::str, "phy-ifname"}
        ,
    ppp_va(this, {})
{

    yang_name = "ppp-interface"; yang_parent_name = "ppp-data"; is_top_level_class = false; has_list_ancestor = false; 
}

PppData::PppInterface::~PppInterface()
{
}

bool PppData::PppInterface::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ppp_va.len(); index++)
    {
        if(ppp_va[index]->has_data())
            return true;
    }
    return phy_ifname.is_set;
}

bool PppData::PppInterface::has_operation() const
{
    for (std::size_t index=0; index<ppp_va.len(); index++)
    {
        if(ppp_va[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(phy_ifname.yfilter);
}

std::string PppData::PppInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ppp-oper:ppp-data/" << get_segment_path();
    return path_buffer.str();
}

std::string PppData::PppInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp-interface";
    ADD_KEY_TOKEN(phy_ifname, "phy-ifname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppData::PppInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (phy_ifname.is_set || is_set(phy_ifname.yfilter)) leaf_name_data.push_back(phy_ifname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppData::PppInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ppp-va")
    {
        auto c = std::make_shared<PppData::PppInterface::PppVa>();
        c->parent = this;
        ppp_va.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppData::PppInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ppp_va.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PppData::PppInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "phy-ifname")
    {
        phy_ifname = value;
        phy_ifname.value_namespace = name_space;
        phy_ifname.value_namespace_prefix = name_space_prefix;
    }
}

void PppData::PppInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "phy-ifname")
    {
        phy_ifname.yfilter = yfilter;
    }
}

bool PppData::PppInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ppp-va" || name == "phy-ifname")
        return true;
    return false;
}

PppData::PppInterface::PppVa::PppVa()
    :
    va_ifname{YType::str, "va-ifname"},
    vrf_name{YType::str, "vrf-name"},
    interface_ip{YType::str, "interface-ip"},
    gateway_ip{YType::str, "gateway-ip"},
    primary_dns_ip{YType::str, "primary-dns-ip"},
    secondary_dns_ip{YType::str, "secondary-dns-ip"},
    mtu{YType::uint32, "mtu"},
    auth_type{YType::enumeration, "auth-type"}
{

    yang_name = "ppp-va"; yang_parent_name = "ppp-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

PppData::PppInterface::PppVa::~PppVa()
{
}

bool PppData::PppInterface::PppVa::has_data() const
{
    if (is_presence_container) return true;
    return va_ifname.is_set
	|| vrf_name.is_set
	|| interface_ip.is_set
	|| gateway_ip.is_set
	|| primary_dns_ip.is_set
	|| secondary_dns_ip.is_set
	|| mtu.is_set
	|| auth_type.is_set;
}

bool PppData::PppInterface::PppVa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(va_ifname.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(interface_ip.yfilter)
	|| ydk::is_set(gateway_ip.yfilter)
	|| ydk::is_set(primary_dns_ip.yfilter)
	|| ydk::is_set(secondary_dns_ip.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(auth_type.yfilter);
}

std::string PppData::PppInterface::PppVa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp-va";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppData::PppInterface::PppVa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (va_ifname.is_set || is_set(va_ifname.yfilter)) leaf_name_data.push_back(va_ifname.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (interface_ip.is_set || is_set(interface_ip.yfilter)) leaf_name_data.push_back(interface_ip.get_name_leafdata());
    if (gateway_ip.is_set || is_set(gateway_ip.yfilter)) leaf_name_data.push_back(gateway_ip.get_name_leafdata());
    if (primary_dns_ip.is_set || is_set(primary_dns_ip.yfilter)) leaf_name_data.push_back(primary_dns_ip.get_name_leafdata());
    if (secondary_dns_ip.is_set || is_set(secondary_dns_ip.yfilter)) leaf_name_data.push_back(secondary_dns_ip.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (auth_type.is_set || is_set(auth_type.yfilter)) leaf_name_data.push_back(auth_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppData::PppInterface::PppVa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppData::PppInterface::PppVa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PppData::PppInterface::PppVa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "va-ifname")
    {
        va_ifname = value;
        va_ifname.value_namespace = name_space;
        va_ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-ip")
    {
        interface_ip = value;
        interface_ip.value_namespace = name_space;
        interface_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "gateway-ip")
    {
        gateway_ip = value;
        gateway_ip.value_namespace = name_space;
        gateway_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-dns-ip")
    {
        primary_dns_ip = value;
        primary_dns_ip.value_namespace = name_space;
        primary_dns_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-dns-ip")
    {
        secondary_dns_ip = value;
        secondary_dns_ip.value_namespace = name_space;
        secondary_dns_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-type")
    {
        auth_type = value;
        auth_type.value_namespace = name_space;
        auth_type.value_namespace_prefix = name_space_prefix;
    }
}

void PppData::PppInterface::PppVa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "va-ifname")
    {
        va_ifname.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "interface-ip")
    {
        interface_ip.yfilter = yfilter;
    }
    if(value_path == "gateway-ip")
    {
        gateway_ip.yfilter = yfilter;
    }
    if(value_path == "primary-dns-ip")
    {
        primary_dns_ip.yfilter = yfilter;
    }
    if(value_path == "secondary-dns-ip")
    {
        secondary_dns_ip.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "auth-type")
    {
        auth_type.yfilter = yfilter;
    }
}

bool PppData::PppInterface::PppVa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "va-ifname" || name == "vrf-name" || name == "interface-ip" || name == "gateway-ip" || name == "primary-dns-ip" || name == "secondary-dns-ip" || name == "mtu" || name == "auth-type")
        return true;
    return false;
}

PppData::PppStatistics::PppStatistics()
    :
    ppp_lcp_pkts{YType::uint32, "ppp-lcp-pkts"},
    ppp_ipcp_pkts{YType::uint32, "ppp-ipcp-pkts"},
    ppp_ccp_pkts{YType::uint32, "ppp-ccp-pkts"}
{

    yang_name = "ppp-statistics"; yang_parent_name = "ppp-data"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

PppData::PppStatistics::~PppStatistics()
{
}

bool PppData::PppStatistics::has_data() const
{
    if (is_presence_container) return true;
    return ppp_lcp_pkts.is_set
	|| ppp_ipcp_pkts.is_set
	|| ppp_ccp_pkts.is_set;
}

bool PppData::PppStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ppp_lcp_pkts.yfilter)
	|| ydk::is_set(ppp_ipcp_pkts.yfilter)
	|| ydk::is_set(ppp_ccp_pkts.yfilter);
}

std::string PppData::PppStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ppp-oper:ppp-data/" << get_segment_path();
    return path_buffer.str();
}

std::string PppData::PppStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppData::PppStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ppp_lcp_pkts.is_set || is_set(ppp_lcp_pkts.yfilter)) leaf_name_data.push_back(ppp_lcp_pkts.get_name_leafdata());
    if (ppp_ipcp_pkts.is_set || is_set(ppp_ipcp_pkts.yfilter)) leaf_name_data.push_back(ppp_ipcp_pkts.get_name_leafdata());
    if (ppp_ccp_pkts.is_set || is_set(ppp_ccp_pkts.yfilter)) leaf_name_data.push_back(ppp_ccp_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppData::PppStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppData::PppStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PppData::PppStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ppp-lcp-pkts")
    {
        ppp_lcp_pkts = value;
        ppp_lcp_pkts.value_namespace = name_space;
        ppp_lcp_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppp-ipcp-pkts")
    {
        ppp_ipcp_pkts = value;
        ppp_ipcp_pkts.value_namespace = name_space;
        ppp_ipcp_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppp-ccp-pkts")
    {
        ppp_ccp_pkts = value;
        ppp_ccp_pkts.value_namespace = name_space;
        ppp_ccp_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void PppData::PppStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ppp-lcp-pkts")
    {
        ppp_lcp_pkts.yfilter = yfilter;
    }
    if(value_path == "ppp-ipcp-pkts")
    {
        ppp_ipcp_pkts.yfilter = yfilter;
    }
    if(value_path == "ppp-ccp-pkts")
    {
        ppp_ccp_pkts.yfilter = yfilter;
    }
}

bool PppData::PppStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ppp-lcp-pkts" || name == "ppp-ipcp-pkts" || name == "ppp-ccp-pkts")
        return true;
    return false;
}

PppData::Pppoe::Pppoe()
    :
    role{YType::enumeration, "role"}
        ,
    pppoe_session_list(this, {"ifname"})
    , pppoe_statistics(nullptr) // presence node
{

    yang_name = "pppoe"; yang_parent_name = "ppp-data"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

PppData::Pppoe::~Pppoe()
{
}

bool PppData::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pppoe_session_list.len(); index++)
    {
        if(pppoe_session_list[index]->has_data())
            return true;
    }
    return role.is_set
	|| (pppoe_statistics !=  nullptr && pppoe_statistics->has_data());
}

bool PppData::Pppoe::has_operation() const
{
    for (std::size_t index=0; index<pppoe_session_list.len(); index++)
    {
        if(pppoe_session_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (pppoe_statistics !=  nullptr && pppoe_statistics->has_operation());
}

std::string PppData::Pppoe::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ppp-oper:ppp-data/" << get_segment_path();
    return path_buffer.str();
}

std::string PppData::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppData::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppData::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe-session-list")
    {
        auto c = std::make_shared<PppData::Pppoe::PppoeSessionList>();
        c->parent = this;
        pppoe_session_list.append(c);
        return c;
    }

    if(child_yang_name == "pppoe-statistics")
    {
        if(pppoe_statistics == nullptr)
        {
            pppoe_statistics = std::make_shared<PppData::Pppoe::PppoeStatistics>();
        }
        return pppoe_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppData::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pppoe_session_list.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(pppoe_statistics != nullptr)
    {
        children["pppoe-statistics"] = pppoe_statistics;
    }

    return children;
}

void PppData::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void PppData::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool PppData::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe-session-list" || name == "pppoe-statistics" || name == "role")
        return true;
    return false;
}

PppData::Pppoe::PppoeSessionList::PppoeSessionList()
    :
    ifname{YType::str, "ifname"}
        ,
    session(this, {})
{

    yang_name = "pppoe-session-list"; yang_parent_name = "pppoe"; is_top_level_class = false; has_list_ancestor = false; 
}

PppData::Pppoe::PppoeSessionList::~PppoeSessionList()
{
}

bool PppData::Pppoe::PppoeSessionList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return ifname.is_set;
}

bool PppData::Pppoe::PppoeSessionList::has_operation() const
{
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ifname.yfilter);
}

std::string PppData::Pppoe::PppoeSessionList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ppp-oper:ppp-data/pppoe/" << get_segment_path();
    return path_buffer.str();
}

std::string PppData::Pppoe::PppoeSessionList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe-session-list";
    ADD_KEY_TOKEN(ifname, "ifname");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppData::Pppoe::PppoeSessionList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ifname.is_set || is_set(ifname.yfilter)) leaf_name_data.push_back(ifname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppData::Pppoe::PppoeSessionList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        auto c = std::make_shared<PppData::Pppoe::PppoeSessionList::Session>();
        c->parent = this;
        session.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppData::Pppoe::PppoeSessionList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : session.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void PppData::Pppoe::PppoeSessionList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ifname")
    {
        ifname = value;
        ifname.value_namespace = name_space;
        ifname.value_namespace_prefix = name_space_prefix;
    }
}

void PppData::Pppoe::PppoeSessionList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ifname")
    {
        ifname.yfilter = yfilter;
    }
}

bool PppData::Pppoe::PppoeSessionList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "ifname")
        return true;
    return false;
}

PppData::Pppoe::PppoeSessionList::Session::Session()
    :
    session_id{YType::uint16, "session-id"},
    lmac{YType::str, "lmac"},
    rmac{YType::str, "rmac"},
    va_ifname{YType::str, "va-ifname"},
    vrf_name{YType::str, "vrf-name"},
    dot1q_qinq_outer_vlan{YType::uint16, "dot1q-qinq-outer-vlan"},
    dot1q_qinq_inner_vlan{YType::uint16, "dot1q-qinq-inner-vlan"},
    service_name{YType::str, "service-name"},
    in_packet{YType::uint32, "in-packet"},
    out_packet{YType::uint32, "out-packet"},
    in_bytes{YType::uint64, "in-bytes"},
    out_bytes{YType::uint64, "out-bytes"}
{

    yang_name = "session"; yang_parent_name = "pppoe-session-list"; is_top_level_class = false; has_list_ancestor = true; 
}

PppData::Pppoe::PppoeSessionList::Session::~Session()
{
}

bool PppData::Pppoe::PppoeSessionList::Session::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| lmac.is_set
	|| rmac.is_set
	|| va_ifname.is_set
	|| vrf_name.is_set
	|| dot1q_qinq_outer_vlan.is_set
	|| dot1q_qinq_inner_vlan.is_set
	|| service_name.is_set
	|| in_packet.is_set
	|| out_packet.is_set
	|| in_bytes.is_set
	|| out_bytes.is_set;
}

bool PppData::Pppoe::PppoeSessionList::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(lmac.yfilter)
	|| ydk::is_set(rmac.yfilter)
	|| ydk::is_set(va_ifname.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(dot1q_qinq_outer_vlan.yfilter)
	|| ydk::is_set(dot1q_qinq_inner_vlan.yfilter)
	|| ydk::is_set(service_name.yfilter)
	|| ydk::is_set(in_packet.yfilter)
	|| ydk::is_set(out_packet.yfilter)
	|| ydk::is_set(in_bytes.yfilter)
	|| ydk::is_set(out_bytes.yfilter);
}

std::string PppData::Pppoe::PppoeSessionList::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppData::Pppoe::PppoeSessionList::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (lmac.is_set || is_set(lmac.yfilter)) leaf_name_data.push_back(lmac.get_name_leafdata());
    if (rmac.is_set || is_set(rmac.yfilter)) leaf_name_data.push_back(rmac.get_name_leafdata());
    if (va_ifname.is_set || is_set(va_ifname.yfilter)) leaf_name_data.push_back(va_ifname.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (dot1q_qinq_outer_vlan.is_set || is_set(dot1q_qinq_outer_vlan.yfilter)) leaf_name_data.push_back(dot1q_qinq_outer_vlan.get_name_leafdata());
    if (dot1q_qinq_inner_vlan.is_set || is_set(dot1q_qinq_inner_vlan.yfilter)) leaf_name_data.push_back(dot1q_qinq_inner_vlan.get_name_leafdata());
    if (service_name.is_set || is_set(service_name.yfilter)) leaf_name_data.push_back(service_name.get_name_leafdata());
    if (in_packet.is_set || is_set(in_packet.yfilter)) leaf_name_data.push_back(in_packet.get_name_leafdata());
    if (out_packet.is_set || is_set(out_packet.yfilter)) leaf_name_data.push_back(out_packet.get_name_leafdata());
    if (in_bytes.is_set || is_set(in_bytes.yfilter)) leaf_name_data.push_back(in_bytes.get_name_leafdata());
    if (out_bytes.is_set || is_set(out_bytes.yfilter)) leaf_name_data.push_back(out_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppData::Pppoe::PppoeSessionList::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppData::Pppoe::PppoeSessionList::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PppData::Pppoe::PppoeSessionList::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmac")
    {
        lmac = value;
        lmac.value_namespace = name_space;
        lmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rmac")
    {
        rmac = value;
        rmac.value_namespace = name_space;
        rmac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "va-ifname")
    {
        va_ifname = value;
        va_ifname.value_namespace = name_space;
        va_ifname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1q-qinq-outer-vlan")
    {
        dot1q_qinq_outer_vlan = value;
        dot1q_qinq_outer_vlan.value_namespace = name_space;
        dot1q_qinq_outer_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dot1q-qinq-inner-vlan")
    {
        dot1q_qinq_inner_vlan = value;
        dot1q_qinq_inner_vlan.value_namespace = name_space;
        dot1q_qinq_inner_vlan.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-name")
    {
        service_name = value;
        service_name.value_namespace = name_space;
        service_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-packet")
    {
        in_packet = value;
        in_packet.value_namespace = name_space;
        in_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-packet")
    {
        out_packet = value;
        out_packet.value_namespace = name_space;
        out_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-bytes")
    {
        in_bytes = value;
        in_bytes.value_namespace = name_space;
        in_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-bytes")
    {
        out_bytes = value;
        out_bytes.value_namespace = name_space;
        out_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void PppData::Pppoe::PppoeSessionList::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "lmac")
    {
        lmac.yfilter = yfilter;
    }
    if(value_path == "rmac")
    {
        rmac.yfilter = yfilter;
    }
    if(value_path == "va-ifname")
    {
        va_ifname.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "dot1q-qinq-outer-vlan")
    {
        dot1q_qinq_outer_vlan.yfilter = yfilter;
    }
    if(value_path == "dot1q-qinq-inner-vlan")
    {
        dot1q_qinq_inner_vlan.yfilter = yfilter;
    }
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
    if(value_path == "in-packet")
    {
        in_packet.yfilter = yfilter;
    }
    if(value_path == "out-packet")
    {
        out_packet.yfilter = yfilter;
    }
    if(value_path == "in-bytes")
    {
        in_bytes.yfilter = yfilter;
    }
    if(value_path == "out-bytes")
    {
        out_bytes.yfilter = yfilter;
    }
}

bool PppData::Pppoe::PppoeSessionList::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "lmac" || name == "rmac" || name == "va-ifname" || name == "vrf-name" || name == "dot1q-qinq-outer-vlan" || name == "dot1q-qinq-inner-vlan" || name == "service-name" || name == "in-packet" || name == "out-packet" || name == "in-bytes" || name == "out-bytes")
        return true;
    return false;
}

PppData::Pppoe::PppoeStatistics::PppoeStatistics()
    :
    pppoe_padi_pkts{YType::uint32, "pppoe-padi-pkts"},
    pppoe_pado_pkts{YType::uint32, "pppoe-pado-pkts"},
    pppoe_padr_pkts{YType::uint32, "pppoe-padr-pkts"},
    pppoe_pads_pkts{YType::uint32, "pppoe-pads-pkts"}
{

    yang_name = "pppoe-statistics"; yang_parent_name = "pppoe"; is_top_level_class = false; has_list_ancestor = false; is_presence_container = true;
}

PppData::Pppoe::PppoeStatistics::~PppoeStatistics()
{
}

bool PppData::Pppoe::PppoeStatistics::has_data() const
{
    if (is_presence_container) return true;
    return pppoe_padi_pkts.is_set
	|| pppoe_pado_pkts.is_set
	|| pppoe_padr_pkts.is_set
	|| pppoe_pads_pkts.is_set;
}

bool PppData::Pppoe::PppoeStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pppoe_padi_pkts.yfilter)
	|| ydk::is_set(pppoe_pado_pkts.yfilter)
	|| ydk::is_set(pppoe_padr_pkts.yfilter)
	|| ydk::is_set(pppoe_pads_pkts.yfilter);
}

std::string PppData::Pppoe::PppoeStatistics::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ppp-oper:ppp-data/pppoe/" << get_segment_path();
    return path_buffer.str();
}

std::string PppData::Pppoe::PppoeStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > PppData::Pppoe::PppoeStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pppoe_padi_pkts.is_set || is_set(pppoe_padi_pkts.yfilter)) leaf_name_data.push_back(pppoe_padi_pkts.get_name_leafdata());
    if (pppoe_pado_pkts.is_set || is_set(pppoe_pado_pkts.yfilter)) leaf_name_data.push_back(pppoe_pado_pkts.get_name_leafdata());
    if (pppoe_padr_pkts.is_set || is_set(pppoe_padr_pkts.yfilter)) leaf_name_data.push_back(pppoe_padr_pkts.get_name_leafdata());
    if (pppoe_pads_pkts.is_set || is_set(pppoe_pads_pkts.yfilter)) leaf_name_data.push_back(pppoe_pads_pkts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> PppData::Pppoe::PppoeStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> PppData::Pppoe::PppoeStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void PppData::Pppoe::PppoeStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pppoe-padi-pkts")
    {
        pppoe_padi_pkts = value;
        pppoe_padi_pkts.value_namespace = name_space;
        pppoe_padi_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe-pado-pkts")
    {
        pppoe_pado_pkts = value;
        pppoe_pado_pkts.value_namespace = name_space;
        pppoe_pado_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe-padr-pkts")
    {
        pppoe_padr_pkts = value;
        pppoe_padr_pkts.value_namespace = name_space;
        pppoe_padr_pkts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe-pads-pkts")
    {
        pppoe_pads_pkts = value;
        pppoe_pads_pkts.value_namespace = name_space;
        pppoe_pads_pkts.value_namespace_prefix = name_space_prefix;
    }
}

void PppData::Pppoe::PppoeStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pppoe-padi-pkts")
    {
        pppoe_padi_pkts.yfilter = yfilter;
    }
    if(value_path == "pppoe-pado-pkts")
    {
        pppoe_pado_pkts.yfilter = yfilter;
    }
    if(value_path == "pppoe-padr-pkts")
    {
        pppoe_padr_pkts.yfilter = yfilter;
    }
    if(value_path == "pppoe-pads-pkts")
    {
        pppoe_pads_pkts.yfilter = yfilter;
    }
}

bool PppData::Pppoe::PppoeStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe-padi-pkts" || name == "pppoe-pado-pkts" || name == "pppoe-padr-pkts" || name == "pppoe-pads-pkts")
        return true;
    return false;
}

const Enum::YLeaf PppIosAuthType::ppp_ios_auth_none {0, "ppp-ios-auth-none"};
const Enum::YLeaf PppIosAuthType::ppp_ios_auth_chap {1, "ppp-ios-auth-chap"};
const Enum::YLeaf PppIosAuthType::ppp_ios_auth_pap {2, "ppp-ios-auth-pap"};
const Enum::YLeaf PppIosAuthType::ppp_ios_auth_mschap {3, "ppp-ios-auth-mschap"};
const Enum::YLeaf PppIosAuthType::ppp_ios_auth_mschap_v2 {4, "ppp-ios-auth-mschap-v2"};
const Enum::YLeaf PppIosAuthType::ppp_ios_auth_eap {5, "ppp-ios-auth-eap"};

const Enum::YLeaf PppoeOperationalRole::pppoe_client {0, "pppoe-client"};
const Enum::YLeaf PppoeOperationalRole::pppoe_server {1, "pppoe-server"};


}
}

