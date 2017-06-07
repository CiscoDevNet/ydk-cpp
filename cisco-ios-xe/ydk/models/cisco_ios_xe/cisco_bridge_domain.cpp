
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "cisco_bridge_domain.hpp"

namespace ydk {
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

    yang_name = "bridge-domain-config"; yang_parent_name = "cisco-bridge-domain";
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
    return is_set(operation)
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

const EntityPath BridgeDomainConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::set_value(const std::string & value_path, std::string value)
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

BridgeDomainConfig::Global::Global()
    :
    bd_state_notification_enabled{YType::boolean, "bd-state-notification-enabled"},
    bd_state_notification_rate{YType::uint32, "bd-state-notification-rate"}
    	,
    pbb(std::make_shared<BridgeDomainConfig::Global::Pbb>())
{
    pbb->parent = this;

    yang_name = "global"; yang_parent_name = "bridge-domain-config";
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
    return is_set(operation)
	|| is_set(bd_state_notification_enabled.operation)
	|| is_set(bd_state_notification_rate.operation)
	|| (pbb !=  nullptr && pbb->has_operation());
}

std::string BridgeDomainConfig::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-bridge-domain:bridge-domain-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_state_notification_enabled.is_set || is_set(bd_state_notification_enabled.operation)) leaf_name_data.push_back(bd_state_notification_enabled.get_name_leafdata());
    if (bd_state_notification_rate.is_set || is_set(bd_state_notification_rate.operation)) leaf_name_data.push_back(bd_state_notification_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-state-notification-enabled")
    {
        bd_state_notification_enabled = value;
    }
    if(value_path == "bd-state-notification-rate")
    {
        bd_state_notification_rate = value;
    }
}

BridgeDomainConfig::Global::Pbb::Pbb()
    :
    backbone_src_mac{YType::str, "backbone-src-mac"}
{
    yang_name = "pbb"; yang_parent_name = "global";
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
    return is_set(operation)
	|| is_set(backbone_src_mac.operation);
}

std::string BridgeDomainConfig::Global::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::Global::Pbb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-bridge-domain:bridge-domain-config/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backbone_src_mac.is_set || is_set(backbone_src_mac.operation)) leaf_name_data.push_back(backbone_src_mac.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::Global::Pbb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backbone-src-mac")
    {
        backbone_src_mac = value;
    }
}

BridgeDomainConfig::BridgeGroups::BridgeGroups()
{
    yang_name = "bridge-groups"; yang_parent_name = "bridge-domain-config";
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
    return is_set(operation);
}

std::string BridgeDomainConfig::BridgeGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-groups";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-bridge-domain:bridge-domain-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeGroups::set_value(const std::string & value_path, std::string value)
{
}

BridgeDomainConfig::BridgeGroups::BridgeGroup::BridgeGroup()
    :
    name{YType::str, "name"}
{
    yang_name = "bridge-group"; yang_parent_name = "bridge-groups";
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
    return is_set(operation)
	|| is_set(name.operation);
}

std::string BridgeDomainConfig::BridgeGroups::BridgeGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-group" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeGroups::BridgeGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-bridge-domain:bridge-domain-config/bridge-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeGroups::BridgeGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomains()
{
    yang_name = "bridge-domains"; yang_parent_name = "bridge-domain-config";
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
    return is_set(operation);
}

