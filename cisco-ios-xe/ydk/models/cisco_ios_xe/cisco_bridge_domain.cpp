
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "cisco_bridge_domain.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace cisco_bridge_domain {

BridgeDomainConfig::BridgeDomainConfig()
    :
    bridge_domains(std::make_shared<BridgeDomainConfig::BridgeDomains>())
	,bridge_groups(std::make_shared<BridgeDomainConfig::BridgeGroups>())
	,global(std::make_shared<BridgeDomainConfig::Global>())
{
    bridge_domains->parent = this;
    bridge_groups->parent = this;
    global->parent = this;

    yang_name = "bridge-domain-config"; yang_parent_name = "cisco-bridge-domain"; is_top_level_class = true; has_list_ancestor = false;
}

BridgeDomainConfig::~BridgeDomainConfig()
{
}

bool BridgeDomainConfig::has_data() const
{
    return (bridge_domains !=  nullptr && bridge_domains->has_data())
	|| (bridge_groups !=  nullptr && bridge_groups->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool BridgeDomainConfig::has_operation() const
{
    return is_set(yfilter)
	|| (bridge_domains !=  nullptr && bridge_domains->has_operation())
	|| (bridge_groups !=  nullptr && bridge_groups->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string BridgeDomainConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:bridge-domain-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domains")
    {
        if(bridge_domains == nullptr)
        {
            bridge_domains = std::make_shared<BridgeDomainConfig::BridgeDomains>();
        }
        return bridge_domains;
    }

    if(child_yang_name == "bridge-groups")
    {
        if(bridge_groups == nullptr)
        {
            bridge_groups = std::make_shared<BridgeDomainConfig::BridgeGroups>();
        }
        return bridge_groups;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<BridgeDomainConfig::Global>();
        }
        return global;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bridge_domains != nullptr)
    {
        children["bridge-domains"] = bridge_domains;
    }

    if(bridge_groups != nullptr)
    {
        children["bridge-groups"] = bridge_groups;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    return children;
}

void BridgeDomainConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BridgeDomainConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> BridgeDomainConfig::clone_ptr() const
{
    return std::make_shared<BridgeDomainConfig>();
}

std::string BridgeDomainConfig::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string BridgeDomainConfig::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function BridgeDomainConfig::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> BridgeDomainConfig::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool BridgeDomainConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domains" || name == "bridge-groups" || name == "global")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomains()
{

    yang_name = "bridge-domains"; yang_parent_name = "bridge-domain-config"; is_top_level_class = false; has_list_ancestor = false;
}

BridgeDomainConfig::BridgeDomains::~BridgeDomains()
{
}

bool BridgeDomainConfig::BridgeDomains::has_data() const
{
    for (std::size_t index=0; index<bridge_domain.size(); index++)
    {
        if(bridge_domain[index]->has_data())
            return true;
    }
    return false;
}

bool BridgeDomainConfig::BridgeDomains::has_operation() const
{
    for (std::size_t index=0; index<bridge_domain.size(); index++)
    {
        if(bridge_domain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:bridge-domain-config/" << get_segment_path();
    return path_buffer.str();
}

std::string BridgeDomainConfig::BridgeDomains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domains";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domain")
    {
        for(auto const & c : bridge_domain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain>();
        c->parent = this;
        bridge_domain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bridge_domain)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BridgeDomainConfig::BridgeDomains::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BridgeDomainConfig::BridgeDomains::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BridgeDomainConfig::BridgeDomains::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::BridgeDomain()
    :
    id{YType::str, "id"},
    bd_status_change_notification{YType::boolean, "bd-status-change-notification"},
    bridge_group{YType::str, "bridge-group"},
    enabled{YType::boolean, "enabled"},
    flooding_mode{YType::enumeration, "flooding-mode"},
    mtu{YType::uint16, "mtu"}
    	,
    dhcp_ipv4_snooping(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping>())
	,dynamic_arp_inspection(nullptr) // presence node
	,igmp_snooping(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping>())
	,ip_source_guard(nullptr) // presence node
	,mac(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac>())
	,members(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members>())
	,mld_snooping(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping>())
	,storm_control(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl>())
{
    dhcp_ipv4_snooping->parent = this;
    igmp_snooping->parent = this;
    mac->parent = this;
    members->parent = this;
    mld_snooping->parent = this;
    storm_control->parent = this;

    yang_name = "bridge-domain"; yang_parent_name = "bridge-domains"; is_top_level_class = false; has_list_ancestor = false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::~BridgeDomain()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::has_data() const
{
    return id.is_set
	|| bd_status_change_notification.is_set
	|| bridge_group.is_set
	|| enabled.is_set
	|| flooding_mode.is_set
	|| mtu.is_set
	|| (dhcp_ipv4_snooping !=  nullptr && dhcp_ipv4_snooping->has_data())
	|| (dynamic_arp_inspection !=  nullptr && dynamic_arp_inspection->has_data())
	|| (igmp_snooping !=  nullptr && igmp_snooping->has_data())
	|| (ip_source_guard !=  nullptr && ip_source_guard->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (members !=  nullptr && members->has_data())
	|| (mld_snooping !=  nullptr && mld_snooping->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data());
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(bd_status_change_notification.yfilter)
	|| ydk::is_set(bridge_group.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(flooding_mode.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| (dhcp_ipv4_snooping !=  nullptr && dhcp_ipv4_snooping->has_operation())
	|| (dynamic_arp_inspection !=  nullptr && dynamic_arp_inspection->has_operation())
	|| (igmp_snooping !=  nullptr && igmp_snooping->has_operation())
	|| (ip_source_guard !=  nullptr && ip_source_guard->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (members !=  nullptr && members->has_operation())
	|| (mld_snooping !=  nullptr && mld_snooping->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:bridge-domain-config/bridge-domains/" << get_segment_path();
    return path_buffer.str();
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (bd_status_change_notification.is_set || is_set(bd_status_change_notification.yfilter)) leaf_name_data.push_back(bd_status_change_notification.get_name_leafdata());
    if (bridge_group.is_set || is_set(bridge_group.yfilter)) leaf_name_data.push_back(bridge_group.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (flooding_mode.is_set || is_set(flooding_mode.yfilter)) leaf_name_data.push_back(flooding_mode.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-ipv4-snooping")
    {
        if(dhcp_ipv4_snooping == nullptr)
        {
            dhcp_ipv4_snooping = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping>();
        }
        return dhcp_ipv4_snooping;
    }

    if(child_yang_name == "dynamic-arp-inspection")
    {
        if(dynamic_arp_inspection == nullptr)
        {
            dynamic_arp_inspection = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection>();
        }
        return dynamic_arp_inspection;
    }

    if(child_yang_name == "igmp-snooping")
    {
        if(igmp_snooping == nullptr)
        {
            igmp_snooping = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping>();
        }
        return igmp_snooping;
    }

    if(child_yang_name == "ip-source-guard")
    {
        if(ip_source_guard == nullptr)
        {
            ip_source_guard = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard>();
        }
        return ip_source_guard;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "members")
    {
        if(members == nullptr)
        {
            members = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members>();
        }
        return members;
    }

    if(child_yang_name == "mld-snooping")
    {
        if(mld_snooping == nullptr)
        {
            mld_snooping = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping>();
        }
        return mld_snooping;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl>();
        }
        return storm_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp_ipv4_snooping != nullptr)
    {
        children["dhcp-ipv4-snooping"] = dhcp_ipv4_snooping;
    }

    if(dynamic_arp_inspection != nullptr)
    {
        children["dynamic-arp-inspection"] = dynamic_arp_inspection;
    }

    if(igmp_snooping != nullptr)
    {
        children["igmp-snooping"] = igmp_snooping;
    }

    if(ip_source_guard != nullptr)
    {
        children["ip-source-guard"] = ip_source_guard;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(members != nullptr)
    {
        children["members"] = members;
    }

    if(mld_snooping != nullptr)
    {
        children["mld-snooping"] = mld_snooping;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-status-change-notification")
    {
        bd_status_change_notification = value;
        bd_status_change_notification.value_namespace = name_space;
        bd_status_change_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-group")
    {
        bridge_group = value;
        bridge_group.value_namespace = name_space;
        bridge_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-mode")
    {
        flooding_mode = value;
        flooding_mode.value_namespace = name_space;
        flooding_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "bd-status-change-notification")
    {
        bd_status_change_notification.yfilter = yfilter;
    }
    if(value_path == "bridge-group")
    {
        bridge_group.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "flooding-mode")
    {
        flooding_mode.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-ipv4-snooping" || name == "dynamic-arp-inspection" || name == "igmp-snooping" || name == "ip-source-guard" || name == "mac" || name == "members" || name == "mld-snooping" || name == "storm-control" || name == "id" || name == "bd-status-change-notification" || name == "bridge-group" || name == "enabled" || name == "flooding-mode" || name == "mtu")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping::DhcpIpv4Snooping()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "dhcp-ipv4-snooping"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping::~DhcpIpv4Snooping()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping::has_data() const
{
    return profile_name.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-ipv4-snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::DynamicArpInspection()
    :
    logging{YType::boolean, "logging"}
    	,
    address_validation(nullptr) // presence node
{

    yang_name = "dynamic-arp-inspection"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::~DynamicArpInspection()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::has_data() const
{
    return logging.is_set
	|| (address_validation !=  nullptr && address_validation->has_data());
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| (address_validation !=  nullptr && address_validation->has_operation());
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-arp-inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-validation")
    {
        if(address_validation == nullptr)
        {
            address_validation = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation>();
        }
        return address_validation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_validation != nullptr)
    {
        children["address-validation"] = address_validation;
    }

    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-validation" || name == "logging")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation::AddressValidation()
    :
    dst_mac{YType::empty, "dst-mac"},
    ipv4{YType::empty, "ipv4"},
    src_mac{YType::empty, "src-mac"}
{

    yang_name = "address-validation"; yang_parent_name = "dynamic-arp-inspection"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation::~AddressValidation()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation::has_data() const
{
    return dst_mac.is_set
	|| ipv4.is_set
	|| src_mac.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_mac.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(src_mac.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-validation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_mac.is_set || is_set(dst_mac.yfilter)) leaf_name_data.push_back(dst_mac.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (src_mac.is_set || is_set(src_mac.yfilter)) leaf_name_data.push_back(src_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-mac")
    {
        dst_mac = value;
        dst_mac.value_namespace = name_space;
        dst_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-mac")
    {
        src_mac = value;
        src_mac.value_namespace = name_space;
        src_mac.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-mac")
    {
        dst_mac.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "src-mac")
    {
        src_mac.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-mac" || name == "ipv4" || name == "src-mac")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping::IgmpSnooping()
    :
    disabled{YType::empty, "disabled"},
    profile_name{YType::str, "profile-name"}
{

    yang_name = "igmp-snooping"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping::~IgmpSnooping()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping::has_data() const
{
    return disabled.is_set
	|| profile_name.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disabled.yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp-snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled.is_set || is_set(disabled.yfilter)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disabled")
    {
        disabled = value;
        disabled.value_namespace = name_space;
        disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disabled")
    {
        disabled.yfilter = yfilter;
    }
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "profile-name")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard::IpSourceGuard()
    :
    logging{YType::boolean, "logging"}
{

    yang_name = "ip-source-guard"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard::~IpSourceGuard()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard::has_data() const
{
    return logging.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-source-guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Mac()
    :
    learning_enabled{YType::boolean, "learning-enabled"}
    	,
    aging(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging>())
	,flooding(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding>())
	,limit(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit>())
	,port_down(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown>())
	,secure(nullptr) // presence node
	,static_(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_>())
{
    aging->parent = this;
    flooding->parent = this;
    limit->parent = this;
    port_down->parent = this;
    static_->parent = this;

    yang_name = "mac"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::~Mac()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::has_data() const
{
    return learning_enabled.is_set
	|| (aging !=  nullptr && aging->has_data())
	|| (flooding !=  nullptr && flooding->has_data())
	|| (limit !=  nullptr && limit->has_data())
	|| (port_down !=  nullptr && port_down->has_data())
	|| (secure !=  nullptr && secure->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(learning_enabled.yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (flooding !=  nullptr && flooding->has_operation())
	|| (limit !=  nullptr && limit->has_operation())
	|| (port_down !=  nullptr && port_down->has_operation())
	|| (secure !=  nullptr && secure->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learning_enabled.is_set || is_set(learning_enabled.yfilter)) leaf_name_data.push_back(learning_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "flooding")
    {
        if(flooding == nullptr)
        {
            flooding = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding>();
        }
        return flooding;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "port-down")
    {
        if(port_down == nullptr)
        {
            port_down = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown>();
        }
        return port_down;
    }

    if(child_yang_name == "secure")
    {
        if(secure == nullptr)
        {
            secure = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure>();
        }
        return secure;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging != nullptr)
    {
        children["aging"] = aging;
    }

    if(flooding != nullptr)
    {
        children["flooding"] = flooding;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    if(port_down != nullptr)
    {
        children["port-down"] = port_down;
    }

    if(secure != nullptr)
    {
        children["secure"] = secure;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "learning-enabled")
    {
        learning_enabled = value;
        learning_enabled.value_namespace = name_space;
        learning_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "learning-enabled")
    {
        learning_enabled.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "flooding" || name == "limit" || name == "port-down" || name == "secure" || name == "static" || name == "learning-enabled")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging::Aging()
    :
    time{YType::uint32, "time"},
    type{YType::enumeration, "type"}
{

    yang_name = "aging"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging::~Aging()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging::has_data() const
{
    return time.is_set
	|| type.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "type")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding::Flooding()
    :
    disabled{YType::empty, "disabled"},
    disabled_unknown_unicast{YType::empty, "disabled-unknown-unicast"}
{

    yang_name = "flooding"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding::~Flooding()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding::has_data() const
{
    return disabled.is_set
	|| disabled_unknown_unicast.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disabled.yfilter)
	|| ydk::is_set(disabled_unknown_unicast.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled.is_set || is_set(disabled.yfilter)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (disabled_unknown_unicast.is_set || is_set(disabled_unknown_unicast.yfilter)) leaf_name_data.push_back(disabled_unknown_unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disabled")
    {
        disabled = value;
        disabled.value_namespace = name_space;
        disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disabled-unknown-unicast")
    {
        disabled_unknown_unicast = value;
        disabled_unknown_unicast.value_namespace = name_space;
        disabled_unknown_unicast.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disabled")
    {
        disabled.yfilter = yfilter;
    }
    if(value_path == "disabled-unknown-unicast")
    {
        disabled_unknown_unicast.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "disabled-unknown-unicast")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit::Limit()
    :
    action{YType::enumeration, "action"},
    maximum{YType::uint32, "maximum"},
    notification{YType::identityref, "notification"}
{

    yang_name = "limit"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit::~Limit()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit::has_data() const
{
    return action.is_set
	|| maximum.is_set
	|| notification.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(notification.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (notification.is_set || is_set(notification.yfilter)) leaf_name_data.push_back(notification.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification")
    {
        notification = value;
        notification.value_namespace = name_space;
        notification.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "notification")
    {
        notification.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "maximum" || name == "notification")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown::PortDown()
    :
    flush{YType::boolean, "flush"}
{

    yang_name = "port-down"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown::~PortDown()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown::has_data() const
{
    return flush.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flush.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flush.is_set || is_set(flush.yfilter)) leaf_name_data.push_back(flush.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flush")
    {
        flush = value;
        flush.value_namespace = name_space;
        flush.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flush")
    {
        flush.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flush")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure::Secure()
    :
    action{YType::enumeration, "action"},
    logging{YType::boolean, "logging"}
{

    yang_name = "secure"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure::~Secure()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure::has_data() const
{
    return action.is_set
	|| logging.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "logging")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::Static_()
{

    yang_name = "static"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::~Static_()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::has_data() const
{
    for (std::size_t index=0; index<mac_addresses.size(); index++)
    {
        if(mac_addresses[index]->has_data())
            return true;
    }
    return false;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::has_operation() const
{
    for (std::size_t index=0; index<mac_addresses.size(); index++)
    {
        if(mac_addresses[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-addresses")
    {
        for(auto const & c : mac_addresses)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses>();
        c->parent = this;
        mac_addresses.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mac_addresses)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-addresses")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses::MacAddresses()
    :
    mac_addr{YType::str, "mac-addr"},
    drop{YType::boolean, "drop"}
{

    yang_name = "mac-addresses"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses::~MacAddresses()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses::has_data() const
{
    return mac_addr.is_set
	|| drop.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_addr.yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-addresses" <<"[mac-addr='" <<mac_addr <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_addr.is_set || is_set(mac_addr.yfilter)) leaf_name_data.push_back(mac_addr.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-addr")
    {
        mac_addr = value;
        mac_addr.value_namespace = name_space;
        mac_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-addr")
    {
        mac_addr.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-addr" || name == "drop")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::Members()
    :
    access_pw_member(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember>())
{
    access_pw_member->parent = this;

    yang_name = "members"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::~Members()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::has_data() const
{
    for (std::size_t index=0; index<ac_member.size(); index++)
    {
        if(ac_member[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vfi_member.size(); index++)
    {
        if(vfi_member[index]->has_data())
            return true;
    }
    return (access_pw_member !=  nullptr && access_pw_member->has_data());
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::has_operation() const
{
    for (std::size_t index=0; index<ac_member.size(); index++)
    {
        if(ac_member[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vfi_member.size(); index++)
    {
        if(vfi_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (access_pw_member !=  nullptr && access_pw_member->has_operation());
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac-member")
    {
        for(auto const & c : ac_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember>();
        c->parent = this;
        ac_member.push_back(c);
        return c;
    }

    if(child_yang_name == "access-pw-member")
    {
        if(access_pw_member == nullptr)
        {
            access_pw_member = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember>();
        }
        return access_pw_member;
    }

    if(child_yang_name == "vfi-member")
    {
        for(auto const & c : vfi_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember>();
        c->parent = this;
        vfi_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ac_member)
    {
        children[c->get_segment_path()] = c;
    }

    if(access_pw_member != nullptr)
    {
        children["access-pw-member"] = access_pw_member;
    }

    for (auto const & c : vfi_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac-member" || name == "access-pw-member" || name == "vfi-member")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::AcMember()
    :
    interface{YType::str, "interface"}
    	,
    dhcp_ipv4_snooping(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping>())
	,dynamic_arp_inspection(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection>())
	,flooding(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding>())
	,igmp_snooping(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping>())
	,ip_source_guard(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard>())
	,mac(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac>())
	,mld_snooping(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping>())
	,split_horizon_group(nullptr) // presence node
	,storm_control(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl>())
{
    dhcp_ipv4_snooping->parent = this;
    dynamic_arp_inspection->parent = this;
    flooding->parent = this;
    igmp_snooping->parent = this;
    ip_source_guard->parent = this;
    mac->parent = this;
    mld_snooping->parent = this;
    storm_control->parent = this;

    yang_name = "ac-member"; yang_parent_name = "members"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::~AcMember()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::has_data() const
{
    return interface.is_set
	|| (dhcp_ipv4_snooping !=  nullptr && dhcp_ipv4_snooping->has_data())
	|| (dynamic_arp_inspection !=  nullptr && dynamic_arp_inspection->has_data())
	|| (flooding !=  nullptr && flooding->has_data())
	|| (igmp_snooping !=  nullptr && igmp_snooping->has_data())
	|| (ip_source_guard !=  nullptr && ip_source_guard->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (mld_snooping !=  nullptr && mld_snooping->has_data())
	|| (split_horizon_group !=  nullptr && split_horizon_group->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data());
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (dhcp_ipv4_snooping !=  nullptr && dhcp_ipv4_snooping->has_operation())
	|| (dynamic_arp_inspection !=  nullptr && dynamic_arp_inspection->has_operation())
	|| (flooding !=  nullptr && flooding->has_operation())
	|| (igmp_snooping !=  nullptr && igmp_snooping->has_operation())
	|| (ip_source_guard !=  nullptr && ip_source_guard->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (mld_snooping !=  nullptr && mld_snooping->has_operation())
	|| (split_horizon_group !=  nullptr && split_horizon_group->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac-member" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-ipv4-snooping")
    {
        if(dhcp_ipv4_snooping == nullptr)
        {
            dhcp_ipv4_snooping = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping>();
        }
        return dhcp_ipv4_snooping;
    }

    if(child_yang_name == "dynamic-arp-inspection")
    {
        if(dynamic_arp_inspection == nullptr)
        {
            dynamic_arp_inspection = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection>();
        }
        return dynamic_arp_inspection;
    }

    if(child_yang_name == "flooding")
    {
        if(flooding == nullptr)
        {
            flooding = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding>();
        }
        return flooding;
    }

    if(child_yang_name == "igmp-snooping")
    {
        if(igmp_snooping == nullptr)
        {
            igmp_snooping = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping>();
        }
        return igmp_snooping;
    }

    if(child_yang_name == "ip-source-guard")
    {
        if(ip_source_guard == nullptr)
        {
            ip_source_guard = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard>();
        }
        return ip_source_guard;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "mld-snooping")
    {
        if(mld_snooping == nullptr)
        {
            mld_snooping = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping>();
        }
        return mld_snooping;
    }

    if(child_yang_name == "split-horizon-group")
    {
        if(split_horizon_group == nullptr)
        {
            split_horizon_group = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup>();
        }
        return split_horizon_group;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl>();
        }
        return storm_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp_ipv4_snooping != nullptr)
    {
        children["dhcp-ipv4-snooping"] = dhcp_ipv4_snooping;
    }

    if(dynamic_arp_inspection != nullptr)
    {
        children["dynamic-arp-inspection"] = dynamic_arp_inspection;
    }

    if(flooding != nullptr)
    {
        children["flooding"] = flooding;
    }

    if(igmp_snooping != nullptr)
    {
        children["igmp-snooping"] = igmp_snooping;
    }

    if(ip_source_guard != nullptr)
    {
        children["ip-source-guard"] = ip_source_guard;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(mld_snooping != nullptr)
    {
        children["mld-snooping"] = mld_snooping;
    }

    if(split_horizon_group != nullptr)
    {
        children["split-horizon-group"] = split_horizon_group;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-ipv4-snooping" || name == "dynamic-arp-inspection" || name == "flooding" || name == "igmp-snooping" || name == "ip-source-guard" || name == "mac" || name == "mld-snooping" || name == "split-horizon-group" || name == "storm-control" || name == "interface")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping::DhcpIpv4Snooping()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "dhcp-ipv4-snooping"; yang_parent_name = "ac-member"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping::~DhcpIpv4Snooping()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping::has_data() const
{
    return profile_name.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-ipv4-snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::DynamicArpInspection()
    :
    enable{YType::boolean, "enable"},
    logging{YType::boolean, "logging"}
    	,
    address_validation(nullptr) // presence node
{

    yang_name = "dynamic-arp-inspection"; yang_parent_name = "ac-member"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::~DynamicArpInspection()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::has_data() const
{
    return enable.is_set
	|| logging.is_set
	|| (address_validation !=  nullptr && address_validation->has_data());
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(logging.yfilter)
	|| (address_validation !=  nullptr && address_validation->has_operation());
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-arp-inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-validation")
    {
        if(address_validation == nullptr)
        {
            address_validation = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation>();
        }
        return address_validation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_validation != nullptr)
    {
        children["address-validation"] = address_validation;
    }

    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-validation" || name == "enable" || name == "logging")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation::AddressValidation()
    :
    dst_mac{YType::empty, "dst-mac"},
    ipv4{YType::empty, "ipv4"},
    src_mac{YType::empty, "src-mac"}
{

    yang_name = "address-validation"; yang_parent_name = "dynamic-arp-inspection"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation::~AddressValidation()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation::has_data() const
{
    return dst_mac.is_set
	|| ipv4.is_set
	|| src_mac.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dst_mac.yfilter)
	|| ydk::is_set(ipv4.yfilter)
	|| ydk::is_set(src_mac.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-validation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_mac.is_set || is_set(dst_mac.yfilter)) leaf_name_data.push_back(dst_mac.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.yfilter)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (src_mac.is_set || is_set(src_mac.yfilter)) leaf_name_data.push_back(src_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dst-mac")
    {
        dst_mac = value;
        dst_mac.value_namespace = name_space;
        dst_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
        ipv4.value_namespace = name_space;
        ipv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "src-mac")
    {
        src_mac = value;
        src_mac.value_namespace = name_space;
        src_mac.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dst-mac")
    {
        dst_mac.yfilter = yfilter;
    }
    if(value_path == "ipv4")
    {
        ipv4.yfilter = yfilter;
    }
    if(value_path == "src-mac")
    {
        src_mac.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dst-mac" || name == "ipv4" || name == "src-mac")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding::Flooding()
    :
    disabled{YType::empty, "disabled"},
    disabled_unknown_unicast{YType::empty, "disabled-unknown-unicast"}
{

    yang_name = "flooding"; yang_parent_name = "ac-member"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding::~Flooding()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding::has_data() const
{
    return disabled.is_set
	|| disabled_unknown_unicast.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disabled.yfilter)
	|| ydk::is_set(disabled_unknown_unicast.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled.is_set || is_set(disabled.yfilter)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (disabled_unknown_unicast.is_set || is_set(disabled_unknown_unicast.yfilter)) leaf_name_data.push_back(disabled_unknown_unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disabled")
    {
        disabled = value;
        disabled.value_namespace = name_space;
        disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disabled-unknown-unicast")
    {
        disabled_unknown_unicast = value;
        disabled_unknown_unicast.value_namespace = name_space;
        disabled_unknown_unicast.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disabled")
    {
        disabled.yfilter = yfilter;
    }
    if(value_path == "disabled-unknown-unicast")
    {
        disabled_unknown_unicast.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "disabled-unknown-unicast")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping::IgmpSnooping()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "igmp-snooping"; yang_parent_name = "ac-member"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping::~IgmpSnooping()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping::has_data() const
{
    return profile_name.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp-snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard::IpSourceGuard()
    :
    enable{YType::boolean, "enable"},
    logging{YType::boolean, "logging"}
{

    yang_name = "ip-source-guard"; yang_parent_name = "ac-member"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard::~IpSourceGuard()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard::has_data() const
{
    return enable.is_set
	|| logging.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-source-guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable" || name == "logging")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Mac()
    :
    learning_enabled{YType::boolean, "learning-enabled"}
    	,
    aging(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging>())
	,limit(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit>())
	,port_down(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown>())
	,secure(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure>())
{
    aging->parent = this;
    limit->parent = this;
    port_down->parent = this;
    secure->parent = this;

    yang_name = "mac"; yang_parent_name = "ac-member"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::~Mac()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::has_data() const
{
    return learning_enabled.is_set
	|| (aging !=  nullptr && aging->has_data())
	|| (limit !=  nullptr && limit->has_data())
	|| (port_down !=  nullptr && port_down->has_data())
	|| (secure !=  nullptr && secure->has_data());
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(learning_enabled.yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (limit !=  nullptr && limit->has_operation())
	|| (port_down !=  nullptr && port_down->has_operation())
	|| (secure !=  nullptr && secure->has_operation());
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learning_enabled.is_set || is_set(learning_enabled.yfilter)) leaf_name_data.push_back(learning_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "port-down")
    {
        if(port_down == nullptr)
        {
            port_down = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown>();
        }
        return port_down;
    }

    if(child_yang_name == "secure")
    {
        if(secure == nullptr)
        {
            secure = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure>();
        }
        return secure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging != nullptr)
    {
        children["aging"] = aging;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    if(port_down != nullptr)
    {
        children["port-down"] = port_down;
    }

    if(secure != nullptr)
    {
        children["secure"] = secure;
    }

    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "learning-enabled")
    {
        learning_enabled = value;
        learning_enabled.value_namespace = name_space;
        learning_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "learning-enabled")
    {
        learning_enabled.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "limit" || name == "port-down" || name == "secure" || name == "learning-enabled")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging::Aging()
    :
    time{YType::uint32, "time"},
    type{YType::enumeration, "type"}
{

    yang_name = "aging"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging::~Aging()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging::has_data() const
{
    return time.is_set
	|| type.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "type")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit::Limit()
    :
    action{YType::enumeration, "action"},
    maximum{YType::uint32, "maximum"},
    notification{YType::identityref, "notification"}
{

    yang_name = "limit"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit::~Limit()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit::has_data() const
{
    return action.is_set
	|| maximum.is_set
	|| notification.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(notification.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (notification.is_set || is_set(notification.yfilter)) leaf_name_data.push_back(notification.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification")
    {
        notification = value;
        notification.value_namespace = name_space;
        notification.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "notification")
    {
        notification.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "maximum" || name == "notification")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown::PortDown()
    :
    flush{YType::boolean, "flush"}
{

    yang_name = "port-down"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown::~PortDown()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown::has_data() const
{
    return flush.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flush.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flush.is_set || is_set(flush.yfilter)) leaf_name_data.push_back(flush.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flush")
    {
        flush = value;
        flush.value_namespace = name_space;
        flush.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flush")
    {
        flush.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flush")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure::Secure()
    :
    action{YType::enumeration, "action"},
    enabled{YType::boolean, "enabled"},
    logging{YType::boolean, "logging"}
{

    yang_name = "secure"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure::~Secure()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure::has_data() const
{
    return action.is_set
	|| enabled.is_set
	|| logging.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "enabled" || name == "logging")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping::MldSnooping()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "mld-snooping"; yang_parent_name = "ac-member"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping::~MldSnooping()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping::has_data() const
{
    return profile_name.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld-snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup::SplitHorizonGroup()
    :
    id{YType::uint16, "id"}
{

    yang_name = "split-horizon-group"; yang_parent_name = "ac-member"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup::~SplitHorizonGroup()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup::has_data() const
{
    return id.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::StormControl()
    :
    action{YType::identityref, "action"}
{

    yang_name = "storm-control"; yang_parent_name = "ac-member"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::~StormControl()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::has_data() const
{
    for (std::size_t index=0; index<thresholds.size(); index++)
    {
        if(thresholds[index]->has_data())
            return true;
    }
    return action.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::has_operation() const
{
    for (std::size_t index=0; index<thresholds.size(); index++)
    {
        if(thresholds[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresholds")
    {
        for(auto const & c : thresholds)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds>();
        c->parent = this;
        thresholds.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : thresholds)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresholds" || name == "action")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::Thresholds()
    :
    traffic_class{YType::enumeration, "traffic-class"},
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "thresholds"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::~Thresholds()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::has_data() const
{
    return traffic_class.is_set
	|| unit.is_set
	|| value_.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresholds" <<"[traffic-class='" <<traffic_class <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-class")
    {
        traffic_class = value;
        traffic_class.value_namespace = name_space;
        traffic_class.value_namespace_prefix = name_space_prefix;
    }
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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-class" || name == "unit" || name == "value")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwMember()
{

    yang_name = "access-pw-member"; yang_parent_name = "members"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::~AccessPwMember()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::has_data() const
{
    for (std::size_t index=0; index<access_pw_if_member.size(); index++)
    {
        if(access_pw_if_member[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pw_neighbor_spec.size(); index++)
    {
        if(pw_neighbor_spec[index]->has_data())
            return true;
    }
    return false;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::has_operation() const
{
    for (std::size_t index=0; index<access_pw_if_member.size(); index++)
    {
        if(access_pw_if_member[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pw_neighbor_spec.size(); index++)
    {
        if(pw_neighbor_spec[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-pw-member";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-pw-if-member")
    {
        for(auto const & c : access_pw_if_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember>();
        c->parent = this;
        access_pw_if_member.push_back(c);
        return c;
    }

    if(child_yang_name == "pw-neighbor-spec")
    {
        for(auto const & c : pw_neighbor_spec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec>();
        c->parent = this;
        pw_neighbor_spec.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : access_pw_if_member)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : pw_neighbor_spec)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-pw-if-member" || name == "pw-neighbor-spec")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember::AccessPwIfMember()
    :
    interface{YType::str, "interface"}
{

    yang_name = "access-pw-if-member"; yang_parent_name = "access-pw-member"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember::~AccessPwIfMember()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember::has_data() const
{
    return interface.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-pw-if-member" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::PwNeighborSpec()
    :
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    vc_id{YType::uint32, "vc-id"},
    encap_type{YType::identityref, "encap-type"},
    pw_class_template{YType::str, "pw-class-template"},
    source_ipv6{YType::str, "source-ipv6"},
    tag_impose_vlan{YType::uint16, "tag-impose-vlan"}
    	,
    backup(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup>())
	,dhcp_ipv4_snooping(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping>())
	,flooding(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding>())
	,igmp_snooping(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping>())
	,mac(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac>())
	,mld_snooping(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping>())
	,split_horizon_group(nullptr) // presence node
	,static_label(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel>())
	,storm_control(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl>())
{
    backup->parent = this;
    dhcp_ipv4_snooping->parent = this;
    flooding->parent = this;
    igmp_snooping->parent = this;
    mac->parent = this;
    mld_snooping->parent = this;
    static_label->parent = this;
    storm_control->parent = this;

    yang_name = "pw-neighbor-spec"; yang_parent_name = "access-pw-member"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::~PwNeighborSpec()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::has_data() const
{
    return neighbor_ip_address.is_set
	|| vc_id.is_set
	|| encap_type.is_set
	|| pw_class_template.is_set
	|| source_ipv6.is_set
	|| tag_impose_vlan.is_set
	|| (backup !=  nullptr && backup->has_data())
	|| (dhcp_ipv4_snooping !=  nullptr && dhcp_ipv4_snooping->has_data())
	|| (flooding !=  nullptr && flooding->has_data())
	|| (igmp_snooping !=  nullptr && igmp_snooping->has_data())
	|| (mac !=  nullptr && mac->has_data())
	|| (mld_snooping !=  nullptr && mld_snooping->has_data())
	|| (split_horizon_group !=  nullptr && split_horizon_group->has_data())
	|| (static_label !=  nullptr && static_label->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data());
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_ip_address.yfilter)
	|| ydk::is_set(vc_id.yfilter)
	|| ydk::is_set(encap_type.yfilter)
	|| ydk::is_set(pw_class_template.yfilter)
	|| ydk::is_set(source_ipv6.yfilter)
	|| ydk::is_set(tag_impose_vlan.yfilter)
	|| (backup !=  nullptr && backup->has_operation())
	|| (dhcp_ipv4_snooping !=  nullptr && dhcp_ipv4_snooping->has_operation())
	|| (flooding !=  nullptr && flooding->has_operation())
	|| (igmp_snooping !=  nullptr && igmp_snooping->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (mld_snooping !=  nullptr && mld_snooping->has_operation())
	|| (split_horizon_group !=  nullptr && split_horizon_group->has_operation())
	|| (static_label !=  nullptr && static_label->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-neighbor-spec" <<"[neighbor-ip-address='" <<neighbor_ip_address <<"']" <<"[vc-id='" <<vc_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.yfilter)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (vc_id.is_set || is_set(vc_id.yfilter)) leaf_name_data.push_back(vc_id.get_name_leafdata());
    if (encap_type.is_set || is_set(encap_type.yfilter)) leaf_name_data.push_back(encap_type.get_name_leafdata());
    if (pw_class_template.is_set || is_set(pw_class_template.yfilter)) leaf_name_data.push_back(pw_class_template.get_name_leafdata());
    if (source_ipv6.is_set || is_set(source_ipv6.yfilter)) leaf_name_data.push_back(source_ipv6.get_name_leafdata());
    if (tag_impose_vlan.is_set || is_set(tag_impose_vlan.yfilter)) leaf_name_data.push_back(tag_impose_vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "dhcp-ipv4-snooping")
    {
        if(dhcp_ipv4_snooping == nullptr)
        {
            dhcp_ipv4_snooping = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping>();
        }
        return dhcp_ipv4_snooping;
    }

    if(child_yang_name == "flooding")
    {
        if(flooding == nullptr)
        {
            flooding = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding>();
        }
        return flooding;
    }

    if(child_yang_name == "igmp-snooping")
    {
        if(igmp_snooping == nullptr)
        {
            igmp_snooping = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping>();
        }
        return igmp_snooping;
    }

    if(child_yang_name == "mac")
    {
        if(mac == nullptr)
        {
            mac = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac>();
        }
        return mac;
    }

    if(child_yang_name == "mld-snooping")
    {
        if(mld_snooping == nullptr)
        {
            mld_snooping = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping>();
        }
        return mld_snooping;
    }

    if(child_yang_name == "split-horizon-group")
    {
        if(split_horizon_group == nullptr)
        {
            split_horizon_group = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup>();
        }
        return split_horizon_group;
    }

    if(child_yang_name == "static-label")
    {
        if(static_label == nullptr)
        {
            static_label = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel>();
        }
        return static_label;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl>();
        }
        return storm_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(dhcp_ipv4_snooping != nullptr)
    {
        children["dhcp-ipv4-snooping"] = dhcp_ipv4_snooping;
    }

    if(flooding != nullptr)
    {
        children["flooding"] = flooding;
    }

    if(igmp_snooping != nullptr)
    {
        children["igmp-snooping"] = igmp_snooping;
    }

    if(mac != nullptr)
    {
        children["mac"] = mac;
    }

    if(mld_snooping != nullptr)
    {
        children["mld-snooping"] = mld_snooping;
    }

    if(split_horizon_group != nullptr)
    {
        children["split-horizon-group"] = split_horizon_group;
    }

    if(static_label != nullptr)
    {
        children["static-label"] = static_label;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
        neighbor_ip_address.value_namespace = name_space;
        neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-id")
    {
        vc_id = value;
        vc_id.value_namespace = name_space;
        vc_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encap-type")
    {
        encap_type = value;
        encap_type.value_namespace = name_space;
        encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class-template")
    {
        pw_class_template = value;
        pw_class_template.value_namespace = name_space;
        pw_class_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ipv6")
    {
        source_ipv6 = value;
        source_ipv6.value_namespace = name_space;
        source_ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-impose-vlan")
    {
        tag_impose_vlan = value;
        tag_impose_vlan.value_namespace = name_space;
        tag_impose_vlan.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "vc-id")
    {
        vc_id.yfilter = yfilter;
    }
    if(value_path == "encap-type")
    {
        encap_type.yfilter = yfilter;
    }
    if(value_path == "pw-class-template")
    {
        pw_class_template.yfilter = yfilter;
    }
    if(value_path == "source-ipv6")
    {
        source_ipv6.yfilter = yfilter;
    }
    if(value_path == "tag-impose-vlan")
    {
        tag_impose_vlan.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "dhcp-ipv4-snooping" || name == "flooding" || name == "igmp-snooping" || name == "mac" || name == "mld-snooping" || name == "split-horizon-group" || name == "static-label" || name == "storm-control" || name == "neighbor-ip-address" || name == "vc-id" || name == "encap-type" || name == "pw-class-template" || name == "source-ipv6" || name == "tag-impose-vlan")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup::Backup()
    :
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    pw_class_template{YType::str, "pw-class-template"},
    vc_id{YType::uint32, "vc-id"}
{

    yang_name = "backup"; yang_parent_name = "pw-neighbor-spec"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup::~Backup()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup::has_data() const
{
    return neighbor_ip_address.is_set
	|| pw_class_template.is_set
	|| vc_id.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_ip_address.yfilter)
	|| ydk::is_set(pw_class_template.yfilter)
	|| ydk::is_set(vc_id.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.yfilter)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (pw_class_template.is_set || is_set(pw_class_template.yfilter)) leaf_name_data.push_back(pw_class_template.get_name_leafdata());
    if (vc_id.is_set || is_set(vc_id.yfilter)) leaf_name_data.push_back(vc_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
        neighbor_ip_address.value_namespace = name_space;
        neighbor_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-class-template")
    {
        pw_class_template = value;
        pw_class_template.value_namespace = name_space;
        pw_class_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-id")
    {
        vc_id = value;
        vc_id.value_namespace = name_space;
        vc_id.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address.yfilter = yfilter;
    }
    if(value_path == "pw-class-template")
    {
        pw_class_template.yfilter = yfilter;
    }
    if(value_path == "vc-id")
    {
        vc_id.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-ip-address" || name == "pw-class-template" || name == "vc-id")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping::DhcpIpv4Snooping()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "dhcp-ipv4-snooping"; yang_parent_name = "pw-neighbor-spec"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping::~DhcpIpv4Snooping()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping::has_data() const
{
    return profile_name.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-ipv4-snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding::Flooding()
    :
    disabled{YType::empty, "disabled"},
    disabled_unknown_unicast{YType::empty, "disabled-unknown-unicast"}
{

    yang_name = "flooding"; yang_parent_name = "pw-neighbor-spec"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding::~Flooding()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding::has_data() const
{
    return disabled.is_set
	|| disabled_unknown_unicast.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disabled.yfilter)
	|| ydk::is_set(disabled_unknown_unicast.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled.is_set || is_set(disabled.yfilter)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (disabled_unknown_unicast.is_set || is_set(disabled_unknown_unicast.yfilter)) leaf_name_data.push_back(disabled_unknown_unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disabled")
    {
        disabled = value;
        disabled.value_namespace = name_space;
        disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disabled-unknown-unicast")
    {
        disabled_unknown_unicast = value;
        disabled_unknown_unicast.value_namespace = name_space;
        disabled_unknown_unicast.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disabled")
    {
        disabled.yfilter = yfilter;
    }
    if(value_path == "disabled-unknown-unicast")
    {
        disabled_unknown_unicast.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disabled" || name == "disabled-unknown-unicast")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping::IgmpSnooping()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "igmp-snooping"; yang_parent_name = "pw-neighbor-spec"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping::~IgmpSnooping()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping::has_data() const
{
    return profile_name.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp-snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Mac()
    :
    learning_enabled{YType::boolean, "learning-enabled"}
    	,
    aging(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging>())
	,limit(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit>())
	,port_down(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown>())
	,secure(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure>())
{
    aging->parent = this;
    limit->parent = this;
    port_down->parent = this;
    secure->parent = this;

    yang_name = "mac"; yang_parent_name = "pw-neighbor-spec"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::~Mac()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::has_data() const
{
    return learning_enabled.is_set
	|| (aging !=  nullptr && aging->has_data())
	|| (limit !=  nullptr && limit->has_data())
	|| (port_down !=  nullptr && port_down->has_data())
	|| (secure !=  nullptr && secure->has_data());
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(learning_enabled.yfilter)
	|| (aging !=  nullptr && aging->has_operation())
	|| (limit !=  nullptr && limit->has_operation())
	|| (port_down !=  nullptr && port_down->has_operation())
	|| (secure !=  nullptr && secure->has_operation());
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learning_enabled.is_set || is_set(learning_enabled.yfilter)) leaf_name_data.push_back(learning_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aging")
    {
        if(aging == nullptr)
        {
            aging = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging>();
        }
        return aging;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "port-down")
    {
        if(port_down == nullptr)
        {
            port_down = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown>();
        }
        return port_down;
    }

    if(child_yang_name == "secure")
    {
        if(secure == nullptr)
        {
            secure = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure>();
        }
        return secure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aging != nullptr)
    {
        children["aging"] = aging;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    if(port_down != nullptr)
    {
        children["port-down"] = port_down;
    }

    if(secure != nullptr)
    {
        children["secure"] = secure;
    }

    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "learning-enabled")
    {
        learning_enabled = value;
        learning_enabled.value_namespace = name_space;
        learning_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "learning-enabled")
    {
        learning_enabled.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aging" || name == "limit" || name == "port-down" || name == "secure" || name == "learning-enabled")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging::Aging()
    :
    time{YType::uint32, "time"},
    type{YType::enumeration, "type"}
{

    yang_name = "aging"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging::~Aging()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging::has_data() const
{
    return time.is_set
	|| type.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(time.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "type")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit::Limit()
    :
    action{YType::enumeration, "action"},
    maximum{YType::uint32, "maximum"},
    notification{YType::identityref, "notification"}
{

    yang_name = "limit"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit::~Limit()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit::has_data() const
{
    return action.is_set
	|| maximum.is_set
	|| notification.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(maximum.yfilter)
	|| ydk::is_set(notification.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (notification.is_set || is_set(notification.yfilter)) leaf_name_data.push_back(notification.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification")
    {
        notification = value;
        notification.value_namespace = name_space;
        notification.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
    if(value_path == "notification")
    {
        notification.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "maximum" || name == "notification")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown::PortDown()
    :
    flush{YType::boolean, "flush"}
{

    yang_name = "port-down"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown::~PortDown()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown::has_data() const
{
    return flush.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flush.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-down";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flush.is_set || is_set(flush.yfilter)) leaf_name_data.push_back(flush.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flush")
    {
        flush = value;
        flush.value_namespace = name_space;
        flush.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flush")
    {
        flush.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flush")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure::Secure()
    :
    action{YType::enumeration, "action"},
    enabled{YType::boolean, "enabled"},
    logging{YType::boolean, "logging"}
{

    yang_name = "secure"; yang_parent_name = "mac"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure::~Secure()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure::has_data() const
{
    return action.is_set
	|| enabled.is_set
	|| logging.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(enabled.yfilter)
	|| ydk::is_set(logging.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "action" || name == "enabled" || name == "logging")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping::MldSnooping()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "mld-snooping"; yang_parent_name = "pw-neighbor-spec"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping::~MldSnooping()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping::has_data() const
{
    return profile_name.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld-snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup::SplitHorizonGroup()
    :
    id{YType::uint16, "id"}
{

    yang_name = "split-horizon-group"; yang_parent_name = "pw-neighbor-spec"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup::~SplitHorizonGroup()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup::has_data() const
{
    return id.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel::StaticLabel()
    :
    local_label{YType::uint32, "local-label"},
    remote_label{YType::uint32, "remote-label"}
{

    yang_name = "static-label"; yang_parent_name = "pw-neighbor-spec"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel::~StaticLabel()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel::has_data() const
{
    return local_label.is_set
	|| remote_label.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(remote_label.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-label";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.yfilter)) leaf_name_data.push_back(remote_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
        remote_label.value_namespace = name_space;
        remote_label.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "remote-label")
    {
        remote_label.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-label" || name == "remote-label")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::StormControl()
    :
    action{YType::identityref, "action"}
{

    yang_name = "storm-control"; yang_parent_name = "pw-neighbor-spec"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::~StormControl()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::has_data() const
{
    for (std::size_t index=0; index<thresholds.size(); index++)
    {
        if(thresholds[index]->has_data())
            return true;
    }
    return action.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::has_operation() const
{
    for (std::size_t index=0; index<thresholds.size(); index++)
    {
        if(thresholds[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresholds")
    {
        for(auto const & c : thresholds)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds>();
        c->parent = this;
        thresholds.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : thresholds)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresholds" || name == "action")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::Thresholds()
    :
    traffic_class{YType::enumeration, "traffic-class"},
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "thresholds"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::~Thresholds()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::has_data() const
{
    return traffic_class.is_set
	|| unit.is_set
	|| value_.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresholds" <<"[traffic-class='" <<traffic_class <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-class")
    {
        traffic_class = value;
        traffic_class.value_namespace = name_space;
        traffic_class.value_namespace_prefix = name_space_prefix;
    }
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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-class" || name == "unit" || name == "value")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember::VfiMember()
    :
    interface{YType::str, "interface"}
{

    yang_name = "vfi-member"; yang_parent_name = "members"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember::~VfiMember()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember::has_data() const
{
    return interface.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi-member" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping::MldSnooping()
    :
    profile_name{YType::str, "profile-name"}
{

    yang_name = "mld-snooping"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping::~MldSnooping()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping::has_data() const
{
    return profile_name.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_name.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld-snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.yfilter)) leaf_name_data.push_back(profile_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
        profile_name.value_namespace = name_space;
        profile_name.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-name")
    {
        profile_name.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-name")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::StormControl()
    :
    action{YType::identityref, "action"}
{

    yang_name = "storm-control"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::~StormControl()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::has_data() const
{
    for (std::size_t index=0; index<thresholds.size(); index++)
    {
        if(thresholds[index]->has_data())
            return true;
    }
    return action.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::has_operation() const
{
    for (std::size_t index=0; index<thresholds.size(); index++)
    {
        if(thresholds[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(action.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "thresholds")
    {
        for(auto const & c : thresholds)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds>();
        c->parent = this;
        thresholds.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : thresholds)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "thresholds" || name == "action")
        return true;
    return false;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::Thresholds()
    :
    traffic_class{YType::enumeration, "traffic-class"},
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{

    yang_name = "thresholds"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::~Thresholds()
{
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::has_data() const
{
    return traffic_class.is_set
	|| unit.is_set
	|| value_.is_set;
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(unit.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresholds" <<"[traffic-class='" <<traffic_class <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (unit.is_set || is_set(unit.yfilter)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-class")
    {
        traffic_class = value;
        traffic_class.value_namespace = name_space;
        traffic_class.value_namespace_prefix = name_space_prefix;
    }
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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "unit")
    {
        unit.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-class" || name == "unit" || name == "value")
        return true;
    return false;
}

BridgeDomainConfig::BridgeGroups::BridgeGroups()
{

    yang_name = "bridge-groups"; yang_parent_name = "bridge-domain-config"; is_top_level_class = false; has_list_ancestor = false;
}

BridgeDomainConfig::BridgeGroups::~BridgeGroups()
{
}

bool BridgeDomainConfig::BridgeGroups::has_data() const
{
    for (std::size_t index=0; index<bridge_group.size(); index++)
    {
        if(bridge_group[index]->has_data())
            return true;
    }
    return false;
}

bool BridgeDomainConfig::BridgeGroups::has_operation() const
{
    for (std::size_t index=0; index<bridge_group.size(); index++)
    {
        if(bridge_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BridgeDomainConfig::BridgeGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:bridge-domain-config/" << get_segment_path();
    return path_buffer.str();
}

std::string BridgeDomainConfig::BridgeGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-group")
    {
        for(auto const & c : bridge_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeDomainConfig::BridgeGroups::BridgeGroup>();
        c->parent = this;
        bridge_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bridge_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BridgeDomainConfig::BridgeGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BridgeDomainConfig::BridgeGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BridgeDomainConfig::BridgeGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-group")
        return true;
    return false;
}

BridgeDomainConfig::BridgeGroups::BridgeGroup::BridgeGroup()
    :
    name{YType::str, "name"}
{

    yang_name = "bridge-group"; yang_parent_name = "bridge-groups"; is_top_level_class = false; has_list_ancestor = false;
}

BridgeDomainConfig::BridgeGroups::BridgeGroup::~BridgeGroup()
{
}

bool BridgeDomainConfig::BridgeGroups::BridgeGroup::has_data() const
{
    return name.is_set;
}

bool BridgeDomainConfig::BridgeGroups::BridgeGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string BridgeDomainConfig::BridgeGroups::BridgeGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:bridge-domain-config/bridge-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string BridgeDomainConfig::BridgeGroups::BridgeGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-group" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::BridgeGroups::BridgeGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::BridgeGroups::BridgeGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::BridgeGroups::BridgeGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::BridgeGroups::BridgeGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::BridgeGroups::BridgeGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::BridgeGroups::BridgeGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

BridgeDomainConfig::Global::Global()
    :
    bd_state_notification_enabled{YType::boolean, "bd-state-notification-enabled"},
    bd_state_notification_rate{YType::uint32, "bd-state-notification-rate"}
    	,
    pbb(std::make_shared<BridgeDomainConfig::Global::Pbb>())
{
    pbb->parent = this;

    yang_name = "global"; yang_parent_name = "bridge-domain-config"; is_top_level_class = false; has_list_ancestor = false;
}

BridgeDomainConfig::Global::~Global()
{
}

bool BridgeDomainConfig::Global::has_data() const
{
    return bd_state_notification_enabled.is_set
	|| bd_state_notification_rate.is_set
	|| (pbb !=  nullptr && pbb->has_data());
}

bool BridgeDomainConfig::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_state_notification_enabled.yfilter)
	|| ydk::is_set(bd_state_notification_rate.yfilter)
	|| (pbb !=  nullptr && pbb->has_operation());
}

std::string BridgeDomainConfig::Global::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:bridge-domain-config/" << get_segment_path();
    return path_buffer.str();
}

std::string BridgeDomainConfig::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_state_notification_enabled.is_set || is_set(bd_state_notification_enabled.yfilter)) leaf_name_data.push_back(bd_state_notification_enabled.get_name_leafdata());
    if (bd_state_notification_rate.is_set || is_set(bd_state_notification_rate.yfilter)) leaf_name_data.push_back(bd_state_notification_rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb")
    {
        if(pbb == nullptr)
        {
            pbb = std::make_shared<BridgeDomainConfig::Global::Pbb>();
        }
        return pbb;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(pbb != nullptr)
    {
        children["pbb"] = pbb;
    }

    return children;
}

void BridgeDomainConfig::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-state-notification-enabled")
    {
        bd_state_notification_enabled = value;
        bd_state_notification_enabled.value_namespace = name_space;
        bd_state_notification_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-state-notification-rate")
    {
        bd_state_notification_rate = value;
        bd_state_notification_rate.value_namespace = name_space;
        bd_state_notification_rate.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-state-notification-enabled")
    {
        bd_state_notification_enabled.yfilter = yfilter;
    }
    if(value_path == "bd-state-notification-rate")
    {
        bd_state_notification_rate.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb" || name == "bd-state-notification-enabled" || name == "bd-state-notification-rate")
        return true;
    return false;
}

BridgeDomainConfig::Global::Pbb::Pbb()
    :
    backbone_src_mac{YType::str, "backbone-src-mac"}
{

    yang_name = "pbb"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = false;
}

BridgeDomainConfig::Global::Pbb::~Pbb()
{
}

bool BridgeDomainConfig::Global::Pbb::has_data() const
{
    return backbone_src_mac.is_set;
}

bool BridgeDomainConfig::Global::Pbb::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backbone_src_mac.yfilter);
}

std::string BridgeDomainConfig::Global::Pbb::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:bridge-domain-config/global/" << get_segment_path();
    return path_buffer.str();
}

std::string BridgeDomainConfig::Global::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainConfig::Global::Pbb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backbone_src_mac.is_set || is_set(backbone_src_mac.yfilter)) leaf_name_data.push_back(backbone_src_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainConfig::Global::Pbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainConfig::Global::Pbb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainConfig::Global::Pbb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backbone-src-mac")
    {
        backbone_src_mac = value;
        backbone_src_mac.value_namespace = name_space;
        backbone_src_mac.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainConfig::Global::Pbb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backbone-src-mac")
    {
        backbone_src_mac.yfilter = yfilter;
    }
}

bool BridgeDomainConfig::Global::Pbb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backbone-src-mac")
        return true;
    return false;
}

BridgeDomainState::BridgeDomainState()
    :
    bridge_domains(std::make_shared<BridgeDomainState::BridgeDomains>())
	,module_capabilities(std::make_shared<BridgeDomainState::ModuleCapabilities>())
	,system_capabilities(std::make_shared<BridgeDomainState::SystemCapabilities>())
{
    bridge_domains->parent = this;
    module_capabilities->parent = this;
    system_capabilities->parent = this;

    yang_name = "bridge-domain-state"; yang_parent_name = "cisco-bridge-domain"; is_top_level_class = true; has_list_ancestor = false;
}

BridgeDomainState::~BridgeDomainState()
{
}

bool BridgeDomainState::has_data() const
{
    for (std::size_t index=0; index<mac_table.size(); index++)
    {
        if(mac_table[index]->has_data())
            return true;
    }
    return (bridge_domains !=  nullptr && bridge_domains->has_data())
	|| (module_capabilities !=  nullptr && module_capabilities->has_data())
	|| (system_capabilities !=  nullptr && system_capabilities->has_data());
}

bool BridgeDomainState::has_operation() const
{
    for (std::size_t index=0; index<mac_table.size(); index++)
    {
        if(mac_table[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bridge_domains !=  nullptr && bridge_domains->has_operation())
	|| (module_capabilities !=  nullptr && module_capabilities->has_operation())
	|| (system_capabilities !=  nullptr && system_capabilities->has_operation());
}

std::string BridgeDomainState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:bridge-domain-state";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainState::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domains")
    {
        if(bridge_domains == nullptr)
        {
            bridge_domains = std::make_shared<BridgeDomainState::BridgeDomains>();
        }
        return bridge_domains;
    }

    if(child_yang_name == "mac-table")
    {
        for(auto const & c : mac_table)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeDomainState::MacTable>();
        c->parent = this;
        mac_table.push_back(c);
        return c;
    }

    if(child_yang_name == "module-capabilities")
    {
        if(module_capabilities == nullptr)
        {
            module_capabilities = std::make_shared<BridgeDomainState::ModuleCapabilities>();
        }
        return module_capabilities;
    }

    if(child_yang_name == "system-capabilities")
    {
        if(system_capabilities == nullptr)
        {
            system_capabilities = std::make_shared<BridgeDomainState::SystemCapabilities>();
        }
        return system_capabilities;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bridge_domains != nullptr)
    {
        children["bridge-domains"] = bridge_domains;
    }

    for (auto const & c : mac_table)
    {
        children[c->get_segment_path()] = c;
    }

    if(module_capabilities != nullptr)
    {
        children["module-capabilities"] = module_capabilities;
    }

    if(system_capabilities != nullptr)
    {
        children["system-capabilities"] = system_capabilities;
    }

    return children;
}

void BridgeDomainState::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BridgeDomainState::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> BridgeDomainState::clone_ptr() const
{
    return std::make_shared<BridgeDomainState>();
}

std::string BridgeDomainState::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string BridgeDomainState::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function BridgeDomainState::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> BridgeDomainState::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool BridgeDomainState::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domains" || name == "mac-table" || name == "module-capabilities" || name == "system-capabilities")
        return true;
    return false;
}

BridgeDomainState::BridgeDomains::BridgeDomains()
{

    yang_name = "bridge-domains"; yang_parent_name = "bridge-domain-state"; is_top_level_class = false; has_list_ancestor = false;
}

BridgeDomainState::BridgeDomains::~BridgeDomains()
{
}

bool BridgeDomainState::BridgeDomains::has_data() const
{
    for (std::size_t index=0; index<bridge_domain.size(); index++)
    {
        if(bridge_domain[index]->has_data())
            return true;
    }
    return false;
}

bool BridgeDomainState::BridgeDomains::has_operation() const
{
    for (std::size_t index=0; index<bridge_domain.size(); index++)
    {
        if(bridge_domain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BridgeDomainState::BridgeDomains::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:bridge-domain-state/" << get_segment_path();
    return path_buffer.str();
}

std::string BridgeDomainState::BridgeDomains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domains";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainState::BridgeDomains::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainState::BridgeDomains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domain")
    {
        for(auto const & c : bridge_domain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeDomainState::BridgeDomains::BridgeDomain>();
        c->parent = this;
        bridge_domain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainState::BridgeDomains::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bridge_domain)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BridgeDomainState::BridgeDomains::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BridgeDomainState::BridgeDomains::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BridgeDomainState::BridgeDomains::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain")
        return true;
    return false;
}

BridgeDomainState::BridgeDomains::BridgeDomain::BridgeDomain()
    :
    id{YType::str, "id"},
    bd_state{YType::enumeration, "bd-state"},
    create_time{YType::uint32, "create-time"},
    last_status_change{YType::uint32, "last-status-change"},
    mac_limit_reached{YType::boolean, "mac-limit-reached"},
    p2mp_pw_disabled{YType::boolean, "p2mp-pw-disabled"}
    	,
    members(std::make_shared<BridgeDomainState::BridgeDomains::BridgeDomain::Members>())
{
    members->parent = this;

    yang_name = "bridge-domain"; yang_parent_name = "bridge-domains"; is_top_level_class = false; has_list_ancestor = false;
}

BridgeDomainState::BridgeDomains::BridgeDomain::~BridgeDomain()
{
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::has_data() const
{
    return id.is_set
	|| bd_state.is_set
	|| create_time.is_set
	|| last_status_change.is_set
	|| mac_limit_reached.is_set
	|| p2mp_pw_disabled.is_set
	|| (members !=  nullptr && members->has_data());
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(bd_state.yfilter)
	|| ydk::is_set(create_time.yfilter)
	|| ydk::is_set(last_status_change.yfilter)
	|| ydk::is_set(mac_limit_reached.yfilter)
	|| ydk::is_set(p2mp_pw_disabled.yfilter)
	|| (members !=  nullptr && members->has_operation());
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:bridge-domain-state/bridge-domains/" << get_segment_path();
    return path_buffer.str();
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainState::BridgeDomains::BridgeDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (bd_state.is_set || is_set(bd_state.yfilter)) leaf_name_data.push_back(bd_state.get_name_leafdata());
    if (create_time.is_set || is_set(create_time.yfilter)) leaf_name_data.push_back(create_time.get_name_leafdata());
    if (last_status_change.is_set || is_set(last_status_change.yfilter)) leaf_name_data.push_back(last_status_change.get_name_leafdata());
    if (mac_limit_reached.is_set || is_set(mac_limit_reached.yfilter)) leaf_name_data.push_back(mac_limit_reached.get_name_leafdata());
    if (p2mp_pw_disabled.is_set || is_set(p2mp_pw_disabled.yfilter)) leaf_name_data.push_back(p2mp_pw_disabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainState::BridgeDomains::BridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "members")
    {
        if(members == nullptr)
        {
            members = std::make_shared<BridgeDomainState::BridgeDomains::BridgeDomain::Members>();
        }
        return members;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainState::BridgeDomains::BridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(members != nullptr)
    {
        children["members"] = members;
    }

    return children;
}

void BridgeDomainState::BridgeDomains::BridgeDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-state")
    {
        bd_state = value;
        bd_state.value_namespace = name_space;
        bd_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create-time")
    {
        create_time = value;
        create_time.value_namespace = name_space;
        create_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-status-change")
    {
        last_status_change = value;
        last_status_change.value_namespace = name_space;
        last_status_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-reached")
    {
        mac_limit_reached = value;
        mac_limit_reached.value_namespace = name_space;
        mac_limit_reached.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-pw-disabled")
    {
        p2mp_pw_disabled = value;
        p2mp_pw_disabled.value_namespace = name_space;
        p2mp_pw_disabled.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainState::BridgeDomains::BridgeDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "bd-state")
    {
        bd_state.yfilter = yfilter;
    }
    if(value_path == "create-time")
    {
        create_time.yfilter = yfilter;
    }
    if(value_path == "last-status-change")
    {
        last_status_change.yfilter = yfilter;
    }
    if(value_path == "mac-limit-reached")
    {
        mac_limit_reached.yfilter = yfilter;
    }
    if(value_path == "p2mp-pw-disabled")
    {
        p2mp_pw_disabled.yfilter = yfilter;
    }
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "members" || name == "id" || name == "bd-state" || name == "create-time" || name == "last-status-change" || name == "mac-limit-reached" || name == "p2mp-pw-disabled")
        return true;
    return false;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::Members()
{

    yang_name = "members"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::~Members()
{
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::has_data() const
{
    for (std::size_t index=0; index<ac_member.size(); index++)
    {
        if(ac_member[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<access_pw_member.size(); index++)
    {
        if(access_pw_member[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vfi_member.size(); index++)
    {
        if(vfi_member[index]->has_data())
            return true;
    }
    return false;
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::has_operation() const
{
    for (std::size_t index=0; index<ac_member.size(); index++)
    {
        if(ac_member[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<access_pw_member.size(); index++)
    {
        if(access_pw_member[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vfi_member.size(); index++)
    {
        if(vfi_member[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainState::BridgeDomains::BridgeDomain::Members::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainState::BridgeDomains::BridgeDomain::Members::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac-member")
    {
        for(auto const & c : ac_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember>();
        c->parent = this;
        ac_member.push_back(c);
        return c;
    }

    if(child_yang_name == "access-pw-member")
    {
        for(auto const & c : access_pw_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember>();
        c->parent = this;
        access_pw_member.push_back(c);
        return c;
    }

    if(child_yang_name == "vfi-member")
    {
        for(auto const & c : vfi_member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember>();
        c->parent = this;
        vfi_member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainState::BridgeDomains::BridgeDomain::Members::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ac_member)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : access_pw_member)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vfi_member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac-member" || name == "access-pw-member" || name == "vfi-member")
        return true;
    return false;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::AcMember()
    :
    interface{YType::str, "interface"},
    static_mac_count{YType::uint32, "static-mac-count"}
    	,
    dai_stats(std::make_shared<BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats>())
	,ipsg_stats(std::make_shared<BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats>())
	,storm_control(std::make_shared<BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl>())
{
    dai_stats->parent = this;
    ipsg_stats->parent = this;
    storm_control->parent = this;

    yang_name = "ac-member"; yang_parent_name = "members"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::~AcMember()
{
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::has_data() const
{
    return interface.is_set
	|| static_mac_count.is_set
	|| (dai_stats !=  nullptr && dai_stats->has_data())
	|| (ipsg_stats !=  nullptr && ipsg_stats->has_data())
	|| (storm_control !=  nullptr && storm_control->has_data());
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(static_mac_count.yfilter)
	|| (dai_stats !=  nullptr && dai_stats->has_operation())
	|| (ipsg_stats !=  nullptr && ipsg_stats->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac-member" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (static_mac_count.is_set || is_set(static_mac_count.yfilter)) leaf_name_data.push_back(static_mac_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dai-stats")
    {
        if(dai_stats == nullptr)
        {
            dai_stats = std::make_shared<BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats>();
        }
        return dai_stats;
    }

    if(child_yang_name == "ipsg-stats")
    {
        if(ipsg_stats == nullptr)
        {
            ipsg_stats = std::make_shared<BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats>();
        }
        return ipsg_stats;
    }

    if(child_yang_name == "storm-control")
    {
        if(storm_control == nullptr)
        {
            storm_control = std::make_shared<BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl>();
        }
        return storm_control;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dai_stats != nullptr)
    {
        children["dai-stats"] = dai_stats;
    }

    if(ipsg_stats != nullptr)
    {
        children["ipsg-stats"] = ipsg_stats;
    }

    if(storm_control != nullptr)
    {
        children["storm-control"] = storm_control;
    }

    return children;
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static-mac-count")
    {
        static_mac_count = value;
        static_mac_count.value_namespace = name_space;
        static_mac_count.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "static-mac-count")
    {
        static_mac_count.yfilter = yfilter;
    }
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dai-stats" || name == "ipsg-stats" || name == "storm-control" || name == "interface" || name == "static-mac-count")
        return true;
    return false;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats::DaiStats()
    :
    byte_drops{YType::uint64, "byte-drops"},
    packet_drops{YType::uint64, "packet-drops"}
{

    yang_name = "dai-stats"; yang_parent_name = "ac-member"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats::~DaiStats()
{
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats::has_data() const
{
    return byte_drops.is_set
	|| packet_drops.is_set;
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_drops.yfilter)
	|| ydk::is_set(packet_drops.yfilter);
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_drops.is_set || is_set(byte_drops.yfilter)) leaf_name_data.push_back(byte_drops.get_name_leafdata());
    if (packet_drops.is_set || is_set(packet_drops.yfilter)) leaf_name_data.push_back(packet_drops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-drops")
    {
        byte_drops = value;
        byte_drops.value_namespace = name_space;
        byte_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-drops")
    {
        packet_drops = value;
        packet_drops.value_namespace = name_space;
        packet_drops.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-drops")
    {
        byte_drops.yfilter = yfilter;
    }
    if(value_path == "packet-drops")
    {
        packet_drops.yfilter = yfilter;
    }
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-drops" || name == "packet-drops")
        return true;
    return false;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats::IpsgStats()
    :
    byte_drops{YType::uint64, "byte-drops"},
    packet_drops{YType::uint64, "packet-drops"}
{

    yang_name = "ipsg-stats"; yang_parent_name = "ac-member"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats::~IpsgStats()
{
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats::has_data() const
{
    return byte_drops.is_set
	|| packet_drops.is_set;
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(byte_drops.yfilter)
	|| ydk::is_set(packet_drops.yfilter);
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_drops.is_set || is_set(byte_drops.yfilter)) leaf_name_data.push_back(byte_drops.get_name_leafdata());
    if (packet_drops.is_set || is_set(packet_drops.yfilter)) leaf_name_data.push_back(packet_drops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "byte-drops")
    {
        byte_drops = value;
        byte_drops.value_namespace = name_space;
        byte_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-drops")
    {
        packet_drops = value;
        packet_drops.value_namespace = name_space;
        packet_drops.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "byte-drops")
    {
        byte_drops.yfilter = yfilter;
    }
    if(value_path == "packet-drops")
    {
        packet_drops.yfilter = yfilter;
    }
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "byte-drops" || name == "packet-drops")
        return true;
    return false;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::StormControl()
{

    yang_name = "storm-control"; yang_parent_name = "ac-member"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::~StormControl()
{
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::has_data() const
{
    for (std::size_t index=0; index<drop_counter.size(); index++)
    {
        if(drop_counter[index]->has_data())
            return true;
    }
    return false;
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::has_operation() const
{
    for (std::size_t index=0; index<drop_counter.size(); index++)
    {
        if(drop_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drop-counter")
    {
        for(auto const & c : drop_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter>();
        c->parent = this;
        drop_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : drop_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-counter")
        return true;
    return false;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter::DropCounter()
    :
    traffic_class{YType::enumeration, "traffic-class"},
    octate_drops{YType::uint64, "octate-drops"},
    packet_drops{YType::uint64, "packet-drops"}
{

    yang_name = "drop-counter"; yang_parent_name = "storm-control"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter::~DropCounter()
{
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter::has_data() const
{
    return traffic_class.is_set
	|| octate_drops.is_set
	|| packet_drops.is_set;
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(octate_drops.yfilter)
	|| ydk::is_set(packet_drops.yfilter);
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-counter" <<"[traffic-class='" <<traffic_class <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (octate_drops.is_set || is_set(octate_drops.yfilter)) leaf_name_data.push_back(octate_drops.get_name_leafdata());
    if (packet_drops.is_set || is_set(packet_drops.yfilter)) leaf_name_data.push_back(packet_drops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-class")
    {
        traffic_class = value;
        traffic_class.value_namespace = name_space;
        traffic_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "octate-drops")
    {
        octate_drops = value;
        octate_drops.value_namespace = name_space;
        octate_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-drops")
    {
        packet_drops = value;
        packet_drops.value_namespace = name_space;
        packet_drops.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "octate-drops")
    {
        octate_drops.yfilter = yfilter;
    }
    if(value_path == "packet-drops")
    {
        packet_drops.yfilter = yfilter;
    }
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-class" || name == "octate-drops" || name == "packet-drops")
        return true;
    return false;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwMember()
    :
    vc_peer_address{YType::str, "vc-peer-address"},
    vc_id{YType::str, "vc-id"}
    	,
    flooding(std::make_shared<BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding>())
{
    flooding->parent = this;

    yang_name = "access-pw-member"; yang_parent_name = "members"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::~AccessPwMember()
{
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::has_data() const
{
    return vc_peer_address.is_set
	|| vc_id.is_set
	|| (flooding !=  nullptr && flooding->has_data());
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vc_peer_address.yfilter)
	|| ydk::is_set(vc_id.yfilter)
	|| (flooding !=  nullptr && flooding->has_operation());
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-pw-member" <<"[vc-peer-address='" <<vc_peer_address <<"']" <<"[vc-id='" <<vc_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vc_peer_address.is_set || is_set(vc_peer_address.yfilter)) leaf_name_data.push_back(vc_peer_address.get_name_leafdata());
    if (vc_id.is_set || is_set(vc_id.yfilter)) leaf_name_data.push_back(vc_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flooding")
    {
        if(flooding == nullptr)
        {
            flooding = std::make_shared<BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding>();
        }
        return flooding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flooding != nullptr)
    {
        children["flooding"] = flooding;
    }

    return children;
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vc-peer-address")
    {
        vc_peer_address = value;
        vc_peer_address.value_namespace = name_space;
        vc_peer_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vc-id")
    {
        vc_id = value;
        vc_id.value_namespace = name_space;
        vc_id.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vc-peer-address")
    {
        vc_peer_address.yfilter = yfilter;
    }
    if(value_path == "vc-id")
    {
        vc_id.yfilter = yfilter;
    }
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooding" || name == "vc-peer-address" || name == "vc-id")
        return true;
    return false;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Flooding()
{

    yang_name = "flooding"; yang_parent_name = "access-pw-member"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::~Flooding()
{
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::has_data() const
{
    for (std::size_t index=0; index<status.size(); index++)
    {
        if(status[index]->has_data())
            return true;
    }
    return false;
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::has_operation() const
{
    for (std::size_t index=0; index<status.size(); index++)
    {
        if(status[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status")
    {
        for(auto const & c : status)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status>();
        c->parent = this;
        status.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : status)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status::Status()
    :
    traffic_class{YType::enumeration, "traffic-class"},
    enabled{YType::boolean, "enabled"}
{

    yang_name = "status"; yang_parent_name = "flooding"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status::~Status()
{
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status::has_data() const
{
    return traffic_class.is_set
	|| enabled.is_set;
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status" <<"[traffic-class='" <<traffic_class <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-class")
    {
        traffic_class = value;
        traffic_class.value_namespace = name_space;
        traffic_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-class" || name == "enabled")
        return true;
    return false;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::VfiMember()
    :
    interface{YType::str, "interface"}
    	,
    flooding(std::make_shared<BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding>())
{
    flooding->parent = this;

    yang_name = "vfi-member"; yang_parent_name = "members"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::~VfiMember()
{
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::has_data() const
{
    return interface.is_set
	|| (flooding !=  nullptr && flooding->has_data());
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| (flooding !=  nullptr && flooding->has_operation());
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi-member" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flooding")
    {
        if(flooding == nullptr)
        {
            flooding = std::make_shared<BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding>();
        }
        return flooding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(flooding != nullptr)
    {
        children["flooding"] = flooding;
    }

    return children;
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flooding" || name == "interface")
        return true;
    return false;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Flooding()
{

    yang_name = "flooding"; yang_parent_name = "vfi-member"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::~Flooding()
{
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::has_data() const
{
    for (std::size_t index=0; index<status.size(); index++)
    {
        if(status[index]->has_data())
            return true;
    }
    return false;
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::has_operation() const
{
    for (std::size_t index=0; index<status.size(); index++)
    {
        if(status[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status")
    {
        for(auto const & c : status)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status>();
        c->parent = this;
        status.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : status)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status::Status()
    :
    traffic_class{YType::enumeration, "traffic-class"},
    enabled{YType::boolean, "enabled"}
{

    yang_name = "status"; yang_parent_name = "flooding"; is_top_level_class = false; has_list_ancestor = true;
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status::~Status()
{
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status::has_data() const
{
    return traffic_class.is_set
	|| enabled.is_set;
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(traffic_class.yfilter)
	|| ydk::is_set(enabled.yfilter);
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status" <<"[traffic-class='" <<traffic_class <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_class.is_set || is_set(traffic_class.yfilter)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.yfilter)) leaf_name_data.push_back(enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "traffic-class")
    {
        traffic_class = value;
        traffic_class.value_namespace = name_space;
        traffic_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enabled")
    {
        enabled = value;
        enabled.value_namespace = name_space;
        enabled.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "traffic-class")
    {
        traffic_class.yfilter = yfilter;
    }
    if(value_path == "enabled")
    {
        enabled.yfilter = yfilter;
    }
}

bool BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "traffic-class" || name == "enabled")
        return true;
    return false;
}

BridgeDomainState::MacTable::MacTable()
    :
    bd_id{YType::str, "bd-id"},
    mac_address{YType::str, "mac-address"},
    age{YType::uint32, "age"},
    interface{YType::str, "interface"},
    location{YType::str, "location"},
    mac_type{YType::enumeration, "mac-type"},
    ntfy_mac{YType::boolean, "ntfy-mac"},
    secure_mac{YType::boolean, "secure-mac"}
{

    yang_name = "mac-table"; yang_parent_name = "bridge-domain-state"; is_top_level_class = false; has_list_ancestor = false;
}

BridgeDomainState::MacTable::~MacTable()
{
}

bool BridgeDomainState::MacTable::has_data() const
{
    return bd_id.is_set
	|| mac_address.is_set
	|| age.is_set
	|| interface.is_set
	|| location.is_set
	|| mac_type.is_set
	|| ntfy_mac.is_set
	|| secure_mac.is_set;
}

bool BridgeDomainState::MacTable::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_id.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(age.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(location.yfilter)
	|| ydk::is_set(mac_type.yfilter)
	|| ydk::is_set(ntfy_mac.yfilter)
	|| ydk::is_set(secure_mac.yfilter);
}

std::string BridgeDomainState::MacTable::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:bridge-domain-state/" << get_segment_path();
    return path_buffer.str();
}

std::string BridgeDomainState::MacTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-table" <<"[bd-id='" <<bd_id <<"']" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainState::MacTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_id.is_set || is_set(bd_id.yfilter)) leaf_name_data.push_back(bd_id.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (age.is_set || is_set(age.yfilter)) leaf_name_data.push_back(age.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (location.is_set || is_set(location.yfilter)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mac_type.is_set || is_set(mac_type.yfilter)) leaf_name_data.push_back(mac_type.get_name_leafdata());
    if (ntfy_mac.is_set || is_set(ntfy_mac.yfilter)) leaf_name_data.push_back(ntfy_mac.get_name_leafdata());
    if (secure_mac.is_set || is_set(secure_mac.yfilter)) leaf_name_data.push_back(secure_mac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainState::MacTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainState::MacTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainState::MacTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-id")
    {
        bd_id = value;
        bd_id.value_namespace = name_space;
        bd_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "age")
    {
        age = value;
        age.value_namespace = name_space;
        age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "location")
    {
        location = value;
        location.value_namespace = name_space;
        location.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-type")
    {
        mac_type = value;
        mac_type.value_namespace = name_space;
        mac_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ntfy-mac")
    {
        ntfy_mac = value;
        ntfy_mac.value_namespace = name_space;
        ntfy_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secure-mac")
    {
        secure_mac = value;
        secure_mac.value_namespace = name_space;
        secure_mac.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainState::MacTable::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-id")
    {
        bd_id.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "age")
    {
        age.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "location")
    {
        location.yfilter = yfilter;
    }
    if(value_path == "mac-type")
    {
        mac_type.yfilter = yfilter;
    }
    if(value_path == "ntfy-mac")
    {
        ntfy_mac.yfilter = yfilter;
    }
    if(value_path == "secure-mac")
    {
        secure_mac.yfilter = yfilter;
    }
}

bool BridgeDomainState::MacTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-id" || name == "mac-address" || name == "age" || name == "interface" || name == "location" || name == "mac-type" || name == "ntfy-mac" || name == "secure-mac")
        return true;
    return false;
}

BridgeDomainState::ModuleCapabilities::ModuleCapabilities()
{

    yang_name = "module-capabilities"; yang_parent_name = "bridge-domain-state"; is_top_level_class = false; has_list_ancestor = false;
}

BridgeDomainState::ModuleCapabilities::~ModuleCapabilities()
{
}

bool BridgeDomainState::ModuleCapabilities::has_data() const
{
    for (std::size_t index=0; index<modules.size(); index++)
    {
        if(modules[index]->has_data())
            return true;
    }
    return false;
}

bool BridgeDomainState::ModuleCapabilities::has_operation() const
{
    for (std::size_t index=0; index<modules.size(); index++)
    {
        if(modules[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BridgeDomainState::ModuleCapabilities::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:bridge-domain-state/" << get_segment_path();
    return path_buffer.str();
}

std::string BridgeDomainState::ModuleCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-capabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainState::ModuleCapabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainState::ModuleCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "modules")
    {
        for(auto const & c : modules)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BridgeDomainState::ModuleCapabilities::Modules>();
        c->parent = this;
        modules.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainState::ModuleCapabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : modules)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BridgeDomainState::ModuleCapabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BridgeDomainState::ModuleCapabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BridgeDomainState::ModuleCapabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "modules")
        return true;
    return false;
}

BridgeDomainState::ModuleCapabilities::Modules::Modules()
    :
    name{YType::str, "name"},
    max_ac_per_bd{YType::uint32, "max-ac-per-bd"},
    max_bd{YType::uint32, "max-bd"},
    max_mac_per_bd{YType::uint32, "max-mac-per-bd"},
    max_pdd_edge_bd{YType::uint32, "max-pdd-edge-bd"},
    max_pw_per_bd{YType::uint32, "max-pw-per-bd"},
    max_sh_group_per_bd{YType::uint32, "max-sh-group-per-bd"},
    max_vfi_per_bd{YType::uint32, "max-vfi-per-bd"}
{

    yang_name = "modules"; yang_parent_name = "module-capabilities"; is_top_level_class = false; has_list_ancestor = false;
}

BridgeDomainState::ModuleCapabilities::Modules::~Modules()
{
}

bool BridgeDomainState::ModuleCapabilities::Modules::has_data() const
{
    return name.is_set
	|| max_ac_per_bd.is_set
	|| max_bd.is_set
	|| max_mac_per_bd.is_set
	|| max_pdd_edge_bd.is_set
	|| max_pw_per_bd.is_set
	|| max_sh_group_per_bd.is_set
	|| max_vfi_per_bd.is_set;
}

bool BridgeDomainState::ModuleCapabilities::Modules::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(max_ac_per_bd.yfilter)
	|| ydk::is_set(max_bd.yfilter)
	|| ydk::is_set(max_mac_per_bd.yfilter)
	|| ydk::is_set(max_pdd_edge_bd.yfilter)
	|| ydk::is_set(max_pw_per_bd.yfilter)
	|| ydk::is_set(max_sh_group_per_bd.yfilter)
	|| ydk::is_set(max_vfi_per_bd.yfilter);
}

std::string BridgeDomainState::ModuleCapabilities::Modules::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:bridge-domain-state/module-capabilities/" << get_segment_path();
    return path_buffer.str();
}

std::string BridgeDomainState::ModuleCapabilities::Modules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modules" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainState::ModuleCapabilities::Modules::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (max_ac_per_bd.is_set || is_set(max_ac_per_bd.yfilter)) leaf_name_data.push_back(max_ac_per_bd.get_name_leafdata());
    if (max_bd.is_set || is_set(max_bd.yfilter)) leaf_name_data.push_back(max_bd.get_name_leafdata());
    if (max_mac_per_bd.is_set || is_set(max_mac_per_bd.yfilter)) leaf_name_data.push_back(max_mac_per_bd.get_name_leafdata());
    if (max_pdd_edge_bd.is_set || is_set(max_pdd_edge_bd.yfilter)) leaf_name_data.push_back(max_pdd_edge_bd.get_name_leafdata());
    if (max_pw_per_bd.is_set || is_set(max_pw_per_bd.yfilter)) leaf_name_data.push_back(max_pw_per_bd.get_name_leafdata());
    if (max_sh_group_per_bd.is_set || is_set(max_sh_group_per_bd.yfilter)) leaf_name_data.push_back(max_sh_group_per_bd.get_name_leafdata());
    if (max_vfi_per_bd.is_set || is_set(max_vfi_per_bd.yfilter)) leaf_name_data.push_back(max_vfi_per_bd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainState::ModuleCapabilities::Modules::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainState::ModuleCapabilities::Modules::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainState::ModuleCapabilities::Modules::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-ac-per-bd")
    {
        max_ac_per_bd = value;
        max_ac_per_bd.value_namespace = name_space;
        max_ac_per_bd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bd")
    {
        max_bd = value;
        max_bd.value_namespace = name_space;
        max_bd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-mac-per-bd")
    {
        max_mac_per_bd = value;
        max_mac_per_bd.value_namespace = name_space;
        max_mac_per_bd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pdd-edge-bd")
    {
        max_pdd_edge_bd = value;
        max_pdd_edge_bd.value_namespace = name_space;
        max_pdd_edge_bd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pw-per-bd")
    {
        max_pw_per_bd = value;
        max_pw_per_bd.value_namespace = name_space;
        max_pw_per_bd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-sh-group-per-bd")
    {
        max_sh_group_per_bd = value;
        max_sh_group_per_bd.value_namespace = name_space;
        max_sh_group_per_bd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-vfi-per-bd")
    {
        max_vfi_per_bd = value;
        max_vfi_per_bd.value_namespace = name_space;
        max_vfi_per_bd.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainState::ModuleCapabilities::Modules::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "max-ac-per-bd")
    {
        max_ac_per_bd.yfilter = yfilter;
    }
    if(value_path == "max-bd")
    {
        max_bd.yfilter = yfilter;
    }
    if(value_path == "max-mac-per-bd")
    {
        max_mac_per_bd.yfilter = yfilter;
    }
    if(value_path == "max-pdd-edge-bd")
    {
        max_pdd_edge_bd.yfilter = yfilter;
    }
    if(value_path == "max-pw-per-bd")
    {
        max_pw_per_bd.yfilter = yfilter;
    }
    if(value_path == "max-sh-group-per-bd")
    {
        max_sh_group_per_bd.yfilter = yfilter;
    }
    if(value_path == "max-vfi-per-bd")
    {
        max_vfi_per_bd.yfilter = yfilter;
    }
}

bool BridgeDomainState::ModuleCapabilities::Modules::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "max-ac-per-bd" || name == "max-bd" || name == "max-mac-per-bd" || name == "max-pdd-edge-bd" || name == "max-pw-per-bd" || name == "max-sh-group-per-bd" || name == "max-vfi-per-bd")
        return true;
    return false;
}

BridgeDomainState::SystemCapabilities::SystemCapabilities()
    :
    max_ac_per_bd{YType::uint32, "max-ac-per-bd"},
    max_bd{YType::uint32, "max-bd"},
    max_interflex_if_per_bd{YType::uint32, "max-interflex-if-per-bd"},
    max_pw_per_bd{YType::uint32, "max-pw-per-bd"},
    max_sh_group_per_bd{YType::uint32, "max-sh-group-per-bd"},
    max_vfi_per_bd{YType::uint32, "max-vfi-per-bd"}
{

    yang_name = "system-capabilities"; yang_parent_name = "bridge-domain-state"; is_top_level_class = false; has_list_ancestor = false;
}

BridgeDomainState::SystemCapabilities::~SystemCapabilities()
{
}

bool BridgeDomainState::SystemCapabilities::has_data() const
{
    return max_ac_per_bd.is_set
	|| max_bd.is_set
	|| max_interflex_if_per_bd.is_set
	|| max_pw_per_bd.is_set
	|| max_sh_group_per_bd.is_set
	|| max_vfi_per_bd.is_set;
}

bool BridgeDomainState::SystemCapabilities::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_ac_per_bd.yfilter)
	|| ydk::is_set(max_bd.yfilter)
	|| ydk::is_set(max_interflex_if_per_bd.yfilter)
	|| ydk::is_set(max_pw_per_bd.yfilter)
	|| ydk::is_set(max_sh_group_per_bd.yfilter)
	|| ydk::is_set(max_vfi_per_bd.yfilter);
}

std::string BridgeDomainState::SystemCapabilities::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:bridge-domain-state/" << get_segment_path();
    return path_buffer.str();
}

std::string BridgeDomainState::SystemCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-capabilities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BridgeDomainState::SystemCapabilities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_ac_per_bd.is_set || is_set(max_ac_per_bd.yfilter)) leaf_name_data.push_back(max_ac_per_bd.get_name_leafdata());
    if (max_bd.is_set || is_set(max_bd.yfilter)) leaf_name_data.push_back(max_bd.get_name_leafdata());
    if (max_interflex_if_per_bd.is_set || is_set(max_interflex_if_per_bd.yfilter)) leaf_name_data.push_back(max_interflex_if_per_bd.get_name_leafdata());
    if (max_pw_per_bd.is_set || is_set(max_pw_per_bd.yfilter)) leaf_name_data.push_back(max_pw_per_bd.get_name_leafdata());
    if (max_sh_group_per_bd.is_set || is_set(max_sh_group_per_bd.yfilter)) leaf_name_data.push_back(max_sh_group_per_bd.get_name_leafdata());
    if (max_vfi_per_bd.is_set || is_set(max_vfi_per_bd.yfilter)) leaf_name_data.push_back(max_vfi_per_bd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> BridgeDomainState::SystemCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BridgeDomainState::SystemCapabilities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BridgeDomainState::SystemCapabilities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-ac-per-bd")
    {
        max_ac_per_bd = value;
        max_ac_per_bd.value_namespace = name_space;
        max_ac_per_bd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-bd")
    {
        max_bd = value;
        max_bd.value_namespace = name_space;
        max_bd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-interflex-if-per-bd")
    {
        max_interflex_if_per_bd = value;
        max_interflex_if_per_bd.value_namespace = name_space;
        max_interflex_if_per_bd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-pw-per-bd")
    {
        max_pw_per_bd = value;
        max_pw_per_bd.value_namespace = name_space;
        max_pw_per_bd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-sh-group-per-bd")
    {
        max_sh_group_per_bd = value;
        max_sh_group_per_bd.value_namespace = name_space;
        max_sh_group_per_bd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-vfi-per-bd")
    {
        max_vfi_per_bd = value;
        max_vfi_per_bd.value_namespace = name_space;
        max_vfi_per_bd.value_namespace_prefix = name_space_prefix;
    }
}

void BridgeDomainState::SystemCapabilities::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-ac-per-bd")
    {
        max_ac_per_bd.yfilter = yfilter;
    }
    if(value_path == "max-bd")
    {
        max_bd.yfilter = yfilter;
    }
    if(value_path == "max-interflex-if-per-bd")
    {
        max_interflex_if_per_bd.yfilter = yfilter;
    }
    if(value_path == "max-pw-per-bd")
    {
        max_pw_per_bd.yfilter = yfilter;
    }
    if(value_path == "max-sh-group-per-bd")
    {
        max_sh_group_per_bd.yfilter = yfilter;
    }
    if(value_path == "max-vfi-per-bd")
    {
        max_vfi_per_bd.yfilter = yfilter;
    }
}

bool BridgeDomainState::SystemCapabilities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-ac-per-bd" || name == "max-bd" || name == "max-interflex-if-per-bd" || name == "max-pw-per-bd" || name == "max-sh-group-per-bd" || name == "max-vfi-per-bd")
        return true;
    return false;
}

ClearBridgeDomain::ClearBridgeDomain()
    :
    input(std::make_shared<ClearBridgeDomain::Input>())
	,output(std::make_shared<ClearBridgeDomain::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "clear-bridge-domain"; yang_parent_name = "cisco-bridge-domain"; is_top_level_class = true; has_list_ancestor = false;
}

ClearBridgeDomain::~ClearBridgeDomain()
{
}

bool ClearBridgeDomain::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool ClearBridgeDomain::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string ClearBridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:clear-bridge-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBridgeDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBridgeDomain::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<ClearBridgeDomain::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void ClearBridgeDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearBridgeDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearBridgeDomain::clone_ptr() const
{
    return std::make_shared<ClearBridgeDomain>();
}

std::string ClearBridgeDomain::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string ClearBridgeDomain::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function ClearBridgeDomain::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearBridgeDomain::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool ClearBridgeDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

ClearBridgeDomain::Input::Input()
    :
    all{YType::empty, "all"},
    bd_id{YType::str, "bd-id"},
    bg_id{YType::str, "bg-id"}
{

    yang_name = "input"; yang_parent_name = "clear-bridge-domain"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBridgeDomain::Input::~Input()
{
}

bool ClearBridgeDomain::Input::has_data() const
{
    return all.is_set
	|| bd_id.is_set
	|| bg_id.is_set;
}

bool ClearBridgeDomain::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(bd_id.yfilter)
	|| ydk::is_set(bg_id.yfilter);
}

std::string ClearBridgeDomain::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:clear-bridge-domain/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBridgeDomain::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBridgeDomain::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (bd_id.is_set || is_set(bd_id.yfilter)) leaf_name_data.push_back(bd_id.get_name_leafdata());
    if (bg_id.is_set || is_set(bg_id.yfilter)) leaf_name_data.push_back(bg_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBridgeDomain::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBridgeDomain::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBridgeDomain::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-id")
    {
        bd_id = value;
        bd_id.value_namespace = name_space;
        bd_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bg-id")
    {
        bg_id = value;
        bg_id.value_namespace = name_space;
        bg_id.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBridgeDomain::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "bd-id")
    {
        bd_id.yfilter = yfilter;
    }
    if(value_path == "bg-id")
    {
        bg_id.yfilter = yfilter;
    }
}

bool ClearBridgeDomain::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "bd-id" || name == "bg-id")
        return true;
    return false;
}

ClearBridgeDomain::Output::Output()
    :
    errstr{YType::str, "errstr"}
{

    yang_name = "output"; yang_parent_name = "clear-bridge-domain"; is_top_level_class = false; has_list_ancestor = false;
}

ClearBridgeDomain::Output::~Output()
{
}

bool ClearBridgeDomain::Output::has_data() const
{
    return errstr.is_set;
}

bool ClearBridgeDomain::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(errstr.yfilter);
}

std::string ClearBridgeDomain::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:clear-bridge-domain/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearBridgeDomain::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearBridgeDomain::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (errstr.is_set || is_set(errstr.yfilter)) leaf_name_data.push_back(errstr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearBridgeDomain::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBridgeDomain::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBridgeDomain::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "errstr")
    {
        errstr = value;
        errstr.value_namespace = name_space;
        errstr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearBridgeDomain::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "errstr")
    {
        errstr.yfilter = yfilter;
    }
}

bool ClearBridgeDomain::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "errstr")
        return true;
    return false;
}

ClearMacAddress::ClearMacAddress()
    :
    input(std::make_shared<ClearMacAddress::Input>())
	,output(std::make_shared<ClearMacAddress::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "clear-mac-address"; yang_parent_name = "cisco-bridge-domain"; is_top_level_class = true; has_list_ancestor = false;
}

ClearMacAddress::~ClearMacAddress()
{
}

bool ClearMacAddress::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool ClearMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string ClearMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:clear-mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> ClearMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearMacAddress::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<ClearMacAddress::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void ClearMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void ClearMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> ClearMacAddress::clone_ptr() const
{
    return std::make_shared<ClearMacAddress>();
}

std::string ClearMacAddress::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string ClearMacAddress::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function ClearMacAddress::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> ClearMacAddress::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool ClearMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

ClearMacAddress::Input::Input()
    :
    interface{YType::str, "interface"},
    mac_address{YType::str, "mac-address"}
    	,
    bridge_domain(std::make_shared<ClearMacAddress::Input::BridgeDomain>())
{
    bridge_domain->parent = this;

    yang_name = "input"; yang_parent_name = "clear-mac-address"; is_top_level_class = false; has_list_ancestor = false;
}

ClearMacAddress::Input::~Input()
{
}

bool ClearMacAddress::Input::has_data() const
{
    return interface.is_set
	|| mac_address.is_set
	|| (bridge_domain !=  nullptr && bridge_domain->has_data());
}

bool ClearMacAddress::Input::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| (bridge_domain !=  nullptr && bridge_domain->has_operation());
}

std::string ClearMacAddress::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:clear-mac-address/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearMacAddress::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearMacAddress::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearMacAddress::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domain")
    {
        if(bridge_domain == nullptr)
        {
            bridge_domain = std::make_shared<ClearMacAddress::Input::BridgeDomain>();
        }
        return bridge_domain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearMacAddress::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bridge_domain != nullptr)
    {
        children["bridge-domain"] = bridge_domain;
    }

    return children;
}

void ClearMacAddress::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void ClearMacAddress::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool ClearMacAddress::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain" || name == "interface" || name == "mac-address")
        return true;
    return false;
}

ClearMacAddress::Input::BridgeDomain::BridgeDomain()
    :
    bd_id{YType::str, "bd-id"},
    bg_id{YType::str, "bg-id"}
{

    yang_name = "bridge-domain"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false;
}

ClearMacAddress::Input::BridgeDomain::~BridgeDomain()
{
}

bool ClearMacAddress::Input::BridgeDomain::has_data() const
{
    return bd_id.is_set
	|| bg_id.is_set;
}

bool ClearMacAddress::Input::BridgeDomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_id.yfilter)
	|| ydk::is_set(bg_id.yfilter);
}

std::string ClearMacAddress::Input::BridgeDomain::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:clear-mac-address/input/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearMacAddress::Input::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearMacAddress::Input::BridgeDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_id.is_set || is_set(bd_id.yfilter)) leaf_name_data.push_back(bd_id.get_name_leafdata());
    if (bg_id.is_set || is_set(bg_id.yfilter)) leaf_name_data.push_back(bg_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearMacAddress::Input::BridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearMacAddress::Input::BridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearMacAddress::Input::BridgeDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-id")
    {
        bd_id = value;
        bd_id.value_namespace = name_space;
        bd_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bg-id")
    {
        bg_id = value;
        bg_id.value_namespace = name_space;
        bg_id.value_namespace_prefix = name_space_prefix;
    }
}

void ClearMacAddress::Input::BridgeDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-id")
    {
        bd_id.yfilter = yfilter;
    }
    if(value_path == "bg-id")
    {
        bg_id.yfilter = yfilter;
    }
}

bool ClearMacAddress::Input::BridgeDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-id" || name == "bg-id")
        return true;
    return false;
}

ClearMacAddress::Output::Output()
    :
    errstr{YType::str, "errstr"}
{

    yang_name = "output"; yang_parent_name = "clear-mac-address"; is_top_level_class = false; has_list_ancestor = false;
}

ClearMacAddress::Output::~Output()
{
}

bool ClearMacAddress::Output::has_data() const
{
    return errstr.is_set;
}

bool ClearMacAddress::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(errstr.yfilter);
}

std::string ClearMacAddress::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:clear-mac-address/" << get_segment_path();
    return path_buffer.str();
}

std::string ClearMacAddress::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > ClearMacAddress::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (errstr.is_set || is_set(errstr.yfilter)) leaf_name_data.push_back(errstr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> ClearMacAddress::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearMacAddress::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearMacAddress::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "errstr")
    {
        errstr = value;
        errstr.value_namespace = name_space;
        errstr.value_namespace_prefix = name_space_prefix;
    }
}

void ClearMacAddress::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "errstr")
    {
        errstr.yfilter = yfilter;
    }
}

bool ClearMacAddress::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "errstr")
        return true;
    return false;
}

CreateParameterizedBridgeDomains::CreateParameterizedBridgeDomains()
    :
    input(std::make_shared<CreateParameterizedBridgeDomains::Input>())
	,output(std::make_shared<CreateParameterizedBridgeDomains::Output>())
{
    input->parent = this;
    output->parent = this;

    yang_name = "create-parameterized-bridge-domains"; yang_parent_name = "cisco-bridge-domain"; is_top_level_class = true; has_list_ancestor = false;
}

CreateParameterizedBridgeDomains::~CreateParameterizedBridgeDomains()
{
}

bool CreateParameterizedBridgeDomains::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool CreateParameterizedBridgeDomains::has_operation() const
{
    return is_set(yfilter)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string CreateParameterizedBridgeDomains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:create-parameterized-bridge-domains";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CreateParameterizedBridgeDomains::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> CreateParameterizedBridgeDomains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CreateParameterizedBridgeDomains::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<CreateParameterizedBridgeDomains::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CreateParameterizedBridgeDomains::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(input != nullptr)
    {
        children["input"] = input;
    }

    if(output != nullptr)
    {
        children["output"] = output;
    }

    return children;
}

void CreateParameterizedBridgeDomains::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void CreateParameterizedBridgeDomains::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> CreateParameterizedBridgeDomains::clone_ptr() const
{
    return std::make_shared<CreateParameterizedBridgeDomains>();
}

std::string CreateParameterizedBridgeDomains::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CreateParameterizedBridgeDomains::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CreateParameterizedBridgeDomains::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> CreateParameterizedBridgeDomains::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool CreateParameterizedBridgeDomains::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

CreateParameterizedBridgeDomains::Input::Input()
    :
    parameter{YType::enumeration, "parameter"}
{

    yang_name = "input"; yang_parent_name = "create-parameterized-bridge-domains"; is_top_level_class = false; has_list_ancestor = false;
}

CreateParameterizedBridgeDomains::Input::~Input()
{
}

bool CreateParameterizedBridgeDomains::Input::has_data() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_data())
            return true;
    }
    return parameter.is_set;
}

bool CreateParameterizedBridgeDomains::Input::has_operation() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(parameter.yfilter);
}

std::string CreateParameterizedBridgeDomains::Input::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:create-parameterized-bridge-domains/" << get_segment_path();
    return path_buffer.str();
}

std::string CreateParameterizedBridgeDomains::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CreateParameterizedBridgeDomains::Input::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parameter.is_set || is_set(parameter.yfilter)) leaf_name_data.push_back(parameter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CreateParameterizedBridgeDomains::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member")
    {
        for(auto const & c : member)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<CreateParameterizedBridgeDomains::Input::Member>();
        c->parent = this;
        member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CreateParameterizedBridgeDomains::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CreateParameterizedBridgeDomains::Input::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "parameter")
    {
        parameter = value;
        parameter.value_namespace = name_space;
        parameter.value_namespace_prefix = name_space_prefix;
    }
}

void CreateParameterizedBridgeDomains::Input::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "parameter")
    {
        parameter.yfilter = yfilter;
    }
}

bool CreateParameterizedBridgeDomains::Input::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member" || name == "parameter")
        return true;
    return false;
}

CreateParameterizedBridgeDomains::Input::Member::Member()
    :
    interface{YType::str, "interface"}
{

    yang_name = "member"; yang_parent_name = "input"; is_top_level_class = false; has_list_ancestor = false;
}

CreateParameterizedBridgeDomains::Input::Member::~Member()
{
}

bool CreateParameterizedBridgeDomains::Input::Member::has_data() const
{
    return interface.is_set;
}

bool CreateParameterizedBridgeDomains::Input::Member::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter);
}

std::string CreateParameterizedBridgeDomains::Input::Member::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:create-parameterized-bridge-domains/input/" << get_segment_path();
    return path_buffer.str();
}

std::string CreateParameterizedBridgeDomains::Input::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CreateParameterizedBridgeDomains::Input::Member::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CreateParameterizedBridgeDomains::Input::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CreateParameterizedBridgeDomains::Input::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CreateParameterizedBridgeDomains::Input::Member::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
}

void CreateParameterizedBridgeDomains::Input::Member::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
}

bool CreateParameterizedBridgeDomains::Input::Member::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

CreateParameterizedBridgeDomains::Output::Output()
    :
    errstr{YType::str, "errstr"}
{

    yang_name = "output"; yang_parent_name = "create-parameterized-bridge-domains"; is_top_level_class = false; has_list_ancestor = false;
}

CreateParameterizedBridgeDomains::Output::~Output()
{
}

bool CreateParameterizedBridgeDomains::Output::has_data() const
{
    return errstr.is_set;
}

bool CreateParameterizedBridgeDomains::Output::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(errstr.yfilter);
}

std::string CreateParameterizedBridgeDomains::Output::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:create-parameterized-bridge-domains/" << get_segment_path();
    return path_buffer.str();
}

std::string CreateParameterizedBridgeDomains::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > CreateParameterizedBridgeDomains::Output::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (errstr.is_set || is_set(errstr.yfilter)) leaf_name_data.push_back(errstr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> CreateParameterizedBridgeDomains::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CreateParameterizedBridgeDomains::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CreateParameterizedBridgeDomains::Output::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "errstr")
    {
        errstr = value;
        errstr.value_namespace = name_space;
        errstr.value_namespace_prefix = name_space_prefix;
    }
}

void CreateParameterizedBridgeDomains::Output::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "errstr")
    {
        errstr.yfilter = yfilter;
    }
}

bool CreateParameterizedBridgeDomains::Output::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "errstr")
        return true;
    return false;
}

const Enum::YLeaf BridgeDomainStateType::up {0, "up"};
const Enum::YLeaf BridgeDomainStateType::down {1, "down"};
const Enum::YLeaf BridgeDomainStateType::admin_down {2, "admin-down"};

const Enum::YLeaf BridgeDomainConfig::BridgeDomains::BridgeDomain::FloodingMode::convergence_optimized {0, "convergence-optimized"};
const Enum::YLeaf BridgeDomainConfig::BridgeDomains::BridgeDomain::FloodingMode::resilience_optimized {1, "resilience-optimized"};

const Enum::YLeaf BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::Unit::bps {0, "bps"};
const Enum::YLeaf BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::Unit::kbps {1, "kbps"};
const Enum::YLeaf BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::Unit::pps {2, "pps"};

const Enum::YLeaf BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::Unit::bps {0, "bps"};
const Enum::YLeaf BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::Unit::kbps {1, "kbps"};
const Enum::YLeaf BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::Unit::pps {2, "pps"};

const Enum::YLeaf BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::Unit::bps {0, "bps"};
const Enum::YLeaf BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::Unit::kbps {1, "kbps"};
const Enum::YLeaf BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::Unit::pps {2, "pps"};

const Enum::YLeaf BridgeDomainState::MacTable::MacType::static_ {0, "static"};
const Enum::YLeaf BridgeDomainState::MacTable::MacType::dynamic {1, "dynamic"};

const Enum::YLeaf CreateParameterizedBridgeDomains::Input::Parameter::vlan {0, "vlan"};


}
}

