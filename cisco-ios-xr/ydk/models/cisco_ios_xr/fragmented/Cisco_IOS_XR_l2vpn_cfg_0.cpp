
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_cfg_0.hpp"
#include "Cisco_IOS_XR_l2vpn_cfg_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2vpn_cfg {

L2Vpn::L2Vpn()
    :
    capability{YType::enumeration, "capability"},
    enable{YType::empty, "enable"},
    l2vpn_router_id{YType::str, "l2vpn-router-id"},
    load_balance{YType::enumeration, "load-balance"},
    mspw_description{YType::str, "mspw-description"},
    mtu_mismatch_ignore{YType::empty, "mtu-mismatch-ignore"},
    nsr{YType::empty, "nsr"},
    pw_grouping{YType::empty, "pw-grouping"},
    pw_status_disable{YType::empty, "pw-status-disable"},
    pwoam_refresh{YType::uint32, "pwoam-refresh"},
    tcn_propagation{YType::empty, "tcn-propagation"}
    	,
    auto_discovery(std::make_shared<L2Vpn::AutoDiscovery>())
	,database(std::make_shared<L2Vpn::Database>())
	,neighbor(std::make_shared<L2Vpn::Neighbor>())
	,pbb(std::make_shared<L2Vpn::Pbb>())
	,pw_routing(std::make_shared<L2Vpn::PwRouting>())
	,snmp(std::make_shared<L2Vpn::Snmp>())
	,utility(std::make_shared<L2Vpn::Utility>())
{
    auto_discovery->parent = this;
    children["auto-discovery"] = auto_discovery;

    database->parent = this;
    children["database"] = database;

    neighbor->parent = this;
    children["neighbor"] = neighbor;

    pbb->parent = this;
    children["pbb"] = pbb;

    pw_routing->parent = this;
    children["pw-routing"] = pw_routing;

    snmp->parent = this;
    children["snmp"] = snmp;

    utility->parent = this;
    children["utility"] = utility;

    yang_name = "l2vpn"; yang_parent_name = "Cisco-IOS-XR-l2vpn-cfg";
}

L2Vpn::~L2Vpn()
{
}

bool L2Vpn::has_data() const
{
    return capability.is_set
	|| enable.is_set
	|| l2vpn_router_id.is_set
	|| load_balance.is_set
	|| mspw_description.is_set
	|| mtu_mismatch_ignore.is_set
	|| nsr.is_set
	|| pw_grouping.is_set
	|| pw_status_disable.is_set
	|| pwoam_refresh.is_set
	|| tcn_propagation.is_set
	|| (auto_discovery !=  nullptr && auto_discovery->has_data())
	|| (database !=  nullptr && database->has_data())
	|| (neighbor !=  nullptr && neighbor->has_data())
	|| (pbb !=  nullptr && pbb->has_data())
	|| (pw_routing !=  nullptr && pw_routing->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (utility !=  nullptr && utility->has_data());
}

bool L2Vpn::has_operation() const
{
    return is_set(operation)
	|| is_set(capability.operation)
	|| is_set(enable.operation)
	|| is_set(l2vpn_router_id.operation)
	|| is_set(load_balance.operation)
	|| is_set(mspw_description.operation)
	|| is_set(mtu_mismatch_ignore.operation)
	|| is_set(nsr.operation)
	|| is_set(pw_grouping.operation)
	|| is_set(pw_status_disable.operation)
	|| is_set(pwoam_refresh.operation)
	|| is_set(tcn_propagation.operation)
	|| (auto_discovery !=  nullptr && auto_discovery->has_operation())
	|| (database !=  nullptr && database->has_operation())
	|| (neighbor !=  nullptr && neighbor->has_operation())
	|| (pbb !=  nullptr && pbb->has_operation())
	|| (pw_routing !=  nullptr && pw_routing->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (utility !=  nullptr && utility->has_operation());
}

std::string L2Vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn";

    return path_buffer.str();

}

EntityPath L2Vpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability.is_set || is_set(capability.operation)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (l2vpn_router_id.is_set || is_set(l2vpn_router_id.operation)) leaf_name_data.push_back(l2vpn_router_id.get_name_leafdata());
    if (load_balance.is_set || is_set(load_balance.operation)) leaf_name_data.push_back(load_balance.get_name_leafdata());
    if (mspw_description.is_set || is_set(mspw_description.operation)) leaf_name_data.push_back(mspw_description.get_name_leafdata());
    if (mtu_mismatch_ignore.is_set || is_set(mtu_mismatch_ignore.operation)) leaf_name_data.push_back(mtu_mismatch_ignore.get_name_leafdata());
    if (nsr.is_set || is_set(nsr.operation)) leaf_name_data.push_back(nsr.get_name_leafdata());
    if (pw_grouping.is_set || is_set(pw_grouping.operation)) leaf_name_data.push_back(pw_grouping.get_name_leafdata());
    if (pw_status_disable.is_set || is_set(pw_status_disable.operation)) leaf_name_data.push_back(pw_status_disable.get_name_leafdata());
    if (pwoam_refresh.is_set || is_set(pwoam_refresh.operation)) leaf_name_data.push_back(pwoam_refresh.get_name_leafdata());
    if (tcn_propagation.is_set || is_set(tcn_propagation.operation)) leaf_name_data.push_back(tcn_propagation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto-discovery")
    {
        if(auto_discovery != nullptr)
        {
            children["auto-discovery"] = auto_discovery;
        }
        else
        {
            auto_discovery = std::make_shared<L2Vpn::AutoDiscovery>();
            auto_discovery->parent = this;
            children["auto-discovery"] = auto_discovery;
        }
        return children.at("auto-discovery");
    }

    if(child_yang_name == "database")
    {
        if(database != nullptr)
        {
            children["database"] = database;
        }
        else
        {
            database = std::make_shared<L2Vpn::Database>();
            database->parent = this;
            children["database"] = database;
        }
        return children.at("database");
    }

    if(child_yang_name == "neighbor")
    {
        if(neighbor != nullptr)
        {
            children["neighbor"] = neighbor;
        }
        else
        {
            neighbor = std::make_shared<L2Vpn::Neighbor>();
            neighbor->parent = this;
            children["neighbor"] = neighbor;
        }
        return children.at("neighbor");
    }

    if(child_yang_name == "pbb")
    {
        if(pbb != nullptr)
        {
            children["pbb"] = pbb;
        }
        else
        {
            pbb = std::make_shared<L2Vpn::Pbb>();
            pbb->parent = this;
            children["pbb"] = pbb;
        }
        return children.at("pbb");
    }

    if(child_yang_name == "pw-routing")
    {
        if(pw_routing != nullptr)
        {
            children["pw-routing"] = pw_routing;
        }
        else
        {
            pw_routing = std::make_shared<L2Vpn::PwRouting>();
            pw_routing->parent = this;
            children["pw-routing"] = pw_routing;
        }
        return children.at("pw-routing");
    }

    if(child_yang_name == "snmp")
    {
        if(snmp != nullptr)
        {
            children["snmp"] = snmp;
        }
        else
        {
            snmp = std::make_shared<L2Vpn::Snmp>();
            snmp->parent = this;
            children["snmp"] = snmp;
        }
        return children.at("snmp");
    }

    if(child_yang_name == "utility")
    {
        if(utility != nullptr)
        {
            children["utility"] = utility;
        }
        else
        {
            utility = std::make_shared<L2Vpn::Utility>();
            utility->parent = this;
            children["utility"] = utility;
        }
        return children.at("utility");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::get_children()
{
    if(children.find("auto-discovery") == children.end())
    {
        if(auto_discovery != nullptr)
        {
            children["auto-discovery"] = auto_discovery;
        }
    }

    if(children.find("database") == children.end())
    {
        if(database != nullptr)
        {
            children["database"] = database;
        }
    }

    if(children.find("neighbor") == children.end())
    {
        if(neighbor != nullptr)
        {
            children["neighbor"] = neighbor;
        }
    }

    if(children.find("pbb") == children.end())
    {
        if(pbb != nullptr)
        {
            children["pbb"] = pbb;
        }
    }

    if(children.find("pw-routing") == children.end())
    {
        if(pw_routing != nullptr)
        {
            children["pw-routing"] = pw_routing;
        }
    }

    if(children.find("snmp") == children.end())
    {
        if(snmp != nullptr)
        {
            children["snmp"] = snmp;
        }
    }

    if(children.find("utility") == children.end())
    {
        if(utility != nullptr)
        {
            children["utility"] = utility;
        }
    }

    return children;
}

void L2Vpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capability")
    {
        capability = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "l2vpn-router-id")
    {
        l2vpn_router_id = value;
    }
    if(value_path == "load-balance")
    {
        load_balance = value;
    }
    if(value_path == "mspw-description")
    {
        mspw_description = value;
    }
    if(value_path == "mtu-mismatch-ignore")
    {
        mtu_mismatch_ignore = value;
    }
    if(value_path == "nsr")
    {
        nsr = value;
    }
    if(value_path == "pw-grouping")
    {
        pw_grouping = value;
    }
    if(value_path == "pw-status-disable")
    {
        pw_status_disable = value;
    }
    if(value_path == "pwoam-refresh")
    {
        pwoam_refresh = value;
    }
    if(value_path == "tcn-propagation")
    {
        tcn_propagation = value;
    }
}

std::shared_ptr<Entity> L2Vpn::clone_ptr() const
{
    return std::make_shared<L2Vpn>();
}

std::string L2Vpn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string L2Vpn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function L2Vpn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

L2Vpn::PwRouting::PwRouting()
    :
    pw_routing_global_id{YType::uint32, "pw-routing-global-id"}
    	,
    pw_routing_bgp(std::make_shared<L2Vpn::PwRouting::PwRoutingBgp>())
{
    pw_routing_bgp->parent = this;
    children["pw-routing-bgp"] = pw_routing_bgp;

    yang_name = "pw-routing"; yang_parent_name = "l2vpn";
}

L2Vpn::PwRouting::~PwRouting()
{
}

bool L2Vpn::PwRouting::has_data() const
{
    return pw_routing_global_id.is_set
	|| (pw_routing_bgp !=  nullptr && pw_routing_bgp->has_data());
}

bool L2Vpn::PwRouting::has_operation() const
{
    return is_set(operation)
	|| is_set(pw_routing_global_id.operation)
	|| (pw_routing_bgp !=  nullptr && pw_routing_bgp->has_operation());
}

std::string L2Vpn::PwRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-routing";

    return path_buffer.str();

}

EntityPath L2Vpn::PwRouting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_routing_global_id.is_set || is_set(pw_routing_global_id.operation)) leaf_name_data.push_back(pw_routing_global_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::PwRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pw-routing-bgp")
    {
        if(pw_routing_bgp != nullptr)
        {
            children["pw-routing-bgp"] = pw_routing_bgp;
        }
        else
        {
            pw_routing_bgp = std::make_shared<L2Vpn::PwRouting::PwRoutingBgp>();
            pw_routing_bgp->parent = this;
            children["pw-routing-bgp"] = pw_routing_bgp;
        }
        return children.at("pw-routing-bgp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::PwRouting::get_children()
{
    if(children.find("pw-routing-bgp") == children.end())
    {
        if(pw_routing_bgp != nullptr)
        {
            children["pw-routing-bgp"] = pw_routing_bgp;
        }
    }

    return children;
}

void L2Vpn::PwRouting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pw-routing-global-id")
    {
        pw_routing_global_id = value;
    }
}

L2Vpn::PwRouting::PwRoutingBgp::PwRoutingBgp()
    :
    enable{YType::empty, "enable"}
    	,
    evpn_route_distinguisher(std::make_shared<L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher>())
{
    evpn_route_distinguisher->parent = this;
    children["evpn-route-distinguisher"] = evpn_route_distinguisher;

    yang_name = "pw-routing-bgp"; yang_parent_name = "pw-routing";
}

L2Vpn::PwRouting::PwRoutingBgp::~PwRoutingBgp()
{
}

bool L2Vpn::PwRouting::PwRoutingBgp::has_data() const
{
    return enable.is_set
	|| (evpn_route_distinguisher !=  nullptr && evpn_route_distinguisher->has_data());
}

bool L2Vpn::PwRouting::PwRoutingBgp::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (evpn_route_distinguisher !=  nullptr && evpn_route_distinguisher->has_operation());
}

std::string L2Vpn::PwRouting::PwRoutingBgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-routing-bgp";

    return path_buffer.str();

}

EntityPath L2Vpn::PwRouting::PwRoutingBgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/pw-routing/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::PwRouting::PwRoutingBgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evpn-route-distinguisher")
    {
        if(evpn_route_distinguisher != nullptr)
        {
            children["evpn-route-distinguisher"] = evpn_route_distinguisher;
        }
        else
        {
            evpn_route_distinguisher = std::make_shared<L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher>();
            evpn_route_distinguisher->parent = this;
            children["evpn-route-distinguisher"] = evpn_route_distinguisher;
        }
        return children.at("evpn-route-distinguisher");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::PwRouting::PwRoutingBgp::get_children()
{
    if(children.find("evpn-route-distinguisher") == children.end())
    {
        if(evpn_route_distinguisher != nullptr)
        {
            children["evpn-route-distinguisher"] = evpn_route_distinguisher;
        }
    }

    return children;
}

void L2Vpn::PwRouting::PwRoutingBgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::EvpnRouteDistinguisher()
    :
    addr_index{YType::uint32, "addr-index"},
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    type{YType::enumeration, "type"}
{
    yang_name = "evpn-route-distinguisher"; yang_parent_name = "pw-routing-bgp";
}

L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::~EvpnRouteDistinguisher()
{
}

bool L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::has_data() const
{
    return addr_index.is_set
	|| address.is_set
	|| as.is_set
	|| as_index.is_set
	|| type.is_set;
}

bool L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::has_operation() const
{
    return is_set(operation)
	|| is_set(addr_index.operation)
	|| is_set(address.operation)
	|| is_set(as.operation)
	|| is_set(as_index.operation)
	|| is_set(type.operation);
}

std::string L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-distinguisher";

    return path_buffer.str();

}

EntityPath L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/pw-routing/pw-routing-bgp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_index.is_set || is_set(addr_index.operation)) leaf_name_data.push_back(addr_index.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.operation)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::get_children()
{
    return children;
}

void L2Vpn::PwRouting::PwRoutingBgp::EvpnRouteDistinguisher::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr-index")
    {
        addr_index = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "as-index")
    {
        as_index = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

L2Vpn::Neighbor::Neighbor()
    :
    ldp_flap{YType::empty, "ldp-flap"}
{
    yang_name = "neighbor"; yang_parent_name = "l2vpn";
}

L2Vpn::Neighbor::~Neighbor()
{
}

bool L2Vpn::Neighbor::has_data() const
{
    return ldp_flap.is_set;
}

bool L2Vpn::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(ldp_flap.operation);
}

std::string L2Vpn::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath L2Vpn::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldp_flap.is_set || is_set(ldp_flap.operation)) leaf_name_data.push_back(ldp_flap.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Neighbor::get_children()
{
    return children;
}

void L2Vpn::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ldp-flap")
    {
        ldp_flap = value;
    }
}

L2Vpn::Database::Database()
    :
    bridge_domain_groups(std::make_shared<L2Vpn::Database::BridgeDomainGroups>())
	,flexible_xconnect_service_table(std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable>())
	,g8032_rings(std::make_shared<L2Vpn::Database::G8032Rings>())
	,pseudowire_classes(std::make_shared<L2Vpn::Database::PseudowireClasses>())
	,redundancy(std::make_shared<L2Vpn::Database::Redundancy>())
	,xconnect_groups(std::make_shared<L2Vpn::Database::XconnectGroups>())
{
    bridge_domain_groups->parent = this;
    children["bridge-domain-groups"] = bridge_domain_groups;

    flexible_xconnect_service_table->parent = this;
    children["flexible-xconnect-service-table"] = flexible_xconnect_service_table;

    g8032_rings->parent = this;
    children["g8032-rings"] = g8032_rings;

    pseudowire_classes->parent = this;
    children["pseudowire-classes"] = pseudowire_classes;

    redundancy->parent = this;
    children["redundancy"] = redundancy;

    xconnect_groups->parent = this;
    children["xconnect-groups"] = xconnect_groups;

    yang_name = "database"; yang_parent_name = "l2vpn";
}

L2Vpn::Database::~Database()
{
}

bool L2Vpn::Database::has_data() const
{
    return (bridge_domain_groups !=  nullptr && bridge_domain_groups->has_data())
	|| (flexible_xconnect_service_table !=  nullptr && flexible_xconnect_service_table->has_data())
	|| (g8032_rings !=  nullptr && g8032_rings->has_data())
	|| (pseudowire_classes !=  nullptr && pseudowire_classes->has_data())
	|| (redundancy !=  nullptr && redundancy->has_data())
	|| (xconnect_groups !=  nullptr && xconnect_groups->has_data());
}

bool L2Vpn::Database::has_operation() const
{
    return is_set(operation)
	|| (bridge_domain_groups !=  nullptr && bridge_domain_groups->has_operation())
	|| (flexible_xconnect_service_table !=  nullptr && flexible_xconnect_service_table->has_operation())
	|| (g8032_rings !=  nullptr && g8032_rings->has_operation())
	|| (pseudowire_classes !=  nullptr && pseudowire_classes->has_operation())
	|| (redundancy !=  nullptr && redundancy->has_operation())
	|| (xconnect_groups !=  nullptr && xconnect_groups->has_operation());
}