std::string BridgeDomainConfig::BridgeDomains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domains";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-bridge-domain:bridge-domain-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::set_value(const std::string & value_path, std::string value)
{
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

    yang_name = "bridge-domain"; yang_parent_name = "bridge-domains";
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
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(bd_status_change_notification.operation)
	|| is_set(bridge_group.operation)
	|| is_set(enabled.operation)
	|| is_set(flooding_mode.operation)
	|| is_set(mtu.operation)
	|| (dhcp_ipv4_snooping !=  nullptr && dhcp_ipv4_snooping->has_operation())
	|| (dynamic_arp_inspection !=  nullptr && dynamic_arp_inspection->has_operation())
	|| (igmp_snooping !=  nullptr && igmp_snooping->has_operation())
	|| (ip_source_guard !=  nullptr && ip_source_guard->has_operation())
	|| (mac !=  nullptr && mac->has_operation())
	|| (members !=  nullptr && members->has_operation())
	|| (mld_snooping !=  nullptr && mld_snooping->has_operation())
	|| (storm_control !=  nullptr && storm_control->has_operation());
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-bridge-domain:bridge-domain-config/bridge-domains/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (bd_status_change_notification.is_set || is_set(bd_status_change_notification.operation)) leaf_name_data.push_back(bd_status_change_notification.get_name_leafdata());
    if (bridge_group.is_set || is_set(bridge_group.operation)) leaf_name_data.push_back(bridge_group.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (flooding_mode.is_set || is_set(flooding_mode.operation)) leaf_name_data.push_back(flooding_mode.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "bd-status-change-notification")
    {
        bd_status_change_notification = value;
    }
    if(value_path == "bridge-group")
    {
        bridge_group = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "flooding-mode")
    {
        flooding_mode = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::Members()
    :
    access_pw_member(std::make_shared<BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember>())
{
    access_pw_member->parent = this;

    yang_name = "members"; yang_parent_name = "bridge-domain";
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
    return is_set(operation)
	|| (access_pw_member !=  nullptr && access_pw_member->has_operation());
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Members' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::set_value(const std::string & value_path, std::string value)
{
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

    yang_name = "ac-member"; yang_parent_name = "members";
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
    return is_set(operation)
	|| is_set(interface.operation)
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

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcMember' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup::SplitHorizonGroup()
    :
    id{YType::uint16, "id"}
{
    yang_name = "split-horizon-group"; yang_parent_name = "ac-member";
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
    return is_set(operation)
	|| is_set(id.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon-group";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SplitHorizonGroup' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::SplitHorizonGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
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

    yang_name = "mac"; yang_parent_name = "ac-member";
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
    return is_set(operation)
	|| is_set(learning_enabled.operation)
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

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learning_enabled.is_set || is_set(learning_enabled.operation)) leaf_name_data.push_back(learning_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "learning-enabled")
    {
        learning_enabled = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit::Limit()
    :
    action{YType::enumeration, "action"},
    maximum{YType::uint32, "maximum"},
    notification{YType::identityref, "notification"}
{
    yang_name = "limit"; yang_parent_name = "mac";
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
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(maximum.operation)
	|| is_set(notification.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Limit' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (notification.is_set || is_set(notification.operation)) leaf_name_data.push_back(notification.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "notification")
    {
        notification = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging::Aging()
    :
    time{YType::uint32, "time"},
    type{YType::enumeration, "type"}
{
    yang_name = "aging"; yang_parent_name = "mac";
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
    return is_set(operation)
	|| is_set(time.operation)
	|| is_set(type.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aging' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Aging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time")
    {
        time = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown::PortDown()
    :
    flush{YType::boolean, "flush"}
{
    yang_name = "port-down"; yang_parent_name = "mac";
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
    return is_set(operation)
	|| is_set(flush.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-down";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortDown' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flush.is_set || is_set(flush.operation)) leaf_name_data.push_back(flush.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::PortDown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flush")
    {
        flush = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure::Secure()
    :
    action{YType::enumeration, "action"},
    enabled{YType::boolean, "enabled"},
    logging{YType::boolean, "logging"}
{
    yang_name = "secure"; yang_parent_name = "mac";
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
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(enabled.operation)
	|| is_set(logging.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secure";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Secure' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Mac::Secure::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "logging")
    {
        logging = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping::IgmpSnooping()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "igmp-snooping"; yang_parent_name = "ac-member";
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
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp-snooping";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgmpSnooping' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IgmpSnooping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping::MldSnooping()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "mld-snooping"; yang_parent_name = "ac-member";
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
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld-snooping";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MldSnooping' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::MldSnooping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping::DhcpIpv4Snooping()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "dhcp-ipv4-snooping"; yang_parent_name = "ac-member";
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
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-ipv4-snooping";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcpIpv4Snooping' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DhcpIpv4Snooping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding::Flooding()
    :
    disabled{YType::empty, "disabled"},
    disabled_unknown_unicast{YType::empty, "disabled-unknown-unicast"}
{
    yang_name = "flooding"; yang_parent_name = "ac-member";
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
    return is_set(operation)
	|| is_set(disabled.operation)
	|| is_set(disabled_unknown_unicast.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flooding' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled.is_set || is_set(disabled.operation)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (disabled_unknown_unicast.is_set || is_set(disabled_unknown_unicast.operation)) leaf_name_data.push_back(disabled_unknown_unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::Flooding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disabled")
    {
        disabled = value;
    }
    if(value_path == "disabled-unknown-unicast")
    {
        disabled_unknown_unicast = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::StormControl()
    :
    action{YType::identityref, "action"}
{
    yang_name = "storm-control"; yang_parent_name = "ac-member";
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
    return is_set(operation)
	|| is_set(action.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StormControl' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::Thresholds()
    :
    traffic_class{YType::enumeration, "traffic-class"},
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "thresholds"; yang_parent_name = "storm-control";
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
    return is_set(operation)
	|| is_set(traffic_class.operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresholds" <<"[traffic-class='" <<traffic_class <<"']";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Thresholds' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_class.is_set || is_set(traffic_class.operation)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "traffic-class")
    {
        traffic_class = value;
    }
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::DynamicArpInspection()
    :
    enable{YType::boolean, "enable"},
    logging{YType::boolean, "logging"}
    	,
    address_validation(nullptr) // presence node
{
    yang_name = "dynamic-arp-inspection"; yang_parent_name = "ac-member";
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
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(logging.operation)
	|| (address_validation !=  nullptr && address_validation->has_operation());
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-arp-inspection";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DynamicArpInspection' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "logging")
    {
        logging = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation::AddressValidation()
    :
    dst_mac{YType::empty, "dst-mac"},
    ipv4{YType::empty, "ipv4"},
    src_mac{YType::empty, "src-mac"}
{
    yang_name = "address-validation"; yang_parent_name = "dynamic-arp-inspection";
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
    return is_set(operation)
	|| is_set(dst_mac.operation)
	|| is_set(ipv4.operation)
	|| is_set(src_mac.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-validation";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressValidation' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_mac.is_set || is_set(dst_mac.operation)) leaf_name_data.push_back(dst_mac.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (src_mac.is_set || is_set(src_mac.operation)) leaf_name_data.push_back(src_mac.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::DynamicArpInspection::AddressValidation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dst-mac")
    {
        dst_mac = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "src-mac")
    {
        src_mac = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard::IpSourceGuard()
    :
    enable{YType::boolean, "enable"},
    logging{YType::boolean, "logging"}
{
    yang_name = "ip-source-guard"; yang_parent_name = "ac-member";
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
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(logging.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-source-guard";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSourceGuard' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::IpSourceGuard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "logging")
    {
        logging = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember::VfiMember()
    :
    interface{YType::str, "interface"}
{
    yang_name = "vfi-member"; yang_parent_name = "members";
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
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi-member" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VfiMember' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::VfiMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwMember()
{
    yang_name = "access-pw-member"; yang_parent_name = "members";
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
    return is_set(operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-pw-member";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessPwMember' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::set_value(const std::string & value_path, std::string value)
{
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember::AccessPwIfMember()
    :
    interface{YType::str, "interface"}
{
    yang_name = "access-pw-if-member"; yang_parent_name = "access-pw-member";
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
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-pw-if-member" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessPwIfMember' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwIfMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
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

    yang_name = "pw-neighbor-spec"; yang_parent_name = "access-pw-member";
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
    return is_set(operation)
	|| is_set(neighbor_ip_address.operation)
	|| is_set(vc_id.operation)
	|| is_set(encap_type.operation)
	|| is_set(pw_class_template.operation)
	|| is_set(source_ipv6.operation)
	|| is_set(tag_impose_vlan.operation)
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

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PwNeighborSpec' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.operation)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (vc_id.is_set || is_set(vc_id.operation)) leaf_name_data.push_back(vc_id.get_name_leafdata());
    if (encap_type.is_set || is_set(encap_type.operation)) leaf_name_data.push_back(encap_type.get_name_leafdata());
    if (pw_class_template.is_set || is_set(pw_class_template.operation)) leaf_name_data.push_back(pw_class_template.get_name_leafdata());
    if (source_ipv6.is_set || is_set(source_ipv6.operation)) leaf_name_data.push_back(source_ipv6.get_name_leafdata());
    if (tag_impose_vlan.is_set || is_set(tag_impose_vlan.operation)) leaf_name_data.push_back(tag_impose_vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
    }
    if(value_path == "vc-id")
    {
        vc_id = value;
    }
    if(value_path == "encap-type")
    {
        encap_type = value;
    }
    if(value_path == "pw-class-template")
    {
        pw_class_template = value;
    }
    if(value_path == "source-ipv6")
    {
        source_ipv6 = value;
    }
    if(value_path == "tag-impose-vlan")
    {
        tag_impose_vlan = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel::StaticLabel()
    :
    local_label{YType::uint32, "local-label"},
    remote_label{YType::uint32, "remote-label"}
{
    yang_name = "static-label"; yang_parent_name = "pw-neighbor-spec";
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
    return is_set(operation)
	|| is_set(local_label.operation)
	|| is_set(remote_label.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-label";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticLabel' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.operation)) leaf_name_data.push_back(remote_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StaticLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup::SplitHorizonGroup()
    :
    id{YType::uint16, "id"}
{
    yang_name = "split-horizon-group"; yang_parent_name = "pw-neighbor-spec";
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
    return is_set(operation)
	|| is_set(id.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon-group";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SplitHorizonGroup' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::SplitHorizonGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
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

    yang_name = "mac"; yang_parent_name = "pw-neighbor-spec";
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
    return is_set(operation)
	|| is_set(learning_enabled.operation)
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

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learning_enabled.is_set || is_set(learning_enabled.operation)) leaf_name_data.push_back(learning_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "learning-enabled")
    {
        learning_enabled = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit::Limit()
    :
    action{YType::enumeration, "action"},
    maximum{YType::uint32, "maximum"},
    notification{YType::identityref, "notification"}
{
    yang_name = "limit"; yang_parent_name = "mac";
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
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(maximum.operation)
	|| is_set(notification.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Limit' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (notification.is_set || is_set(notification.operation)) leaf_name_data.push_back(notification.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "notification")
    {
        notification = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging::Aging()
    :
    time{YType::uint32, "time"},
    type{YType::enumeration, "type"}
{
    yang_name = "aging"; yang_parent_name = "mac";
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
    return is_set(operation)
	|| is_set(time.operation)
	|| is_set(type.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aging' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Aging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time")
    {
        time = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown::PortDown()
    :
    flush{YType::boolean, "flush"}
{
    yang_name = "port-down"; yang_parent_name = "mac";
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
    return is_set(operation)
	|| is_set(flush.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-down";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortDown' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flush.is_set || is_set(flush.operation)) leaf_name_data.push_back(flush.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::PortDown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flush")
    {
        flush = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure::Secure()
    :
    action{YType::enumeration, "action"},
    enabled{YType::boolean, "enabled"},
    logging{YType::boolean, "logging"}
{
    yang_name = "secure"; yang_parent_name = "mac";
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
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(enabled.operation)
	|| is_set(logging.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secure";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Secure' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());
    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Mac::Secure::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
    if(value_path == "logging")
    {
        logging = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping::IgmpSnooping()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "igmp-snooping"; yang_parent_name = "pw-neighbor-spec";
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
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp-snooping";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgmpSnooping' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::IgmpSnooping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping::MldSnooping()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "mld-snooping"; yang_parent_name = "pw-neighbor-spec";
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
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld-snooping";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MldSnooping' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::MldSnooping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping::DhcpIpv4Snooping()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "dhcp-ipv4-snooping"; yang_parent_name = "pw-neighbor-spec";
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
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-ipv4-snooping";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcpIpv4Snooping' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::DhcpIpv4Snooping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding::Flooding()
    :
    disabled{YType::empty, "disabled"},
    disabled_unknown_unicast{YType::empty, "disabled-unknown-unicast"}
{
    yang_name = "flooding"; yang_parent_name = "pw-neighbor-spec";
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
    return is_set(operation)
	|| is_set(disabled.operation)
	|| is_set(disabled_unknown_unicast.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flooding' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled.is_set || is_set(disabled.operation)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (disabled_unknown_unicast.is_set || is_set(disabled_unknown_unicast.operation)) leaf_name_data.push_back(disabled_unknown_unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Flooding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disabled")
    {
        disabled = value;
    }
    if(value_path == "disabled-unknown-unicast")
    {
        disabled_unknown_unicast = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::StormControl()
    :
    action{YType::identityref, "action"}
{
    yang_name = "storm-control"; yang_parent_name = "pw-neighbor-spec";
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
    return is_set(operation)
	|| is_set(action.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StormControl' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::Thresholds()
    :
    traffic_class{YType::enumeration, "traffic-class"},
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "thresholds"; yang_parent_name = "storm-control";
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
    return is_set(operation)
	|| is_set(traffic_class.operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresholds" <<"[traffic-class='" <<traffic_class <<"']";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Thresholds' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_class.is_set || is_set(traffic_class.operation)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "traffic-class")
    {
        traffic_class = value;
    }
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup::Backup()
    :
    neighbor_ip_address{YType::str, "neighbor-ip-address"},
    pw_class_template{YType::str, "pw-class-template"},
    vc_id{YType::uint32, "vc-id"}
{
    yang_name = "backup"; yang_parent_name = "pw-neighbor-spec";
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
    return is_set(operation)
	|| is_set(neighbor_ip_address.operation)
	|| is_set(pw_class_template.operation)
	|| is_set(vc_id.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backup' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_ip_address.is_set || is_set(neighbor_ip_address.operation)) leaf_name_data.push_back(neighbor_ip_address.get_name_leafdata());
    if (pw_class_template.is_set || is_set(pw_class_template.operation)) leaf_name_data.push_back(pw_class_template.get_name_leafdata());
    if (vc_id.is_set || is_set(vc_id.operation)) leaf_name_data.push_back(vc_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::Backup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-ip-address")
    {
        neighbor_ip_address = value;
    }
    if(value_path == "pw-class-template")
    {
        pw_class_template = value;
    }
    if(value_path == "vc-id")
    {
        vc_id = value;
    }
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

    yang_name = "mac"; yang_parent_name = "bridge-domain";
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
    return is_set(operation)
	|| is_set(learning_enabled.operation)
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

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (learning_enabled.is_set || is_set(learning_enabled.operation)) leaf_name_data.push_back(learning_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "learning-enabled")
    {
        learning_enabled = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit::Limit()
    :
    action{YType::enumeration, "action"},
    maximum{YType::uint32, "maximum"},
    notification{YType::identityref, "notification"}
{
    yang_name = "limit"; yang_parent_name = "mac";
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
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(maximum.operation)
	|| is_set(notification.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Limit' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());
    if (notification.is_set || is_set(notification.operation)) leaf_name_data.push_back(notification.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
    if(value_path == "notification")
    {
        notification = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging::Aging()
    :
    time{YType::uint32, "time"},
    type{YType::enumeration, "type"}
{
    yang_name = "aging"; yang_parent_name = "mac";
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
    return is_set(operation)
	|| is_set(time.operation)
	|| is_set(type.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aging";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aging' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time.is_set || is_set(time.operation)) leaf_name_data.push_back(time.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Aging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "time")
    {
        time = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown::PortDown()
    :
    flush{YType::boolean, "flush"}
{
    yang_name = "port-down"; yang_parent_name = "mac";
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
    return is_set(operation)
	|| is_set(flush.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port-down";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortDown' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flush.is_set || is_set(flush.operation)) leaf_name_data.push_back(flush.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::PortDown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flush")
    {
        flush = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding::Flooding()
    :
    disabled{YType::empty, "disabled"},
    disabled_unknown_unicast{YType::empty, "disabled-unknown-unicast"}
{
    yang_name = "flooding"; yang_parent_name = "mac";
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
    return is_set(operation)
	|| is_set(disabled.operation)
	|| is_set(disabled_unknown_unicast.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flooding' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled.is_set || is_set(disabled.operation)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (disabled_unknown_unicast.is_set || is_set(disabled_unknown_unicast.operation)) leaf_name_data.push_back(disabled_unknown_unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Flooding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disabled")
    {
        disabled = value;
    }
    if(value_path == "disabled-unknown-unicast")
    {
        disabled_unknown_unicast = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure::Secure()
    :
    action{YType::enumeration, "action"},
    logging{YType::boolean, "logging"}
{
    yang_name = "secure"; yang_parent_name = "mac";
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
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(logging.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secure";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Secure' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Secure::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "logging")
    {
        logging = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::Static_()
{
    yang_name = "static"; yang_parent_name = "mac";
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
    return is_set(operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::set_value(const std::string & value_path, std::string value)
{
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses::MacAddresses()
    :
    mac_addr{YType::str, "mac-addr"},
    drop{YType::boolean, "drop"}
{
    yang_name = "mac-addresses"; yang_parent_name = "static";
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
    return is_set(operation)
	|| is_set(mac_addr.operation)
	|| is_set(drop.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-addresses" <<"[mac-addr='" <<mac_addr <<"']";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacAddresses' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_addr.is_set || is_set(mac_addr.operation)) leaf_name_data.push_back(mac_addr.get_name_leafdata());
    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::Mac::Static_::MacAddresses::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-addr")
    {
        mac_addr = value;
    }
    if(value_path == "drop")
    {
        drop = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::DynamicArpInspection()
    :
    logging{YType::boolean, "logging"}
    	,
    address_validation(nullptr) // presence node
{
    yang_name = "dynamic-arp-inspection"; yang_parent_name = "bridge-domain";
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
    return is_set(operation)
	|| is_set(logging.operation)
	|| (address_validation !=  nullptr && address_validation->has_operation());
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-arp-inspection";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DynamicArpInspection' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "logging")
    {
        logging = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation::AddressValidation()
    :
    dst_mac{YType::empty, "dst-mac"},
    ipv4{YType::empty, "ipv4"},
    src_mac{YType::empty, "src-mac"}
{
    yang_name = "address-validation"; yang_parent_name = "dynamic-arp-inspection";
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
    return is_set(operation)
	|| is_set(dst_mac.operation)
	|| is_set(ipv4.operation)
	|| is_set(src_mac.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-validation";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressValidation' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dst_mac.is_set || is_set(dst_mac.operation)) leaf_name_data.push_back(dst_mac.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (src_mac.is_set || is_set(src_mac.operation)) leaf_name_data.push_back(src_mac.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::DynamicArpInspection::AddressValidation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dst-mac")
    {
        dst_mac = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "src-mac")
    {
        src_mac = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard::IpSourceGuard()
    :
    logging{YType::boolean, "logging"}
{
    yang_name = "ip-source-guard"; yang_parent_name = "bridge-domain";
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
    return is_set(operation)
	|| is_set(logging.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-source-guard";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSourceGuard' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::IpSourceGuard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "logging")
    {
        logging = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::StormControl()
    :
    action{YType::identityref, "action"}
{
    yang_name = "storm-control"; yang_parent_name = "bridge-domain";
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
    return is_set(operation)
	|| is_set(action.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StormControl' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::Thresholds()
    :
    traffic_class{YType::enumeration, "traffic-class"},
    unit{YType::enumeration, "unit"},
    value_{YType::uint32, "value"}
{
    yang_name = "thresholds"; yang_parent_name = "storm-control";
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
    return is_set(operation)
	|| is_set(traffic_class.operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "thresholds" <<"[traffic-class='" <<traffic_class <<"']";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Thresholds' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_class.is_set || is_set(traffic_class.operation)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "traffic-class")
    {
        traffic_class = value;
    }
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping::IgmpSnooping()
    :
    disabled{YType::empty, "disabled"},
    profile_name{YType::str, "profile-name"}
{
    yang_name = "igmp-snooping"; yang_parent_name = "bridge-domain";
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
    return is_set(operation)
	|| is_set(disabled.operation)
	|| is_set(profile_name.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igmp-snooping";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgmpSnooping' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disabled.is_set || is_set(disabled.operation)) leaf_name_data.push_back(disabled.get_name_leafdata());
    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::IgmpSnooping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disabled")
    {
        disabled = value;
    }
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping::MldSnooping()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "mld-snooping"; yang_parent_name = "bridge-domain";
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
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mld-snooping";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MldSnooping' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::MldSnooping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
}

BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping::DhcpIpv4Snooping()
    :
    profile_name{YType::str, "profile-name"}
{
    yang_name = "dhcp-ipv4-snooping"; yang_parent_name = "bridge-domain";
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
    return is_set(operation)
	|| is_set(profile_name.operation);
}

std::string BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-ipv4-snooping";

    return path_buffer.str();

}

const EntityPath BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcpIpv4Snooping' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_name.is_set || is_set(profile_name.operation)) leaf_name_data.push_back(profile_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainConfig::BridgeDomains::BridgeDomain::DhcpIpv4Snooping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "profile-name")
    {
        profile_name = value;
    }
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

    yang_name = "bridge-domain-state"; yang_parent_name = "cisco-bridge-domain";
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
    return is_set(operation)
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

const EntityPath BridgeDomainState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainState::set_value(const std::string & value_path, std::string value)
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

BridgeDomainState::SystemCapabilities::SystemCapabilities()
    :
    max_ac_per_bd{YType::uint32, "max-ac-per-bd"},
    max_bd{YType::uint32, "max-bd"},
    max_interflex_if_per_bd{YType::uint32, "max-interflex-if-per-bd"},
    max_pw_per_bd{YType::uint32, "max-pw-per-bd"},
    max_sh_group_per_bd{YType::uint32, "max-sh-group-per-bd"},
    max_vfi_per_bd{YType::uint32, "max-vfi-per-bd"}
{
    yang_name = "system-capabilities"; yang_parent_name = "bridge-domain-state";
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
    return is_set(operation)
	|| is_set(max_ac_per_bd.operation)
	|| is_set(max_bd.operation)
	|| is_set(max_interflex_if_per_bd.operation)
	|| is_set(max_pw_per_bd.operation)
	|| is_set(max_sh_group_per_bd.operation)
	|| is_set(max_vfi_per_bd.operation);
}

std::string BridgeDomainState::SystemCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system-capabilities";

    return path_buffer.str();

}

const EntityPath BridgeDomainState::SystemCapabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-bridge-domain:bridge-domain-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_ac_per_bd.is_set || is_set(max_ac_per_bd.operation)) leaf_name_data.push_back(max_ac_per_bd.get_name_leafdata());
    if (max_bd.is_set || is_set(max_bd.operation)) leaf_name_data.push_back(max_bd.get_name_leafdata());
    if (max_interflex_if_per_bd.is_set || is_set(max_interflex_if_per_bd.operation)) leaf_name_data.push_back(max_interflex_if_per_bd.get_name_leafdata());
    if (max_pw_per_bd.is_set || is_set(max_pw_per_bd.operation)) leaf_name_data.push_back(max_pw_per_bd.get_name_leafdata());
    if (max_sh_group_per_bd.is_set || is_set(max_sh_group_per_bd.operation)) leaf_name_data.push_back(max_sh_group_per_bd.get_name_leafdata());
    if (max_vfi_per_bd.is_set || is_set(max_vfi_per_bd.operation)) leaf_name_data.push_back(max_vfi_per_bd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainState::SystemCapabilities::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-ac-per-bd")
    {
        max_ac_per_bd = value;
    }
    if(value_path == "max-bd")
    {
        max_bd = value;
    }
    if(value_path == "max-interflex-if-per-bd")
    {
        max_interflex_if_per_bd = value;
    }
    if(value_path == "max-pw-per-bd")
    {
        max_pw_per_bd = value;
    }
    if(value_path == "max-sh-group-per-bd")
    {
        max_sh_group_per_bd = value;
    }
    if(value_path == "max-vfi-per-bd")
    {
        max_vfi_per_bd = value;
    }
}

BridgeDomainState::ModuleCapabilities::ModuleCapabilities()
{
    yang_name = "module-capabilities"; yang_parent_name = "bridge-domain-state";
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
    return is_set(operation);
}

std::string BridgeDomainState::ModuleCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "module-capabilities";

    return path_buffer.str();

}

const EntityPath BridgeDomainState::ModuleCapabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-bridge-domain:bridge-domain-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainState::ModuleCapabilities::set_value(const std::string & value_path, std::string value)
{
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
    yang_name = "modules"; yang_parent_name = "module-capabilities";
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
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(max_ac_per_bd.operation)
	|| is_set(max_bd.operation)
	|| is_set(max_mac_per_bd.operation)
	|| is_set(max_pdd_edge_bd.operation)
	|| is_set(max_pw_per_bd.operation)
	|| is_set(max_sh_group_per_bd.operation)
	|| is_set(max_vfi_per_bd.operation);
}

std::string BridgeDomainState::ModuleCapabilities::Modules::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "modules" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath BridgeDomainState::ModuleCapabilities::Modules::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-bridge-domain:bridge-domain-state/module-capabilities/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (max_ac_per_bd.is_set || is_set(max_ac_per_bd.operation)) leaf_name_data.push_back(max_ac_per_bd.get_name_leafdata());
    if (max_bd.is_set || is_set(max_bd.operation)) leaf_name_data.push_back(max_bd.get_name_leafdata());
    if (max_mac_per_bd.is_set || is_set(max_mac_per_bd.operation)) leaf_name_data.push_back(max_mac_per_bd.get_name_leafdata());
    if (max_pdd_edge_bd.is_set || is_set(max_pdd_edge_bd.operation)) leaf_name_data.push_back(max_pdd_edge_bd.get_name_leafdata());
    if (max_pw_per_bd.is_set || is_set(max_pw_per_bd.operation)) leaf_name_data.push_back(max_pw_per_bd.get_name_leafdata());
    if (max_sh_group_per_bd.is_set || is_set(max_sh_group_per_bd.operation)) leaf_name_data.push_back(max_sh_group_per_bd.get_name_leafdata());
    if (max_vfi_per_bd.is_set || is_set(max_vfi_per_bd.operation)) leaf_name_data.push_back(max_vfi_per_bd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainState::ModuleCapabilities::Modules::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "max-ac-per-bd")
    {
        max_ac_per_bd = value;
    }
    if(value_path == "max-bd")
    {
        max_bd = value;
    }
    if(value_path == "max-mac-per-bd")
    {
        max_mac_per_bd = value;
    }
    if(value_path == "max-pdd-edge-bd")
    {
        max_pdd_edge_bd = value;
    }
    if(value_path == "max-pw-per-bd")
    {
        max_pw_per_bd = value;
    }
    if(value_path == "max-sh-group-per-bd")
    {
        max_sh_group_per_bd = value;
    }
    if(value_path == "max-vfi-per-bd")
    {
        max_vfi_per_bd = value;
    }
}

BridgeDomainState::BridgeDomains::BridgeDomains()
{
    yang_name = "bridge-domains"; yang_parent_name = "bridge-domain-state";
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
    return is_set(operation);
}

std::string BridgeDomainState::BridgeDomains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domains";

    return path_buffer.str();

}

const EntityPath BridgeDomainState::BridgeDomains::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-bridge-domain:bridge-domain-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainState::BridgeDomains::set_value(const std::string & value_path, std::string value)
{
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

    yang_name = "bridge-domain"; yang_parent_name = "bridge-domains";
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
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(bd_state.operation)
	|| is_set(create_time.operation)
	|| is_set(last_status_change.operation)
	|| is_set(mac_limit_reached.operation)
	|| is_set(p2mp_pw_disabled.operation)
	|| (members !=  nullptr && members->has_operation());
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath BridgeDomainState::BridgeDomains::BridgeDomain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-bridge-domain:bridge-domain-state/bridge-domains/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (bd_state.is_set || is_set(bd_state.operation)) leaf_name_data.push_back(bd_state.get_name_leafdata());
    if (create_time.is_set || is_set(create_time.operation)) leaf_name_data.push_back(create_time.get_name_leafdata());
    if (last_status_change.is_set || is_set(last_status_change.operation)) leaf_name_data.push_back(last_status_change.get_name_leafdata());
    if (mac_limit_reached.is_set || is_set(mac_limit_reached.operation)) leaf_name_data.push_back(mac_limit_reached.get_name_leafdata());
    if (p2mp_pw_disabled.is_set || is_set(p2mp_pw_disabled.operation)) leaf_name_data.push_back(p2mp_pw_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainState::BridgeDomains::BridgeDomain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "bd-state")
    {
        bd_state = value;
    }
    if(value_path == "create-time")
    {
        create_time = value;
    }
    if(value_path == "last-status-change")
    {
        last_status_change = value;
    }
    if(value_path == "mac-limit-reached")
    {
        mac_limit_reached = value;
    }
    if(value_path == "p2mp-pw-disabled")
    {
        p2mp_pw_disabled = value;
    }
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::Members()
{
    yang_name = "members"; yang_parent_name = "bridge-domain";
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
    return is_set(operation);
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "members";

    return path_buffer.str();

}

const EntityPath BridgeDomainState::BridgeDomains::BridgeDomain::Members::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Members' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::set_value(const std::string & value_path, std::string value)
{
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

    yang_name = "ac-member"; yang_parent_name = "members";
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
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(static_mac_count.operation)
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

const EntityPath BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcMember' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (static_mac_count.is_set || is_set(static_mac_count.operation)) leaf_name_data.push_back(static_mac_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "static-mac-count")
    {
        static_mac_count = value;
    }
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats::DaiStats()
    :
    byte_drops{YType::uint64, "byte-drops"},
    packet_drops{YType::uint64, "packet-drops"}
{
    yang_name = "dai-stats"; yang_parent_name = "ac-member";
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
    return is_set(operation)
	|| is_set(byte_drops.operation)
	|| is_set(packet_drops.operation);
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-stats";

    return path_buffer.str();

}

const EntityPath BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DaiStats' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_drops.is_set || is_set(byte_drops.operation)) leaf_name_data.push_back(byte_drops.get_name_leafdata());
    if (packet_drops.is_set || is_set(packet_drops.operation)) leaf_name_data.push_back(packet_drops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::DaiStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-drops")
    {
        byte_drops = value;
    }
    if(value_path == "packet-drops")
    {
        packet_drops = value;
    }
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats::IpsgStats()
    :
    byte_drops{YType::uint64, "byte-drops"},
    packet_drops{YType::uint64, "packet-drops"}
{
    yang_name = "ipsg-stats"; yang_parent_name = "ac-member";
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
    return is_set(operation)
	|| is_set(byte_drops.operation)
	|| is_set(packet_drops.operation);
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-stats";

    return path_buffer.str();

}

const EntityPath BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpsgStats' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (byte_drops.is_set || is_set(byte_drops.operation)) leaf_name_data.push_back(byte_drops.get_name_leafdata());
    if (packet_drops.is_set || is_set(packet_drops.operation)) leaf_name_data.push_back(packet_drops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::IpsgStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "byte-drops")
    {
        byte_drops = value;
    }
    if(value_path == "packet-drops")
    {
        packet_drops = value;
    }
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::StormControl()
{
    yang_name = "storm-control"; yang_parent_name = "ac-member";
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
    return is_set(operation);
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control";

    return path_buffer.str();

}

const EntityPath BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StormControl' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::set_value(const std::string & value_path, std::string value)
{
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter::DropCounter()
    :
    traffic_class{YType::enumeration, "traffic-class"},
    octate_drops{YType::uint64, "octate-drops"},
    packet_drops{YType::uint64, "packet-drops"}
{
    yang_name = "drop-counter"; yang_parent_name = "storm-control";
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
    return is_set(operation)
	|| is_set(traffic_class.operation)
	|| is_set(octate_drops.operation)
	|| is_set(packet_drops.operation);
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-counter" <<"[traffic-class='" <<traffic_class <<"']";

    return path_buffer.str();

}

const EntityPath BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DropCounter' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_class.is_set || is_set(traffic_class.operation)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (octate_drops.is_set || is_set(octate_drops.operation)) leaf_name_data.push_back(octate_drops.get_name_leafdata());
    if (packet_drops.is_set || is_set(packet_drops.operation)) leaf_name_data.push_back(packet_drops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::DropCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "traffic-class")
    {
        traffic_class = value;
    }
    if(value_path == "octate-drops")
    {
        octate_drops = value;
    }
    if(value_path == "packet-drops")
    {
        packet_drops = value;
    }
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::VfiMember()
    :
    interface{YType::str, "interface"}
    	,
    flooding(std::make_shared<BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding>())
{
    flooding->parent = this;

    yang_name = "vfi-member"; yang_parent_name = "members";
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
    return is_set(operation)
	|| is_set(interface.operation)
	|| (flooding !=  nullptr && flooding->has_operation());
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi-member" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VfiMember' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Flooding()
{
    yang_name = "flooding"; yang_parent_name = "vfi-member";
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
    return is_set(operation);
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";

    return path_buffer.str();

}

const EntityPath BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flooding' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::set_value(const std::string & value_path, std::string value)
{
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status::Status()
    :
    traffic_class{YType::enumeration, "traffic-class"},
    enabled{YType::boolean, "enabled"}
{
    yang_name = "status"; yang_parent_name = "flooding";
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
    return is_set(operation)
	|| is_set(traffic_class.operation)
	|| is_set(enabled.operation);
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status" <<"[traffic-class='" <<traffic_class <<"']";

    return path_buffer.str();

}

const EntityPath BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Status' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_class.is_set || is_set(traffic_class.operation)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::VfiMember::Flooding::Status::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "traffic-class")
    {
        traffic_class = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::AccessPwMember()
    :
    vc_peer_address{YType::str, "vc-peer-address"},
    vc_id{YType::str, "vc-id"}
    	,
    flooding(std::make_shared<BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding>())
{
    flooding->parent = this;

    yang_name = "access-pw-member"; yang_parent_name = "members";
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
    return is_set(operation)
	|| is_set(vc_peer_address.operation)
	|| is_set(vc_id.operation)
	|| (flooding !=  nullptr && flooding->has_operation());
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-pw-member" <<"[vc-peer-address='" <<vc_peer_address <<"']" <<"[vc-id='" <<vc_id <<"']";

    return path_buffer.str();

}

const EntityPath BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessPwMember' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vc_peer_address.is_set || is_set(vc_peer_address.operation)) leaf_name_data.push_back(vc_peer_address.get_name_leafdata());
    if (vc_id.is_set || is_set(vc_id.operation)) leaf_name_data.push_back(vc_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vc-peer-address")
    {
        vc_peer_address = value;
    }
    if(value_path == "vc-id")
    {
        vc_id = value;
    }
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Flooding()
{
    yang_name = "flooding"; yang_parent_name = "access-pw-member";
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
    return is_set(operation);
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooding";

    return path_buffer.str();

}

const EntityPath BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flooding' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::set_value(const std::string & value_path, std::string value)
{
}

BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status::Status()
    :
    traffic_class{YType::enumeration, "traffic-class"},
    enabled{YType::boolean, "enabled"}
{
    yang_name = "status"; yang_parent_name = "flooding";
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
    return is_set(operation)
	|| is_set(traffic_class.operation)
	|| is_set(enabled.operation);
}

std::string BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status" <<"[traffic-class='" <<traffic_class <<"']";

    return path_buffer.str();

}

const EntityPath BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Status' in cisco_bridge_domain cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (traffic_class.is_set || is_set(traffic_class.operation)) leaf_name_data.push_back(traffic_class.get_name_leafdata());
    if (enabled.is_set || is_set(enabled.operation)) leaf_name_data.push_back(enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainState::BridgeDomains::BridgeDomain::Members::AccessPwMember::Flooding::Status::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "traffic-class")
    {
        traffic_class = value;
    }
    if(value_path == "enabled")
    {
        enabled = value;
    }
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
    yang_name = "mac-table"; yang_parent_name = "bridge-domain-state";
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
    return is_set(operation)
	|| is_set(bd_id.operation)
	|| is_set(mac_address.operation)
	|| is_set(age.operation)
	|| is_set(interface.operation)
	|| is_set(location.operation)
	|| is_set(mac_type.operation)
	|| is_set(ntfy_mac.operation)
	|| is_set(secure_mac.operation);
}

std::string BridgeDomainState::MacTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-table" <<"[bd-id='" <<bd_id <<"']" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath BridgeDomainState::MacTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-bridge-domain:bridge-domain-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_id.is_set || is_set(bd_id.operation)) leaf_name_data.push_back(bd_id.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (age.is_set || is_set(age.operation)) leaf_name_data.push_back(age.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (mac_type.is_set || is_set(mac_type.operation)) leaf_name_data.push_back(mac_type.get_name_leafdata());
    if (ntfy_mac.is_set || is_set(ntfy_mac.operation)) leaf_name_data.push_back(ntfy_mac.get_name_leafdata());
    if (secure_mac.is_set || is_set(secure_mac.operation)) leaf_name_data.push_back(secure_mac.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

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

void BridgeDomainState::MacTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-id")
    {
        bd_id = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "age")
    {
        age = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "mac-type")
    {
        mac_type = value;
    }
    if(value_path == "ntfy-mac")
    {
        ntfy_mac = value;
    }
    if(value_path == "secure-mac")
    {
        secure_mac = value;
    }
}

ClearBridgeDomainRpc::ClearBridgeDomainRpc()
    :
    input(std::make_shared<ClearBridgeDomainRpc::Input>())
	,output(std::make_shared<ClearBridgeDomainRpc::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "clear-bridge-domain"; yang_parent_name = "cisco-bridge-domain";
}

ClearBridgeDomainRpc::~ClearBridgeDomainRpc()
{
}

bool ClearBridgeDomainRpc::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool ClearBridgeDomainRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string ClearBridgeDomainRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:clear-bridge-domain";

    return path_buffer.str();

}

const EntityPath ClearBridgeDomainRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBridgeDomainRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearBridgeDomainRpc::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<ClearBridgeDomainRpc::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBridgeDomainRpc::get_children() const
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

void ClearBridgeDomainRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearBridgeDomainRpc::clone_ptr() const
{
    return std::make_shared<ClearBridgeDomainRpc>();
}

std::string ClearBridgeDomainRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string ClearBridgeDomainRpc::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function ClearBridgeDomainRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

ClearBridgeDomainRpc::Input::Input()
    :
    all{YType::empty, "all"},
    bd_id{YType::str, "bd-id"},
    bg_id{YType::str, "bg-id"}
{
    yang_name = "input"; yang_parent_name = "clear-bridge-domain";
}

ClearBridgeDomainRpc::Input::~Input()
{
}

bool ClearBridgeDomainRpc::Input::has_data() const
{
    return all.is_set
	|| bd_id.is_set
	|| bg_id.is_set;
}

bool ClearBridgeDomainRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(bd_id.operation)
	|| is_set(bg_id.operation);
}

std::string ClearBridgeDomainRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearBridgeDomainRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-bridge-domain:clear-bridge-domain/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (bd_id.is_set || is_set(bd_id.operation)) leaf_name_data.push_back(bd_id.get_name_leafdata());
    if (bg_id.is_set || is_set(bg_id.operation)) leaf_name_data.push_back(bg_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBridgeDomainRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBridgeDomainRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBridgeDomainRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "bd-id")
    {
        bd_id = value;
    }
    if(value_path == "bg-id")
    {
        bg_id = value;
    }
}

ClearBridgeDomainRpc::Output::Output()
    :
    errstr{YType::str, "errstr"}
{
    yang_name = "output"; yang_parent_name = "clear-bridge-domain";
}

ClearBridgeDomainRpc::Output::~Output()
{
}

bool ClearBridgeDomainRpc::Output::has_data() const
{
    return errstr.is_set;
}

bool ClearBridgeDomainRpc::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(errstr.operation);
}

std::string ClearBridgeDomainRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath ClearBridgeDomainRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-bridge-domain:clear-bridge-domain/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (errstr.is_set || is_set(errstr.operation)) leaf_name_data.push_back(errstr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearBridgeDomainRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearBridgeDomainRpc::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearBridgeDomainRpc::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "errstr")
    {
        errstr = value;
    }
}

ClearMacAddressRpc::ClearMacAddressRpc()
    :
    input(std::make_shared<ClearMacAddressRpc::Input>())
	,output(std::make_shared<ClearMacAddressRpc::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "clear-mac-address"; yang_parent_name = "cisco-bridge-domain";
}

ClearMacAddressRpc::~ClearMacAddressRpc()
{
}

bool ClearMacAddressRpc::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool ClearMacAddressRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string ClearMacAddressRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:clear-mac-address";

    return path_buffer.str();

}

const EntityPath ClearMacAddressRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearMacAddressRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<ClearMacAddressRpc::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<ClearMacAddressRpc::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearMacAddressRpc::get_children() const
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

void ClearMacAddressRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> ClearMacAddressRpc::clone_ptr() const
{
    return std::make_shared<ClearMacAddressRpc>();
}

std::string ClearMacAddressRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string ClearMacAddressRpc::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function ClearMacAddressRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

ClearMacAddressRpc::Input::Input()
    :
    interface{YType::str, "interface"},
    mac_address{YType::str, "mac-address"}
    	,
    bridge_domain(std::make_shared<ClearMacAddressRpc::Input::BridgeDomain>())
{
    bridge_domain->parent = this;

    yang_name = "input"; yang_parent_name = "clear-mac-address";
}

ClearMacAddressRpc::Input::~Input()
{
}

bool ClearMacAddressRpc::Input::has_data() const
{
    return interface.is_set
	|| mac_address.is_set
	|| (bridge_domain !=  nullptr && bridge_domain->has_data());
}

bool ClearMacAddressRpc::Input::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(mac_address.operation)
	|| (bridge_domain !=  nullptr && bridge_domain->has_operation());
}

std::string ClearMacAddressRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath ClearMacAddressRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-bridge-domain:clear-mac-address/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearMacAddressRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domain")
    {
        if(bridge_domain == nullptr)
        {
            bridge_domain = std::make_shared<ClearMacAddressRpc::Input::BridgeDomain>();
        }
        return bridge_domain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearMacAddressRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bridge_domain != nullptr)
    {
        children["bridge-domain"] = bridge_domain;
    }

    return children;
}

void ClearMacAddressRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
}

ClearMacAddressRpc::Input::BridgeDomain::BridgeDomain()
    :
    bd_id{YType::str, "bd-id"},
    bg_id{YType::str, "bg-id"}
{
    yang_name = "bridge-domain"; yang_parent_name = "input";
}

ClearMacAddressRpc::Input::BridgeDomain::~BridgeDomain()
{
}

bool ClearMacAddressRpc::Input::BridgeDomain::has_data() const
{
    return bd_id.is_set
	|| bg_id.is_set;
}

bool ClearMacAddressRpc::Input::BridgeDomain::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_id.operation)
	|| is_set(bg_id.operation);
}

std::string ClearMacAddressRpc::Input::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain";

    return path_buffer.str();

}

const EntityPath ClearMacAddressRpc::Input::BridgeDomain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-bridge-domain:clear-mac-address/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_id.is_set || is_set(bd_id.operation)) leaf_name_data.push_back(bd_id.get_name_leafdata());
    if (bg_id.is_set || is_set(bg_id.operation)) leaf_name_data.push_back(bg_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearMacAddressRpc::Input::BridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearMacAddressRpc::Input::BridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearMacAddressRpc::Input::BridgeDomain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-id")
    {
        bd_id = value;
    }
    if(value_path == "bg-id")
    {
        bg_id = value;
    }
}

ClearMacAddressRpc::Output::Output()
    :
    errstr{YType::str, "errstr"}
{
    yang_name = "output"; yang_parent_name = "clear-mac-address";
}

ClearMacAddressRpc::Output::~Output()
{
}

bool ClearMacAddressRpc::Output::has_data() const
{
    return errstr.is_set;
}

bool ClearMacAddressRpc::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(errstr.operation);
}

std::string ClearMacAddressRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath ClearMacAddressRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-bridge-domain:clear-mac-address/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (errstr.is_set || is_set(errstr.operation)) leaf_name_data.push_back(errstr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> ClearMacAddressRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> ClearMacAddressRpc::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void ClearMacAddressRpc::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "errstr")
    {
        errstr = value;
    }
}

CreateParameterizedBridgeDomainsRpc::CreateParameterizedBridgeDomainsRpc()
    :
    input(std::make_shared<CreateParameterizedBridgeDomainsRpc::Input>())
	,output(std::make_shared<CreateParameterizedBridgeDomainsRpc::Output>())
{
    input->parent = this;

    output->parent = this;

    yang_name = "create-parameterized-bridge-domains"; yang_parent_name = "cisco-bridge-domain";
}

CreateParameterizedBridgeDomainsRpc::~CreateParameterizedBridgeDomainsRpc()
{
}

bool CreateParameterizedBridgeDomainsRpc::has_data() const
{
    return (input !=  nullptr && input->has_data())
	|| (output !=  nullptr && output->has_data());
}

bool CreateParameterizedBridgeDomainsRpc::has_operation() const
{
    return is_set(operation)
	|| (input !=  nullptr && input->has_operation())
	|| (output !=  nullptr && output->has_operation());
}

std::string CreateParameterizedBridgeDomainsRpc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cisco-bridge-domain:create-parameterized-bridge-domains";

    return path_buffer.str();

}

const EntityPath CreateParameterizedBridgeDomainsRpc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CreateParameterizedBridgeDomainsRpc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "input")
    {
        if(input == nullptr)
        {
            input = std::make_shared<CreateParameterizedBridgeDomainsRpc::Input>();
        }
        return input;
    }

    if(child_yang_name == "output")
    {
        if(output == nullptr)
        {
            output = std::make_shared<CreateParameterizedBridgeDomainsRpc::Output>();
        }
        return output;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CreateParameterizedBridgeDomainsRpc::get_children() const
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

void CreateParameterizedBridgeDomainsRpc::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> CreateParameterizedBridgeDomainsRpc::clone_ptr() const
{
    return std::make_shared<CreateParameterizedBridgeDomainsRpc>();
}

std::string CreateParameterizedBridgeDomainsRpc::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string CreateParameterizedBridgeDomainsRpc::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function CreateParameterizedBridgeDomainsRpc::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

CreateParameterizedBridgeDomainsRpc::Input::Input()
    :
    parameter{YType::enumeration, "parameter"}
{
    yang_name = "input"; yang_parent_name = "create-parameterized-bridge-domains";
}

CreateParameterizedBridgeDomainsRpc::Input::~Input()
{
}

bool CreateParameterizedBridgeDomainsRpc::Input::has_data() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_data())
            return true;
    }
    return parameter.is_set;
}

bool CreateParameterizedBridgeDomainsRpc::Input::has_operation() const
{
    for (std::size_t index=0; index<member.size(); index++)
    {
        if(member[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(parameter.operation);
}

std::string CreateParameterizedBridgeDomainsRpc::Input::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "input";

    return path_buffer.str();

}

const EntityPath CreateParameterizedBridgeDomainsRpc::Input::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-bridge-domain:create-parameterized-bridge-domains/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (parameter.is_set || is_set(parameter.operation)) leaf_name_data.push_back(parameter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CreateParameterizedBridgeDomainsRpc::Input::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<CreateParameterizedBridgeDomainsRpc::Input::Member>();
        c->parent = this;
        member.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CreateParameterizedBridgeDomainsRpc::Input::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : member)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void CreateParameterizedBridgeDomainsRpc::Input::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "parameter")
    {
        parameter = value;
    }
}

CreateParameterizedBridgeDomainsRpc::Input::Member::Member()
    :
    interface{YType::str, "interface"}
{
    yang_name = "member"; yang_parent_name = "input";
}

CreateParameterizedBridgeDomainsRpc::Input::Member::~Member()
{
}

bool CreateParameterizedBridgeDomainsRpc::Input::Member::has_data() const
{
    return interface.is_set;
}

bool CreateParameterizedBridgeDomainsRpc::Input::Member::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation);
}

std::string CreateParameterizedBridgeDomainsRpc::Input::Member::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath CreateParameterizedBridgeDomainsRpc::Input::Member::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-bridge-domain:create-parameterized-bridge-domains/input/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CreateParameterizedBridgeDomainsRpc::Input::Member::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CreateParameterizedBridgeDomainsRpc::Input::Member::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CreateParameterizedBridgeDomainsRpc::Input::Member::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

CreateParameterizedBridgeDomainsRpc::Output::Output()
    :
    errstr{YType::str, "errstr"}
{
    yang_name = "output"; yang_parent_name = "create-parameterized-bridge-domains";
}

CreateParameterizedBridgeDomainsRpc::Output::~Output()
{
}

bool CreateParameterizedBridgeDomainsRpc::Output::has_data() const
{
    return errstr.is_set;
}

bool CreateParameterizedBridgeDomainsRpc::Output::has_operation() const
{
    return is_set(operation)
	|| is_set(errstr.operation);
}

std::string CreateParameterizedBridgeDomainsRpc::Output::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "output";

    return path_buffer.str();

}

const EntityPath CreateParameterizedBridgeDomainsRpc::Output::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "cisco-bridge-domain:create-parameterized-bridge-domains/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (errstr.is_set || is_set(errstr.operation)) leaf_name_data.push_back(errstr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> CreateParameterizedBridgeDomainsRpc::Output::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> CreateParameterizedBridgeDomainsRpc::Output::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void CreateParameterizedBridgeDomainsRpc::Output::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "errstr")
    {
        errstr = value;
    }
}

const Enum::YLeaf BridgeDomainStateTypeEnum::up {0, "up"};
const Enum::YLeaf BridgeDomainStateTypeEnum::down {1, "down"};
const Enum::YLeaf BridgeDomainStateTypeEnum::admin_down {2, "admin-down"};

const Enum::YLeaf BridgeDomainConfig::BridgeDomains::BridgeDomain::FloodingModeEnum::convergence_optimized {0, "convergence-optimized"};
const Enum::YLeaf BridgeDomainConfig::BridgeDomains::BridgeDomain::FloodingModeEnum::resilience_optimized {1, "resilience-optimized"};

const Enum::YLeaf BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::UnitEnum::bps {0, "bps"};
const Enum::YLeaf BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::UnitEnum::kbps {1, "kbps"};
const Enum::YLeaf BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AcMember::StormControl::Thresholds::UnitEnum::pps {2, "pps"};

const Enum::YLeaf BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::UnitEnum::bps {0, "bps"};
const Enum::YLeaf BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::UnitEnum::kbps {1, "kbps"};
const Enum::YLeaf BridgeDomainConfig::BridgeDomains::BridgeDomain::Members::AccessPwMember::PwNeighborSpec::StormControl::Thresholds::UnitEnum::pps {2, "pps"};

const Enum::YLeaf BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::UnitEnum::bps {0, "bps"};
const Enum::YLeaf BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::UnitEnum::kbps {1, "kbps"};
const Enum::YLeaf BridgeDomainConfig::BridgeDomains::BridgeDomain::StormControl::Thresholds::UnitEnum::pps {2, "pps"};

const Enum::YLeaf BridgeDomainState::MacTable::MacTypeEnum::static_ {0, "static"};
const Enum::YLeaf BridgeDomainState::MacTable::MacTypeEnum::dynamic {1, "dynamic"};

const Enum::YLeaf CreateParameterizedBridgeDomainsRpc::Input::ParameterEnum::vlan {0, "vlan"};


}
}

