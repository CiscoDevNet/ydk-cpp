
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_cfg_0.hpp"
#include "Cisco_IOS_XR_l2vpn_cfg_1.hpp"
#include "Cisco_IOS_XR_l2vpn_cfg_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_cfg {

L2vpn::L2vpn()
    :
    nsr{YType::empty, "nsr"},
    mtu_mismatch_ignore{YType::empty, "mtu-mismatch-ignore"},
    tcn_propagation{YType::empty, "tcn-propagation"},
    pwoam_refresh{YType::uint32, "pwoam-refresh"},
    load_balance{YType::enumeration, "load-balance"},
    mspw_description{YType::str, "mspw-description"},
    mac_limit_threshold{YType::uint32, "mac-limit-threshold"},
    pw_status_disable{YType::empty, "pw-status-disable"},
    enable{YType::empty, "enable"},
    pw_grouping{YType::empty, "pw-grouping"},
    capability{YType::enumeration, "capability"},
    l2vpn_router_id{YType::str, "l2vpn-router-id"}
        ,
    pw_routing(std::make_shared<L2vpn::PwRouting>())
    , neighbor(std::make_shared<L2vpn::Neighbor>())
    , database(std::make_shared<L2vpn::Database>())
    , pbb(std::make_shared<L2vpn::Pbb>())
    , auto_discovery(std::make_shared<L2vpn::AutoDiscovery>())
    , utility(std::make_shared<L2vpn::Utility>())
    , snmp(std::make_shared<L2vpn::Snmp>())
{
    pw_routing->parent = this;
    neighbor->parent = this;
    database->parent = this;
    pbb->parent = this;
    auto_discovery->parent = this;
    utility->parent = this;
    snmp->parent = this;

    yang_name = "l2vpn"; yang_parent_name = "Cisco-IOS-XR-l2vpn-cfg"; is_top_level_class = true; has_list_ancestor = false; 
}

L2vpn::~L2vpn()
{
}

bool L2vpn::has_data() const
{
    if (is_presence_container) return true;
    return nsr.is_set
	|| mtu_mismatch_ignore.is_set
	|| tcn_propagation.is_set
	|| pwoam_refresh.is_set
	|| load_balance.is_set
	|| mspw_description.is_set
	|| mac_limit_threshold.is_set
	|| pw_status_disable.is_set
	|| enable.is_set
	|| pw_grouping.is_set
	|| capability.is_set
	|| l2vpn_router_id.is_set
	|| (pw_routing !=  nullptr && pw_routing->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (database !=  nullptr && database->has_data())
	|| (pbb !=  nullptr && pbb->has_data())
	|| (auto_discovery !=  nullptr && auto_discovery->has_data())
	|| (utility !=  nullptr && utility->has_data())
	|| (snmp !=  nullptr && snmp->has_data());
}

bool L2vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr.yfilter)
	|| ydk::is_set(mtu_mismatch_ignore.yfilter)
	|| ydk::is_set(tcn_propagation.yfilter)
	|| ydk::is_set(pwoam_refresh.yfilter)
	|| ydk::is_set(load_balance.yfilter)
	|| ydk::is_set(mspw_description.yfilter)
	|| ydk::is_set(mac_limit_threshold.yfilter)
	|| ydk::is_set(pw_status_disable.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(pw_grouping.yfilter)
	|| ydk::is_set(capability.yfilter)
	|| ydk::is_set(l2vpn_router_id.yfilter)
	|| (pw_routing !=  nullptr && pw_routing->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (database !=  nullptr && database->has_operation())
	|| (pbb !=  nullptr && pbb->has_operation())
	|| (auto_discovery !=  nullptr && auto_discovery->has_operation())
	|| (utility !=  nullptr && utility->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation());
}

std::string L2vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr.is_set || is_set(nsr.yfilter)) leaf_name_data.push_back(nsr.get_name_leafdata());
    if (mtu_mismatch_ignore.is_set || is_set(mtu_mismatch_ignore.yfilter)) leaf_name_data.push_back(mtu_mismatch_ignore.get_name_leafdata());
    if (tcn_propagation.is_set || is_set(tcn_propagation.yfilter)) leaf_name_data.push_back(tcn_propagation.get_name_leafdata());
    if (pwoam_refresh.is_set || is_set(pwoam_refresh.yfilter)) leaf_name_data.push_back(pwoam_refresh.get_name_leafdata());
    if (load_balance.is_set || is_set(load_balance.yfilter)) leaf_name_data.push_back(load_balance.get_name_leafdata());
    if (mspw_description.is_set || is_set(mspw_description.yfilter)) leaf_name_data.push_back(mspw_description.get_name_leafdata());
    if (mac_limit_threshold.is_set || is_set(mac_limit_threshold.yfilter)) leaf_name_data.push_back(mac_limit_threshold.get_name_leafdata());
    if (pw_status_disable.is_set || is_set(pw_status_disable.yfilter)) leaf_name_data.push_back(pw_status_disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (pw_grouping.is_set || is_set(pw_grouping.yfilter)) leaf_name_data.push_back(pw_grouping.get_name_leafdata());
    if (capability.is_set || is_set(capability.yfilter)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (l2vpn_router_id.is_set || is_set(l2vpn_router_id.yfilter)) leaf_name_data.push_back(l2vpn_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pw-routing")
    {
        if(pw_routing == nullptr)
        {
            pw_routing = std::make_shared<L2vpn::PwRouting>();
        }
        return pw_routing;
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor == nullptr)
        {
            neighbor = std::make_shared<L2vpn::Neighbor>();
        }
        return neighbor;
    }

    if(child_yang_name == "database")
    {
        if(database == nullptr)
        {
            database = std::make_shared<L2vpn::Database>();
        }
        return database;
    }

    if(child_yang_name == "pbb")
    {
        if(pbb == nullptr)
        {
            pbb = std::make_shared<L2vpn::Pbb>();
        }
        return pbb;
    }

    if(child_yang_name == "auto-discovery")
    {
        if(auto_discovery == nullptr)
        {
            auto_discovery = std::make_shared<L2vpn::AutoDiscovery>();
        }
        return auto_discovery;
    }

    if(child_yang_name == "utility")
    {
        if(utility == nullptr)
        {
            utility = std::make_shared<L2vpn::Utility>();
        }
        return utility;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<L2vpn::Snmp>();
        }
        return snmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pw_routing != nullptr)
    {
        children["pw-routing"] = pw_routing;
    }

    if(neighbor != nullptr)
    {
        children["neighbor"] = neighbor;
    }

    if(database != nullptr)
    {
        children["database"] = database;
    }

    if(pbb != nullptr)
    {
        children["pbb"] = pbb;
    }

    if(auto_discovery != nullptr)
    {
        children["auto-discovery"] = auto_discovery;
    }

    if(utility != nullptr)
    {
        children["utility"] = utility;
    }

    if(snmp != nullptr)
    {
        children["snmp"] = snmp;
    }

    return children;
}

void L2vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr")
    {
        nsr = value;
        nsr.value_namespace = name_space;
        nsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-mismatch-ignore")
    {
        mtu_mismatch_ignore = value;
        mtu_mismatch_ignore.value_namespace = name_space;
        mtu_mismatch_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcn-propagation")
    {
        tcn_propagation = value;
        tcn_propagation.value_namespace = name_space;
        tcn_propagation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwoam-refresh")
    {
        pwoam_refresh = value;
        pwoam_refresh.value_namespace = name_space;
        pwoam_refresh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-balance")
    {
        load_balance = value;
        load_balance.value_namespace = name_space;
        load_balance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mspw-description")
    {
        mspw_description = value;
        mspw_description.value_namespace = name_space;
        mspw_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold = value;
        mac_limit_threshold.value_namespace = name_space;
        mac_limit_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-status-disable")
    {
        pw_status_disable = value;
        pw_status_disable.value_namespace = name_space;
        pw_status_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-grouping")
    {
        pw_grouping = value;
        pw_grouping.value_namespace = name_space;
        pw_grouping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capability")
    {
        capability = value;
        capability.value_namespace = name_space;
        capability.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-router-id")
    {
        l2vpn_router_id = value;
        l2vpn_router_id.value_namespace = name_space;
        l2vpn_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr")
    {
        nsr.yfilter = yfilter;
    }
    if(value_path == "mtu-mismatch-ignore")
    {
        mtu_mismatch_ignore.yfilter = yfilter;
    }
    if(value_path == "tcn-propagation")
    {
        tcn_propagation.yfilter = yfilter;
    }
    if(value_path == "pwoam-refresh")
    {
        pwoam_refresh.yfilter = yfilter;
    }
    if(value_path == "load-balance")
    {
        load_balance.yfilter = yfilter;
    }
    if(value_path == "mspw-description")
    {
        mspw_description.yfilter = yfilter;
    }
    if(value_path == "mac-limit-threshold")
    {
        mac_limit_threshold.yfilter = yfilter;
    }
    if(value_path == "pw-status-disable")
    {
        pw_status_disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "pw-grouping")
    {
        pw_grouping.yfilter = yfilter;
    }
    if(value_path == "capability")
    {
        capability.yfilter = yfilter;
    }
    if(value_path == "l2vpn-router-id")
    {
        l2vpn_router_id.yfilter = yfilter;
    }
}

std::shared_ptr<Entity> L2vpn::clone_ptr() const
{
    return std::make_shared<L2vpn>();
}

std::string L2vpn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string L2vpn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function L2vpn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> L2vpn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool L2vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-routing" || name == "neighbor" || name == "database" || name == "pbb" || name == "auto-discovery" || name == "utility" || name == "snmp" || name == "nsr" || name == "mtu-mismatch-ignore" || name == "tcn-propagation" || name == "pwoam-refresh" || name == "load-balance" || name == "mspw-description" || name == "mac-limit-threshold" || name == "pw-status-disable" || name == "enable" || name == "pw-grouping" || name == "capability" || name == "l2vpn-router-id")
        return true;
    return false;
}

L2vpn::PwRouting::PwRouting()
    :
    pw_routing_global_id{YType::uint32, "pw-routing-global-id"}
        ,
    pw_routing_bgp(std::make_shared<L2vpn::PwRouting::PwRoutingBgp>())
{
    pw_routing_bgp->parent = this;

    yang_name = "pw-routing"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::PwRouting::~PwRouting()
{
}

bool L2vpn::PwRouting::has_data() const
{
    if (is_presence_container) return true;
    return pw_routing_global_id.is_set
	|| (pw_routing_bgp !=  nullptr && pw_routing_bgp->has_data());
}

bool L2vpn::PwRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_routing_global_id.yfilter)
	|| (pw_routing_bgp !=  nullptr && pw_routing_bgp->has_operation());
}

std::string L2vpn::PwRouting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::PwRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::PwRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_routing_global_id.is_set || is_set(pw_routing_global_id.yfilter)) leaf_name_data.push_back(pw_routing_global_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::PwRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pw-routing-bgp")
    {
        if(pw_routing_bgp == nullptr)
        {
            pw_routing_bgp = std::make_shared<L2vpn::PwRouting::PwRoutingBgp>();
        }
        return pw_routing_bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::PwRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pw_routing_bgp != nullptr)
    {
        children["pw-routing-bgp"] = pw_routing_bgp;
    }

    return children;
}

void L2vpn::PwRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-routing-global-id")
    {
        pw_routing_global_id = value;
        pw_routing_global_id.value_namespace = name_space;
        pw_routing_global_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::PwRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-routing-global-id")
    {
        pw_routing_global_id.yfilter = yfilter;
    }
}

bool L2vpn::PwRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-routing-bgp" || name == "pw-routing-global-id")
        return true;
    return false;
}

L2vpn::PwRouting::PwRoutingBgp::PwRoutingBgp()
    :
    enable{YType::empty, "enable"}
        ,
    evpn_route_distinguisher(std::make_shared<L2vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher>())
{
    evpn_route_distinguisher->parent = this;

    yang_name = "pw-routing-bgp"; yang_parent_name = "pw-routing"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::PwRouting::PwRoutingBgp::~PwRoutingBgp()
{
}

bool L2vpn::PwRouting::PwRoutingBgp::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (evpn_route_distinguisher !=  nullptr && evpn_route_distinguisher->has_data());
}

bool L2vpn::PwRouting::PwRoutingBgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (evpn_route_distinguisher !=  nullptr && evpn_route_distinguisher->has_operation());
}

std::string L2vpn::PwRouting::PwRoutingBgp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/pw-routing/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::PwRouting::PwRoutingBgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-routing-bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::PwRouting::PwRoutingBgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::PwRouting::PwRoutingBgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evpn-route-distinguisher")
    {
        if(evpn_route_distinguisher == nullptr)
        {
            evpn_route_distinguisher = std::make_shared<L2vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher>();
        }
        return evpn_route_distinguisher;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::PwRouting::PwRoutingBgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(evpn_route_distinguisher != nullptr)
    {
        children["evpn-route-distinguisher"] = evpn_route_distinguisher;
    }

    return children;
}

void L2vpn::PwRouting::PwRoutingBgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::PwRouting::PwRoutingBgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::PwRouting::PwRoutingBgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "evpn-route-distinguisher" || name == "enable")
        return true;
    return false;
}

L2vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::EvpnRouteDistinguisher()
    :
    type{YType::enumeration, "type"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    address{YType::str, "address"},
    addr_index{YType::uint32, "addr-index"}
{

    yang_name = "evpn-route-distinguisher"; yang_parent_name = "pw-routing-bgp"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::~EvpnRouteDistinguisher()
{
}

bool L2vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| as.is_set
	|| as_index.is_set
	|| address.is_set
	|| addr_index.is_set;
}

bool L2vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(addr_index.yfilter);
}

std::string L2vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/pw-routing/pw-routing-bgp/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-distinguisher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr-index")
    {
        addr_index = value;
        addr_index.value_namespace = name_space;
        addr_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
}

bool L2vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "as" || name == "as-index" || name == "address" || name == "addr-index")
        return true;
    return false;
}

L2vpn::Neighbor::Neighbor()
    :
    ldp_flap{YType::empty, "ldp-flap"}
{

    yang_name = "neighbor"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Neighbor::~Neighbor()
{
}

bool L2vpn::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return ldp_flap.is_set;
}

bool L2vpn::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ldp_flap.yfilter);
}

std::string L2vpn::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldp_flap.is_set || is_set(ldp_flap.yfilter)) leaf_name_data.push_back(ldp_flap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ldp-flap")
    {
        ldp_flap = value;
        ldp_flap.value_namespace = name_space;
        ldp_flap.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ldp-flap")
    {
        ldp_flap.yfilter = yfilter;
    }
}

bool L2vpn::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp-flap")
        return true;
    return false;
}