std::string L2Vpn::Database::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bridge-domain-groups")
    {
        if(bridge_domain_groups != nullptr)
        {
            children["bridge-domain-groups"] = bridge_domain_groups;
        }
        else
        {
            bridge_domain_groups = std::make_shared<L2Vpn::Database::BridgeDomainGroups>();
            bridge_domain_groups->parent = this;
            children["bridge-domain-groups"] = bridge_domain_groups;
        }
        return children.at("bridge-domain-groups");
    }

    if(child_yang_name == "flexible-xconnect-service-table")
    {
        if(flexible_xconnect_service_table != nullptr)
        {
            children["flexible-xconnect-service-table"] = flexible_xconnect_service_table;
        }
        else
        {
            flexible_xconnect_service_table = std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable>();
            flexible_xconnect_service_table->parent = this;
            children["flexible-xconnect-service-table"] = flexible_xconnect_service_table;
        }
        return children.at("flexible-xconnect-service-table");
    }

    if(child_yang_name == "g8032-rings")
    {
        if(g8032_rings != nullptr)
        {
            children["g8032-rings"] = g8032_rings;
        }
        else
        {
            g8032_rings = std::make_shared<L2Vpn::Database::G8032Rings>();
            g8032_rings->parent = this;
            children["g8032-rings"] = g8032_rings;
        }
        return children.at("g8032-rings");
    }

    if(child_yang_name == "pseudowire-classes")
    {
        if(pseudowire_classes != nullptr)
        {
            children["pseudowire-classes"] = pseudowire_classes;
        }
        else
        {
            pseudowire_classes = std::make_shared<L2Vpn::Database::PseudowireClasses>();
            pseudowire_classes->parent = this;
            children["pseudowire-classes"] = pseudowire_classes;
        }
        return children.at("pseudowire-classes");
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy != nullptr)
        {
            children["redundancy"] = redundancy;
        }
        else
        {
            redundancy = std::make_shared<L2Vpn::Database::Redundancy>();
            redundancy->parent = this;
            children["redundancy"] = redundancy;
        }
        return children.at("redundancy");
    }

    if(child_yang_name == "xconnect-groups")
    {
        if(xconnect_groups != nullptr)
        {
            children["xconnect-groups"] = xconnect_groups;
        }
        else
        {
            xconnect_groups = std::make_shared<L2Vpn::Database::XconnectGroups>();
            xconnect_groups->parent = this;
            children["xconnect-groups"] = xconnect_groups;
        }
        return children.at("xconnect-groups");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::get_children()
{
    if(children.find("bridge-domain-groups") == children.end())
    {
        if(bridge_domain_groups != nullptr)
        {
            children["bridge-domain-groups"] = bridge_domain_groups;
        }
    }

    if(children.find("flexible-xconnect-service-table") == children.end())
    {
        if(flexible_xconnect_service_table != nullptr)
        {
            children["flexible-xconnect-service-table"] = flexible_xconnect_service_table;
        }
    }

    if(children.find("g8032-rings") == children.end())
    {
        if(g8032_rings != nullptr)
        {
            children["g8032-rings"] = g8032_rings;
        }
    }

    if(children.find("pseudowire-classes") == children.end())
    {
        if(pseudowire_classes != nullptr)
        {
            children["pseudowire-classes"] = pseudowire_classes;
        }
    }

    if(children.find("redundancy") == children.end())
    {
        if(redundancy != nullptr)
        {
            children["redundancy"] = redundancy;
        }
    }

    if(children.find("xconnect-groups") == children.end())
    {
        if(xconnect_groups != nullptr)
        {
            children["xconnect-groups"] = xconnect_groups;
        }
    }

    return children;
}

void L2Vpn::Database::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::G8032Rings::G8032Rings()
{
    yang_name = "g8032-rings"; yang_parent_name = "database";
}

L2Vpn::Database::G8032Rings::~G8032Rings()
{
}

bool L2Vpn::Database::G8032Rings::has_data() const
{
    for (std::size_t index=0; index<g8032_ring.size(); index++)
    {
        if(g8032_ring[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::G8032Rings::has_operation() const
{
    for (std::size_t index=0; index<g8032_ring.size(); index++)
    {
        if(g8032_ring[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::G8032Rings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032-rings";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::G8032Rings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "g8032-ring")
    {
        for(auto const & c : g8032_ring)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring>();
        c->parent = this;
        g8032_ring.push_back(std::move(c));
        children[segment_path] = g8032_ring.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::G8032Rings::get_children()
{
    for (auto const & c : g8032_ring)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::G8032Rings::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::G8032Rings::G8032Ring::G8032Ring()
    :
    g8032_ring_name{YType::str, "g8032-ring-name"},
    erp_provider_bridge{YType::empty, "erp-provider-bridge"},
    exclusion_list{YType::str, "exclusion-list"},
    open_ring{YType::empty, "open-ring"}
    	,
    erp_instances(std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances>())
	,erp_port0s(std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S>())
	,erp_port1s(std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S>())
{
    erp_instances->parent = this;
    children["erp-instances"] = erp_instances;

    erp_port0s->parent = this;
    children["erp-port0s"] = erp_port0s;

    erp_port1s->parent = this;
    children["erp-port1s"] = erp_port1s;

    yang_name = "g8032-ring"; yang_parent_name = "g8032-rings";
}

L2Vpn::Database::G8032Rings::G8032Ring::~G8032Ring()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::has_data() const
{
    return g8032_ring_name.is_set
	|| erp_provider_bridge.is_set
	|| exclusion_list.is_set
	|| open_ring.is_set
	|| (erp_instances !=  nullptr && erp_instances->has_data())
	|| (erp_port0s !=  nullptr && erp_port0s->has_data())
	|| (erp_port1s !=  nullptr && erp_port1s->has_data());
}

bool L2Vpn::Database::G8032Rings::G8032Ring::has_operation() const
{
    return is_set(operation)
	|| is_set(g8032_ring_name.operation)
	|| is_set(erp_provider_bridge.operation)
	|| is_set(exclusion_list.operation)
	|| is_set(open_ring.operation)
	|| (erp_instances !=  nullptr && erp_instances->has_operation())
	|| (erp_port0s !=  nullptr && erp_port0s->has_operation())
	|| (erp_port1s !=  nullptr && erp_port1s->has_operation());
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "g8032-ring" <<"[g8032-ring-name='" <<g8032_ring_name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::G8032Rings::G8032Ring::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/g8032-rings/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (g8032_ring_name.is_set || is_set(g8032_ring_name.operation)) leaf_name_data.push_back(g8032_ring_name.get_name_leafdata());
    if (erp_provider_bridge.is_set || is_set(erp_provider_bridge.operation)) leaf_name_data.push_back(erp_provider_bridge.get_name_leafdata());
    if (exclusion_list.is_set || is_set(exclusion_list.operation)) leaf_name_data.push_back(exclusion_list.get_name_leafdata());
    if (open_ring.is_set || is_set(open_ring.operation)) leaf_name_data.push_back(open_ring.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "erp-instances")
    {
        if(erp_instances != nullptr)
        {
            children["erp-instances"] = erp_instances;
        }
        else
        {
            erp_instances = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances>();
            erp_instances->parent = this;
            children["erp-instances"] = erp_instances;
        }
        return children.at("erp-instances");
    }

    if(child_yang_name == "erp-port0s")
    {
        if(erp_port0s != nullptr)
        {
            children["erp-port0s"] = erp_port0s;
        }
        else
        {
            erp_port0s = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S>();
            erp_port0s->parent = this;
            children["erp-port0s"] = erp_port0s;
        }
        return children.at("erp-port0s");
    }

    if(child_yang_name == "erp-port1s")
    {
        if(erp_port1s != nullptr)
        {
            children["erp-port1s"] = erp_port1s;
        }
        else
        {
            erp_port1s = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S>();
            erp_port1s->parent = this;
            children["erp-port1s"] = erp_port1s;
        }
        return children.at("erp-port1s");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::G8032Rings::G8032Ring::get_children()
{
    if(children.find("erp-instances") == children.end())
    {
        if(erp_instances != nullptr)
        {
            children["erp-instances"] = erp_instances;
        }
    }

    if(children.find("erp-port0s") == children.end())
    {
        if(erp_port0s != nullptr)
        {
            children["erp-port0s"] = erp_port0s;
        }
    }

    if(children.find("erp-port1s") == children.end())
    {
        if(erp_port1s != nullptr)
        {
            children["erp-port1s"] = erp_port1s;
        }
    }

    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "g8032-ring-name")
    {
        g8032_ring_name = value;
    }
    if(value_path == "erp-provider-bridge")
    {
        erp_provider_bridge = value;
    }
    if(value_path == "exclusion-list")
    {
        exclusion_list = value;
    }
    if(value_path == "open-ring")
    {
        open_ring = value;
    }
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0S()
{
    yang_name = "erp-port0s"; yang_parent_name = "g8032-ring";
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::~ErpPort0S()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::has_data() const
{
    for (std::size_t index=0; index<erp_port0.size(); index++)
    {
        if(erp_port0[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::has_operation() const
{
    for (std::size_t index=0; index<erp_port0.size(); index++)
    {
        if(erp_port0[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "erp-port0s";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ErpPort0S' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "erp-port0")
    {
        for(auto const & c : erp_port0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0>();
        c->parent = this;
        erp_port0.push_back(std::move(c));
        children[segment_path] = erp_port0.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::get_children()
{
    for (auto const & c : erp_port0)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0::ErpPort0()
    :
    interface_name{YType::str, "interface-name"},
    monitor{YType::str, "monitor"}
{
    yang_name = "erp-port0"; yang_parent_name = "erp-port0s";
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0::~ErpPort0()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0::has_data() const
{
    return interface_name.is_set
	|| monitor.is_set;
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(monitor.operation);
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "erp-port0" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ErpPort0' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.operation)) leaf_name_data.push_back(monitor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0::get_children()
{
    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpPort0S::ErpPort0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "monitor")
    {
        monitor = value;
    }
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstances()
{
    yang_name = "erp-instances"; yang_parent_name = "g8032-ring";
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::~ErpInstances()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::has_data() const
{
    for (std::size_t index=0; index<erp_instance.size(); index++)
    {
        if(erp_instance[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::has_operation() const
{
    for (std::size_t index=0; index<erp_instance.size(); index++)
    {
        if(erp_instance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "erp-instances";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ErpInstances' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "erp-instance")
    {
        for(auto const & c : erp_instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance>();
        c->parent = this;
        erp_instance.push_back(std::move(c));
        children[segment_path] = erp_instance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::get_children()
{
    for (auto const & c : erp_instance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::ErpInstance()
    :
    erp_instance_id{YType::uint32, "erp-instance-id"},
    description{YType::str, "description"},
    inclusion_list{YType::str, "inclusion-list"},
    profile{YType::str, "profile"}
    	,
    aps(std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps>())
	,rpl(std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl>())
{
    aps->parent = this;
    children["aps"] = aps;

    rpl->parent = this;
    children["rpl"] = rpl;

    yang_name = "erp-instance"; yang_parent_name = "erp-instances";
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::~ErpInstance()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::has_data() const
{
    return erp_instance_id.is_set
	|| description.is_set
	|| inclusion_list.is_set
	|| profile.is_set
	|| (aps !=  nullptr && aps->has_data())
	|| (rpl !=  nullptr && rpl->has_data());
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::has_operation() const
{
    return is_set(operation)
	|| is_set(erp_instance_id.operation)
	|| is_set(description.operation)
	|| is_set(inclusion_list.operation)
	|| is_set(profile.operation)
	|| (aps !=  nullptr && aps->has_operation())
	|| (rpl !=  nullptr && rpl->has_operation());
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "erp-instance" <<"[erp-instance-id='" <<erp_instance_id <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ErpInstance' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (erp_instance_id.is_set || is_set(erp_instance_id.operation)) leaf_name_data.push_back(erp_instance_id.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (inclusion_list.is_set || is_set(inclusion_list.operation)) leaf_name_data.push_back(inclusion_list.get_name_leafdata());
    if (profile.is_set || is_set(profile.operation)) leaf_name_data.push_back(profile.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "aps")
    {
        if(aps != nullptr)
        {
            children["aps"] = aps;
        }
        else
        {
            aps = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps>();
            aps->parent = this;
            children["aps"] = aps;
        }
        return children.at("aps");
    }

    if(child_yang_name == "rpl")
    {
        if(rpl != nullptr)
        {
            children["rpl"] = rpl;
        }
        else
        {
            rpl = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl>();
            rpl->parent = this;
            children["rpl"] = rpl;
        }
        return children.at("rpl");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::get_children()
{
    if(children.find("aps") == children.end())
    {
        if(aps != nullptr)
        {
            children["aps"] = aps;
        }
    }

    if(children.find("rpl") == children.end())
    {
        if(rpl != nullptr)
        {
            children["rpl"] = rpl;
        }
    }

    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "erp-instance-id")
    {
        erp_instance_id = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "inclusion-list")
    {
        inclusion_list = value;
    }
    if(value_path == "profile")
    {
        profile = value;
    }
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::Rpl()
    :
    port{YType::enumeration, "port"},
    role{YType::enumeration, "role"}
{
    yang_name = "rpl"; yang_parent_name = "erp-instance";
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::~Rpl()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::has_data() const
{
    return port.is_set
	|| role.is_set;
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::has_operation() const
{
    return is_set(operation)
	|| is_set(port.operation)
	|| is_set(role.operation);
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpl";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rpl' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.operation)) leaf_name_data.push_back(port.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::get_children()
{
    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Rpl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port")
    {
        port = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Aps()
    :
    enable{YType::empty, "enable"},
    level{YType::uint32, "level"},
    port0{YType::str, "port0"}
    	,
    port1(std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1>())
{
    port1->parent = this;
    children["port1"] = port1;

    yang_name = "aps"; yang_parent_name = "erp-instance";
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::~Aps()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::has_data() const
{
    return enable.is_set
	|| level.is_set
	|| port0.is_set
	|| (port1 !=  nullptr && port1->has_data());
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(level.operation)
	|| is_set(port0.operation)
	|| (port1 !=  nullptr && port1->has_operation());
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aps";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aps' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (port0.is_set || is_set(port0.operation)) leaf_name_data.push_back(port0.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "port1")
    {
        if(port1 != nullptr)
        {
            children["port1"] = port1;
        }
        else
        {
            port1 = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1>();
            port1->parent = this;
            children["port1"] = port1;
        }
        return children.at("port1");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::get_children()
{
    if(children.find("port1") == children.end())
    {
        if(port1 != nullptr)
        {
            children["port1"] = port1;
        }
    }

    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "port0")
    {
        port0 = value;
    }
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::Port1()
    :
    aps_channel{YType::str, "aps-channel"},
    aps_type{YType::enumeration, "aps-type"}
{
    yang_name = "port1"; yang_parent_name = "aps";
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::~Port1()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::has_data() const
{
    return aps_channel.is_set
	|| aps_type.is_set;
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::has_operation() const
{
    return is_set(operation)
	|| is_set(aps_channel.operation)
	|| is_set(aps_type.operation);
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port1";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Port1' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aps_channel.is_set || is_set(aps_channel.operation)) leaf_name_data.push_back(aps_channel.get_name_leafdata());
    if (aps_type.is_set || is_set(aps_type.operation)) leaf_name_data.push_back(aps_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::get_children()
{
    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpInstances::ErpInstance::Aps::Port1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aps-channel")
    {
        aps_channel = value;
    }
    if(value_path == "aps-type")
    {
        aps_type = value;
    }
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1S()
{
    yang_name = "erp-port1s"; yang_parent_name = "g8032-ring";
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::~ErpPort1S()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::has_data() const
{
    for (std::size_t index=0; index<erp_port1.size(); index++)
    {
        if(erp_port1[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::has_operation() const
{
    for (std::size_t index=0; index<erp_port1.size(); index++)
    {
        if(erp_port1[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "erp-port1s";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ErpPort1S' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "erp-port1")
    {
        for(auto const & c : erp_port1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1>();
        c->parent = this;
        erp_port1.push_back(std::move(c));
        children[segment_path] = erp_port1.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::get_children()
{
    for (auto const & c : erp_port1)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::ErpPort1()
    :
    erp_port_type{YType::enumeration, "erp-port-type"}
    	,
    none_or_virtual(nullptr) // presence node
{
    yang_name = "erp-port1"; yang_parent_name = "erp-port1s";
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::~ErpPort1()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return erp_port_type.is_set
	|| (none_or_virtual !=  nullptr && none_or_virtual->has_data());
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(erp_port_type.operation)
	|| (none_or_virtual !=  nullptr && none_or_virtual->has_operation());
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "erp-port1" <<"[erp-port-type='" <<erp_port_type <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ErpPort1' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (erp_port_type.is_set || is_set(erp_port_type.operation)) leaf_name_data.push_back(erp_port_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "none-or-virtual")
    {
        if(none_or_virtual != nullptr)
        {
            children["none-or-virtual"] = none_or_virtual;
        }
        else
        {
            none_or_virtual = std::make_shared<L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual>();
            none_or_virtual->parent = this;
            children["none-or-virtual"] = none_or_virtual;
        }
        return children.at("none-or-virtual");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("none-or-virtual") == children.end())
    {
        if(none_or_virtual != nullptr)
        {
            children["none-or-virtual"] = none_or_virtual;
        }
    }

    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "erp-port-type")
    {
        erp_port_type = value;
    }
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual::NoneOrVirtual()
    :
    monitor{YType::str, "monitor"}
{
    yang_name = "none-or-virtual"; yang_parent_name = "erp-port1";
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual::~NoneOrVirtual()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual::has_data() const
{
    return monitor.is_set;
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual::has_operation() const
{
    return is_set(operation)
	|| is_set(monitor.operation);
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "none-or-virtual";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NoneOrVirtual' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (monitor.is_set || is_set(monitor.operation)) leaf_name_data.push_back(monitor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual::get_children()
{
    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::NoneOrVirtual::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "monitor")
    {
        monitor = value;
    }
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    monitor{YType::str, "monitor"}
{
    yang_name = "interface"; yang_parent_name = "erp-port1";
}

L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface::~Interface()
{
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface::has_data() const
{
    return interface_name.is_set
	|| monitor.is_set;
}

bool L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(monitor.operation);
}

std::string L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.operation)) leaf_name_data.push_back(monitor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface::get_children()
{
    return children;
}

void L2Vpn::Database::G8032Rings::G8032Ring::ErpPort1S::ErpPort1::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "monitor")
    {
        monitor = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroups()
{
    yang_name = "xconnect-groups"; yang_parent_name = "database";
}

L2Vpn::Database::XconnectGroups::~XconnectGroups()
{
}

bool L2Vpn::Database::XconnectGroups::has_data() const
{
    for (std::size_t index=0; index<xconnect_group.size(); index++)
    {
        if(xconnect_group[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::has_operation() const
{
    for (std::size_t index=0; index<xconnect_group.size(); index++)
    {
        if(xconnect_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::XconnectGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-groups";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "xconnect-group")
    {
        for(auto const & c : xconnect_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup>();
        c->parent = this;
        xconnect_group.push_back(std::move(c));
        children[segment_path] = xconnect_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::get_children()
{
    for (auto const & c : xconnect_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::XconnectGroups::XconnectGroup::XconnectGroup()
    :
    name{YType::str, "name"}
    	,
    mp2mp_xconnects(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects>())
	,p2p_xconnects(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects>())
{
    mp2mp_xconnects->parent = this;
    children["mp2mp-xconnects"] = mp2mp_xconnects;

    p2p_xconnects->parent = this;
    children["p2p-xconnects"] = p2p_xconnects;

    yang_name = "xconnect-group"; yang_parent_name = "xconnect-groups";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::~XconnectGroup()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::has_data() const
{
    return name.is_set
	|| (mp2mp_xconnects !=  nullptr && mp2mp_xconnects->has_data())
	|| (p2p_xconnects !=  nullptr && p2p_xconnects->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (mp2mp_xconnects !=  nullptr && mp2mp_xconnects->has_operation())
	|| (p2p_xconnects !=  nullptr && p2p_xconnects->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-group" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/xconnect-groups/" << get_segment_path();
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

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mp2mp-xconnects")
    {
        if(mp2mp_xconnects != nullptr)
        {
            children["mp2mp-xconnects"] = mp2mp_xconnects;
        }
        else
        {
            mp2mp_xconnects = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects>();
            mp2mp_xconnects->parent = this;
            children["mp2mp-xconnects"] = mp2mp_xconnects;
        }
        return children.at("mp2mp-xconnects");
    }

    if(child_yang_name == "p2p-xconnects")
    {
        if(p2p_xconnects != nullptr)
        {
            children["p2p-xconnects"] = p2p_xconnects;
        }
        else
        {
            p2p_xconnects = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects>();
            p2p_xconnects->parent = this;
            children["p2p-xconnects"] = p2p_xconnects;
        }
        return children.at("p2p-xconnects");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::get_children()
{
    if(children.find("mp2mp-xconnects") == children.end())
    {
        if(mp2mp_xconnects != nullptr)
        {
            children["mp2mp-xconnects"] = mp2mp_xconnects;
        }
    }

    if(children.find("p2p-xconnects") == children.end())
    {
        if(p2p_xconnects != nullptr)
        {
            children["p2p-xconnects"] = p2p_xconnects;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnects()
{
    yang_name = "p2p-xconnects"; yang_parent_name = "xconnect-group";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::~P2PXconnects()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::has_data() const
{
    for (std::size_t index=0; index<p2p_xconnect.size(); index++)
    {
        if(p2p_xconnect[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::has_operation() const
{
    for (std::size_t index=0; index<p2p_xconnect.size(); index++)
    {
        if(p2p_xconnect[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-xconnects";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'P2PXconnects' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "p2p-xconnect")
    {
        for(auto const & c : p2p_xconnect)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect>();
        c->parent = this;
        p2p_xconnect.push_back(std::move(c));
        children[segment_path] = p2p_xconnect.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::get_children()
{
    for (auto const & c : p2p_xconnect)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::P2PXconnect()
    :
    name{YType::str, "name"},
    interworking{YType::enumeration, "interworking"},
    p2p_description{YType::str, "p2p-description"}
    	,
    attachment_circuits(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits>())
	,backup_attachment_circuits(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits>())
	,monitor_sessions(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions>())
	,pseudowire_evpns(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns>())
	,pseudowire_routeds(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds>())
	,pseudowires(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires>())
{
    attachment_circuits->parent = this;
    children["attachment-circuits"] = attachment_circuits;

    backup_attachment_circuits->parent = this;
    children["backup-attachment-circuits"] = backup_attachment_circuits;

    monitor_sessions->parent = this;
    children["monitor-sessions"] = monitor_sessions;

    pseudowire_evpns->parent = this;
    children["pseudowire-evpns"] = pseudowire_evpns;

    pseudowire_routeds->parent = this;
    children["pseudowire-routeds"] = pseudowire_routeds;

    pseudowires->parent = this;
    children["pseudowires"] = pseudowires;

    yang_name = "p2p-xconnect"; yang_parent_name = "p2p-xconnects";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::~P2PXconnect()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::has_data() const
{
    return name.is_set
	|| interworking.is_set
	|| p2p_description.is_set
	|| (attachment_circuits !=  nullptr && attachment_circuits->has_data())
	|| (backup_attachment_circuits !=  nullptr && backup_attachment_circuits->has_data())
	|| (monitor_sessions !=  nullptr && monitor_sessions->has_data())
	|| (pseudowire_evpns !=  nullptr && pseudowire_evpns->has_data())
	|| (pseudowire_routeds !=  nullptr && pseudowire_routeds->has_data())
	|| (pseudowires !=  nullptr && pseudowires->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(interworking.operation)
	|| is_set(p2p_description.operation)
	|| (attachment_circuits !=  nullptr && attachment_circuits->has_operation())
	|| (backup_attachment_circuits !=  nullptr && backup_attachment_circuits->has_operation())
	|| (monitor_sessions !=  nullptr && monitor_sessions->has_operation())
	|| (pseudowire_evpns !=  nullptr && pseudowire_evpns->has_operation())
	|| (pseudowire_routeds !=  nullptr && pseudowire_routeds->has_operation())
	|| (pseudowires !=  nullptr && pseudowires->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2p-xconnect" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'P2PXconnect' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.operation)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (p2p_description.is_set || is_set(p2p_description.operation)) leaf_name_data.push_back(p2p_description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attachment-circuits")
    {
        if(attachment_circuits != nullptr)
        {
            children["attachment-circuits"] = attachment_circuits;
        }
        else
        {
            attachment_circuits = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits>();
            attachment_circuits->parent = this;
            children["attachment-circuits"] = attachment_circuits;
        }
        return children.at("attachment-circuits");
    }

    if(child_yang_name == "backup-attachment-circuits")
    {
        if(backup_attachment_circuits != nullptr)
        {
            children["backup-attachment-circuits"] = backup_attachment_circuits;
        }
        else
        {
            backup_attachment_circuits = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits>();
            backup_attachment_circuits->parent = this;
            children["backup-attachment-circuits"] = backup_attachment_circuits;
        }
        return children.at("backup-attachment-circuits");
    }

    if(child_yang_name == "monitor-sessions")
    {
        if(monitor_sessions != nullptr)
        {
            children["monitor-sessions"] = monitor_sessions;
        }
        else
        {
            monitor_sessions = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions>();
            monitor_sessions->parent = this;
            children["monitor-sessions"] = monitor_sessions;
        }
        return children.at("monitor-sessions");
    }

    if(child_yang_name == "pseudowire-evpns")
    {
        if(pseudowire_evpns != nullptr)
        {
            children["pseudowire-evpns"] = pseudowire_evpns;
        }
        else
        {
            pseudowire_evpns = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns>();
            pseudowire_evpns->parent = this;
            children["pseudowire-evpns"] = pseudowire_evpns;
        }
        return children.at("pseudowire-evpns");
    }

    if(child_yang_name == "pseudowire-routeds")
    {
        if(pseudowire_routeds != nullptr)
        {
            children["pseudowire-routeds"] = pseudowire_routeds;
        }
        else
        {
            pseudowire_routeds = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds>();
            pseudowire_routeds->parent = this;
            children["pseudowire-routeds"] = pseudowire_routeds;
        }
        return children.at("pseudowire-routeds");
    }

    if(child_yang_name == "pseudowires")
    {
        if(pseudowires != nullptr)
        {
            children["pseudowires"] = pseudowires;
        }
        else
        {
            pseudowires = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires>();
            pseudowires->parent = this;
            children["pseudowires"] = pseudowires;
        }
        return children.at("pseudowires");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::get_children()
{
    if(children.find("attachment-circuits") == children.end())
    {
        if(attachment_circuits != nullptr)
        {
            children["attachment-circuits"] = attachment_circuits;
        }
    }

    if(children.find("backup-attachment-circuits") == children.end())
    {
        if(backup_attachment_circuits != nullptr)
        {
            children["backup-attachment-circuits"] = backup_attachment_circuits;
        }
    }

    if(children.find("monitor-sessions") == children.end())
    {
        if(monitor_sessions != nullptr)
        {
            children["monitor-sessions"] = monitor_sessions;
        }
    }

    if(children.find("pseudowire-evpns") == children.end())
    {
        if(pseudowire_evpns != nullptr)
        {
            children["pseudowire-evpns"] = pseudowire_evpns;
        }
    }

    if(children.find("pseudowire-routeds") == children.end())
    {
        if(pseudowire_routeds != nullptr)
        {
            children["pseudowire-routeds"] = pseudowire_routeds;
        }
    }

    if(children.find("pseudowires") == children.end())
    {
        if(pseudowires != nullptr)
        {
            children["pseudowires"] = pseudowires;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "interworking")
    {
        interworking = value;
    }
    if(value_path == "p2p-description")
    {
        p2p_description = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuits()
{
    yang_name = "backup-attachment-circuits"; yang_parent_name = "p2p-xconnect";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::~BackupAttachmentCircuits()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::has_data() const
{
    for (std::size_t index=0; index<backup_attachment_circuit.size(); index++)
    {
        if(backup_attachment_circuit[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::has_operation() const
{
    for (std::size_t index=0; index<backup_attachment_circuit.size(); index++)
    {
        if(backup_attachment_circuit[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-attachment-circuits";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupAttachmentCircuits' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-attachment-circuit")
    {
        for(auto const & c : backup_attachment_circuit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit>();
        c->parent = this;
        backup_attachment_circuit.push_back(std::move(c));
        children[segment_path] = backup_attachment_circuit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::get_children()
{
    for (auto const & c : backup_attachment_circuit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::BackupAttachmentCircuit()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "backup-attachment-circuit"; yang_parent_name = "backup-attachment-circuits";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::~BackupAttachmentCircuit()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::has_data() const
{
    return interface_name.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-attachment-circuit" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupAttachmentCircuit' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::BackupAttachmentCircuits::BackupAttachmentCircuit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpns()
{
    yang_name = "pseudowire-evpns"; yang_parent_name = "p2p-xconnect";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::~PseudowireEvpns()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::has_data() const
{
    for (std::size_t index=0; index<pseudowire_evpn.size(); index++)
    {
        if(pseudowire_evpn[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::has_operation() const
{
    for (std::size_t index=0; index<pseudowire_evpn.size(); index++)
    {
        if(pseudowire_evpn[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-evpns";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireEvpns' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pseudowire-evpn")
    {
        for(auto const & c : pseudowire_evpn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn>();
        c->parent = this;
        pseudowire_evpn.push_back(std::move(c));
        children[segment_path] = pseudowire_evpn.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::get_children()
{
    for (auto const & c : pseudowire_evpn)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn::PseudowireEvpn()
    :
    eviid{YType::uint32, "eviid"},
    remote_acid{YType::uint32, "remote-acid"},
    source_acid{YType::uint32, "source-acid"}
{
    yang_name = "pseudowire-evpn"; yang_parent_name = "pseudowire-evpns";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn::~PseudowireEvpn()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn::has_data() const
{
    return eviid.is_set
	|| remote_acid.is_set
	|| source_acid.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn::has_operation() const
{
    return is_set(operation)
	|| is_set(eviid.operation)
	|| is_set(remote_acid.operation)
	|| is_set(source_acid.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-evpn" <<"[eviid='" <<eviid <<"']" <<"[remote-acid='" <<remote_acid <<"']" <<"[source-acid='" <<source_acid <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireEvpn' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eviid.is_set || is_set(eviid.operation)) leaf_name_data.push_back(eviid.get_name_leafdata());
    if (remote_acid.is_set || is_set(remote_acid.operation)) leaf_name_data.push_back(remote_acid.get_name_leafdata());
    if (source_acid.is_set || is_set(source_acid.operation)) leaf_name_data.push_back(source_acid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireEvpns::PseudowireEvpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eviid")
    {
        eviid = value;
    }
    if(value_path == "remote-acid")
    {
        remote_acid = value;
    }
    if(value_path == "source-acid")
    {
        source_acid = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowires()
{
    yang_name = "pseudowires"; yang_parent_name = "p2p-xconnect";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::~Pseudowires()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::has_data() const
{
    for (std::size_t index=0; index<pseudowire.size(); index++)
    {
        if(pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::has_operation() const
{
    for (std::size_t index=0; index<pseudowire.size(); index++)
    {
        if(pseudowire[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowires";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pseudowires' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pseudowire")
    {
        for(auto const & c : pseudowire)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire>();
        c->parent = this;
        pseudowire.push_back(std::move(c));
        children[segment_path] = pseudowire.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::get_children()
{
    for (auto const & c : pseudowire)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Pseudowire()
    :
    pseudowire_id{YType::uint32, "pseudowire-id"}
{
    yang_name = "pseudowire"; yang_parent_name = "pseudowires";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::~Pseudowire()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pseudowire_address.size(); index++)
    {
        if(pseudowire_address[index]->has_data())
            return true;
    }
    return pseudowire_id.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pseudowire_address.size(); index++)
    {
        if(pseudowire_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(pseudowire_id.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire" <<"[pseudowire-id='" <<pseudowire_id <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pseudowire' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_id.is_set || is_set(pseudowire_id.operation)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "pseudowire-address")
    {
        for(auto const & c : pseudowire_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress>();
        c->parent = this;
        pseudowire_address.push_back(std::move(c));
        children[segment_path] = pseudowire_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : pseudowire_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::Neighbor()
    :
    neighbor{YType::str, "neighbor"},
    bandwidth{YType::uint32, "bandwidth"},
    class_{YType::str, "class"},
    source_address{YType::str, "source-address"},
    tag_impose{YType::uint32, "tag-impose"}
    	,
    backup_pseudowires(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires>())
	,l2tp_static(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic>())
	,l2tp_static_attributes(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes>())
	,mpls_static_labels(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels>())
{
    backup_pseudowires->parent = this;
    children["backup-pseudowires"] = backup_pseudowires;

    l2tp_static->parent = this;
    children["l2tp-static"] = l2tp_static;

    l2tp_static_attributes->parent = this;
    children["l2tp-static-attributes"] = l2tp_static_attributes;

    mpls_static_labels->parent = this;
    children["mpls-static-labels"] = mpls_static_labels;

    yang_name = "neighbor"; yang_parent_name = "pseudowire";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::~Neighbor()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::has_data() const
{
    return neighbor.is_set
	|| bandwidth.is_set
	|| class_.is_set
	|| source_address.is_set
	|| tag_impose.is_set
	|| (backup_pseudowires !=  nullptr && backup_pseudowires->has_data())
	|| (l2tp_static !=  nullptr && l2tp_static->has_data())
	|| (l2tp_static_attributes !=  nullptr && l2tp_static_attributes->has_data())
	|| (mpls_static_labels !=  nullptr && mpls_static_labels->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor.operation)
	|| is_set(bandwidth.operation)
	|| is_set(class_.operation)
	|| is_set(source_address.operation)
	|| is_set(tag_impose.operation)
	|| (backup_pseudowires !=  nullptr && backup_pseudowires->has_operation())
	|| (l2tp_static !=  nullptr && l2tp_static->has_operation())
	|| (l2tp_static_attributes !=  nullptr && l2tp_static_attributes->has_operation())
	|| (mpls_static_labels !=  nullptr && mpls_static_labels->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor='" <<neighbor <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (class_.is_set || is_set(class_.operation)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tag_impose.is_set || is_set(tag_impose.operation)) leaf_name_data.push_back(tag_impose.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-pseudowires")
    {
        if(backup_pseudowires != nullptr)
        {
            children["backup-pseudowires"] = backup_pseudowires;
        }
        else
        {
            backup_pseudowires = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires>();
            backup_pseudowires->parent = this;
            children["backup-pseudowires"] = backup_pseudowires;
        }
        return children.at("backup-pseudowires");
    }

    if(child_yang_name == "l2tp-static")
    {
        if(l2tp_static != nullptr)
        {
            children["l2tp-static"] = l2tp_static;
        }
        else
        {
            l2tp_static = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic>();
            l2tp_static->parent = this;
            children["l2tp-static"] = l2tp_static;
        }
        return children.at("l2tp-static");
    }

    if(child_yang_name == "l2tp-static-attributes")
    {
        if(l2tp_static_attributes != nullptr)
        {
            children["l2tp-static-attributes"] = l2tp_static_attributes;
        }
        else
        {
            l2tp_static_attributes = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes>();
            l2tp_static_attributes->parent = this;
            children["l2tp-static-attributes"] = l2tp_static_attributes;
        }
        return children.at("l2tp-static-attributes");
    }

    if(child_yang_name == "mpls-static-labels")
    {
        if(mpls_static_labels != nullptr)
        {
            children["mpls-static-labels"] = mpls_static_labels;
        }
        else
        {
            mpls_static_labels = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels>();
            mpls_static_labels->parent = this;
            children["mpls-static-labels"] = mpls_static_labels;
        }
        return children.at("mpls-static-labels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::get_children()
{
    if(children.find("backup-pseudowires") == children.end())
    {
        if(backup_pseudowires != nullptr)
        {
            children["backup-pseudowires"] = backup_pseudowires;
        }
    }

    if(children.find("l2tp-static") == children.end())
    {
        if(l2tp_static != nullptr)
        {
            children["l2tp-static"] = l2tp_static;
        }
    }

    if(children.find("l2tp-static-attributes") == children.end())
    {
        if(l2tp_static_attributes != nullptr)
        {
            children["l2tp-static-attributes"] = l2tp_static_attributes;
        }
    }

    if(children.find("mpls-static-labels") == children.end())
    {
        if(mpls_static_labels != nullptr)
        {
            children["mpls-static-labels"] = mpls_static_labels;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "class")
    {
        class_ = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tag-impose")
    {
        tag_impose = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::MplsStaticLabels()
    :
    local_static_label{YType::uint32, "local-static-label"},
    remote_static_label{YType::uint32, "remote-static-label"}
{
    yang_name = "mpls-static-labels"; yang_parent_name = "neighbor";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::~MplsStaticLabels()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::has_data() const
{
    return local_static_label.is_set
	|| remote_static_label.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::has_operation() const
{
    return is_set(operation)
	|| is_set(local_static_label.operation)
	|| is_set(remote_static_label.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-static-labels";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsStaticLabels' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_static_label.is_set || is_set(local_static_label.operation)) leaf_name_data.push_back(local_static_label.get_name_leafdata());
    if (remote_static_label.is_set || is_set(remote_static_label.operation)) leaf_name_data.push_back(remote_static_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::MplsStaticLabels::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-static-label")
    {
        local_static_label = value;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowires()
{
    yang_name = "backup-pseudowires"; yang_parent_name = "neighbor";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::~BackupPseudowires()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::has_data() const
{
    for (std::size_t index=0; index<backup_pseudowire.size(); index++)
    {
        if(backup_pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::has_operation() const
{
    for (std::size_t index=0; index<backup_pseudowire.size(); index++)
    {
        if(backup_pseudowire[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudowires";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupPseudowires' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-pseudowire")
    {
        for(auto const & c : backup_pseudowire)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire>();
        c->parent = this;
        backup_pseudowire.push_back(std::move(c));
        children[segment_path] = backup_pseudowire.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::get_children()
{
    for (auto const & c : backup_pseudowire)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupPseudowire()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    backup_pw_class{YType::str, "backup-pw-class"}
    	,
    backup_mpls_static_labels(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels>())
{
    backup_mpls_static_labels->parent = this;
    children["backup-mpls-static-labels"] = backup_mpls_static_labels;

    yang_name = "backup-pseudowire"; yang_parent_name = "backup-pseudowires";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::~BackupPseudowire()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::has_data() const
{
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| backup_pw_class.is_set
	|| (backup_mpls_static_labels !=  nullptr && backup_mpls_static_labels->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor.operation)
	|| is_set(pseudowire_id.operation)
	|| is_set(backup_pw_class.operation)
	|| (backup_mpls_static_labels !=  nullptr && backup_mpls_static_labels->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudowire" <<"[neighbor='" <<neighbor <<"']" <<"[pseudowire-id='" <<pseudowire_id <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupPseudowire' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.operation)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (backup_pw_class.is_set || is_set(backup_pw_class.operation)) leaf_name_data.push_back(backup_pw_class.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-mpls-static-labels")
    {
        if(backup_mpls_static_labels != nullptr)
        {
            children["backup-mpls-static-labels"] = backup_mpls_static_labels;
        }
        else
        {
            backup_mpls_static_labels = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels>();
            backup_mpls_static_labels->parent = this;
            children["backup-mpls-static-labels"] = backup_mpls_static_labels;
        }
        return children.at("backup-mpls-static-labels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::get_children()
{
    if(children.find("backup-mpls-static-labels") == children.end())
    {
        if(backup_mpls_static_labels != nullptr)
        {
            children["backup-mpls-static-labels"] = backup_mpls_static_labels;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
    }
    if(value_path == "backup-pw-class")
    {
        backup_pw_class = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::BackupMplsStaticLabels()
    :
    local_static_label{YType::uint32, "local-static-label"},
    remote_static_label{YType::uint32, "remote-static-label"}
{
    yang_name = "backup-mpls-static-labels"; yang_parent_name = "backup-pseudowire";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::~BackupMplsStaticLabels()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::has_data() const
{
    return local_static_label.is_set
	|| remote_static_label.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::has_operation() const
{
    return is_set(operation)
	|| is_set(local_static_label.operation)
	|| is_set(remote_static_label.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-mpls-static-labels";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupMplsStaticLabels' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_static_label.is_set || is_set(local_static_label.operation)) leaf_name_data.push_back(local_static_label.get_name_leafdata());
    if (remote_static_label.is_set || is_set(remote_static_label.operation)) leaf_name_data.push_back(remote_static_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-static-label")
    {
        local_static_label = value;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpStaticAttributes()
    :
    l2tp_local_session_id{YType::uint32, "l2tp-local-session-id"},
    l2tp_remote_session_id{YType::uint32, "l2tp-remote-session-id"}
    	,
    l2tp_local_cookie(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie>())
	,l2tp_remote_cookie(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie>())
	,l2tp_secondary_local_cookie(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie>())
{
    l2tp_local_cookie->parent = this;
    children["l2tp-local-cookie"] = l2tp_local_cookie;

    l2tp_remote_cookie->parent = this;
    children["l2tp-remote-cookie"] = l2tp_remote_cookie;

    l2tp_secondary_local_cookie->parent = this;
    children["l2tp-secondary-local-cookie"] = l2tp_secondary_local_cookie;

    yang_name = "l2tp-static-attributes"; yang_parent_name = "neighbor";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::~L2TpStaticAttributes()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::has_data() const
{
    return l2tp_local_session_id.is_set
	|| l2tp_remote_session_id.is_set
	|| (l2tp_local_cookie !=  nullptr && l2tp_local_cookie->has_data())
	|| (l2tp_remote_cookie !=  nullptr && l2tp_remote_cookie->has_data())
	|| (l2tp_secondary_local_cookie !=  nullptr && l2tp_secondary_local_cookie->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(l2tp_local_session_id.operation)
	|| is_set(l2tp_remote_session_id.operation)
	|| (l2tp_local_cookie !=  nullptr && l2tp_local_cookie->has_operation())
	|| (l2tp_remote_cookie !=  nullptr && l2tp_remote_cookie->has_operation())
	|| (l2tp_secondary_local_cookie !=  nullptr && l2tp_secondary_local_cookie->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-static-attributes";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2TpStaticAttributes' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2tp_local_session_id.is_set || is_set(l2tp_local_session_id.operation)) leaf_name_data.push_back(l2tp_local_session_id.get_name_leafdata());
    if (l2tp_remote_session_id.is_set || is_set(l2tp_remote_session_id.operation)) leaf_name_data.push_back(l2tp_remote_session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2tp-local-cookie")
    {
        if(l2tp_local_cookie != nullptr)
        {
            children["l2tp-local-cookie"] = l2tp_local_cookie;
        }
        else
        {
            l2tp_local_cookie = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie>();
            l2tp_local_cookie->parent = this;
            children["l2tp-local-cookie"] = l2tp_local_cookie;
        }
        return children.at("l2tp-local-cookie");
    }

    if(child_yang_name == "l2tp-remote-cookie")
    {
        if(l2tp_remote_cookie != nullptr)
        {
            children["l2tp-remote-cookie"] = l2tp_remote_cookie;
        }
        else
        {
            l2tp_remote_cookie = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie>();
            l2tp_remote_cookie->parent = this;
            children["l2tp-remote-cookie"] = l2tp_remote_cookie;
        }
        return children.at("l2tp-remote-cookie");
    }

    if(child_yang_name == "l2tp-secondary-local-cookie")
    {
        if(l2tp_secondary_local_cookie != nullptr)
        {
            children["l2tp-secondary-local-cookie"] = l2tp_secondary_local_cookie;
        }
        else
        {
            l2tp_secondary_local_cookie = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie>();
            l2tp_secondary_local_cookie->parent = this;
            children["l2tp-secondary-local-cookie"] = l2tp_secondary_local_cookie;
        }
        return children.at("l2tp-secondary-local-cookie");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::get_children()
{
    if(children.find("l2tp-local-cookie") == children.end())
    {
        if(l2tp_local_cookie != nullptr)
        {
            children["l2tp-local-cookie"] = l2tp_local_cookie;
        }
    }

    if(children.find("l2tp-remote-cookie") == children.end())
    {
        if(l2tp_remote_cookie != nullptr)
        {
            children["l2tp-remote-cookie"] = l2tp_remote_cookie;
        }
    }

    if(children.find("l2tp-secondary-local-cookie") == children.end())
    {
        if(l2tp_secondary_local_cookie != nullptr)
        {
            children["l2tp-secondary-local-cookie"] = l2tp_secondary_local_cookie;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2tp-local-session-id")
    {
        l2tp_local_session_id = value;
    }
    if(value_path == "l2tp-remote-session-id")
    {
        l2tp_remote_session_id = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie::L2TpRemoteCookie()
    :
    higher_value{YType::uint32, "higher-value"},
    lower_value{YType::uint32, "lower-value"},
    size{YType::enumeration, "size"}
{
    yang_name = "l2tp-remote-cookie"; yang_parent_name = "l2tp-static-attributes";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie::~L2TpRemoteCookie()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie::has_data() const
{
    return higher_value.is_set
	|| lower_value.is_set
	|| size.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie::has_operation() const
{
    return is_set(operation)
	|| is_set(higher_value.operation)
	|| is_set(lower_value.operation)
	|| is_set(size.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-remote-cookie";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2TpRemoteCookie' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (higher_value.is_set || is_set(higher_value.operation)) leaf_name_data.push_back(higher_value.get_name_leafdata());
    if (lower_value.is_set || is_set(lower_value.operation)) leaf_name_data.push_back(lower_value.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpRemoteCookie::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "higher-value")
    {
        higher_value = value;
    }
    if(value_path == "lower-value")
    {
        lower_value = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie::L2TpSecondaryLocalCookie()
    :
    higher_value{YType::uint32, "higher-value"},
    lower_value{YType::uint32, "lower-value"},
    size{YType::enumeration, "size"}
{
    yang_name = "l2tp-secondary-local-cookie"; yang_parent_name = "l2tp-static-attributes";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie::~L2TpSecondaryLocalCookie()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie::has_data() const
{
    return higher_value.is_set
	|| lower_value.is_set
	|| size.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie::has_operation() const
{
    return is_set(operation)
	|| is_set(higher_value.operation)
	|| is_set(lower_value.operation)
	|| is_set(size.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-secondary-local-cookie";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2TpSecondaryLocalCookie' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (higher_value.is_set || is_set(higher_value.operation)) leaf_name_data.push_back(higher_value.get_name_leafdata());
    if (lower_value.is_set || is_set(lower_value.operation)) leaf_name_data.push_back(lower_value.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpSecondaryLocalCookie::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "higher-value")
    {
        higher_value = value;
    }
    if(value_path == "lower-value")
    {
        lower_value = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie::L2TpLocalCookie()
    :
    higher_value{YType::uint32, "higher-value"},
    lower_value{YType::uint32, "lower-value"},
    size{YType::enumeration, "size"}
{
    yang_name = "l2tp-local-cookie"; yang_parent_name = "l2tp-static-attributes";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie::~L2TpLocalCookie()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie::has_data() const
{
    return higher_value.is_set
	|| lower_value.is_set
	|| size.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie::has_operation() const
{
    return is_set(operation)
	|| is_set(higher_value.operation)
	|| is_set(lower_value.operation)
	|| is_set(size.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-local-cookie";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2TpLocalCookie' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (higher_value.is_set || is_set(higher_value.operation)) leaf_name_data.push_back(higher_value.get_name_leafdata());
    if (lower_value.is_set || is_set(lower_value.operation)) leaf_name_data.push_back(lower_value.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStaticAttributes::L2TpLocalCookie::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "higher-value")
    {
        higher_value = value;
    }
    if(value_path == "lower-value")
    {
        lower_value = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic::L2TpStatic()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "l2tp-static"; yang_parent_name = "neighbor";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic::~L2TpStatic()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic::has_data() const
{
    return enable.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-static";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2TpStatic' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::Neighbor::L2TpStatic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::PseudowireAddress()
    :
    pseudowire_address{YType::str, "pseudowire-address"},
    bandwidth{YType::uint32, "bandwidth"},
    class_{YType::str, "class"},
    source_address{YType::str, "source-address"},
    tag_impose{YType::uint32, "tag-impose"}
    	,
    backup_pseudowires(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires>())
	,l2tp_static(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic>())
	,l2tp_static_attributes(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes>())
	,mpls_static_labels(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels>())
{
    backup_pseudowires->parent = this;
    children["backup-pseudowires"] = backup_pseudowires;

    l2tp_static->parent = this;
    children["l2tp-static"] = l2tp_static;

    l2tp_static_attributes->parent = this;
    children["l2tp-static-attributes"] = l2tp_static_attributes;

    mpls_static_labels->parent = this;
    children["mpls-static-labels"] = mpls_static_labels;

    yang_name = "pseudowire-address"; yang_parent_name = "pseudowire";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::~PseudowireAddress()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::has_data() const
{
    return pseudowire_address.is_set
	|| bandwidth.is_set
	|| class_.is_set
	|| source_address.is_set
	|| tag_impose.is_set
	|| (backup_pseudowires !=  nullptr && backup_pseudowires->has_data())
	|| (l2tp_static !=  nullptr && l2tp_static->has_data())
	|| (l2tp_static_attributes !=  nullptr && l2tp_static_attributes->has_data())
	|| (mpls_static_labels !=  nullptr && mpls_static_labels->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(pseudowire_address.operation)
	|| is_set(bandwidth.operation)
	|| is_set(class_.operation)
	|| is_set(source_address.operation)
	|| is_set(tag_impose.operation)
	|| (backup_pseudowires !=  nullptr && backup_pseudowires->has_operation())
	|| (l2tp_static !=  nullptr && l2tp_static->has_operation())
	|| (l2tp_static_attributes !=  nullptr && l2tp_static_attributes->has_operation())
	|| (mpls_static_labels !=  nullptr && mpls_static_labels->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-address" <<"[pseudowire-address='" <<pseudowire_address <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireAddress' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_address.is_set || is_set(pseudowire_address.operation)) leaf_name_data.push_back(pseudowire_address.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (class_.is_set || is_set(class_.operation)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tag_impose.is_set || is_set(tag_impose.operation)) leaf_name_data.push_back(tag_impose.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-pseudowires")
    {
        if(backup_pseudowires != nullptr)
        {
            children["backup-pseudowires"] = backup_pseudowires;
        }
        else
        {
            backup_pseudowires = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires>();
            backup_pseudowires->parent = this;
            children["backup-pseudowires"] = backup_pseudowires;
        }
        return children.at("backup-pseudowires");
    }

    if(child_yang_name == "l2tp-static")
    {
        if(l2tp_static != nullptr)
        {
            children["l2tp-static"] = l2tp_static;
        }
        else
        {
            l2tp_static = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic>();
            l2tp_static->parent = this;
            children["l2tp-static"] = l2tp_static;
        }
        return children.at("l2tp-static");
    }

    if(child_yang_name == "l2tp-static-attributes")
    {
        if(l2tp_static_attributes != nullptr)
        {
            children["l2tp-static-attributes"] = l2tp_static_attributes;
        }
        else
        {
            l2tp_static_attributes = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes>();
            l2tp_static_attributes->parent = this;
            children["l2tp-static-attributes"] = l2tp_static_attributes;
        }
        return children.at("l2tp-static-attributes");
    }

    if(child_yang_name == "mpls-static-labels")
    {
        if(mpls_static_labels != nullptr)
        {
            children["mpls-static-labels"] = mpls_static_labels;
        }
        else
        {
            mpls_static_labels = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels>();
            mpls_static_labels->parent = this;
            children["mpls-static-labels"] = mpls_static_labels;
        }
        return children.at("mpls-static-labels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::get_children()
{
    if(children.find("backup-pseudowires") == children.end())
    {
        if(backup_pseudowires != nullptr)
        {
            children["backup-pseudowires"] = backup_pseudowires;
        }
    }

    if(children.find("l2tp-static") == children.end())
    {
        if(l2tp_static != nullptr)
        {
            children["l2tp-static"] = l2tp_static;
        }
    }

    if(children.find("l2tp-static-attributes") == children.end())
    {
        if(l2tp_static_attributes != nullptr)
        {
            children["l2tp-static-attributes"] = l2tp_static_attributes;
        }
    }

    if(children.find("mpls-static-labels") == children.end())
    {
        if(mpls_static_labels != nullptr)
        {
            children["mpls-static-labels"] = mpls_static_labels;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pseudowire-address")
    {
        pseudowire_address = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "class")
    {
        class_ = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tag-impose")
    {
        tag_impose = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::MplsStaticLabels()
    :
    local_static_label{YType::uint32, "local-static-label"},
    remote_static_label{YType::uint32, "remote-static-label"}
{
    yang_name = "mpls-static-labels"; yang_parent_name = "pseudowire-address";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::~MplsStaticLabels()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::has_data() const
{
    return local_static_label.is_set
	|| remote_static_label.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::has_operation() const
{
    return is_set(operation)
	|| is_set(local_static_label.operation)
	|| is_set(remote_static_label.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-static-labels";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsStaticLabels' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_static_label.is_set || is_set(local_static_label.operation)) leaf_name_data.push_back(local_static_label.get_name_leafdata());
    if (remote_static_label.is_set || is_set(remote_static_label.operation)) leaf_name_data.push_back(remote_static_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::MplsStaticLabels::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-static-label")
    {
        local_static_label = value;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowires()
{
    yang_name = "backup-pseudowires"; yang_parent_name = "pseudowire-address";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::~BackupPseudowires()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::has_data() const
{
    for (std::size_t index=0; index<backup_pseudowire.size(); index++)
    {
        if(backup_pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::has_operation() const
{
    for (std::size_t index=0; index<backup_pseudowire.size(); index++)
    {
        if(backup_pseudowire[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudowires";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupPseudowires' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-pseudowire")
    {
        for(auto const & c : backup_pseudowire)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire>();
        c->parent = this;
        backup_pseudowire.push_back(std::move(c));
        children[segment_path] = backup_pseudowire.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::get_children()
{
    for (auto const & c : backup_pseudowire)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupPseudowire()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    backup_pw_class{YType::str, "backup-pw-class"}
    	,
    backup_mpls_static_labels(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels>())
{
    backup_mpls_static_labels->parent = this;
    children["backup-mpls-static-labels"] = backup_mpls_static_labels;

    yang_name = "backup-pseudowire"; yang_parent_name = "backup-pseudowires";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::~BackupPseudowire()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::has_data() const
{
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| backup_pw_class.is_set
	|| (backup_mpls_static_labels !=  nullptr && backup_mpls_static_labels->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor.operation)
	|| is_set(pseudowire_id.operation)
	|| is_set(backup_pw_class.operation)
	|| (backup_mpls_static_labels !=  nullptr && backup_mpls_static_labels->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-pseudowire" <<"[neighbor='" <<neighbor <<"']" <<"[pseudowire-id='" <<pseudowire_id <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupPseudowire' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.operation)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (backup_pw_class.is_set || is_set(backup_pw_class.operation)) leaf_name_data.push_back(backup_pw_class.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-mpls-static-labels")
    {
        if(backup_mpls_static_labels != nullptr)
        {
            children["backup-mpls-static-labels"] = backup_mpls_static_labels;
        }
        else
        {
            backup_mpls_static_labels = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels>();
            backup_mpls_static_labels->parent = this;
            children["backup-mpls-static-labels"] = backup_mpls_static_labels;
        }
        return children.at("backup-mpls-static-labels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::get_children()
{
    if(children.find("backup-mpls-static-labels") == children.end())
    {
        if(backup_mpls_static_labels != nullptr)
        {
            children["backup-mpls-static-labels"] = backup_mpls_static_labels;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
    }
    if(value_path == "backup-pw-class")
    {
        backup_pw_class = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::BackupMplsStaticLabels()
    :
    local_static_label{YType::uint32, "local-static-label"},
    remote_static_label{YType::uint32, "remote-static-label"}
{
    yang_name = "backup-mpls-static-labels"; yang_parent_name = "backup-pseudowire";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::~BackupMplsStaticLabels()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::has_data() const
{
    return local_static_label.is_set
	|| remote_static_label.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::has_operation() const
{
    return is_set(operation)
	|| is_set(local_static_label.operation)
	|| is_set(remote_static_label.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-mpls-static-labels";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupMplsStaticLabels' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_static_label.is_set || is_set(local_static_label.operation)) leaf_name_data.push_back(local_static_label.get_name_leafdata());
    if (remote_static_label.is_set || is_set(remote_static_label.operation)) leaf_name_data.push_back(remote_static_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::BackupPseudowires::BackupPseudowire::BackupMplsStaticLabels::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-static-label")
    {
        local_static_label = value;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpStaticAttributes()
    :
    l2tp_local_session_id{YType::uint32, "l2tp-local-session-id"},
    l2tp_remote_session_id{YType::uint32, "l2tp-remote-session-id"}
    	,
    l2tp_local_cookie(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie>())
	,l2tp_remote_cookie(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie>())
	,l2tp_secondary_local_cookie(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie>())
{
    l2tp_local_cookie->parent = this;
    children["l2tp-local-cookie"] = l2tp_local_cookie;

    l2tp_remote_cookie->parent = this;
    children["l2tp-remote-cookie"] = l2tp_remote_cookie;

    l2tp_secondary_local_cookie->parent = this;
    children["l2tp-secondary-local-cookie"] = l2tp_secondary_local_cookie;

    yang_name = "l2tp-static-attributes"; yang_parent_name = "pseudowire-address";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::~L2TpStaticAttributes()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::has_data() const
{
    return l2tp_local_session_id.is_set
	|| l2tp_remote_session_id.is_set
	|| (l2tp_local_cookie !=  nullptr && l2tp_local_cookie->has_data())
	|| (l2tp_remote_cookie !=  nullptr && l2tp_remote_cookie->has_data())
	|| (l2tp_secondary_local_cookie !=  nullptr && l2tp_secondary_local_cookie->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(l2tp_local_session_id.operation)
	|| is_set(l2tp_remote_session_id.operation)
	|| (l2tp_local_cookie !=  nullptr && l2tp_local_cookie->has_operation())
	|| (l2tp_remote_cookie !=  nullptr && l2tp_remote_cookie->has_operation())
	|| (l2tp_secondary_local_cookie !=  nullptr && l2tp_secondary_local_cookie->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-static-attributes";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2TpStaticAttributes' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2tp_local_session_id.is_set || is_set(l2tp_local_session_id.operation)) leaf_name_data.push_back(l2tp_local_session_id.get_name_leafdata());
    if (l2tp_remote_session_id.is_set || is_set(l2tp_remote_session_id.operation)) leaf_name_data.push_back(l2tp_remote_session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "l2tp-local-cookie")
    {
        if(l2tp_local_cookie != nullptr)
        {
            children["l2tp-local-cookie"] = l2tp_local_cookie;
        }
        else
        {
            l2tp_local_cookie = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie>();
            l2tp_local_cookie->parent = this;
            children["l2tp-local-cookie"] = l2tp_local_cookie;
        }
        return children.at("l2tp-local-cookie");
    }

    if(child_yang_name == "l2tp-remote-cookie")
    {
        if(l2tp_remote_cookie != nullptr)
        {
            children["l2tp-remote-cookie"] = l2tp_remote_cookie;
        }
        else
        {
            l2tp_remote_cookie = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie>();
            l2tp_remote_cookie->parent = this;
            children["l2tp-remote-cookie"] = l2tp_remote_cookie;
        }
        return children.at("l2tp-remote-cookie");
    }

    if(child_yang_name == "l2tp-secondary-local-cookie")
    {
        if(l2tp_secondary_local_cookie != nullptr)
        {
            children["l2tp-secondary-local-cookie"] = l2tp_secondary_local_cookie;
        }
        else
        {
            l2tp_secondary_local_cookie = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie>();
            l2tp_secondary_local_cookie->parent = this;
            children["l2tp-secondary-local-cookie"] = l2tp_secondary_local_cookie;
        }
        return children.at("l2tp-secondary-local-cookie");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::get_children()
{
    if(children.find("l2tp-local-cookie") == children.end())
    {
        if(l2tp_local_cookie != nullptr)
        {
            children["l2tp-local-cookie"] = l2tp_local_cookie;
        }
    }

    if(children.find("l2tp-remote-cookie") == children.end())
    {
        if(l2tp_remote_cookie != nullptr)
        {
            children["l2tp-remote-cookie"] = l2tp_remote_cookie;
        }
    }

    if(children.find("l2tp-secondary-local-cookie") == children.end())
    {
        if(l2tp_secondary_local_cookie != nullptr)
        {
            children["l2tp-secondary-local-cookie"] = l2tp_secondary_local_cookie;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2tp-local-session-id")
    {
        l2tp_local_session_id = value;
    }
    if(value_path == "l2tp-remote-session-id")
    {
        l2tp_remote_session_id = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie::L2TpRemoteCookie()
    :
    higher_value{YType::uint32, "higher-value"},
    lower_value{YType::uint32, "lower-value"},
    size{YType::enumeration, "size"}
{
    yang_name = "l2tp-remote-cookie"; yang_parent_name = "l2tp-static-attributes";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie::~L2TpRemoteCookie()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie::has_data() const
{
    return higher_value.is_set
	|| lower_value.is_set
	|| size.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie::has_operation() const
{
    return is_set(operation)
	|| is_set(higher_value.operation)
	|| is_set(lower_value.operation)
	|| is_set(size.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-remote-cookie";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2TpRemoteCookie' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (higher_value.is_set || is_set(higher_value.operation)) leaf_name_data.push_back(higher_value.get_name_leafdata());
    if (lower_value.is_set || is_set(lower_value.operation)) leaf_name_data.push_back(lower_value.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpRemoteCookie::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "higher-value")
    {
        higher_value = value;
    }
    if(value_path == "lower-value")
    {
        lower_value = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie::L2TpSecondaryLocalCookie()
    :
    higher_value{YType::uint32, "higher-value"},
    lower_value{YType::uint32, "lower-value"},
    size{YType::enumeration, "size"}
{
    yang_name = "l2tp-secondary-local-cookie"; yang_parent_name = "l2tp-static-attributes";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie::~L2TpSecondaryLocalCookie()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie::has_data() const
{
    return higher_value.is_set
	|| lower_value.is_set
	|| size.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie::has_operation() const
{
    return is_set(operation)
	|| is_set(higher_value.operation)
	|| is_set(lower_value.operation)
	|| is_set(size.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-secondary-local-cookie";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2TpSecondaryLocalCookie' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (higher_value.is_set || is_set(higher_value.operation)) leaf_name_data.push_back(higher_value.get_name_leafdata());
    if (lower_value.is_set || is_set(lower_value.operation)) leaf_name_data.push_back(lower_value.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpSecondaryLocalCookie::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "higher-value")
    {
        higher_value = value;
    }
    if(value_path == "lower-value")
    {
        lower_value = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie::L2TpLocalCookie()
    :
    higher_value{YType::uint32, "higher-value"},
    lower_value{YType::uint32, "lower-value"},
    size{YType::enumeration, "size"}
{
    yang_name = "l2tp-local-cookie"; yang_parent_name = "l2tp-static-attributes";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie::~L2TpLocalCookie()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie::has_data() const
{
    return higher_value.is_set
	|| lower_value.is_set
	|| size.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie::has_operation() const
{
    return is_set(operation)
	|| is_set(higher_value.operation)
	|| is_set(lower_value.operation)
	|| is_set(size.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-local-cookie";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2TpLocalCookie' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (higher_value.is_set || is_set(higher_value.operation)) leaf_name_data.push_back(higher_value.get_name_leafdata());
    if (lower_value.is_set || is_set(lower_value.operation)) leaf_name_data.push_back(lower_value.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStaticAttributes::L2TpLocalCookie::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "higher-value")
    {
        higher_value = value;
    }
    if(value_path == "lower-value")
    {
        lower_value = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic::L2TpStatic()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "l2tp-static"; yang_parent_name = "pseudowire-address";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic::~L2TpStatic()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic::has_data() const
{
    return enable.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-static";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2TpStatic' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::Pseudowires::Pseudowire::PseudowireAddress::L2TpStatic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSessions()
{
    yang_name = "monitor-sessions"; yang_parent_name = "p2p-xconnect";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::~MonitorSessions()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::has_data() const
{
    for (std::size_t index=0; index<monitor_session.size(); index++)
    {
        if(monitor_session[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::has_operation() const
{
    for (std::size_t index=0; index<monitor_session.size(); index++)
    {
        if(monitor_session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-sessions";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MonitorSessions' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "monitor-session")
    {
        for(auto const & c : monitor_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession>();
        c->parent = this;
        monitor_session.push_back(std::move(c));
        children[segment_path] = monitor_session.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::get_children()
{
    for (auto const & c : monitor_session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession::MonitorSession()
    :
    name{YType::str, "name"},
    enable{YType::empty, "enable"}
{
    yang_name = "monitor-session"; yang_parent_name = "monitor-sessions";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession::~MonitorSession()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession::has_data() const
{
    return name.is_set
	|| enable.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(enable.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor-session" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MonitorSession' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::MonitorSessions::MonitorSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouteds()
{
    yang_name = "pseudowire-routeds"; yang_parent_name = "p2p-xconnect";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::~PseudowireRouteds()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::has_data() const
{
    for (std::size_t index=0; index<pseudowire_routed.size(); index++)
    {
        if(pseudowire_routed[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::has_operation() const
{
    for (std::size_t index=0; index<pseudowire_routed.size(); index++)
    {
        if(pseudowire_routed[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-routeds";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireRouteds' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pseudowire-routed")
    {
        for(auto const & c : pseudowire_routed)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted>();
        c->parent = this;
        pseudowire_routed.push_back(std::move(c));
        children[segment_path] = pseudowire_routed.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::get_children()
{
    for (auto const & c : pseudowire_routed)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted::PseudowireRouted()
    :
    acid{YType::uint32, "acid"},
    global_id{YType::uint32, "global-id"},
    prefix{YType::str, "prefix"},
    sacid{YType::uint32, "sacid"},
    class_{YType::str, "class"},
    tag_impose{YType::uint32, "tag-impose"}
{
    yang_name = "pseudowire-routed"; yang_parent_name = "pseudowire-routeds";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted::~PseudowireRouted()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted::has_data() const
{
    return acid.is_set
	|| global_id.is_set
	|| prefix.is_set
	|| sacid.is_set
	|| class_.is_set
	|| tag_impose.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted::has_operation() const
{
    return is_set(operation)
	|| is_set(acid.operation)
	|| is_set(global_id.operation)
	|| is_set(prefix.operation)
	|| is_set(sacid.operation)
	|| is_set(class_.operation)
	|| is_set(tag_impose.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-routed" <<"[acid='" <<acid <<"']" <<"[global-id='" <<global_id <<"']" <<"[prefix='" <<prefix <<"']" <<"[sacid='" <<sacid <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireRouted' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acid.is_set || is_set(acid.operation)) leaf_name_data.push_back(acid.get_name_leafdata());
    if (global_id.is_set || is_set(global_id.operation)) leaf_name_data.push_back(global_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (sacid.is_set || is_set(sacid.operation)) leaf_name_data.push_back(sacid.get_name_leafdata());
    if (class_.is_set || is_set(class_.operation)) leaf_name_data.push_back(class_.get_name_leafdata());
    if (tag_impose.is_set || is_set(tag_impose.operation)) leaf_name_data.push_back(tag_impose.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::PseudowireRouteds::PseudowireRouted::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acid")
    {
        acid = value;
    }
    if(value_path == "global-id")
    {
        global_id = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "sacid")
    {
        sacid = value;
    }
    if(value_path == "class")
    {
        class_ = value;
    }
    if(value_path == "tag-impose")
    {
        tag_impose = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuits()
{
    yang_name = "attachment-circuits"; yang_parent_name = "p2p-xconnect";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::~AttachmentCircuits()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::has_data() const
{
    for (std::size_t index=0; index<attachment_circuit.size(); index++)
    {
        if(attachment_circuit[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::has_operation() const
{
    for (std::size_t index=0; index<attachment_circuit.size(); index++)
    {
        if(attachment_circuit[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment-circuits";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttachmentCircuits' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attachment-circuit")
    {
        for(auto const & c : attachment_circuit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit>();
        c->parent = this;
        attachment_circuit.push_back(std::move(c));
        children[segment_path] = attachment_circuit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::get_children()
{
    for (auto const & c : attachment_circuit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit::AttachmentCircuit()
    :
    name{YType::str, "name"},
    enable{YType::empty, "enable"}
{
    yang_name = "attachment-circuit"; yang_parent_name = "attachment-circuits";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit::~AttachmentCircuit()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit::has_data() const
{
    return name.is_set
	|| enable.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(enable.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment-circuit" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttachmentCircuit' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::P2PXconnects::P2PXconnect::AttachmentCircuits::AttachmentCircuit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnects()
{
    yang_name = "mp2mp-xconnects"; yang_parent_name = "xconnect-group";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::~Mp2MpXconnects()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::has_data() const
{
    for (std::size_t index=0; index<mp2mp_xconnect.size(); index++)
    {
        if(mp2mp_xconnect[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::has_operation() const
{
    for (std::size_t index=0; index<mp2mp_xconnect.size(); index++)
    {
        if(mp2mp_xconnect[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-xconnects";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mp2MpXconnects' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mp2mp-xconnect")
    {
        for(auto const & c : mp2mp_xconnect)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect>();
        c->parent = this;
        mp2mp_xconnect.push_back(std::move(c));
        children[segment_path] = mp2mp_xconnect.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::get_children()
{
    for (auto const & c : mp2mp_xconnect)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpXconnect()
    :
    name{YType::str, "name"},
    mp2mp_control_word{YType::empty, "mp2mp-control-word"},
    mp2mp_interworking{YType::enumeration, "mp2mp-interworking"},
    mp2mp_shutdown{YType::empty, "mp2mp-shutdown"},
    mp2mpl2_encapsulation{YType::enumeration, "mp2mpl2-encapsulation"},
    mp2mpmtu{YType::uint32, "mp2mpmtu"},
    mp2mpvpn_id{YType::uint32, "mp2mpvpn-id"}
    	,
    mp2mp_auto_discovery(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery>())
{
    mp2mp_auto_discovery->parent = this;
    children["mp2mp-auto-discovery"] = mp2mp_auto_discovery;

    yang_name = "mp2mp-xconnect"; yang_parent_name = "mp2mp-xconnects";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::~Mp2MpXconnect()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::has_data() const
{
    return name.is_set
	|| mp2mp_control_word.is_set
	|| mp2mp_interworking.is_set
	|| mp2mp_shutdown.is_set
	|| mp2mpl2_encapsulation.is_set
	|| mp2mpmtu.is_set
	|| mp2mpvpn_id.is_set
	|| (mp2mp_auto_discovery !=  nullptr && mp2mp_auto_discovery->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(mp2mp_control_word.operation)
	|| is_set(mp2mp_interworking.operation)
	|| is_set(mp2mp_shutdown.operation)
	|| is_set(mp2mpl2_encapsulation.operation)
	|| is_set(mp2mpmtu.operation)
	|| is_set(mp2mpvpn_id.operation)
	|| (mp2mp_auto_discovery !=  nullptr && mp2mp_auto_discovery->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-xconnect" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mp2MpXconnect' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mp2mp_control_word.is_set || is_set(mp2mp_control_word.operation)) leaf_name_data.push_back(mp2mp_control_word.get_name_leafdata());
    if (mp2mp_interworking.is_set || is_set(mp2mp_interworking.operation)) leaf_name_data.push_back(mp2mp_interworking.get_name_leafdata());
    if (mp2mp_shutdown.is_set || is_set(mp2mp_shutdown.operation)) leaf_name_data.push_back(mp2mp_shutdown.get_name_leafdata());
    if (mp2mpl2_encapsulation.is_set || is_set(mp2mpl2_encapsulation.operation)) leaf_name_data.push_back(mp2mpl2_encapsulation.get_name_leafdata());
    if (mp2mpmtu.is_set || is_set(mp2mpmtu.operation)) leaf_name_data.push_back(mp2mpmtu.get_name_leafdata());
    if (mp2mpvpn_id.is_set || is_set(mp2mpvpn_id.operation)) leaf_name_data.push_back(mp2mpvpn_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mp2mp-auto-discovery")
    {
        if(mp2mp_auto_discovery != nullptr)
        {
            children["mp2mp-auto-discovery"] = mp2mp_auto_discovery;
        }
        else
        {
            mp2mp_auto_discovery = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery>();
            mp2mp_auto_discovery->parent = this;
            children["mp2mp-auto-discovery"] = mp2mp_auto_discovery;
        }
        return children.at("mp2mp-auto-discovery");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::get_children()
{
    if(children.find("mp2mp-auto-discovery") == children.end())
    {
        if(mp2mp_auto_discovery != nullptr)
        {
            children["mp2mp-auto-discovery"] = mp2mp_auto_discovery;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "mp2mp-control-word")
    {
        mp2mp_control_word = value;
    }
    if(value_path == "mp2mp-interworking")
    {
        mp2mp_interworking = value;
    }
    if(value_path == "mp2mp-shutdown")
    {
        mp2mp_shutdown = value;
    }
    if(value_path == "mp2mpl2-encapsulation")
    {
        mp2mpl2_encapsulation = value;
    }
    if(value_path == "mp2mpmtu")
    {
        mp2mpmtu = value;
    }
    if(value_path == "mp2mpvpn-id")
    {
        mp2mpvpn_id = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpAutoDiscovery()
    :
    enable{YType::empty, "enable"}
    	,
    mp2mp_route_policy(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy>())
	,mp2mp_route_targets(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets>())
	,mp2mp_signaling_protocol(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol>())
	,route_distinguisher(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher>())
{
    mp2mp_route_policy->parent = this;
    children["mp2mp-route-policy"] = mp2mp_route_policy;

    mp2mp_route_targets->parent = this;
    children["mp2mp-route-targets"] = mp2mp_route_targets;

    mp2mp_signaling_protocol->parent = this;
    children["mp2mp-signaling-protocol"] = mp2mp_signaling_protocol;

    route_distinguisher->parent = this;
    children["route-distinguisher"] = route_distinguisher;

    yang_name = "mp2mp-auto-discovery"; yang_parent_name = "mp2mp-xconnect";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::~Mp2MpAutoDiscovery()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::has_data() const
{
    return enable.is_set
	|| (mp2mp_route_policy !=  nullptr && mp2mp_route_policy->has_data())
	|| (mp2mp_route_targets !=  nullptr && mp2mp_route_targets->has_data())
	|| (mp2mp_signaling_protocol !=  nullptr && mp2mp_signaling_protocol->has_data())
	|| (route_distinguisher !=  nullptr && route_distinguisher->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (mp2mp_route_policy !=  nullptr && mp2mp_route_policy->has_operation())
	|| (mp2mp_route_targets !=  nullptr && mp2mp_route_targets->has_operation())
	|| (mp2mp_signaling_protocol !=  nullptr && mp2mp_signaling_protocol->has_operation())
	|| (route_distinguisher !=  nullptr && route_distinguisher->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-auto-discovery";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mp2MpAutoDiscovery' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mp2mp-route-policy")
    {
        if(mp2mp_route_policy != nullptr)
        {
            children["mp2mp-route-policy"] = mp2mp_route_policy;
        }
        else
        {
            mp2mp_route_policy = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy>();
            mp2mp_route_policy->parent = this;
            children["mp2mp-route-policy"] = mp2mp_route_policy;
        }
        return children.at("mp2mp-route-policy");
    }

    if(child_yang_name == "mp2mp-route-targets")
    {
        if(mp2mp_route_targets != nullptr)
        {
            children["mp2mp-route-targets"] = mp2mp_route_targets;
        }
        else
        {
            mp2mp_route_targets = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets>();
            mp2mp_route_targets->parent = this;
            children["mp2mp-route-targets"] = mp2mp_route_targets;
        }
        return children.at("mp2mp-route-targets");
    }

    if(child_yang_name == "mp2mp-signaling-protocol")
    {
        if(mp2mp_signaling_protocol != nullptr)
        {
            children["mp2mp-signaling-protocol"] = mp2mp_signaling_protocol;
        }
        else
        {
            mp2mp_signaling_protocol = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol>();
            mp2mp_signaling_protocol->parent = this;
            children["mp2mp-signaling-protocol"] = mp2mp_signaling_protocol;
        }
        return children.at("mp2mp-signaling-protocol");
    }

    if(child_yang_name == "route-distinguisher")
    {
        if(route_distinguisher != nullptr)
        {
            children["route-distinguisher"] = route_distinguisher;
        }
        else
        {
            route_distinguisher = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher>();
            route_distinguisher->parent = this;
            children["route-distinguisher"] = route_distinguisher;
        }
        return children.at("route-distinguisher");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::get_children()
{
    if(children.find("mp2mp-route-policy") == children.end())
    {
        if(mp2mp_route_policy != nullptr)
        {
            children["mp2mp-route-policy"] = mp2mp_route_policy;
        }
    }

    if(children.find("mp2mp-route-targets") == children.end())
    {
        if(mp2mp_route_targets != nullptr)
        {
            children["mp2mp-route-targets"] = mp2mp_route_targets;
        }
    }

    if(children.find("mp2mp-signaling-protocol") == children.end())
    {
        if(mp2mp_signaling_protocol != nullptr)
        {
            children["mp2mp-signaling-protocol"] = mp2mp_signaling_protocol;
        }
    }

    if(children.find("route-distinguisher") == children.end())
    {
        if(route_distinguisher != nullptr)
        {
            children["route-distinguisher"] = route_distinguisher;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher::RouteDistinguisher()
    :
    addr_index{YType::uint32, "addr-index"},
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    type{YType::enumeration, "type"}
{
    yang_name = "route-distinguisher"; yang_parent_name = "mp2mp-auto-discovery";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher::~RouteDistinguisher()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher::has_data() const
{
    return addr_index.is_set
	|| address.is_set
	|| as.is_set
	|| as_index.is_set
	|| type.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher::has_operation() const
{
    return is_set(operation)
	|| is_set(addr_index.operation)
	|| is_set(address.operation)
	|| is_set(as.operation)
	|| is_set(as_index.operation)
	|| is_set(type.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-distinguisher";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteDistinguisher' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_index.is_set || is_set(addr_index.operation)) leaf_name_data.push_back(addr_index.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.operation)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::RouteDistinguisher::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr-index")
    {
        addr_index = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "as-index")
    {
        as_index = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy::Mp2MpRoutePolicy()
    :
    export_{YType::str, "export"}
{
    yang_name = "mp2mp-route-policy"; yang_parent_name = "mp2mp-auto-discovery";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy::~Mp2MpRoutePolicy()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy::has_data() const
{
    return export_.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(export_.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-route-policy";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mp2MpRoutePolicy' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (export_.is_set || is_set(export_.operation)) leaf_name_data.push_back(export_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRoutePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "export")
    {
        export_ = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTargets()
{
    yang_name = "mp2mp-route-targets"; yang_parent_name = "mp2mp-auto-discovery";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::~Mp2MpRouteTargets()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::has_data() const
{
    for (std::size_t index=0; index<mp2mp_route_target.size(); index++)
    {
        if(mp2mp_route_target[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::has_operation() const
{
    for (std::size_t index=0; index<mp2mp_route_target.size(); index++)
    {
        if(mp2mp_route_target[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-route-targets";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mp2MpRouteTargets' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mp2mp-route-target")
    {
        for(auto const & c : mp2mp_route_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget>();
        c->parent = this;
        mp2mp_route_target.push_back(std::move(c));
        children[segment_path] = mp2mp_route_target.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::get_children()
{
    for (auto const & c : mp2mp_route_target)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Mp2MpRouteTarget()
    :
    format{YType::enumeration, "format"},
    role{YType::enumeration, "role"}
{
    yang_name = "mp2mp-route-target"; yang_parent_name = "mp2mp-route-targets";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::~Mp2MpRouteTarget()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::has_data() const
{
    for (std::size_t index=0; index<ipv4_address.size(); index++)
    {
        if(ipv4_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<two_byte_as_or_four_byte_as.size(); index++)
    {
        if(two_byte_as_or_four_byte_as[index]->has_data())
            return true;
    }
    return format.is_set
	|| role.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::has_operation() const
{
    for (std::size_t index=0; index<ipv4_address.size(); index++)
    {
        if(ipv4_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<two_byte_as_or_four_byte_as.size(); index++)
    {
        if(two_byte_as_or_four_byte_as[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(format.operation)
	|| is_set(role.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-route-target" <<"[format='" <<format <<"']" <<"[role='" <<role <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mp2MpRouteTarget' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-address")
    {
        for(auto const & c : ipv4_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address>();
        c->parent = this;
        ipv4_address.push_back(std::move(c));
        children[segment_path] = ipv4_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "two-byte-as-or-four-byte-as")
    {
        for(auto const & c : two_byte_as_or_four_byte_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs>();
        c->parent = this;
        two_byte_as_or_four_byte_as.push_back(std::move(c));
        children[segment_path] = two_byte_as_or_four_byte_as.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::get_children()
{
    for (auto const & c : ipv4_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : two_byte_as_or_four_byte_as)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs::TwoByteAsOrFourByteAs()
    :
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"}
{
    yang_name = "two-byte-as-or-four-byte-as"; yang_parent_name = "mp2mp-route-target";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs::~TwoByteAsOrFourByteAs()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs::has_data() const
{
    return as.is_set
	|| as_index.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(as.operation)
	|| is_set(as_index.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as-or-four-byte-as" <<"[as='" <<as <<"']" <<"[as-index='" <<as_index <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAsOrFourByteAs' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.operation)) leaf_name_data.push_back(as_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::TwoByteAsOrFourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "as-index")
    {
        as_index = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address::Ipv4Address()
    :
    addr_index{YType::uint32, "addr-index"},
    address{YType::str, "address"}
{
    yang_name = "ipv4-address"; yang_parent_name = "mp2mp-route-target";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address::~Ipv4Address()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address::has_data() const
{
    return addr_index.is_set
	|| address.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address::has_operation() const
{
    return is_set(operation)
	|| is_set(addr_index.operation)
	|| is_set(address.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address" <<"[addr-index='" <<addr_index <<"']" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Address' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_index.is_set || is_set(addr_index.operation)) leaf_name_data.push_back(addr_index.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpRouteTargets::Mp2MpRouteTarget::Ipv4Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr-index")
    {
        addr_index = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Mp2MpSignalingProtocol()
    :
    ce_range{YType::uint32, "ce-range"},
    enable{YType::empty, "enable"}
    	,
    ceids(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids>())
	,flow_label_load_balance(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance>())
{
    ceids->parent = this;
    children["ceids"] = ceids;

    flow_label_load_balance->parent = this;
    children["flow-label-load-balance"] = flow_label_load_balance;

    yang_name = "mp2mp-signaling-protocol"; yang_parent_name = "mp2mp-auto-discovery";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::~Mp2MpSignalingProtocol()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::has_data() const
{
    return ce_range.is_set
	|| enable.is_set
	|| (ceids !=  nullptr && ceids->has_data())
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::has_operation() const
{
    return is_set(operation)
	|| is_set(ce_range.operation)
	|| is_set(enable.operation)
	|| (ceids !=  nullptr && ceids->has_operation())
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp2mp-signaling-protocol";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mp2MpSignalingProtocol' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ce_range.is_set || is_set(ce_range.operation)) leaf_name_data.push_back(ce_range.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ceids")
    {
        if(ceids != nullptr)
        {
            children["ceids"] = ceids;
        }
        else
        {
            ceids = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids>();
            ceids->parent = this;
            children["ceids"] = ceids;
        }
        return children.at("ceids");
    }

    if(child_yang_name == "flow-label-load-balance")
    {
        if(flow_label_load_balance != nullptr)
        {
            children["flow-label-load-balance"] = flow_label_load_balance;
        }
        else
        {
            flow_label_load_balance = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance>();
            flow_label_load_balance->parent = this;
            children["flow-label-load-balance"] = flow_label_load_balance;
        }
        return children.at("flow-label-load-balance");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::get_children()
{
    if(children.find("ceids") == children.end())
    {
        if(ceids != nullptr)
        {
            children["ceids"] = ceids;
        }
    }

    if(children.find("flow-label-load-balance") == children.end())
    {
        if(flow_label_load_balance != nullptr)
        {
            children["flow-label-load-balance"] = flow_label_load_balance;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ce-range")
    {
        ce_range = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance::FlowLabelLoadBalance()
    :
    flow_label{YType::enumeration, "flow-label"},
    static_{YType::empty, "static"}
{
    yang_name = "flow-label-load-balance"; yang_parent_name = "mp2mp-signaling-protocol";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance::~FlowLabelLoadBalance()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance::has_data() const
{
    return flow_label.is_set
	|| static_.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_label.operation)
	|| is_set(static_.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-label-load-balance";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowLabelLoadBalance' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_label.is_set || is_set(flow_label.operation)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::FlowLabelLoadBalance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-label")
    {
        flow_label = value;
    }
    if(value_path == "static")
    {
        static_ = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceids()
{
    yang_name = "ceids"; yang_parent_name = "mp2mp-signaling-protocol";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::~Ceids()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::has_data() const
{
    for (std::size_t index=0; index<ceid.size(); index++)
    {
        if(ceid[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::has_operation() const
{
    for (std::size_t index=0; index<ceid.size(); index++)
    {
        if(ceid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceids";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ceids' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ceid")
    {
        for(auto const & c : ceid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid>();
        c->parent = this;
        ceid.push_back(std::move(c));
        children[segment_path] = ceid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::get_children()
{
    for (auto const & c : ceid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::Ceid()
    :
    ce_id{YType::uint32, "ce-id"}
    	,
    remote_ceid_attachment_circuits(std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits>())
{
    remote_ceid_attachment_circuits->parent = this;
    children["remote-ceid-attachment-circuits"] = remote_ceid_attachment_circuits;

    yang_name = "ceid"; yang_parent_name = "ceids";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::~Ceid()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::has_data() const
{
    return ce_id.is_set
	|| (remote_ceid_attachment_circuits !=  nullptr && remote_ceid_attachment_circuits->has_data());
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::has_operation() const
{
    return is_set(operation)
	|| is_set(ce_id.operation)
	|| (remote_ceid_attachment_circuits !=  nullptr && remote_ceid_attachment_circuits->has_operation());
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ceid" <<"[ce-id='" <<ce_id <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ceid' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ce_id.is_set || is_set(ce_id.operation)) leaf_name_data.push_back(ce_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-ceid-attachment-circuits")
    {
        if(remote_ceid_attachment_circuits != nullptr)
        {
            children["remote-ceid-attachment-circuits"] = remote_ceid_attachment_circuits;
        }
        else
        {
            remote_ceid_attachment_circuits = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits>();
            remote_ceid_attachment_circuits->parent = this;
            children["remote-ceid-attachment-circuits"] = remote_ceid_attachment_circuits;
        }
        return children.at("remote-ceid-attachment-circuits");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::get_children()
{
    if(children.find("remote-ceid-attachment-circuits") == children.end())
    {
        if(remote_ceid_attachment_circuits != nullptr)
        {
            children["remote-ceid-attachment-circuits"] = remote_ceid_attachment_circuits;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ce-id")
    {
        ce_id = value;
    }
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuits()
{
    yang_name = "remote-ceid-attachment-circuits"; yang_parent_name = "ceid";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::~RemoteCeidAttachmentCircuits()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::has_data() const
{
    for (std::size_t index=0; index<remote_ceid_attachment_circuit.size(); index++)
    {
        if(remote_ceid_attachment_circuit[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::has_operation() const
{
    for (std::size_t index=0; index<remote_ceid_attachment_circuit.size(); index++)
    {
        if(remote_ceid_attachment_circuit[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ceid-attachment-circuits";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteCeidAttachmentCircuits' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-ceid-attachment-circuit")
    {
        for(auto const & c : remote_ceid_attachment_circuit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit>();
        c->parent = this;
        remote_ceid_attachment_circuit.push_back(std::move(c));
        children[segment_path] = remote_ceid_attachment_circuit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::get_children()
{
    for (auto const & c : remote_ceid_attachment_circuit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::RemoteCeidAttachmentCircuit()
    :
    name{YType::str, "name"},
    remote_ce_id{YType::uint32, "remote-ce-id"}
{
    yang_name = "remote-ceid-attachment-circuit"; yang_parent_name = "remote-ceid-attachment-circuits";
}

L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::~RemoteCeidAttachmentCircuit()
{
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::has_data() const
{
    return name.is_set
	|| remote_ce_id.is_set;
}

bool L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(remote_ce_id.operation);
}

std::string L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-ceid-attachment-circuit" <<"[name='" <<name <<"']" <<"[remote-ce-id='" <<remote_ce_id <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteCeidAttachmentCircuit' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (remote_ce_id.is_set || is_set(remote_ce_id.operation)) leaf_name_data.push_back(remote_ce_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::get_children()
{
    return children;
}

void L2Vpn::Database::XconnectGroups::XconnectGroup::Mp2MpXconnects::Mp2MpXconnect::Mp2MpAutoDiscovery::Mp2MpSignalingProtocol::Ceids::Ceid::RemoteCeidAttachmentCircuits::RemoteCeidAttachmentCircuit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "remote-ce-id")
    {
        remote_ce_id = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroups()
{
    yang_name = "bridge-domain-groups"; yang_parent_name = "database";
}

L2Vpn::Database::BridgeDomainGroups::~BridgeDomainGroups()
{
}

bool L2Vpn::Database::BridgeDomainGroups::has_data() const
{
    for (std::size_t index=0; index<bridge_domain_group.size(); index++)
    {
        if(bridge_domain_group[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::has_operation() const
{
    for (std::size_t index=0; index<bridge_domain_group.size(); index++)
    {
        if(bridge_domain_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-groups";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bridge-domain-group")
    {
        for(auto const & c : bridge_domain_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup>();
        c->parent = this;
        bridge_domain_group.push_back(std::move(c));
        children[segment_path] = bridge_domain_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::get_children()
{
    for (auto const & c : bridge_domain_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomainGroup()
    :
    name{YType::str, "name"}
    	,
    bridge_domains(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains>())
{
    bridge_domains->parent = this;
    children["bridge-domains"] = bridge_domains;

    yang_name = "bridge-domain-group"; yang_parent_name = "bridge-domain-groups";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::~BridgeDomainGroup()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::has_data() const
{
    return name.is_set
	|| (bridge_domains !=  nullptr && bridge_domains->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (bridge_domains !=  nullptr && bridge_domains->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-group" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/bridge-domain-groups/" << get_segment_path();
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

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bridge-domains")
    {
        if(bridge_domains != nullptr)
        {
            children["bridge-domains"] = bridge_domains;
        }
        else
        {
            bridge_domains = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains>();
            bridge_domains->parent = this;
            children["bridge-domains"] = bridge_domains;
        }
        return children.at("bridge-domains");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::get_children()
{
    if(children.find("bridge-domains") == children.end())
    {
        if(bridge_domains != nullptr)
        {
            children["bridge-domains"] = bridge_domains;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomains()
{
    yang_name = "bridge-domains"; yang_parent_name = "bridge-domain-group";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::~BridgeDomains()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::has_data() const
{
    for (std::size_t index=0; index<bridge_domain.size(); index++)
    {
        if(bridge_domain[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::has_operation() const
{
    for (std::size_t index=0; index<bridge_domain.size(); index++)
    {
        if(bridge_domain[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domains";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BridgeDomains' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bridge-domain")
    {
        for(auto const & c : bridge_domain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain>();
        c->parent = this;
        bridge_domain.push_back(std::move(c));
        children[segment_path] = bridge_domain.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::get_children()
{
    for (auto const & c : bridge_domain)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomain()
    :
    name{YType::str, "name"},
    bridge_description{YType::str, "bridge-description"},
    bridge_domain_mtu{YType::uint32, "bridge-domain-mtu"},
    coupled_mode{YType::empty, "coupled-mode"},
    dhcp{YType::str, "dhcp"},
    flooding{YType::empty, "flooding"},
    flooding_unknown_unicast{YType::empty, "flooding-unknown-unicast"},
    igmp_snooping{YType::str, "igmp-snooping"},
    igmp_snooping_disable{YType::empty, "igmp-snooping-disable"},
    mld_snooping{YType::str, "mld-snooping"},
    shutdown{YType::empty, "shutdown"},
    transport_mode{YType::enumeration, "transport-mode"}
    	,
    access_vfis(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis>())
	,bd_attachment_circuits(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits>())
	,bd_pseudowire_evpns(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns>())
	,bd_pseudowires(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires>())
	,bd_storm_controls(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls>())
	,bridge_domain_evis(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis>())
	,bridge_domain_mac(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac>())
	,bridge_domain_pbb(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb>())
	,dai(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai>())
	,ip_source_guard(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard>())
	,member_vnis(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis>())
	,nv_satellite(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite>())
	,routed_interfaces(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces>())
	,vfis(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis>())
{
    access_vfis->parent = this;
    children["access-vfis"] = access_vfis;

    bd_attachment_circuits->parent = this;
    children["bd-attachment-circuits"] = bd_attachment_circuits;

    bd_pseudowire_evpns->parent = this;
    children["bd-pseudowire-evpns"] = bd_pseudowire_evpns;

    bd_pseudowires->parent = this;
    children["bd-pseudowires"] = bd_pseudowires;

    bd_storm_controls->parent = this;
    children["bd-storm-controls"] = bd_storm_controls;

    bridge_domain_evis->parent = this;
    children["bridge-domain-evis"] = bridge_domain_evis;

    bridge_domain_mac->parent = this;
    children["bridge-domain-mac"] = bridge_domain_mac;

    bridge_domain_pbb->parent = this;
    children["bridge-domain-pbb"] = bridge_domain_pbb;

    dai->parent = this;
    children["dai"] = dai;

    ip_source_guard->parent = this;
    children["ip-source-guard"] = ip_source_guard;

    member_vnis->parent = this;
    children["member-vnis"] = member_vnis;

    nv_satellite->parent = this;
    children["nv-satellite"] = nv_satellite;

    routed_interfaces->parent = this;
    children["routed-interfaces"] = routed_interfaces;

    vfis->parent = this;
    children["vfis"] = vfis;

    yang_name = "bridge-domain"; yang_parent_name = "bridge-domains";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::~BridgeDomain()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::has_data() const
{
    return name.is_set
	|| bridge_description.is_set
	|| bridge_domain_mtu.is_set
	|| coupled_mode.is_set
	|| dhcp.is_set
	|| flooding.is_set
	|| flooding_unknown_unicast.is_set
	|| igmp_snooping.is_set
	|| igmp_snooping_disable.is_set
	|| mld_snooping.is_set
	|| shutdown.is_set
	|| transport_mode.is_set
	|| (access_vfis !=  nullptr && access_vfis->has_data())
	|| (bd_attachment_circuits !=  nullptr && bd_attachment_circuits->has_data())
	|| (bd_pseudowire_evpns !=  nullptr && bd_pseudowire_evpns->has_data())
	|| (bd_pseudowires !=  nullptr && bd_pseudowires->has_data())
	|| (bd_storm_controls !=  nullptr && bd_storm_controls->has_data())
	|| (bridge_domain_evis !=  nullptr && bridge_domain_evis->has_data())
	|| (bridge_domain_mac !=  nullptr && bridge_domain_mac->has_data())
	|| (bridge_domain_pbb !=  nullptr && bridge_domain_pbb->has_data())
	|| (dai !=  nullptr && dai->has_data())
	|| (ip_source_guard !=  nullptr && ip_source_guard->has_data())
	|| (member_vnis !=  nullptr && member_vnis->has_data())
	|| (nv_satellite !=  nullptr && nv_satellite->has_data())
	|| (routed_interfaces !=  nullptr && routed_interfaces->has_data())
	|| (vfis !=  nullptr && vfis->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(bridge_description.operation)
	|| is_set(bridge_domain_mtu.operation)
	|| is_set(coupled_mode.operation)
	|| is_set(dhcp.operation)
	|| is_set(flooding.operation)
	|| is_set(flooding_unknown_unicast.operation)
	|| is_set(igmp_snooping.operation)
	|| is_set(igmp_snooping_disable.operation)
	|| is_set(mld_snooping.operation)
	|| is_set(shutdown.operation)
	|| is_set(transport_mode.operation)
	|| (access_vfis !=  nullptr && access_vfis->has_operation())
	|| (bd_attachment_circuits !=  nullptr && bd_attachment_circuits->has_operation())
	|| (bd_pseudowire_evpns !=  nullptr && bd_pseudowire_evpns->has_operation())
	|| (bd_pseudowires !=  nullptr && bd_pseudowires->has_operation())
	|| (bd_storm_controls !=  nullptr && bd_storm_controls->has_operation())
	|| (bridge_domain_evis !=  nullptr && bridge_domain_evis->has_operation())
	|| (bridge_domain_mac !=  nullptr && bridge_domain_mac->has_operation())
	|| (bridge_domain_pbb !=  nullptr && bridge_domain_pbb->has_operation())
	|| (dai !=  nullptr && dai->has_operation())
	|| (ip_source_guard !=  nullptr && ip_source_guard->has_operation())
	|| (member_vnis !=  nullptr && member_vnis->has_operation())
	|| (nv_satellite !=  nullptr && nv_satellite->has_operation())
	|| (routed_interfaces !=  nullptr && routed_interfaces->has_operation())
	|| (vfis !=  nullptr && vfis->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BridgeDomain' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (bridge_description.is_set || is_set(bridge_description.operation)) leaf_name_data.push_back(bridge_description.get_name_leafdata());
    if (bridge_domain_mtu.is_set || is_set(bridge_domain_mtu.operation)) leaf_name_data.push_back(bridge_domain_mtu.get_name_leafdata());
    if (coupled_mode.is_set || is_set(coupled_mode.operation)) leaf_name_data.push_back(coupled_mode.get_name_leafdata());
    if (dhcp.is_set || is_set(dhcp.operation)) leaf_name_data.push_back(dhcp.get_name_leafdata());
    if (flooding.is_set || is_set(flooding.operation)) leaf_name_data.push_back(flooding.get_name_leafdata());
    if (flooding_unknown_unicast.is_set || is_set(flooding_unknown_unicast.operation)) leaf_name_data.push_back(flooding_unknown_unicast.get_name_leafdata());
    if (igmp_snooping.is_set || is_set(igmp_snooping.operation)) leaf_name_data.push_back(igmp_snooping.get_name_leafdata());
    if (igmp_snooping_disable.is_set || is_set(igmp_snooping_disable.operation)) leaf_name_data.push_back(igmp_snooping_disable.get_name_leafdata());
    if (mld_snooping.is_set || is_set(mld_snooping.operation)) leaf_name_data.push_back(mld_snooping.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (transport_mode.is_set || is_set(transport_mode.operation)) leaf_name_data.push_back(transport_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-vfis")
    {
        if(access_vfis != nullptr)
        {
            children["access-vfis"] = access_vfis;
        }
        else
        {
            access_vfis = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis>();
            access_vfis->parent = this;
            children["access-vfis"] = access_vfis;
        }
        return children.at("access-vfis");
    }

    if(child_yang_name == "bd-attachment-circuits")
    {
        if(bd_attachment_circuits != nullptr)
        {
            children["bd-attachment-circuits"] = bd_attachment_circuits;
        }
        else
        {
            bd_attachment_circuits = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits>();
            bd_attachment_circuits->parent = this;
            children["bd-attachment-circuits"] = bd_attachment_circuits;
        }
        return children.at("bd-attachment-circuits");
    }

    if(child_yang_name == "bd-pseudowire-evpns")
    {
        if(bd_pseudowire_evpns != nullptr)
        {
            children["bd-pseudowire-evpns"] = bd_pseudowire_evpns;
        }
        else
        {
            bd_pseudowire_evpns = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns>();
            bd_pseudowire_evpns->parent = this;
            children["bd-pseudowire-evpns"] = bd_pseudowire_evpns;
        }
        return children.at("bd-pseudowire-evpns");
    }

    if(child_yang_name == "bd-pseudowires")
    {
        if(bd_pseudowires != nullptr)
        {
            children["bd-pseudowires"] = bd_pseudowires;
        }
        else
        {
            bd_pseudowires = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires>();
            bd_pseudowires->parent = this;
            children["bd-pseudowires"] = bd_pseudowires;
        }
        return children.at("bd-pseudowires");
    }

    if(child_yang_name == "bd-storm-controls")
    {
        if(bd_storm_controls != nullptr)
        {
            children["bd-storm-controls"] = bd_storm_controls;
        }
        else
        {
            bd_storm_controls = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls>();
            bd_storm_controls->parent = this;
            children["bd-storm-controls"] = bd_storm_controls;
        }
        return children.at("bd-storm-controls");
    }

    if(child_yang_name == "bridge-domain-evis")
    {
        if(bridge_domain_evis != nullptr)
        {
            children["bridge-domain-evis"] = bridge_domain_evis;
        }
        else
        {
            bridge_domain_evis = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis>();
            bridge_domain_evis->parent = this;
            children["bridge-domain-evis"] = bridge_domain_evis;
        }
        return children.at("bridge-domain-evis");
    }

    if(child_yang_name == "bridge-domain-mac")
    {
        if(bridge_domain_mac != nullptr)
        {
            children["bridge-domain-mac"] = bridge_domain_mac;
        }
        else
        {
            bridge_domain_mac = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac>();
            bridge_domain_mac->parent = this;
            children["bridge-domain-mac"] = bridge_domain_mac;
        }
        return children.at("bridge-domain-mac");
    }

    if(child_yang_name == "bridge-domain-pbb")
    {
        if(bridge_domain_pbb != nullptr)
        {
            children["bridge-domain-pbb"] = bridge_domain_pbb;
        }
        else
        {
            bridge_domain_pbb = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb>();
            bridge_domain_pbb->parent = this;
            children["bridge-domain-pbb"] = bridge_domain_pbb;
        }
        return children.at("bridge-domain-pbb");
    }

    if(child_yang_name == "dai")
    {
        if(dai != nullptr)
        {
            children["dai"] = dai;
        }
        else
        {
            dai = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai>();
            dai->parent = this;
            children["dai"] = dai;
        }
        return children.at("dai");
    }

    if(child_yang_name == "ip-source-guard")
    {
        if(ip_source_guard != nullptr)
        {
            children["ip-source-guard"] = ip_source_guard;
        }
        else
        {
            ip_source_guard = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard>();
            ip_source_guard->parent = this;
            children["ip-source-guard"] = ip_source_guard;
        }
        return children.at("ip-source-guard");
    }

    if(child_yang_name == "member-vnis")
    {
        if(member_vnis != nullptr)
        {
            children["member-vnis"] = member_vnis;
        }
        else
        {
            member_vnis = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis>();
            member_vnis->parent = this;
            children["member-vnis"] = member_vnis;
        }
        return children.at("member-vnis");
    }

    if(child_yang_name == "nv-satellite")
    {
        if(nv_satellite != nullptr)
        {
            children["nv-satellite"] = nv_satellite;
        }
        else
        {
            nv_satellite = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite>();
            nv_satellite->parent = this;
            children["nv-satellite"] = nv_satellite;
        }
        return children.at("nv-satellite");
    }

    if(child_yang_name == "routed-interfaces")
    {
        if(routed_interfaces != nullptr)
        {
            children["routed-interfaces"] = routed_interfaces;
        }
        else
        {
            routed_interfaces = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces>();
            routed_interfaces->parent = this;
            children["routed-interfaces"] = routed_interfaces;
        }
        return children.at("routed-interfaces");
    }

    if(child_yang_name == "vfis")
    {
        if(vfis != nullptr)
        {
            children["vfis"] = vfis;
        }
        else
        {
            vfis = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis>();
            vfis->parent = this;
            children["vfis"] = vfis;
        }
        return children.at("vfis");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::get_children()
{
    if(children.find("access-vfis") == children.end())
    {
        if(access_vfis != nullptr)
        {
            children["access-vfis"] = access_vfis;
        }
    }

    if(children.find("bd-attachment-circuits") == children.end())
    {
        if(bd_attachment_circuits != nullptr)
        {
            children["bd-attachment-circuits"] = bd_attachment_circuits;
        }
    }

    if(children.find("bd-pseudowire-evpns") == children.end())
    {
        if(bd_pseudowire_evpns != nullptr)
        {
            children["bd-pseudowire-evpns"] = bd_pseudowire_evpns;
        }
    }

    if(children.find("bd-pseudowires") == children.end())
    {
        if(bd_pseudowires != nullptr)
        {
            children["bd-pseudowires"] = bd_pseudowires;
        }
    }

    if(children.find("bd-storm-controls") == children.end())
    {
        if(bd_storm_controls != nullptr)
        {
            children["bd-storm-controls"] = bd_storm_controls;
        }
    }

    if(children.find("bridge-domain-evis") == children.end())
    {
        if(bridge_domain_evis != nullptr)
        {
            children["bridge-domain-evis"] = bridge_domain_evis;
        }
    }

    if(children.find("bridge-domain-mac") == children.end())
    {
        if(bridge_domain_mac != nullptr)
        {
            children["bridge-domain-mac"] = bridge_domain_mac;
        }
    }

    if(children.find("bridge-domain-pbb") == children.end())
    {
        if(bridge_domain_pbb != nullptr)
        {
            children["bridge-domain-pbb"] = bridge_domain_pbb;
        }
    }

    if(children.find("dai") == children.end())
    {
        if(dai != nullptr)
        {
            children["dai"] = dai;
        }
    }

    if(children.find("ip-source-guard") == children.end())
    {
        if(ip_source_guard != nullptr)
        {
            children["ip-source-guard"] = ip_source_guard;
        }
    }

    if(children.find("member-vnis") == children.end())
    {
        if(member_vnis != nullptr)
        {
            children["member-vnis"] = member_vnis;
        }
    }

    if(children.find("nv-satellite") == children.end())
    {
        if(nv_satellite != nullptr)
        {
            children["nv-satellite"] = nv_satellite;
        }
    }

    if(children.find("routed-interfaces") == children.end())
    {
        if(routed_interfaces != nullptr)
        {
            children["routed-interfaces"] = routed_interfaces;
        }
    }

    if(children.find("vfis") == children.end())
    {
        if(vfis != nullptr)
        {
            children["vfis"] = vfis;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "bridge-description")
    {
        bridge_description = value;
    }
    if(value_path == "bridge-domain-mtu")
    {
        bridge_domain_mtu = value;
    }
    if(value_path == "coupled-mode")
    {
        coupled_mode = value;
    }
    if(value_path == "dhcp")
    {
        dhcp = value;
    }
    if(value_path == "flooding")
    {
        flooding = value;
    }
    if(value_path == "flooding-unknown-unicast")
    {
        flooding_unknown_unicast = value;
    }
    if(value_path == "igmp-snooping")
    {
        igmp_snooping = value;
    }
    if(value_path == "igmp-snooping-disable")
    {
        igmp_snooping_disable = value;
    }
    if(value_path == "mld-snooping")
    {
        mld_snooping = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "transport-mode")
    {
        transport_mode = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControls()
{
    yang_name = "bd-storm-controls"; yang_parent_name = "bridge-domain";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::~BdStormControls()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::has_data() const
{
    for (std::size_t index=0; index<bd_storm_control.size(); index++)
    {
        if(bd_storm_control[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::has_operation() const
{
    for (std::size_t index=0; index<bd_storm_control.size(); index++)
    {
        if(bd_storm_control[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-storm-controls";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdStormControls' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bd-storm-control")
    {
        for(auto const & c : bd_storm_control)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl>();
        c->parent = this;
        bd_storm_control.push_back(std::move(c));
        children[segment_path] = bd_storm_control.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::get_children()
{
    for (auto const & c : bd_storm_control)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::BdStormControl()
    :
    sctype{YType::enumeration, "sctype"}
    	,
    storm_control_unit(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit>())
{
    storm_control_unit->parent = this;
    children["storm-control-unit"] = storm_control_unit;

    yang_name = "bd-storm-control"; yang_parent_name = "bd-storm-controls";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::~BdStormControl()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::has_data() const
{
    return sctype.is_set
	|| (storm_control_unit !=  nullptr && storm_control_unit->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::has_operation() const
{
    return is_set(operation)
	|| is_set(sctype.operation)
	|| (storm_control_unit !=  nullptr && storm_control_unit->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-storm-control" <<"[sctype='" <<sctype <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdStormControl' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sctype.is_set || is_set(sctype.operation)) leaf_name_data.push_back(sctype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "storm-control-unit")
    {
        if(storm_control_unit != nullptr)
        {
            children["storm-control-unit"] = storm_control_unit;
        }
        else
        {
            storm_control_unit = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit>();
            storm_control_unit->parent = this;
            children["storm-control-unit"] = storm_control_unit;
        }
        return children.at("storm-control-unit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::get_children()
{
    if(children.find("storm-control-unit") == children.end())
    {
        if(storm_control_unit != nullptr)
        {
            children["storm-control-unit"] = storm_control_unit;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sctype")
    {
        sctype = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::StormControlUnit()
    :
    kbits_per_sec{YType::uint32, "kbits-per-sec"},
    pkts_per_sec{YType::uint32, "pkts-per-sec"}
{
    yang_name = "storm-control-unit"; yang_parent_name = "bd-storm-control";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::~StormControlUnit()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::has_data() const
{
    return kbits_per_sec.is_set
	|| pkts_per_sec.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::has_operation() const
{
    return is_set(operation)
	|| is_set(kbits_per_sec.operation)
	|| is_set(pkts_per_sec.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control-unit";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StormControlUnit' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kbits_per_sec.is_set || is_set(kbits_per_sec.operation)) leaf_name_data.push_back(kbits_per_sec.get_name_leafdata());
    if (pkts_per_sec.is_set || is_set(pkts_per_sec.operation)) leaf_name_data.push_back(pkts_per_sec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdStormControls::BdStormControl::StormControlUnit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "kbits-per-sec")
    {
        kbits_per_sec = value;
    }
    if(value_path == "pkts-per-sec")
    {
        pkts_per_sec = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVnis()
{
    yang_name = "member-vnis"; yang_parent_name = "bridge-domain";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::~MemberVnis()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::has_data() const
{
    for (std::size_t index=0; index<member_vni.size(); index++)
    {
        if(member_vni[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::has_operation() const
{
    for (std::size_t index=0; index<member_vni.size(); index++)
    {
        if(member_vni[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vnis";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberVnis' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member-vni")
    {
        for(auto const & c : member_vni)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni>();
        c->parent = this;
        member_vni.push_back(std::move(c));
        children[segment_path] = member_vni.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::get_children()
{
    for (auto const & c : member_vni)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVni()
    :
    vni{YType::uint32, "vni"}
    	,
    member_vni_static_mac_addresses(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses>())
{
    member_vni_static_mac_addresses->parent = this;
    children["member-vni-static-mac-addresses"] = member_vni_static_mac_addresses;

    yang_name = "member-vni"; yang_parent_name = "member-vnis";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::~MemberVni()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::has_data() const
{
    return vni.is_set
	|| (member_vni_static_mac_addresses !=  nullptr && member_vni_static_mac_addresses->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::has_operation() const
{
    return is_set(operation)
	|| is_set(vni.operation)
	|| (member_vni_static_mac_addresses !=  nullptr && member_vni_static_mac_addresses->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vni" <<"[vni='" <<vni <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberVni' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vni.is_set || is_set(vni.operation)) leaf_name_data.push_back(vni.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member-vni-static-mac-addresses")
    {
        if(member_vni_static_mac_addresses != nullptr)
        {
            children["member-vni-static-mac-addresses"] = member_vni_static_mac_addresses;
        }
        else
        {
            member_vni_static_mac_addresses = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses>();
            member_vni_static_mac_addresses->parent = this;
            children["member-vni-static-mac-addresses"] = member_vni_static_mac_addresses;
        }
        return children.at("member-vni-static-mac-addresses");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::get_children()
{
    if(children.find("member-vni-static-mac-addresses") == children.end())
    {
        if(member_vni_static_mac_addresses != nullptr)
        {
            children["member-vni-static-mac-addresses"] = member_vni_static_mac_addresses;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vni")
    {
        vni = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddresses()
{
    yang_name = "member-vni-static-mac-addresses"; yang_parent_name = "member-vni";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::~MemberVniStaticMacAddresses()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::has_data() const
{
    for (std::size_t index=0; index<member_vni_static_mac_address.size(); index++)
    {
        if(member_vni_static_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::has_operation() const
{
    for (std::size_t index=0; index<member_vni_static_mac_address.size(); index++)
    {
        if(member_vni_static_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vni-static-mac-addresses";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberVniStaticMacAddresses' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "member-vni-static-mac-address")
    {
        for(auto const & c : member_vni_static_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress>();
        c->parent = this;
        member_vni_static_mac_address.push_back(std::move(c));
        children[segment_path] = member_vni_static_mac_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::get_children()
{
    for (auto const & c : member_vni_static_mac_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::MemberVniStaticMacAddress()
    :
    mac_address{YType::str, "mac-address"},
    next_hop_ip{YType::str, "next-hop-ip"}
{
    yang_name = "member-vni-static-mac-address"; yang_parent_name = "member-vni-static-mac-addresses";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::~MemberVniStaticMacAddress()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::has_data() const
{
    return mac_address.is_set
	|| next_hop_ip.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| is_set(next_hop_ip.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-vni-static-mac-address" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MemberVniStaticMacAddress' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.operation)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::MemberVnis::MemberVni::MemberVniStaticMacAddresses::MemberVniStaticMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BridgeDomainMac()
    :
    bd_mac_learn{YType::enumeration, "bd-mac-learn"},
    bd_mac_port_down_flush{YType::empty, "bd-mac-port-down-flush"},
    bd_mac_withdraw{YType::empty, "bd-mac-withdraw"},
    bd_mac_withdraw_access_pw_disable{YType::empty, "bd-mac-withdraw-access-pw-disable"},
    bd_mac_withdraw_behavior{YType::enumeration, "bd-mac-withdraw-behavior"},
    bd_mac_withdraw_relay{YType::empty, "bd-mac-withdraw-relay"}
    	,
    bd_mac_aging(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging>())
	,bd_mac_filters(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters>())
	,bd_mac_limit(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit>())
	,mac_secure(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure>())
{
    bd_mac_aging->parent = this;
    children["bd-mac-aging"] = bd_mac_aging;

    bd_mac_filters->parent = this;
    children["bd-mac-filters"] = bd_mac_filters;

    bd_mac_limit->parent = this;
    children["bd-mac-limit"] = bd_mac_limit;

    mac_secure->parent = this;
    children["mac-secure"] = mac_secure;

    yang_name = "bridge-domain-mac"; yang_parent_name = "bridge-domain";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::~BridgeDomainMac()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::has_data() const
{
    return bd_mac_learn.is_set
	|| bd_mac_port_down_flush.is_set
	|| bd_mac_withdraw.is_set
	|| bd_mac_withdraw_access_pw_disable.is_set
	|| bd_mac_withdraw_behavior.is_set
	|| bd_mac_withdraw_relay.is_set
	|| (bd_mac_aging !=  nullptr && bd_mac_aging->has_data())
	|| (bd_mac_filters !=  nullptr && bd_mac_filters->has_data())
	|| (bd_mac_limit !=  nullptr && bd_mac_limit->has_data())
	|| (mac_secure !=  nullptr && mac_secure->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_mac_learn.operation)
	|| is_set(bd_mac_port_down_flush.operation)
	|| is_set(bd_mac_withdraw.operation)
	|| is_set(bd_mac_withdraw_access_pw_disable.operation)
	|| is_set(bd_mac_withdraw_behavior.operation)
	|| is_set(bd_mac_withdraw_relay.operation)
	|| (bd_mac_aging !=  nullptr && bd_mac_aging->has_operation())
	|| (bd_mac_filters !=  nullptr && bd_mac_filters->has_operation())
	|| (bd_mac_limit !=  nullptr && bd_mac_limit->has_operation())
	|| (mac_secure !=  nullptr && mac_secure->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-mac";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BridgeDomainMac' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_mac_learn.is_set || is_set(bd_mac_learn.operation)) leaf_name_data.push_back(bd_mac_learn.get_name_leafdata());
    if (bd_mac_port_down_flush.is_set || is_set(bd_mac_port_down_flush.operation)) leaf_name_data.push_back(bd_mac_port_down_flush.get_name_leafdata());
    if (bd_mac_withdraw.is_set || is_set(bd_mac_withdraw.operation)) leaf_name_data.push_back(bd_mac_withdraw.get_name_leafdata());
    if (bd_mac_withdraw_access_pw_disable.is_set || is_set(bd_mac_withdraw_access_pw_disable.operation)) leaf_name_data.push_back(bd_mac_withdraw_access_pw_disable.get_name_leafdata());
    if (bd_mac_withdraw_behavior.is_set || is_set(bd_mac_withdraw_behavior.operation)) leaf_name_data.push_back(bd_mac_withdraw_behavior.get_name_leafdata());
    if (bd_mac_withdraw_relay.is_set || is_set(bd_mac_withdraw_relay.operation)) leaf_name_data.push_back(bd_mac_withdraw_relay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bd-mac-aging")
    {
        if(bd_mac_aging != nullptr)
        {
            children["bd-mac-aging"] = bd_mac_aging;
        }
        else
        {
            bd_mac_aging = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging>();
            bd_mac_aging->parent = this;
            children["bd-mac-aging"] = bd_mac_aging;
        }
        return children.at("bd-mac-aging");
    }

    if(child_yang_name == "bd-mac-filters")
    {
        if(bd_mac_filters != nullptr)
        {
            children["bd-mac-filters"] = bd_mac_filters;
        }
        else
        {
            bd_mac_filters = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters>();
            bd_mac_filters->parent = this;
            children["bd-mac-filters"] = bd_mac_filters;
        }
        return children.at("bd-mac-filters");
    }

    if(child_yang_name == "bd-mac-limit")
    {
        if(bd_mac_limit != nullptr)
        {
            children["bd-mac-limit"] = bd_mac_limit;
        }
        else
        {
            bd_mac_limit = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit>();
            bd_mac_limit->parent = this;
            children["bd-mac-limit"] = bd_mac_limit;
        }
        return children.at("bd-mac-limit");
    }

    if(child_yang_name == "mac-secure")
    {
        if(mac_secure != nullptr)
        {
            children["mac-secure"] = mac_secure;
        }
        else
        {
            mac_secure = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure>();
            mac_secure->parent = this;
            children["mac-secure"] = mac_secure;
        }
        return children.at("mac-secure");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::get_children()
{
    if(children.find("bd-mac-aging") == children.end())
    {
        if(bd_mac_aging != nullptr)
        {
            children["bd-mac-aging"] = bd_mac_aging;
        }
    }

    if(children.find("bd-mac-filters") == children.end())
    {
        if(bd_mac_filters != nullptr)
        {
            children["bd-mac-filters"] = bd_mac_filters;
        }
    }

    if(children.find("bd-mac-limit") == children.end())
    {
        if(bd_mac_limit != nullptr)
        {
            children["bd-mac-limit"] = bd_mac_limit;
        }
    }

    if(children.find("mac-secure") == children.end())
    {
        if(mac_secure != nullptr)
        {
            children["mac-secure"] = mac_secure;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-mac-learn")
    {
        bd_mac_learn = value;
    }
    if(value_path == "bd-mac-port-down-flush")
    {
        bd_mac_port_down_flush = value;
    }
    if(value_path == "bd-mac-withdraw")
    {
        bd_mac_withdraw = value;
    }
    if(value_path == "bd-mac-withdraw-access-pw-disable")
    {
        bd_mac_withdraw_access_pw_disable = value;
    }
    if(value_path == "bd-mac-withdraw-behavior")
    {
        bd_mac_withdraw_behavior = value;
    }
    if(value_path == "bd-mac-withdraw-relay")
    {
        bd_mac_withdraw_relay = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::BdMacLimit()
    :
    bd_mac_limit_action{YType::enumeration, "bd-mac-limit-action"},
    bd_mac_limit_max{YType::uint32, "bd-mac-limit-max"},
    bd_mac_limit_notif{YType::enumeration, "bd-mac-limit-notif"}
{
    yang_name = "bd-mac-limit"; yang_parent_name = "bridge-domain-mac";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::~BdMacLimit()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::has_data() const
{
    return bd_mac_limit_action.is_set
	|| bd_mac_limit_max.is_set
	|| bd_mac_limit_notif.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_mac_limit_action.operation)
	|| is_set(bd_mac_limit_max.operation)
	|| is_set(bd_mac_limit_notif.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-mac-limit";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdMacLimit' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_mac_limit_action.is_set || is_set(bd_mac_limit_action.operation)) leaf_name_data.push_back(bd_mac_limit_action.get_name_leafdata());
    if (bd_mac_limit_max.is_set || is_set(bd_mac_limit_max.operation)) leaf_name_data.push_back(bd_mac_limit_max.get_name_leafdata());
    if (bd_mac_limit_notif.is_set || is_set(bd_mac_limit_notif.operation)) leaf_name_data.push_back(bd_mac_limit_notif.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-mac-limit-action")
    {
        bd_mac_limit_action = value;
    }
    if(value_path == "bd-mac-limit-max")
    {
        bd_mac_limit_max = value;
    }
    if(value_path == "bd-mac-limit-notif")
    {
        bd_mac_limit_notif = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilters()
{
    yang_name = "bd-mac-filters"; yang_parent_name = "bridge-domain-mac";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::~BdMacFilters()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::has_data() const
{
    for (std::size_t index=0; index<bd_mac_filter.size(); index++)
    {
        if(bd_mac_filter[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::has_operation() const
{
    for (std::size_t index=0; index<bd_mac_filter.size(); index++)
    {
        if(bd_mac_filter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-mac-filters";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdMacFilters' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bd-mac-filter")
    {
        for(auto const & c : bd_mac_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter>();
        c->parent = this;
        bd_mac_filter.push_back(std::move(c));
        children[segment_path] = bd_mac_filter.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::get_children()
{
    for (auto const & c : bd_mac_filter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::BdMacFilter()
    :
    address{YType::str, "address"},
    drop{YType::empty, "drop"}
{
    yang_name = "bd-mac-filter"; yang_parent_name = "bd-mac-filters";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::~BdMacFilter()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::has_data() const
{
    return address.is_set
	|| drop.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(drop.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-mac-filter" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdMacFilter' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacFilters::BdMacFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "drop")
    {
        drop = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::MacSecure()
    :
    action{YType::enumeration, "action"},
    enable{YType::empty, "enable"},
    logging{YType::empty, "logging"}
{
    yang_name = "mac-secure"; yang_parent_name = "bridge-domain-mac";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::~MacSecure()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::has_data() const
{
    return action.is_set
	|| enable.is_set
	|| logging.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::has_operation() const
{
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(enable.operation)
	|| is_set(logging.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-secure";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacSecure' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::MacSecure::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "logging")
    {
        logging = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::BdMacAging()
    :
    bd_mac_aging_time{YType::uint32, "bd-mac-aging-time"},
    bd_mac_aging_type{YType::enumeration, "bd-mac-aging-type"}
{
    yang_name = "bd-mac-aging"; yang_parent_name = "bridge-domain-mac";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::~BdMacAging()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::has_data() const
{
    return bd_mac_aging_time.is_set
	|| bd_mac_aging_type.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::has_operation() const
{
    return is_set(operation)
	|| is_set(bd_mac_aging_time.operation)
	|| is_set(bd_mac_aging_type.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-mac-aging";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdMacAging' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_mac_aging_time.is_set || is_set(bd_mac_aging_time.operation)) leaf_name_data.push_back(bd_mac_aging_time.get_name_leafdata());
    if (bd_mac_aging_type.is_set || is_set(bd_mac_aging_type.operation)) leaf_name_data.push_back(bd_mac_aging_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainMac::BdMacAging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bd-mac-aging-time")
    {
        bd_mac_aging_time = value;
    }
    if(value_path == "bd-mac-aging-type")
    {
        bd_mac_aging_type = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::NvSatellite()
    :
    enable{YType::empty, "enable"},
    offload_ipv4_multicast_enable{YType::empty, "offload-ipv4-multicast-enable"}
{
    yang_name = "nv-satellite"; yang_parent_name = "bridge-domain";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::~NvSatellite()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::has_data() const
{
    return enable.is_set
	|| offload_ipv4_multicast_enable.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(offload_ipv4_multicast_enable.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nv-satellite";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NvSatellite' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (offload_ipv4_multicast_enable.is_set || is_set(offload_ipv4_multicast_enable.operation)) leaf_name_data.push_back(offload_ipv4_multicast_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::NvSatellite::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "offload-ipv4-multicast-enable")
    {
        offload_ipv4_multicast_enable = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::BridgeDomainPbb()
    :
    pbb_core(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore>())
	,pbb_edges(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges>())
{
    pbb_core->parent = this;
    children["pbb-core"] = pbb_core;

    pbb_edges->parent = this;
    children["pbb-edges"] = pbb_edges;

    yang_name = "bridge-domain-pbb"; yang_parent_name = "bridge-domain";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::~BridgeDomainPbb()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::has_data() const
{
    return (pbb_core !=  nullptr && pbb_core->has_data())
	|| (pbb_edges !=  nullptr && pbb_edges->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::has_operation() const
{
    return is_set(operation)
	|| (pbb_core !=  nullptr && pbb_core->has_operation())
	|| (pbb_edges !=  nullptr && pbb_edges->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-pbb";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BridgeDomainPbb' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pbb-core")
    {
        if(pbb_core != nullptr)
        {
            children["pbb-core"] = pbb_core;
        }
        else
        {
            pbb_core = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore>();
            pbb_core->parent = this;
            children["pbb-core"] = pbb_core;
        }
        return children.at("pbb-core");
    }

    if(child_yang_name == "pbb-edges")
    {
        if(pbb_edges != nullptr)
        {
            children["pbb-edges"] = pbb_edges;
        }
        else
        {
            pbb_edges = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges>();
            pbb_edges->parent = this;
            children["pbb-edges"] = pbb_edges;
        }
        return children.at("pbb-edges");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::get_children()
{
    if(children.find("pbb-core") == children.end())
    {
        if(pbb_core != nullptr)
        {
            children["pbb-core"] = pbb_core;
        }
    }

    if(children.find("pbb-edges") == children.end())
    {
        if(pbb_edges != nullptr)
        {
            children["pbb-edges"] = pbb_edges;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdges()
{
    yang_name = "pbb-edges"; yang_parent_name = "bridge-domain-pbb";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::~PbbEdges()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::has_data() const
{
    for (std::size_t index=0; index<pbb_edge.size(); index++)
    {
        if(pbb_edge[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::has_operation() const
{
    for (std::size_t index=0; index<pbb_edge.size(); index++)
    {
        if(pbb_edge[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edges";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbbEdges' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pbb-edge")
    {
        for(auto const & c : pbb_edge)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge>();
        c->parent = this;
        pbb_edge.push_back(std::move(c));
        children[segment_path] = pbb_edge.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::get_children()
{
    for (auto const & c : pbb_edge)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdge()
    :
    core_bd_name{YType::str, "core-bd-name"},
    isid{YType::uint32, "isid"},
    pbb_edge_igmp_profile{YType::str, "pbb-edge-igmp-profile"},
    unknown_unicast_bmac{YType::str, "unknown-unicast-bmac"}
    	,
    pbb_edge_dhcp_profile(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile>())
	,pbb_edge_mac(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac>())
	,pbb_edge_split_horizon_group(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup>())
	,pbb_static_mac_mappings(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings>())
{
    pbb_edge_dhcp_profile->parent = this;
    children["pbb-edge-dhcp-profile"] = pbb_edge_dhcp_profile;

    pbb_edge_mac->parent = this;
    children["pbb-edge-mac"] = pbb_edge_mac;

    pbb_edge_split_horizon_group->parent = this;
    children["pbb-edge-split-horizon-group"] = pbb_edge_split_horizon_group;

    pbb_static_mac_mappings->parent = this;
    children["pbb-static-mac-mappings"] = pbb_static_mac_mappings;

    yang_name = "pbb-edge"; yang_parent_name = "pbb-edges";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::~PbbEdge()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::has_data() const
{
    return core_bd_name.is_set
	|| isid.is_set
	|| pbb_edge_igmp_profile.is_set
	|| unknown_unicast_bmac.is_set
	|| (pbb_edge_dhcp_profile !=  nullptr && pbb_edge_dhcp_profile->has_data())
	|| (pbb_edge_mac !=  nullptr && pbb_edge_mac->has_data())
	|| (pbb_edge_split_horizon_group !=  nullptr && pbb_edge_split_horizon_group->has_data())
	|| (pbb_static_mac_mappings !=  nullptr && pbb_static_mac_mappings->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::has_operation() const
{
    return is_set(operation)
	|| is_set(core_bd_name.operation)
	|| is_set(isid.operation)
	|| is_set(pbb_edge_igmp_profile.operation)
	|| is_set(unknown_unicast_bmac.operation)
	|| (pbb_edge_dhcp_profile !=  nullptr && pbb_edge_dhcp_profile->has_operation())
	|| (pbb_edge_mac !=  nullptr && pbb_edge_mac->has_operation())
	|| (pbb_edge_split_horizon_group !=  nullptr && pbb_edge_split_horizon_group->has_operation())
	|| (pbb_static_mac_mappings !=  nullptr && pbb_static_mac_mappings->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge" <<"[core-bd-name='" <<core_bd_name <<"']" <<"[isid='" <<isid <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbbEdge' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (core_bd_name.is_set || is_set(core_bd_name.operation)) leaf_name_data.push_back(core_bd_name.get_name_leafdata());
    if (isid.is_set || is_set(isid.operation)) leaf_name_data.push_back(isid.get_name_leafdata());
    if (pbb_edge_igmp_profile.is_set || is_set(pbb_edge_igmp_profile.operation)) leaf_name_data.push_back(pbb_edge_igmp_profile.get_name_leafdata());
    if (unknown_unicast_bmac.is_set || is_set(unknown_unicast_bmac.operation)) leaf_name_data.push_back(unknown_unicast_bmac.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pbb-edge-dhcp-profile")
    {
        if(pbb_edge_dhcp_profile != nullptr)
        {
            children["pbb-edge-dhcp-profile"] = pbb_edge_dhcp_profile;
        }
        else
        {
            pbb_edge_dhcp_profile = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile>();
            pbb_edge_dhcp_profile->parent = this;
            children["pbb-edge-dhcp-profile"] = pbb_edge_dhcp_profile;
        }
        return children.at("pbb-edge-dhcp-profile");
    }

    if(child_yang_name == "pbb-edge-mac")
    {
        if(pbb_edge_mac != nullptr)
        {
            children["pbb-edge-mac"] = pbb_edge_mac;
        }
        else
        {
            pbb_edge_mac = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac>();
            pbb_edge_mac->parent = this;
            children["pbb-edge-mac"] = pbb_edge_mac;
        }
        return children.at("pbb-edge-mac");
    }

    if(child_yang_name == "pbb-edge-split-horizon-group")
    {
        if(pbb_edge_split_horizon_group != nullptr)
        {
            children["pbb-edge-split-horizon-group"] = pbb_edge_split_horizon_group;
        }
        else
        {
            pbb_edge_split_horizon_group = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup>();
            pbb_edge_split_horizon_group->parent = this;
            children["pbb-edge-split-horizon-group"] = pbb_edge_split_horizon_group;
        }
        return children.at("pbb-edge-split-horizon-group");
    }

    if(child_yang_name == "pbb-static-mac-mappings")
    {
        if(pbb_static_mac_mappings != nullptr)
        {
            children["pbb-static-mac-mappings"] = pbb_static_mac_mappings;
        }
        else
        {
            pbb_static_mac_mappings = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings>();
            pbb_static_mac_mappings->parent = this;
            children["pbb-static-mac-mappings"] = pbb_static_mac_mappings;
        }
        return children.at("pbb-static-mac-mappings");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::get_children()
{
    if(children.find("pbb-edge-dhcp-profile") == children.end())
    {
        if(pbb_edge_dhcp_profile != nullptr)
        {
            children["pbb-edge-dhcp-profile"] = pbb_edge_dhcp_profile;
        }
    }

    if(children.find("pbb-edge-mac") == children.end())
    {
        if(pbb_edge_mac != nullptr)
        {
            children["pbb-edge-mac"] = pbb_edge_mac;
        }
    }

    if(children.find("pbb-edge-split-horizon-group") == children.end())
    {
        if(pbb_edge_split_horizon_group != nullptr)
        {
            children["pbb-edge-split-horizon-group"] = pbb_edge_split_horizon_group;
        }
    }

    if(children.find("pbb-static-mac-mappings") == children.end())
    {
        if(pbb_static_mac_mappings != nullptr)
        {
            children["pbb-static-mac-mappings"] = pbb_static_mac_mappings;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "core-bd-name")
    {
        core_bd_name = value;
    }
    if(value_path == "isid")
    {
        isid = value;
    }
    if(value_path == "pbb-edge-igmp-profile")
    {
        pbb_edge_igmp_profile = value;
    }
    if(value_path == "unknown-unicast-bmac")
    {
        unknown_unicast_bmac = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::PbbEdgeSplitHorizonGroup()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "pbb-edge-split-horizon-group"; yang_parent_name = "pbb-edge";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::~PbbEdgeSplitHorizonGroup()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::has_data() const
{
    return disable.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-split-horizon-group";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbbEdgeSplitHorizonGroup' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeSplitHorizonGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMappings()
{
    yang_name = "pbb-static-mac-mappings"; yang_parent_name = "pbb-edge";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::~PbbStaticMacMappings()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::has_data() const
{
    for (std::size_t index=0; index<pbb_static_mac_mapping.size(); index++)
    {
        if(pbb_static_mac_mapping[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::has_operation() const
{
    for (std::size_t index=0; index<pbb_static_mac_mapping.size(); index++)
    {
        if(pbb_static_mac_mapping[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-static-mac-mappings";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbbStaticMacMappings' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pbb-static-mac-mapping")
    {
        for(auto const & c : pbb_static_mac_mapping)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping>();
        c->parent = this;
        pbb_static_mac_mapping.push_back(std::move(c));
        children[segment_path] = pbb_static_mac_mapping.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::get_children()
{
    for (auto const & c : pbb_static_mac_mapping)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::PbbStaticMacMapping()
    :
    address{YType::str, "address"},
    pbb_static_mac_mapping_bmac{YType::str, "pbb-static-mac-mapping-bmac"}
{
    yang_name = "pbb-static-mac-mapping"; yang_parent_name = "pbb-static-mac-mappings";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::~PbbStaticMacMapping()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::has_data() const
{
    return address.is_set
	|| pbb_static_mac_mapping_bmac.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(pbb_static_mac_mapping_bmac.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-static-mac-mapping" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbbStaticMacMapping' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (pbb_static_mac_mapping_bmac.is_set || is_set(pbb_static_mac_mapping_bmac.operation)) leaf_name_data.push_back(pbb_static_mac_mapping_bmac.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbStaticMacMappings::PbbStaticMacMapping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "pbb-static-mac-mapping-bmac")
    {
        pbb_static_mac_mapping_bmac = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::PbbEdgeDhcpProfile()
    :
    dhcp_snooping_id{YType::str, "dhcp-snooping-id"},
    profile_id{YType::enumeration, "profile-id"}
{
    yang_name = "pbb-edge-dhcp-profile"; yang_parent_name = "pbb-edge";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::~PbbEdgeDhcpProfile()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::has_data() const
{
    return dhcp_snooping_id.is_set
	|| profile_id.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::has_operation() const
{
    return is_set(operation)
	|| is_set(dhcp_snooping_id.operation)
	|| is_set(profile_id.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-dhcp-profile";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbbEdgeDhcpProfile' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp_snooping_id.is_set || is_set(dhcp_snooping_id.operation)) leaf_name_data.push_back(dhcp_snooping_id.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.operation)) leaf_name_data.push_back(profile_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeDhcpProfile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id = value;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMac()
    :
    pbb_edge_mac_learning{YType::enumeration, "pbb-edge-mac-learning"}
    	,
    pbb_edge_mac_aging(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging>())
	,pbb_edge_mac_limit(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit>())
	,pbb_edge_mac_secure(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure>())
{
    pbb_edge_mac_aging->parent = this;
    children["pbb-edge-mac-aging"] = pbb_edge_mac_aging;

    pbb_edge_mac_limit->parent = this;
    children["pbb-edge-mac-limit"] = pbb_edge_mac_limit;

    pbb_edge_mac_secure->parent = this;
    children["pbb-edge-mac-secure"] = pbb_edge_mac_secure;

    yang_name = "pbb-edge-mac"; yang_parent_name = "pbb-edge";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::~PbbEdgeMac()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::has_data() const
{
    return pbb_edge_mac_learning.is_set
	|| (pbb_edge_mac_aging !=  nullptr && pbb_edge_mac_aging->has_data())
	|| (pbb_edge_mac_limit !=  nullptr && pbb_edge_mac_limit->has_data())
	|| (pbb_edge_mac_secure !=  nullptr && pbb_edge_mac_secure->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::has_operation() const
{
    return is_set(operation)
	|| is_set(pbb_edge_mac_learning.operation)
	|| (pbb_edge_mac_aging !=  nullptr && pbb_edge_mac_aging->has_operation())
	|| (pbb_edge_mac_limit !=  nullptr && pbb_edge_mac_limit->has_operation())
	|| (pbb_edge_mac_secure !=  nullptr && pbb_edge_mac_secure->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-mac";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbbEdgeMac' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_edge_mac_learning.is_set || is_set(pbb_edge_mac_learning.operation)) leaf_name_data.push_back(pbb_edge_mac_learning.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pbb-edge-mac-aging")
    {
        if(pbb_edge_mac_aging != nullptr)
        {
            children["pbb-edge-mac-aging"] = pbb_edge_mac_aging;
        }
        else
        {
            pbb_edge_mac_aging = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging>();
            pbb_edge_mac_aging->parent = this;
            children["pbb-edge-mac-aging"] = pbb_edge_mac_aging;
        }
        return children.at("pbb-edge-mac-aging");
    }

    if(child_yang_name == "pbb-edge-mac-limit")
    {
        if(pbb_edge_mac_limit != nullptr)
        {
            children["pbb-edge-mac-limit"] = pbb_edge_mac_limit;
        }
        else
        {
            pbb_edge_mac_limit = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit>();
            pbb_edge_mac_limit->parent = this;
            children["pbb-edge-mac-limit"] = pbb_edge_mac_limit;
        }
        return children.at("pbb-edge-mac-limit");
    }

    if(child_yang_name == "pbb-edge-mac-secure")
    {
        if(pbb_edge_mac_secure != nullptr)
        {
            children["pbb-edge-mac-secure"] = pbb_edge_mac_secure;
        }
        else
        {
            pbb_edge_mac_secure = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure>();
            pbb_edge_mac_secure->parent = this;
            children["pbb-edge-mac-secure"] = pbb_edge_mac_secure;
        }
        return children.at("pbb-edge-mac-secure");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::get_children()
{
    if(children.find("pbb-edge-mac-aging") == children.end())
    {
        if(pbb_edge_mac_aging != nullptr)
        {
            children["pbb-edge-mac-aging"] = pbb_edge_mac_aging;
        }
    }

    if(children.find("pbb-edge-mac-limit") == children.end())
    {
        if(pbb_edge_mac_limit != nullptr)
        {
            children["pbb-edge-mac-limit"] = pbb_edge_mac_limit;
        }
    }

    if(children.find("pbb-edge-mac-secure") == children.end())
    {
        if(pbb_edge_mac_secure != nullptr)
        {
            children["pbb-edge-mac-secure"] = pbb_edge_mac_secure;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pbb-edge-mac-learning")
    {
        pbb_edge_mac_learning = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::PbbEdgeMacLimit()
    :
    pbb_edge_mac_limit_action{YType::enumeration, "pbb-edge-mac-limit-action"},
    pbb_edge_mac_limit_max{YType::uint32, "pbb-edge-mac-limit-max"},
    pbb_edge_mac_limit_notif{YType::enumeration, "pbb-edge-mac-limit-notif"}
{
    yang_name = "pbb-edge-mac-limit"; yang_parent_name = "pbb-edge-mac";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::~PbbEdgeMacLimit()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::has_data() const
{
    return pbb_edge_mac_limit_action.is_set
	|| pbb_edge_mac_limit_max.is_set
	|| pbb_edge_mac_limit_notif.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(pbb_edge_mac_limit_action.operation)
	|| is_set(pbb_edge_mac_limit_max.operation)
	|| is_set(pbb_edge_mac_limit_notif.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-mac-limit";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbbEdgeMacLimit' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_edge_mac_limit_action.is_set || is_set(pbb_edge_mac_limit_action.operation)) leaf_name_data.push_back(pbb_edge_mac_limit_action.get_name_leafdata());
    if (pbb_edge_mac_limit_max.is_set || is_set(pbb_edge_mac_limit_max.operation)) leaf_name_data.push_back(pbb_edge_mac_limit_max.get_name_leafdata());
    if (pbb_edge_mac_limit_notif.is_set || is_set(pbb_edge_mac_limit_notif.operation)) leaf_name_data.push_back(pbb_edge_mac_limit_notif.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pbb-edge-mac-limit-action")
    {
        pbb_edge_mac_limit_action = value;
    }
    if(value_path == "pbb-edge-mac-limit-max")
    {
        pbb_edge_mac_limit_max = value;
    }
    if(value_path == "pbb-edge-mac-limit-notif")
    {
        pbb_edge_mac_limit_notif = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::PbbEdgeMacAging()
    :
    pbb_edge_mac_aging_time{YType::uint32, "pbb-edge-mac-aging-time"},
    pbb_edge_mac_aging_type{YType::enumeration, "pbb-edge-mac-aging-type"}
{
    yang_name = "pbb-edge-mac-aging"; yang_parent_name = "pbb-edge-mac";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::~PbbEdgeMacAging()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::has_data() const
{
    return pbb_edge_mac_aging_time.is_set
	|| pbb_edge_mac_aging_type.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::has_operation() const
{
    return is_set(operation)
	|| is_set(pbb_edge_mac_aging_time.operation)
	|| is_set(pbb_edge_mac_aging_type.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-mac-aging";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbbEdgeMacAging' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_edge_mac_aging_time.is_set || is_set(pbb_edge_mac_aging_time.operation)) leaf_name_data.push_back(pbb_edge_mac_aging_time.get_name_leafdata());
    if (pbb_edge_mac_aging_type.is_set || is_set(pbb_edge_mac_aging_type.operation)) leaf_name_data.push_back(pbb_edge_mac_aging_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacAging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pbb-edge-mac-aging-time")
    {
        pbb_edge_mac_aging_time = value;
    }
    if(value_path == "pbb-edge-mac-aging-type")
    {
        pbb_edge_mac_aging_type = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::PbbEdgeMacSecure()
    :
    accept_shutdown{YType::empty, "accept-shutdown"},
    action{YType::enumeration, "action"},
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"},
    logging{YType::enumeration, "logging"}
{
    yang_name = "pbb-edge-mac-secure"; yang_parent_name = "pbb-edge-mac";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::~PbbEdgeMacSecure()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::has_data() const
{
    return accept_shutdown.is_set
	|| action.is_set
	|| disable.is_set
	|| enable.is_set
	|| logging.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::has_operation() const
{
    return is_set(operation)
	|| is_set(accept_shutdown.operation)
	|| is_set(action.operation)
	|| is_set(disable.operation)
	|| is_set(enable.operation)
	|| is_set(logging.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-edge-mac-secure";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbbEdgeMacSecure' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accept_shutdown.is_set || is_set(accept_shutdown.operation)) leaf_name_data.push_back(accept_shutdown.get_name_leafdata());
    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbEdges::PbbEdge::PbbEdgeMac::PbbEdgeMacSecure::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accept-shutdown")
    {
        accept_shutdown = value;
    }
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "logging")
    {
        logging = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCore()
    :
    enable{YType::empty, "enable"},
    pbb_core_igmp_profile{YType::str, "pbb-core-igmp-profile"},
    pbb_core_mmrp_flood_optimization{YType::empty, "pbb-core-mmrp-flood-optimization"},
    vlan_id{YType::uint32, "vlan-id"}
    	,
    pbb_core_dhcp_profile(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile>())
	,pbb_core_evis(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis>())
	,pbb_core_mac(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac>())
{
    pbb_core_dhcp_profile->parent = this;
    children["pbb-core-dhcp-profile"] = pbb_core_dhcp_profile;

    pbb_core_evis->parent = this;
    children["pbb-core-evis"] = pbb_core_evis;

    pbb_core_mac->parent = this;
    children["pbb-core-mac"] = pbb_core_mac;

    yang_name = "pbb-core"; yang_parent_name = "bridge-domain-pbb";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::~PbbCore()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::has_data() const
{
    return enable.is_set
	|| pbb_core_igmp_profile.is_set
	|| pbb_core_mmrp_flood_optimization.is_set
	|| vlan_id.is_set
	|| (pbb_core_dhcp_profile !=  nullptr && pbb_core_dhcp_profile->has_data())
	|| (pbb_core_evis !=  nullptr && pbb_core_evis->has_data())
	|| (pbb_core_mac !=  nullptr && pbb_core_mac->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(pbb_core_igmp_profile.operation)
	|| is_set(pbb_core_mmrp_flood_optimization.operation)
	|| is_set(vlan_id.operation)
	|| (pbb_core_dhcp_profile !=  nullptr && pbb_core_dhcp_profile->has_operation())
	|| (pbb_core_evis !=  nullptr && pbb_core_evis->has_operation())
	|| (pbb_core_mac !=  nullptr && pbb_core_mac->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbbCore' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (pbb_core_igmp_profile.is_set || is_set(pbb_core_igmp_profile.operation)) leaf_name_data.push_back(pbb_core_igmp_profile.get_name_leafdata());
    if (pbb_core_mmrp_flood_optimization.is_set || is_set(pbb_core_mmrp_flood_optimization.operation)) leaf_name_data.push_back(pbb_core_mmrp_flood_optimization.get_name_leafdata());
    if (vlan_id.is_set || is_set(vlan_id.operation)) leaf_name_data.push_back(vlan_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pbb-core-dhcp-profile")
    {
        if(pbb_core_dhcp_profile != nullptr)
        {
            children["pbb-core-dhcp-profile"] = pbb_core_dhcp_profile;
        }
        else
        {
            pbb_core_dhcp_profile = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile>();
            pbb_core_dhcp_profile->parent = this;
            children["pbb-core-dhcp-profile"] = pbb_core_dhcp_profile;
        }
        return children.at("pbb-core-dhcp-profile");
    }

    if(child_yang_name == "pbb-core-evis")
    {
        if(pbb_core_evis != nullptr)
        {
            children["pbb-core-evis"] = pbb_core_evis;
        }
        else
        {
            pbb_core_evis = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis>();
            pbb_core_evis->parent = this;
            children["pbb-core-evis"] = pbb_core_evis;
        }
        return children.at("pbb-core-evis");
    }

    if(child_yang_name == "pbb-core-mac")
    {
        if(pbb_core_mac != nullptr)
        {
            children["pbb-core-mac"] = pbb_core_mac;
        }
        else
        {
            pbb_core_mac = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac>();
            pbb_core_mac->parent = this;
            children["pbb-core-mac"] = pbb_core_mac;
        }
        return children.at("pbb-core-mac");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::get_children()
{
    if(children.find("pbb-core-dhcp-profile") == children.end())
    {
        if(pbb_core_dhcp_profile != nullptr)
        {
            children["pbb-core-dhcp-profile"] = pbb_core_dhcp_profile;
        }
    }

    if(children.find("pbb-core-evis") == children.end())
    {
        if(pbb_core_evis != nullptr)
        {
            children["pbb-core-evis"] = pbb_core_evis;
        }
    }

    if(children.find("pbb-core-mac") == children.end())
    {
        if(pbb_core_mac != nullptr)
        {
            children["pbb-core-mac"] = pbb_core_mac;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "pbb-core-igmp-profile")
    {
        pbb_core_igmp_profile = value;
    }
    if(value_path == "pbb-core-mmrp-flood-optimization")
    {
        pbb_core_mmrp_flood_optimization = value;
    }
    if(value_path == "vlan-id")
    {
        vlan_id = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMac()
    :
    pbb_core_mac_learning{YType::enumeration, "pbb-core-mac-learning"}
    	,
    pbb_core_mac_aging(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging>())
	,pbb_core_mac_limit(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit>())
{
    pbb_core_mac_aging->parent = this;
    children["pbb-core-mac-aging"] = pbb_core_mac_aging;

    pbb_core_mac_limit->parent = this;
    children["pbb-core-mac-limit"] = pbb_core_mac_limit;

    yang_name = "pbb-core-mac"; yang_parent_name = "pbb-core";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::~PbbCoreMac()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::has_data() const
{
    return pbb_core_mac_learning.is_set
	|| (pbb_core_mac_aging !=  nullptr && pbb_core_mac_aging->has_data())
	|| (pbb_core_mac_limit !=  nullptr && pbb_core_mac_limit->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::has_operation() const
{
    return is_set(operation)
	|| is_set(pbb_core_mac_learning.operation)
	|| (pbb_core_mac_aging !=  nullptr && pbb_core_mac_aging->has_operation())
	|| (pbb_core_mac_limit !=  nullptr && pbb_core_mac_limit->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-mac";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbbCoreMac' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_core_mac_learning.is_set || is_set(pbb_core_mac_learning.operation)) leaf_name_data.push_back(pbb_core_mac_learning.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pbb-core-mac-aging")
    {
        if(pbb_core_mac_aging != nullptr)
        {
            children["pbb-core-mac-aging"] = pbb_core_mac_aging;
        }
        else
        {
            pbb_core_mac_aging = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging>();
            pbb_core_mac_aging->parent = this;
            children["pbb-core-mac-aging"] = pbb_core_mac_aging;
        }
        return children.at("pbb-core-mac-aging");
    }

    if(child_yang_name == "pbb-core-mac-limit")
    {
        if(pbb_core_mac_limit != nullptr)
        {
            children["pbb-core-mac-limit"] = pbb_core_mac_limit;
        }
        else
        {
            pbb_core_mac_limit = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit>();
            pbb_core_mac_limit->parent = this;
            children["pbb-core-mac-limit"] = pbb_core_mac_limit;
        }
        return children.at("pbb-core-mac-limit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::get_children()
{
    if(children.find("pbb-core-mac-aging") == children.end())
    {
        if(pbb_core_mac_aging != nullptr)
        {
            children["pbb-core-mac-aging"] = pbb_core_mac_aging;
        }
    }

    if(children.find("pbb-core-mac-limit") == children.end())
    {
        if(pbb_core_mac_limit != nullptr)
        {
            children["pbb-core-mac-limit"] = pbb_core_mac_limit;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pbb-core-mac-learning")
    {
        pbb_core_mac_learning = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::PbbCoreMacAging()
    :
    pbb_core_mac_aging_time{YType::uint32, "pbb-core-mac-aging-time"},
    pbb_core_mac_aging_type{YType::enumeration, "pbb-core-mac-aging-type"}
{
    yang_name = "pbb-core-mac-aging"; yang_parent_name = "pbb-core-mac";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::~PbbCoreMacAging()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::has_data() const
{
    return pbb_core_mac_aging_time.is_set
	|| pbb_core_mac_aging_type.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::has_operation() const
{
    return is_set(operation)
	|| is_set(pbb_core_mac_aging_time.operation)
	|| is_set(pbb_core_mac_aging_type.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-mac-aging";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbbCoreMacAging' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_core_mac_aging_time.is_set || is_set(pbb_core_mac_aging_time.operation)) leaf_name_data.push_back(pbb_core_mac_aging_time.get_name_leafdata());
    if (pbb_core_mac_aging_type.is_set || is_set(pbb_core_mac_aging_type.operation)) leaf_name_data.push_back(pbb_core_mac_aging_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacAging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pbb-core-mac-aging-time")
    {
        pbb_core_mac_aging_time = value;
    }
    if(value_path == "pbb-core-mac-aging-type")
    {
        pbb_core_mac_aging_type = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::PbbCoreMacLimit()
    :
    pbb_core_mac_limit_action{YType::enumeration, "pbb-core-mac-limit-action"},
    pbb_core_mac_limit_max{YType::uint32, "pbb-core-mac-limit-max"},
    pbb_core_mac_limit_notif{YType::enumeration, "pbb-core-mac-limit-notif"}
{
    yang_name = "pbb-core-mac-limit"; yang_parent_name = "pbb-core-mac";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::~PbbCoreMacLimit()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::has_data() const
{
    return pbb_core_mac_limit_action.is_set
	|| pbb_core_mac_limit_max.is_set
	|| pbb_core_mac_limit_notif.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(pbb_core_mac_limit_action.operation)
	|| is_set(pbb_core_mac_limit_max.operation)
	|| is_set(pbb_core_mac_limit_notif.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-mac-limit";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbbCoreMacLimit' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pbb_core_mac_limit_action.is_set || is_set(pbb_core_mac_limit_action.operation)) leaf_name_data.push_back(pbb_core_mac_limit_action.get_name_leafdata());
    if (pbb_core_mac_limit_max.is_set || is_set(pbb_core_mac_limit_max.operation)) leaf_name_data.push_back(pbb_core_mac_limit_max.get_name_leafdata());
    if (pbb_core_mac_limit_notif.is_set || is_set(pbb_core_mac_limit_notif.operation)) leaf_name_data.push_back(pbb_core_mac_limit_notif.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreMac::PbbCoreMacLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pbb-core-mac-limit-action")
    {
        pbb_core_mac_limit_action = value;
    }
    if(value_path == "pbb-core-mac-limit-max")
    {
        pbb_core_mac_limit_max = value;
    }
    if(value_path == "pbb-core-mac-limit-notif")
    {
        pbb_core_mac_limit_notif = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvis()
{
    yang_name = "pbb-core-evis"; yang_parent_name = "pbb-core";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::~PbbCoreEvis()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::has_data() const
{
    for (std::size_t index=0; index<pbb_core_evi.size(); index++)
    {
        if(pbb_core_evi[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::has_operation() const
{
    for (std::size_t index=0; index<pbb_core_evi.size(); index++)
    {
        if(pbb_core_evi[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-evis";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbbCoreEvis' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pbb-core-evi")
    {
        for(auto const & c : pbb_core_evi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi>();
        c->parent = this;
        pbb_core_evi.push_back(std::move(c));
        children[segment_path] = pbb_core_evi.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::get_children()
{
    for (auto const & c : pbb_core_evi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::PbbCoreEvi()
    :
    eviid{YType::uint32, "eviid"}
{
    yang_name = "pbb-core-evi"; yang_parent_name = "pbb-core-evis";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::~PbbCoreEvi()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::has_data() const
{
    return eviid.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::has_operation() const
{
    return is_set(operation)
	|| is_set(eviid.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-evi" <<"[eviid='" <<eviid <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbbCoreEvi' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eviid.is_set || is_set(eviid.operation)) leaf_name_data.push_back(eviid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreEvis::PbbCoreEvi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eviid")
    {
        eviid = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::PbbCoreDhcpProfile()
    :
    dhcp_snooping_id{YType::str, "dhcp-snooping-id"},
    profile_id{YType::enumeration, "profile-id"}
{
    yang_name = "pbb-core-dhcp-profile"; yang_parent_name = "pbb-core";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::~PbbCoreDhcpProfile()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::has_data() const
{
    return dhcp_snooping_id.is_set
	|| profile_id.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::has_operation() const
{
    return is_set(operation)
	|| is_set(dhcp_snooping_id.operation)
	|| is_set(profile_id.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb-core-dhcp-profile";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbbCoreDhcpProfile' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp_snooping_id.is_set || is_set(dhcp_snooping_id.operation)) leaf_name_data.push_back(dhcp_snooping_id.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.operation)) leaf_name_data.push_back(profile_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainPbb::PbbCore::PbbCoreDhcpProfile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id = value;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvis()
{
    yang_name = "bridge-domain-evis"; yang_parent_name = "bridge-domain";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::~BridgeDomainEvis()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::has_data() const
{
    for (std::size_t index=0; index<bridge_domain_evi.size(); index++)
    {
        if(bridge_domain_evi[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::has_operation() const
{
    for (std::size_t index=0; index<bridge_domain_evi.size(); index++)
    {
        if(bridge_domain_evi[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-evis";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BridgeDomainEvis' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bridge-domain-evi")
    {
        for(auto const & c : bridge_domain_evi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi>();
        c->parent = this;
        bridge_domain_evi.push_back(std::move(c));
        children[segment_path] = bridge_domain_evi.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::get_children()
{
    for (auto const & c : bridge_domain_evi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::BridgeDomainEvi()
    :
    eviid{YType::uint32, "eviid"}
{
    yang_name = "bridge-domain-evi"; yang_parent_name = "bridge-domain-evis";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::~BridgeDomainEvi()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::has_data() const
{
    return eviid.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::has_operation() const
{
    return is_set(operation)
	|| is_set(eviid.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-evi" <<"[eviid='" <<eviid <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BridgeDomainEvi' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eviid.is_set || is_set(eviid.operation)) leaf_name_data.push_back(eviid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BridgeDomainEvis::BridgeDomainEvi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eviid")
    {
        eviid = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfis()
{
    yang_name = "access-vfis"; yang_parent_name = "bridge-domain";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::~AccessVfis()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::has_data() const
{
    for (std::size_t index=0; index<access_vfi.size(); index++)
    {
        if(access_vfi[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::has_operation() const
{
    for (std::size_t index=0; index<access_vfi.size(); index++)
    {
        if(access_vfi[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfis";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessVfis' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-vfi")
    {
        for(auto const & c : access_vfi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi>();
        c->parent = this;
        access_vfi.push_back(std::move(c));
        children[segment_path] = access_vfi.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::get_children()
{
    for (auto const & c : access_vfi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfi()
    :
    name{YType::str, "name"}
    	,
    access_vfi_pseudowires(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires>())
{
    access_vfi_pseudowires->parent = this;
    children["access-vfi-pseudowires"] = access_vfi_pseudowires;

    yang_name = "access-vfi"; yang_parent_name = "access-vfis";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::~AccessVfi()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::has_data() const
{
    return name.is_set
	|| (access_vfi_pseudowires !=  nullptr && access_vfi_pseudowires->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (access_vfi_pseudowires !=  nullptr && access_vfi_pseudowires->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfi" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessVfi' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-vfi-pseudowires")
    {
        if(access_vfi_pseudowires != nullptr)
        {
            children["access-vfi-pseudowires"] = access_vfi_pseudowires;
        }
        else
        {
            access_vfi_pseudowires = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires>();
            access_vfi_pseudowires->parent = this;
            children["access-vfi-pseudowires"] = access_vfi_pseudowires;
        }
        return children.at("access-vfi-pseudowires");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::get_children()
{
    if(children.find("access-vfi-pseudowires") == children.end())
    {
        if(access_vfi_pseudowires != nullptr)
        {
            children["access-vfi-pseudowires"] = access_vfi_pseudowires;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowires()
{
    yang_name = "access-vfi-pseudowires"; yang_parent_name = "access-vfi";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::~AccessVfiPseudowires()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::has_data() const
{
    for (std::size_t index=0; index<access_vfi_pseudowire.size(); index++)
    {
        if(access_vfi_pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::has_operation() const
{
    for (std::size_t index=0; index<access_vfi_pseudowire.size(); index++)
    {
        if(access_vfi_pseudowire[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfi-pseudowires";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessVfiPseudowires' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-vfi-pseudowire")
    {
        for(auto const & c : access_vfi_pseudowire)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire>();
        c->parent = this;
        access_vfi_pseudowire.push_back(std::move(c));
        children[segment_path] = access_vfi_pseudowire.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::get_children()
{
    for (auto const & c : access_vfi_pseudowire)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowire()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"}
    	,
    access_vfi_pseudowire_static_mac_addresses(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses>())
{
    access_vfi_pseudowire_static_mac_addresses->parent = this;
    children["access-vfi-pseudowire-static-mac-addresses"] = access_vfi_pseudowire_static_mac_addresses;

    yang_name = "access-vfi-pseudowire"; yang_parent_name = "access-vfi-pseudowires";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::~AccessVfiPseudowire()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::has_data() const
{
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| (access_vfi_pseudowire_static_mac_addresses !=  nullptr && access_vfi_pseudowire_static_mac_addresses->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor.operation)
	|| is_set(pseudowire_id.operation)
	|| (access_vfi_pseudowire_static_mac_addresses !=  nullptr && access_vfi_pseudowire_static_mac_addresses->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfi-pseudowire" <<"[neighbor='" <<neighbor <<"']" <<"[pseudowire-id='" <<pseudowire_id <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessVfiPseudowire' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.operation)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-vfi-pseudowire-static-mac-addresses")
    {
        if(access_vfi_pseudowire_static_mac_addresses != nullptr)
        {
            children["access-vfi-pseudowire-static-mac-addresses"] = access_vfi_pseudowire_static_mac_addresses;
        }
        else
        {
            access_vfi_pseudowire_static_mac_addresses = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses>();
            access_vfi_pseudowire_static_mac_addresses->parent = this;
            children["access-vfi-pseudowire-static-mac-addresses"] = access_vfi_pseudowire_static_mac_addresses;
        }
        return children.at("access-vfi-pseudowire-static-mac-addresses");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::get_children()
{
    if(children.find("access-vfi-pseudowire-static-mac-addresses") == children.end())
    {
        if(access_vfi_pseudowire_static_mac_addresses != nullptr)
        {
            children["access-vfi-pseudowire-static-mac-addresses"] = access_vfi_pseudowire_static_mac_addresses;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddresses()
{
    yang_name = "access-vfi-pseudowire-static-mac-addresses"; yang_parent_name = "access-vfi-pseudowire";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::~AccessVfiPseudowireStaticMacAddresses()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::has_data() const
{
    for (std::size_t index=0; index<access_vfi_pseudowire_static_mac_address.size(); index++)
    {
        if(access_vfi_pseudowire_static_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::has_operation() const
{
    for (std::size_t index=0; index<access_vfi_pseudowire_static_mac_address.size(); index++)
    {
        if(access_vfi_pseudowire_static_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfi-pseudowire-static-mac-addresses";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessVfiPseudowireStaticMacAddresses' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "access-vfi-pseudowire-static-mac-address")
    {
        for(auto const & c : access_vfi_pseudowire_static_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress>();
        c->parent = this;
        access_vfi_pseudowire_static_mac_address.push_back(std::move(c));
        children[segment_path] = access_vfi_pseudowire_static_mac_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::get_children()
{
    for (auto const & c : access_vfi_pseudowire_static_mac_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::AccessVfiPseudowireStaticMacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "access-vfi-pseudowire-static-mac-address"; yang_parent_name = "access-vfi-pseudowire-static-mac-addresses";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::~AccessVfiPseudowireStaticMacAddress()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::has_data() const
{
    return address.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-vfi-pseudowire-static-mac-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccessVfiPseudowireStaticMacAddress' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::AccessVfis::AccessVfi::AccessVfiPseudowires::AccessVfiPseudowire::AccessVfiPseudowireStaticMacAddresses::AccessVfiPseudowireStaticMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowires()
{
    yang_name = "bd-pseudowires"; yang_parent_name = "bridge-domain";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::~BdPseudowires()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::has_data() const
{
    for (std::size_t index=0; index<bd_pseudowire.size(); index++)
    {
        if(bd_pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::has_operation() const
{
    for (std::size_t index=0; index<bd_pseudowire.size(); index++)
    {
        if(bd_pseudowire[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pseudowires";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdPseudowires' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bd-pseudowire")
    {
        for(auto const & c : bd_pseudowire)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire>();
        c->parent = this;
        bd_pseudowire.push_back(std::move(c));
        children[segment_path] = bd_pseudowire.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::get_children()
{
    for (auto const & c : bd_pseudowire)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPseudowire()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    bd_pw_class{YType::str, "bd-pw-class"},
    pseudowire_flooding{YType::enumeration, "pseudowire-flooding"},
    pseudowire_flooding_unknown_unicast{YType::enumeration, "pseudowire-flooding-unknown-unicast"},
    pseudowire_igmp_snoop{YType::str, "pseudowire-igmp-snoop"},
    pseudowire_mld_snoop{YType::str, "pseudowire-mld-snoop"}
    	,
    bd_pw_mpls_static_labels(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels>())
	,bd_pw_split_horizon(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon>())
	,bd_pw_static_mac_addresses(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses>())
	,bdpw_storm_control_types(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes>())
	,bridge_domain_backup_pseudowires(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires>())
	,pseudowire_dai(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai>())
	,pseudowire_ip_source_guard(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard>())
	,pseudowire_mac(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac>())
	,pseudowire_profile(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile>())
{
    bd_pw_mpls_static_labels->parent = this;
    children["bd-pw-mpls-static-labels"] = bd_pw_mpls_static_labels;

    bd_pw_split_horizon->parent = this;
    children["bd-pw-split-horizon"] = bd_pw_split_horizon;

    bd_pw_static_mac_addresses->parent = this;
    children["bd-pw-static-mac-addresses"] = bd_pw_static_mac_addresses;

    bdpw_storm_control_types->parent = this;
    children["bdpw-storm-control-types"] = bdpw_storm_control_types;

    bridge_domain_backup_pseudowires->parent = this;
    children["bridge-domain-backup-pseudowires"] = bridge_domain_backup_pseudowires;

    pseudowire_dai->parent = this;
    children["pseudowire-dai"] = pseudowire_dai;

    pseudowire_ip_source_guard->parent = this;
    children["pseudowire-ip-source-guard"] = pseudowire_ip_source_guard;

    pseudowire_mac->parent = this;
    children["pseudowire-mac"] = pseudowire_mac;

    pseudowire_profile->parent = this;
    children["pseudowire-profile"] = pseudowire_profile;

    yang_name = "bd-pseudowire"; yang_parent_name = "bd-pseudowires";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::~BdPseudowire()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::has_data() const
{
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| bd_pw_class.is_set
	|| pseudowire_flooding.is_set
	|| pseudowire_flooding_unknown_unicast.is_set
	|| pseudowire_igmp_snoop.is_set
	|| pseudowire_mld_snoop.is_set
	|| (bd_pw_mpls_static_labels !=  nullptr && bd_pw_mpls_static_labels->has_data())
	|| (bd_pw_split_horizon !=  nullptr && bd_pw_split_horizon->has_data())
	|| (bd_pw_static_mac_addresses !=  nullptr && bd_pw_static_mac_addresses->has_data())
	|| (bdpw_storm_control_types !=  nullptr && bdpw_storm_control_types->has_data())
	|| (bridge_domain_backup_pseudowires !=  nullptr && bridge_domain_backup_pseudowires->has_data())
	|| (pseudowire_dai !=  nullptr && pseudowire_dai->has_data())
	|| (pseudowire_ip_source_guard !=  nullptr && pseudowire_ip_source_guard->has_data())
	|| (pseudowire_mac !=  nullptr && pseudowire_mac->has_data())
	|| (pseudowire_profile !=  nullptr && pseudowire_profile->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor.operation)
	|| is_set(pseudowire_id.operation)
	|| is_set(bd_pw_class.operation)
	|| is_set(pseudowire_flooding.operation)
	|| is_set(pseudowire_flooding_unknown_unicast.operation)
	|| is_set(pseudowire_igmp_snoop.operation)
	|| is_set(pseudowire_mld_snoop.operation)
	|| (bd_pw_mpls_static_labels !=  nullptr && bd_pw_mpls_static_labels->has_operation())
	|| (bd_pw_split_horizon !=  nullptr && bd_pw_split_horizon->has_operation())
	|| (bd_pw_static_mac_addresses !=  nullptr && bd_pw_static_mac_addresses->has_operation())
	|| (bdpw_storm_control_types !=  nullptr && bdpw_storm_control_types->has_operation())
	|| (bridge_domain_backup_pseudowires !=  nullptr && bridge_domain_backup_pseudowires->has_operation())
	|| (pseudowire_dai !=  nullptr && pseudowire_dai->has_operation())
	|| (pseudowire_ip_source_guard !=  nullptr && pseudowire_ip_source_guard->has_operation())
	|| (pseudowire_mac !=  nullptr && pseudowire_mac->has_operation())
	|| (pseudowire_profile !=  nullptr && pseudowire_profile->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pseudowire" <<"[neighbor='" <<neighbor <<"']" <<"[pseudowire-id='" <<pseudowire_id <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdPseudowire' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.operation)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (bd_pw_class.is_set || is_set(bd_pw_class.operation)) leaf_name_data.push_back(bd_pw_class.get_name_leafdata());
    if (pseudowire_flooding.is_set || is_set(pseudowire_flooding.operation)) leaf_name_data.push_back(pseudowire_flooding.get_name_leafdata());
    if (pseudowire_flooding_unknown_unicast.is_set || is_set(pseudowire_flooding_unknown_unicast.operation)) leaf_name_data.push_back(pseudowire_flooding_unknown_unicast.get_name_leafdata());
    if (pseudowire_igmp_snoop.is_set || is_set(pseudowire_igmp_snoop.operation)) leaf_name_data.push_back(pseudowire_igmp_snoop.get_name_leafdata());
    if (pseudowire_mld_snoop.is_set || is_set(pseudowire_mld_snoop.operation)) leaf_name_data.push_back(pseudowire_mld_snoop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bd-pw-mpls-static-labels")
    {
        if(bd_pw_mpls_static_labels != nullptr)
        {
            children["bd-pw-mpls-static-labels"] = bd_pw_mpls_static_labels;
        }
        else
        {
            bd_pw_mpls_static_labels = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels>();
            bd_pw_mpls_static_labels->parent = this;
            children["bd-pw-mpls-static-labels"] = bd_pw_mpls_static_labels;
        }
        return children.at("bd-pw-mpls-static-labels");
    }

    if(child_yang_name == "bd-pw-split-horizon")
    {
        if(bd_pw_split_horizon != nullptr)
        {
            children["bd-pw-split-horizon"] = bd_pw_split_horizon;
        }
        else
        {
            bd_pw_split_horizon = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon>();
            bd_pw_split_horizon->parent = this;
            children["bd-pw-split-horizon"] = bd_pw_split_horizon;
        }
        return children.at("bd-pw-split-horizon");
    }

    if(child_yang_name == "bd-pw-static-mac-addresses")
    {
        if(bd_pw_static_mac_addresses != nullptr)
        {
            children["bd-pw-static-mac-addresses"] = bd_pw_static_mac_addresses;
        }
        else
        {
            bd_pw_static_mac_addresses = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses>();
            bd_pw_static_mac_addresses->parent = this;
            children["bd-pw-static-mac-addresses"] = bd_pw_static_mac_addresses;
        }
        return children.at("bd-pw-static-mac-addresses");
    }

    if(child_yang_name == "bdpw-storm-control-types")
    {
        if(bdpw_storm_control_types != nullptr)
        {
            children["bdpw-storm-control-types"] = bdpw_storm_control_types;
        }
        else
        {
            bdpw_storm_control_types = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes>();
            bdpw_storm_control_types->parent = this;
            children["bdpw-storm-control-types"] = bdpw_storm_control_types;
        }
        return children.at("bdpw-storm-control-types");
    }

    if(child_yang_name == "bridge-domain-backup-pseudowires")
    {
        if(bridge_domain_backup_pseudowires != nullptr)
        {
            children["bridge-domain-backup-pseudowires"] = bridge_domain_backup_pseudowires;
        }
        else
        {
            bridge_domain_backup_pseudowires = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires>();
            bridge_domain_backup_pseudowires->parent = this;
            children["bridge-domain-backup-pseudowires"] = bridge_domain_backup_pseudowires;
        }
        return children.at("bridge-domain-backup-pseudowires");
    }

    if(child_yang_name == "pseudowire-dai")
    {
        if(pseudowire_dai != nullptr)
        {
            children["pseudowire-dai"] = pseudowire_dai;
        }
        else
        {
            pseudowire_dai = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai>();
            pseudowire_dai->parent = this;
            children["pseudowire-dai"] = pseudowire_dai;
        }
        return children.at("pseudowire-dai");
    }

    if(child_yang_name == "pseudowire-ip-source-guard")
    {
        if(pseudowire_ip_source_guard != nullptr)
        {
            children["pseudowire-ip-source-guard"] = pseudowire_ip_source_guard;
        }
        else
        {
            pseudowire_ip_source_guard = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard>();
            pseudowire_ip_source_guard->parent = this;
            children["pseudowire-ip-source-guard"] = pseudowire_ip_source_guard;
        }
        return children.at("pseudowire-ip-source-guard");
    }

    if(child_yang_name == "pseudowire-mac")
    {
        if(pseudowire_mac != nullptr)
        {
            children["pseudowire-mac"] = pseudowire_mac;
        }
        else
        {
            pseudowire_mac = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac>();
            pseudowire_mac->parent = this;
            children["pseudowire-mac"] = pseudowire_mac;
        }
        return children.at("pseudowire-mac");
    }

    if(child_yang_name == "pseudowire-profile")
    {
        if(pseudowire_profile != nullptr)
        {
            children["pseudowire-profile"] = pseudowire_profile;
        }
        else
        {
            pseudowire_profile = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile>();
            pseudowire_profile->parent = this;
            children["pseudowire-profile"] = pseudowire_profile;
        }
        return children.at("pseudowire-profile");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::get_children()
{
    if(children.find("bd-pw-mpls-static-labels") == children.end())
    {
        if(bd_pw_mpls_static_labels != nullptr)
        {
            children["bd-pw-mpls-static-labels"] = bd_pw_mpls_static_labels;
        }
    }

    if(children.find("bd-pw-split-horizon") == children.end())
    {
        if(bd_pw_split_horizon != nullptr)
        {
            children["bd-pw-split-horizon"] = bd_pw_split_horizon;
        }
    }

    if(children.find("bd-pw-static-mac-addresses") == children.end())
    {
        if(bd_pw_static_mac_addresses != nullptr)
        {
            children["bd-pw-static-mac-addresses"] = bd_pw_static_mac_addresses;
        }
    }

    if(children.find("bdpw-storm-control-types") == children.end())
    {
        if(bdpw_storm_control_types != nullptr)
        {
            children["bdpw-storm-control-types"] = bdpw_storm_control_types;
        }
    }

    if(children.find("bridge-domain-backup-pseudowires") == children.end())
    {
        if(bridge_domain_backup_pseudowires != nullptr)
        {
            children["bridge-domain-backup-pseudowires"] = bridge_domain_backup_pseudowires;
        }
    }

    if(children.find("pseudowire-dai") == children.end())
    {
        if(pseudowire_dai != nullptr)
        {
            children["pseudowire-dai"] = pseudowire_dai;
        }
    }

    if(children.find("pseudowire-ip-source-guard") == children.end())
    {
        if(pseudowire_ip_source_guard != nullptr)
        {
            children["pseudowire-ip-source-guard"] = pseudowire_ip_source_guard;
        }
    }

    if(children.find("pseudowire-mac") == children.end())
    {
        if(pseudowire_mac != nullptr)
        {
            children["pseudowire-mac"] = pseudowire_mac;
        }
    }

    if(children.find("pseudowire-profile") == children.end())
    {
        if(pseudowire_profile != nullptr)
        {
            children["pseudowire-profile"] = pseudowire_profile;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
    }
    if(value_path == "bd-pw-class")
    {
        bd_pw_class = value;
    }
    if(value_path == "pseudowire-flooding")
    {
        pseudowire_flooding = value;
    }
    if(value_path == "pseudowire-flooding-unknown-unicast")
    {
        pseudowire_flooding_unknown_unicast = value;
    }
    if(value_path == "pseudowire-igmp-snoop")
    {
        pseudowire_igmp_snoop = value;
    }
    if(value_path == "pseudowire-mld-snoop")
    {
        pseudowire_mld_snoop = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDai()
    :
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"},
    logging{YType::enumeration, "logging"}
    	,
    pseudowire_dai_address_validation(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation>())
{
    pseudowire_dai_address_validation->parent = this;
    children["pseudowire-dai-address-validation"] = pseudowire_dai_address_validation;

    yang_name = "pseudowire-dai"; yang_parent_name = "bd-pseudowire";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::~PseudowireDai()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::has_data() const
{
    return disable.is_set
	|| enable.is_set
	|| logging.is_set
	|| (pseudowire_dai_address_validation !=  nullptr && pseudowire_dai_address_validation->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(enable.operation)
	|| is_set(logging.operation)
	|| (pseudowire_dai_address_validation !=  nullptr && pseudowire_dai_address_validation->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-dai";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireDai' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pseudowire-dai-address-validation")
    {
        if(pseudowire_dai_address_validation != nullptr)
        {
            children["pseudowire-dai-address-validation"] = pseudowire_dai_address_validation;
        }
        else
        {
            pseudowire_dai_address_validation = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation>();
            pseudowire_dai_address_validation->parent = this;
            children["pseudowire-dai-address-validation"] = pseudowire_dai_address_validation;
        }
        return children.at("pseudowire-dai-address-validation");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::get_children()
{
    if(children.find("pseudowire-dai-address-validation") == children.end())
    {
        if(pseudowire_dai_address_validation != nullptr)
        {
            children["pseudowire-dai-address-validation"] = pseudowire_dai_address_validation;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "logging")
    {
        logging = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::PseudowireDaiAddressValidation()
    :
    destination_mac_verification{YType::enumeration, "destination-mac-verification"},
    ipv4_verification{YType::enumeration, "ipv4-verification"},
    source_mac_verification{YType::enumeration, "source-mac-verification"}
{
    yang_name = "pseudowire-dai-address-validation"; yang_parent_name = "pseudowire-dai";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::~PseudowireDaiAddressValidation()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::has_data() const
{
    return destination_mac_verification.is_set
	|| ipv4_verification.is_set
	|| source_mac_verification.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_mac_verification.operation)
	|| is_set(ipv4_verification.operation)
	|| is_set(source_mac_verification.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-dai-address-validation";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireDaiAddressValidation' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_mac_verification.is_set || is_set(destination_mac_verification.operation)) leaf_name_data.push_back(destination_mac_verification.get_name_leafdata());
    if (ipv4_verification.is_set || is_set(ipv4_verification.operation)) leaf_name_data.push_back(ipv4_verification.get_name_leafdata());
    if (source_mac_verification.is_set || is_set(source_mac_verification.operation)) leaf_name_data.push_back(source_mac_verification.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireDai::PseudowireDaiAddressValidation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-mac-verification")
    {
        destination_mac_verification = value;
    }
    if(value_path == "ipv4-verification")
    {
        ipv4_verification = value;
    }
    if(value_path == "source-mac-verification")
    {
        source_mac_verification = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlTypes()
{
    yang_name = "bdpw-storm-control-types"; yang_parent_name = "bd-pseudowire";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::~BdpwStormControlTypes()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::has_data() const
{
    for (std::size_t index=0; index<bdpw_storm_control_type.size(); index++)
    {
        if(bdpw_storm_control_type[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::has_operation() const
{
    for (std::size_t index=0; index<bdpw_storm_control_type.size(); index++)
    {
        if(bdpw_storm_control_type[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdpw-storm-control-types";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdpwStormControlTypes' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bdpw-storm-control-type")
    {
        for(auto const & c : bdpw_storm_control_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType>();
        c->parent = this;
        bdpw_storm_control_type.push_back(std::move(c));
        children[segment_path] = bdpw_storm_control_type.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::get_children()
{
    for (auto const & c : bdpw_storm_control_type)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::BdpwStormControlType()
    :
    sctype{YType::enumeration, "sctype"}
    	,
    storm_control_unit(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit>())
{
    storm_control_unit->parent = this;
    children["storm-control-unit"] = storm_control_unit;

    yang_name = "bdpw-storm-control-type"; yang_parent_name = "bdpw-storm-control-types";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::~BdpwStormControlType()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::has_data() const
{
    return sctype.is_set
	|| (storm_control_unit !=  nullptr && storm_control_unit->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::has_operation() const
{
    return is_set(operation)
	|| is_set(sctype.operation)
	|| (storm_control_unit !=  nullptr && storm_control_unit->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdpw-storm-control-type" <<"[sctype='" <<sctype <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdpwStormControlType' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sctype.is_set || is_set(sctype.operation)) leaf_name_data.push_back(sctype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "storm-control-unit")
    {
        if(storm_control_unit != nullptr)
        {
            children["storm-control-unit"] = storm_control_unit;
        }
        else
        {
            storm_control_unit = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit>();
            storm_control_unit->parent = this;
            children["storm-control-unit"] = storm_control_unit;
        }
        return children.at("storm-control-unit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::get_children()
{
    if(children.find("storm-control-unit") == children.end())
    {
        if(storm_control_unit != nullptr)
        {
            children["storm-control-unit"] = storm_control_unit;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sctype")
    {
        sctype = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::StormControlUnit()
    :
    kbits_per_sec{YType::uint32, "kbits-per-sec"},
    pkts_per_sec{YType::uint32, "pkts-per-sec"}
{
    yang_name = "storm-control-unit"; yang_parent_name = "bdpw-storm-control-type";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::~StormControlUnit()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::has_data() const
{
    return kbits_per_sec.is_set
	|| pkts_per_sec.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::has_operation() const
{
    return is_set(operation)
	|| is_set(kbits_per_sec.operation)
	|| is_set(pkts_per_sec.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control-unit";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StormControlUnit' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kbits_per_sec.is_set || is_set(kbits_per_sec.operation)) leaf_name_data.push_back(kbits_per_sec.get_name_leafdata());
    if (pkts_per_sec.is_set || is_set(pkts_per_sec.operation)) leaf_name_data.push_back(pkts_per_sec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdpwStormControlTypes::BdpwStormControlType::StormControlUnit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "kbits-per-sec")
    {
        kbits_per_sec = value;
    }
    if(value_path == "pkts-per-sec")
    {
        pkts_per_sec = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::PseudowireProfile()
    :
    dhcp_snooping_id{YType::str, "dhcp-snooping-id"},
    profile_id{YType::enumeration, "profile-id"}
{
    yang_name = "pseudowire-profile"; yang_parent_name = "bd-pseudowire";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::~PseudowireProfile()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::has_data() const
{
    return dhcp_snooping_id.is_set
	|| profile_id.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::has_operation() const
{
    return is_set(operation)
	|| is_set(dhcp_snooping_id.operation)
	|| is_set(profile_id.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-profile";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireProfile' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp_snooping_id.is_set || is_set(dhcp_snooping_id.operation)) leaf_name_data.push_back(dhcp_snooping_id.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.operation)) leaf_name_data.push_back(profile_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireProfile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id = value;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddresses()
{
    yang_name = "bd-pw-static-mac-addresses"; yang_parent_name = "bd-pseudowire";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::~BdPwStaticMacAddresses()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::has_data() const
{
    for (std::size_t index=0; index<bd_pw_static_mac_address.size(); index++)
    {
        if(bd_pw_static_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::has_operation() const
{
    for (std::size_t index=0; index<bd_pw_static_mac_address.size(); index++)
    {
        if(bd_pw_static_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pw-static-mac-addresses";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdPwStaticMacAddresses' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bd-pw-static-mac-address")
    {
        for(auto const & c : bd_pw_static_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress>();
        c->parent = this;
        bd_pw_static_mac_address.push_back(std::move(c));
        children[segment_path] = bd_pw_static_mac_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::get_children()
{
    for (auto const & c : bd_pw_static_mac_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::BdPwStaticMacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "bd-pw-static-mac-address"; yang_parent_name = "bd-pw-static-mac-addresses";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::~BdPwStaticMacAddress()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::has_data() const
{
    return address.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pw-static-mac-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdPwStaticMacAddress' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwStaticMacAddresses::BdPwStaticMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::PseudowireIpSourceGuard()
    :
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"},
    logging{YType::enumeration, "logging"}
{
    yang_name = "pseudowire-ip-source-guard"; yang_parent_name = "bd-pseudowire";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::~PseudowireIpSourceGuard()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::has_data() const
{
    return disable.is_set
	|| enable.is_set
	|| logging.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(enable.operation)
	|| is_set(logging.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ip-source-guard";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireIpSourceGuard' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireIpSourceGuard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "logging")
    {
        logging = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMac()
    :
    enable{YType::empty, "enable"},
    pseudowire_mac_learning{YType::enumeration, "pseudowire-mac-learning"},
    pseudowire_mac_port_down_flush{YType::enumeration, "pseudowire-mac-port-down-flush"}
    	,
    pseudowire_mac_aging(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging>())
	,pseudowire_mac_limit(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit>())
	,pseudowire_mac_secure(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure>())
{
    pseudowire_mac_aging->parent = this;
    children["pseudowire-mac-aging"] = pseudowire_mac_aging;

    pseudowire_mac_limit->parent = this;
    children["pseudowire-mac-limit"] = pseudowire_mac_limit;

    pseudowire_mac_secure->parent = this;
    children["pseudowire-mac-secure"] = pseudowire_mac_secure;

    yang_name = "pseudowire-mac"; yang_parent_name = "bd-pseudowire";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::~PseudowireMac()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::has_data() const
{
    return enable.is_set
	|| pseudowire_mac_learning.is_set
	|| pseudowire_mac_port_down_flush.is_set
	|| (pseudowire_mac_aging !=  nullptr && pseudowire_mac_aging->has_data())
	|| (pseudowire_mac_limit !=  nullptr && pseudowire_mac_limit->has_data())
	|| (pseudowire_mac_secure !=  nullptr && pseudowire_mac_secure->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(pseudowire_mac_learning.operation)
	|| is_set(pseudowire_mac_port_down_flush.operation)
	|| (pseudowire_mac_aging !=  nullptr && pseudowire_mac_aging->has_operation())
	|| (pseudowire_mac_limit !=  nullptr && pseudowire_mac_limit->has_operation())
	|| (pseudowire_mac_secure !=  nullptr && pseudowire_mac_secure->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-mac";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireMac' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (pseudowire_mac_learning.is_set || is_set(pseudowire_mac_learning.operation)) leaf_name_data.push_back(pseudowire_mac_learning.get_name_leafdata());
    if (pseudowire_mac_port_down_flush.is_set || is_set(pseudowire_mac_port_down_flush.operation)) leaf_name_data.push_back(pseudowire_mac_port_down_flush.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pseudowire-mac-aging")
    {
        if(pseudowire_mac_aging != nullptr)
        {
            children["pseudowire-mac-aging"] = pseudowire_mac_aging;
        }
        else
        {
            pseudowire_mac_aging = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging>();
            pseudowire_mac_aging->parent = this;
            children["pseudowire-mac-aging"] = pseudowire_mac_aging;
        }
        return children.at("pseudowire-mac-aging");
    }

    if(child_yang_name == "pseudowire-mac-limit")
    {
        if(pseudowire_mac_limit != nullptr)
        {
            children["pseudowire-mac-limit"] = pseudowire_mac_limit;
        }
        else
        {
            pseudowire_mac_limit = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit>();
            pseudowire_mac_limit->parent = this;
            children["pseudowire-mac-limit"] = pseudowire_mac_limit;
        }
        return children.at("pseudowire-mac-limit");
    }

    if(child_yang_name == "pseudowire-mac-secure")
    {
        if(pseudowire_mac_secure != nullptr)
        {
            children["pseudowire-mac-secure"] = pseudowire_mac_secure;
        }
        else
        {
            pseudowire_mac_secure = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure>();
            pseudowire_mac_secure->parent = this;
            children["pseudowire-mac-secure"] = pseudowire_mac_secure;
        }
        return children.at("pseudowire-mac-secure");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::get_children()
{
    if(children.find("pseudowire-mac-aging") == children.end())
    {
        if(pseudowire_mac_aging != nullptr)
        {
            children["pseudowire-mac-aging"] = pseudowire_mac_aging;
        }
    }

    if(children.find("pseudowire-mac-limit") == children.end())
    {
        if(pseudowire_mac_limit != nullptr)
        {
            children["pseudowire-mac-limit"] = pseudowire_mac_limit;
        }
    }

    if(children.find("pseudowire-mac-secure") == children.end())
    {
        if(pseudowire_mac_secure != nullptr)
        {
            children["pseudowire-mac-secure"] = pseudowire_mac_secure;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "pseudowire-mac-learning")
    {
        pseudowire_mac_learning = value;
    }
    if(value_path == "pseudowire-mac-port-down-flush")
    {
        pseudowire_mac_port_down_flush = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::PseudowireMacSecure()
    :
    action{YType::enumeration, "action"},
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"},
    logging{YType::enumeration, "logging"}
{
    yang_name = "pseudowire-mac-secure"; yang_parent_name = "pseudowire-mac";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::~PseudowireMacSecure()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::has_data() const
{
    return action.is_set
	|| disable.is_set
	|| enable.is_set
	|| logging.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::has_operation() const
{
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(disable.operation)
	|| is_set(enable.operation)
	|| is_set(logging.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-mac-secure";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireMacSecure' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacSecure::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "logging")
    {
        logging = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::PseudowireMacAging()
    :
    pseudowire_mac_aging_time{YType::uint32, "pseudowire-mac-aging-time"},
    pseudowire_mac_aging_type{YType::enumeration, "pseudowire-mac-aging-type"}
{
    yang_name = "pseudowire-mac-aging"; yang_parent_name = "pseudowire-mac";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::~PseudowireMacAging()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::has_data() const
{
    return pseudowire_mac_aging_time.is_set
	|| pseudowire_mac_aging_type.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::has_operation() const
{
    return is_set(operation)
	|| is_set(pseudowire_mac_aging_time.operation)
	|| is_set(pseudowire_mac_aging_type.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-mac-aging";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireMacAging' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_mac_aging_time.is_set || is_set(pseudowire_mac_aging_time.operation)) leaf_name_data.push_back(pseudowire_mac_aging_time.get_name_leafdata());
    if (pseudowire_mac_aging_type.is_set || is_set(pseudowire_mac_aging_type.operation)) leaf_name_data.push_back(pseudowire_mac_aging_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacAging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pseudowire-mac-aging-time")
    {
        pseudowire_mac_aging_time = value;
    }
    if(value_path == "pseudowire-mac-aging-type")
    {
        pseudowire_mac_aging_type = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::PseudowireMacLimit()
    :
    pseudowire_mac_limit_action{YType::enumeration, "pseudowire-mac-limit-action"},
    pseudowire_mac_limit_max{YType::uint32, "pseudowire-mac-limit-max"},
    pseudowire_mac_limit_notif{YType::enumeration, "pseudowire-mac-limit-notif"}
{
    yang_name = "pseudowire-mac-limit"; yang_parent_name = "pseudowire-mac";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::~PseudowireMacLimit()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::has_data() const
{
    return pseudowire_mac_limit_action.is_set
	|| pseudowire_mac_limit_max.is_set
	|| pseudowire_mac_limit_notif.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(pseudowire_mac_limit_action.operation)
	|| is_set(pseudowire_mac_limit_max.operation)
	|| is_set(pseudowire_mac_limit_notif.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-mac-limit";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireMacLimit' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pseudowire_mac_limit_action.is_set || is_set(pseudowire_mac_limit_action.operation)) leaf_name_data.push_back(pseudowire_mac_limit_action.get_name_leafdata());
    if (pseudowire_mac_limit_max.is_set || is_set(pseudowire_mac_limit_max.operation)) leaf_name_data.push_back(pseudowire_mac_limit_max.get_name_leafdata());
    if (pseudowire_mac_limit_notif.is_set || is_set(pseudowire_mac_limit_notif.operation)) leaf_name_data.push_back(pseudowire_mac_limit_notif.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::PseudowireMac::PseudowireMacLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pseudowire-mac-limit-action")
    {
        pseudowire_mac_limit_action = value;
    }
    if(value_path == "pseudowire-mac-limit-max")
    {
        pseudowire_mac_limit_max = value;
    }
    if(value_path == "pseudowire-mac-limit-notif")
    {
        pseudowire_mac_limit_notif = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizon()
    :
    bd_pw_split_horizon_group(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup>())
{
    bd_pw_split_horizon_group->parent = this;
    children["bd-pw-split-horizon-group"] = bd_pw_split_horizon_group;

    yang_name = "bd-pw-split-horizon"; yang_parent_name = "bd-pseudowire";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::~BdPwSplitHorizon()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::has_data() const
{
    return (bd_pw_split_horizon_group !=  nullptr && bd_pw_split_horizon_group->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::has_operation() const
{
    return is_set(operation)
	|| (bd_pw_split_horizon_group !=  nullptr && bd_pw_split_horizon_group->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pw-split-horizon";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdPwSplitHorizon' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bd-pw-split-horizon-group")
    {
        if(bd_pw_split_horizon_group != nullptr)
        {
            children["bd-pw-split-horizon-group"] = bd_pw_split_horizon_group;
        }
        else
        {
            bd_pw_split_horizon_group = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup>();
            bd_pw_split_horizon_group->parent = this;
            children["bd-pw-split-horizon-group"] = bd_pw_split_horizon_group;
        }
        return children.at("bd-pw-split-horizon-group");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::get_children()
{
    if(children.find("bd-pw-split-horizon-group") == children.end())
    {
        if(bd_pw_split_horizon_group != nullptr)
        {
            children["bd-pw-split-horizon-group"] = bd_pw_split_horizon_group;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::BdPwSplitHorizonGroup()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "bd-pw-split-horizon-group"; yang_parent_name = "bd-pw-split-horizon";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::~BdPwSplitHorizonGroup()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::has_data() const
{
    return enable.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pw-split-horizon-group";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdPwSplitHorizonGroup' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwSplitHorizon::BdPwSplitHorizonGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::BdPwMplsStaticLabels()
    :
    local_static_label{YType::uint32, "local-static-label"},
    remote_static_label{YType::uint32, "remote-static-label"}
{
    yang_name = "bd-pw-mpls-static-labels"; yang_parent_name = "bd-pseudowire";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::~BdPwMplsStaticLabels()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::has_data() const
{
    return local_static_label.is_set
	|| remote_static_label.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::has_operation() const
{
    return is_set(operation)
	|| is_set(local_static_label.operation)
	|| is_set(remote_static_label.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pw-mpls-static-labels";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdPwMplsStaticLabels' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_static_label.is_set || is_set(local_static_label.operation)) leaf_name_data.push_back(local_static_label.get_name_leafdata());
    if (remote_static_label.is_set || is_set(remote_static_label.operation)) leaf_name_data.push_back(remote_static_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BdPwMplsStaticLabels::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-static-label")
    {
        local_static_label = value;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowires()
{
    yang_name = "bridge-domain-backup-pseudowires"; yang_parent_name = "bd-pseudowire";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::~BridgeDomainBackupPseudowires()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::has_data() const
{
    for (std::size_t index=0; index<bridge_domain_backup_pseudowire.size(); index++)
    {
        if(bridge_domain_backup_pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::has_operation() const
{
    for (std::size_t index=0; index<bridge_domain_backup_pseudowire.size(); index++)
    {
        if(bridge_domain_backup_pseudowire[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-backup-pseudowires";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BridgeDomainBackupPseudowires' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bridge-domain-backup-pseudowire")
    {
        for(auto const & c : bridge_domain_backup_pseudowire)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire>();
        c->parent = this;
        bridge_domain_backup_pseudowire.push_back(std::move(c));
        children[segment_path] = bridge_domain_backup_pseudowire.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::get_children()
{
    for (auto const & c : bridge_domain_backup_pseudowire)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::BridgeDomainBackupPseudowire()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    bridge_domain_backup_pw_class{YType::str, "bridge-domain-backup-pw-class"}
{
    yang_name = "bridge-domain-backup-pseudowire"; yang_parent_name = "bridge-domain-backup-pseudowires";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::~BridgeDomainBackupPseudowire()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::has_data() const
{
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| bridge_domain_backup_pw_class.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor.operation)
	|| is_set(pseudowire_id.operation)
	|| is_set(bridge_domain_backup_pw_class.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-backup-pseudowire" <<"[neighbor='" <<neighbor <<"']" <<"[pseudowire-id='" <<pseudowire_id <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BridgeDomainBackupPseudowire' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.operation)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (bridge_domain_backup_pw_class.is_set || is_set(bridge_domain_backup_pw_class.operation)) leaf_name_data.push_back(bridge_domain_backup_pw_class.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowires::BdPseudowire::BridgeDomainBackupPseudowires::BridgeDomainBackupPseudowire::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
    }
    if(value_path == "bridge-domain-backup-pw-class")
    {
        bridge_domain_backup_pw_class = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfis()
{
    yang_name = "vfis"; yang_parent_name = "bridge-domain";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::~Vfis()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::has_data() const
{
    for (std::size_t index=0; index<vfi.size(); index++)
    {
        if(vfi[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::has_operation() const
{
    for (std::size_t index=0; index<vfi.size(); index++)
    {
        if(vfi[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfis";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vfis' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vfi")
    {
        for(auto const & c : vfi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi>();
        c->parent = this;
        vfi.push_back(std::move(c));
        children[segment_path] = vfi.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::get_children()
{
    for (auto const & c : vfi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::Vfi()
    :
    name{YType::str, "name"},
    vfi_shutdown{YType::empty, "vfi-shutdown"},
    vpnid{YType::uint32, "vpnid"}
    	,
    bgp_auto_discovery(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery>())
	,multicast_p2mp(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp>())
	,vfi_pseudowires(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires>())
{
    bgp_auto_discovery->parent = this;
    children["bgp-auto-discovery"] = bgp_auto_discovery;

    multicast_p2mp->parent = this;
    children["multicast-p2mp"] = multicast_p2mp;

    vfi_pseudowires->parent = this;
    children["vfi-pseudowires"] = vfi_pseudowires;

    yang_name = "vfi"; yang_parent_name = "vfis";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::~Vfi()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::has_data() const
{
    return name.is_set
	|| vfi_shutdown.is_set
	|| vpnid.is_set
	|| (bgp_auto_discovery !=  nullptr && bgp_auto_discovery->has_data())
	|| (multicast_p2mp !=  nullptr && multicast_p2mp->has_data())
	|| (vfi_pseudowires !=  nullptr && vfi_pseudowires->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(vfi_shutdown.operation)
	|| is_set(vpnid.operation)
	|| (bgp_auto_discovery !=  nullptr && bgp_auto_discovery->has_operation())
	|| (multicast_p2mp !=  nullptr && multicast_p2mp->has_operation())
	|| (vfi_pseudowires !=  nullptr && vfi_pseudowires->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vfi' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (vfi_shutdown.is_set || is_set(vfi_shutdown.operation)) leaf_name_data.push_back(vfi_shutdown.get_name_leafdata());
    if (vpnid.is_set || is_set(vpnid.operation)) leaf_name_data.push_back(vpnid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-auto-discovery")
    {
        if(bgp_auto_discovery != nullptr)
        {
            children["bgp-auto-discovery"] = bgp_auto_discovery;
        }
        else
        {
            bgp_auto_discovery = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery>();
            bgp_auto_discovery->parent = this;
            children["bgp-auto-discovery"] = bgp_auto_discovery;
        }
        return children.at("bgp-auto-discovery");
    }

    if(child_yang_name == "multicast-p2mp")
    {
        if(multicast_p2mp != nullptr)
        {
            children["multicast-p2mp"] = multicast_p2mp;
        }
        else
        {
            multicast_p2mp = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp>();
            multicast_p2mp->parent = this;
            children["multicast-p2mp"] = multicast_p2mp;
        }
        return children.at("multicast-p2mp");
    }

    if(child_yang_name == "vfi-pseudowires")
    {
        if(vfi_pseudowires != nullptr)
        {
            children["vfi-pseudowires"] = vfi_pseudowires;
        }
        else
        {
            vfi_pseudowires = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires>();
            vfi_pseudowires->parent = this;
            children["vfi-pseudowires"] = vfi_pseudowires;
        }
        return children.at("vfi-pseudowires");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::get_children()
{
    if(children.find("bgp-auto-discovery") == children.end())
    {
        if(bgp_auto_discovery != nullptr)
        {
            children["bgp-auto-discovery"] = bgp_auto_discovery;
        }
    }

    if(children.find("multicast-p2mp") == children.end())
    {
        if(multicast_p2mp != nullptr)
        {
            children["multicast-p2mp"] = multicast_p2mp;
        }
    }

    if(children.find("vfi-pseudowires") == children.end())
    {
        if(vfi_pseudowires != nullptr)
        {
            children["vfi-pseudowires"] = vfi_pseudowires;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "vfi-shutdown")
    {
        vfi_shutdown = value;
    }
    if(value_path == "vpnid")
    {
        vpnid = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::MulticastP2Mp()
    :
    enable{YType::empty, "enable"}
    	,
    signalings(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings>())
	,transports(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports>())
{
    signalings->parent = this;
    children["signalings"] = signalings;

    transports->parent = this;
    children["transports"] = transports;

    yang_name = "multicast-p2mp"; yang_parent_name = "vfi";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::~MulticastP2Mp()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::has_data() const
{
    return enable.is_set
	|| (signalings !=  nullptr && signalings->has_data())
	|| (transports !=  nullptr && transports->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (signalings !=  nullptr && signalings->has_operation())
	|| (transports !=  nullptr && transports->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-p2mp";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MulticastP2Mp' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "signalings")
    {
        if(signalings != nullptr)
        {
            children["signalings"] = signalings;
        }
        else
        {
            signalings = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings>();
            signalings->parent = this;
            children["signalings"] = signalings;
        }
        return children.at("signalings");
    }

    if(child_yang_name == "transports")
    {
        if(transports != nullptr)
        {
            children["transports"] = transports;
        }
        else
        {
            transports = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports>();
            transports->parent = this;
            children["transports"] = transports;
        }
        return children.at("transports");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::get_children()
{
    if(children.find("signalings") == children.end())
    {
        if(signalings != nullptr)
        {
            children["signalings"] = signalings;
        }
    }

    if(children.find("transports") == children.end())
    {
        if(transports != nullptr)
        {
            children["transports"] = transports;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transports()
{
    yang_name = "transports"; yang_parent_name = "multicast-p2mp";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::~Transports()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::has_data() const
{
    for (std::size_t index=0; index<transport.size(); index++)
    {
        if(transport[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::has_operation() const
{
    for (std::size_t index=0; index<transport.size(); index++)
    {
        if(transport[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transports";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transports' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "transport")
    {
        for(auto const & c : transport)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport>();
        c->parent = this;
        transport.push_back(std::move(c));
        children[segment_path] = transport.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::get_children()
{
    for (auto const & c : transport)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport::Transport()
    :
    transport_name{YType::str, "transport-name"},
    attribute_set_name{YType::str, "attribute-set-name"}
{
    yang_name = "transport"; yang_parent_name = "transports";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport::~Transport()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport::has_data() const
{
    return transport_name.is_set
	|| attribute_set_name.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport::has_operation() const
{
    return is_set(operation)
	|| is_set(transport_name.operation)
	|| is_set(attribute_set_name.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport" <<"[transport-name='" <<transport_name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transport' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transport_name.is_set || is_set(transport_name.operation)) leaf_name_data.push_back(transport_name.get_name_leafdata());
    if (attribute_set_name.is_set || is_set(attribute_set_name.operation)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Transports::Transport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "transport-name")
    {
        transport_name = value;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signalings()
{
    yang_name = "signalings"; yang_parent_name = "multicast-p2mp";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::~Signalings()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::has_data() const
{
    for (std::size_t index=0; index<signaling.size(); index++)
    {
        if(signaling[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::has_operation() const
{
    for (std::size_t index=0; index<signaling.size(); index++)
    {
        if(signaling[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalings";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Signalings' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "signaling")
    {
        for(auto const & c : signaling)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling>();
        c->parent = this;
        signaling.push_back(std::move(c));
        children[segment_path] = signaling.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::get_children()
{
    for (auto const & c : signaling)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling::Signaling()
    :
    signaling_name{YType::str, "signaling-name"}
{
    yang_name = "signaling"; yang_parent_name = "signalings";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling::~Signaling()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling::has_data() const
{
    return signaling_name.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling::has_operation() const
{
    return is_set(operation)
	|| is_set(signaling_name.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaling" <<"[signaling-name='" <<signaling_name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Signaling' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (signaling_name.is_set || is_set(signaling_name.operation)) leaf_name_data.push_back(signaling_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::MulticastP2Mp::Signalings::Signaling::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "signaling-name")
    {
        signaling_name = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowires()
{
    yang_name = "vfi-pseudowires"; yang_parent_name = "vfi";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::~VfiPseudowires()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::has_data() const
{
    for (std::size_t index=0; index<vfi_pseudowire.size(); index++)
    {
        if(vfi_pseudowire[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::has_operation() const
{
    for (std::size_t index=0; index<vfi_pseudowire.size(); index++)
    {
        if(vfi_pseudowire[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi-pseudowires";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VfiPseudowires' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vfi-pseudowire")
    {
        for(auto const & c : vfi_pseudowire)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire>();
        c->parent = this;
        vfi_pseudowire.push_back(std::move(c));
        children[segment_path] = vfi_pseudowire.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::get_children()
{
    for (auto const & c : vfi_pseudowire)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPseudowire()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"},
    vfi_pw_class{YType::str, "vfi-pw-class"},
    vfi_pw_igmp_snoop{YType::str, "vfi-pw-igmp-snoop"},
    vfi_pw_mld_snoop{YType::str, "vfi-pw-mld-snoop"}
    	,
    pseudowire_static_mac_addresses(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses>())
	,vfi_pw_dhcp_snoop(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop>())
	,vfi_pw_mpls_static_labels(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels>())
{
    pseudowire_static_mac_addresses->parent = this;
    children["pseudowire-static-mac-addresses"] = pseudowire_static_mac_addresses;

    vfi_pw_dhcp_snoop->parent = this;
    children["vfi-pw-dhcp-snoop"] = vfi_pw_dhcp_snoop;

    vfi_pw_mpls_static_labels->parent = this;
    children["vfi-pw-mpls-static-labels"] = vfi_pw_mpls_static_labels;

    yang_name = "vfi-pseudowire"; yang_parent_name = "vfi-pseudowires";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::~VfiPseudowire()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::has_data() const
{
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| vfi_pw_class.is_set
	|| vfi_pw_igmp_snoop.is_set
	|| vfi_pw_mld_snoop.is_set
	|| (pseudowire_static_mac_addresses !=  nullptr && pseudowire_static_mac_addresses->has_data())
	|| (vfi_pw_dhcp_snoop !=  nullptr && vfi_pw_dhcp_snoop->has_data())
	|| (vfi_pw_mpls_static_labels !=  nullptr && vfi_pw_mpls_static_labels->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor.operation)
	|| is_set(pseudowire_id.operation)
	|| is_set(vfi_pw_class.operation)
	|| is_set(vfi_pw_igmp_snoop.operation)
	|| is_set(vfi_pw_mld_snoop.operation)
	|| (pseudowire_static_mac_addresses !=  nullptr && pseudowire_static_mac_addresses->has_operation())
	|| (vfi_pw_dhcp_snoop !=  nullptr && vfi_pw_dhcp_snoop->has_operation())
	|| (vfi_pw_mpls_static_labels !=  nullptr && vfi_pw_mpls_static_labels->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi-pseudowire" <<"[neighbor='" <<neighbor <<"']" <<"[pseudowire-id='" <<pseudowire_id <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VfiPseudowire' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.operation)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());
    if (vfi_pw_class.is_set || is_set(vfi_pw_class.operation)) leaf_name_data.push_back(vfi_pw_class.get_name_leafdata());
    if (vfi_pw_igmp_snoop.is_set || is_set(vfi_pw_igmp_snoop.operation)) leaf_name_data.push_back(vfi_pw_igmp_snoop.get_name_leafdata());
    if (vfi_pw_mld_snoop.is_set || is_set(vfi_pw_mld_snoop.operation)) leaf_name_data.push_back(vfi_pw_mld_snoop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pseudowire-static-mac-addresses")
    {
        if(pseudowire_static_mac_addresses != nullptr)
        {
            children["pseudowire-static-mac-addresses"] = pseudowire_static_mac_addresses;
        }
        else
        {
            pseudowire_static_mac_addresses = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses>();
            pseudowire_static_mac_addresses->parent = this;
            children["pseudowire-static-mac-addresses"] = pseudowire_static_mac_addresses;
        }
        return children.at("pseudowire-static-mac-addresses");
    }

    if(child_yang_name == "vfi-pw-dhcp-snoop")
    {
        if(vfi_pw_dhcp_snoop != nullptr)
        {
            children["vfi-pw-dhcp-snoop"] = vfi_pw_dhcp_snoop;
        }
        else
        {
            vfi_pw_dhcp_snoop = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop>();
            vfi_pw_dhcp_snoop->parent = this;
            children["vfi-pw-dhcp-snoop"] = vfi_pw_dhcp_snoop;
        }
        return children.at("vfi-pw-dhcp-snoop");
    }

    if(child_yang_name == "vfi-pw-mpls-static-labels")
    {
        if(vfi_pw_mpls_static_labels != nullptr)
        {
            children["vfi-pw-mpls-static-labels"] = vfi_pw_mpls_static_labels;
        }
        else
        {
            vfi_pw_mpls_static_labels = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels>();
            vfi_pw_mpls_static_labels->parent = this;
            children["vfi-pw-mpls-static-labels"] = vfi_pw_mpls_static_labels;
        }
        return children.at("vfi-pw-mpls-static-labels");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::get_children()
{
    if(children.find("pseudowire-static-mac-addresses") == children.end())
    {
        if(pseudowire_static_mac_addresses != nullptr)
        {
            children["pseudowire-static-mac-addresses"] = pseudowire_static_mac_addresses;
        }
    }

    if(children.find("vfi-pw-dhcp-snoop") == children.end())
    {
        if(vfi_pw_dhcp_snoop != nullptr)
        {
            children["vfi-pw-dhcp-snoop"] = vfi_pw_dhcp_snoop;
        }
    }

    if(children.find("vfi-pw-mpls-static-labels") == children.end())
    {
        if(vfi_pw_mpls_static_labels != nullptr)
        {
            children["vfi-pw-mpls-static-labels"] = vfi_pw_mpls_static_labels;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
    }
    if(value_path == "vfi-pw-class")
    {
        vfi_pw_class = value;
    }
    if(value_path == "vfi-pw-igmp-snoop")
    {
        vfi_pw_igmp_snoop = value;
    }
    if(value_path == "vfi-pw-mld-snoop")
    {
        vfi_pw_mld_snoop = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::VfiPwDhcpSnoop()
    :
    dhcp_snooping_id{YType::str, "dhcp-snooping-id"},
    profile_id{YType::enumeration, "profile-id"}
{
    yang_name = "vfi-pw-dhcp-snoop"; yang_parent_name = "vfi-pseudowire";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::~VfiPwDhcpSnoop()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::has_data() const
{
    return dhcp_snooping_id.is_set
	|| profile_id.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::has_operation() const
{
    return is_set(operation)
	|| is_set(dhcp_snooping_id.operation)
	|| is_set(profile_id.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi-pw-dhcp-snoop";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VfiPwDhcpSnoop' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp_snooping_id.is_set || is_set(dhcp_snooping_id.operation)) leaf_name_data.push_back(dhcp_snooping_id.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.operation)) leaf_name_data.push_back(profile_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwDhcpSnoop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id = value;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::VfiPwMplsStaticLabels()
    :
    local_static_label{YType::uint32, "local-static-label"},
    remote_static_label{YType::uint32, "remote-static-label"}
{
    yang_name = "vfi-pw-mpls-static-labels"; yang_parent_name = "vfi-pseudowire";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::~VfiPwMplsStaticLabels()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::has_data() const
{
    return local_static_label.is_set
	|| remote_static_label.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::has_operation() const
{
    return is_set(operation)
	|| is_set(local_static_label.operation)
	|| is_set(remote_static_label.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vfi-pw-mpls-static-labels";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VfiPwMplsStaticLabels' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_static_label.is_set || is_set(local_static_label.operation)) leaf_name_data.push_back(local_static_label.get_name_leafdata());
    if (remote_static_label.is_set || is_set(remote_static_label.operation)) leaf_name_data.push_back(remote_static_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::VfiPwMplsStaticLabels::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-static-label")
    {
        local_static_label = value;
    }
    if(value_path == "remote-static-label")
    {
        remote_static_label = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddresses()
{
    yang_name = "pseudowire-static-mac-addresses"; yang_parent_name = "vfi-pseudowire";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::~PseudowireStaticMacAddresses()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::has_data() const
{
    for (std::size_t index=0; index<pseudowire_static_mac_address.size(); index++)
    {
        if(pseudowire_static_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::has_operation() const
{
    for (std::size_t index=0; index<pseudowire_static_mac_address.size(); index++)
    {
        if(pseudowire_static_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-static-mac-addresses";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireStaticMacAddresses' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pseudowire-static-mac-address")
    {
        for(auto const & c : pseudowire_static_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress>();
        c->parent = this;
        pseudowire_static_mac_address.push_back(std::move(c));
        children[segment_path] = pseudowire_static_mac_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::get_children()
{
    for (auto const & c : pseudowire_static_mac_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::PseudowireStaticMacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "pseudowire-static-mac-address"; yang_parent_name = "pseudowire-static-mac-addresses";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::~PseudowireStaticMacAddress()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::has_data() const
{
    return address.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-static-mac-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PseudowireStaticMacAddress' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::VfiPseudowires::VfiPseudowire::PseudowireStaticMacAddresses::PseudowireStaticMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpAutoDiscovery()
    :
    ad_control_word{YType::empty, "ad-control-word"},
    enable{YType::empty, "enable"},
    table_policy{YType::str, "table-policy"}
    	,
    bgp_route_policy(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy>())
	,bgp_signaling_protocol(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol>())
	,ldp_signaling_protocol(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol>())
	,route_distinguisher(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher>())
	,route_targets(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets>())
{
    bgp_route_policy->parent = this;
    children["bgp-route-policy"] = bgp_route_policy;

    bgp_signaling_protocol->parent = this;
    children["bgp-signaling-protocol"] = bgp_signaling_protocol;

    ldp_signaling_protocol->parent = this;
    children["ldp-signaling-protocol"] = ldp_signaling_protocol;

    route_distinguisher->parent = this;
    children["route-distinguisher"] = route_distinguisher;

    route_targets->parent = this;
    children["route-targets"] = route_targets;

    yang_name = "bgp-auto-discovery"; yang_parent_name = "vfi";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::~BgpAutoDiscovery()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::has_data() const
{
    return ad_control_word.is_set
	|| enable.is_set
	|| table_policy.is_set
	|| (bgp_route_policy !=  nullptr && bgp_route_policy->has_data())
	|| (bgp_signaling_protocol !=  nullptr && bgp_signaling_protocol->has_data())
	|| (ldp_signaling_protocol !=  nullptr && ldp_signaling_protocol->has_data())
	|| (route_distinguisher !=  nullptr && route_distinguisher->has_data())
	|| (route_targets !=  nullptr && route_targets->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::has_operation() const
{
    return is_set(operation)
	|| is_set(ad_control_word.operation)
	|| is_set(enable.operation)
	|| is_set(table_policy.operation)
	|| (bgp_route_policy !=  nullptr && bgp_route_policy->has_operation())
	|| (bgp_signaling_protocol !=  nullptr && bgp_signaling_protocol->has_operation())
	|| (ldp_signaling_protocol !=  nullptr && ldp_signaling_protocol->has_operation())
	|| (route_distinguisher !=  nullptr && route_distinguisher->has_operation())
	|| (route_targets !=  nullptr && route_targets->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-auto-discovery";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpAutoDiscovery' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ad_control_word.is_set || is_set(ad_control_word.operation)) leaf_name_data.push_back(ad_control_word.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (table_policy.is_set || is_set(table_policy.operation)) leaf_name_data.push_back(table_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-route-policy")
    {
        if(bgp_route_policy != nullptr)
        {
            children["bgp-route-policy"] = bgp_route_policy;
        }
        else
        {
            bgp_route_policy = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy>();
            bgp_route_policy->parent = this;
            children["bgp-route-policy"] = bgp_route_policy;
        }
        return children.at("bgp-route-policy");
    }

    if(child_yang_name == "bgp-signaling-protocol")
    {
        if(bgp_signaling_protocol != nullptr)
        {
            children["bgp-signaling-protocol"] = bgp_signaling_protocol;
        }
        else
        {
            bgp_signaling_protocol = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol>();
            bgp_signaling_protocol->parent = this;
            children["bgp-signaling-protocol"] = bgp_signaling_protocol;
        }
        return children.at("bgp-signaling-protocol");
    }

    if(child_yang_name == "ldp-signaling-protocol")
    {
        if(ldp_signaling_protocol != nullptr)
        {
            children["ldp-signaling-protocol"] = ldp_signaling_protocol;
        }
        else
        {
            ldp_signaling_protocol = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol>();
            ldp_signaling_protocol->parent = this;
            children["ldp-signaling-protocol"] = ldp_signaling_protocol;
        }
        return children.at("ldp-signaling-protocol");
    }

    if(child_yang_name == "route-distinguisher")
    {
        if(route_distinguisher != nullptr)
        {
            children["route-distinguisher"] = route_distinguisher;
        }
        else
        {
            route_distinguisher = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher>();
            route_distinguisher->parent = this;
            children["route-distinguisher"] = route_distinguisher;
        }
        return children.at("route-distinguisher");
    }

    if(child_yang_name == "route-targets")
    {
        if(route_targets != nullptr)
        {
            children["route-targets"] = route_targets;
        }
        else
        {
            route_targets = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets>();
            route_targets->parent = this;
            children["route-targets"] = route_targets;
        }
        return children.at("route-targets");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::get_children()
{
    if(children.find("bgp-route-policy") == children.end())
    {
        if(bgp_route_policy != nullptr)
        {
            children["bgp-route-policy"] = bgp_route_policy;
        }
    }

    if(children.find("bgp-signaling-protocol") == children.end())
    {
        if(bgp_signaling_protocol != nullptr)
        {
            children["bgp-signaling-protocol"] = bgp_signaling_protocol;
        }
    }

    if(children.find("ldp-signaling-protocol") == children.end())
    {
        if(ldp_signaling_protocol != nullptr)
        {
            children["ldp-signaling-protocol"] = ldp_signaling_protocol;
        }
    }

    if(children.find("route-distinguisher") == children.end())
    {
        if(route_distinguisher != nullptr)
        {
            children["route-distinguisher"] = route_distinguisher;
        }
    }

    if(children.find("route-targets") == children.end())
    {
        if(route_targets != nullptr)
        {
            children["route-targets"] = route_targets;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ad-control-word")
    {
        ad_control_word = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "table-policy")
    {
        table_policy = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::LdpSignalingProtocol()
    :
    enable{YType::empty, "enable"}
    	,
    flow_label_load_balance(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance>())
	,vplsid(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::Vplsid>())
{
    flow_label_load_balance->parent = this;
    children["flow-label-load-balance"] = flow_label_load_balance;

    vplsid->parent = this;
    children["vplsid"] = vplsid;

    yang_name = "ldp-signaling-protocol"; yang_parent_name = "bgp-auto-discovery";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::~LdpSignalingProtocol()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::has_data() const
{
    return enable.is_set
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_data())
	|| (vplsid !=  nullptr && vplsid->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_operation())
	|| (vplsid !=  nullptr && vplsid->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-signaling-protocol";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdpSignalingProtocol' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-label-load-balance")
    {
        if(flow_label_load_balance != nullptr)
        {
            children["flow-label-load-balance"] = flow_label_load_balance;
        }
        else
        {
            flow_label_load_balance = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance>();
            flow_label_load_balance->parent = this;
            children["flow-label-load-balance"] = flow_label_load_balance;
        }
        return children.at("flow-label-load-balance");
    }

    if(child_yang_name == "vplsid")
    {
        if(vplsid != nullptr)
        {
            children["vplsid"] = vplsid;
        }
        else
        {
            vplsid = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::Vplsid>();
            vplsid->parent = this;
            children["vplsid"] = vplsid;
        }
        return children.at("vplsid");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::get_children()
{
    if(children.find("flow-label-load-balance") == children.end())
    {
        if(flow_label_load_balance != nullptr)
        {
            children["flow-label-load-balance"] = flow_label_load_balance;
        }
    }

    if(children.find("vplsid") == children.end())
    {
        if(vplsid != nullptr)
        {
            children["vplsid"] = vplsid;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::Vplsid::Vplsid()
    :
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    type{YType::enumeration, "type"}
{
    yang_name = "vplsid"; yang_parent_name = "ldp-signaling-protocol";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::Vplsid::~Vplsid()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::Vplsid::has_data() const
{
    return address.is_set
	|| address_index.is_set
	|| as.is_set
	|| as_index.is_set
	|| type.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::Vplsid::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_index.operation)
	|| is_set(as.operation)
	|| is_set(as_index.operation)
	|| is_set(type.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::Vplsid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vplsid";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::Vplsid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vplsid' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.operation)) leaf_name_data.push_back(address_index.get_name_leafdata());
    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.operation)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::Vplsid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::Vplsid::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::Vplsid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-index")
    {
        address_index = value;
    }
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "as-index")
    {
        as_index = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

const Enum::YLeaf FlowLabelTlvCodeEnum::Y_17 {4, "17"};
const Enum::YLeaf FlowLabelTlvCodeEnum::disable {8, "disable"};

const Enum::YLeaf BackupDisableEnum::never {0, "never"};
const Enum::YLeaf BackupDisableEnum::delay {1, "delay"};

const Enum::YLeaf BgpRouteTargetFormatEnum::none {0, "none"};
const Enum::YLeaf BgpRouteTargetFormatEnum::two_byte_as {1, "two-byte-as"};
const Enum::YLeaf BgpRouteTargetFormatEnum::four_byte_as {2, "four-byte-as"};
const Enum::YLeaf BgpRouteTargetFormatEnum::ipv4_address {3, "ipv4-address"};

const Enum::YLeaf LoadBalanceEnum::source_dest_mac {1, "source-dest-mac"};
const Enum::YLeaf LoadBalanceEnum::source_dest_ip {2, "source-dest-ip"};
const Enum::YLeaf LoadBalanceEnum::pseudowire_label {4, "pseudowire-label"};

const Enum::YLeaf BdmacLearnEnum::disable_learning {2, "disable-learning"};

const Enum::YLeaf InterworkingEnum::ethernet {1, "ethernet"};
const Enum::YLeaf InterworkingEnum::ipv4 {3, "ipv4"};

const Enum::YLeaf PwSwitchingPointTlvEnum::hide {2, "hide"};

const Enum::YLeaf MacAgingEnum::absolute {1, "absolute"};
const Enum::YLeaf MacAgingEnum::inactivity {2, "inactivity"};

const Enum::YLeaf L2Tpv3SequencingEnum::off {0, "off"};
const Enum::YLeaf L2Tpv3SequencingEnum::both {4, "both"};

const Enum::YLeaf ErpPort1Enum::port0 {0, "port0"};
const Enum::YLeaf ErpPort1Enum::port1 {1, "port1"};

const Enum::YLeaf InterfaceProfileEnum::snoop {1, "snoop"};
const Enum::YLeaf InterfaceProfileEnum::dhcp_protocol {2, "dhcp-protocol"};

const Enum::YLeaf L2EncapsulationEnum::vlan {4, "vlan"};
const Enum::YLeaf L2EncapsulationEnum::ethernet {5, "ethernet"};

const Enum::YLeaf InterfaceTrafficFloodEnum::traffic_flooding {0, "traffic-flooding"};
const Enum::YLeaf InterfaceTrafficFloodEnum::enable_flooding {1, "enable-flooding"};
const Enum::YLeaf InterfaceTrafficFloodEnum::disable_flooding {2, "disable-flooding"};

const Enum::YLeaf L2VpnLoggingEnum::enable {1, "enable"};
const Enum::YLeaf L2VpnLoggingEnum::disable {2, "disable"};

const Enum::YLeaf BgpRouteTargetRoleEnum::both {0, "both"};
const Enum::YLeaf BgpRouteTargetRoleEnum::import {1, "import"};
const Enum::YLeaf BgpRouteTargetRoleEnum::export_ {2, "export"};

const Enum::YLeaf ErpPortEnum::none {1, "none"};
const Enum::YLeaf ErpPortEnum::virtual_ {2, "virtual"};
const Enum::YLeaf ErpPortEnum::interface {3, "interface"};

const Enum::YLeaf MacWithdrawBehaviorEnum::legacy {1, "legacy"};
const Enum::YLeaf MacWithdrawBehaviorEnum::optimized {2, "optimized"};

const Enum::YLeaf L2TpCookieSizeEnum::zero {0, "zero"};
const Enum::YLeaf L2TpCookieSizeEnum::four {4, "four"};
const Enum::YLeaf L2TpCookieSizeEnum::eight {8, "eight"};

const Enum::YLeaf StormControlEnum::unicast {1, "unicast"};
const Enum::YLeaf StormControlEnum::multicast {2, "multicast"};
const Enum::YLeaf StormControlEnum::broadcast {4, "broadcast"};

const Enum::YLeaf L2TpSignalingProtocolEnum::none {1, "none"};
const Enum::YLeaf L2TpSignalingProtocolEnum::l2tpv3 {2, "l2tpv3"};

const Enum::YLeaf RplRoleEnum::owner {1, "owner"};
const Enum::YLeaf RplRoleEnum::neighbor {2, "neighbor"};
const Enum::YLeaf RplRoleEnum::next_neighbor {3, "next-neighbor"};

const Enum::YLeaf MacLimitActionEnum::none {0, "none"};
const Enum::YLeaf MacLimitActionEnum::flood {1, "flood"};
const Enum::YLeaf MacLimitActionEnum::no_flood {2, "no-flood"};
const Enum::YLeaf MacLimitActionEnum::shutdown {3, "shutdown"};

const Enum::YLeaf TypeOfServiceModeEnum::none {0, "none"};
const Enum::YLeaf TypeOfServiceModeEnum::reflect {1, "reflect"};

const Enum::YLeaf MacNotificationEnum::no_notif {0, "no-notif"};
const Enum::YLeaf MacNotificationEnum::syslog {1, "syslog"};
const Enum::YLeaf MacNotificationEnum::trap {2, "trap"};
const Enum::YLeaf MacNotificationEnum::syslog_snmp {3, "syslog-snmp"};

const Enum::YLeaf L2VpnVerificationEnum::enable {1, "enable"};
const Enum::YLeaf L2VpnVerificationEnum::disable {2, "disable"};

const Enum::YLeaf LdpVplsIdEnum::two_byte_as {10, "two-byte-as"};
const Enum::YLeaf LdpVplsIdEnum::ipv4_address {266, "ipv4-address"};

const Enum::YLeaf MacLearnEnum::default_learning {0, "default-learning"};
const Enum::YLeaf MacLearnEnum::enable_learning {1, "enable-learning"};
const Enum::YLeaf MacLearnEnum::disable_learning {2, "disable-learning"};

const Enum::YLeaf PortDownFlushEnum::port_down_flush {0, "port-down-flush"};
const Enum::YLeaf PortDownFlushEnum::enable_port_down_flush {1, "enable-port-down-flush"};
const Enum::YLeaf PortDownFlushEnum::disable_port_down_flush {2, "disable-port-down-flush"};

const Enum::YLeaf L2VpnCapabilityModeEnum::high_mode {1, "high-mode"};
const Enum::YLeaf L2VpnCapabilityModeEnum::single_mode {2, "single-mode"};

const Enum::YLeaf MplsSignalingProtocolEnum::none {1, "none"};
const Enum::YLeaf MplsSignalingProtocolEnum::ldp {4, "ldp"};

const Enum::YLeaf BgpRouteTargetEnum::no_stitching {0, "no-stitching"};
const Enum::YLeaf BgpRouteTargetEnum::stitching {1, "stitching"};

const Enum::YLeaf EthernetSegmentIdentifierEnum::type0 {0, "type0"};
const Enum::YLeaf EthernetSegmentIdentifierEnum::legacy {128, "legacy"};
const Enum::YLeaf EthernetSegmentIdentifierEnum::override {129, "override"};

const Enum::YLeaf ControlWordEnum::enable {1, "enable"};
const Enum::YLeaf ControlWordEnum::disable {2, "disable"};

const Enum::YLeaf PreferredPathEnum::te_tunnel {2, "te-tunnel"};
const Enum::YLeaf PreferredPathEnum::ip_tunnel {3, "ip-tunnel"};
const Enum::YLeaf PreferredPathEnum::tp_tunnel {4, "tp-tunnel"};

const Enum::YLeaf BridgeDomainTransportModeEnum::vlan_passthrough {3, "vlan-passthrough"};

const Enum::YLeaf FlowLabelLoadBalanceEnum::off {0, "off"};
const Enum::YLeaf FlowLabelLoadBalanceEnum::receive {1, "receive"};
const Enum::YLeaf FlowLabelLoadBalanceEnum::transmit {2, "transmit"};
const Enum::YLeaf FlowLabelLoadBalanceEnum::both {3, "both"};

const Enum::YLeaf BgpRouteDistinguisherEnum::auto_ {1, "auto"};
const Enum::YLeaf BgpRouteDistinguisherEnum::two_byte_as {2, "two-byte-as"};
const Enum::YLeaf BgpRouteDistinguisherEnum::four_byte_as {3, "four-byte-as"};
const Enum::YLeaf BgpRouteDistinguisherEnum::ipv4_address {4, "ipv4-address"};

const Enum::YLeaf ErpapsEnum::interface {1, "interface"};
const Enum::YLeaf ErpapsEnum::bridge_domain {2, "bridge-domain"};
const Enum::YLeaf ErpapsEnum::xconnect {3, "xconnect"};
const Enum::YLeaf ErpapsEnum::none {4, "none"};

const Enum::YLeaf VccvVerificationEnum::none {0, "none"};
const Enum::YLeaf VccvVerificationEnum::lsp_ping {2, "lsp-ping"};

const Enum::YLeaf TransportModeEnum::ethernet {1, "ethernet"};
const Enum::YLeaf TransportModeEnum::vlan {2, "vlan"};
const Enum::YLeaf TransportModeEnum::vlan_passthrough {3, "vlan-passthrough"};

const Enum::YLeaf MplsSequencingEnum::off {0, "off"};
const Enum::YLeaf MplsSequencingEnum::transmit {1, "transmit"};
const Enum::YLeaf MplsSequencingEnum::receive {2, "receive"};
const Enum::YLeaf MplsSequencingEnum::both {4, "both"};

const Enum::YLeaf MacSecureActionEnum::restrict {1, "restrict"};
const Enum::YLeaf MacSecureActionEnum::none {2, "none"};
const Enum::YLeaf MacSecureActionEnum::shutdown {3, "shutdown"};


}
}