L2vpn::Database::Database()
    :
    g8032_rings(std::make_shared<L2vpn::Database::G8032Rings>())
    , xconnect_groups(std::make_shared<L2vpn::Database::XconnectGroups>())
    , bridge_domain_groups(std::make_shared<L2vpn::Database::BridgeDomainGroups>())
    , pseudowire_classes(std::make_shared<L2vpn::Database::PseudowireClasses>())
    , vlan_switches(std::make_shared<L2vpn::Database::VlanSwitches>())
    , flexible_xconnect_service_table(std::make_shared<L2vpn::Database::FlexibleXconnectServiceTable>())
    , redundancy(std::make_shared<L2vpn::Database::Redundancy>())
{
    g8032_rings->parent = this;
    xconnect_groups->parent = this;
    bridge_domain_groups->parent = this;
    pseudowire_classes->parent = this;
    vlan_switches->parent = this;
    flexible_xconnect_service_table->parent = this;
    redundancy->parent = this;

    yang_name = "database"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Database::~Database()
{
}

bool L2vpn::Database::has_data() const
{
    if (is_presence_container) return true;
    return (g8032_rings !=  nullptr && g8032_rings->has_data())
	|| (xconnect_groups !=  nullptr && xconnect_groups->has_data())
	|| (bridge_domain_groups !=  nullptr && bridge_domain_groups->has_data())
	|| (pseudowire_classes !=  nullptr && pseudowire_classes->has_data())
	|| (vlan_switches !=  nullptr && vlan_switches->has_data())
	|| (flexible_xconnect_service_table !=  nullptr && flexible_xconnect_service_table->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool L2vpn::Database::has_operation() const
{
    return is_set(yfilter)
	|| (g8032_rings !=  nullptr && g8032_rings->has_operation())
	|| (xconnect_groups !=  nullptr && xconnect_groups->has_operation())
	|| (bridge_domain_groups !=  nullptr && bridge_domain_groups->has_operation())
	|| (pseudowire_classes !=  nullptr && pseudowire_classes->has_operation())
	|| (vlan_switches !=  nullptr && vlan_switches->has_operation())
	|| (flexible_xconnect_service_table !=  nullptr && flexible_xconnect_service_table->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation());
}

std::string L2vpn::Database::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g8032-rings")
    {
        if(g8032_rings == nullptr)
        {
            g8032_rings = std::make_shared<L2vpn::Database::G8032Rings>();
        }
        return g8032_rings;
    }

    if(child_yang_name == "xconnect-groups")
    {
        if(xconnect_groups == nullptr)
        {
            xconnect_groups = std::make_shared<L2vpn::Database::XconnectGroups>();
        }
        return xconnect_groups;
    }

    if(child_yang_name == "bridge-domain-groups")
    {
        if(bridge_domain_groups == nullptr)
        {
            bridge_domain_groups = std::make_shared<L2vpn::Database::BridgeDomainGroups>();
        }
        return bridge_domain_groups;
    }

    if(child_yang_name == "pseudowire-classes")
    {
        if(pseudowire_classes == nullptr)
        {
            pseudowire_classes = std::make_shared<L2vpn::Database::PseudowireClasses>();
        }
        return pseudowire_classes;
    }

    if(child_yang_name == "vlan-switches")
    {
        if(vlan_switches == nullptr)
        {
            vlan_switches = std::make_shared<L2vpn::Database::VlanSwitches>();
        }
        return vlan_switches;
    }

    if(child_yang_name == "flexible-xconnect-service-table")
    {
        if(flexible_xconnect_service_table == nullptr)
        {
            flexible_xconnect_service_table = std::make_shared<L2vpn::Database::FlexibleXconnectServiceTable>();
        }
        return flexible_xconnect_service_table;
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy == nullptr)
        {
            redundancy = std::make_shared<L2vpn::Database::Redundancy>();
        }
        return redundancy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(g8032_rings != nullptr)
    {
        children["g8032-rings"] = g8032_rings;
    }

    if(xconnect_groups != nullptr)
    {
        children["xconnect-groups"] = xconnect_groups;
    }

    if(bridge_domain_groups != nullptr)
    {
        children["bridge-domain-groups"] = bridge_domain_groups;
    }

    if(pseudowire_classes != nullptr)
    {
        children["pseudowire-classes"] = pseudowire_classes;
    }

    if(vlan_switches != nullptr)
    {
        children["vlan-switches"] = vlan_switches;
    }

    if(flexible_xconnect_service_table != nullptr)
    {
        children["flexible-xconnect-service-table"] = flexible_xconnect_service_table;
    }

    if(redundancy != nullptr)
    {
        children["redundancy"] = redundancy;
    }

    return children;
}

void L2vpn::Database::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g8032-rings" || name == "xconnect-groups" || name == "bridge-domain-groups" || name == "pseudowire-classes" || name == "vlan-switches" || name == "flexible-xconnect-service-table" || name == "redundancy")
        return true;
    return false;
}

L2vpn::Database::G8032Rings::G8032Rings()
    :
    g8032_ring(this, {"g8032_ring_name"})
{

    yang_name = "g8032-rings"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Database::G8032Rings::~G8032Rings()
{
}

bool L2vpn::Database::G8032Rings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<g8032_ring.len(); index++)
    {
        if(g8032_ring[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::G8032Rings::has_operation() const
{
    for (std::size_t index=0; index<g8032_ring.len(); index++)
    {
        if(g8032_ring[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::G8032Rings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Database::G8032Rings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032-rings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::G8032Rings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::G8032Rings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "g8032-ring")
    {
        auto c = std::make_shared<L2vpn::Database::G8032Rings::G8032Ring>();
        c->parent = this;
        g8032_ring.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::G8032Rings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : g8032_ring.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::G8032Rings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::G8032Rings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::G8032Rings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "g8032-ring")
        return true;
    return false;
}

L2vpn::Database::G8032Rings::G8032Ring::G8032Ring()
    :
    g8032_ring_name{YType::str, "g8032-ring-name"},
    open_ring{YType::empty, "open-ring"},
    exclusion_list{YType::str, "exclusion-list"},
    erp_provider_bridge{YType::empty, "erp-provider-bridge"}
        ,
    erp_port0s(std::make_shared<L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s>())
    , erp_instances(std::make_shared<L2vpn::Database::G8032Rings::G8032Ring::ErpInstances>())
    , erp_port1s(std::make_shared<L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s>())
{
    erp_port0s->parent = this;
    erp_instances->parent = this;
    erp_port1s->parent = this;

    yang_name = "g8032-ring"; yang_parent_name = "g8032-rings"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Database::G8032Rings::G8032Ring::~G8032Ring()
{
}

bool L2vpn::Database::G8032Rings::G8032Ring::has_data() const
{
    if (is_presence_container) return true;
    return g8032_ring_name.is_set
	|| open_ring.is_set
	|| exclusion_list.is_set
	|| erp_provider_bridge.is_set
	|| (erp_port0s !=  nullptr && erp_port0s->has_data())
	|| (erp_instances !=  nullptr && erp_instances->has_data())
	|| (erp_port1s !=  nullptr && erp_port1s->has_data());
}

bool L2vpn::Database::G8032Rings::G8032Ring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(g8032_ring_name.yfilter)
	|| ydk::is_set(open_ring.yfilter)
	|| ydk::is_set(exclusion_list.yfilter)
	|| ydk::is_set(erp_provider_bridge.yfilter)
	|| (erp_port0s !=  nullptr && erp_port0s->has_operation())
	|| (erp_instances !=  nullptr && erp_instances->has_operation())
	|| (erp_port1s !=  nullptr && erp_port1s->has_operation());
}

std::string L2vpn::Database::G8032Rings::G8032Ring::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/g8032-rings/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Database::G8032Rings::G8032Ring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032-ring";
    ADD_KEY_TOKEN(g8032_ring_name, "g8032-ring-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::G8032Rings::G8032Ring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (g8032_ring_name.is_set || is_set(g8032_ring_name.yfilter)) leaf_name_data.push_back(g8032_ring_name.get_name_leafdata());
    if (open_ring.is_set || is_set(open_ring.yfilter)) leaf_name_data.push_back(open_ring.get_name_leafdata());
    if (exclusion_list.is_set || is_set(exclusion_list.yfilter)) leaf_name_data.push_back(exclusion_list.get_name_leafdata());
    if (erp_provider_bridge.is_set || is_set(erp_provider_bridge.yfilter)) leaf_name_data.push_back(erp_provider_bridge.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::G8032Rings::G8032Ring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "erp-port0s")
    {
        if(erp_port0s == nullptr)
        {
            erp_port0s = std::make_shared<L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s>();
        }
        return erp_port0s;
    }

    if(child_yang_name == "erp-instances")
    {
        if(erp_instances == nullptr)
        {
            erp_instances = std::make_shared<L2vpn::Database::G8032Rings::G8032Ring::ErpInstances>();
        }
        return erp_instances;
    }

    if(child_yang_name == "erp-port1s")
    {
        if(erp_port1s == nullptr)
        {
            erp_port1s = std::make_shared<L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s>();
        }
        return erp_port1s;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::G8032Rings::G8032Ring::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(erp_port0s != nullptr)
    {
        children["erp-port0s"] = erp_port0s;
    }

    if(erp_instances != nullptr)
    {
        children["erp-instances"] = erp_instances;
    }

    if(erp_port1s != nullptr)
    {
        children["erp-port1s"] = erp_port1s;
    }

    return children;
}

void L2vpn::Database::G8032Rings::G8032Ring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "g8032-ring-name")
    {
        g8032_ring_name = value;
        g8032_ring_name.value_namespace = name_space;
        g8032_ring_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "open-ring")
    {
        open_ring = value;
        open_ring.value_namespace = name_space;
        open_ring.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-list")
    {
        exclusion_list = value;
        exclusion_list.value_namespace = name_space;
        exclusion_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "erp-provider-bridge")
    {
        erp_provider_bridge = value;
        erp_provider_bridge.value_namespace = name_space;
        erp_provider_bridge.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::G8032Rings::G8032Ring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "g8032-ring-name")
    {
        g8032_ring_name.yfilter = yfilter;
    }
    if(value_path == "open-ring")
    {
        open_ring.yfilter = yfilter;
    }
    if(value_path == "exclusion-list")
    {
        exclusion_list.yfilter = yfilter;
    }
    if(value_path == "erp-provider-bridge")
    {
        erp_provider_bridge.yfilter = yfilter;
    }
}

bool L2vpn::Database::G8032Rings::G8032Ring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "erp-port0s" || name == "erp-instances" || name == "erp-port1s" || name == "g8032-ring-name" || name == "open-ring" || name == "exclusion-list" || name == "erp-provider-bridge")
        return true;
    return false;
}

L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::ErpPort0s()
    :
    erp_port0(this, {"interface_name"})
{

    yang_name = "erp-port0s"; yang_parent_name = "g8032-ring"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::~ErpPort0s()
{
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<erp_port0.len(); index++)
    {
        if(erp_port0[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::has_operation() const
{
    for (std::size_t index=0; index<erp_port0.len(); index++)
    {
        if(erp_port0[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "erp-port0s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "erp-port0")
    {
        auto c = std::make_shared<L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::ErpPort0>();
        c->parent = this;
        erp_port0.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : erp_port0.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "erp-port0")
        return true;
    return false;
}

L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::ErpPort0::ErpPort0()
    :
    interface_name{YType::str, "interface-name"},
    monitor{YType::str, "monitor"}
{

    yang_name = "erp-port0"; yang_parent_name = "erp-port0s"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::ErpPort0::~ErpPort0()
{
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::ErpPort0::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| monitor.is_set;
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::ErpPort0::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(monitor.yfilter);
}

std::string L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::ErpPort0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "erp-port0";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::ErpPort0::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::ErpPort0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::ErpPort0::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::ErpPort0::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::ErpPort0::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpPort0s::ErpPort0::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "monitor")
        return true;
    return false;
}

L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstances()
    :
    erp_instance(this, {"erp_instance_id"})
{

    yang_name = "erp-instances"; yang_parent_name = "g8032-ring"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::~ErpInstances()
{
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<erp_instance.len(); index++)
    {
        if(erp_instance[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::has_operation() const
{
    for (std::size_t index=0; index<erp_instance.len(); index++)
    {
        if(erp_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "erp-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "erp-instance")
    {
        auto c = std::make_shared<L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance>();
        c->parent = this;
        erp_instance.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : erp_instance.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "erp-instance")
        return true;
    return false;
}

L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::ErpInstance()
    :
    erp_instance_id{YType::uint32, "erp-instance-id"},
    description{YType::str, "description"},
    inclusion_list{YType::str, "inclusion-list"},
    profile{YType::str, "profile"}
        ,
    rpl(std::make_shared<L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl>())
    , aps(std::make_shared<L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps>())
{
    rpl->parent = this;
    aps->parent = this;

    yang_name = "erp-instance"; yang_parent_name = "erp-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::~ErpInstance()
{
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::has_data() const
{
    if (is_presence_container) return true;
    return erp_instance_id.is_set
	|| description.is_set
	|| inclusion_list.is_set
	|| profile.is_set
	|| (rpl !=  nullptr && rpl->has_data())
	|| (aps !=  nullptr && aps->has_data());
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(erp_instance_id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(inclusion_list.yfilter)
	|| ydk::is_set(profile.yfilter)
	|| (rpl !=  nullptr && rpl->has_operation())
	|| (aps !=  nullptr && aps->has_operation());
}

std::string L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "erp-instance";
    ADD_KEY_TOKEN(erp_instance_id, "erp-instance-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (erp_instance_id.is_set || is_set(erp_instance_id.yfilter)) leaf_name_data.push_back(erp_instance_id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (inclusion_list.is_set || is_set(inclusion_list.yfilter)) leaf_name_data.push_back(inclusion_list.get_name_leafdata());
    if (profile.is_set || is_set(profile.yfilter)) leaf_name_data.push_back(profile.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpl")
    {
        if(rpl == nullptr)
        {
            rpl = std::make_shared<L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl>();
        }
        return rpl;
    }

    if(child_yang_name == "aps")
    {
        if(aps == nullptr)
        {
            aps = std::make_shared<L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps>();
        }
        return aps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rpl != nullptr)
    {
        children["rpl"] = rpl;
    }

    if(aps != nullptr)
    {
        children["aps"] = aps;
    }

    return children;
}

void L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "erp-instance-id")
    {
        erp_instance_id = value;
        erp_instance_id.value_namespace = name_space;
        erp_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inclusion-list")
    {
        inclusion_list = value;
        inclusion_list.value_namespace = name_space;
        inclusion_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "profile")
    {
        profile = value;
        profile.value_namespace = name_space;
        profile.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "erp-instance-id")
    {
        erp_instance_id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "inclusion-list")
    {
        inclusion_list.yfilter = yfilter;
    }
    if(value_path == "profile")
    {
        profile.yfilter = yfilter;
    }
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpl" || name == "aps" || name == "erp-instance-id" || name == "description" || name == "inclusion-list" || name == "profile")
        return true;
    return false;
}

L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::Rpl()
    :
    port{YType::enumeration, "port"},
    role{YType::enumeration, "role"}
{

    yang_name = "rpl"; yang_parent_name = "erp-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::~Rpl()
{
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| role.is_set;
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(role.yfilter);
}

std::string L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "role")
        return true;
    return false;
}

L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Aps()
    :
    port0{YType::str, "port0"},
    enable{YType::empty, "enable"},
    level{YType::uint32, "level"}
        ,
    port1(std::make_shared<L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1>())
{
    port1->parent = this;

    yang_name = "aps"; yang_parent_name = "erp-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::~Aps()
{
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::has_data() const
{
    if (is_presence_container) return true;
    return port0.is_set
	|| enable.is_set
	|| level.is_set
	|| (port1 !=  nullptr && port1->has_data());
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port0.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(level.yfilter)
	|| (port1 !=  nullptr && port1->has_operation());
}

std::string L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port0.is_set || is_set(port0.yfilter)) leaf_name_data.push_back(port0.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port1")
    {
        if(port1 == nullptr)
        {
            port1 = std::make_shared<L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1>();
        }
        return port1;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(port1 != nullptr)
    {
        children["port1"] = port1;
    }

    return children;
}

void L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port0")
    {
        port0 = value;
        port0.value_namespace = name_space;
        port0.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port0")
    {
        port0.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port1" || name == "port0" || name == "enable" || name == "level")
        return true;
    return false;
}

L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::Port1()
    :
    aps_type{YType::enumeration, "aps-type"},
    aps_channel{YType::str, "aps-channel"}
{

    yang_name = "port1"; yang_parent_name = "aps"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::~Port1()
{
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::has_data() const
{
    if (is_presence_container) return true;
    return aps_type.is_set
	|| aps_channel.is_set;
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aps_type.yfilter)
	|| ydk::is_set(aps_channel.yfilter);
}

std::string L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port1";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aps_type.is_set || is_set(aps_type.yfilter)) leaf_name_data.push_back(aps_type.get_name_leafdata());
    if (aps_channel.is_set || is_set(aps_channel.yfilter)) leaf_name_data.push_back(aps_channel.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aps-type")
    {
        aps_type = value;
        aps_type.value_namespace = name_space;
        aps_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aps-channel")
    {
        aps_channel = value;
        aps_channel.value_namespace = name_space;
        aps_channel.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aps-type")
    {
        aps_type.yfilter = yfilter;
    }
    if(value_path == "aps-channel")
    {
        aps_channel.yfilter = yfilter;
    }
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aps-type" || name == "aps-channel")
        return true;
    return false;
}

L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1s()
    :
    erp_port1(this, {"erp_port_type"})
{

    yang_name = "erp-port1s"; yang_parent_name = "g8032-ring"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::~ErpPort1s()
{
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<erp_port1.len(); index++)
    {
        if(erp_port1[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::has_operation() const
{
    for (std::size_t index=0; index<erp_port1.len(); index++)
    {
        if(erp_port1[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "erp-port1s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "erp-port1")
    {
        auto c = std::make_shared<L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1>();
        c->parent = this;
        erp_port1.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : erp_port1.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "erp-port1")
        return true;
    return false;
}

L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::ErpPort1()
    :
    erp_port_type{YType::enumeration, "erp-port-type"}
        ,
    none_or_virtual(nullptr) // presence node
    , interface(this, {"interface_name"})
{

    yang_name = "erp-port1"; yang_parent_name = "erp-port1s"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::~ErpPort1()
{
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return erp_port_type.is_set
	|| (none_or_virtual !=  nullptr && none_or_virtual->has_data());
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(erp_port_type.yfilter)
	|| (none_or_virtual !=  nullptr && none_or_virtual->has_operation());
}

std::string L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "erp-port1";
    ADD_KEY_TOKEN(erp_port_type, "erp-port-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (erp_port_type.is_set || is_set(erp_port_type.yfilter)) leaf_name_data.push_back(erp_port_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "none-or-virtual")
    {
        if(none_or_virtual == nullptr)
        {
            none_or_virtual = std::make_shared<L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::NoneOrVirtual>();
        }
        return none_or_virtual;
    }

    if(child_yang_name == "interface")
    {
        auto c = std::make_shared<L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::Interface>();
        c->parent = this;
        interface.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(none_or_virtual != nullptr)
    {
        children["none-or-virtual"] = none_or_virtual;
    }

    count = 0;
    for (auto c : interface.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "erp-port-type")
    {
        erp_port_type = value;
        erp_port_type.value_namespace = name_space;
        erp_port_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "erp-port-type")
    {
        erp_port_type.yfilter = yfilter;
    }
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none-or-virtual" || name == "interface" || name == "erp-port-type")
        return true;
    return false;
}

L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::NoneOrVirtual::NoneOrVirtual()
    :
    monitor{YType::str, "monitor"}
{

    yang_name = "none-or-virtual"; yang_parent_name = "erp-port1"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::NoneOrVirtual::~NoneOrVirtual()
{
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::NoneOrVirtual::has_data() const
{
    if (is_presence_container) return true;
    return monitor.is_set;
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::NoneOrVirtual::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(monitor.yfilter);
}

std::string L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::NoneOrVirtual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "none-or-virtual";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::NoneOrVirtual::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::NoneOrVirtual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::NoneOrVirtual::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::NoneOrVirtual::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::NoneOrVirtual::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::NoneOrVirtual::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    monitor{YType::str, "monitor"}
{

    yang_name = "interface"; yang_parent_name = "erp-port1"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::Interface::~Interface()
{
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| monitor.is_set;
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(monitor.yfilter);
}

std::string L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.yfilter)) leaf_name_data.push_back(monitor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitor")
    {
        monitor = value;
        monitor.value_namespace = name_space;
        monitor.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "monitor")
    {
        monitor.yfilter = yfilter;
    }
}

bool L2vpn::Database::G8032Rings::G8032Ring::ErpPort1s::ErpPort1::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "monitor")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroups()
    :
    xconnect_group(this, {"name"})
{

    yang_name = "xconnect-groups"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Database::XconnectGroups::~XconnectGroups()
{
}

bool L2vpn::Database::XconnectGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<xconnect_group.len(); index++)
    {
        if(xconnect_group[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::XconnectGroups::has_operation() const
{
    for (std::size_t index=0; index<xconnect_group.len(); index++)
    {
        if(xconnect_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::XconnectGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Database::XconnectGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect-group")
    {
        auto c = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup>();
        c->parent = this;
        xconnect_group.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : xconnect_group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::XconnectGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::XconnectGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-group")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::XconnectGroup()
    :
    name{YType::str, "name"}
        ,
    p2p_xconnects(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects>())
    , mp2mp_xconnects(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects>())
{
    p2p_xconnects->parent = this;
    mp2mp_xconnects->parent = this;

    yang_name = "xconnect-group"; yang_parent_name = "xconnect-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::~XconnectGroup()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (p2p_xconnects !=  nullptr && p2p_xconnects->has_data())
	|| (mp2mp_xconnects !=  nullptr && mp2mp_xconnects->has_data());
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (p2p_xconnects !=  nullptr && p2p_xconnects->has_operation())
	|| (mp2mp_xconnects !=  nullptr && mp2mp_xconnects->has_operation());
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/xconnect-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-group";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2p-xconnects")
    {
        if(p2p_xconnects == nullptr)
        {
            p2p_xconnects = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects>();
        }
        return p2p_xconnects;
    }

    if(child_yang_name == "mp2mp-xconnects")
    {
        if(mp2mp_xconnects == nullptr)
        {
            mp2mp_xconnects = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects>();
        }
        return mp2mp_xconnects;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(p2p_xconnects != nullptr)
    {
        children["p2p-xconnects"] = p2p_xconnects;
    }

    if(mp2mp_xconnects != nullptr)
    {
        children["mp2mp-xconnects"] = mp2mp_xconnects;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p-xconnects" || name == "mp2mp-xconnects" || name == "name")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnects()
    :
    p2p_xconnect(this, {"name"})
{

    yang_name = "p2p-xconnects"; yang_parent_name = "xconnect-group"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::~P2pXconnects()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<p2p_xconnect.len(); index++)
    {
        if(p2p_xconnect[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::has_operation() const
{
    for (std::size_t index=0; index<p2p_xconnect.len(); index++)
    {
        if(p2p_xconnect[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-xconnects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2p-xconnect")
    {
        auto c = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect>();
        c->parent = this;
        p2p_xconnect.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : p2p_xconnect.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "p2p-xconnect")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::P2pXconnect()
    :
    name{YType::str, "name"},
    p2p_description{YType::str, "p2p-description"},
    interworking{YType::enumeration, "interworking"}
        ,
    backup_attachment_circuits(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits>())
    , pseudowire_evpns(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns>())
    , pseudowires(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires>())
    , monitor_sessions(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions>())
    , pseudowire_routeds(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds>())
    , attachment_circuits(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits>())
{
    backup_attachment_circuits->parent = this;
    pseudowire_evpns->parent = this;
    pseudowires->parent = this;
    monitor_sessions->parent = this;
    pseudowire_routeds->parent = this;
    attachment_circuits->parent = this;

    yang_name = "p2p-xconnect"; yang_parent_name = "p2p-xconnects"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::~P2pXconnect()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| p2p_description.is_set
	|| interworking.is_set
	|| (backup_attachment_circuits !=  nullptr && backup_attachment_circuits->has_data())
	|| (pseudowire_evpns !=  nullptr && pseudowire_evpns->has_data())
	|| (pseudowires !=  nullptr && pseudowires->has_data())
	|| (monitor_sessions !=  nullptr && monitor_sessions->has_data())
	|| (pseudowire_routeds !=  nullptr && pseudowire_routeds->has_data())
	|| (attachment_circuits !=  nullptr && attachment_circuits->has_data());
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(p2p_description.yfilter)
	|| ydk::is_set(interworking.yfilter)
	|| (backup_attachment_circuits !=  nullptr && backup_attachment_circuits->has_operation())
	|| (pseudowire_evpns !=  nullptr && pseudowire_evpns->has_operation())
	|| (pseudowires !=  nullptr && pseudowires->has_operation())
	|| (monitor_sessions !=  nullptr && monitor_sessions->has_operation())
	|| (pseudowire_routeds !=  nullptr && pseudowire_routeds->has_operation())
	|| (attachment_circuits !=  nullptr && attachment_circuits->has_operation());
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-xconnect";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (p2p_description.is_set || is_set(p2p_description.yfilter)) leaf_name_data.push_back(p2p_description.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.yfilter)) leaf_name_data.push_back(interworking.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-attachment-circuits")
    {
        if(backup_attachment_circuits == nullptr)
        {
            backup_attachment_circuits = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits>();
        }
        return backup_attachment_circuits;
    }

    if(child_yang_name == "pseudowire-evpns")
    {
        if(pseudowire_evpns == nullptr)
        {
            pseudowire_evpns = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns>();
        }
        return pseudowire_evpns;
    }

    if(child_yang_name == "pseudowires")
    {
        if(pseudowires == nullptr)
        {
            pseudowires = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires>();
        }
        return pseudowires;
    }

    if(child_yang_name == "monitor-sessions")
    {
        if(monitor_sessions == nullptr)
        {
            monitor_sessions = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions>();
        }
        return monitor_sessions;
    }

    if(child_yang_name == "pseudowire-routeds")
    {
        if(pseudowire_routeds == nullptr)
        {
            pseudowire_routeds = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds>();
        }
        return pseudowire_routeds;
    }

    if(child_yang_name == "attachment-circuits")
    {
        if(attachment_circuits == nullptr)
        {
            attachment_circuits = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits>();
        }
        return attachment_circuits;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(backup_attachment_circuits != nullptr)
    {
        children["backup-attachment-circuits"] = backup_attachment_circuits;
    }

    if(pseudowire_evpns != nullptr)
    {
        children["pseudowire-evpns"] = pseudowire_evpns;
    }

    if(pseudowires != nullptr)
    {
        children["pseudowires"] = pseudowires;
    }

    if(monitor_sessions != nullptr)
    {
        children["monitor-sessions"] = monitor_sessions;
    }

    if(pseudowire_routeds != nullptr)
    {
        children["pseudowire-routeds"] = pseudowire_routeds;
    }

    if(attachment_circuits != nullptr)
    {
        children["attachment-circuits"] = attachment_circuits;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-description")
    {
        p2p_description = value;
        p2p_description.value_namespace = name_space;
        p2p_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interworking")
    {
        interworking = value;
        interworking.value_namespace = name_space;
        interworking.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "p2p-description")
    {
        p2p_description.yfilter = yfilter;
    }
    if(value_path == "interworking")
    {
        interworking.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-attachment-circuits" || name == "pseudowire-evpns" || name == "pseudowires" || name == "monitor-sessions" || name == "pseudowire-routeds" || name == "attachment-circuits" || name == "name" || name == "p2p-description" || name == "interworking")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::BackupAttachmentCircuits()
    :
    backup_attachment_circuit(this, {"interface_name"})
{

    yang_name = "backup-attachment-circuits"; yang_parent_name = "p2p-xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::~BackupAttachmentCircuits()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<backup_attachment_circuit.len(); index++)
    {
        if(backup_attachment_circuit[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::has_operation() const
{
    for (std::size_t index=0; index<backup_attachment_circuit.len(); index++)
    {
        if(backup_attachment_circuit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-attachment-circuits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-attachment-circuit")
    {
        auto c = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit>();
        c->parent = this;
        backup_attachment_circuit.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : backup_attachment_circuit.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-attachment-circuit")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::BackupAttachmentCircuit()
    :
    interface_name{YType::str, "interface-name"}
{

    yang_name = "backup-attachment-circuit"; yang_parent_name = "backup-attachment-circuits"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::~BackupAttachmentCircuit()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-attachment-circuit";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::PseudowireEvpns()
    :
    pseudowire_evpn(this, {"eviid", "remote_acid", "source_acid"})
{

    yang_name = "pseudowire-evpns"; yang_parent_name = "p2p-xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::~PseudowireEvpns()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pseudowire_evpn.len(); index++)
    {
        if(pseudowire_evpn[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::has_operation() const
{
    for (std::size_t index=0; index<pseudowire_evpn.len(); index++)
    {
        if(pseudowire_evpn[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-evpns";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire-evpn")
    {
        auto c = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::PseudowireEvpn>();
        c->parent = this;
        pseudowire_evpn.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pseudowire_evpn.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-evpn")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::PseudowireEvpn::PseudowireEvpn()
    :
    eviid{YType::uint32, "eviid"},
    remote_acid{YType::uint32, "remote-acid"},
    source_acid{YType::uint32, "source-acid"},
    class_{YType::str, "class"}
{

    yang_name = "pseudowire-evpn"; yang_parent_name = "pseudowire-evpns"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::PseudowireEvpn::~PseudowireEvpn()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::PseudowireEvpn::has_data() const
{
    if (is_presence_container) return true;
    return eviid.is_set
	|| remote_acid.is_set
	|| source_acid.is_set
	|| class_.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::PseudowireEvpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eviid.yfilter)
	|| ydk::is_set(remote_acid.yfilter)
	|| ydk::is_set(source_acid.yfilter)
	|| ydk::is_set(class_.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::PseudowireEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-evpn";
    ADD_KEY_TOKEN(eviid, "eviid");
    ADD_KEY_TOKEN(remote_acid, "remote-acid");
    ADD_KEY_TOKEN(source_acid, "source-acid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::PseudowireEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eviid.is_set || is_set(eviid.yfilter)) leaf_name_data.push_back(eviid.get_name_leafdata());
    if (remote_acid.is_set || is_set(remote_acid.yfilter)) leaf_name_data.push_back(remote_acid.get_name_leafdata());
    if (source_acid.is_set || is_set(source_acid.yfilter)) leaf_name_data.push_back(source_acid.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::PseudowireEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::PseudowireEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::PseudowireEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eviid")
    {
        eviid = value;
        eviid.value_namespace = name_space;
        eviid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-acid")
    {
        remote_acid = value;
        remote_acid.value_namespace = name_space;
        remote_acid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-acid")
    {
        source_acid = value;
        source_acid.value_namespace = name_space;
        source_acid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::PseudowireEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eviid")
    {
        eviid.yfilter = yfilter;
    }
    if(value_path == "remote-acid")
    {
        remote_acid.yfilter = yfilter;
    }
    if(value_path == "source-acid")
    {
        source_acid.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireEvpns::PseudowireEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eviid" || name == "remote-acid" || name == "source-acid" || name == "class")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowires()
    :
    pseudowire(this, {"pseudowire_id"})
{

    yang_name = "pseudowires"; yang_parent_name = "p2p-xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::~Pseudowires()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pseudowire.len(); index++)
    {
        if(pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::has_operation() const
{
    for (std::size_t index=0; index<pseudowire.len(); index++)
    {
        if(pseudowire[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowires";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire")
    {
        auto c = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire>();
        c->parent = this;
        pseudowire.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pseudowire.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Pseudowire()
    :
    pseudowire_id{YType::uint32, "pseudowire-id"}
        ,
    neighbor(this, {"neighbor"})
    , pseudowire_address(this, {"pseudowire_address"})
{

    yang_name = "pseudowire"; yang_parent_name = "pseudowires"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::~Pseudowire()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pseudowire_address.len(); index++)
    {
        if(pseudowire_address[index]->has_data())
            return true;
    }
    return pseudowire_id.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pseudowire_address.len(); index++)
    {
        if(pseudowire_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pseudowire_id.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire";
    ADD_KEY_TOKEN(pseudowire_id, "pseudowire-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto c = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor>();
        c->parent = this;
        neighbor.append(c);
        return c;
    }

    if(child_yang_name == "pseudowire-address")
    {
        auto c = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress>();
        c->parent = this;
        pseudowire_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : neighbor.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : pseudowire_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "pseudowire-address" || name == "pseudowire-id")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::Neighbor()
    :
    neighbor{YType::str, "neighbor"},
    tag_impose{YType::uint32, "tag-impose"},
    class_{YType::str, "class"},
    source_address{YType::str, "source-address"},
    bandwidth{YType::uint32, "bandwidth"}
        ,
    mpls_static_labels(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels>())
    , backup_pseudowires(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires>())
    , l2tp_static_attributes(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes>())
    , l2tp_static(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStatic>())
{
    mpls_static_labels->parent = this;
    backup_pseudowires->parent = this;
    l2tp_static_attributes->parent = this;
    l2tp_static->parent = this;

    yang_name = "neighbor"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::~Neighbor()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    return neighbor.is_set
	|| tag_impose.is_set
	|| class_.is_set
	|| source_address.is_set
	|| bandwidth.is_set
	|| (mpls_static_labels !=  nullptr && mpls_static_labels->has_data())
	|| (backup_pseudowires !=  nullptr && backup_pseudowires->has_data())
	|| (l2tp_static_attributes !=  nullptr && l2tp_static_attributes->has_data())
	|| (l2tp_static !=  nullptr && l2tp_static->has_data());
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(tag_impose.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| (mpls_static_labels !=  nullptr && mpls_static_labels->has_operation())
	|| (backup_pseudowires !=  nullptr && backup_pseudowires->has_operation())
	|| (l2tp_static_attributes !=  nullptr && l2tp_static_attributes->has_operation())
	|| (l2tp_static !=  nullptr && l2tp_static->has_operation());
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(neighbor, "neighbor");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (tag_impose.is_set || is_set(tag_impose.yfilter)) leaf_name_data.push_back(tag_impose.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-static-labels")
    {
        if(mpls_static_labels == nullptr)
        {
            mpls_static_labels = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels>();
        }
        return mpls_static_labels;
    }

    if(child_yang_name == "backup-pseudowires")
    {
        if(backup_pseudowires == nullptr)
        {
            backup_pseudowires = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires>();
        }
        return backup_pseudowires;
    }

    if(child_yang_name == "l2tp-static-attributes")
    {
        if(l2tp_static_attributes == nullptr)
        {
            l2tp_static_attributes = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes>();
        }
        return l2tp_static_attributes;
    }

    if(child_yang_name == "l2tp-static")
    {
        if(l2tp_static == nullptr)
        {
            l2tp_static = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStatic>();
        }
        return l2tp_static;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mpls_static_labels != nullptr)
    {
        children["mpls-static-labels"] = mpls_static_labels;
    }

    if(backup_pseudowires != nullptr)
    {
        children["backup-pseudowires"] = backup_pseudowires;
    }

    if(l2tp_static_attributes != nullptr)
    {
        children["l2tp-static-attributes"] = l2tp_static_attributes;
    }

    if(l2tp_static != nullptr)
    {
        children["l2tp-static"] = l2tp_static;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-impose")
    {
        tag_impose = value;
        tag_impose.value_namespace = name_space;
        tag_impose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "tag-impose")
    {
        tag_impose.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-static-labels" || name == "backup-pseudowires" || name == "l2tp-static-attributes" || name == "l2tp-static" || name == "neighbor" || name == "tag-impose" || name == "class" || name == "source-address" || name == "bandwidth")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::MplsStaticLabels()
    :
    local_static_label{YType::uint32, "local-static-label"},
    remote_static_label{YType::uint32, "remote-static-label"}
{

    yang_name = "mpls-static-labels"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::~MplsStaticLabels()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::has_data() const
{
    if (is_presence_container) return true;
    return local_static_label.is_set
	|| remote_static_label.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_static_label.yfilter)
	|| ydk::is_set(remote_static_label.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-static-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_static_label.is_set || is_set(local_static_label.yfilter)) leaf_name_data.push_back(local_static_label.get_name_leafdata());
    if (remote_static_label.is_set || is_set(remote_static_label.yfilter)) leaf_name_data.push_back(remote_static_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-static-label")
    {
        local_static_label = value;
        local_static_label.value_namespace = name_space;
        local_static_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label = value;
        remote_static_label.value_namespace = name_space;
        remote_static_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-static-label")
    {
        local_static_label.yfilter = yfilter;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-static-label" || name == "remote-static-label")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowires()
    :
    backup_pseudowire(this, {"neighbor", "pseudowire_id"})
{

    yang_name = "backup-pseudowires"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::~BackupPseudowires()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<backup_pseudowire.len(); index++)
    {
        if(backup_pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::has_operation() const
{
    for (std::size_t index=0; index<backup_pseudowire.len(); index++)
    {
        if(backup_pseudowire[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudowires";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-pseudowire")
    {
        auto c = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire>();
        c->parent = this;
        backup_pseudowire.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : backup_pseudowire.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-pseudowire")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupPseudowire()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    backup_pw_class{YType::str, "backup-pw-class"}
        ,
    backup_mpls_static_labels(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels>())
{
    backup_mpls_static_labels->parent = this;

    yang_name = "backup-pseudowire"; yang_parent_name = "backup-pseudowires"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::~BackupPseudowire()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::has_data() const
{
    if (is_presence_container) return true;
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| backup_pw_class.is_set
	|| (backup_mpls_static_labels !=  nullptr && backup_mpls_static_labels->has_data());
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(backup_pw_class.yfilter)
	|| (backup_mpls_static_labels !=  nullptr && backup_mpls_static_labels->has_operation());
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudowire";
    ADD_KEY_TOKEN(neighbor, "neighbor");
    ADD_KEY_TOKEN(pseudowire_id, "pseudowire-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (backup_pw_class.is_set || is_set(backup_pw_class.yfilter)) leaf_name_data.push_back(backup_pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-mpls-static-labels")
    {
        if(backup_mpls_static_labels == nullptr)
        {
            backup_mpls_static_labels = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels>();
        }
        return backup_mpls_static_labels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(backup_mpls_static_labels != nullptr)
    {
        children["backup-mpls-static-labels"] = backup_mpls_static_labels;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pw-class")
    {
        backup_pw_class = value;
        backup_pw_class.value_namespace = name_space;
        backup_pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
    if(value_path == "backup-pw-class")
    {
        backup_pw_class.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-mpls-static-labels" || name == "neighbor" || name == "pseudowire-id" || name == "backup-pw-class")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::BackupMplsStaticLabels()
    :
    local_static_label{YType::uint32, "local-static-label"},
    remote_static_label{YType::uint32, "remote-static-label"}
{

    yang_name = "backup-mpls-static-labels"; yang_parent_name = "backup-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::~BackupMplsStaticLabels()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::has_data() const
{
    if (is_presence_container) return true;
    return local_static_label.is_set
	|| remote_static_label.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_static_label.yfilter)
	|| ydk::is_set(remote_static_label.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-mpls-static-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_static_label.is_set || is_set(local_static_label.yfilter)) leaf_name_data.push_back(local_static_label.get_name_leafdata());
    if (remote_static_label.is_set || is_set(remote_static_label.yfilter)) leaf_name_data.push_back(remote_static_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-static-label")
    {
        local_static_label = value;
        local_static_label.value_namespace = name_space;
        local_static_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label = value;
        remote_static_label.value_namespace = name_space;
        remote_static_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-static-label")
    {
        local_static_label.yfilter = yfilter;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-static-label" || name == "remote-static-label")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpStaticAttributes()
    :
    l2tp_remote_session_id{YType::uint32, "l2tp-remote-session-id"},
    l2tp_local_session_id{YType::uint32, "l2tp-local-session-id"}
        ,
    l2tp_remote_cookie(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpRemoteCookie>())
    , l2tp_secondary_local_cookie(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpSecondaryLocalCookie>())
    , l2tp_local_cookie(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpLocalCookie>())
{
    l2tp_remote_cookie->parent = this;
    l2tp_secondary_local_cookie->parent = this;
    l2tp_local_cookie->parent = this;

    yang_name = "l2tp-static-attributes"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::~L2tpStaticAttributes()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::has_data() const
{
    if (is_presence_container) return true;
    return l2tp_remote_session_id.is_set
	|| l2tp_local_session_id.is_set
	|| (l2tp_remote_cookie !=  nullptr && l2tp_remote_cookie->has_data())
	|| (l2tp_secondary_local_cookie !=  nullptr && l2tp_secondary_local_cookie->has_data())
	|| (l2tp_local_cookie !=  nullptr && l2tp_local_cookie->has_data());
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2tp_remote_session_id.yfilter)
	|| ydk::is_set(l2tp_local_session_id.yfilter)
	|| (l2tp_remote_cookie !=  nullptr && l2tp_remote_cookie->has_operation())
	|| (l2tp_secondary_local_cookie !=  nullptr && l2tp_secondary_local_cookie->has_operation())
	|| (l2tp_local_cookie !=  nullptr && l2tp_local_cookie->has_operation());
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-static-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2tp_remote_session_id.is_set || is_set(l2tp_remote_session_id.yfilter)) leaf_name_data.push_back(l2tp_remote_session_id.get_name_leafdata());
    if (l2tp_local_session_id.is_set || is_set(l2tp_local_session_id.yfilter)) leaf_name_data.push_back(l2tp_local_session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tp-remote-cookie")
    {
        if(l2tp_remote_cookie == nullptr)
        {
            l2tp_remote_cookie = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpRemoteCookie>();
        }
        return l2tp_remote_cookie;
    }

    if(child_yang_name == "l2tp-secondary-local-cookie")
    {
        if(l2tp_secondary_local_cookie == nullptr)
        {
            l2tp_secondary_local_cookie = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpSecondaryLocalCookie>();
        }
        return l2tp_secondary_local_cookie;
    }

    if(child_yang_name == "l2tp-local-cookie")
    {
        if(l2tp_local_cookie == nullptr)
        {
            l2tp_local_cookie = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpLocalCookie>();
        }
        return l2tp_local_cookie;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(l2tp_remote_cookie != nullptr)
    {
        children["l2tp-remote-cookie"] = l2tp_remote_cookie;
    }

    if(l2tp_secondary_local_cookie != nullptr)
    {
        children["l2tp-secondary-local-cookie"] = l2tp_secondary_local_cookie;
    }

    if(l2tp_local_cookie != nullptr)
    {
        children["l2tp-local-cookie"] = l2tp_local_cookie;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2tp-remote-session-id")
    {
        l2tp_remote_session_id = value;
        l2tp_remote_session_id.value_namespace = name_space;
        l2tp_remote_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-local-session-id")
    {
        l2tp_local_session_id = value;
        l2tp_local_session_id.value_namespace = name_space;
        l2tp_local_session_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2tp-remote-session-id")
    {
        l2tp_remote_session_id.yfilter = yfilter;
    }
    if(value_path == "l2tp-local-session-id")
    {
        l2tp_local_session_id.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tp-remote-cookie" || name == "l2tp-secondary-local-cookie" || name == "l2tp-local-cookie" || name == "l2tp-remote-session-id" || name == "l2tp-local-session-id")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpRemoteCookie::L2tpRemoteCookie()
    :
    size{YType::enumeration, "size"},
    lower_value{YType::uint32, "lower-value"},
    higher_value{YType::uint32, "higher-value"}
{

    yang_name = "l2tp-remote-cookie"; yang_parent_name = "l2tp-static-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpRemoteCookie::~L2tpRemoteCookie()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpRemoteCookie::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| lower_value.is_set
	|| higher_value.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpRemoteCookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(lower_value.yfilter)
	|| ydk::is_set(higher_value.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpRemoteCookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-remote-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpRemoteCookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (lower_value.is_set || is_set(lower_value.yfilter)) leaf_name_data.push_back(lower_value.get_name_leafdata());
    if (higher_value.is_set || is_set(higher_value.yfilter)) leaf_name_data.push_back(higher_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpRemoteCookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpRemoteCookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpRemoteCookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-value")
    {
        lower_value = value;
        lower_value.value_namespace = name_space;
        lower_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "higher-value")
    {
        higher_value = value;
        higher_value.value_namespace = name_space;
        higher_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpRemoteCookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "lower-value")
    {
        lower_value.yfilter = yfilter;
    }
    if(value_path == "higher-value")
    {
        higher_value.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpRemoteCookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "lower-value" || name == "higher-value")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpSecondaryLocalCookie::L2tpSecondaryLocalCookie()
    :
    size{YType::enumeration, "size"},
    lower_value{YType::uint32, "lower-value"},
    higher_value{YType::uint32, "higher-value"}
{

    yang_name = "l2tp-secondary-local-cookie"; yang_parent_name = "l2tp-static-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpSecondaryLocalCookie::~L2tpSecondaryLocalCookie()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpSecondaryLocalCookie::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| lower_value.is_set
	|| higher_value.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpSecondaryLocalCookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(lower_value.yfilter)
	|| ydk::is_set(higher_value.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpSecondaryLocalCookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-secondary-local-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpSecondaryLocalCookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (lower_value.is_set || is_set(lower_value.yfilter)) leaf_name_data.push_back(lower_value.get_name_leafdata());
    if (higher_value.is_set || is_set(higher_value.yfilter)) leaf_name_data.push_back(higher_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpSecondaryLocalCookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpSecondaryLocalCookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpSecondaryLocalCookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-value")
    {
        lower_value = value;
        lower_value.value_namespace = name_space;
        lower_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "higher-value")
    {
        higher_value = value;
        higher_value.value_namespace = name_space;
        higher_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpSecondaryLocalCookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "lower-value")
    {
        lower_value.yfilter = yfilter;
    }
    if(value_path == "higher-value")
    {
        higher_value.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpSecondaryLocalCookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "lower-value" || name == "higher-value")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpLocalCookie::L2tpLocalCookie()
    :
    size{YType::enumeration, "size"},
    lower_value{YType::uint32, "lower-value"},
    higher_value{YType::uint32, "higher-value"}
{

    yang_name = "l2tp-local-cookie"; yang_parent_name = "l2tp-static-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpLocalCookie::~L2tpLocalCookie()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpLocalCookie::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| lower_value.is_set
	|| higher_value.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpLocalCookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(lower_value.yfilter)
	|| ydk::is_set(higher_value.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpLocalCookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-local-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpLocalCookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (lower_value.is_set || is_set(lower_value.yfilter)) leaf_name_data.push_back(lower_value.get_name_leafdata());
    if (higher_value.is_set || is_set(higher_value.yfilter)) leaf_name_data.push_back(higher_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpLocalCookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpLocalCookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpLocalCookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-value")
    {
        lower_value = value;
        lower_value.value_namespace = name_space;
        lower_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "higher-value")
    {
        higher_value = value;
        higher_value.value_namespace = name_space;
        higher_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpLocalCookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "lower-value")
    {
        lower_value.yfilter = yfilter;
    }
    if(value_path == "higher-value")
    {
        higher_value.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStaticAttributes::L2tpLocalCookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "lower-value" || name == "higher-value")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStatic::L2tpStatic()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "l2tp-static"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStatic::~L2tpStatic()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStatic::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStatic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStatic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStatic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStatic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStatic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStatic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStatic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::Neighbor::L2tpStatic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::PseudowireAddress()
    :
    pseudowire_address{YType::str, "pseudowire-address"},
    tag_impose{YType::uint32, "tag-impose"},
    class_{YType::str, "class"},
    source_address{YType::str, "source-address"},
    bandwidth{YType::uint32, "bandwidth"}
        ,
    mpls_static_labels(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels>())
    , backup_pseudowires(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires>())
    , l2tp_static_attributes(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes>())
    , l2tp_static(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStatic>())
{
    mpls_static_labels->parent = this;
    backup_pseudowires->parent = this;
    l2tp_static_attributes->parent = this;
    l2tp_static->parent = this;

    yang_name = "pseudowire-address"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::~PseudowireAddress()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::has_data() const
{
    if (is_presence_container) return true;
    return pseudowire_address.is_set
	|| tag_impose.is_set
	|| class_.is_set
	|| source_address.is_set
	|| bandwidth.is_set
	|| (mpls_static_labels !=  nullptr && mpls_static_labels->has_data())
	|| (backup_pseudowires !=  nullptr && backup_pseudowires->has_data())
	|| (l2tp_static_attributes !=  nullptr && l2tp_static_attributes->has_data())
	|| (l2tp_static !=  nullptr && l2tp_static->has_data());
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pseudowire_address.yfilter)
	|| ydk::is_set(tag_impose.yfilter)
	|| ydk::is_set(class_.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| (mpls_static_labels !=  nullptr && mpls_static_labels->has_operation())
	|| (backup_pseudowires !=  nullptr && backup_pseudowires->has_operation())
	|| (l2tp_static_attributes !=  nullptr && l2tp_static_attributes->has_operation())
	|| (l2tp_static !=  nullptr && l2tp_static->has_operation());
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-address";
    ADD_KEY_TOKEN(pseudowire_address, "pseudowire-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_address.is_set || is_set(pseudowire_address.yfilter)) leaf_name_data.push_back(pseudowire_address.get_name_leafdata());
    if (tag_impose.is_set || is_set(tag_impose.yfilter)) leaf_name_data.push_back(tag_impose.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-static-labels")
    {
        if(mpls_static_labels == nullptr)
        {
            mpls_static_labels = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels>();
        }
        return mpls_static_labels;
    }

    if(child_yang_name == "backup-pseudowires")
    {
        if(backup_pseudowires == nullptr)
        {
            backup_pseudowires = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires>();
        }
        return backup_pseudowires;
    }

    if(child_yang_name == "l2tp-static-attributes")
    {
        if(l2tp_static_attributes == nullptr)
        {
            l2tp_static_attributes = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes>();
        }
        return l2tp_static_attributes;
    }

    if(child_yang_name == "l2tp-static")
    {
        if(l2tp_static == nullptr)
        {
            l2tp_static = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStatic>();
        }
        return l2tp_static;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mpls_static_labels != nullptr)
    {
        children["mpls-static-labels"] = mpls_static_labels;
    }

    if(backup_pseudowires != nullptr)
    {
        children["backup-pseudowires"] = backup_pseudowires;
    }

    if(l2tp_static_attributes != nullptr)
    {
        children["l2tp-static-attributes"] = l2tp_static_attributes;
    }

    if(l2tp_static != nullptr)
    {
        children["l2tp-static"] = l2tp_static;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pseudowire-address")
    {
        pseudowire_address = value;
        pseudowire_address.value_namespace = name_space;
        pseudowire_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-impose")
    {
        tag_impose = value;
        tag_impose.value_namespace = name_space;
        tag_impose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pseudowire-address")
    {
        pseudowire_address.yfilter = yfilter;
    }
    if(value_path == "tag-impose")
    {
        tag_impose.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-static-labels" || name == "backup-pseudowires" || name == "l2tp-static-attributes" || name == "l2tp-static" || name == "pseudowire-address" || name == "tag-impose" || name == "class" || name == "source-address" || name == "bandwidth")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::MplsStaticLabels()
    :
    local_static_label{YType::uint32, "local-static-label"},
    remote_static_label{YType::uint32, "remote-static-label"}
{

    yang_name = "mpls-static-labels"; yang_parent_name = "pseudowire-address"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::~MplsStaticLabels()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::has_data() const
{
    if (is_presence_container) return true;
    return local_static_label.is_set
	|| remote_static_label.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_static_label.yfilter)
	|| ydk::is_set(remote_static_label.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-static-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_static_label.is_set || is_set(local_static_label.yfilter)) leaf_name_data.push_back(local_static_label.get_name_leafdata());
    if (remote_static_label.is_set || is_set(remote_static_label.yfilter)) leaf_name_data.push_back(remote_static_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-static-label")
    {
        local_static_label = value;
        local_static_label.value_namespace = name_space;
        local_static_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label = value;
        remote_static_label.value_namespace = name_space;
        remote_static_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-static-label")
    {
        local_static_label.yfilter = yfilter;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-static-label" || name == "remote-static-label")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowires()
    :
    backup_pseudowire(this, {"neighbor", "pseudowire_id"})
{

    yang_name = "backup-pseudowires"; yang_parent_name = "pseudowire-address"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::~BackupPseudowires()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<backup_pseudowire.len(); index++)
    {
        if(backup_pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::has_operation() const
{
    for (std::size_t index=0; index<backup_pseudowire.len(); index++)
    {
        if(backup_pseudowire[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudowires";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-pseudowire")
    {
        auto c = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire>();
        c->parent = this;
        backup_pseudowire.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : backup_pseudowire.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-pseudowire")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupPseudowire()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    backup_pw_class{YType::str, "backup-pw-class"}
        ,
    backup_mpls_static_labels(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels>())
{
    backup_mpls_static_labels->parent = this;

    yang_name = "backup-pseudowire"; yang_parent_name = "backup-pseudowires"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::~BackupPseudowire()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::has_data() const
{
    if (is_presence_container) return true;
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| backup_pw_class.is_set
	|| (backup_mpls_static_labels !=  nullptr && backup_mpls_static_labels->has_data());
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(backup_pw_class.yfilter)
	|| (backup_mpls_static_labels !=  nullptr && backup_mpls_static_labels->has_operation());
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudowire";
    ADD_KEY_TOKEN(neighbor, "neighbor");
    ADD_KEY_TOKEN(pseudowire_id, "pseudowire-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (backup_pw_class.is_set || is_set(backup_pw_class.yfilter)) leaf_name_data.push_back(backup_pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-mpls-static-labels")
    {
        if(backup_mpls_static_labels == nullptr)
        {
            backup_mpls_static_labels = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels>();
        }
        return backup_mpls_static_labels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(backup_mpls_static_labels != nullptr)
    {
        children["backup-mpls-static-labels"] = backup_mpls_static_labels;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-pw-class")
    {
        backup_pw_class = value;
        backup_pw_class.value_namespace = name_space;
        backup_pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
    if(value_path == "backup-pw-class")
    {
        backup_pw_class.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-mpls-static-labels" || name == "neighbor" || name == "pseudowire-id" || name == "backup-pw-class")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::BackupMplsStaticLabels()
    :
    local_static_label{YType::uint32, "local-static-label"},
    remote_static_label{YType::uint32, "remote-static-label"}
{

    yang_name = "backup-mpls-static-labels"; yang_parent_name = "backup-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::~BackupMplsStaticLabels()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::has_data() const
{
    if (is_presence_container) return true;
    return local_static_label.is_set
	|| remote_static_label.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_static_label.yfilter)
	|| ydk::is_set(remote_static_label.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-mpls-static-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_static_label.is_set || is_set(local_static_label.yfilter)) leaf_name_data.push_back(local_static_label.get_name_leafdata());
    if (remote_static_label.is_set || is_set(remote_static_label.yfilter)) leaf_name_data.push_back(remote_static_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-static-label")
    {
        local_static_label = value;
        local_static_label.value_namespace = name_space;
        local_static_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label = value;
        remote_static_label.value_namespace = name_space;
        remote_static_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-static-label")
    {
        local_static_label.yfilter = yfilter;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-static-label" || name == "remote-static-label")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpStaticAttributes()
    :
    l2tp_remote_session_id{YType::uint32, "l2tp-remote-session-id"},
    l2tp_local_session_id{YType::uint32, "l2tp-local-session-id"}
        ,
    l2tp_remote_cookie(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpRemoteCookie>())
    , l2tp_secondary_local_cookie(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpSecondaryLocalCookie>())
    , l2tp_local_cookie(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpLocalCookie>())
{
    l2tp_remote_cookie->parent = this;
    l2tp_secondary_local_cookie->parent = this;
    l2tp_local_cookie->parent = this;

    yang_name = "l2tp-static-attributes"; yang_parent_name = "pseudowire-address"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::~L2tpStaticAttributes()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::has_data() const
{
    if (is_presence_container) return true;
    return l2tp_remote_session_id.is_set
	|| l2tp_local_session_id.is_set
	|| (l2tp_remote_cookie !=  nullptr && l2tp_remote_cookie->has_data())
	|| (l2tp_secondary_local_cookie !=  nullptr && l2tp_secondary_local_cookie->has_data())
	|| (l2tp_local_cookie !=  nullptr && l2tp_local_cookie->has_data());
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2tp_remote_session_id.yfilter)
	|| ydk::is_set(l2tp_local_session_id.yfilter)
	|| (l2tp_remote_cookie !=  nullptr && l2tp_remote_cookie->has_operation())
	|| (l2tp_secondary_local_cookie !=  nullptr && l2tp_secondary_local_cookie->has_operation())
	|| (l2tp_local_cookie !=  nullptr && l2tp_local_cookie->has_operation());
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-static-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2tp_remote_session_id.is_set || is_set(l2tp_remote_session_id.yfilter)) leaf_name_data.push_back(l2tp_remote_session_id.get_name_leafdata());
    if (l2tp_local_session_id.is_set || is_set(l2tp_local_session_id.yfilter)) leaf_name_data.push_back(l2tp_local_session_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2tp-remote-cookie")
    {
        if(l2tp_remote_cookie == nullptr)
        {
            l2tp_remote_cookie = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpRemoteCookie>();
        }
        return l2tp_remote_cookie;
    }

    if(child_yang_name == "l2tp-secondary-local-cookie")
    {
        if(l2tp_secondary_local_cookie == nullptr)
        {
            l2tp_secondary_local_cookie = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpSecondaryLocalCookie>();
        }
        return l2tp_secondary_local_cookie;
    }

    if(child_yang_name == "l2tp-local-cookie")
    {
        if(l2tp_local_cookie == nullptr)
        {
            l2tp_local_cookie = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpLocalCookie>();
        }
        return l2tp_local_cookie;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(l2tp_remote_cookie != nullptr)
    {
        children["l2tp-remote-cookie"] = l2tp_remote_cookie;
    }

    if(l2tp_secondary_local_cookie != nullptr)
    {
        children["l2tp-secondary-local-cookie"] = l2tp_secondary_local_cookie;
    }

    if(l2tp_local_cookie != nullptr)
    {
        children["l2tp-local-cookie"] = l2tp_local_cookie;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2tp-remote-session-id")
    {
        l2tp_remote_session_id = value;
        l2tp_remote_session_id.value_namespace = name_space;
        l2tp_remote_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-local-session-id")
    {
        l2tp_local_session_id = value;
        l2tp_local_session_id.value_namespace = name_space;
        l2tp_local_session_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2tp-remote-session-id")
    {
        l2tp_remote_session_id.yfilter = yfilter;
    }
    if(value_path == "l2tp-local-session-id")
    {
        l2tp_local_session_id.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tp-remote-cookie" || name == "l2tp-secondary-local-cookie" || name == "l2tp-local-cookie" || name == "l2tp-remote-session-id" || name == "l2tp-local-session-id")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpRemoteCookie::L2tpRemoteCookie()
    :
    size{YType::enumeration, "size"},
    lower_value{YType::uint32, "lower-value"},
    higher_value{YType::uint32, "higher-value"}
{

    yang_name = "l2tp-remote-cookie"; yang_parent_name = "l2tp-static-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpRemoteCookie::~L2tpRemoteCookie()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpRemoteCookie::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| lower_value.is_set
	|| higher_value.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpRemoteCookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(lower_value.yfilter)
	|| ydk::is_set(higher_value.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpRemoteCookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-remote-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpRemoteCookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (lower_value.is_set || is_set(lower_value.yfilter)) leaf_name_data.push_back(lower_value.get_name_leafdata());
    if (higher_value.is_set || is_set(higher_value.yfilter)) leaf_name_data.push_back(higher_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpRemoteCookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpRemoteCookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpRemoteCookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-value")
    {
        lower_value = value;
        lower_value.value_namespace = name_space;
        lower_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "higher-value")
    {
        higher_value = value;
        higher_value.value_namespace = name_space;
        higher_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpRemoteCookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "lower-value")
    {
        lower_value.yfilter = yfilter;
    }
    if(value_path == "higher-value")
    {
        higher_value.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpRemoteCookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "lower-value" || name == "higher-value")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpSecondaryLocalCookie::L2tpSecondaryLocalCookie()
    :
    size{YType::enumeration, "size"},
    lower_value{YType::uint32, "lower-value"},
    higher_value{YType::uint32, "higher-value"}
{

    yang_name = "l2tp-secondary-local-cookie"; yang_parent_name = "l2tp-static-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpSecondaryLocalCookie::~L2tpSecondaryLocalCookie()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpSecondaryLocalCookie::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| lower_value.is_set
	|| higher_value.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpSecondaryLocalCookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(lower_value.yfilter)
	|| ydk::is_set(higher_value.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpSecondaryLocalCookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-secondary-local-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpSecondaryLocalCookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (lower_value.is_set || is_set(lower_value.yfilter)) leaf_name_data.push_back(lower_value.get_name_leafdata());
    if (higher_value.is_set || is_set(higher_value.yfilter)) leaf_name_data.push_back(higher_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpSecondaryLocalCookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpSecondaryLocalCookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpSecondaryLocalCookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-value")
    {
        lower_value = value;
        lower_value.value_namespace = name_space;
        lower_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "higher-value")
    {
        higher_value = value;
        higher_value.value_namespace = name_space;
        higher_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpSecondaryLocalCookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "lower-value")
    {
        lower_value.yfilter = yfilter;
    }
    if(value_path == "higher-value")
    {
        higher_value.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpSecondaryLocalCookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "lower-value" || name == "higher-value")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpLocalCookie::L2tpLocalCookie()
    :
    size{YType::enumeration, "size"},
    lower_value{YType::uint32, "lower-value"},
    higher_value{YType::uint32, "higher-value"}
{

    yang_name = "l2tp-local-cookie"; yang_parent_name = "l2tp-static-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpLocalCookie::~L2tpLocalCookie()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpLocalCookie::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| lower_value.is_set
	|| higher_value.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpLocalCookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(lower_value.yfilter)
	|| ydk::is_set(higher_value.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpLocalCookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-local-cookie";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpLocalCookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (lower_value.is_set || is_set(lower_value.yfilter)) leaf_name_data.push_back(lower_value.get_name_leafdata());
    if (higher_value.is_set || is_set(higher_value.yfilter)) leaf_name_data.push_back(higher_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpLocalCookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpLocalCookie::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpLocalCookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lower-value")
    {
        lower_value = value;
        lower_value.value_namespace = name_space;
        lower_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "higher-value")
    {
        higher_value = value;
        higher_value.value_namespace = name_space;
        higher_value.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpLocalCookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "lower-value")
    {
        lower_value.yfilter = yfilter;
    }
    if(value_path == "higher-value")
    {
        higher_value.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStaticAttributes::L2tpLocalCookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "lower-value" || name == "higher-value")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStatic::L2tpStatic()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "l2tp-static"; yang_parent_name = "pseudowire-address"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStatic::~L2tpStatic()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStatic::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStatic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStatic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStatic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStatic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStatic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStatic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStatic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2tpStatic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::MonitorSessions()
    :
    monitor_session(this, {"name"})
{

    yang_name = "monitor-sessions"; yang_parent_name = "p2p-xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::~MonitorSessions()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<monitor_session.len(); index++)
    {
        if(monitor_session[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::has_operation() const
{
    for (std::size_t index=0; index<monitor_session.len(); index++)
    {
        if(monitor_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor-session")
    {
        auto c = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::MonitorSession>();
        c->parent = this;
        monitor_session.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : monitor_session.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor-session")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::MonitorSession::MonitorSession()
    :
    name{YType::str, "name"},
    enable{YType::empty, "enable"}
{

    yang_name = "monitor-session"; yang_parent_name = "monitor-sessions"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::MonitorSession::~MonitorSession()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::MonitorSession::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| enable.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::MonitorSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::MonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-session";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::MonitorSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::MonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::MonitorSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::MonitorSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::MonitorSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::MonitorSessions::MonitorSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::PseudowireRouteds()
    :
    pseudowire_routed(this, {"global_id", "prefix", "acid", "sacid"})
{

    yang_name = "pseudowire-routeds"; yang_parent_name = "p2p-xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::~PseudowireRouteds()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pseudowire_routed.len(); index++)
    {
        if(pseudowire_routed[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::has_operation() const
{
    for (std::size_t index=0; index<pseudowire_routed.len(); index++)
    {
        if(pseudowire_routed[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-routeds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire-routed")
    {
        auto c = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::PseudowireRouted>();
        c->parent = this;
        pseudowire_routed.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pseudowire_routed.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-routed")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::PseudowireRouted::PseudowireRouted()
    :
    global_id{YType::uint32, "global-id"},
    prefix{YType::str, "prefix"},
    acid{YType::uint32, "acid"},
    sacid{YType::uint32, "sacid"},
    tag_impose{YType::uint32, "tag-impose"},
    class_{YType::str, "class"}
{

    yang_name = "pseudowire-routed"; yang_parent_name = "pseudowire-routeds"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::PseudowireRouted::~PseudowireRouted()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::PseudowireRouted::has_data() const
{
    if (is_presence_container) return true;
    return global_id.is_set
	|| prefix.is_set
	|| acid.is_set
	|| sacid.is_set
	|| tag_impose.is_set
	|| class_.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::PseudowireRouted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(acid.yfilter)
	|| ydk::is_set(sacid.yfilter)
	|| ydk::is_set(tag_impose.yfilter)
	|| ydk::is_set(class_.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::PseudowireRouted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-routed";
    ADD_KEY_TOKEN(global_id, "global-id");
    ADD_KEY_TOKEN(prefix, "prefix");
    ADD_KEY_TOKEN(acid, "acid");
    ADD_KEY_TOKEN(sacid, "sacid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::PseudowireRouted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_id.is_set || is_set(global_id.yfilter)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (acid.is_set || is_set(acid.yfilter)) leaf_name_data.push_back(acid.get_name_leafdata());
    if (sacid.is_set || is_set(sacid.yfilter)) leaf_name_data.push_back(sacid.get_name_leafdata());
    if (tag_impose.is_set || is_set(tag_impose.yfilter)) leaf_name_data.push_back(tag_impose.get_name_leafdata());
    if (class_.is_set || is_set(class_.yfilter)) leaf_name_data.push_back(class_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::PseudowireRouted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::PseudowireRouted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::PseudowireRouted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-id")
    {
        global_id = value;
        global_id.value_namespace = name_space;
        global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acid")
    {
        acid = value;
        acid.value_namespace = name_space;
        acid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sacid")
    {
        sacid = value;
        sacid.value_namespace = name_space;
        sacid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag-impose")
    {
        tag_impose = value;
        tag_impose.value_namespace = name_space;
        tag_impose.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class")
    {
        class_ = value;
        class_.value_namespace = name_space;
        class_.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::PseudowireRouted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-id")
    {
        global_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "acid")
    {
        acid.yfilter = yfilter;
    }
    if(value_path == "sacid")
    {
        sacid.yfilter = yfilter;
    }
    if(value_path == "tag-impose")
    {
        tag_impose.yfilter = yfilter;
    }
    if(value_path == "class")
    {
        class_.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::PseudowireRouteds::PseudowireRouted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-id" || name == "prefix" || name == "acid" || name == "sacid" || name == "tag-impose" || name == "class")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::AttachmentCircuits()
    :
    attachment_circuit(this, {"name"})
{

    yang_name = "attachment-circuits"; yang_parent_name = "p2p-xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::~AttachmentCircuits()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attachment_circuit.len(); index++)
    {
        if(attachment_circuit[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::has_operation() const
{
    for (std::size_t index=0; index<attachment_circuit.len(); index++)
    {
        if(attachment_circuit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment-circuits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attachment-circuit")
    {
        auto c = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::AttachmentCircuit>();
        c->parent = this;
        attachment_circuit.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : attachment_circuit.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attachment-circuit")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::AttachmentCircuit::AttachmentCircuit()
    :
    name{YType::str, "name"},
    enable{YType::empty, "enable"}
{

    yang_name = "attachment-circuit"; yang_parent_name = "attachment-circuits"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::AttachmentCircuit::~AttachmentCircuit()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::AttachmentCircuit::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| enable.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::AttachmentCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::AttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment-circuit";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::AttachmentCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::AttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::AttachmentCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::AttachmentCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::AttachmentCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::P2pXconnects::P2pXconnect::AttachmentCircuits::AttachmentCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnects()
    :
    mp2mp_xconnect(this, {"name"})
{

    yang_name = "mp2mp-xconnects"; yang_parent_name = "xconnect-group"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::~Mp2mpXconnects()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mp2mp_xconnect.len(); index++)
    {
        if(mp2mp_xconnect[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::has_operation() const
{
    for (std::size_t index=0; index<mp2mp_xconnect.len(); index++)
    {
        if(mp2mp_xconnect[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-xconnects";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mp2mp-xconnect")
    {
        auto c = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect>();
        c->parent = this;
        mp2mp_xconnect.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mp2mp_xconnect.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mp2mp-xconnect")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpXconnect()
    :
    name{YType::str, "name"},
    mp2mpmtu{YType::uint32, "mp2mpmtu"},
    mp2mp_control_word{YType::empty, "mp2mp-control-word"},
    mp2mpl2_encapsulation{YType::enumeration, "mp2mpl2-encapsulation"},
    mp2mp_interworking{YType::enumeration, "mp2mp-interworking"},
    mp2mp_shutdown{YType::empty, "mp2mp-shutdown"},
    mp2mpvpn_id{YType::uint32, "mp2mpvpn-id"}
        ,
    mp2mp_auto_discovery(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery>())
{
    mp2mp_auto_discovery->parent = this;

    yang_name = "mp2mp-xconnect"; yang_parent_name = "mp2mp-xconnects"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::~Mp2mpXconnect()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| mp2mpmtu.is_set
	|| mp2mp_control_word.is_set
	|| mp2mpl2_encapsulation.is_set
	|| mp2mp_interworking.is_set
	|| mp2mp_shutdown.is_set
	|| mp2mpvpn_id.is_set
	|| (mp2mp_auto_discovery !=  nullptr && mp2mp_auto_discovery->has_data());
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mp2mpmtu.yfilter)
	|| ydk::is_set(mp2mp_control_word.yfilter)
	|| ydk::is_set(mp2mpl2_encapsulation.yfilter)
	|| ydk::is_set(mp2mp_interworking.yfilter)
	|| ydk::is_set(mp2mp_shutdown.yfilter)
	|| ydk::is_set(mp2mpvpn_id.yfilter)
	|| (mp2mp_auto_discovery !=  nullptr && mp2mp_auto_discovery->has_operation());
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-xconnect";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mp2mpmtu.is_set || is_set(mp2mpmtu.yfilter)) leaf_name_data.push_back(mp2mpmtu.get_name_leafdata());
    if (mp2mp_control_word.is_set || is_set(mp2mp_control_word.yfilter)) leaf_name_data.push_back(mp2mp_control_word.get_name_leafdata());
    if (mp2mpl2_encapsulation.is_set || is_set(mp2mpl2_encapsulation.yfilter)) leaf_name_data.push_back(mp2mpl2_encapsulation.get_name_leafdata());
    if (mp2mp_interworking.is_set || is_set(mp2mp_interworking.yfilter)) leaf_name_data.push_back(mp2mp_interworking.get_name_leafdata());
    if (mp2mp_shutdown.is_set || is_set(mp2mp_shutdown.yfilter)) leaf_name_data.push_back(mp2mp_shutdown.get_name_leafdata());
    if (mp2mpvpn_id.is_set || is_set(mp2mpvpn_id.yfilter)) leaf_name_data.push_back(mp2mpvpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mp2mp-auto-discovery")
    {
        if(mp2mp_auto_discovery == nullptr)
        {
            mp2mp_auto_discovery = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery>();
        }
        return mp2mp_auto_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mp2mp_auto_discovery != nullptr)
    {
        children["mp2mp-auto-discovery"] = mp2mp_auto_discovery;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp2mpmtu")
    {
        mp2mpmtu = value;
        mp2mpmtu.value_namespace = name_space;
        mp2mpmtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp2mp-control-word")
    {
        mp2mp_control_word = value;
        mp2mp_control_word.value_namespace = name_space;
        mp2mp_control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp2mpl2-encapsulation")
    {
        mp2mpl2_encapsulation = value;
        mp2mpl2_encapsulation.value_namespace = name_space;
        mp2mpl2_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp2mp-interworking")
    {
        mp2mp_interworking = value;
        mp2mp_interworking.value_namespace = name_space;
        mp2mp_interworking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp2mp-shutdown")
    {
        mp2mp_shutdown = value;
        mp2mp_shutdown.value_namespace = name_space;
        mp2mp_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp2mpvpn-id")
    {
        mp2mpvpn_id = value;
        mp2mpvpn_id.value_namespace = name_space;
        mp2mpvpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "mp2mpmtu")
    {
        mp2mpmtu.yfilter = yfilter;
    }
    if(value_path == "mp2mp-control-word")
    {
        mp2mp_control_word.yfilter = yfilter;
    }
    if(value_path == "mp2mpl2-encapsulation")
    {
        mp2mpl2_encapsulation.yfilter = yfilter;
    }
    if(value_path == "mp2mp-interworking")
    {
        mp2mp_interworking.yfilter = yfilter;
    }
    if(value_path == "mp2mp-shutdown")
    {
        mp2mp_shutdown.yfilter = yfilter;
    }
    if(value_path == "mp2mpvpn-id")
    {
        mp2mpvpn_id.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mp2mp-auto-discovery" || name == "name" || name == "mp2mpmtu" || name == "mp2mp-control-word" || name == "mp2mpl2-encapsulation" || name == "mp2mp-interworking" || name == "mp2mp-shutdown" || name == "mp2mpvpn-id")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpAutoDiscovery()
    :
    enable{YType::empty, "enable"}
        ,
    route_distinguisher(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::RouteDistinguisher>())
    , mp2mp_route_policy(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRoutePolicy>())
    , mp2mp_route_targets(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets>())
    , mp2mp_signaling_protocol(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol>())
{
    route_distinguisher->parent = this;
    mp2mp_route_policy->parent = this;
    mp2mp_route_targets->parent = this;
    mp2mp_signaling_protocol->parent = this;

    yang_name = "mp2mp-auto-discovery"; yang_parent_name = "mp2mp-xconnect"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::~Mp2mpAutoDiscovery()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (route_distinguisher !=  nullptr && route_distinguisher->has_data())
	|| (mp2mp_route_policy !=  nullptr && mp2mp_route_policy->has_data())
	|| (mp2mp_route_targets !=  nullptr && mp2mp_route_targets->has_data())
	|| (mp2mp_signaling_protocol !=  nullptr && mp2mp_signaling_protocol->has_data());
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (route_distinguisher !=  nullptr && route_distinguisher->has_operation())
	|| (mp2mp_route_policy !=  nullptr && mp2mp_route_policy->has_operation())
	|| (mp2mp_route_targets !=  nullptr && mp2mp_route_targets->has_operation())
	|| (mp2mp_signaling_protocol !=  nullptr && mp2mp_signaling_protocol->has_operation());
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-auto-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-distinguisher")
    {
        if(route_distinguisher == nullptr)
        {
            route_distinguisher = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::RouteDistinguisher>();
        }
        return route_distinguisher;
    }

    if(child_yang_name == "mp2mp-route-policy")
    {
        if(mp2mp_route_policy == nullptr)
        {
            mp2mp_route_policy = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRoutePolicy>();
        }
        return mp2mp_route_policy;
    }

    if(child_yang_name == "mp2mp-route-targets")
    {
        if(mp2mp_route_targets == nullptr)
        {
            mp2mp_route_targets = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets>();
        }
        return mp2mp_route_targets;
    }

    if(child_yang_name == "mp2mp-signaling-protocol")
    {
        if(mp2mp_signaling_protocol == nullptr)
        {
            mp2mp_signaling_protocol = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol>();
        }
        return mp2mp_signaling_protocol;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(route_distinguisher != nullptr)
    {
        children["route-distinguisher"] = route_distinguisher;
    }

    if(mp2mp_route_policy != nullptr)
    {
        children["mp2mp-route-policy"] = mp2mp_route_policy;
    }

    if(mp2mp_route_targets != nullptr)
    {
        children["mp2mp-route-targets"] = mp2mp_route_targets;
    }

    if(mp2mp_signaling_protocol != nullptr)
    {
        children["mp2mp-signaling-protocol"] = mp2mp_signaling_protocol;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-distinguisher" || name == "mp2mp-route-policy" || name == "mp2mp-route-targets" || name == "mp2mp-signaling-protocol" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::RouteDistinguisher::RouteDistinguisher()
    :
    type{YType::enumeration, "type"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    address{YType::str, "address"},
    addr_index{YType::uint32, "addr-index"}
{

    yang_name = "route-distinguisher"; yang_parent_name = "mp2mp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::RouteDistinguisher::~RouteDistinguisher()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::RouteDistinguisher::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| as.is_set
	|| as_index.is_set
	|| address.is_set
	|| addr_index.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::RouteDistinguisher::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(addr_index.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::RouteDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-distinguisher";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::RouteDistinguisher::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::RouteDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::RouteDistinguisher::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::RouteDistinguisher::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr-index")
    {
        addr_index = value;
        addr_index.value_namespace = name_space;
        addr_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::RouteDistinguisher::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::RouteDistinguisher::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "as" || name == "as-index" || name == "address" || name == "addr-index")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRoutePolicy::Mp2mpRoutePolicy()
    :
    export_{YType::str, "export"}
{

    yang_name = "mp2mp-route-policy"; yang_parent_name = "mp2mp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRoutePolicy::~Mp2mpRoutePolicy()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRoutePolicy::has_data() const
{
    if (is_presence_container) return true;
    return export_.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRoutePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(export_.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-route-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRoutePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (export_.is_set || is_set(export_.yfilter)) leaf_name_data.push_back(export_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRoutePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRoutePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "export")
    {
        export_ = value;
        export_.value_namespace = name_space;
        export_.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRoutePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "export")
    {
        export_.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRoutePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "export")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTargets()
    :
    mp2mp_route_target(this, {"role", "format"})
{

    yang_name = "mp2mp-route-targets"; yang_parent_name = "mp2mp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::~Mp2mpRouteTargets()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mp2mp_route_target.len(); index++)
    {
        if(mp2mp_route_target[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::has_operation() const
{
    for (std::size_t index=0; index<mp2mp_route_target.len(); index++)
    {
        if(mp2mp_route_target[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-route-targets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mp2mp-route-target")
    {
        auto c = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget>();
        c->parent = this;
        mp2mp_route_target.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : mp2mp_route_target.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mp2mp-route-target")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::Mp2mpRouteTarget()
    :
    role{YType::enumeration, "role"},
    format{YType::enumeration, "format"}
        ,
    two_byte_as_or_four_byte_as(this, {"as", "as_index"})
    , ipv4_address(this, {"address", "addr_index"})
{

    yang_name = "mp2mp-route-target"; yang_parent_name = "mp2mp-route-targets"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::~Mp2mpRouteTarget()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<two_byte_as_or_four_byte_as.len(); index++)
    {
        if(two_byte_as_or_four_byte_as[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_address.len(); index++)
    {
        if(ipv4_address[index]->has_data())
            return true;
    }
    return role.is_set
	|| format.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::has_operation() const
{
    for (std::size_t index=0; index<two_byte_as_or_four_byte_as.len(); index++)
    {
        if(two_byte_as_or_four_byte_as[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_address.len(); index++)
    {
        if(ipv4_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(format.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-route-target";
    ADD_KEY_TOKEN(role, "role");
    ADD_KEY_TOKEN(format, "format");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (format.is_set || is_set(format.yfilter)) leaf_name_data.push_back(format.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "two-byte-as-or-four-byte-as")
    {
        auto c = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::TwoByteAsOrFourByteAs>();
        c->parent = this;
        two_byte_as_or_four_byte_as.append(c);
        return c;
    }

    if(child_yang_name == "ipv4-address")
    {
        auto c = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::Ipv4Address>();
        c->parent = this;
        ipv4_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : two_byte_as_or_four_byte_as.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : ipv4_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "format")
    {
        format = value;
        format.value_namespace = name_space;
        format.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "format")
    {
        format.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as-or-four-byte-as" || name == "ipv4-address" || name == "role" || name == "format")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::TwoByteAsOrFourByteAs::TwoByteAsOrFourByteAs()
    :
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"}
{

    yang_name = "two-byte-as-or-four-byte-as"; yang_parent_name = "mp2mp-route-target"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::TwoByteAsOrFourByteAs::~TwoByteAsOrFourByteAs()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::TwoByteAsOrFourByteAs::has_data() const
{
    if (is_presence_container) return true;
    return as.is_set
	|| as_index.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::TwoByteAsOrFourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::TwoByteAsOrFourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as-or-four-byte-as";
    ADD_KEY_TOKEN(as, "as");
    ADD_KEY_TOKEN(as_index, "as-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::TwoByteAsOrFourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::TwoByteAsOrFourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::TwoByteAsOrFourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::TwoByteAsOrFourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::TwoByteAsOrFourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::TwoByteAsOrFourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as" || name == "as-index")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::Ipv4Address::Ipv4Address()
    :
    address{YType::str, "address"},
    addr_index{YType::uint32, "addr-index"}
{

    yang_name = "ipv4-address"; yang_parent_name = "mp2mp-route-target"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::Ipv4Address::~Ipv4Address()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::Ipv4Address::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| addr_index.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::Ipv4Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(addr_index.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address";
    ADD_KEY_TOKEN(address, "address");
    ADD_KEY_TOKEN(addr_index, "addr-index");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::Ipv4Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (addr_index.is_set || is_set(addr_index.yfilter)) leaf_name_data.push_back(addr_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::Ipv4Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::Ipv4Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "addr-index")
    {
        addr_index = value;
        addr_index.value_namespace = name_space;
        addr_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::Ipv4Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "addr-index")
    {
        addr_index.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpRouteTargets::Mp2mpRouteTarget::Ipv4Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "addr-index")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Mp2mpSignalingProtocol()
    :
    ce_range{YType::uint32, "ce-range"},
    enable{YType::empty, "enable"}
        ,
    flow_label_load_balance(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::FlowLabelLoadBalance>())
    , ceids(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids>())
{
    flow_label_load_balance->parent = this;
    ceids->parent = this;

    yang_name = "mp2mp-signaling-protocol"; yang_parent_name = "mp2mp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::~Mp2mpSignalingProtocol()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::has_data() const
{
    if (is_presence_container) return true;
    return ce_range.is_set
	|| enable.is_set
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_data())
	|| (ceids !=  nullptr && ceids->has_data());
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ce_range.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_operation())
	|| (ceids !=  nullptr && ceids->has_operation());
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-signaling-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ce_range.is_set || is_set(ce_range.yfilter)) leaf_name_data.push_back(ce_range.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow-label-load-balance")
    {
        if(flow_label_load_balance == nullptr)
        {
            flow_label_load_balance = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::FlowLabelLoadBalance>();
        }
        return flow_label_load_balance;
    }

    if(child_yang_name == "ceids")
    {
        if(ceids == nullptr)
        {
            ceids = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids>();
        }
        return ceids;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flow_label_load_balance != nullptr)
    {
        children["flow-label-load-balance"] = flow_label_load_balance;
    }

    if(ceids != nullptr)
    {
        children["ceids"] = ceids;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ce-range")
    {
        ce_range = value;
        ce_range.value_namespace = name_space;
        ce_range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ce-range")
    {
        ce_range.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-label-load-balance" || name == "ceids" || name == "ce-range" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::FlowLabelLoadBalance::FlowLabelLoadBalance()
    :
    flow_label{YType::enumeration, "flow-label"},
    static_{YType::empty, "static"}
{

    yang_name = "flow-label-load-balance"; yang_parent_name = "mp2mp-signaling-protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::FlowLabelLoadBalance::~FlowLabelLoadBalance()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::FlowLabelLoadBalance::has_data() const
{
    if (is_presence_container) return true;
    return flow_label.is_set
	|| static_.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::FlowLabelLoadBalance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_label.yfilter)
	|| ydk::is_set(static_.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::FlowLabelLoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-label-load-balance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::FlowLabelLoadBalance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_label.is_set || is_set(flow_label.yfilter)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (static_.is_set || is_set(static_.yfilter)) leaf_name_data.push_back(static_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::FlowLabelLoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::FlowLabelLoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::FlowLabelLoadBalance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-label")
    {
        flow_label = value;
        flow_label.value_namespace = name_space;
        flow_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static")
    {
        static_ = value;
        static_.value_namespace = name_space;
        static_.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::FlowLabelLoadBalance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-label")
    {
        flow_label.yfilter = yfilter;
    }
    if(value_path == "static")
    {
        static_.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::FlowLabelLoadBalance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-label" || name == "static")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceids()
    :
    ceid(this, {"ce_id"})
{

    yang_name = "ceids"; yang_parent_name = "mp2mp-signaling-protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::~Ceids()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ceid.len(); index++)
    {
        if(ceid[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::has_operation() const
{
    for (std::size_t index=0; index<ceid.len(); index++)
    {
        if(ceid[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceids";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ceid")
    {
        auto c = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid>();
        c->parent = this;
        ceid.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : ceid.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ceid")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::Ceid()
    :
    ce_id{YType::uint32, "ce-id"}
        ,
    remote_ceid_attachment_circuits(std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits>())
{
    remote_ceid_attachment_circuits->parent = this;

    yang_name = "ceid"; yang_parent_name = "ceids"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::~Ceid()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::has_data() const
{
    if (is_presence_container) return true;
    return ce_id.is_set
	|| (remote_ceid_attachment_circuits !=  nullptr && remote_ceid_attachment_circuits->has_data());
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ce_id.yfilter)
	|| (remote_ceid_attachment_circuits !=  nullptr && remote_ceid_attachment_circuits->has_operation());
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceid";
    ADD_KEY_TOKEN(ce_id, "ce-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ce_id.is_set || is_set(ce_id.yfilter)) leaf_name_data.push_back(ce_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-ceid-attachment-circuits")
    {
        if(remote_ceid_attachment_circuits == nullptr)
        {
            remote_ceid_attachment_circuits = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits>();
        }
        return remote_ceid_attachment_circuits;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(remote_ceid_attachment_circuits != nullptr)
    {
        children["remote-ceid-attachment-circuits"] = remote_ceid_attachment_circuits;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ce-id")
    {
        ce_id = value;
        ce_id.value_namespace = name_space;
        ce_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ce-id")
    {
        ce_id.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-ceid-attachment-circuits" || name == "ce-id")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuits()
    :
    remote_ceid_attachment_circuit(this, {"name", "remote_ce_id"})
{

    yang_name = "remote-ceid-attachment-circuits"; yang_parent_name = "ceid"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::~RemoteCeidAttachmentCircuits()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_ceid_attachment_circuit.len(); index++)
    {
        if(remote_ceid_attachment_circuit[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::has_operation() const
{
    for (std::size_t index=0; index<remote_ceid_attachment_circuit.len(); index++)
    {
        if(remote_ceid_attachment_circuit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ceid-attachment-circuits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-ceid-attachment-circuit")
    {
        auto c = std::make_shared<L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit>();
        c->parent = this;
        remote_ceid_attachment_circuit.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : remote_ceid_attachment_circuit.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-ceid-attachment-circuit")
        return true;
    return false;
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::RemoteCeidAttachmentCircuit()
    :
    name{YType::str, "name"},
    remote_ce_id{YType::uint32, "remote-ce-id"}
{

    yang_name = "remote-ceid-attachment-circuit"; yang_parent_name = "remote-ceid-attachment-circuits"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::~RemoteCeidAttachmentCircuit()
{
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| remote_ce_id.is_set;
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(remote_ce_id.yfilter);
}

std::string L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ceid-attachment-circuit";
    ADD_KEY_TOKEN(name, "name");
    ADD_KEY_TOKEN(remote_ce_id, "remote-ce-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (remote_ce_id.is_set || is_set(remote_ce_id.yfilter)) leaf_name_data.push_back(remote_ce_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ce-id")
    {
        remote_ce_id = value;
        remote_ce_id.value_namespace = name_space;
        remote_ce_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "remote-ce-id")
    {
        remote_ce_id.yfilter = yfilter;
    }
}

bool L2vpn::Database::XconnectGroups::XconnectGroup::Mp2mpXconnects::Mp2mpXconnect::Mp2mpAutoDiscovery::Mp2mpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "remote-ce-id")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroups()
    :
    bridge_domain_group(this, {"name"})
{

    yang_name = "bridge-domain-groups"; yang_parent_name = "database"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Database::BridgeDomainGroups::~BridgeDomainGroups()
{
}

bool L2vpn::Database::BridgeDomainGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bridge_domain_group.len(); index++)
    {
        if(bridge_domain_group[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::has_operation() const
{
    for (std::size_t index=0; index<bridge_domain_group.len(); index++)
    {
        if(bridge_domain_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Database::BridgeDomainGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domain-group")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup>();
        c->parent = this;
        bridge_domain_group.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bridge_domain_group.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain-group")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomainGroup()
    :
    name{YType::str, "name"}
        ,
    bridge_domains(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains>())
{
    bridge_domains->parent = this;

    yang_name = "bridge-domain-group"; yang_parent_name = "bridge-domain-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::~BridgeDomainGroup()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| (bridge_domains !=  nullptr && bridge_domains->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (bridge_domains !=  nullptr && bridge_domains->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/bridge-domain-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-group";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domains")
    {
        if(bridge_domains == nullptr)
        {
            bridge_domains = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains>();
        }
        return bridge_domains;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bridge_domains != nullptr)
    {
        children["bridge-domains"] = bridge_domains;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domains" || name == "name")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomains()
    :
    bridge_domain(this, {"name"})
{

    yang_name = "bridge-domains"; yang_parent_name = "bridge-domain-group"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::~BridgeDomains()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bridge_domain.len(); index++)
    {
        if(bridge_domain[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::has_operation() const
{
    for (std::size_t index=0; index<bridge_domain.len(); index++)
    {
        if(bridge_domain[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domains";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domain")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain>();
        c->parent = this;
        bridge_domain.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bridge_domain.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomain()
    :
    name{YType::str, "name"},
    coupled_mode{YType::empty, "coupled-mode"},
    shutdown{YType::empty, "shutdown"},
    flooding_unknown_unicast{YType::empty, "flooding-unknown-unicast"},
    igmp_snooping_disable{YType::empty, "igmp-snooping-disable"},
    transport_mode{YType::enumeration, "transport-mode"},
    mld_snooping{YType::str, "mld-snooping"},
    bridge_domain_mtu{YType::uint32, "bridge-domain-mtu"},
    dhcp{YType::str, "dhcp"},
    bridge_description{YType::str, "bridge-description"},
    igmp_snooping{YType::str, "igmp-snooping"},
    flooding{YType::empty, "flooding"}
        ,
    bd_storm_controls(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls>())
    , member_vnis(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis>())
    , bridge_domain_mac(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac>())
    , nv_satellite(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite>())
    , bridge_domain_pbb(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb>())
    , bridge_domain_evis(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis>())
    , access_vfis(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis>())
    , bd_pseudowires(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires>())
    , vfis(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis>())
    , bridge_domainvnis(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis>())
    , bd_attachment_circuits(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits>())
    , bd_pseudowire_evpns(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns>())
    , ip_source_guard(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard>())
    , dai(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai>())
    , routed_interfaces(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces>())
{
    bd_storm_controls->parent = this;
    member_vnis->parent = this;
    bridge_domain_mac->parent = this;
    nv_satellite->parent = this;
    bridge_domain_pbb->parent = this;
    bridge_domain_evis->parent = this;
    access_vfis->parent = this;
    bd_pseudowires->parent = this;
    vfis->parent = this;
    bridge_domainvnis->parent = this;
    bd_attachment_circuits->parent = this;
    bd_pseudowire_evpns->parent = this;
    ip_source_guard->parent = this;
    dai->parent = this;
    routed_interfaces->parent = this;

    yang_name = "bridge-domain"; yang_parent_name = "bridge-domains"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::~BridgeDomain()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| coupled_mode.is_set
	|| shutdown.is_set
	|| flooding_unknown_unicast.is_set
	|| igmp_snooping_disable.is_set
	|| transport_mode.is_set
	|| mld_snooping.is_set
	|| bridge_domain_mtu.is_set
	|| dhcp.is_set
	|| bridge_description.is_set
	|| igmp_snooping.is_set
	|| flooding.is_set
	|| (bd_storm_controls !=  nullptr && bd_storm_controls->has_data())
	|| (member_vnis !=  nullptr && member_vnis->has_data())
	|| (bridge_domain_mac !=  nullptr && bridge_domain_mac->has_data())
	|| (nv_satellite !=  nullptr && nv_satellite->has_data())
	|| (bridge_domain_pbb !=  nullptr && bridge_domain_pbb->has_data())
	|| (bridge_domain_evis !=  nullptr && bridge_domain_evis->has_data())
	|| (access_vfis !=  nullptr && access_vfis->has_data())
	|| (bd_pseudowires !=  nullptr && bd_pseudowires->has_data())
	|| (vfis !=  nullptr && vfis->has_data())
	|| (bridge_domainvnis !=  nullptr && bridge_domainvnis->has_data())
	|| (bd_attachment_circuits !=  nullptr && bd_attachment_circuits->has_data())
	|| (bd_pseudowire_evpns !=  nullptr && bd_pseudowire_evpns->has_data())
	|| (ip_source_guard !=  nullptr && ip_source_guard->has_data())
	|| (dai !=  nullptr && dai->has_data())
	|| (routed_interfaces !=  nullptr && routed_interfaces->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(coupled_mode.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(flooding_unknown_unicast.yfilter)
	|| ydk::is_set(igmp_snooping_disable.yfilter)
	|| ydk::is_set(transport_mode.yfilter)
	|| ydk::is_set(mld_snooping.yfilter)
	|| ydk::is_set(bridge_domain_mtu.yfilter)
	|| ydk::is_set(dhcp.yfilter)
	|| ydk::is_set(bridge_description.yfilter)
	|| ydk::is_set(igmp_snooping.yfilter)
	|| ydk::is_set(flooding.yfilter)
	|| (bd_storm_controls !=  nullptr && bd_storm_controls->has_operation())
	|| (member_vnis !=  nullptr && member_vnis->has_operation())
	|| (bridge_domain_mac !=  nullptr && bridge_domain_mac->has_operation())
	|| (nv_satellite !=  nullptr && nv_satellite->has_operation())
	|| (bridge_domain_pbb !=  nullptr && bridge_domain_pbb->has_operation())
	|| (bridge_domain_evis !=  nullptr && bridge_domain_evis->has_operation())
	|| (access_vfis !=  nullptr && access_vfis->has_operation())
	|| (bd_pseudowires !=  nullptr && bd_pseudowires->has_operation())
	|| (vfis !=  nullptr && vfis->has_operation())
	|| (bridge_domainvnis !=  nullptr && bridge_domainvnis->has_operation())
	|| (bd_attachment_circuits !=  nullptr && bd_attachment_circuits->has_operation())
	|| (bd_pseudowire_evpns !=  nullptr && bd_pseudowire_evpns->has_operation())
	|| (ip_source_guard !=  nullptr && ip_source_guard->has_operation())
	|| (dai !=  nullptr && dai->has_operation())
	|| (routed_interfaces !=  nullptr && routed_interfaces->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (coupled_mode.is_set || is_set(coupled_mode.yfilter)) leaf_name_data.push_back(coupled_mode.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (flooding_unknown_unicast.is_set || is_set(flooding_unknown_unicast.yfilter)) leaf_name_data.push_back(flooding_unknown_unicast.get_name_leafdata());
    if (igmp_snooping_disable.is_set || is_set(igmp_snooping_disable.yfilter)) leaf_name_data.push_back(igmp_snooping_disable.get_name_leafdata());
    if (transport_mode.is_set || is_set(transport_mode.yfilter)) leaf_name_data.push_back(transport_mode.get_name_leafdata());
    if (mld_snooping.is_set || is_set(mld_snooping.yfilter)) leaf_name_data.push_back(mld_snooping.get_name_leafdata());
    if (bridge_domain_mtu.is_set || is_set(bridge_domain_mtu.yfilter)) leaf_name_data.push_back(bridge_domain_mtu.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.yfilter)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (bridge_description.is_set || is_set(bridge_description.yfilter)) leaf_name_data.push_back(bridge_description.get_name_leafdata());
    if (igmp_snooping.is_set || is_set(igmp_snooping.yfilter)) leaf_name_data.push_back(igmp_snooping.get_name_leafdata());
    if (flooding.is_set || is_set(flooding.yfilter)) leaf_name_data.push_back(flooding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-storm-controls")
    {
        if(bd_storm_controls == nullptr)
        {
            bd_storm_controls = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls>();
        }
        return bd_storm_controls;
    }

    if(child_yang_name == "member-vnis")
    {
        if(member_vnis == nullptr)
        {
            member_vnis = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis>();
        }
        return member_vnis;
    }

    if(child_yang_name == "bridge-domain-mac")
    {
        if(bridge_domain_mac == nullptr)
        {
            bridge_domain_mac = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac>();
        }
        return bridge_domain_mac;
    }

    if(child_yang_name == "nv-satellite")
    {
        if(nv_satellite == nullptr)
        {
            nv_satellite = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite>();
        }
        return nv_satellite;
    }

    if(child_yang_name == "bridge-domain-pbb")
    {
        if(bridge_domain_pbb == nullptr)
        {
            bridge_domain_pbb = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb>();
        }
        return bridge_domain_pbb;
    }

    if(child_yang_name == "bridge-domain-evis")
    {
        if(bridge_domain_evis == nullptr)
        {
            bridge_domain_evis = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis>();
        }
        return bridge_domain_evis;
    }

    if(child_yang_name == "access-vfis")
    {
        if(access_vfis == nullptr)
        {
            access_vfis = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis>();
        }
        return access_vfis;
    }

    if(child_yang_name == "bd-pseudowires")
    {
        if(bd_pseudowires == nullptr)
        {
            bd_pseudowires = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires>();
        }
        return bd_pseudowires;
    }

    if(child_yang_name == "vfis")
    {
        if(vfis == nullptr)
        {
            vfis = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis>();
        }
        return vfis;
    }

    if(child_yang_name == "bridge-domainvnis")
    {
        if(bridge_domainvnis == nullptr)
        {
            bridge_domainvnis = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainvnis>();
        }
        return bridge_domainvnis;
    }

    if(child_yang_name == "bd-attachment-circuits")
    {
        if(bd_attachment_circuits == nullptr)
        {
            bd_attachment_circuits = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits>();
        }
        return bd_attachment_circuits;
    }

    if(child_yang_name == "bd-pseudowire-evpns")
    {
        if(bd_pseudowire_evpns == nullptr)
        {
            bd_pseudowire_evpns = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns>();
        }
        return bd_pseudowire_evpns;
    }

    if(child_yang_name == "ip-source-guard")
    {
        if(ip_source_guard == nullptr)
        {
            ip_source_guard = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard>();
        }
        return ip_source_guard;
    }

    if(child_yang_name == "dai")
    {
        if(dai == nullptr)
        {
            dai = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai>();
        }
        return dai;
    }

    if(child_yang_name == "routed-interfaces")
    {
        if(routed_interfaces == nullptr)
        {
            routed_interfaces = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces>();
        }
        return routed_interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bd_storm_controls != nullptr)
    {
        children["bd-storm-controls"] = bd_storm_controls;
    }

    if(member_vnis != nullptr)
    {
        children["member-vnis"] = member_vnis;
    }

    if(bridge_domain_mac != nullptr)
    {
        children["bridge-domain-mac"] = bridge_domain_mac;
    }

    if(nv_satellite != nullptr)
    {
        children["nv-satellite"] = nv_satellite;
    }

    if(bridge_domain_pbb != nullptr)
    {
        children["bridge-domain-pbb"] = bridge_domain_pbb;
    }

    if(bridge_domain_evis != nullptr)
    {
        children["bridge-domain-evis"] = bridge_domain_evis;
    }

    if(access_vfis != nullptr)
    {
        children["access-vfis"] = access_vfis;
    }

    if(bd_pseudowires != nullptr)
    {
        children["bd-pseudowires"] = bd_pseudowires;
    }

    if(vfis != nullptr)
    {
        children["vfis"] = vfis;
    }

    if(bridge_domainvnis != nullptr)
    {
        children["bridge-domainvnis"] = bridge_domainvnis;
    }

    if(bd_attachment_circuits != nullptr)
    {
        children["bd-attachment-circuits"] = bd_attachment_circuits;
    }

    if(bd_pseudowire_evpns != nullptr)
    {
        children["bd-pseudowire-evpns"] = bd_pseudowire_evpns;
    }

    if(ip_source_guard != nullptr)
    {
        children["ip-source-guard"] = ip_source_guard;
    }

    if(dai != nullptr)
    {
        children["dai"] = dai;
    }

    if(routed_interfaces != nullptr)
    {
        children["routed-interfaces"] = routed_interfaces;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coupled-mode")
    {
        coupled_mode = value;
        coupled_mode.value_namespace = name_space;
        coupled_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding-unknown-unicast")
    {
        flooding_unknown_unicast = value;
        flooding_unknown_unicast.value_namespace = name_space;
        flooding_unknown_unicast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-snooping-disable")
    {
        igmp_snooping_disable = value;
        igmp_snooping_disable.value_namespace = name_space;
        igmp_snooping_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-mode")
    {
        transport_mode = value;
        transport_mode.value_namespace = name_space;
        transport_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mld-snooping")
    {
        mld_snooping = value;
        mld_snooping.value_namespace = name_space;
        mld_snooping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-mtu")
    {
        bridge_domain_mtu = value;
        bridge_domain_mtu.value_namespace = name_space;
        bridge_domain_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
        dhcp.value_namespace = name_space;
        dhcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-description")
    {
        bridge_description = value;
        bridge_description.value_namespace = name_space;
        bridge_description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igmp-snooping")
    {
        igmp_snooping = value;
        igmp_snooping.value_namespace = name_space;
        igmp_snooping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flooding")
    {
        flooding = value;
        flooding.value_namespace = name_space;
        flooding.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "coupled-mode")
    {
        coupled_mode.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "flooding-unknown-unicast")
    {
        flooding_unknown_unicast.yfilter = yfilter;
    }
    if(value_path == "igmp-snooping-disable")
    {
        igmp_snooping_disable.yfilter = yfilter;
    }
    if(value_path == "transport-mode")
    {
        transport_mode.yfilter = yfilter;
    }
    if(value_path == "mld-snooping")
    {
        mld_snooping.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-mtu")
    {
        bridge_domain_mtu.yfilter = yfilter;
    }
    if(value_path == "dhcp")
    {
        dhcp.yfilter = yfilter;
    }
    if(value_path == "bridge-description")
    {
        bridge_description.yfilter = yfilter;
    }
    if(value_path == "igmp-snooping")
    {
        igmp_snooping.yfilter = yfilter;
    }
    if(value_path == "flooding")
    {
        flooding.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-storm-controls" || name == "member-vnis" || name == "bridge-domain-mac" || name == "nv-satellite" || name == "bridge-domain-pbb" || name == "bridge-domain-evis" || name == "access-vfis" || name == "bd-pseudowires" || name == "vfis" || name == "bridge-domainvnis" || name == "bd-attachment-circuits" || name == "bd-pseudowire-evpns" || name == "ip-source-guard" || name == "dai" || name == "routed-interfaces" || name == "name" || name == "coupled-mode" || name == "shutdown" || name == "flooding-unknown-unicast" || name == "igmp-snooping-disable" || name == "transport-mode" || name == "mld-snooping" || name == "bridge-domain-mtu" || name == "dhcp" || name == "bridge-description" || name == "igmp-snooping" || name == "flooding")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControls()
    :
    bd_storm_control(this, {"sctype"})
{

    yang_name = "bd-storm-controls"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::~BdStormControls()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bd_storm_control.len(); index++)
    {
        if(bd_storm_control[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::has_operation() const
{
    for (std::size_t index=0; index<bd_storm_control.len(); index++)
    {
        if(bd_storm_control[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-storm-controls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-storm-control")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl>();
        c->parent = this;
        bd_storm_control.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bd_storm_control.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-storm-control")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::BdStormControl()
    :
    sctype{YType::enumeration, "sctype"}
        ,
    storm_control_unit(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit>())
{
    storm_control_unit->parent = this;

    yang_name = "bd-storm-control"; yang_parent_name = "bd-storm-controls"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::~BdStormControl()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::has_data() const
{
    if (is_presence_container) return true;
    return sctype.is_set
	|| (storm_control_unit !=  nullptr && storm_control_unit->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sctype.yfilter)
	|| (storm_control_unit !=  nullptr && storm_control_unit->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-storm-control";
    ADD_KEY_TOKEN(sctype, "sctype");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sctype.is_set || is_set(sctype.yfilter)) leaf_name_data.push_back(sctype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "storm-control-unit")
    {
        if(storm_control_unit == nullptr)
        {
            storm_control_unit = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit>();
        }
        return storm_control_unit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(storm_control_unit != nullptr)
    {
        children["storm-control-unit"] = storm_control_unit;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sctype")
    {
        sctype = value;
        sctype.value_namespace = name_space;
        sctype.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sctype")
    {
        sctype.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "storm-control-unit" || name == "sctype")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::StormControlUnit()
    :
    kbits_per_sec{YType::uint32, "kbits-per-sec"},
    pkts_per_sec{YType::uint32, "pkts-per-sec"}
{

    yang_name = "storm-control-unit"; yang_parent_name = "bd-storm-control"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::~StormControlUnit()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::has_data() const
{
    if (is_presence_container) return true;
    return kbits_per_sec.is_set
	|| pkts_per_sec.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kbits_per_sec.yfilter)
	|| ydk::is_set(pkts_per_sec.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control-unit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kbits_per_sec.is_set || is_set(kbits_per_sec.yfilter)) leaf_name_data.push_back(kbits_per_sec.get_name_leafdata());
    if (pkts_per_sec.is_set || is_set(pkts_per_sec.yfilter)) leaf_name_data.push_back(pkts_per_sec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kbits-per-sec")
    {
        kbits_per_sec = value;
        kbits_per_sec.value_namespace = name_space;
        kbits_per_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-per-sec")
    {
        pkts_per_sec = value;
        pkts_per_sec.value_namespace = name_space;
        pkts_per_sec.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kbits-per-sec")
    {
        kbits_per_sec.yfilter = yfilter;
    }
    if(value_path == "pkts-per-sec")
    {
        pkts_per_sec.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kbits-per-sec" || name == "pkts-per-sec")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVnis()
    :
    member_vni(this, {"vni"})
{

    yang_name = "member-vnis"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::~MemberVnis()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<member_vni.len(); index++)
    {
        if(member_vni[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::has_operation() const
{
    for (std::size_t index=0; index<member_vni.len(); index++)
    {
        if(member_vni[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vnis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-vni")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni>();
        c->parent = this;
        member_vni.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : member_vni.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-vni")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVni()
    :
    vni{YType::uint32, "vni"}
        ,
    member_vni_static_mac_addresses(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses>())
{
    member_vni_static_mac_addresses->parent = this;

    yang_name = "member-vni"; yang_parent_name = "member-vnis"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::~MemberVni()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::has_data() const
{
    if (is_presence_container) return true;
    return vni.is_set
	|| (member_vni_static_mac_addresses !=  nullptr && member_vni_static_mac_addresses->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vni.yfilter)
	|| (member_vni_static_mac_addresses !=  nullptr && member_vni_static_mac_addresses->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vni";
    ADD_KEY_TOKEN(vni, "vni");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vni.is_set || is_set(vni.yfilter)) leaf_name_data.push_back(vni.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-vni-static-mac-addresses")
    {
        if(member_vni_static_mac_addresses == nullptr)
        {
            member_vni_static_mac_addresses = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses>();
        }
        return member_vni_static_mac_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(member_vni_static_mac_addresses != nullptr)
    {
        children["member-vni-static-mac-addresses"] = member_vni_static_mac_addresses;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vni")
    {
        vni = value;
        vni.value_namespace = name_space;
        vni.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vni")
    {
        vni.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-vni-static-mac-addresses" || name == "vni")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddresses()
    :
    member_vni_static_mac_address(this, {"mac_address"})
{

    yang_name = "member-vni-static-mac-addresses"; yang_parent_name = "member-vni"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::~MemberVniStaticMacAddresses()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<member_vni_static_mac_address.len(); index++)
    {
        if(member_vni_static_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::has_operation() const
{
    for (std::size_t index=0; index<member_vni_static_mac_address.len(); index++)
    {
        if(member_vni_static_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vni-static-mac-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "member-vni-static-mac-address")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress>();
        c->parent = this;
        member_vni_static_mac_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : member_vni_static_mac_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "member-vni-static-mac-address")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::MemberVniStaticMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    next_hop_ip{YType::str, "next-hop-ip"}
{

    yang_name = "member-vni-static-mac-address"; yang_parent_name = "member-vni-static-mac-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::~MemberVniStaticMacAddress()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| next_hop_ip.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(next_hop_ip.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vni-static-mac-address";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.yfilter)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
        next_hop_ip.value_namespace = name_space;
        next_hop_ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "next-hop-ip")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BridgeDomainMac()
    :
    bd_mac_withdraw_relay{YType::empty, "bd-mac-withdraw-relay"},
    bd_mac_withdraw_access_pw_disable{YType::empty, "bd-mac-withdraw-access-pw-disable"},
    bd_mac_port_down_flush{YType::empty, "bd-mac-port-down-flush"},
    bd_mac_withdraw{YType::empty, "bd-mac-withdraw"},
    bd_mac_withdraw_behavior{YType::enumeration, "bd-mac-withdraw-behavior"},
    bd_mac_learn{YType::enumeration, "bd-mac-learn"}
        ,
    bd_mac_limit(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit>())
    , bd_mac_filters(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters>())
    , mac_secure(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure>())
    , bd_mac_aging(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging>())
{
    bd_mac_limit->parent = this;
    bd_mac_filters->parent = this;
    mac_secure->parent = this;
    bd_mac_aging->parent = this;

    yang_name = "bridge-domain-mac"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::~BridgeDomainMac()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::has_data() const
{
    if (is_presence_container) return true;
    return bd_mac_withdraw_relay.is_set
	|| bd_mac_withdraw_access_pw_disable.is_set
	|| bd_mac_port_down_flush.is_set
	|| bd_mac_withdraw.is_set
	|| bd_mac_withdraw_behavior.is_set
	|| bd_mac_learn.is_set
	|| (bd_mac_limit !=  nullptr && bd_mac_limit->has_data())
	|| (bd_mac_filters !=  nullptr && bd_mac_filters->has_data())
	|| (mac_secure !=  nullptr && mac_secure->has_data())
	|| (bd_mac_aging !=  nullptr && bd_mac_aging->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_mac_withdraw_relay.yfilter)
	|| ydk::is_set(bd_mac_withdraw_access_pw_disable.yfilter)
	|| ydk::is_set(bd_mac_port_down_flush.yfilter)
	|| ydk::is_set(bd_mac_withdraw.yfilter)
	|| ydk::is_set(bd_mac_withdraw_behavior.yfilter)
	|| ydk::is_set(bd_mac_learn.yfilter)
	|| (bd_mac_limit !=  nullptr && bd_mac_limit->has_operation())
	|| (bd_mac_filters !=  nullptr && bd_mac_filters->has_operation())
	|| (mac_secure !=  nullptr && mac_secure->has_operation())
	|| (bd_mac_aging !=  nullptr && bd_mac_aging->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_mac_withdraw_relay.is_set || is_set(bd_mac_withdraw_relay.yfilter)) leaf_name_data.push_back(bd_mac_withdraw_relay.get_name_leafdata());
    if (bd_mac_withdraw_access_pw_disable.is_set || is_set(bd_mac_withdraw_access_pw_disable.yfilter)) leaf_name_data.push_back(bd_mac_withdraw_access_pw_disable.get_name_leafdata());
    if (bd_mac_port_down_flush.is_set || is_set(bd_mac_port_down_flush.yfilter)) leaf_name_data.push_back(bd_mac_port_down_flush.get_name_leafdata());
    if (bd_mac_withdraw.is_set || is_set(bd_mac_withdraw.yfilter)) leaf_name_data.push_back(bd_mac_withdraw.get_name_leafdata());
    if (bd_mac_withdraw_behavior.is_set || is_set(bd_mac_withdraw_behavior.yfilter)) leaf_name_data.push_back(bd_mac_withdraw_behavior.get_name_leafdata());
    if (bd_mac_learn.is_set || is_set(bd_mac_learn.yfilter)) leaf_name_data.push_back(bd_mac_learn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-mac-limit")
    {
        if(bd_mac_limit == nullptr)
        {
            bd_mac_limit = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit>();
        }
        return bd_mac_limit;
    }

    if(child_yang_name == "bd-mac-filters")
    {
        if(bd_mac_filters == nullptr)
        {
            bd_mac_filters = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters>();
        }
        return bd_mac_filters;
    }

    if(child_yang_name == "mac-secure")
    {
        if(mac_secure == nullptr)
        {
            mac_secure = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure>();
        }
        return mac_secure;
    }

    if(child_yang_name == "bd-mac-aging")
    {
        if(bd_mac_aging == nullptr)
        {
            bd_mac_aging = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging>();
        }
        return bd_mac_aging;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bd_mac_limit != nullptr)
    {
        children["bd-mac-limit"] = bd_mac_limit;
    }

    if(bd_mac_filters != nullptr)
    {
        children["bd-mac-filters"] = bd_mac_filters;
    }

    if(mac_secure != nullptr)
    {
        children["mac-secure"] = mac_secure;
    }

    if(bd_mac_aging != nullptr)
    {
        children["bd-mac-aging"] = bd_mac_aging;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-mac-withdraw-relay")
    {
        bd_mac_withdraw_relay = value;
        bd_mac_withdraw_relay.value_namespace = name_space;
        bd_mac_withdraw_relay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-withdraw-access-pw-disable")
    {
        bd_mac_withdraw_access_pw_disable = value;
        bd_mac_withdraw_access_pw_disable.value_namespace = name_space;
        bd_mac_withdraw_access_pw_disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-port-down-flush")
    {
        bd_mac_port_down_flush = value;
        bd_mac_port_down_flush.value_namespace = name_space;
        bd_mac_port_down_flush.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-withdraw")
    {
        bd_mac_withdraw = value;
        bd_mac_withdraw.value_namespace = name_space;
        bd_mac_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-withdraw-behavior")
    {
        bd_mac_withdraw_behavior = value;
        bd_mac_withdraw_behavior.value_namespace = name_space;
        bd_mac_withdraw_behavior.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-learn")
    {
        bd_mac_learn = value;
        bd_mac_learn.value_namespace = name_space;
        bd_mac_learn.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-mac-withdraw-relay")
    {
        bd_mac_withdraw_relay.yfilter = yfilter;
    }
    if(value_path == "bd-mac-withdraw-access-pw-disable")
    {
        bd_mac_withdraw_access_pw_disable.yfilter = yfilter;
    }
    if(value_path == "bd-mac-port-down-flush")
    {
        bd_mac_port_down_flush.yfilter = yfilter;
    }
    if(value_path == "bd-mac-withdraw")
    {
        bd_mac_withdraw.yfilter = yfilter;
    }
    if(value_path == "bd-mac-withdraw-behavior")
    {
        bd_mac_withdraw_behavior.yfilter = yfilter;
    }
    if(value_path == "bd-mac-learn")
    {
        bd_mac_learn.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-mac-limit" || name == "bd-mac-filters" || name == "mac-secure" || name == "bd-mac-aging" || name == "bd-mac-withdraw-relay" || name == "bd-mac-withdraw-access-pw-disable" || name == "bd-mac-port-down-flush" || name == "bd-mac-withdraw" || name == "bd-mac-withdraw-behavior" || name == "bd-mac-learn")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::BdMacLimit()
    :
    bd_mac_limit_action{YType::enumeration, "bd-mac-limit-action"},
    bd_mac_limit_notif{YType::enumeration, "bd-mac-limit-notif"},
    bd_mac_limit_max{YType::uint32, "bd-mac-limit-max"}
{

    yang_name = "bd-mac-limit"; yang_parent_name = "bridge-domain-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::~BdMacLimit()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::has_data() const
{
    if (is_presence_container) return true;
    return bd_mac_limit_action.is_set
	|| bd_mac_limit_notif.is_set
	|| bd_mac_limit_max.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_mac_limit_action.yfilter)
	|| ydk::is_set(bd_mac_limit_notif.yfilter)
	|| ydk::is_set(bd_mac_limit_max.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-mac-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_mac_limit_action.is_set || is_set(bd_mac_limit_action.yfilter)) leaf_name_data.push_back(bd_mac_limit_action.get_name_leafdata());
    if (bd_mac_limit_notif.is_set || is_set(bd_mac_limit_notif.yfilter)) leaf_name_data.push_back(bd_mac_limit_notif.get_name_leafdata());
    if (bd_mac_limit_max.is_set || is_set(bd_mac_limit_max.yfilter)) leaf_name_data.push_back(bd_mac_limit_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-mac-limit-action")
    {
        bd_mac_limit_action = value;
        bd_mac_limit_action.value_namespace = name_space;
        bd_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-limit-notif")
    {
        bd_mac_limit_notif = value;
        bd_mac_limit_notif.value_namespace = name_space;
        bd_mac_limit_notif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-limit-max")
    {
        bd_mac_limit_max = value;
        bd_mac_limit_max.value_namespace = name_space;
        bd_mac_limit_max.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-mac-limit-action")
    {
        bd_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "bd-mac-limit-notif")
    {
        bd_mac_limit_notif.yfilter = yfilter;
    }
    if(value_path == "bd-mac-limit-max")
    {
        bd_mac_limit_max.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-mac-limit-action" || name == "bd-mac-limit-notif" || name == "bd-mac-limit-max")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilters()
    :
    bd_mac_filter(this, {"address"})
{

    yang_name = "bd-mac-filters"; yang_parent_name = "bridge-domain-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::~BdMacFilters()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bd_mac_filter.len(); index++)
    {
        if(bd_mac_filter[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::has_operation() const
{
    for (std::size_t index=0; index<bd_mac_filter.len(); index++)
    {
        if(bd_mac_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-mac-filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-mac-filter")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter>();
        c->parent = this;
        bd_mac_filter.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bd_mac_filter.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-mac-filter")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::BdMacFilter()
    :
    address{YType::str, "address"},
    drop{YType::empty, "drop"}
{

    yang_name = "bd-mac-filter"; yang_parent_name = "bd-mac-filters"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::~BdMacFilter()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| drop.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-mac-filter";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "drop")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::MacSecure()
    :
    logging{YType::empty, "logging"},
    action{YType::enumeration, "action"},
    enable{YType::empty, "enable"},
    threshold{YType::empty, "threshold"}
{

    yang_name = "mac-secure"; yang_parent_name = "bridge-domain-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::~MacSecure()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| action.is_set
	|| enable.is_set
	|| threshold.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-secure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "action" || name == "enable" || name == "threshold")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::BdMacAging()
    :
    bd_mac_aging_type{YType::enumeration, "bd-mac-aging-type"},
    bd_mac_aging_time{YType::uint32, "bd-mac-aging-time"}
{

    yang_name = "bd-mac-aging"; yang_parent_name = "bridge-domain-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::~BdMacAging()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::has_data() const
{
    if (is_presence_container) return true;
    return bd_mac_aging_type.is_set
	|| bd_mac_aging_time.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_mac_aging_type.yfilter)
	|| ydk::is_set(bd_mac_aging_time.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-mac-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_mac_aging_type.is_set || is_set(bd_mac_aging_type.yfilter)) leaf_name_data.push_back(bd_mac_aging_type.get_name_leafdata());
    if (bd_mac_aging_time.is_set || is_set(bd_mac_aging_time.yfilter)) leaf_name_data.push_back(bd_mac_aging_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-mac-aging-type")
    {
        bd_mac_aging_type = value;
        bd_mac_aging_type.value_namespace = name_space;
        bd_mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-mac-aging-time")
    {
        bd_mac_aging_time = value;
        bd_mac_aging_time.value_namespace = name_space;
        bd_mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-mac-aging-type")
    {
        bd_mac_aging_type.yfilter = yfilter;
    }
    if(value_path == "bd-mac-aging-time")
    {
        bd_mac_aging_time.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-mac-aging-type" || name == "bd-mac-aging-time")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::NvSatellite()
    :
    offload_ipv4_multicast_enable{YType::empty, "offload-ipv4-multicast-enable"},
    enable{YType::empty, "enable"}
{

    yang_name = "nv-satellite"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::~NvSatellite()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::has_data() const
{
    if (is_presence_container) return true;
    return offload_ipv4_multicast_enable.is_set
	|| enable.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(offload_ipv4_multicast_enable.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nv-satellite";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (offload_ipv4_multicast_enable.is_set || is_set(offload_ipv4_multicast_enable.yfilter)) leaf_name_data.push_back(offload_ipv4_multicast_enable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "offload-ipv4-multicast-enable")
    {
        offload_ipv4_multicast_enable = value;
        offload_ipv4_multicast_enable.value_namespace = name_space;
        offload_ipv4_multicast_enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "offload-ipv4-multicast-enable")
    {
        offload_ipv4_multicast_enable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "offload-ipv4-multicast-enable" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::BridgeDomainPbb()
    :
    pbb_edges(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges>())
    , pbb_core(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore>())
{
    pbb_edges->parent = this;
    pbb_core->parent = this;

    yang_name = "bridge-domain-pbb"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::~BridgeDomainPbb()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::has_data() const
{
    if (is_presence_container) return true;
    return (pbb_edges !=  nullptr && pbb_edges->has_data())
	|| (pbb_core !=  nullptr && pbb_core->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::has_operation() const
{
    return is_set(yfilter)
	|| (pbb_edges !=  nullptr && pbb_edges->has_operation())
	|| (pbb_core !=  nullptr && pbb_core->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-pbb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-edges")
    {
        if(pbb_edges == nullptr)
        {
            pbb_edges = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges>();
        }
        return pbb_edges;
    }

    if(child_yang_name == "pbb-core")
    {
        if(pbb_core == nullptr)
        {
            pbb_core = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore>();
        }
        return pbb_core;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pbb_edges != nullptr)
    {
        children["pbb-edges"] = pbb_edges;
    }

    if(pbb_core != nullptr)
    {
        children["pbb-core"] = pbb_core;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-edges" || name == "pbb-core")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdges()
    :
    pbb_edge(this, {"isid", "core_bd_name"})
{

    yang_name = "pbb-edges"; yang_parent_name = "bridge-domain-pbb"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::~PbbEdges()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pbb_edge.len(); index++)
    {
        if(pbb_edge[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::has_operation() const
{
    for (std::size_t index=0; index<pbb_edge.len(); index++)
    {
        if(pbb_edge[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edges";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-edge")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge>();
        c->parent = this;
        pbb_edge.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pbb_edge.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-edge")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdge()
    :
    isid{YType::uint32, "isid"},
    core_bd_name{YType::str, "core-bd-name"},
    pbb_edge_igmp_profile{YType::str, "pbb-edge-igmp-profile"},
    unknown_unicast_bmac{YType::str, "unknown-unicast-bmac"}
        ,
    pbb_edge_split_horizon_group(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup>())
    , pbb_static_mac_mappings(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings>())
    , pbb_edge_dhcp_profile(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile>())
    , pbb_edge_mac(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac>())
{
    pbb_edge_split_horizon_group->parent = this;
    pbb_static_mac_mappings->parent = this;
    pbb_edge_dhcp_profile->parent = this;
    pbb_edge_mac->parent = this;

    yang_name = "pbb-edge"; yang_parent_name = "pbb-edges"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::~PbbEdge()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::has_data() const
{
    if (is_presence_container) return true;
    return isid.is_set
	|| core_bd_name.is_set
	|| pbb_edge_igmp_profile.is_set
	|| unknown_unicast_bmac.is_set
	|| (pbb_edge_split_horizon_group !=  nullptr && pbb_edge_split_horizon_group->has_data())
	|| (pbb_static_mac_mappings !=  nullptr && pbb_static_mac_mappings->has_data())
	|| (pbb_edge_dhcp_profile !=  nullptr && pbb_edge_dhcp_profile->has_data())
	|| (pbb_edge_mac !=  nullptr && pbb_edge_mac->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isid.yfilter)
	|| ydk::is_set(core_bd_name.yfilter)
	|| ydk::is_set(pbb_edge_igmp_profile.yfilter)
	|| ydk::is_set(unknown_unicast_bmac.yfilter)
	|| (pbb_edge_split_horizon_group !=  nullptr && pbb_edge_split_horizon_group->has_operation())
	|| (pbb_static_mac_mappings !=  nullptr && pbb_static_mac_mappings->has_operation())
	|| (pbb_edge_dhcp_profile !=  nullptr && pbb_edge_dhcp_profile->has_operation())
	|| (pbb_edge_mac !=  nullptr && pbb_edge_mac->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge";
    ADD_KEY_TOKEN(isid, "isid");
    ADD_KEY_TOKEN(core_bd_name, "core-bd-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isid.is_set || is_set(isid.yfilter)) leaf_name_data.push_back(isid.get_name_leafdata());
    if (core_bd_name.is_set || is_set(core_bd_name.yfilter)) leaf_name_data.push_back(core_bd_name.get_name_leafdata());
    if (pbb_edge_igmp_profile.is_set || is_set(pbb_edge_igmp_profile.yfilter)) leaf_name_data.push_back(pbb_edge_igmp_profile.get_name_leafdata());
    if (unknown_unicast_bmac.is_set || is_set(unknown_unicast_bmac.yfilter)) leaf_name_data.push_back(unknown_unicast_bmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-edge-split-horizon-group")
    {
        if(pbb_edge_split_horizon_group == nullptr)
        {
            pbb_edge_split_horizon_group = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup>();
        }
        return pbb_edge_split_horizon_group;
    }

    if(child_yang_name == "pbb-static-mac-mappings")
    {
        if(pbb_static_mac_mappings == nullptr)
        {
            pbb_static_mac_mappings = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings>();
        }
        return pbb_static_mac_mappings;
    }

    if(child_yang_name == "pbb-edge-dhcp-profile")
    {
        if(pbb_edge_dhcp_profile == nullptr)
        {
            pbb_edge_dhcp_profile = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile>();
        }
        return pbb_edge_dhcp_profile;
    }

    if(child_yang_name == "pbb-edge-mac")
    {
        if(pbb_edge_mac == nullptr)
        {
            pbb_edge_mac = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac>();
        }
        return pbb_edge_mac;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pbb_edge_split_horizon_group != nullptr)
    {
        children["pbb-edge-split-horizon-group"] = pbb_edge_split_horizon_group;
    }

    if(pbb_static_mac_mappings != nullptr)
    {
        children["pbb-static-mac-mappings"] = pbb_static_mac_mappings;
    }

    if(pbb_edge_dhcp_profile != nullptr)
    {
        children["pbb-edge-dhcp-profile"] = pbb_edge_dhcp_profile;
    }

    if(pbb_edge_mac != nullptr)
    {
        children["pbb-edge-mac"] = pbb_edge_mac;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isid")
    {
        isid = value;
        isid.value_namespace = name_space;
        isid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "core-bd-name")
    {
        core_bd_name = value;
        core_bd_name.value_namespace = name_space;
        core_bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-edge-igmp-profile")
    {
        pbb_edge_igmp_profile = value;
        pbb_edge_igmp_profile.value_namespace = name_space;
        pbb_edge_igmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-unicast-bmac")
    {
        unknown_unicast_bmac = value;
        unknown_unicast_bmac.value_namespace = name_space;
        unknown_unicast_bmac.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isid")
    {
        isid.yfilter = yfilter;
    }
    if(value_path == "core-bd-name")
    {
        core_bd_name.yfilter = yfilter;
    }
    if(value_path == "pbb-edge-igmp-profile")
    {
        pbb_edge_igmp_profile.yfilter = yfilter;
    }
    if(value_path == "unknown-unicast-bmac")
    {
        unknown_unicast_bmac.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-edge-split-horizon-group" || name == "pbb-static-mac-mappings" || name == "pbb-edge-dhcp-profile" || name == "pbb-edge-mac" || name == "isid" || name == "core-bd-name" || name == "pbb-edge-igmp-profile" || name == "unknown-unicast-bmac")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::PbbEdgeSplitHorizonGroup()
    :
    disable{YType::empty, "disable"}
{

    yang_name = "pbb-edge-split-horizon-group"; yang_parent_name = "pbb-edge"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::~PbbEdgeSplitHorizonGroup()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-split-horizon-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMappings()
    :
    pbb_static_mac_mapping(this, {"address"})
{

    yang_name = "pbb-static-mac-mappings"; yang_parent_name = "pbb-edge"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::~PbbStaticMacMappings()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pbb_static_mac_mapping.len(); index++)
    {
        if(pbb_static_mac_mapping[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::has_operation() const
{
    for (std::size_t index=0; index<pbb_static_mac_mapping.len(); index++)
    {
        if(pbb_static_mac_mapping[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-static-mac-mappings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-static-mac-mapping")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping>();
        c->parent = this;
        pbb_static_mac_mapping.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pbb_static_mac_mapping.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-static-mac-mapping")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::PbbStaticMacMapping()
    :
    address{YType::str, "address"},
    pbb_static_mac_mapping_bmac{YType::str, "pbb-static-mac-mapping-bmac"}
{

    yang_name = "pbb-static-mac-mapping"; yang_parent_name = "pbb-static-mac-mappings"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::~PbbStaticMacMapping()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| pbb_static_mac_mapping_bmac.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(pbb_static_mac_mapping_bmac.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-static-mac-mapping";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (pbb_static_mac_mapping_bmac.is_set || is_set(pbb_static_mac_mapping_bmac.yfilter)) leaf_name_data.push_back(pbb_static_mac_mapping_bmac.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-static-mac-mapping-bmac")
    {
        pbb_static_mac_mapping_bmac = value;
        pbb_static_mac_mapping_bmac.value_namespace = name_space;
        pbb_static_mac_mapping_bmac.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "pbb-static-mac-mapping-bmac")
    {
        pbb_static_mac_mapping_bmac.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "pbb-static-mac-mapping-bmac")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::PbbEdgeDhcpProfile()
    :
    profile_id{YType::enumeration, "profile-id"},
    dhcp_snooping_id{YType::str, "dhcp-snooping-id"}
{

    yang_name = "pbb-edge-dhcp-profile"; yang_parent_name = "pbb-edge"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::~PbbEdgeDhcpProfile()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::has_data() const
{
    if (is_presence_container) return true;
    return profile_id.is_set
	|| dhcp_snooping_id.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_id.yfilter)
	|| ydk::is_set(dhcp_snooping_id.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-dhcp-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());
    if (dhcp_snooping_id.is_set || is_set(dhcp_snooping_id.yfilter)) leaf_name_data.push_back(dhcp_snooping_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id = value;
        dhcp_snooping_id.value_namespace = name_space;
        dhcp_snooping_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-id" || name == "dhcp-snooping-id")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMac()
    :
    pbb_edge_mac_learning{YType::enumeration, "pbb-edge-mac-learning"}
        ,
    pbb_edge_mac_limit(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit>())
    , pbb_edge_mac_aging(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging>())
    , pbb_edge_mac_secure(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure>())
{
    pbb_edge_mac_limit->parent = this;
    pbb_edge_mac_aging->parent = this;
    pbb_edge_mac_secure->parent = this;

    yang_name = "pbb-edge-mac"; yang_parent_name = "pbb-edge"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::~PbbEdgeMac()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::has_data() const
{
    if (is_presence_container) return true;
    return pbb_edge_mac_learning.is_set
	|| (pbb_edge_mac_limit !=  nullptr && pbb_edge_mac_limit->has_data())
	|| (pbb_edge_mac_aging !=  nullptr && pbb_edge_mac_aging->has_data())
	|| (pbb_edge_mac_secure !=  nullptr && pbb_edge_mac_secure->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_edge_mac_learning.yfilter)
	|| (pbb_edge_mac_limit !=  nullptr && pbb_edge_mac_limit->has_operation())
	|| (pbb_edge_mac_aging !=  nullptr && pbb_edge_mac_aging->has_operation())
	|| (pbb_edge_mac_secure !=  nullptr && pbb_edge_mac_secure->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_edge_mac_learning.is_set || is_set(pbb_edge_mac_learning.yfilter)) leaf_name_data.push_back(pbb_edge_mac_learning.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-edge-mac-limit")
    {
        if(pbb_edge_mac_limit == nullptr)
        {
            pbb_edge_mac_limit = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit>();
        }
        return pbb_edge_mac_limit;
    }

    if(child_yang_name == "pbb-edge-mac-aging")
    {
        if(pbb_edge_mac_aging == nullptr)
        {
            pbb_edge_mac_aging = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging>();
        }
        return pbb_edge_mac_aging;
    }

    if(child_yang_name == "pbb-edge-mac-secure")
    {
        if(pbb_edge_mac_secure == nullptr)
        {
            pbb_edge_mac_secure = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure>();
        }
        return pbb_edge_mac_secure;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pbb_edge_mac_limit != nullptr)
    {
        children["pbb-edge-mac-limit"] = pbb_edge_mac_limit;
    }

    if(pbb_edge_mac_aging != nullptr)
    {
        children["pbb-edge-mac-aging"] = pbb_edge_mac_aging;
    }

    if(pbb_edge_mac_secure != nullptr)
    {
        children["pbb-edge-mac-secure"] = pbb_edge_mac_secure;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-edge-mac-learning")
    {
        pbb_edge_mac_learning = value;
        pbb_edge_mac_learning.value_namespace = name_space;
        pbb_edge_mac_learning.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-edge-mac-learning")
    {
        pbb_edge_mac_learning.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-edge-mac-limit" || name == "pbb-edge-mac-aging" || name == "pbb-edge-mac-secure" || name == "pbb-edge-mac-learning")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::PbbEdgeMacLimit()
    :
    pbb_edge_mac_limit_action{YType::enumeration, "pbb-edge-mac-limit-action"},
    pbb_edge_mac_limit_max{YType::uint32, "pbb-edge-mac-limit-max"},
    pbb_edge_mac_limit_notif{YType::enumeration, "pbb-edge-mac-limit-notif"}
{

    yang_name = "pbb-edge-mac-limit"; yang_parent_name = "pbb-edge-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::~PbbEdgeMacLimit()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::has_data() const
{
    if (is_presence_container) return true;
    return pbb_edge_mac_limit_action.is_set
	|| pbb_edge_mac_limit_max.is_set
	|| pbb_edge_mac_limit_notif.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_edge_mac_limit_action.yfilter)
	|| ydk::is_set(pbb_edge_mac_limit_max.yfilter)
	|| ydk::is_set(pbb_edge_mac_limit_notif.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-mac-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_edge_mac_limit_action.is_set || is_set(pbb_edge_mac_limit_action.yfilter)) leaf_name_data.push_back(pbb_edge_mac_limit_action.get_name_leafdata());
    if (pbb_edge_mac_limit_max.is_set || is_set(pbb_edge_mac_limit_max.yfilter)) leaf_name_data.push_back(pbb_edge_mac_limit_max.get_name_leafdata());
    if (pbb_edge_mac_limit_notif.is_set || is_set(pbb_edge_mac_limit_notif.yfilter)) leaf_name_data.push_back(pbb_edge_mac_limit_notif.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-edge-mac-limit-action")
    {
        pbb_edge_mac_limit_action = value;
        pbb_edge_mac_limit_action.value_namespace = name_space;
        pbb_edge_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-edge-mac-limit-max")
    {
        pbb_edge_mac_limit_max = value;
        pbb_edge_mac_limit_max.value_namespace = name_space;
        pbb_edge_mac_limit_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-edge-mac-limit-notif")
    {
        pbb_edge_mac_limit_notif = value;
        pbb_edge_mac_limit_notif.value_namespace = name_space;
        pbb_edge_mac_limit_notif.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-edge-mac-limit-action")
    {
        pbb_edge_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "pbb-edge-mac-limit-max")
    {
        pbb_edge_mac_limit_max.yfilter = yfilter;
    }
    if(value_path == "pbb-edge-mac-limit-notif")
    {
        pbb_edge_mac_limit_notif.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-edge-mac-limit-action" || name == "pbb-edge-mac-limit-max" || name == "pbb-edge-mac-limit-notif")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::PbbEdgeMacAging()
    :
    pbb_edge_mac_aging_type{YType::enumeration, "pbb-edge-mac-aging-type"},
    pbb_edge_mac_aging_time{YType::uint32, "pbb-edge-mac-aging-time"}
{

    yang_name = "pbb-edge-mac-aging"; yang_parent_name = "pbb-edge-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::~PbbEdgeMacAging()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::has_data() const
{
    if (is_presence_container) return true;
    return pbb_edge_mac_aging_type.is_set
	|| pbb_edge_mac_aging_time.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_edge_mac_aging_type.yfilter)
	|| ydk::is_set(pbb_edge_mac_aging_time.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-mac-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_edge_mac_aging_type.is_set || is_set(pbb_edge_mac_aging_type.yfilter)) leaf_name_data.push_back(pbb_edge_mac_aging_type.get_name_leafdata());
    if (pbb_edge_mac_aging_time.is_set || is_set(pbb_edge_mac_aging_time.yfilter)) leaf_name_data.push_back(pbb_edge_mac_aging_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-edge-mac-aging-type")
    {
        pbb_edge_mac_aging_type = value;
        pbb_edge_mac_aging_type.value_namespace = name_space;
        pbb_edge_mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-edge-mac-aging-time")
    {
        pbb_edge_mac_aging_time = value;
        pbb_edge_mac_aging_time.value_namespace = name_space;
        pbb_edge_mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-edge-mac-aging-type")
    {
        pbb_edge_mac_aging_type.yfilter = yfilter;
    }
    if(value_path == "pbb-edge-mac-aging-time")
    {
        pbb_edge_mac_aging_time.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-edge-mac-aging-type" || name == "pbb-edge-mac-aging-time")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::PbbEdgeMacSecure()
    :
    logging{YType::enumeration, "logging"},
    disable{YType::empty, "disable"},
    action{YType::enumeration, "action"},
    enable{YType::empty, "enable"},
    accept_shutdown{YType::empty, "accept-shutdown"}
{

    yang_name = "pbb-edge-mac-secure"; yang_parent_name = "pbb-edge-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::~PbbEdgeMacSecure()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| disable.is_set
	|| action.is_set
	|| enable.is_set
	|| accept_shutdown.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(accept_shutdown.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-mac-secure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (accept_shutdown.is_set || is_set(accept_shutdown.yfilter)) leaf_name_data.push_back(accept_shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-shutdown")
    {
        accept_shutdown = value;
        accept_shutdown.value_namespace = name_space;
        accept_shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "accept-shutdown")
    {
        accept_shutdown.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "disable" || name == "action" || name == "enable" || name == "accept-shutdown")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCore()
    :
    pbb_core_mmrp_flood_optimization{YType::empty, "pbb-core-mmrp-flood-optimization"},
    vlan_id{YType::uint32, "vlan-id"},
    pbb_core_igmp_profile{YType::str, "pbb-core-igmp-profile"},
    enable{YType::empty, "enable"}
        ,
    pbb_core_mac(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac>())
    , pbb_core_evis(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis>())
    , pbb_core_dhcp_profile(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile>())
{
    pbb_core_mac->parent = this;
    pbb_core_evis->parent = this;
    pbb_core_dhcp_profile->parent = this;

    yang_name = "pbb-core"; yang_parent_name = "bridge-domain-pbb"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::~PbbCore()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::has_data() const
{
    if (is_presence_container) return true;
    return pbb_core_mmrp_flood_optimization.is_set
	|| vlan_id.is_set
	|| pbb_core_igmp_profile.is_set
	|| enable.is_set
	|| (pbb_core_mac !=  nullptr && pbb_core_mac->has_data())
	|| (pbb_core_evis !=  nullptr && pbb_core_evis->has_data())
	|| (pbb_core_dhcp_profile !=  nullptr && pbb_core_dhcp_profile->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_core_mmrp_flood_optimization.yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| ydk::is_set(pbb_core_igmp_profile.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (pbb_core_mac !=  nullptr && pbb_core_mac->has_operation())
	|| (pbb_core_evis !=  nullptr && pbb_core_evis->has_operation())
	|| (pbb_core_dhcp_profile !=  nullptr && pbb_core_dhcp_profile->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_core_mmrp_flood_optimization.is_set || is_set(pbb_core_mmrp_flood_optimization.yfilter)) leaf_name_data.push_back(pbb_core_mmrp_flood_optimization.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());
    if (pbb_core_igmp_profile.is_set || is_set(pbb_core_igmp_profile.yfilter)) leaf_name_data.push_back(pbb_core_igmp_profile.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-core-mac")
    {
        if(pbb_core_mac == nullptr)
        {
            pbb_core_mac = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac>();
        }
        return pbb_core_mac;
    }

    if(child_yang_name == "pbb-core-evis")
    {
        if(pbb_core_evis == nullptr)
        {
            pbb_core_evis = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis>();
        }
        return pbb_core_evis;
    }

    if(child_yang_name == "pbb-core-dhcp-profile")
    {
        if(pbb_core_dhcp_profile == nullptr)
        {
            pbb_core_dhcp_profile = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile>();
        }
        return pbb_core_dhcp_profile;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pbb_core_mac != nullptr)
    {
        children["pbb-core-mac"] = pbb_core_mac;
    }

    if(pbb_core_evis != nullptr)
    {
        children["pbb-core-evis"] = pbb_core_evis;
    }

    if(pbb_core_dhcp_profile != nullptr)
    {
        children["pbb-core-dhcp-profile"] = pbb_core_dhcp_profile;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-core-mmrp-flood-optimization")
    {
        pbb_core_mmrp_flood_optimization = value;
        pbb_core_mmrp_flood_optimization.value_namespace = name_space;
        pbb_core_mmrp_flood_optimization.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-core-igmp-profile")
    {
        pbb_core_igmp_profile = value;
        pbb_core_igmp_profile.value_namespace = name_space;
        pbb_core_igmp_profile.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-core-mmrp-flood-optimization")
    {
        pbb_core_mmrp_flood_optimization.yfilter = yfilter;
    }
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
    if(value_path == "pbb-core-igmp-profile")
    {
        pbb_core_igmp_profile.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-core-mac" || name == "pbb-core-evis" || name == "pbb-core-dhcp-profile" || name == "pbb-core-mmrp-flood-optimization" || name == "vlan-id" || name == "pbb-core-igmp-profile" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMac()
    :
    pbb_core_mac_learning{YType::enumeration, "pbb-core-mac-learning"}
        ,
    pbb_core_mac_aging(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging>())
    , pbb_core_mac_limit(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit>())
{
    pbb_core_mac_aging->parent = this;
    pbb_core_mac_limit->parent = this;

    yang_name = "pbb-core-mac"; yang_parent_name = "pbb-core"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::~PbbCoreMac()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::has_data() const
{
    if (is_presence_container) return true;
    return pbb_core_mac_learning.is_set
	|| (pbb_core_mac_aging !=  nullptr && pbb_core_mac_aging->has_data())
	|| (pbb_core_mac_limit !=  nullptr && pbb_core_mac_limit->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_core_mac_learning.yfilter)
	|| (pbb_core_mac_aging !=  nullptr && pbb_core_mac_aging->has_operation())
	|| (pbb_core_mac_limit !=  nullptr && pbb_core_mac_limit->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_core_mac_learning.is_set || is_set(pbb_core_mac_learning.yfilter)) leaf_name_data.push_back(pbb_core_mac_learning.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-core-mac-aging")
    {
        if(pbb_core_mac_aging == nullptr)
        {
            pbb_core_mac_aging = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging>();
        }
        return pbb_core_mac_aging;
    }

    if(child_yang_name == "pbb-core-mac-limit")
    {
        if(pbb_core_mac_limit == nullptr)
        {
            pbb_core_mac_limit = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit>();
        }
        return pbb_core_mac_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pbb_core_mac_aging != nullptr)
    {
        children["pbb-core-mac-aging"] = pbb_core_mac_aging;
    }

    if(pbb_core_mac_limit != nullptr)
    {
        children["pbb-core-mac-limit"] = pbb_core_mac_limit;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-core-mac-learning")
    {
        pbb_core_mac_learning = value;
        pbb_core_mac_learning.value_namespace = name_space;
        pbb_core_mac_learning.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-core-mac-learning")
    {
        pbb_core_mac_learning.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-core-mac-aging" || name == "pbb-core-mac-limit" || name == "pbb-core-mac-learning")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::PbbCoreMacAging()
    :
    pbb_core_mac_aging_type{YType::enumeration, "pbb-core-mac-aging-type"},
    pbb_core_mac_aging_time{YType::uint32, "pbb-core-mac-aging-time"}
{

    yang_name = "pbb-core-mac-aging"; yang_parent_name = "pbb-core-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::~PbbCoreMacAging()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::has_data() const
{
    if (is_presence_container) return true;
    return pbb_core_mac_aging_type.is_set
	|| pbb_core_mac_aging_time.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_core_mac_aging_type.yfilter)
	|| ydk::is_set(pbb_core_mac_aging_time.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-mac-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_core_mac_aging_type.is_set || is_set(pbb_core_mac_aging_type.yfilter)) leaf_name_data.push_back(pbb_core_mac_aging_type.get_name_leafdata());
    if (pbb_core_mac_aging_time.is_set || is_set(pbb_core_mac_aging_time.yfilter)) leaf_name_data.push_back(pbb_core_mac_aging_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-core-mac-aging-type")
    {
        pbb_core_mac_aging_type = value;
        pbb_core_mac_aging_type.value_namespace = name_space;
        pbb_core_mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-core-mac-aging-time")
    {
        pbb_core_mac_aging_time = value;
        pbb_core_mac_aging_time.value_namespace = name_space;
        pbb_core_mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-core-mac-aging-type")
    {
        pbb_core_mac_aging_type.yfilter = yfilter;
    }
    if(value_path == "pbb-core-mac-aging-time")
    {
        pbb_core_mac_aging_time.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-core-mac-aging-type" || name == "pbb-core-mac-aging-time")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::PbbCoreMacLimit()
    :
    pbb_core_mac_limit_max{YType::uint32, "pbb-core-mac-limit-max"},
    pbb_core_mac_limit_notif{YType::enumeration, "pbb-core-mac-limit-notif"},
    pbb_core_mac_limit_action{YType::enumeration, "pbb-core-mac-limit-action"}
{

    yang_name = "pbb-core-mac-limit"; yang_parent_name = "pbb-core-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::~PbbCoreMacLimit()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::has_data() const
{
    if (is_presence_container) return true;
    return pbb_core_mac_limit_max.is_set
	|| pbb_core_mac_limit_notif.is_set
	|| pbb_core_mac_limit_action.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pbb_core_mac_limit_max.yfilter)
	|| ydk::is_set(pbb_core_mac_limit_notif.yfilter)
	|| ydk::is_set(pbb_core_mac_limit_action.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-mac-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_core_mac_limit_max.is_set || is_set(pbb_core_mac_limit_max.yfilter)) leaf_name_data.push_back(pbb_core_mac_limit_max.get_name_leafdata());
    if (pbb_core_mac_limit_notif.is_set || is_set(pbb_core_mac_limit_notif.yfilter)) leaf_name_data.push_back(pbb_core_mac_limit_notif.get_name_leafdata());
    if (pbb_core_mac_limit_action.is_set || is_set(pbb_core_mac_limit_action.yfilter)) leaf_name_data.push_back(pbb_core_mac_limit_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pbb-core-mac-limit-max")
    {
        pbb_core_mac_limit_max = value;
        pbb_core_mac_limit_max.value_namespace = name_space;
        pbb_core_mac_limit_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-core-mac-limit-notif")
    {
        pbb_core_mac_limit_notif = value;
        pbb_core_mac_limit_notif.value_namespace = name_space;
        pbb_core_mac_limit_notif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-core-mac-limit-action")
    {
        pbb_core_mac_limit_action = value;
        pbb_core_mac_limit_action.value_namespace = name_space;
        pbb_core_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pbb-core-mac-limit-max")
    {
        pbb_core_mac_limit_max.yfilter = yfilter;
    }
    if(value_path == "pbb-core-mac-limit-notif")
    {
        pbb_core_mac_limit_notif.yfilter = yfilter;
    }
    if(value_path == "pbb-core-mac-limit-action")
    {
        pbb_core_mac_limit_action.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-core-mac-limit-max" || name == "pbb-core-mac-limit-notif" || name == "pbb-core-mac-limit-action")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvis()
    :
    pbb_core_evi(this, {"eviid"})
{

    yang_name = "pbb-core-evis"; yang_parent_name = "pbb-core"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::~PbbCoreEvis()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pbb_core_evi.len(); index++)
    {
        if(pbb_core_evi[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::has_operation() const
{
    for (std::size_t index=0; index<pbb_core_evi.len(); index++)
    {
        if(pbb_core_evi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-evis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pbb-core-evi")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi>();
        c->parent = this;
        pbb_core_evi.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pbb_core_evi.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pbb-core-evi")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::PbbCoreEvi()
    :
    eviid{YType::uint32, "eviid"}
{

    yang_name = "pbb-core-evi"; yang_parent_name = "pbb-core-evis"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::~PbbCoreEvi()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::has_data() const
{
    if (is_presence_container) return true;
    return eviid.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eviid.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-evi";
    ADD_KEY_TOKEN(eviid, "eviid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eviid.is_set || is_set(eviid.yfilter)) leaf_name_data.push_back(eviid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eviid")
    {
        eviid = value;
        eviid.value_namespace = name_space;
        eviid.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eviid")
    {
        eviid.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eviid")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::PbbCoreDhcpProfile()
    :
    profile_id{YType::enumeration, "profile-id"},
    dhcp_snooping_id{YType::str, "dhcp-snooping-id"}
{

    yang_name = "pbb-core-dhcp-profile"; yang_parent_name = "pbb-core"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::~PbbCoreDhcpProfile()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::has_data() const
{
    if (is_presence_container) return true;
    return profile_id.is_set
	|| dhcp_snooping_id.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_id.yfilter)
	|| ydk::is_set(dhcp_snooping_id.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-dhcp-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());
    if (dhcp_snooping_id.is_set || is_set(dhcp_snooping_id.yfilter)) leaf_name_data.push_back(dhcp_snooping_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id = value;
        dhcp_snooping_id.value_namespace = name_space;
        dhcp_snooping_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-id" || name == "dhcp-snooping-id")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvis()
    :
    bridge_domain_evi(this, {"vpn_id"})
{

    yang_name = "bridge-domain-evis"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::~BridgeDomainEvis()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bridge_domain_evi.len(); index++)
    {
        if(bridge_domain_evi[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::has_operation() const
{
    for (std::size_t index=0; index<bridge_domain_evi.len(); index++)
    {
        if(bridge_domain_evi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-evis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domain-evi")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi>();
        c->parent = this;
        bridge_domain_evi.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bridge_domain_evi.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain-evi")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::BridgeDomainEvi()
    :
    vpn_id{YType::uint32, "vpn-id"}
{

    yang_name = "bridge-domain-evi"; yang_parent_name = "bridge-domain-evis"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::~BridgeDomainEvi()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::has_data() const
{
    if (is_presence_container) return true;
    return vpn_id.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpn_id.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-evi";
    ADD_KEY_TOKEN(vpn_id, "vpn-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpn-id")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfis()
    :
    access_vfi(this, {"name"})
{

    yang_name = "access-vfis"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::~AccessVfis()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_vfi.len(); index++)
    {
        if(access_vfi[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::has_operation() const
{
    for (std::size_t index=0; index<access_vfi.len(); index++)
    {
        if(access_vfi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-vfi")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi>();
        c->parent = this;
        access_vfi.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : access_vfi.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-vfi")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfi()
    :
    name{YType::str, "name"},
    access_vfi_shutdown{YType::empty, "access-vfi-shutdown"}
        ,
    access_vfi_pseudowires(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires>())
{
    access_vfi_pseudowires->parent = this;

    yang_name = "access-vfi"; yang_parent_name = "access-vfis"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::~AccessVfi()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| access_vfi_shutdown.is_set
	|| (access_vfi_pseudowires !=  nullptr && access_vfi_pseudowires->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(access_vfi_shutdown.yfilter)
	|| (access_vfi_pseudowires !=  nullptr && access_vfi_pseudowires->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfi";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (access_vfi_shutdown.is_set || is_set(access_vfi_shutdown.yfilter)) leaf_name_data.push_back(access_vfi_shutdown.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-vfi-pseudowires")
    {
        if(access_vfi_pseudowires == nullptr)
        {
            access_vfi_pseudowires = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires>();
        }
        return access_vfi_pseudowires;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(access_vfi_pseudowires != nullptr)
    {
        children["access-vfi-pseudowires"] = access_vfi_pseudowires;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-vfi-shutdown")
    {
        access_vfi_shutdown = value;
        access_vfi_shutdown.value_namespace = name_space;
        access_vfi_shutdown.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "access-vfi-shutdown")
    {
        access_vfi_shutdown.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-vfi-pseudowires" || name == "name" || name == "access-vfi-shutdown")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowires()
    :
    access_vfi_pseudowire(this, {"neighbor", "pseudowire_id"})
{

    yang_name = "access-vfi-pseudowires"; yang_parent_name = "access-vfi"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::~AccessVfiPseudowires()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_vfi_pseudowire.len(); index++)
    {
        if(access_vfi_pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::has_operation() const
{
    for (std::size_t index=0; index<access_vfi_pseudowire.len(); index++)
    {
        if(access_vfi_pseudowire[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfi-pseudowires";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-vfi-pseudowire")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire>();
        c->parent = this;
        access_vfi_pseudowire.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : access_vfi_pseudowire.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-vfi-pseudowire")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowire()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    access_vfi_pw_class{YType::str, "access-vfi-pw-class"}
        ,
    access_vfi_pseudowire_static_mac_addresses(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses>())
{
    access_vfi_pseudowire_static_mac_addresses->parent = this;

    yang_name = "access-vfi-pseudowire"; yang_parent_name = "access-vfi-pseudowires"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::~AccessVfiPseudowire()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::has_data() const
{
    if (is_presence_container) return true;
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| access_vfi_pw_class.is_set
	|| (access_vfi_pseudowire_static_mac_addresses !=  nullptr && access_vfi_pseudowire_static_mac_addresses->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(access_vfi_pw_class.yfilter)
	|| (access_vfi_pseudowire_static_mac_addresses !=  nullptr && access_vfi_pseudowire_static_mac_addresses->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfi-pseudowire";
    ADD_KEY_TOKEN(neighbor, "neighbor");
    ADD_KEY_TOKEN(pseudowire_id, "pseudowire-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (access_vfi_pw_class.is_set || is_set(access_vfi_pw_class.yfilter)) leaf_name_data.push_back(access_vfi_pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-vfi-pseudowire-static-mac-addresses")
    {
        if(access_vfi_pseudowire_static_mac_addresses == nullptr)
        {
            access_vfi_pseudowire_static_mac_addresses = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses>();
        }
        return access_vfi_pseudowire_static_mac_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(access_vfi_pseudowire_static_mac_addresses != nullptr)
    {
        children["access-vfi-pseudowire-static-mac-addresses"] = access_vfi_pseudowire_static_mac_addresses;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-vfi-pw-class")
    {
        access_vfi_pw_class = value;
        access_vfi_pw_class.value_namespace = name_space;
        access_vfi_pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
    if(value_path == "access-vfi-pw-class")
    {
        access_vfi_pw_class.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-vfi-pseudowire-static-mac-addresses" || name == "neighbor" || name == "pseudowire-id" || name == "access-vfi-pw-class")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddresses()
    :
    access_vfi_pseudowire_static_mac_address(this, {"address"})
{

    yang_name = "access-vfi-pseudowire-static-mac-addresses"; yang_parent_name = "access-vfi-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::~AccessVfiPseudowireStaticMacAddresses()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_vfi_pseudowire_static_mac_address.len(); index++)
    {
        if(access_vfi_pseudowire_static_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::has_operation() const
{
    for (std::size_t index=0; index<access_vfi_pseudowire_static_mac_address.len(); index++)
    {
        if(access_vfi_pseudowire_static_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfi-pseudowire-static-mac-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-vfi-pseudowire-static-mac-address")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress>();
        c->parent = this;
        access_vfi_pseudowire_static_mac_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : access_vfi_pseudowire_static_mac_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-vfi-pseudowire-static-mac-address")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::AccessVfiPseudowireStaticMacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "access-vfi-pseudowire-static-mac-address"; yang_parent_name = "access-vfi-pseudowire-static-mac-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::~AccessVfiPseudowireStaticMacAddress()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfi-pseudowire-static-mac-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowires()
    :
    bd_pseudowire(this, {"neighbor", "pseudowire_id"})
{

    yang_name = "bd-pseudowires"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::~BdPseudowires()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bd_pseudowire.len(); index++)
    {
        if(bd_pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::has_operation() const
{
    for (std::size_t index=0; index<bd_pseudowire.len(); index++)
    {
        if(bd_pseudowire[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pseudowires";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-pseudowire")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire>();
        c->parent = this;
        bd_pseudowire.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bd_pseudowire.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-pseudowire")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPseudowire()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    pseudowire_mld_snoop{YType::str, "pseudowire-mld-snoop"},
    pseudowire_igmp_snoop{YType::str, "pseudowire-igmp-snoop"},
    pseudowire_flooding{YType::enumeration, "pseudowire-flooding"},
    bd_pw_class{YType::str, "bd-pw-class"},
    pseudowire_flooding_unknown_unicast{YType::enumeration, "pseudowire-flooding-unknown-unicast"}
        ,
    pseudowire_dai(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai>())
    , bdpw_storm_control_types(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes>())
    , pseudowire_profile(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile>())
    , bd_pw_static_mac_addresses(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses>())
    , pseudowire_ip_source_guard(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard>())
    , pseudowire_mac(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac>())
    , bd_pw_split_horizon(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon>())
    , bd_pw_mpls_static_labels(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels>())
    , bridge_domain_backup_pseudowires(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires>())
{
    pseudowire_dai->parent = this;
    bdpw_storm_control_types->parent = this;
    pseudowire_profile->parent = this;
    bd_pw_static_mac_addresses->parent = this;
    pseudowire_ip_source_guard->parent = this;
    pseudowire_mac->parent = this;
    bd_pw_split_horizon->parent = this;
    bd_pw_mpls_static_labels->parent = this;
    bridge_domain_backup_pseudowires->parent = this;

    yang_name = "bd-pseudowire"; yang_parent_name = "bd-pseudowires"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::~BdPseudowire()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::has_data() const
{
    if (is_presence_container) return true;
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| pseudowire_mld_snoop.is_set
	|| pseudowire_igmp_snoop.is_set
	|| pseudowire_flooding.is_set
	|| bd_pw_class.is_set
	|| pseudowire_flooding_unknown_unicast.is_set
	|| (pseudowire_dai !=  nullptr && pseudowire_dai->has_data())
	|| (bdpw_storm_control_types !=  nullptr && bdpw_storm_control_types->has_data())
	|| (pseudowire_profile !=  nullptr && pseudowire_profile->has_data())
	|| (bd_pw_static_mac_addresses !=  nullptr && bd_pw_static_mac_addresses->has_data())
	|| (pseudowire_ip_source_guard !=  nullptr && pseudowire_ip_source_guard->has_data())
	|| (pseudowire_mac !=  nullptr && pseudowire_mac->has_data())
	|| (bd_pw_split_horizon !=  nullptr && bd_pw_split_horizon->has_data())
	|| (bd_pw_mpls_static_labels !=  nullptr && bd_pw_mpls_static_labels->has_data())
	|| (bridge_domain_backup_pseudowires !=  nullptr && bridge_domain_backup_pseudowires->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(pseudowire_mld_snoop.yfilter)
	|| ydk::is_set(pseudowire_igmp_snoop.yfilter)
	|| ydk::is_set(pseudowire_flooding.yfilter)
	|| ydk::is_set(bd_pw_class.yfilter)
	|| ydk::is_set(pseudowire_flooding_unknown_unicast.yfilter)
	|| (pseudowire_dai !=  nullptr && pseudowire_dai->has_operation())
	|| (bdpw_storm_control_types !=  nullptr && bdpw_storm_control_types->has_operation())
	|| (pseudowire_profile !=  nullptr && pseudowire_profile->has_operation())
	|| (bd_pw_static_mac_addresses !=  nullptr && bd_pw_static_mac_addresses->has_operation())
	|| (pseudowire_ip_source_guard !=  nullptr && pseudowire_ip_source_guard->has_operation())
	|| (pseudowire_mac !=  nullptr && pseudowire_mac->has_operation())
	|| (bd_pw_split_horizon !=  nullptr && bd_pw_split_horizon->has_operation())
	|| (bd_pw_mpls_static_labels !=  nullptr && bd_pw_mpls_static_labels->has_operation())
	|| (bridge_domain_backup_pseudowires !=  nullptr && bridge_domain_backup_pseudowires->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pseudowire";
    ADD_KEY_TOKEN(neighbor, "neighbor");
    ADD_KEY_TOKEN(pseudowire_id, "pseudowire-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (pseudowire_mld_snoop.is_set || is_set(pseudowire_mld_snoop.yfilter)) leaf_name_data.push_back(pseudowire_mld_snoop.get_name_leafdata());
    if (pseudowire_igmp_snoop.is_set || is_set(pseudowire_igmp_snoop.yfilter)) leaf_name_data.push_back(pseudowire_igmp_snoop.get_name_leafdata());
    if (pseudowire_flooding.is_set || is_set(pseudowire_flooding.yfilter)) leaf_name_data.push_back(pseudowire_flooding.get_name_leafdata());
    if (bd_pw_class.is_set || is_set(bd_pw_class.yfilter)) leaf_name_data.push_back(bd_pw_class.get_name_leafdata());
    if (pseudowire_flooding_unknown_unicast.is_set || is_set(pseudowire_flooding_unknown_unicast.yfilter)) leaf_name_data.push_back(pseudowire_flooding_unknown_unicast.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire-dai")
    {
        if(pseudowire_dai == nullptr)
        {
            pseudowire_dai = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai>();
        }
        return pseudowire_dai;
    }

    if(child_yang_name == "bdpw-storm-control-types")
    {
        if(bdpw_storm_control_types == nullptr)
        {
            bdpw_storm_control_types = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes>();
        }
        return bdpw_storm_control_types;
    }

    if(child_yang_name == "pseudowire-profile")
    {
        if(pseudowire_profile == nullptr)
        {
            pseudowire_profile = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile>();
        }
        return pseudowire_profile;
    }

    if(child_yang_name == "bd-pw-static-mac-addresses")
    {
        if(bd_pw_static_mac_addresses == nullptr)
        {
            bd_pw_static_mac_addresses = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses>();
        }
        return bd_pw_static_mac_addresses;
    }

    if(child_yang_name == "pseudowire-ip-source-guard")
    {
        if(pseudowire_ip_source_guard == nullptr)
        {
            pseudowire_ip_source_guard = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard>();
        }
        return pseudowire_ip_source_guard;
    }

    if(child_yang_name == "pseudowire-mac")
    {
        if(pseudowire_mac == nullptr)
        {
            pseudowire_mac = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac>();
        }
        return pseudowire_mac;
    }

    if(child_yang_name == "bd-pw-split-horizon")
    {
        if(bd_pw_split_horizon == nullptr)
        {
            bd_pw_split_horizon = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon>();
        }
        return bd_pw_split_horizon;
    }

    if(child_yang_name == "bd-pw-mpls-static-labels")
    {
        if(bd_pw_mpls_static_labels == nullptr)
        {
            bd_pw_mpls_static_labels = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels>();
        }
        return bd_pw_mpls_static_labels;
    }

    if(child_yang_name == "bridge-domain-backup-pseudowires")
    {
        if(bridge_domain_backup_pseudowires == nullptr)
        {
            bridge_domain_backup_pseudowires = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires>();
        }
        return bridge_domain_backup_pseudowires;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pseudowire_dai != nullptr)
    {
        children["pseudowire-dai"] = pseudowire_dai;
    }

    if(bdpw_storm_control_types != nullptr)
    {
        children["bdpw-storm-control-types"] = bdpw_storm_control_types;
    }

    if(pseudowire_profile != nullptr)
    {
        children["pseudowire-profile"] = pseudowire_profile;
    }

    if(bd_pw_static_mac_addresses != nullptr)
    {
        children["bd-pw-static-mac-addresses"] = bd_pw_static_mac_addresses;
    }

    if(pseudowire_ip_source_guard != nullptr)
    {
        children["pseudowire-ip-source-guard"] = pseudowire_ip_source_guard;
    }

    if(pseudowire_mac != nullptr)
    {
        children["pseudowire-mac"] = pseudowire_mac;
    }

    if(bd_pw_split_horizon != nullptr)
    {
        children["bd-pw-split-horizon"] = bd_pw_split_horizon;
    }

    if(bd_pw_mpls_static_labels != nullptr)
    {
        children["bd-pw-mpls-static-labels"] = bd_pw_mpls_static_labels;
    }

    if(bridge_domain_backup_pseudowires != nullptr)
    {
        children["bridge-domain-backup-pseudowires"] = bridge_domain_backup_pseudowires;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-mld-snoop")
    {
        pseudowire_mld_snoop = value;
        pseudowire_mld_snoop.value_namespace = name_space;
        pseudowire_mld_snoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-igmp-snoop")
    {
        pseudowire_igmp_snoop = value;
        pseudowire_igmp_snoop.value_namespace = name_space;
        pseudowire_igmp_snoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-flooding")
    {
        pseudowire_flooding = value;
        pseudowire_flooding.value_namespace = name_space;
        pseudowire_flooding.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bd-pw-class")
    {
        bd_pw_class = value;
        bd_pw_class.value_namespace = name_space;
        bd_pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-flooding-unknown-unicast")
    {
        pseudowire_flooding_unknown_unicast = value;
        pseudowire_flooding_unknown_unicast.value_namespace = name_space;
        pseudowire_flooding_unknown_unicast.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
    if(value_path == "pseudowire-mld-snoop")
    {
        pseudowire_mld_snoop.yfilter = yfilter;
    }
    if(value_path == "pseudowire-igmp-snoop")
    {
        pseudowire_igmp_snoop.yfilter = yfilter;
    }
    if(value_path == "pseudowire-flooding")
    {
        pseudowire_flooding.yfilter = yfilter;
    }
    if(value_path == "bd-pw-class")
    {
        bd_pw_class.yfilter = yfilter;
    }
    if(value_path == "pseudowire-flooding-unknown-unicast")
    {
        pseudowire_flooding_unknown_unicast.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-dai" || name == "bdpw-storm-control-types" || name == "pseudowire-profile" || name == "bd-pw-static-mac-addresses" || name == "pseudowire-ip-source-guard" || name == "pseudowire-mac" || name == "bd-pw-split-horizon" || name == "bd-pw-mpls-static-labels" || name == "bridge-domain-backup-pseudowires" || name == "neighbor" || name == "pseudowire-id" || name == "pseudowire-mld-snoop" || name == "pseudowire-igmp-snoop" || name == "pseudowire-flooding" || name == "bd-pw-class" || name == "pseudowire-flooding-unknown-unicast")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDai()
    :
    logging{YType::enumeration, "logging"},
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"}
        ,
    pseudowire_dai_address_validation(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation>())
{
    pseudowire_dai_address_validation->parent = this;

    yang_name = "pseudowire-dai"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::~PseudowireDai()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| disable.is_set
	|| enable.is_set
	|| (pseudowire_dai_address_validation !=  nullptr && pseudowire_dai_address_validation->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (pseudowire_dai_address_validation !=  nullptr && pseudowire_dai_address_validation->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-dai";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire-dai-address-validation")
    {
        if(pseudowire_dai_address_validation == nullptr)
        {
            pseudowire_dai_address_validation = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation>();
        }
        return pseudowire_dai_address_validation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pseudowire_dai_address_validation != nullptr)
    {
        children["pseudowire-dai-address-validation"] = pseudowire_dai_address_validation;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-dai-address-validation" || name == "logging" || name == "disable" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::PseudowireDaiAddressValidation()
    :
    ipv4_verification{YType::enumeration, "ipv4-verification"},
    destination_mac_verification{YType::enumeration, "destination-mac-verification"},
    source_mac_verification{YType::enumeration, "source-mac-verification"}
{

    yang_name = "pseudowire-dai-address-validation"; yang_parent_name = "pseudowire-dai"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::~PseudowireDaiAddressValidation()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_verification.is_set
	|| destination_mac_verification.is_set
	|| source_mac_verification.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_verification.yfilter)
	|| ydk::is_set(destination_mac_verification.yfilter)
	|| ydk::is_set(source_mac_verification.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-dai-address-validation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_verification.is_set || is_set(ipv4_verification.yfilter)) leaf_name_data.push_back(ipv4_verification.get_name_leafdata());
    if (destination_mac_verification.is_set || is_set(destination_mac_verification.yfilter)) leaf_name_data.push_back(destination_mac_verification.get_name_leafdata());
    if (source_mac_verification.is_set || is_set(source_mac_verification.yfilter)) leaf_name_data.push_back(source_mac_verification.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-verification")
    {
        ipv4_verification = value;
        ipv4_verification.value_namespace = name_space;
        ipv4_verification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-mac-verification")
    {
        destination_mac_verification = value;
        destination_mac_verification.value_namespace = name_space;
        destination_mac_verification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-mac-verification")
    {
        source_mac_verification = value;
        source_mac_verification.value_namespace = name_space;
        source_mac_verification.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-verification")
    {
        ipv4_verification.yfilter = yfilter;
    }
    if(value_path == "destination-mac-verification")
    {
        destination_mac_verification.yfilter = yfilter;
    }
    if(value_path == "source-mac-verification")
    {
        source_mac_verification.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-verification" || name == "destination-mac-verification" || name == "source-mac-verification")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlTypes()
    :
    bdpw_storm_control_type(this, {"sctype"})
{

    yang_name = "bdpw-storm-control-types"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::~BdpwStormControlTypes()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bdpw_storm_control_type.len(); index++)
    {
        if(bdpw_storm_control_type[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::has_operation() const
{
    for (std::size_t index=0; index<bdpw_storm_control_type.len(); index++)
    {
        if(bdpw_storm_control_type[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdpw-storm-control-types";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bdpw-storm-control-type")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType>();
        c->parent = this;
        bdpw_storm_control_type.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bdpw_storm_control_type.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bdpw-storm-control-type")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::BdpwStormControlType()
    :
    sctype{YType::enumeration, "sctype"}
        ,
    storm_control_unit(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit>())
{
    storm_control_unit->parent = this;

    yang_name = "bdpw-storm-control-type"; yang_parent_name = "bdpw-storm-control-types"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::~BdpwStormControlType()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::has_data() const
{
    if (is_presence_container) return true;
    return sctype.is_set
	|| (storm_control_unit !=  nullptr && storm_control_unit->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sctype.yfilter)
	|| (storm_control_unit !=  nullptr && storm_control_unit->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdpw-storm-control-type";
    ADD_KEY_TOKEN(sctype, "sctype");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sctype.is_set || is_set(sctype.yfilter)) leaf_name_data.push_back(sctype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "storm-control-unit")
    {
        if(storm_control_unit == nullptr)
        {
            storm_control_unit = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit>();
        }
        return storm_control_unit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(storm_control_unit != nullptr)
    {
        children["storm-control-unit"] = storm_control_unit;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sctype")
    {
        sctype = value;
        sctype.value_namespace = name_space;
        sctype.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sctype")
    {
        sctype.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "storm-control-unit" || name == "sctype")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::StormControlUnit()
    :
    kbits_per_sec{YType::uint32, "kbits-per-sec"},
    pkts_per_sec{YType::uint32, "pkts-per-sec"}
{

    yang_name = "storm-control-unit"; yang_parent_name = "bdpw-storm-control-type"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::~StormControlUnit()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::has_data() const
{
    if (is_presence_container) return true;
    return kbits_per_sec.is_set
	|| pkts_per_sec.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(kbits_per_sec.yfilter)
	|| ydk::is_set(pkts_per_sec.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control-unit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kbits_per_sec.is_set || is_set(kbits_per_sec.yfilter)) leaf_name_data.push_back(kbits_per_sec.get_name_leafdata());
    if (pkts_per_sec.is_set || is_set(pkts_per_sec.yfilter)) leaf_name_data.push_back(pkts_per_sec.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "kbits-per-sec")
    {
        kbits_per_sec = value;
        kbits_per_sec.value_namespace = name_space;
        kbits_per_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pkts-per-sec")
    {
        pkts_per_sec = value;
        pkts_per_sec.value_namespace = name_space;
        pkts_per_sec.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "kbits-per-sec")
    {
        kbits_per_sec.yfilter = yfilter;
    }
    if(value_path == "pkts-per-sec")
    {
        pkts_per_sec.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "kbits-per-sec" || name == "pkts-per-sec")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::PseudowireProfile()
    :
    profile_id{YType::enumeration, "profile-id"},
    dhcp_snooping_id{YType::str, "dhcp-snooping-id"}
{

    yang_name = "pseudowire-profile"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::~PseudowireProfile()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::has_data() const
{
    if (is_presence_container) return true;
    return profile_id.is_set
	|| dhcp_snooping_id.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_id.yfilter)
	|| ydk::is_set(dhcp_snooping_id.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-profile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());
    if (dhcp_snooping_id.is_set || is_set(dhcp_snooping_id.yfilter)) leaf_name_data.push_back(dhcp_snooping_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id = value;
        dhcp_snooping_id.value_namespace = name_space;
        dhcp_snooping_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-id" || name == "dhcp-snooping-id")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddresses()
    :
    bd_pw_static_mac_address(this, {"address"})
{

    yang_name = "bd-pw-static-mac-addresses"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::~BdPwStaticMacAddresses()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bd_pw_static_mac_address.len(); index++)
    {
        if(bd_pw_static_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::has_operation() const
{
    for (std::size_t index=0; index<bd_pw_static_mac_address.len(); index++)
    {
        if(bd_pw_static_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pw-static-mac-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-pw-static-mac-address")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress>();
        c->parent = this;
        bd_pw_static_mac_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bd_pw_static_mac_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-pw-static-mac-address")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::BdPwStaticMacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "bd-pw-static-mac-address"; yang_parent_name = "bd-pw-static-mac-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::~BdPwStaticMacAddress()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pw-static-mac-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::PseudowireIpSourceGuard()
    :
    logging{YType::enumeration, "logging"},
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"}
{

    yang_name = "pseudowire-ip-source-guard"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::~PseudowireIpSourceGuard()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| disable.is_set
	|| enable.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ip-source-guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "disable" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMac()
    :
    pseudowire_mac_port_down_flush{YType::enumeration, "pseudowire-mac-port-down-flush"},
    enable{YType::empty, "enable"},
    pseudowire_mac_learning{YType::enumeration, "pseudowire-mac-learning"}
        ,
    pseudowire_mac_secure(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure>())
    , pseudowire_mac_aging(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging>())
    , pseudowire_mac_limit(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit>())
{
    pseudowire_mac_secure->parent = this;
    pseudowire_mac_aging->parent = this;
    pseudowire_mac_limit->parent = this;

    yang_name = "pseudowire-mac"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::~PseudowireMac()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::has_data() const
{
    if (is_presence_container) return true;
    return pseudowire_mac_port_down_flush.is_set
	|| enable.is_set
	|| pseudowire_mac_learning.is_set
	|| (pseudowire_mac_secure !=  nullptr && pseudowire_mac_secure->has_data())
	|| (pseudowire_mac_aging !=  nullptr && pseudowire_mac_aging->has_data())
	|| (pseudowire_mac_limit !=  nullptr && pseudowire_mac_limit->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pseudowire_mac_port_down_flush.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(pseudowire_mac_learning.yfilter)
	|| (pseudowire_mac_secure !=  nullptr && pseudowire_mac_secure->has_operation())
	|| (pseudowire_mac_aging !=  nullptr && pseudowire_mac_aging->has_operation())
	|| (pseudowire_mac_limit !=  nullptr && pseudowire_mac_limit->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-mac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_mac_port_down_flush.is_set || is_set(pseudowire_mac_port_down_flush.yfilter)) leaf_name_data.push_back(pseudowire_mac_port_down_flush.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (pseudowire_mac_learning.is_set || is_set(pseudowire_mac_learning.yfilter)) leaf_name_data.push_back(pseudowire_mac_learning.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire-mac-secure")
    {
        if(pseudowire_mac_secure == nullptr)
        {
            pseudowire_mac_secure = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure>();
        }
        return pseudowire_mac_secure;
    }

    if(child_yang_name == "pseudowire-mac-aging")
    {
        if(pseudowire_mac_aging == nullptr)
        {
            pseudowire_mac_aging = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging>();
        }
        return pseudowire_mac_aging;
    }

    if(child_yang_name == "pseudowire-mac-limit")
    {
        if(pseudowire_mac_limit == nullptr)
        {
            pseudowire_mac_limit = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit>();
        }
        return pseudowire_mac_limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(pseudowire_mac_secure != nullptr)
    {
        children["pseudowire-mac-secure"] = pseudowire_mac_secure;
    }

    if(pseudowire_mac_aging != nullptr)
    {
        children["pseudowire-mac-aging"] = pseudowire_mac_aging;
    }

    if(pseudowire_mac_limit != nullptr)
    {
        children["pseudowire-mac-limit"] = pseudowire_mac_limit;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pseudowire-mac-port-down-flush")
    {
        pseudowire_mac_port_down_flush = value;
        pseudowire_mac_port_down_flush.value_namespace = name_space;
        pseudowire_mac_port_down_flush.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-mac-learning")
    {
        pseudowire_mac_learning = value;
        pseudowire_mac_learning.value_namespace = name_space;
        pseudowire_mac_learning.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pseudowire-mac-port-down-flush")
    {
        pseudowire_mac_port_down_flush.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "pseudowire-mac-learning")
    {
        pseudowire_mac_learning.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-mac-secure" || name == "pseudowire-mac-aging" || name == "pseudowire-mac-limit" || name == "pseudowire-mac-port-down-flush" || name == "enable" || name == "pseudowire-mac-learning")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::PseudowireMacSecure()
    :
    logging{YType::enumeration, "logging"},
    disable{YType::empty, "disable"},
    action{YType::enumeration, "action"},
    enable{YType::empty, "enable"}
{

    yang_name = "pseudowire-mac-secure"; yang_parent_name = "pseudowire-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::~PseudowireMacSecure()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::has_data() const
{
    if (is_presence_container) return true;
    return logging.is_set
	|| disable.is_set
	|| action.is_set
	|| enable.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(logging.yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(action.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-mac-secure";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (logging.is_set || is_set(logging.yfilter)) leaf_name_data.push_back(logging.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "logging")
    {
        logging = value;
        logging.value_namespace = name_space;
        logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "logging")
    {
        logging.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logging" || name == "disable" || name == "action" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::PseudowireMacAging()
    :
    pseudowire_mac_aging_type{YType::enumeration, "pseudowire-mac-aging-type"},
    pseudowire_mac_aging_time{YType::uint32, "pseudowire-mac-aging-time"}
{

    yang_name = "pseudowire-mac-aging"; yang_parent_name = "pseudowire-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::~PseudowireMacAging()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::has_data() const
{
    if (is_presence_container) return true;
    return pseudowire_mac_aging_type.is_set
	|| pseudowire_mac_aging_time.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pseudowire_mac_aging_type.yfilter)
	|| ydk::is_set(pseudowire_mac_aging_time.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-mac-aging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_mac_aging_type.is_set || is_set(pseudowire_mac_aging_type.yfilter)) leaf_name_data.push_back(pseudowire_mac_aging_type.get_name_leafdata());
    if (pseudowire_mac_aging_time.is_set || is_set(pseudowire_mac_aging_time.yfilter)) leaf_name_data.push_back(pseudowire_mac_aging_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pseudowire-mac-aging-type")
    {
        pseudowire_mac_aging_type = value;
        pseudowire_mac_aging_type.value_namespace = name_space;
        pseudowire_mac_aging_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-mac-aging-time")
    {
        pseudowire_mac_aging_time = value;
        pseudowire_mac_aging_time.value_namespace = name_space;
        pseudowire_mac_aging_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pseudowire-mac-aging-type")
    {
        pseudowire_mac_aging_type.yfilter = yfilter;
    }
    if(value_path == "pseudowire-mac-aging-time")
    {
        pseudowire_mac_aging_time.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-mac-aging-type" || name == "pseudowire-mac-aging-time")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::PseudowireMacLimit()
    :
    pseudowire_mac_limit_action{YType::enumeration, "pseudowire-mac-limit-action"},
    pseudowire_mac_limit_notif{YType::enumeration, "pseudowire-mac-limit-notif"},
    pseudowire_mac_limit_max{YType::uint32, "pseudowire-mac-limit-max"}
{

    yang_name = "pseudowire-mac-limit"; yang_parent_name = "pseudowire-mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::~PseudowireMacLimit()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::has_data() const
{
    if (is_presence_container) return true;
    return pseudowire_mac_limit_action.is_set
	|| pseudowire_mac_limit_notif.is_set
	|| pseudowire_mac_limit_max.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pseudowire_mac_limit_action.yfilter)
	|| ydk::is_set(pseudowire_mac_limit_notif.yfilter)
	|| ydk::is_set(pseudowire_mac_limit_max.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-mac-limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_mac_limit_action.is_set || is_set(pseudowire_mac_limit_action.yfilter)) leaf_name_data.push_back(pseudowire_mac_limit_action.get_name_leafdata());
    if (pseudowire_mac_limit_notif.is_set || is_set(pseudowire_mac_limit_notif.yfilter)) leaf_name_data.push_back(pseudowire_mac_limit_notif.get_name_leafdata());
    if (pseudowire_mac_limit_max.is_set || is_set(pseudowire_mac_limit_max.yfilter)) leaf_name_data.push_back(pseudowire_mac_limit_max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pseudowire-mac-limit-action")
    {
        pseudowire_mac_limit_action = value;
        pseudowire_mac_limit_action.value_namespace = name_space;
        pseudowire_mac_limit_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-mac-limit-notif")
    {
        pseudowire_mac_limit_notif = value;
        pseudowire_mac_limit_notif.value_namespace = name_space;
        pseudowire_mac_limit_notif.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-mac-limit-max")
    {
        pseudowire_mac_limit_max = value;
        pseudowire_mac_limit_max.value_namespace = name_space;
        pseudowire_mac_limit_max.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pseudowire-mac-limit-action")
    {
        pseudowire_mac_limit_action.yfilter = yfilter;
    }
    if(value_path == "pseudowire-mac-limit-notif")
    {
        pseudowire_mac_limit_notif.yfilter = yfilter;
    }
    if(value_path == "pseudowire-mac-limit-max")
    {
        pseudowire_mac_limit_max.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-mac-limit-action" || name == "pseudowire-mac-limit-notif" || name == "pseudowire-mac-limit-max")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizon()
    :
    bd_pw_split_horizon_group(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup>())
{
    bd_pw_split_horizon_group->parent = this;

    yang_name = "bd-pw-split-horizon"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::~BdPwSplitHorizon()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::has_data() const
{
    if (is_presence_container) return true;
    return (bd_pw_split_horizon_group !=  nullptr && bd_pw_split_horizon_group->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::has_operation() const
{
    return is_set(yfilter)
	|| (bd_pw_split_horizon_group !=  nullptr && bd_pw_split_horizon_group->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pw-split-horizon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bd-pw-split-horizon-group")
    {
        if(bd_pw_split_horizon_group == nullptr)
        {
            bd_pw_split_horizon_group = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup>();
        }
        return bd_pw_split_horizon_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(bd_pw_split_horizon_group != nullptr)
    {
        children["bd-pw-split-horizon-group"] = bd_pw_split_horizon_group;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bd-pw-split-horizon-group")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::BdPwSplitHorizonGroup()
    :
    enable{YType::empty, "enable"}
{

    yang_name = "bd-pw-split-horizon-group"; yang_parent_name = "bd-pw-split-horizon"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::~BdPwSplitHorizonGroup()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pw-split-horizon-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "enable")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::BdPwMplsStaticLabels()
    :
    local_static_label{YType::uint32, "local-static-label"},
    remote_static_label{YType::uint32, "remote-static-label"}
{

    yang_name = "bd-pw-mpls-static-labels"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::~BdPwMplsStaticLabels()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::has_data() const
{
    if (is_presence_container) return true;
    return local_static_label.is_set
	|| remote_static_label.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_static_label.yfilter)
	|| ydk::is_set(remote_static_label.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pw-mpls-static-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_static_label.is_set || is_set(local_static_label.yfilter)) leaf_name_data.push_back(local_static_label.get_name_leafdata());
    if (remote_static_label.is_set || is_set(remote_static_label.yfilter)) leaf_name_data.push_back(remote_static_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-static-label")
    {
        local_static_label = value;
        local_static_label.value_namespace = name_space;
        local_static_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label = value;
        remote_static_label.value_namespace = name_space;
        remote_static_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-static-label")
    {
        local_static_label.yfilter = yfilter;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-static-label" || name == "remote-static-label")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowires()
    :
    bridge_domain_backup_pseudowire(this, {"neighbor", "pseudowire_id"})
{

    yang_name = "bridge-domain-backup-pseudowires"; yang_parent_name = "bd-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::~BridgeDomainBackupPseudowires()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bridge_domain_backup_pseudowire.len(); index++)
    {
        if(bridge_domain_backup_pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::has_operation() const
{
    for (std::size_t index=0; index<bridge_domain_backup_pseudowire.len(); index++)
    {
        if(bridge_domain_backup_pseudowire[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-backup-pseudowires";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bridge-domain-backup-pseudowire")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire>();
        c->parent = this;
        bridge_domain_backup_pseudowire.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : bridge_domain_backup_pseudowire.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain-backup-pseudowire")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::BridgeDomainBackupPseudowire()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    bridge_domain_backup_pw_class{YType::str, "bridge-domain-backup-pw-class"}
{

    yang_name = "bridge-domain-backup-pseudowire"; yang_parent_name = "bridge-domain-backup-pseudowires"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::~BridgeDomainBackupPseudowire()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::has_data() const
{
    if (is_presence_container) return true;
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| bridge_domain_backup_pw_class.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(bridge_domain_backup_pw_class.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-backup-pseudowire";
    ADD_KEY_TOKEN(neighbor, "neighbor");
    ADD_KEY_TOKEN(pseudowire_id, "pseudowire-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (bridge_domain_backup_pw_class.is_set || is_set(bridge_domain_backup_pw_class.yfilter)) leaf_name_data.push_back(bridge_domain_backup_pw_class.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-backup-pw-class")
    {
        bridge_domain_backup_pw_class = value;
        bridge_domain_backup_pw_class.value_namespace = name_space;
        bridge_domain_backup_pw_class.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-backup-pw-class")
    {
        bridge_domain_backup_pw_class.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor" || name == "pseudowire-id" || name == "bridge-domain-backup-pw-class")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfis()
    :
    vfi(this, {"name"})
{

    yang_name = "vfis"; yang_parent_name = "bridge-domain"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::~Vfis()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vfi.len(); index++)
    {
        if(vfi[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::has_operation() const
{
    for (std::size_t index=0; index<vfi.len(); index++)
    {
        if(vfi[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vfi")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi>();
        c->parent = this;
        vfi.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vfi.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vfi")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::Vfi()
    :
    name{YType::str, "name"},
    vfi_shutdown{YType::empty, "vfi-shutdown"},
    vpnid{YType::uint32, "vpnid"}
        ,
    multicast_p2mp(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp>())
    , vfi_pseudowires(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires>())
    , bgp_auto_discovery(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery>())
{
    multicast_p2mp->parent = this;
    vfi_pseudowires->parent = this;
    bgp_auto_discovery->parent = this;

    yang_name = "vfi"; yang_parent_name = "vfis"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::~Vfi()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| vfi_shutdown.is_set
	|| vpnid.is_set
	|| (multicast_p2mp !=  nullptr && multicast_p2mp->has_data())
	|| (vfi_pseudowires !=  nullptr && vfi_pseudowires->has_data())
	|| (bgp_auto_discovery !=  nullptr && bgp_auto_discovery->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(vfi_shutdown.yfilter)
	|| ydk::is_set(vpnid.yfilter)
	|| (multicast_p2mp !=  nullptr && multicast_p2mp->has_operation())
	|| (vfi_pseudowires !=  nullptr && vfi_pseudowires->has_operation())
	|| (bgp_auto_discovery !=  nullptr && bgp_auto_discovery->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vfi_shutdown.is_set || is_set(vfi_shutdown.yfilter)) leaf_name_data.push_back(vfi_shutdown.get_name_leafdata());
    if (vpnid.is_set || is_set(vpnid.yfilter)) leaf_name_data.push_back(vpnid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-p2mp")
    {
        if(multicast_p2mp == nullptr)
        {
            multicast_p2mp = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp>();
        }
        return multicast_p2mp;
    }

    if(child_yang_name == "vfi-pseudowires")
    {
        if(vfi_pseudowires == nullptr)
        {
            vfi_pseudowires = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires>();
        }
        return vfi_pseudowires;
    }

    if(child_yang_name == "bgp-auto-discovery")
    {
        if(bgp_auto_discovery == nullptr)
        {
            bgp_auto_discovery = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery>();
        }
        return bgp_auto_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(multicast_p2mp != nullptr)
    {
        children["multicast-p2mp"] = multicast_p2mp;
    }

    if(vfi_pseudowires != nullptr)
    {
        children["vfi-pseudowires"] = vfi_pseudowires;
    }

    if(bgp_auto_discovery != nullptr)
    {
        children["bgp-auto-discovery"] = bgp_auto_discovery;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vfi-shutdown")
    {
        vfi_shutdown = value;
        vfi_shutdown.value_namespace = name_space;
        vfi_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpnid")
    {
        vpnid = value;
        vpnid.value_namespace = name_space;
        vpnid.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "vfi-shutdown")
    {
        vfi_shutdown.yfilter = yfilter;
    }
    if(value_path == "vpnid")
    {
        vpnid.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-p2mp" || name == "vfi-pseudowires" || name == "bgp-auto-discovery" || name == "name" || name == "vfi-shutdown" || name == "vpnid")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::MulticastP2mp()
    :
    enable{YType::empty, "enable"}
        ,
    transports(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports>())
    , signalings(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings>())
{
    transports->parent = this;
    signalings->parent = this;

    yang_name = "multicast-p2mp"; yang_parent_name = "vfi"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::~MulticastP2mp()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (transports !=  nullptr && transports->has_data())
	|| (signalings !=  nullptr && signalings->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (transports !=  nullptr && transports->has_operation())
	|| (signalings !=  nullptr && signalings->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-p2mp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transports")
    {
        if(transports == nullptr)
        {
            transports = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports>();
        }
        return transports;
    }

    if(child_yang_name == "signalings")
    {
        if(signalings == nullptr)
        {
            signalings = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings>();
        }
        return signalings;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(transports != nullptr)
    {
        children["transports"] = transports;
    }

    if(signalings != nullptr)
    {
        children["signalings"] = signalings;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transports" || name == "signalings" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transports()
    :
    transport(this, {"transport_name"})
{

    yang_name = "transports"; yang_parent_name = "multicast-p2mp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::~Transports()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<transport.len(); index++)
    {
        if(transport[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::has_operation() const
{
    for (std::size_t index=0; index<transport.len(); index++)
    {
        if(transport[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "transport")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport>();
        c->parent = this;
        transport.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : transport.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport::Transport()
    :
    transport_name{YType::str, "transport-name"},
    attribute_set_name{YType::str, "attribute-set-name"}
{

    yang_name = "transport"; yang_parent_name = "transports"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport::~Transport()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport::has_data() const
{
    if (is_presence_container) return true;
    return transport_name.is_set
	|| attribute_set_name.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transport_name.yfilter)
	|| ydk::is_set(attribute_set_name.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    ADD_KEY_TOKEN(transport_name, "transport-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport_name.is_set || is_set(transport_name.yfilter)) leaf_name_data.push_back(transport_name.get_name_leafdata());
    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transport-name")
    {
        transport_name = value;
        transport_name.value_namespace = name_space;
        transport_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transport-name")
    {
        transport_name.yfilter = yfilter;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Transports::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transport-name" || name == "attribute-set-name")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signalings()
    :
    signaling(this, {"signaling_name"})
{

    yang_name = "signalings"; yang_parent_name = "multicast-p2mp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::~Signalings()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<signaling.len(); index++)
    {
        if(signaling[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::has_operation() const
{
    for (std::size_t index=0; index<signaling.len(); index++)
    {
        if(signaling[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signaling")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling>();
        c->parent = this;
        signaling.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : signaling.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signaling")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling::Signaling()
    :
    signaling_name{YType::str, "signaling-name"}
{

    yang_name = "signaling"; yang_parent_name = "signalings"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling::~Signaling()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling::has_data() const
{
    if (is_presence_container) return true;
    return signaling_name.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(signaling_name.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaling";
    ADD_KEY_TOKEN(signaling_name, "signaling-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signaling_name.is_set || is_set(signaling_name.yfilter)) leaf_name_data.push_back(signaling_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "signaling-name")
    {
        signaling_name = value;
        signaling_name.value_namespace = name_space;
        signaling_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "signaling-name")
    {
        signaling_name.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2mp::Signalings::Signaling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signaling-name")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowires()
    :
    vfi_pseudowire(this, {"neighbor", "pseudowire_id"})
{

    yang_name = "vfi-pseudowires"; yang_parent_name = "vfi"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::~VfiPseudowires()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vfi_pseudowire.len(); index++)
    {
        if(vfi_pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::has_operation() const
{
    for (std::size_t index=0; index<vfi_pseudowire.len(); index++)
    {
        if(vfi_pseudowire[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi-pseudowires";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vfi-pseudowire")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire>();
        c->parent = this;
        vfi_pseudowire.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : vfi_pseudowire.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vfi-pseudowire")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPseudowire()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    vfi_pw_class{YType::str, "vfi-pw-class"},
    vfi_pw_igmp_snoop{YType::str, "vfi-pw-igmp-snoop"},
    vfi_pw_mld_snoop{YType::str, "vfi-pw-mld-snoop"}
        ,
    vfi_pw_dhcp_snoop(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop>())
    , vfi_pw_mpls_static_labels(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels>())
    , pseudowire_static_mac_addresses(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses>())
{
    vfi_pw_dhcp_snoop->parent = this;
    vfi_pw_mpls_static_labels->parent = this;
    pseudowire_static_mac_addresses->parent = this;

    yang_name = "vfi-pseudowire"; yang_parent_name = "vfi-pseudowires"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::~VfiPseudowire()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::has_data() const
{
    if (is_presence_container) return true;
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| vfi_pw_class.is_set
	|| vfi_pw_igmp_snoop.is_set
	|| vfi_pw_mld_snoop.is_set
	|| (vfi_pw_dhcp_snoop !=  nullptr && vfi_pw_dhcp_snoop->has_data())
	|| (vfi_pw_mpls_static_labels !=  nullptr && vfi_pw_mpls_static_labels->has_data())
	|| (pseudowire_static_mac_addresses !=  nullptr && pseudowire_static_mac_addresses->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(pseudowire_id.yfilter)
	|| ydk::is_set(vfi_pw_class.yfilter)
	|| ydk::is_set(vfi_pw_igmp_snoop.yfilter)
	|| ydk::is_set(vfi_pw_mld_snoop.yfilter)
	|| (vfi_pw_dhcp_snoop !=  nullptr && vfi_pw_dhcp_snoop->has_operation())
	|| (vfi_pw_mpls_static_labels !=  nullptr && vfi_pw_mpls_static_labels->has_operation())
	|| (pseudowire_static_mac_addresses !=  nullptr && pseudowire_static_mac_addresses->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi-pseudowire";
    ADD_KEY_TOKEN(neighbor, "neighbor");
    ADD_KEY_TOKEN(pseudowire_id, "pseudowire-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.yfilter)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (vfi_pw_class.is_set || is_set(vfi_pw_class.yfilter)) leaf_name_data.push_back(vfi_pw_class.get_name_leafdata());
    if (vfi_pw_igmp_snoop.is_set || is_set(vfi_pw_igmp_snoop.yfilter)) leaf_name_data.push_back(vfi_pw_igmp_snoop.get_name_leafdata());
    if (vfi_pw_mld_snoop.is_set || is_set(vfi_pw_mld_snoop.yfilter)) leaf_name_data.push_back(vfi_pw_mld_snoop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vfi-pw-dhcp-snoop")
    {
        if(vfi_pw_dhcp_snoop == nullptr)
        {
            vfi_pw_dhcp_snoop = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop>();
        }
        return vfi_pw_dhcp_snoop;
    }

    if(child_yang_name == "vfi-pw-mpls-static-labels")
    {
        if(vfi_pw_mpls_static_labels == nullptr)
        {
            vfi_pw_mpls_static_labels = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels>();
        }
        return vfi_pw_mpls_static_labels;
    }

    if(child_yang_name == "pseudowire-static-mac-addresses")
    {
        if(pseudowire_static_mac_addresses == nullptr)
        {
            pseudowire_static_mac_addresses = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses>();
        }
        return pseudowire_static_mac_addresses;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vfi_pw_dhcp_snoop != nullptr)
    {
        children["vfi-pw-dhcp-snoop"] = vfi_pw_dhcp_snoop;
    }

    if(vfi_pw_mpls_static_labels != nullptr)
    {
        children["vfi-pw-mpls-static-labels"] = vfi_pw_mpls_static_labels;
    }

    if(pseudowire_static_mac_addresses != nullptr)
    {
        children["pseudowire-static-mac-addresses"] = pseudowire_static_mac_addresses;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
        pseudowire_id.value_namespace = name_space;
        pseudowire_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vfi-pw-class")
    {
        vfi_pw_class = value;
        vfi_pw_class.value_namespace = name_space;
        vfi_pw_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vfi-pw-igmp-snoop")
    {
        vfi_pw_igmp_snoop = value;
        vfi_pw_igmp_snoop.value_namespace = name_space;
        vfi_pw_igmp_snoop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vfi-pw-mld-snoop")
    {
        vfi_pw_mld_snoop = value;
        vfi_pw_mld_snoop.value_namespace = name_space;
        vfi_pw_mld_snoop.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id.yfilter = yfilter;
    }
    if(value_path == "vfi-pw-class")
    {
        vfi_pw_class.yfilter = yfilter;
    }
    if(value_path == "vfi-pw-igmp-snoop")
    {
        vfi_pw_igmp_snoop.yfilter = yfilter;
    }
    if(value_path == "vfi-pw-mld-snoop")
    {
        vfi_pw_mld_snoop.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vfi-pw-dhcp-snoop" || name == "vfi-pw-mpls-static-labels" || name == "pseudowire-static-mac-addresses" || name == "neighbor" || name == "pseudowire-id" || name == "vfi-pw-class" || name == "vfi-pw-igmp-snoop" || name == "vfi-pw-mld-snoop")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::VfiPwDhcpSnoop()
    :
    profile_id{YType::enumeration, "profile-id"},
    dhcp_snooping_id{YType::str, "dhcp-snooping-id"}
{

    yang_name = "vfi-pw-dhcp-snoop"; yang_parent_name = "vfi-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::~VfiPwDhcpSnoop()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::has_data() const
{
    if (is_presence_container) return true;
    return profile_id.is_set
	|| dhcp_snooping_id.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(profile_id.yfilter)
	|| ydk::is_set(dhcp_snooping_id.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi-pw-dhcp-snoop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (profile_id.is_set || is_set(profile_id.yfilter)) leaf_name_data.push_back(profile_id.get_name_leafdata());
    if (dhcp_snooping_id.is_set || is_set(dhcp_snooping_id.yfilter)) leaf_name_data.push_back(dhcp_snooping_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "profile-id")
    {
        profile_id = value;
        profile_id.value_namespace = name_space;
        profile_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id = value;
        dhcp_snooping_id.value_namespace = name_space;
        dhcp_snooping_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "profile-id")
    {
        profile_id.yfilter = yfilter;
    }
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "profile-id" || name == "dhcp-snooping-id")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::VfiPwMplsStaticLabels()
    :
    local_static_label{YType::uint32, "local-static-label"},
    remote_static_label{YType::uint32, "remote-static-label"}
{

    yang_name = "vfi-pw-mpls-static-labels"; yang_parent_name = "vfi-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::~VfiPwMplsStaticLabels()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::has_data() const
{
    if (is_presence_container) return true;
    return local_static_label.is_set
	|| remote_static_label.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_static_label.yfilter)
	|| ydk::is_set(remote_static_label.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi-pw-mpls-static-labels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_static_label.is_set || is_set(local_static_label.yfilter)) leaf_name_data.push_back(local_static_label.get_name_leafdata());
    if (remote_static_label.is_set || is_set(remote_static_label.yfilter)) leaf_name_data.push_back(remote_static_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-static-label")
    {
        local_static_label = value;
        local_static_label.value_namespace = name_space;
        local_static_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label = value;
        remote_static_label.value_namespace = name_space;
        remote_static_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-static-label")
    {
        local_static_label.yfilter = yfilter;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-static-label" || name == "remote-static-label")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddresses()
    :
    pseudowire_static_mac_address(this, {"address"})
{

    yang_name = "pseudowire-static-mac-addresses"; yang_parent_name = "vfi-pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::~PseudowireStaticMacAddresses()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<pseudowire_static_mac_address.len(); index++)
    {
        if(pseudowire_static_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::has_operation() const
{
    for (std::size_t index=0; index<pseudowire_static_mac_address.len(); index++)
    {
        if(pseudowire_static_mac_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-static-mac-addresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pseudowire-static-mac-address")
    {
        auto c = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress>();
        c->parent = this;
        pseudowire_static_mac_address.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : pseudowire_static_mac_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pseudowire-static-mac-address")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::PseudowireStaticMacAddress()
    :
    address{YType::str, "address"}
{

    yang_name = "pseudowire-static-mac-address"; yang_parent_name = "pseudowire-static-mac-addresses"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::~PseudowireStaticMacAddress()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-static-mac-address";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpAutoDiscovery()
    :
    table_policy{YType::str, "table-policy"},
    ad_control_word{YType::empty, "ad-control-word"},
    enable{YType::empty, "enable"}
        ,
    ldp_signaling_protocol(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol>())
    , bgp_route_policy(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy>())
    , route_distinguisher(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher>())
    , bgp_signaling_protocol(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol>())
    , route_targets(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets>())
{
    ldp_signaling_protocol->parent = this;
    bgp_route_policy->parent = this;
    route_distinguisher->parent = this;
    bgp_signaling_protocol->parent = this;
    route_targets->parent = this;

    yang_name = "bgp-auto-discovery"; yang_parent_name = "vfi"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::~BgpAutoDiscovery()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::has_data() const
{
    if (is_presence_container) return true;
    return table_policy.is_set
	|| ad_control_word.is_set
	|| enable.is_set
	|| (ldp_signaling_protocol !=  nullptr && ldp_signaling_protocol->has_data())
	|| (bgp_route_policy !=  nullptr && bgp_route_policy->has_data())
	|| (route_distinguisher !=  nullptr && route_distinguisher->has_data())
	|| (bgp_signaling_protocol !=  nullptr && bgp_signaling_protocol->has_data())
	|| (route_targets !=  nullptr && route_targets->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(table_policy.yfilter)
	|| ydk::is_set(ad_control_word.yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (ldp_signaling_protocol !=  nullptr && ldp_signaling_protocol->has_operation())
	|| (bgp_route_policy !=  nullptr && bgp_route_policy->has_operation())
	|| (route_distinguisher !=  nullptr && route_distinguisher->has_operation())
	|| (bgp_signaling_protocol !=  nullptr && bgp_signaling_protocol->has_operation())
	|| (route_targets !=  nullptr && route_targets->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-auto-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (table_policy.is_set || is_set(table_policy.yfilter)) leaf_name_data.push_back(table_policy.get_name_leafdata());
    if (ad_control_word.is_set || is_set(ad_control_word.yfilter)) leaf_name_data.push_back(ad_control_word.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ldp-signaling-protocol")
    {
        if(ldp_signaling_protocol == nullptr)
        {
            ldp_signaling_protocol = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol>();
        }
        return ldp_signaling_protocol;
    }

    if(child_yang_name == "bgp-route-policy")
    {
        if(bgp_route_policy == nullptr)
        {
            bgp_route_policy = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy>();
        }
        return bgp_route_policy;
    }

    if(child_yang_name == "route-distinguisher")
    {
        if(route_distinguisher == nullptr)
        {
            route_distinguisher = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher>();
        }
        return route_distinguisher;
    }

    if(child_yang_name == "bgp-signaling-protocol")
    {
        if(bgp_signaling_protocol == nullptr)
        {
            bgp_signaling_protocol = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol>();
        }
        return bgp_signaling_protocol;
    }

    if(child_yang_name == "route-targets")
    {
        if(route_targets == nullptr)
        {
            route_targets = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets>();
        }
        return route_targets;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ldp_signaling_protocol != nullptr)
    {
        children["ldp-signaling-protocol"] = ldp_signaling_protocol;
    }

    if(bgp_route_policy != nullptr)
    {
        children["bgp-route-policy"] = bgp_route_policy;
    }

    if(route_distinguisher != nullptr)
    {
        children["route-distinguisher"] = route_distinguisher;
    }

    if(bgp_signaling_protocol != nullptr)
    {
        children["bgp-signaling-protocol"] = bgp_signaling_protocol;
    }

    if(route_targets != nullptr)
    {
        children["route-targets"] = route_targets;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "table-policy")
    {
        table_policy = value;
        table_policy.value_namespace = name_space;
        table_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ad-control-word")
    {
        ad_control_word = value;
        ad_control_word.value_namespace = name_space;
        ad_control_word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "table-policy")
    {
        table_policy.yfilter = yfilter;
    }
    if(value_path == "ad-control-word")
    {
        ad_control_word.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ldp-signaling-protocol" || name == "bgp-route-policy" || name == "route-distinguisher" || name == "bgp-signaling-protocol" || name == "route-targets" || name == "table-policy" || name == "ad-control-word" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::LdpSignalingProtocol()
    :
    enable{YType::empty, "enable"}
        ,
    vpls_id(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId>())
    , flow_label_load_balance(std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance>())
{
    vpls_id->parent = this;
    flow_label_load_balance->parent = this;

    yang_name = "ldp-signaling-protocol"; yang_parent_name = "bgp-auto-discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::~LdpSignalingProtocol()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::has_data() const
{
    if (is_presence_container) return true;
    return enable.is_set
	|| (vpls_id !=  nullptr && vpls_id->has_data())
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_data());
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (vpls_id !=  nullptr && vpls_id->has_operation())
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_operation());
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-signaling-protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vpls-id")
    {
        if(vpls_id == nullptr)
        {
            vpls_id = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId>();
        }
        return vpls_id;
    }

    if(child_yang_name == "flow-label-load-balance")
    {
        if(flow_label_load_balance == nullptr)
        {
            flow_label_load_balance = std::make_shared<L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance>();
        }
        return flow_label_load_balance;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(vpls_id != nullptr)
    {
        children["vpls-id"] = vpls_id;
    }

    if(flow_label_load_balance != nullptr)
    {
        children["flow-label-load-balance"] = flow_label_load_balance;
    }

    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpls-id" || name == "flow-label-load-balance" || name == "enable")
        return true;
    return false;
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::VplsId()
    :
    type{YType::enumeration, "type"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"}
{

    yang_name = "vpls-id"; yang_parent_name = "ldp-signaling-protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::~VplsId()
{
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| as.is_set
	|| as_index.is_set
	|| address.is_set
	|| address_index.is_set;
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(as_index.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(address_index.yfilter);
}

std::string L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpls-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.yfilter)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.yfilter)) leaf_name_data.push_back(address_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-index")
    {
        as_index = value;
        as_index.value_namespace = name_space;
        as_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-index")
    {
        address_index = value;
        address_index.value_namespace = name_space;
        address_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "as-index")
    {
        as_index.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "address-index")
    {
        address_index.yfilter = yfilter;
    }
}

bool L2vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::VplsId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "as" || name == "as-index" || name == "address" || name == "address-index")
        return true;
    return false;
}

const Enum::YLeaf FlowLabelTlvCode::Y_17 {4, "17"};
const Enum::YLeaf FlowLabelTlvCode::disable {8, "disable"};

const Enum::YLeaf MacAging::absolute {1, "absolute"};
const Enum::YLeaf MacAging::inactivity {2, "inactivity"};

const Enum::YLeaf MacLimitAction::none {0, "none"};
const Enum::YLeaf MacLimitAction::flood {1, "flood"};
const Enum::YLeaf MacLimitAction::no_flood {2, "no-flood"};
const Enum::YLeaf MacLimitAction::shutdown {3, "shutdown"};

const Enum::YLeaf BdmacLearn::disable_learning {2, "disable-learning"};

const Enum::YLeaf Interworking::ethernet {1, "ethernet"};
const Enum::YLeaf Interworking::ipv4 {3, "ipv4"};

const Enum::YLeaf PwSwitchingPointTlv::hide {2, "hide"};

const Enum::YLeaf L2tpv3Sequencing::off {0, "off"};
const Enum::YLeaf L2tpv3Sequencing::both {4, "both"};

const Enum::YLeaf InterfaceProfile::snoop {1, "snoop"};
const Enum::YLeaf InterfaceProfile::dhcp_protocol {2, "dhcp-protocol"};

const Enum::YLeaf BgpRouteTargetRole::both {0, "both"};
const Enum::YLeaf BgpRouteTargetRole::import {1, "import"};
const Enum::YLeaf BgpRouteTargetRole::export_ {2, "export"};

const Enum::YLeaf ErpPort::none {1, "none"};
const Enum::YLeaf ErpPort::virtual_ {2, "virtual"};
const Enum::YLeaf ErpPort::interface {3, "interface"};

const Enum::YLeaf BgpRouteTarget::no_stitching {0, "no-stitching"};
const Enum::YLeaf BgpRouteTarget::stitching {1, "stitching"};

const Enum::YLeaf FlowLabelLoadBalance::off {0, "off"};
const Enum::YLeaf FlowLabelLoadBalance::receive {1, "receive"};
const Enum::YLeaf FlowLabelLoadBalance::transmit {2, "transmit"};
const Enum::YLeaf FlowLabelLoadBalance::both {3, "both"};

const Enum::YLeaf L2vpnVerification::enable {1, "enable"};
const Enum::YLeaf L2vpnVerification::disable {2, "disable"};

const Enum::YLeaf MacLearn::default_learning {0, "default-learning"};
const Enum::YLeaf MacLearn::enable_learning {1, "enable-learning"};
const Enum::YLeaf MacLearn::disable_learning {2, "disable-learning"};

const Enum::YLeaf Erpaps::interface {1, "interface"};
const Enum::YLeaf Erpaps::bridge_domain {2, "bridge-domain"};
const Enum::YLeaf Erpaps::xconnect {3, "xconnect"};
const Enum::YLeaf Erpaps::none {4, "none"};

const Enum::YLeaf VccvVerification::none {0, "none"};
const Enum::YLeaf VccvVerification::lsp_ping {2, "lsp-ping"};

const Enum::YLeaf TransportMode::ethernet {1, "ethernet"};
const Enum::YLeaf TransportMode::vlan {2, "vlan"};
const Enum::YLeaf TransportMode::vlan_passthrough {3, "vlan-passthrough"};

const Enum::YLeaf BackupDisable::never {0, "never"};
const Enum::YLeaf BackupDisable::delay {1, "delay"};

const Enum::YLeaf LoadBalance::source_dest_mac {1, "source-dest-mac"};
const Enum::YLeaf LoadBalance::source_dest_ip {2, "source-dest-ip"};
const Enum::YLeaf LoadBalance::pseudowire_label {4, "pseudowire-label"};

const Enum::YLeaf ErpPort1::port0 {0, "port0"};
const Enum::YLeaf ErpPort1::port1 {1, "port1"};

const Enum::YLeaf InterfaceTrafficFlood::traffic_flooding {0, "traffic-flooding"};
const Enum::YLeaf InterfaceTrafficFlood::enable_flooding {1, "enable-flooding"};
const Enum::YLeaf InterfaceTrafficFlood::disable_flooding {2, "disable-flooding"};

const Enum::YLeaf MacFlushMode::mvrp {1, "mvrp"};

const Enum::YLeaf L2tpCookieSize::zero {0, "zero"};
const Enum::YLeaf L2tpCookieSize::four {4, "four"};
const Enum::YLeaf L2tpCookieSize::eight {8, "eight"};

const Enum::YLeaf StormControl::unicast {1, "unicast"};
const Enum::YLeaf StormControl::multicast {2, "multicast"};
const Enum::YLeaf StormControl::broadcast {4, "broadcast"};

const Enum::YLeaf BgpRouteDistinguisher::auto_ {1, "auto"};
const Enum::YLeaf BgpRouteDistinguisher::two_byte_as {2, "two-byte-as"};
const Enum::YLeaf BgpRouteDistinguisher::four_byte_as {3, "four-byte-as"};
const Enum::YLeaf BgpRouteDistinguisher::ipv4_address {4, "ipv4-address"};

const Enum::YLeaf MacNotification::no_notif {0, "no-notif"};
const Enum::YLeaf MacNotification::syslog {1, "syslog"};
const Enum::YLeaf MacNotification::trap {2, "trap"};
const Enum::YLeaf MacNotification::syslog_snmp {3, "syslog-snmp"};

const Enum::YLeaf BgpRouteTargetFormat::none {0, "none"};
const Enum::YLeaf BgpRouteTargetFormat::two_byte_as {1, "two-byte-as"};
const Enum::YLeaf BgpRouteTargetFormat::four_byte_as {2, "four-byte-as"};
const Enum::YLeaf BgpRouteTargetFormat::ipv4_address {3, "ipv4-address"};
const Enum::YLeaf BgpRouteTargetFormat::es_import {1538, "es-import"};

const Enum::YLeaf MplsSignalingProtocol::none {1, "none"};
const Enum::YLeaf MplsSignalingProtocol::ldp {4, "ldp"};

const Enum::YLeaf EvpnSide::evpn_side_regular {1, "evpn-side-regular"};
const Enum::YLeaf EvpnSide::evpn_side_stitching {2, "evpn-side-stitching"};

const Enum::YLeaf ControlWord::enable {1, "enable"};
const Enum::YLeaf ControlWord::disable {2, "disable"};

const Enum::YLeaf PreferredPath::te_tunnel {2, "te-tunnel"};
const Enum::YLeaf PreferredPath::ip_tunnel {3, "ip-tunnel"};
const Enum::YLeaf PreferredPath::tp_tunnel {4, "tp-tunnel"};
const Enum::YLeaf PreferredPath::sr_te_policy {5, "sr-te-policy"};

const Enum::YLeaf EvpnEncapsulation::evpn_encapsulationvxlan {8, "evpn-encapsulationvxlan"};
const Enum::YLeaf EvpnEncapsulation::evpn_encapsulation_mpls {10, "evpn-encapsulation-mpls"};

const Enum::YLeaf MplsSequencing::off {0, "off"};
const Enum::YLeaf MplsSequencing::transmit {1, "transmit"};
const Enum::YLeaf MplsSequencing::receive {2, "receive"};
const Enum::YLeaf MplsSequencing::both {4, "both"};

const Enum::YLeaf EthernetSegmentLoadBalance::single_active {1, "single-active"};

const Enum::YLeaf L2tpSignalingProtocol::none {1, "none"};
const Enum::YLeaf L2tpSignalingProtocol::l2tpv3 {2, "l2tpv3"};

const Enum::YLeaf EthernetSegmentIdentifier::type0 {0, "type0"};
const Enum::YLeaf EthernetSegmentIdentifier::legacy {128, "legacy"};
const Enum::YLeaf EthernetSegmentIdentifier::override {129, "override"};

const Enum::YLeaf BridgeDomainTransportMode::vlan_passthrough {3, "vlan-passthrough"};

const Enum::YLeaf LdpVplsId::two_byte_as {10, "two-byte-as"};
const Enum::YLeaf LdpVplsId::ipv4_address {266, "ipv4-address"};

const Enum::YLeaf L2Encapsulation::vlan {4, "vlan"};
const Enum::YLeaf L2Encapsulation::ethernet {5, "ethernet"};

const Enum::YLeaf EthernetSegmentServiceCarving::hrw {2, "hrw"};

const Enum::YLeaf L2vpnLogging::enable {1, "enable"};
const Enum::YLeaf L2vpnLogging::disable {2, "disable"};

const Enum::YLeaf MacWithdrawBehavior::legacy {1, "legacy"};
const Enum::YLeaf MacWithdrawBehavior::optimized {2, "optimized"};

const Enum::YLeaf RplRole::owner {1, "owner"};
const Enum::YLeaf RplRole::neighbor {2, "neighbor"};
const Enum::YLeaf RplRole::next_neighbor {3, "next-neighbor"};

const Enum::YLeaf TypeOfServiceMode::none {0, "none"};
const Enum::YLeaf TypeOfServiceMode::reflect {1, "reflect"};

const Enum::YLeaf PortDownFlush::port_down_flush {0, "port-down-flush"};
const Enum::YLeaf PortDownFlush::enable_port_down_flush {1, "enable-port-down-flush"};
const Enum::YLeaf PortDownFlush::disable_port_down_flush {2, "disable-port-down-flush"};

const Enum::YLeaf L2vpnCapabilityMode::high_mode {1, "high-mode"};
const Enum::YLeaf L2vpnCapabilityMode::single_mode {2, "single-mode"};

const Enum::YLeaf MacSecureAction::restrict {1, "restrict"};
const Enum::YLeaf MacSecureAction::none {2, "none"};
const Enum::YLeaf MacSecureAction::shutdown {3, "shutdown"};


}
}

