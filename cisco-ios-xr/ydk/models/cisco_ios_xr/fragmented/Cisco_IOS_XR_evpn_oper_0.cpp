
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_evpn_oper_0.hpp"
#include "Cisco_IOS_XR_evpn_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_evpn_oper {

Evpn::Evpn()
    :
    active(std::make_shared<Evpn::Active>())
	,nodes(std::make_shared<Evpn::Nodes>())
	,standby(std::make_shared<Evpn::Standby>())
{
    active->parent = this;
    children["active"] = active;

    nodes->parent = this;
    children["nodes"] = nodes;

    standby->parent = this;
    children["standby"] = standby;

    yang_name = "evpn"; yang_parent_name = "Cisco-IOS-XR-evpn-oper";
}

Evpn::~Evpn()
{
}

bool Evpn::has_data() const
{
    return (active !=  nullptr && active->has_data())
	|| (nodes !=  nullptr && nodes->has_data())
	|| (standby !=  nullptr && standby->has_data());
}

bool Evpn::has_operation() const
{
    return is_set(operation)
	|| (active !=  nullptr && active->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation())
	|| (standby !=  nullptr && standby->has_operation());
}

std::string Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-evpn-oper:evpn";

    return path_buffer.str();

}

EntityPath Evpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active")
    {
        if(active != nullptr)
        {
            children["active"] = active;
        }
        else
        {
            active = std::make_shared<Evpn::Active>();
            active->parent = this;
            children["active"] = active;
        }
        return children.at("active");
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
        else
        {
            nodes = std::make_shared<Evpn::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    if(child_yang_name == "standby")
    {
        if(standby != nullptr)
        {
            children["standby"] = standby;
        }
        else
        {
            standby = std::make_shared<Evpn::Standby>();
            standby->parent = this;
            children["standby"] = standby;
        }
        return children.at("standby");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::get_children()
{
    if(children.find("active") == children.end())
    {
        if(active != nullptr)
        {
            children["active"] = active;
        }
    }

    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
    }

    if(children.find("standby") == children.end())
    {
        if(standby != nullptr)
        {
            children["standby"] = standby;
        }
    }

    return children;
}

void Evpn::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Evpn::clone_ptr() const
{
    return std::make_shared<Evpn>();
}

std::string Evpn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Evpn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Evpn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Evpn::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "evpn";
}

Evpn::Nodes::~Nodes()
{
}

bool Evpn::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"}
    	,
    ac_ids(std::make_shared<Evpn::Nodes::Node::AcIds>())
	,ethernet_segments(std::make_shared<Evpn::Nodes::Node::EthernetSegments>())
	,evi_detail(std::make_shared<Evpn::Nodes::Node::EviDetail>())
	,evis(std::make_shared<Evpn::Nodes::Node::Evis>())
	,summary(std::make_shared<Evpn::Nodes::Node::Summary>())
{
    ac_ids->parent = this;
    children["ac-ids"] = ac_ids;

    ethernet_segments->parent = this;
    children["ethernet-segments"] = ethernet_segments;

    evi_detail->parent = this;
    children["evi-detail"] = evi_detail;

    evis->parent = this;
    children["evis"] = evis;

    summary->parent = this;
    children["summary"] = summary;

    yang_name = "node"; yang_parent_name = "nodes";
}

Evpn::Nodes::Node::~Node()
{
}

bool Evpn::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| (ac_ids !=  nullptr && ac_ids->has_data())
	|| (ethernet_segments !=  nullptr && ethernet_segments->has_data())
	|| (evi_detail !=  nullptr && evi_detail->has_data())
	|| (evis !=  nullptr && evis->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Evpn::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation)
	|| (ac_ids !=  nullptr && ac_ids->has_operation())
	|| (ethernet_segments !=  nullptr && ethernet_segments->has_operation())
	|| (evi_detail !=  nullptr && evi_detail->has_operation())
	|| (evis !=  nullptr && evis->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Evpn::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ac-ids")
    {
        if(ac_ids != nullptr)
        {
            children["ac-ids"] = ac_ids;
        }
        else
        {
            ac_ids = std::make_shared<Evpn::Nodes::Node::AcIds>();
            ac_ids->parent = this;
            children["ac-ids"] = ac_ids;
        }
        return children.at("ac-ids");
    }

    if(child_yang_name == "ethernet-segments")
    {
        if(ethernet_segments != nullptr)
        {
            children["ethernet-segments"] = ethernet_segments;
        }
        else
        {
            ethernet_segments = std::make_shared<Evpn::Nodes::Node::EthernetSegments>();
            ethernet_segments->parent = this;
            children["ethernet-segments"] = ethernet_segments;
        }
        return children.at("ethernet-segments");
    }

    if(child_yang_name == "evi-detail")
    {
        if(evi_detail != nullptr)
        {
            children["evi-detail"] = evi_detail;
        }
        else
        {
            evi_detail = std::make_shared<Evpn::Nodes::Node::EviDetail>();
            evi_detail->parent = this;
            children["evi-detail"] = evi_detail;
        }
        return children.at("evi-detail");
    }

    if(child_yang_name == "evis")
    {
        if(evis != nullptr)
        {
            children["evis"] = evis;
        }
        else
        {
            evis = std::make_shared<Evpn::Nodes::Node::Evis>();
            evis->parent = this;
            children["evis"] = evis;
        }
        return children.at("evis");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<Evpn::Nodes::Node::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::get_children()
{
    if(children.find("ac-ids") == children.end())
    {
        if(ac_ids != nullptr)
        {
            children["ac-ids"] = ac_ids;
        }
    }

    if(children.find("ethernet-segments") == children.end())
    {
        if(ethernet_segments != nullptr)
        {
            children["ethernet-segments"] = ethernet_segments;
        }
    }

    if(children.find("evi-detail") == children.end())
    {
        if(evi_detail != nullptr)
        {
            children["evi-detail"] = evi_detail;
        }
    }

    if(children.find("evis") == children.end())
    {
        if(evis != nullptr)
        {
            children["evis"] = evis;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void Evpn::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
}

Evpn::Nodes::Node::Evis::Evis()
{
    yang_name = "evis"; yang_parent_name = "node";
}

Evpn::Nodes::Node::Evis::~Evis()
{
}

bool Evpn::Nodes::Node::Evis::has_data() const
{
    for (std::size_t index=0; index<evi.size(); index++)
    {
        if(evi[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Nodes::Node::Evis::has_operation() const
{
    for (std::size_t index=0; index<evi.size(); index++)
    {
        if(evi[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Nodes::Node::Evis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evis";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::Evis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Evis' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::Evis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evi")
    {
        for(auto const & c : evi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Nodes::Node::Evis::Evi>();
        c->parent = this;
        evi.push_back(std::move(c));
        children[segment_path] = evi.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::Evis::get_children()
{
    for (auto const & c : evi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Nodes::Node::Evis::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Nodes::Node::Evis::Evi::Evi()
    :
    evi{YType::int32, "evi"},
    bd_name{YType::str, "bd-name"},
    evi_xr{YType::uint32, "evi-xr"},
    type{YType::enumeration, "type"}
{
    yang_name = "evi"; yang_parent_name = "evis";
}

Evpn::Nodes::Node::Evis::Evi::~Evi()
{
}

bool Evpn::Nodes::Node::Evis::Evi::has_data() const
{
    return evi.is_set
	|| bd_name.is_set
	|| evi_xr.is_set
	|| type.is_set;
}

bool Evpn::Nodes::Node::Evis::Evi::has_operation() const
{
    return is_set(operation)
	|| is_set(evi.operation)
	|| is_set(bd_name.operation)
	|| is_set(evi_xr.operation)
	|| is_set(type.operation);
}

std::string Evpn::Nodes::Node::Evis::Evi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi" <<"[evi='" <<evi <<"']";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::Evis::Evi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Evi' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.operation)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.operation)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::Evis::Evi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::Evis::Evi::get_children()
{
    return children;
}

void Evpn::Nodes::Node::Evis::Evi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Evpn::Nodes::Node::Summary::Summary()
    :
    as{YType::uint32, "as"},
    es_entries{YType::uint32, "es-entries"},
    es_global_mac_routes{YType::uint32, "es-global-mac-routes"},
    ev_is{YType::uint32, "ev-is"},
    global_source_mac{YType::str, "global-source-mac"},
    l2rib_throttle{YType::boolean, "l2rib-throttle"},
    labels{YType::uint32, "labels"},
    local_ead_routes{YType::uint32, "local-ead-routes"},
    local_imcast_routes{YType::uint32, "local-imcast-routes"},
    local_ipv4_mac_routes{YType::uint32, "local-ipv4-mac-routes"},
    local_ipv6_mac_routes{YType::uint32, "local-ipv6-mac-routes"},
    local_mac_routes{YType::uint32, "local-mac-routes"},
    logging_df_election_enabled{YType::boolean, "logging-df-election-enabled"},
    neighbor_entries{YType::uint32, "neighbor-entries"},
    peering_time{YType::uint32, "peering-time"},
    recovery_time{YType::uint32, "recovery-time"},
    remote_ead_routes{YType::uint32, "remote-ead-routes"},
    remote_imcast_routes{YType::uint32, "remote-imcast-routes"},
    remote_ipv4_mac_routes{YType::uint32, "remote-ipv4-mac-routes"},
    remote_ipv6_mac_routes{YType::uint32, "remote-ipv6-mac-routes"},
    remote_mac_routes{YType::uint32, "remote-mac-routes"},
    remote_soo_mac_routes{YType::uint32, "remote-soo-mac-routes"},
    router_id{YType::str, "router-id"}
{
    yang_name = "summary"; yang_parent_name = "node";
}

Evpn::Nodes::Node::Summary::~Summary()
{
}

bool Evpn::Nodes::Node::Summary::has_data() const
{
    return as.is_set
	|| es_entries.is_set
	|| es_global_mac_routes.is_set
	|| ev_is.is_set
	|| global_source_mac.is_set
	|| l2rib_throttle.is_set
	|| labels.is_set
	|| local_ead_routes.is_set
	|| local_imcast_routes.is_set
	|| local_ipv4_mac_routes.is_set
	|| local_ipv6_mac_routes.is_set
	|| local_mac_routes.is_set
	|| logging_df_election_enabled.is_set
	|| neighbor_entries.is_set
	|| peering_time.is_set
	|| recovery_time.is_set
	|| remote_ead_routes.is_set
	|| remote_imcast_routes.is_set
	|| remote_ipv4_mac_routes.is_set
	|| remote_ipv6_mac_routes.is_set
	|| remote_mac_routes.is_set
	|| remote_soo_mac_routes.is_set
	|| router_id.is_set;
}

bool Evpn::Nodes::Node::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(as.operation)
	|| is_set(es_entries.operation)
	|| is_set(es_global_mac_routes.operation)
	|| is_set(ev_is.operation)
	|| is_set(global_source_mac.operation)
	|| is_set(l2rib_throttle.operation)
	|| is_set(labels.operation)
	|| is_set(local_ead_routes.operation)
	|| is_set(local_imcast_routes.operation)
	|| is_set(local_ipv4_mac_routes.operation)
	|| is_set(local_ipv6_mac_routes.operation)
	|| is_set(local_mac_routes.operation)
	|| is_set(logging_df_election_enabled.operation)
	|| is_set(neighbor_entries.operation)
	|| is_set(peering_time.operation)
	|| is_set(recovery_time.operation)
	|| is_set(remote_ead_routes.operation)
	|| is_set(remote_imcast_routes.operation)
	|| is_set(remote_ipv4_mac_routes.operation)
	|| is_set(remote_ipv6_mac_routes.operation)
	|| is_set(remote_mac_routes.operation)
	|| is_set(remote_soo_mac_routes.operation)
	|| is_set(router_id.operation);
}

std::string Evpn::Nodes::Node::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (es_entries.is_set || is_set(es_entries.operation)) leaf_name_data.push_back(es_entries.get_name_leafdata());
    if (es_global_mac_routes.is_set || is_set(es_global_mac_routes.operation)) leaf_name_data.push_back(es_global_mac_routes.get_name_leafdata());
    if (ev_is.is_set || is_set(ev_is.operation)) leaf_name_data.push_back(ev_is.get_name_leafdata());
    if (global_source_mac.is_set || is_set(global_source_mac.operation)) leaf_name_data.push_back(global_source_mac.get_name_leafdata());
    if (l2rib_throttle.is_set || is_set(l2rib_throttle.operation)) leaf_name_data.push_back(l2rib_throttle.get_name_leafdata());
    if (labels.is_set || is_set(labels.operation)) leaf_name_data.push_back(labels.get_name_leafdata());
    if (local_ead_routes.is_set || is_set(local_ead_routes.operation)) leaf_name_data.push_back(local_ead_routes.get_name_leafdata());
    if (local_imcast_routes.is_set || is_set(local_imcast_routes.operation)) leaf_name_data.push_back(local_imcast_routes.get_name_leafdata());
    if (local_ipv4_mac_routes.is_set || is_set(local_ipv4_mac_routes.operation)) leaf_name_data.push_back(local_ipv4_mac_routes.get_name_leafdata());
    if (local_ipv6_mac_routes.is_set || is_set(local_ipv6_mac_routes.operation)) leaf_name_data.push_back(local_ipv6_mac_routes.get_name_leafdata());
    if (local_mac_routes.is_set || is_set(local_mac_routes.operation)) leaf_name_data.push_back(local_mac_routes.get_name_leafdata());
    if (logging_df_election_enabled.is_set || is_set(logging_df_election_enabled.operation)) leaf_name_data.push_back(logging_df_election_enabled.get_name_leafdata());
    if (neighbor_entries.is_set || is_set(neighbor_entries.operation)) leaf_name_data.push_back(neighbor_entries.get_name_leafdata());
    if (peering_time.is_set || is_set(peering_time.operation)) leaf_name_data.push_back(peering_time.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.operation)) leaf_name_data.push_back(recovery_time.get_name_leafdata());
    if (remote_ead_routes.is_set || is_set(remote_ead_routes.operation)) leaf_name_data.push_back(remote_ead_routes.get_name_leafdata());
    if (remote_imcast_routes.is_set || is_set(remote_imcast_routes.operation)) leaf_name_data.push_back(remote_imcast_routes.get_name_leafdata());
    if (remote_ipv4_mac_routes.is_set || is_set(remote_ipv4_mac_routes.operation)) leaf_name_data.push_back(remote_ipv4_mac_routes.get_name_leafdata());
    if (remote_ipv6_mac_routes.is_set || is_set(remote_ipv6_mac_routes.operation)) leaf_name_data.push_back(remote_ipv6_mac_routes.get_name_leafdata());
    if (remote_mac_routes.is_set || is_set(remote_mac_routes.operation)) leaf_name_data.push_back(remote_mac_routes.get_name_leafdata());
    if (remote_soo_mac_routes.is_set || is_set(remote_soo_mac_routes.operation)) leaf_name_data.push_back(remote_soo_mac_routes.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::Summary::get_children()
{
    return children;
}

void Evpn::Nodes::Node::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "es-entries")
    {
        es_entries = value;
    }
    if(value_path == "es-global-mac-routes")
    {
        es_global_mac_routes = value;
    }
    if(value_path == "ev-is")
    {
        ev_is = value;
    }
    if(value_path == "global-source-mac")
    {
        global_source_mac = value;
    }
    if(value_path == "l2rib-throttle")
    {
        l2rib_throttle = value;
    }
    if(value_path == "labels")
    {
        labels = value;
    }
    if(value_path == "local-ead-routes")
    {
        local_ead_routes = value;
    }
    if(value_path == "local-imcast-routes")
    {
        local_imcast_routes = value;
    }
    if(value_path == "local-ipv4-mac-routes")
    {
        local_ipv4_mac_routes = value;
    }
    if(value_path == "local-ipv6-mac-routes")
    {
        local_ipv6_mac_routes = value;
    }
    if(value_path == "local-mac-routes")
    {
        local_mac_routes = value;
    }
    if(value_path == "logging-df-election-enabled")
    {
        logging_df_election_enabled = value;
    }
    if(value_path == "neighbor-entries")
    {
        neighbor_entries = value;
    }
    if(value_path == "peering-time")
    {
        peering_time = value;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
    }
    if(value_path == "remote-ead-routes")
    {
        remote_ead_routes = value;
    }
    if(value_path == "remote-imcast-routes")
    {
        remote_imcast_routes = value;
    }
    if(value_path == "remote-ipv4-mac-routes")
    {
        remote_ipv4_mac_routes = value;
    }
    if(value_path == "remote-ipv6-mac-routes")
    {
        remote_ipv6_mac_routes = value;
    }
    if(value_path == "remote-mac-routes")
    {
        remote_mac_routes = value;
    }
    if(value_path == "remote-soo-mac-routes")
    {
        remote_soo_mac_routes = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Evpn::Nodes::Node::EviDetail::EviDetail()
    :
    elements(std::make_shared<Evpn::Nodes::Node::EviDetail::Elements>())
	,evi_children(std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren>())
{
    elements->parent = this;
    children["elements"] = elements;

    evi_children->parent = this;
    children["evi-children"] = evi_children;

    yang_name = "evi-detail"; yang_parent_name = "node";
}

Evpn::Nodes::Node::EviDetail::~EviDetail()
{
}

bool Evpn::Nodes::Node::EviDetail::has_data() const
{
    return (elements !=  nullptr && elements->has_data())
	|| (evi_children !=  nullptr && evi_children->has_data());
}

bool Evpn::Nodes::Node::EviDetail::has_operation() const
{
    return is_set(operation)
	|| (elements !=  nullptr && elements->has_operation())
	|| (evi_children !=  nullptr && evi_children->has_operation());
}

std::string Evpn::Nodes::Node::EviDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi-detail";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EviDetail' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "elements")
    {
        if(elements != nullptr)
        {
            children["elements"] = elements;
        }
        else
        {
            elements = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements>();
            elements->parent = this;
            children["elements"] = elements;
        }
        return children.at("elements");
    }

    if(child_yang_name == "evi-children")
    {
        if(evi_children != nullptr)
        {
            children["evi-children"] = evi_children;
        }
        else
        {
            evi_children = std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren>();
            evi_children->parent = this;
            children["evi-children"] = evi_children;
        }
        return children.at("evi-children");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::get_children()
{
    if(children.find("elements") == children.end())
    {
        if(elements != nullptr)
        {
            children["elements"] = elements;
        }
    }

    if(children.find("evi-children") == children.end())
    {
        if(evi_children != nullptr)
        {
            children["evi-children"] = evi_children;
        }
    }

    return children;
}

void Evpn::Nodes::Node::EviDetail::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Nodes::Node::EviDetail::Elements::Elements()
{
    yang_name = "elements"; yang_parent_name = "evi-detail";
}

Evpn::Nodes::Node::EviDetail::Elements::~Elements()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::has_data() const
{
    for (std::size_t index=0; index<element.size(); index++)
    {
        if(element[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Nodes::Node::EviDetail::Elements::has_operation() const
{
    for (std::size_t index=0; index<element.size(); index++)
    {
        if(element[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Nodes::Node::EviDetail::Elements::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "elements";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Elements' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "element")
    {
        for(auto const & c : element)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element>();
        c->parent = this;
        element.push_back(std::move(c));
        children[segment_path] = element.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::get_children()
{
    for (auto const & c : element)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Nodes::Node::EviDetail::Elements::Element::Element()
    :
    evi{YType::int32, "evi"},
    advertise_mac{YType::boolean, "advertise-mac"},
    aliasing_disabled{YType::boolean, "aliasing-disabled"},
    bd_name{YType::str, "bd-name"},
    cw_disable{YType::boolean, "cw-disable"},
    description{YType::str, "description"},
    evi_xr{YType::uint32, "evi-xr"},
    forward_class{YType::uint8, "forward-class"},
    multicast_label{YType::uint32, "multicast-label"},
    reoriginate_disabled{YType::boolean, "reoriginate-disabled"},
    rt_export_block_set{YType::boolean, "rt-export-block-set"},
    rt_import_block_set{YType::boolean, "rt-import-block-set"},
    stitching{YType::boolean, "stitching"},
    table_policy_name{YType::str, "table-policy-name"},
    type{YType::enumeration, "type"},
    unicast_label{YType::uint32, "unicast-label"},
    unknown_unicast_flooding_disabled{YType::boolean, "unknown-unicast-flooding-disabled"}
    	,
    flow_label(std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel>())
	,rd_auto(std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto>())
	,rd_configured(std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured>())
	,rt_auto(std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto>())
	,rt_auto_stitching(std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching>())
{
    flow_label->parent = this;
    children["flow-label"] = flow_label;

    rd_auto->parent = this;
    children["rd-auto"] = rd_auto;

    rd_configured->parent = this;
    children["rd-configured"] = rd_configured;

    rt_auto->parent = this;
    children["rt-auto"] = rt_auto;

    rt_auto_stitching->parent = this;
    children["rt-auto-stitching"] = rt_auto_stitching;

    yang_name = "element"; yang_parent_name = "elements";
}

Evpn::Nodes::Node::EviDetail::Elements::Element::~Element()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::has_data() const
{
    return evi.is_set
	|| advertise_mac.is_set
	|| aliasing_disabled.is_set
	|| bd_name.is_set
	|| cw_disable.is_set
	|| description.is_set
	|| evi_xr.is_set
	|| forward_class.is_set
	|| multicast_label.is_set
	|| reoriginate_disabled.is_set
	|| rt_export_block_set.is_set
	|| rt_import_block_set.is_set
	|| stitching.is_set
	|| table_policy_name.is_set
	|| type.is_set
	|| unicast_label.is_set
	|| unknown_unicast_flooding_disabled.is_set
	|| (flow_label !=  nullptr && flow_label->has_data())
	|| (rd_auto !=  nullptr && rd_auto->has_data())
	|| (rd_configured !=  nullptr && rd_configured->has_data())
	|| (rt_auto !=  nullptr && rt_auto->has_data())
	|| (rt_auto_stitching !=  nullptr && rt_auto_stitching->has_data());
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::has_operation() const
{
    return is_set(operation)
	|| is_set(evi.operation)
	|| is_set(advertise_mac.operation)
	|| is_set(aliasing_disabled.operation)
	|| is_set(bd_name.operation)
	|| is_set(cw_disable.operation)
	|| is_set(description.operation)
	|| is_set(evi_xr.operation)
	|| is_set(forward_class.operation)
	|| is_set(multicast_label.operation)
	|| is_set(reoriginate_disabled.operation)
	|| is_set(rt_export_block_set.operation)
	|| is_set(rt_import_block_set.operation)
	|| is_set(stitching.operation)
	|| is_set(table_policy_name.operation)
	|| is_set(type.operation)
	|| is_set(unicast_label.operation)
	|| is_set(unknown_unicast_flooding_disabled.operation)
	|| (flow_label !=  nullptr && flow_label->has_operation())
	|| (rd_auto !=  nullptr && rd_auto->has_operation())
	|| (rd_configured !=  nullptr && rd_configured->has_operation())
	|| (rt_auto !=  nullptr && rt_auto->has_operation())
	|| (rt_auto_stitching !=  nullptr && rt_auto_stitching->has_operation());
}

std::string Evpn::Nodes::Node::EviDetail::Elements::Element::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "element" <<"[evi='" <<evi <<"']";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::Element::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Element' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (advertise_mac.is_set || is_set(advertise_mac.operation)) leaf_name_data.push_back(advertise_mac.get_name_leafdata());
    if (aliasing_disabled.is_set || is_set(aliasing_disabled.operation)) leaf_name_data.push_back(aliasing_disabled.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.operation)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (cw_disable.is_set || is_set(cw_disable.operation)) leaf_name_data.push_back(cw_disable.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.operation)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (multicast_label.is_set || is_set(multicast_label.operation)) leaf_name_data.push_back(multicast_label.get_name_leafdata());
    if (reoriginate_disabled.is_set || is_set(reoriginate_disabled.operation)) leaf_name_data.push_back(reoriginate_disabled.get_name_leafdata());
    if (rt_export_block_set.is_set || is_set(rt_export_block_set.operation)) leaf_name_data.push_back(rt_export_block_set.get_name_leafdata());
    if (rt_import_block_set.is_set || is_set(rt_import_block_set.operation)) leaf_name_data.push_back(rt_import_block_set.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.operation)) leaf_name_data.push_back(stitching.get_name_leafdata());
    if (table_policy_name.is_set || is_set(table_policy_name.operation)) leaf_name_data.push_back(table_policy_name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unicast_label.is_set || is_set(unicast_label.operation)) leaf_name_data.push_back(unicast_label.get_name_leafdata());
    if (unknown_unicast_flooding_disabled.is_set || is_set(unknown_unicast_flooding_disabled.operation)) leaf_name_data.push_back(unknown_unicast_flooding_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::Element::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-label")
    {
        if(flow_label != nullptr)
        {
            children["flow-label"] = flow_label;
        }
        else
        {
            flow_label = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel>();
            flow_label->parent = this;
            children["flow-label"] = flow_label;
        }
        return children.at("flow-label");
    }

    if(child_yang_name == "rd-auto")
    {
        if(rd_auto != nullptr)
        {
            children["rd-auto"] = rd_auto;
        }
        else
        {
            rd_auto = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto>();
            rd_auto->parent = this;
            children["rd-auto"] = rd_auto;
        }
        return children.at("rd-auto");
    }

    if(child_yang_name == "rd-configured")
    {
        if(rd_configured != nullptr)
        {
            children["rd-configured"] = rd_configured;
        }
        else
        {
            rd_configured = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured>();
            rd_configured->parent = this;
            children["rd-configured"] = rd_configured;
        }
        return children.at("rd-configured");
    }

    if(child_yang_name == "rt-auto")
    {
        if(rt_auto != nullptr)
        {
            children["rt-auto"] = rt_auto;
        }
        else
        {
            rt_auto = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto>();
            rt_auto->parent = this;
            children["rt-auto"] = rt_auto;
        }
        return children.at("rt-auto");
    }

    if(child_yang_name == "rt-auto-stitching")
    {
        if(rt_auto_stitching != nullptr)
        {
            children["rt-auto-stitching"] = rt_auto_stitching;
        }
        else
        {
            rt_auto_stitching = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching>();
            rt_auto_stitching->parent = this;
            children["rt-auto-stitching"] = rt_auto_stitching;
        }
        return children.at("rt-auto-stitching");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::Element::get_children()
{
    if(children.find("flow-label") == children.end())
    {
        if(flow_label != nullptr)
        {
            children["flow-label"] = flow_label;
        }
    }

    if(children.find("rd-auto") == children.end())
    {
        if(rd_auto != nullptr)
        {
            children["rd-auto"] = rd_auto;
        }
    }

    if(children.find("rd-configured") == children.end())
    {
        if(rd_configured != nullptr)
        {
            children["rd-configured"] = rd_configured;
        }
    }

    if(children.find("rt-auto") == children.end())
    {
        if(rt_auto != nullptr)
        {
            children["rt-auto"] = rt_auto;
        }
    }

    if(children.find("rt-auto-stitching") == children.end())
    {
        if(rt_auto_stitching != nullptr)
        {
            children["rt-auto-stitching"] = rt_auto_stitching;
        }
    }

    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::Element::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "advertise-mac")
    {
        advertise_mac = value;
    }
    if(value_path == "aliasing-disabled")
    {
        aliasing_disabled = value;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
    }
    if(value_path == "cw-disable")
    {
        cw_disable = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "multicast-label")
    {
        multicast_label = value;
    }
    if(value_path == "reoriginate-disabled")
    {
        reoriginate_disabled = value;
    }
    if(value_path == "rt-export-block-set")
    {
        rt_export_block_set = value;
    }
    if(value_path == "rt-import-block-set")
    {
        rt_import_block_set = value;
    }
    if(value_path == "stitching")
    {
        stitching = value;
    }
    if(value_path == "table-policy-name")
    {
        table_policy_name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "unicast-label")
    {
        unicast_label = value;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled = value;
    }
}

Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel::FlowLabel()
    :
    global_flow_label{YType::boolean, "global-flow-label"},
    static_flow_label{YType::boolean, "static-flow-label"}
{
    yang_name = "flow-label"; yang_parent_name = "element";
}

Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel::~FlowLabel()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel::has_data() const
{
    return global_flow_label.is_set
	|| static_flow_label.is_set;
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(global_flow_label.operation)
	|| is_set(static_flow_label.operation);
}

std::string Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-label";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowLabel' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_flow_label.is_set || is_set(global_flow_label.operation)) leaf_name_data.push_back(global_flow_label.get_name_leafdata());
    if (static_flow_label.is_set || is_set(static_flow_label.operation)) leaf_name_data.push_back(static_flow_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::Element::FlowLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "global-flow-label")
    {
        global_flow_label = value;
    }
    if(value_path == "static-flow-label")
    {
        static_flow_label = value;
    }
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::RdAuto()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto_>())
	,four_byte_as(std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs>())
	,two_byte_as(std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs>())
	,v4_addr(std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr>())
{
    auto_->parent = this;
    children["auto"] = auto_;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "rd-auto"; yang_parent_name = "element";
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::~RdAuto()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::has_operation() const
{
    return is_set(operation)
	|| is_set(rd.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-auto";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RdAuto' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto")
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
        else
        {
            auto_ = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto_>();
            auto_->parent = this;
            children["auto"] = auto_;
        }
        return children.at("auto");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::get_children()
{
    if(children.find("auto") == children.end())
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rd")
    {
        rd = value;
    }
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto_::Auto_()
    :
    auto_index{YType::uint16, "auto-index"},
    router_id{YType::str, "router-id"}
{
    yang_name = "auto"; yang_parent_name = "rd-auto";
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto_::~Auto_()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto_::has_data() const
{
    return auto_index.is_set
	|| router_id.is_set;
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_index.operation)
	|| is_set(router_id.operation);
}

std::string Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auto_' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_index.is_set || is_set(auto_index.operation)) leaf_name_data.push_back(auto_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto_::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-index")
    {
        auto_index = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "rd-auto";
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "rd-auto";
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs::~FourByteAs()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FourByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "rd-auto";
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr::~V4Addr()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Addr' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::Element::RdAuto::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::RdConfigured()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto_>())
	,four_byte_as(std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs>())
	,two_byte_as(std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs>())
	,v4_addr(std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr>())
{
    auto_->parent = this;
    children["auto"] = auto_;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "rd-configured"; yang_parent_name = "element";
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::~RdConfigured()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::has_operation() const
{
    return is_set(operation)
	|| is_set(rd.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-configured";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RdConfigured' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto")
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
        else
        {
            auto_ = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto_>();
            auto_->parent = this;
            children["auto"] = auto_;
        }
        return children.at("auto");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::get_children()
{
    if(children.find("auto") == children.end())
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rd")
    {
        rd = value;
    }
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto_::Auto_()
    :
    auto_index{YType::uint16, "auto-index"},
    router_id{YType::str, "router-id"}
{
    yang_name = "auto"; yang_parent_name = "rd-configured";
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto_::~Auto_()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto_::has_data() const
{
    return auto_index.is_set
	|| router_id.is_set;
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_index.operation)
	|| is_set(router_id.operation);
}

std::string Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auto_' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_index.is_set || is_set(auto_index.operation)) leaf_name_data.push_back(auto_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto_::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-index")
    {
        auto_index = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "rd-configured";
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "rd-configured";
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs::~FourByteAs()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FourByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "rd-configured";
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr::~V4Addr()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Addr' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::Element::RdConfigured::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::RtAuto()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport>())
	,four_byte_as(std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs>())
	,two_byte_as(std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs>())
	,v4_addr(std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr>())
{
    es_import->parent = this;
    children["es-import"] = es_import;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "rt-auto"; yang_parent_name = "element";
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::~RtAuto()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::has_operation() const
{
    return is_set(operation)
	|| is_set(rt.operation)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-auto";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtAuto' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.operation)) leaf_name_data.push_back(rt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "es-import")
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
        else
        {
            es_import = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport>();
            es_import->parent = this;
            children["es-import"] = es_import;
        }
        return children.at("es-import");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::get_children()
{
    if(children.find("es-import") == children.end())
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rt")
    {
        rt = value;
    }
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "rt-auto";
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "rt-auto";
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs::~FourByteAs()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FourByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "rt-auto";
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr::~V4Addr()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Addr' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{
    yang_name = "es-import"; yang_parent_name = "rt-auto";
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport::~EsImport()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport::has_operation() const
{
    return is_set(operation)
	|| is_set(high_bytes.operation)
	|| is_set(low_bytes.operation);
}

std::string Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsImport' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.operation)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.operation)) leaf_name_data.push_back(low_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::Element::RtAuto::EsImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
    }
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::RtAutoStitching()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::EsImport>())
	,four_byte_as(std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::FourByteAs>())
	,two_byte_as(std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs>())
	,v4_addr(std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::V4Addr>())
{
    es_import->parent = this;
    children["es-import"] = es_import;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "rt-auto-stitching"; yang_parent_name = "element";
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::~RtAutoStitching()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::has_operation() const
{
    return is_set(operation)
	|| is_set(rt.operation)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-auto-stitching";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtAutoStitching' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.operation)) leaf_name_data.push_back(rt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "es-import")
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
        else
        {
            es_import = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::EsImport>();
            es_import->parent = this;
            children["es-import"] = es_import;
        }
        return children.at("es-import");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::get_children()
{
    if(children.find("es-import") == children.end())
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rt")
    {
        rt = value;
    }
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "rt-auto-stitching";
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "rt-auto-stitching";
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::~FourByteAs()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FourByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "rt-auto-stitching";
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::V4Addr::~V4Addr()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Addr' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::V4Addr::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{
    yang_name = "es-import"; yang_parent_name = "rt-auto-stitching";
}

Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::EsImport::~EsImport()
{
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::EsImport::has_operation() const
{
    return is_set(operation)
	|| is_set(high_bytes.operation)
	|| is_set(low_bytes.operation);
}

std::string Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::EsImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsImport' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.operation)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.operation)) leaf_name_data.push_back(low_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::EsImport::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::Elements::Element::RtAutoStitching::EsImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
    }
}

Evpn::Nodes::Node::EviDetail::EviChildren::EviChildren()
    :
    ethernet_auto_discoveries(std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries>())
	,inclusive_multicasts(std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts>())
	,macs(std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::Macs>())
	,neighbors(std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors>())
	,route_targets(std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets>())
{
    ethernet_auto_discoveries->parent = this;
    children["ethernet-auto-discoveries"] = ethernet_auto_discoveries;

    inclusive_multicasts->parent = this;
    children["inclusive-multicasts"] = inclusive_multicasts;

    macs->parent = this;
    children["macs"] = macs;

    neighbors->parent = this;
    children["neighbors"] = neighbors;

    route_targets->parent = this;
    children["route-targets"] = route_targets;

    yang_name = "evi-children"; yang_parent_name = "evi-detail";
}

Evpn::Nodes::Node::EviDetail::EviChildren::~EviChildren()
{
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::has_data() const
{
    return (ethernet_auto_discoveries !=  nullptr && ethernet_auto_discoveries->has_data())
	|| (inclusive_multicasts !=  nullptr && inclusive_multicasts->has_data())
	|| (macs !=  nullptr && macs->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (route_targets !=  nullptr && route_targets->has_data());
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::has_operation() const
{
    return is_set(operation)
	|| (ethernet_auto_discoveries !=  nullptr && ethernet_auto_discoveries->has_operation())
	|| (inclusive_multicasts !=  nullptr && inclusive_multicasts->has_operation())
	|| (macs !=  nullptr && macs->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (route_targets !=  nullptr && route_targets->has_operation());
}

std::string Evpn::Nodes::Node::EviDetail::EviChildren::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi-children";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::EviChildren::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EviChildren' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::EviChildren::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ethernet-auto-discoveries")
    {
        if(ethernet_auto_discoveries != nullptr)
        {
            children["ethernet-auto-discoveries"] = ethernet_auto_discoveries;
        }
        else
        {
            ethernet_auto_discoveries = std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries>();
            ethernet_auto_discoveries->parent = this;
            children["ethernet-auto-discoveries"] = ethernet_auto_discoveries;
        }
        return children.at("ethernet-auto-discoveries");
    }

    if(child_yang_name == "inclusive-multicasts")
    {
        if(inclusive_multicasts != nullptr)
        {
            children["inclusive-multicasts"] = inclusive_multicasts;
        }
        else
        {
            inclusive_multicasts = std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts>();
            inclusive_multicasts->parent = this;
            children["inclusive-multicasts"] = inclusive_multicasts;
        }
        return children.at("inclusive-multicasts");
    }

    if(child_yang_name == "macs")
    {
        if(macs != nullptr)
        {
            children["macs"] = macs;
        }
        else
        {
            macs = std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::Macs>();
            macs->parent = this;
            children["macs"] = macs;
        }
        return children.at("macs");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    if(child_yang_name == "route-targets")
    {
        if(route_targets != nullptr)
        {
            children["route-targets"] = route_targets;
        }
        else
        {
            route_targets = std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets>();
            route_targets->parent = this;
            children["route-targets"] = route_targets;
        }
        return children.at("route-targets");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::EviChildren::get_children()
{
    if(children.find("ethernet-auto-discoveries") == children.end())
    {
        if(ethernet_auto_discoveries != nullptr)
        {
            children["ethernet-auto-discoveries"] = ethernet_auto_discoveries;
        }
    }

    if(children.find("inclusive-multicasts") == children.end())
    {
        if(inclusive_multicasts != nullptr)
        {
            children["inclusive-multicasts"] = inclusive_multicasts;
        }
    }

    if(children.find("macs") == children.end())
    {
        if(macs != nullptr)
        {
            children["macs"] = macs;
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
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

void Evpn::Nodes::Node::EviDetail::EviChildren::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "evi-children";
}

Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::~Neighbors()
{
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor::Neighbor()
    :
    evi{YType::int32, "evi"},
    evi_xr{YType::uint32, "evi-xr"},
    neighbor{YType::str, "neighbor"},
    neighbor_ip{YType::str, "neighbor-ip"}
{
    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor::~Neighbor()
{
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor::has_data() const
{
    return evi.is_set
	|| evi_xr.is_set
	|| neighbor.is_set
	|| neighbor_ip.is_set;
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(evi.operation)
	|| is_set(evi_xr.operation)
	|| is_set(neighbor.operation)
	|| is_set(neighbor_ip.operation);
}

std::string Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.operation)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (neighbor_ip.is_set || is_set(neighbor_ip.operation)) leaf_name_data.push_back(neighbor_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::EviChildren::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
    }
    if(value_path == "neighbor-ip")
    {
        neighbor_ip = value;
    }
}

Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscoveries()
{
    yang_name = "ethernet-auto-discoveries"; yang_parent_name = "evi-children";
}

Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::~EthernetAutoDiscoveries()
{
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::has_data() const
{
    for (std::size_t index=0; index<ethernet_auto_discovery.size(); index++)
    {
        if(ethernet_auto_discovery[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::has_operation() const
{
    for (std::size_t index=0; index<ethernet_auto_discovery.size(); index++)
    {
        if(ethernet_auto_discovery[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-auto-discoveries";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetAutoDiscoveries' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ethernet-auto-discovery")
    {
        for(auto const & c : ethernet_auto_discovery)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery>();
        c->parent = this;
        ethernet_auto_discovery.push_back(std::move(c));
        children[segment_path] = ethernet_auto_discovery.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::get_children()
{
    for (auto const & c : ethernet_auto_discovery)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetAutoDiscovery()
    :
    encap{YType::uint8, "encap"},
    esi1{YType::str, "esi1"},
    esi2{YType::str, "esi2"},
    esi3{YType::str, "esi3"},
    esi4{YType::str, "esi4"},
    esi5{YType::str, "esi5"},
    ethernet_segment_identifier{YType::uint8, "ethernet-segment-identifier"},
    ethernet_tag{YType::int32, "ethernet-tag"},
    ethernet_tag_xr{YType::uint32, "ethernet-tag-xr"},
    ethernet_vpnid{YType::uint32, "ethernet-vpnid"},
    evi{YType::int32, "evi"},
    is_local_ead{YType::boolean, "is-local-ead"},
    local_label{YType::uint32, "local-label"},
    local_next_hop{YType::str, "local-next-hop"},
    num_paths{YType::uint32, "num-paths"},
    redundancy_single_active{YType::boolean, "redundancy-single-active"}
{
    yang_name = "ethernet-auto-discovery"; yang_parent_name = "ethernet-auto-discoveries";
}

Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::~EthernetAutoDiscovery()
{
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::has_data() const
{
    for (std::size_t index=0; index<path_buffer.size(); index++)
    {
        if(path_buffer[index]->has_data())
            return true;
    }
    for (auto const & leaf : ethernet_segment_identifier.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return encap.is_set
	|| esi1.is_set
	|| esi2.is_set
	|| esi3.is_set
	|| esi4.is_set
	|| esi5.is_set
	|| ethernet_tag.is_set
	|| ethernet_tag_xr.is_set
	|| ethernet_vpnid.is_set
	|| evi.is_set
	|| is_local_ead.is_set
	|| local_label.is_set
	|| local_next_hop.is_set
	|| num_paths.is_set
	|| redundancy_single_active.is_set;
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::has_operation() const
{
    for (std::size_t index=0; index<path_buffer.size(); index++)
    {
        if(path_buffer[index]->has_operation())
            return true;
    }
    for (auto const & leaf : ethernet_segment_identifier.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(encap.operation)
	|| is_set(esi1.operation)
	|| is_set(esi2.operation)
	|| is_set(esi3.operation)
	|| is_set(esi4.operation)
	|| is_set(esi5.operation)
	|| is_set(ethernet_segment_identifier.operation)
	|| is_set(ethernet_tag.operation)
	|| is_set(ethernet_tag_xr.operation)
	|| is_set(ethernet_vpnid.operation)
	|| is_set(evi.operation)
	|| is_set(is_local_ead.operation)
	|| is_set(local_label.operation)
	|| is_set(local_next_hop.operation)
	|| is_set(num_paths.operation)
	|| is_set(redundancy_single_active.operation);
}

std::string Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-auto-discovery";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetAutoDiscovery' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.operation)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (esi1.is_set || is_set(esi1.operation)) leaf_name_data.push_back(esi1.get_name_leafdata());
    if (esi2.is_set || is_set(esi2.operation)) leaf_name_data.push_back(esi2.get_name_leafdata());
    if (esi3.is_set || is_set(esi3.operation)) leaf_name_data.push_back(esi3.get_name_leafdata());
    if (esi4.is_set || is_set(esi4.operation)) leaf_name_data.push_back(esi4.get_name_leafdata());
    if (esi5.is_set || is_set(esi5.operation)) leaf_name_data.push_back(esi5.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.operation)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (ethernet_tag_xr.is_set || is_set(ethernet_tag_xr.operation)) leaf_name_data.push_back(ethernet_tag_xr.get_name_leafdata());
    if (ethernet_vpnid.is_set || is_set(ethernet_vpnid.operation)) leaf_name_data.push_back(ethernet_vpnid.get_name_leafdata());
    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (is_local_ead.is_set || is_set(is_local_ead.operation)) leaf_name_data.push_back(is_local_ead.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (local_next_hop.is_set || is_set(local_next_hop.operation)) leaf_name_data.push_back(local_next_hop.get_name_leafdata());
    if (num_paths.is_set || is_set(num_paths.operation)) leaf_name_data.push_back(num_paths.get_name_leafdata());
    if (redundancy_single_active.is_set || is_set(redundancy_single_active.operation)) leaf_name_data.push_back(redundancy_single_active.get_name_leafdata());

    auto ethernet_segment_identifier_name_datas = ethernet_segment_identifier.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ethernet_segment_identifier_name_datas.begin(), ethernet_segment_identifier_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-buffer")
    {
        for(auto const & c : path_buffer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer>();
        c->parent = this;
        path_buffer.push_back(std::move(c));
        children[segment_path] = path_buffer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_children()
{
    for (auto const & c : path_buffer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encap")
    {
        encap = value;
    }
    if(value_path == "esi1")
    {
        esi1 = value;
    }
    if(value_path == "esi2")
    {
        esi2 = value;
    }
    if(value_path == "esi3")
    {
        esi3 = value;
    }
    if(value_path == "esi4")
    {
        esi4 = value;
    }
    if(value_path == "esi5")
    {
        esi5 = value;
    }
    if(value_path == "ethernet-segment-identifier")
    {
        ethernet_segment_identifier.append(value);
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr = value;
    }
    if(value_path == "ethernet-vpnid")
    {
        ethernet_vpnid = value;
    }
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "is-local-ead")
    {
        is_local_ead = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "local-next-hop")
    {
        local_next_hop = value;
    }
    if(value_path == "num-paths")
    {
        num_paths = value;
    }
    if(value_path == "redundancy-single-active")
    {
        redundancy_single_active = value;
    }
}

Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::PathBuffer()
    :
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"}
{
    yang_name = "path-buffer"; yang_parent_name = "ethernet-auto-discovery";
}

Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::~PathBuffer()
{
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::has_data() const
{
    return next_hop.is_set
	|| output_label.is_set;
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation)
	|| is_set(output_label.operation);
}

std::string Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-buffer";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathBuffer' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.operation)) leaf_name_data.push_back(output_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "output-label")
    {
        output_label = value;
    }
}

Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticasts()
{
    yang_name = "inclusive-multicasts"; yang_parent_name = "evi-children";
}

Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::~InclusiveMulticasts()
{
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::has_data() const
{
    for (std::size_t index=0; index<inclusive_multicast.size(); index++)
    {
        if(inclusive_multicast[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::has_operation() const
{
    for (std::size_t index=0; index<inclusive_multicast.size(); index++)
    {
        if(inclusive_multicast[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inclusive-multicasts";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InclusiveMulticasts' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inclusive-multicast")
    {
        for(auto const & c : inclusive_multicast)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast>();
        c->parent = this;
        inclusive_multicast.push_back(std::move(c));
        children[segment_path] = inclusive_multicast.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::get_children()
{
    for (auto const & c : inclusive_multicast)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::InclusiveMulticast()
    :
    ethernet_tag{YType::int32, "ethernet-tag"},
    ethernet_tag_xr{YType::uint32, "ethernet-tag-xr"},
    evi{YType::int32, "evi"},
    evi_xr{YType::uint32, "evi-xr"},
    is_local_entry{YType::boolean, "is-local-entry"},
    next_hop{YType::str, "next-hop"},
    originating_ip{YType::str, "originating-ip"},
    originating_ip_xr{YType::str, "originating-ip-xr"},
    output_label{YType::uint32, "output-label"}
{
    yang_name = "inclusive-multicast"; yang_parent_name = "inclusive-multicasts";
}

Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::~InclusiveMulticast()
{
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::has_data() const
{
    return ethernet_tag.is_set
	|| ethernet_tag_xr.is_set
	|| evi.is_set
	|| evi_xr.is_set
	|| is_local_entry.is_set
	|| next_hop.is_set
	|| originating_ip.is_set
	|| originating_ip_xr.is_set
	|| output_label.is_set;
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::has_operation() const
{
    return is_set(operation)
	|| is_set(ethernet_tag.operation)
	|| is_set(ethernet_tag_xr.operation)
	|| is_set(evi.operation)
	|| is_set(evi_xr.operation)
	|| is_set(is_local_entry.operation)
	|| is_set(next_hop.operation)
	|| is_set(originating_ip.operation)
	|| is_set(originating_ip_xr.operation)
	|| is_set(output_label.operation);
}

std::string Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inclusive-multicast";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InclusiveMulticast' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_tag.is_set || is_set(ethernet_tag.operation)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (ethernet_tag_xr.is_set || is_set(ethernet_tag_xr.operation)) leaf_name_data.push_back(ethernet_tag_xr.get_name_leafdata());
    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.operation)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (is_local_entry.is_set || is_set(is_local_entry.operation)) leaf_name_data.push_back(is_local_entry.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (originating_ip.is_set || is_set(originating_ip.operation)) leaf_name_data.push_back(originating_ip.get_name_leafdata());
    if (originating_ip_xr.is_set || is_set(originating_ip_xr.operation)) leaf_name_data.push_back(originating_ip_xr.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.operation)) leaf_name_data.push_back(output_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr = value;
    }
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
    }
    if(value_path == "is-local-entry")
    {
        is_local_entry = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "originating-ip")
    {
        originating_ip = value;
    }
    if(value_path == "originating-ip-xr")
    {
        originating_ip_xr = value;
    }
    if(value_path == "output-label")
    {
        output_label = value;
    }
}

Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTargets()
{
    yang_name = "route-targets"; yang_parent_name = "evi-children";
}

Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::~RouteTargets()
{
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::has_data() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::has_operation() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-targets";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteTargets' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-target")
    {
        for(auto const & c : route_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget>();
        c->parent = this;
        route_target.push_back(std::move(c));
        children[segment_path] = route_target.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::get_children()
{
    for (auto const & c : route_target)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget()
    :
    addr_index{YType::uint32, "addr-index"},
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    bd_name{YType::str, "bd-name"},
    evi{YType::int32, "evi"},
    evi_xr{YType::uint32, "evi-xr"},
    format{YType::enumeration, "format"},
    role{YType::enumeration, "role"},
    route_target_role{YType::enumeration, "route-target-role"},
    route_target_stitching{YType::boolean, "route-target-stitching"},
    type{YType::enumeration, "type"}
    	,
    route_target(std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_>())
{
    route_target->parent = this;
    children["route-target"] = route_target;

    yang_name = "route-target"; yang_parent_name = "route-targets";
}

Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::~RouteTarget()
{
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::has_data() const
{
    return addr_index.is_set
	|| address.is_set
	|| as.is_set
	|| as_index.is_set
	|| bd_name.is_set
	|| evi.is_set
	|| evi_xr.is_set
	|| format.is_set
	|| role.is_set
	|| route_target_role.is_set
	|| route_target_stitching.is_set
	|| type.is_set
	|| (route_target !=  nullptr && route_target->has_data());
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::has_operation() const
{
    return is_set(operation)
	|| is_set(addr_index.operation)
	|| is_set(address.operation)
	|| is_set(as.operation)
	|| is_set(as_index.operation)
	|| is_set(bd_name.operation)
	|| is_set(evi.operation)
	|| is_set(evi_xr.operation)
	|| is_set(format.operation)
	|| is_set(role.operation)
	|| is_set(route_target_role.operation)
	|| is_set(route_target_stitching.operation)
	|| is_set(type.operation)
	|| (route_target !=  nullptr && route_target->has_operation());
}

std::string Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteTarget' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
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
    if (bd_name.is_set || is_set(bd_name.operation)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.operation)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());
    if (route_target_role.is_set || is_set(route_target_role.operation)) leaf_name_data.push_back(route_target_role.get_name_leafdata());
    if (route_target_stitching.is_set || is_set(route_target_stitching.operation)) leaf_name_data.push_back(route_target_stitching.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-target")
    {
        if(route_target != nullptr)
        {
            children["route-target"] = route_target;
        }
        else
        {
            route_target = std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_>();
            route_target->parent = this;
            children["route-target"] = route_target;
        }
        return children.at("route-target");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::get_children()
{
    if(children.find("route-target") == children.end())
    {
        if(route_target != nullptr)
        {
            children["route-target"] = route_target;
        }
    }

    return children;
}

void Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "bd-name")
    {
        bd_name = value;
    }
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
    }
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
    if(value_path == "route-target-role")
    {
        route_target_role = value;
    }
    if(value_path == "route-target-stitching")
    {
        route_target_stitching = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::RouteTarget_()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport>())
	,four_byte_as(std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs>())
	,two_byte_as(std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs>())
	,v4_addr(std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr>())
{
    es_import->parent = this;
    children["es-import"] = es_import;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "route-target"; yang_parent_name = "route-target";
}

Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::~RouteTarget_()
{
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::has_operation() const
{
    return is_set(operation)
	|| is_set(rt.operation)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteTarget_' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.operation)) leaf_name_data.push_back(rt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "es-import")
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
        else
        {
            es_import = std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport>();
            es_import->parent = this;
            children["es-import"] = es_import;
        }
        return children.at("es-import");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_children()
{
    if(children.find("es-import") == children.end())
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rt")
    {
        rt = value;
    }
}

Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "route-target";
}

Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "route-target";
}

Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::~FourByteAs()
{
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FourByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "route-target";
}

Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::~V4Addr()
{
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Addr' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{
    yang_name = "es-import"; yang_parent_name = "route-target";
}

Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::~EsImport()
{
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::has_operation() const
{
    return is_set(operation)
	|| is_set(high_bytes.operation)
	|| is_set(low_bytes.operation);
}

std::string Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsImport' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.operation)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.operation)) leaf_name_data.push_back(low_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
    }
}

Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Macs()
{
    yang_name = "macs"; yang_parent_name = "evi-children";
}

Evpn::Nodes::Node::EviDetail::EviChildren::Macs::~Macs()
{
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::Macs::has_data() const
{
    for (std::size_t index=0; index<mac.size(); index++)
    {
        if(mac[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::Macs::has_operation() const
{
    for (std::size_t index=0; index<mac.size(); index++)
    {
        if(mac[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Nodes::Node::EviDetail::EviChildren::Macs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macs";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::EviChildren::Macs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Macs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::EviChildren::Macs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mac")
    {
        for(auto const & c : mac)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac>();
        c->parent = this;
        mac.push_back(std::move(c));
        children[segment_path] = mac.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::EviChildren::Macs::get_children()
{
    for (auto const & c : mac)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Nodes::Node::EviDetail::EviChildren::Macs::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::Mac()
    :
    esi_port_key{YType::uint16, "esi-port-key"},
    ethernet_tag{YType::int32, "ethernet-tag"},
    ethernet_tag_xr{YType::uint32, "ethernet-tag-xr"},
    evi{YType::int32, "evi"},
    internal_label{YType::uint32, "internal-label"},
    ip_address{YType::str, "ip-address"},
    ip_address_xr{YType::str, "ip-address-xr"},
    is_local_mac{YType::boolean, "is-local-mac"},
    is_remote_mac{YType::boolean, "is-remote-mac"},
    is_static{YType::boolean, "is-static"},
    learned_bridge_port_name{YType::str, "learned-bridge-port-name"},
    local_encap_type{YType::uint8, "local-encap-type"},
    local_ethernet_segment_identifier{YType::uint8, "local-ethernet-segment-identifier"},
    local_label{YType::uint32, "local-label"},
    local_seq_id{YType::uint32, "local-seq-id"},
    mac_address{YType::str, "mac-address"},
    mac_address_xr{YType::str, "mac-address-xr"},
    mac_flush_received{YType::uint16, "mac-flush-received"},
    mac_flush_requested{YType::uint16, "mac-flush-requested"},
    num_paths{YType::uint32, "num-paths"},
    remote_encap_type{YType::uint8, "remote-encap-type"},
    remote_ethernet_segment_identifier{YType::uint8, "remote-ethernet-segment-identifier"},
    remote_seq_id{YType::uint32, "remote-seq-id"},
    resolved{YType::boolean, "resolved"},
    soo_nexthop{YType::str, "soo-nexthop"}
{
    yang_name = "mac"; yang_parent_name = "macs";
}

Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::~Mac()
{
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::has_data() const
{
    for (std::size_t index=0; index<path_buffer.size(); index++)
    {
        if(path_buffer[index]->has_data())
            return true;
    }
    for (auto const & leaf : local_ethernet_segment_identifier.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_ethernet_segment_identifier.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return esi_port_key.is_set
	|| ethernet_tag.is_set
	|| ethernet_tag_xr.is_set
	|| evi.is_set
	|| internal_label.is_set
	|| ip_address.is_set
	|| ip_address_xr.is_set
	|| is_local_mac.is_set
	|| is_remote_mac.is_set
	|| is_static.is_set
	|| learned_bridge_port_name.is_set
	|| local_encap_type.is_set
	|| local_label.is_set
	|| local_seq_id.is_set
	|| mac_address.is_set
	|| mac_address_xr.is_set
	|| mac_flush_received.is_set
	|| mac_flush_requested.is_set
	|| num_paths.is_set
	|| remote_encap_type.is_set
	|| remote_seq_id.is_set
	|| resolved.is_set
	|| soo_nexthop.is_set;
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::has_operation() const
{
    for (std::size_t index=0; index<path_buffer.size(); index++)
    {
        if(path_buffer[index]->has_operation())
            return true;
    }
    for (auto const & leaf : local_ethernet_segment_identifier.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_ethernet_segment_identifier.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(esi_port_key.operation)
	|| is_set(ethernet_tag.operation)
	|| is_set(ethernet_tag_xr.operation)
	|| is_set(evi.operation)
	|| is_set(internal_label.operation)
	|| is_set(ip_address.operation)
	|| is_set(ip_address_xr.operation)
	|| is_set(is_local_mac.operation)
	|| is_set(is_remote_mac.operation)
	|| is_set(is_static.operation)
	|| is_set(learned_bridge_port_name.operation)
	|| is_set(local_encap_type.operation)
	|| is_set(local_ethernet_segment_identifier.operation)
	|| is_set(local_label.operation)
	|| is_set(local_seq_id.operation)
	|| is_set(mac_address.operation)
	|| is_set(mac_address_xr.operation)
	|| is_set(mac_flush_received.operation)
	|| is_set(mac_flush_requested.operation)
	|| is_set(num_paths.operation)
	|| is_set(remote_encap_type.operation)
	|| is_set(remote_ethernet_segment_identifier.operation)
	|| is_set(remote_seq_id.operation)
	|| is_set(resolved.operation)
	|| is_set(soo_nexthop.operation);
}

std::string Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mac' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esi_port_key.is_set || is_set(esi_port_key.operation)) leaf_name_data.push_back(esi_port_key.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.operation)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (ethernet_tag_xr.is_set || is_set(ethernet_tag_xr.operation)) leaf_name_data.push_back(ethernet_tag_xr.get_name_leafdata());
    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_xr.is_set || is_set(ip_address_xr.operation)) leaf_name_data.push_back(ip_address_xr.get_name_leafdata());
    if (is_local_mac.is_set || is_set(is_local_mac.operation)) leaf_name_data.push_back(is_local_mac.get_name_leafdata());
    if (is_remote_mac.is_set || is_set(is_remote_mac.operation)) leaf_name_data.push_back(is_remote_mac.get_name_leafdata());
    if (is_static.is_set || is_set(is_static.operation)) leaf_name_data.push_back(is_static.get_name_leafdata());
    if (learned_bridge_port_name.is_set || is_set(learned_bridge_port_name.operation)) leaf_name_data.push_back(learned_bridge_port_name.get_name_leafdata());
    if (local_encap_type.is_set || is_set(local_encap_type.operation)) leaf_name_data.push_back(local_encap_type.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (local_seq_id.is_set || is_set(local_seq_id.operation)) leaf_name_data.push_back(local_seq_id.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_xr.is_set || is_set(mac_address_xr.operation)) leaf_name_data.push_back(mac_address_xr.get_name_leafdata());
    if (mac_flush_received.is_set || is_set(mac_flush_received.operation)) leaf_name_data.push_back(mac_flush_received.get_name_leafdata());
    if (mac_flush_requested.is_set || is_set(mac_flush_requested.operation)) leaf_name_data.push_back(mac_flush_requested.get_name_leafdata());
    if (num_paths.is_set || is_set(num_paths.operation)) leaf_name_data.push_back(num_paths.get_name_leafdata());
    if (remote_encap_type.is_set || is_set(remote_encap_type.operation)) leaf_name_data.push_back(remote_encap_type.get_name_leafdata());
    if (remote_seq_id.is_set || is_set(remote_seq_id.operation)) leaf_name_data.push_back(remote_seq_id.get_name_leafdata());
    if (resolved.is_set || is_set(resolved.operation)) leaf_name_data.push_back(resolved.get_name_leafdata());
    if (soo_nexthop.is_set || is_set(soo_nexthop.operation)) leaf_name_data.push_back(soo_nexthop.get_name_leafdata());

    auto local_ethernet_segment_identifier_name_datas = local_ethernet_segment_identifier.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_ethernet_segment_identifier_name_datas.begin(), local_ethernet_segment_identifier_name_datas.end());
    auto remote_ethernet_segment_identifier_name_datas = remote_ethernet_segment_identifier.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_ethernet_segment_identifier_name_datas.begin(), remote_ethernet_segment_identifier_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-buffer")
    {
        for(auto const & c : path_buffer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::PathBuffer>();
        c->parent = this;
        path_buffer.push_back(std::move(c));
        children[segment_path] = path_buffer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::get_children()
{
    for (auto const & c : path_buffer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "esi-port-key")
    {
        esi_port_key = value;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr = value;
    }
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "ip-address-xr")
    {
        ip_address_xr = value;
    }
    if(value_path == "is-local-mac")
    {
        is_local_mac = value;
    }
    if(value_path == "is-remote-mac")
    {
        is_remote_mac = value;
    }
    if(value_path == "is-static")
    {
        is_static = value;
    }
    if(value_path == "learned-bridge-port-name")
    {
        learned_bridge_port_name = value;
    }
    if(value_path == "local-encap-type")
    {
        local_encap_type = value;
    }
    if(value_path == "local-ethernet-segment-identifier")
    {
        local_ethernet_segment_identifier.append(value);
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "local-seq-id")
    {
        local_seq_id = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr = value;
    }
    if(value_path == "mac-flush-received")
    {
        mac_flush_received = value;
    }
    if(value_path == "mac-flush-requested")
    {
        mac_flush_requested = value;
    }
    if(value_path == "num-paths")
    {
        num_paths = value;
    }
    if(value_path == "remote-encap-type")
    {
        remote_encap_type = value;
    }
    if(value_path == "remote-ethernet-segment-identifier")
    {
        remote_ethernet_segment_identifier.append(value);
    }
    if(value_path == "remote-seq-id")
    {
        remote_seq_id = value;
    }
    if(value_path == "resolved")
    {
        resolved = value;
    }
    if(value_path == "soo-nexthop")
    {
        soo_nexthop = value;
    }
}

Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::PathBuffer::PathBuffer()
    :
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"}
{
    yang_name = "path-buffer"; yang_parent_name = "mac";
}

Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::PathBuffer::~PathBuffer()
{
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::PathBuffer::has_data() const
{
    return next_hop.is_set
	|| output_label.is_set;
}

bool Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::PathBuffer::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation)
	|| is_set(output_label.operation);
}

std::string Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-buffer";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathBuffer' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.operation)) leaf_name_data.push_back(output_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EviDetail::EviChildren::Macs::Mac::PathBuffer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "output-label")
    {
        output_label = value;
    }
}

Evpn::Nodes::Node::EthernetSegments::EthernetSegments()
{
    yang_name = "ethernet-segments"; yang_parent_name = "node";
}

Evpn::Nodes::Node::EthernetSegments::~EthernetSegments()
{
}

bool Evpn::Nodes::Node::EthernetSegments::has_data() const
{
    for (std::size_t index=0; index<ethernet_segment.size(); index++)
    {
        if(ethernet_segment[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Nodes::Node::EthernetSegments::has_operation() const
{
    for (std::size_t index=0; index<ethernet_segment.size(); index++)
    {
        if(ethernet_segment[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Nodes::Node::EthernetSegments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segments";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EthernetSegments::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetSegments' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EthernetSegments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ethernet-segment")
    {
        for(auto const & c : ethernet_segment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Nodes::Node::EthernetSegments::EthernetSegment>();
        c->parent = this;
        ethernet_segment.push_back(std::move(c));
        children[segment_path] = ethernet_segment.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EthernetSegments::get_children()
{
    for (auto const & c : ethernet_segment)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Nodes::Node::EthernetSegments::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Nodes::Node::EthernetSegments::EthernetSegment::EthernetSegment()
    :
    elected_d_fs{YType::uint32, "elected-d-fs"},
    es_bgp_gates{YType::str, "es-bgp-gates"},
    es_l2fib_gates{YType::str, "es-l2fib-gates"},
    esi1{YType::str, "esi1"},
    esi2{YType::str, "esi2"},
    esi3{YType::str, "esi3"},
    esi4{YType::str, "esi4"},
    esi5{YType::str, "esi5"},
    esi_type{YType::enumeration, "esi-type"},
    ethernet_segment_identifier{YType::uint8, "ethernet-segment-identifier"},
    ethernet_segment_name{YType::str, "ethernet-segment-name"},
    ethernet_segment_state{YType::uint32, "ethernet-segment-state"},
    force_single_home{YType::boolean, "force-single-home"},
    forwarder_ports{YType::uint32, "forwarder-ports"},
    if_handle{YType::str, "if-handle"},
    interface_name{YType::str, "interface-name"},
    load_balance_mode_config{YType::enumeration, "load-balance-mode-config"},
    load_balance_mode_is_default{YType::boolean, "load-balance-mode-is-default"},
    load_balance_mode_oper{YType::enumeration, "load-balance-mode-oper"},
    local_split_horizon_group_label{YType::uint32, "local-split-horizon-group-label"},
    mac_flushing_mode_config{YType::enumeration, "mac-flushing-mode-config"},
    main_port_mac{YType::str, "main-port-mac"},
    main_port_role{YType::enumeration, "main-port-role"},
    mp_protected{YType::boolean, "mp-protected"},
    not_config_d_fs{YType::uint32, "not-config-d-fs"},
    not_elected_d_fs{YType::uint32, "not-elected-d-fs"},
    num_up_p_ws{YType::uint32, "num-up-p-ws"},
    peering_timer{YType::uint32, "peering-timer"},
    peering_timer_left{YType::uint32, "peering-timer-left"},
    primary_service{YType::uint32, "primary-service"},
    primary_services_input{YType::str, "primary-services-input"},
    recovery_timer{YType::uint32, "recovery-timer"},
    recovery_timer_left{YType::uint32, "recovery-timer-left"},
    route_target{YType::str, "route-target"},
    rt_origin{YType::enumeration, "rt-origin"},
    secondary_service{YType::uint32, "secondary-service"},
    secondary_services_input{YType::str, "secondary-services-input"},
    service_carving_mode{YType::enumeration, "service-carving-mode"},
    service_carving_result{YType::uint32, "service-carving-result"},
    service_carving_type{YType::enumeration, "service-carving-type"},
    source_mac_oper{YType::str, "source-mac-oper"},
    source_mac_origin{YType::enumeration, "source-mac-origin"}
{
    yang_name = "ethernet-segment"; yang_parent_name = "ethernet-segments";
}

Evpn::Nodes::Node::EthernetSegments::EthernetSegment::~EthernetSegment()
{
}

bool Evpn::Nodes::Node::EthernetSegments::EthernetSegment::has_data() const
{
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_split_horizon_group_label.size(); index++)
    {
        if(remote_split_horizon_group_label[index]->has_data())
            return true;
    }
    for (auto const & leaf : ethernet_segment_identifier.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : primary_service.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : secondary_service.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : service_carving_result.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return elected_d_fs.is_set
	|| es_bgp_gates.is_set
	|| es_l2fib_gates.is_set
	|| esi1.is_set
	|| esi2.is_set
	|| esi3.is_set
	|| esi4.is_set
	|| esi5.is_set
	|| esi_type.is_set
	|| ethernet_segment_name.is_set
	|| ethernet_segment_state.is_set
	|| force_single_home.is_set
	|| forwarder_ports.is_set
	|| if_handle.is_set
	|| interface_name.is_set
	|| load_balance_mode_config.is_set
	|| load_balance_mode_is_default.is_set
	|| load_balance_mode_oper.is_set
	|| local_split_horizon_group_label.is_set
	|| mac_flushing_mode_config.is_set
	|| main_port_mac.is_set
	|| main_port_role.is_set
	|| mp_protected.is_set
	|| not_config_d_fs.is_set
	|| not_elected_d_fs.is_set
	|| num_up_p_ws.is_set
	|| peering_timer.is_set
	|| peering_timer_left.is_set
	|| primary_services_input.is_set
	|| recovery_timer.is_set
	|| recovery_timer_left.is_set
	|| route_target.is_set
	|| rt_origin.is_set
	|| secondary_services_input.is_set
	|| service_carving_mode.is_set
	|| service_carving_type.is_set
	|| source_mac_oper.is_set
	|| source_mac_origin.is_set;
}

bool Evpn::Nodes::Node::EthernetSegments::EthernetSegment::has_operation() const
{
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_split_horizon_group_label.size(); index++)
    {
        if(remote_split_horizon_group_label[index]->has_operation())
            return true;
    }
    for (auto const & leaf : ethernet_segment_identifier.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : primary_service.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : secondary_service.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : service_carving_result.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(elected_d_fs.operation)
	|| is_set(es_bgp_gates.operation)
	|| is_set(es_l2fib_gates.operation)
	|| is_set(esi1.operation)
	|| is_set(esi2.operation)
	|| is_set(esi3.operation)
	|| is_set(esi4.operation)
	|| is_set(esi5.operation)
	|| is_set(esi_type.operation)
	|| is_set(ethernet_segment_identifier.operation)
	|| is_set(ethernet_segment_name.operation)
	|| is_set(ethernet_segment_state.operation)
	|| is_set(force_single_home.operation)
	|| is_set(forwarder_ports.operation)
	|| is_set(if_handle.operation)
	|| is_set(interface_name.operation)
	|| is_set(load_balance_mode_config.operation)
	|| is_set(load_balance_mode_is_default.operation)
	|| is_set(load_balance_mode_oper.operation)
	|| is_set(local_split_horizon_group_label.operation)
	|| is_set(mac_flushing_mode_config.operation)
	|| is_set(main_port_mac.operation)
	|| is_set(main_port_role.operation)
	|| is_set(mp_protected.operation)
	|| is_set(not_config_d_fs.operation)
	|| is_set(not_elected_d_fs.operation)
	|| is_set(num_up_p_ws.operation)
	|| is_set(peering_timer.operation)
	|| is_set(peering_timer_left.operation)
	|| is_set(primary_service.operation)
	|| is_set(primary_services_input.operation)
	|| is_set(recovery_timer.operation)
	|| is_set(recovery_timer_left.operation)
	|| is_set(route_target.operation)
	|| is_set(rt_origin.operation)
	|| is_set(secondary_service.operation)
	|| is_set(secondary_services_input.operation)
	|| is_set(service_carving_mode.operation)
	|| is_set(service_carving_result.operation)
	|| is_set(service_carving_type.operation)
	|| is_set(source_mac_oper.operation)
	|| is_set(source_mac_origin.operation);
}

std::string Evpn::Nodes::Node::EthernetSegments::EthernetSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EthernetSegments::EthernetSegment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetSegment' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (elected_d_fs.is_set || is_set(elected_d_fs.operation)) leaf_name_data.push_back(elected_d_fs.get_name_leafdata());
    if (es_bgp_gates.is_set || is_set(es_bgp_gates.operation)) leaf_name_data.push_back(es_bgp_gates.get_name_leafdata());
    if (es_l2fib_gates.is_set || is_set(es_l2fib_gates.operation)) leaf_name_data.push_back(es_l2fib_gates.get_name_leafdata());
    if (esi1.is_set || is_set(esi1.operation)) leaf_name_data.push_back(esi1.get_name_leafdata());
    if (esi2.is_set || is_set(esi2.operation)) leaf_name_data.push_back(esi2.get_name_leafdata());
    if (esi3.is_set || is_set(esi3.operation)) leaf_name_data.push_back(esi3.get_name_leafdata());
    if (esi4.is_set || is_set(esi4.operation)) leaf_name_data.push_back(esi4.get_name_leafdata());
    if (esi5.is_set || is_set(esi5.operation)) leaf_name_data.push_back(esi5.get_name_leafdata());
    if (esi_type.is_set || is_set(esi_type.operation)) leaf_name_data.push_back(esi_type.get_name_leafdata());
    if (ethernet_segment_name.is_set || is_set(ethernet_segment_name.operation)) leaf_name_data.push_back(ethernet_segment_name.get_name_leafdata());
    if (ethernet_segment_state.is_set || is_set(ethernet_segment_state.operation)) leaf_name_data.push_back(ethernet_segment_state.get_name_leafdata());
    if (force_single_home.is_set || is_set(force_single_home.operation)) leaf_name_data.push_back(force_single_home.get_name_leafdata());
    if (forwarder_ports.is_set || is_set(forwarder_ports.operation)) leaf_name_data.push_back(forwarder_ports.get_name_leafdata());
    if (if_handle.is_set || is_set(if_handle.operation)) leaf_name_data.push_back(if_handle.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_balance_mode_config.is_set || is_set(load_balance_mode_config.operation)) leaf_name_data.push_back(load_balance_mode_config.get_name_leafdata());
    if (load_balance_mode_is_default.is_set || is_set(load_balance_mode_is_default.operation)) leaf_name_data.push_back(load_balance_mode_is_default.get_name_leafdata());
    if (load_balance_mode_oper.is_set || is_set(load_balance_mode_oper.operation)) leaf_name_data.push_back(load_balance_mode_oper.get_name_leafdata());
    if (local_split_horizon_group_label.is_set || is_set(local_split_horizon_group_label.operation)) leaf_name_data.push_back(local_split_horizon_group_label.get_name_leafdata());
    if (mac_flushing_mode_config.is_set || is_set(mac_flushing_mode_config.operation)) leaf_name_data.push_back(mac_flushing_mode_config.get_name_leafdata());
    if (main_port_mac.is_set || is_set(main_port_mac.operation)) leaf_name_data.push_back(main_port_mac.get_name_leafdata());
    if (main_port_role.is_set || is_set(main_port_role.operation)) leaf_name_data.push_back(main_port_role.get_name_leafdata());
    if (mp_protected.is_set || is_set(mp_protected.operation)) leaf_name_data.push_back(mp_protected.get_name_leafdata());
    if (not_config_d_fs.is_set || is_set(not_config_d_fs.operation)) leaf_name_data.push_back(not_config_d_fs.get_name_leafdata());
    if (not_elected_d_fs.is_set || is_set(not_elected_d_fs.operation)) leaf_name_data.push_back(not_elected_d_fs.get_name_leafdata());
    if (num_up_p_ws.is_set || is_set(num_up_p_ws.operation)) leaf_name_data.push_back(num_up_p_ws.get_name_leafdata());
    if (peering_timer.is_set || is_set(peering_timer.operation)) leaf_name_data.push_back(peering_timer.get_name_leafdata());
    if (peering_timer_left.is_set || is_set(peering_timer_left.operation)) leaf_name_data.push_back(peering_timer_left.get_name_leafdata());
    if (primary_services_input.is_set || is_set(primary_services_input.operation)) leaf_name_data.push_back(primary_services_input.get_name_leafdata());
    if (recovery_timer.is_set || is_set(recovery_timer.operation)) leaf_name_data.push_back(recovery_timer.get_name_leafdata());
    if (recovery_timer_left.is_set || is_set(recovery_timer_left.operation)) leaf_name_data.push_back(recovery_timer_left.get_name_leafdata());
    if (route_target.is_set || is_set(route_target.operation)) leaf_name_data.push_back(route_target.get_name_leafdata());
    if (rt_origin.is_set || is_set(rt_origin.operation)) leaf_name_data.push_back(rt_origin.get_name_leafdata());
    if (secondary_services_input.is_set || is_set(secondary_services_input.operation)) leaf_name_data.push_back(secondary_services_input.get_name_leafdata());
    if (service_carving_mode.is_set || is_set(service_carving_mode.operation)) leaf_name_data.push_back(service_carving_mode.get_name_leafdata());
    if (service_carving_type.is_set || is_set(service_carving_type.operation)) leaf_name_data.push_back(service_carving_type.get_name_leafdata());
    if (source_mac_oper.is_set || is_set(source_mac_oper.operation)) leaf_name_data.push_back(source_mac_oper.get_name_leafdata());
    if (source_mac_origin.is_set || is_set(source_mac_origin.operation)) leaf_name_data.push_back(source_mac_origin.get_name_leafdata());

    auto ethernet_segment_identifier_name_datas = ethernet_segment_identifier.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ethernet_segment_identifier_name_datas.begin(), ethernet_segment_identifier_name_datas.end());
    auto primary_service_name_datas = primary_service.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), primary_service_name_datas.begin(), primary_service_name_datas.end());
    auto secondary_service_name_datas = secondary_service.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), secondary_service_name_datas.begin(), secondary_service_name_datas.end());
    auto service_carving_result_name_datas = service_carving_result.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), service_carving_result_name_datas.begin(), service_carving_result_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EthernetSegments::EthernetSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "next-hop")
    {
        for(auto const & c : next_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Nodes::Node::EthernetSegments::EthernetSegment::NextHop>();
        c->parent = this;
        next_hop.push_back(std::move(c));
        children[segment_path] = next_hop.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-split-horizon-group-label")
    {
        for(auto const & c : remote_split_horizon_group_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Nodes::Node::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel>();
        c->parent = this;
        remote_split_horizon_group_label.push_back(std::move(c));
        children[segment_path] = remote_split_horizon_group_label.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EthernetSegments::EthernetSegment::get_children()
{
    for (auto const & c : next_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : remote_split_horizon_group_label)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Nodes::Node::EthernetSegments::EthernetSegment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "elected-d-fs")
    {
        elected_d_fs = value;
    }
    if(value_path == "es-bgp-gates")
    {
        es_bgp_gates = value;
    }
    if(value_path == "es-l2fib-gates")
    {
        es_l2fib_gates = value;
    }
    if(value_path == "esi1")
    {
        esi1 = value;
    }
    if(value_path == "esi2")
    {
        esi2 = value;
    }
    if(value_path == "esi3")
    {
        esi3 = value;
    }
    if(value_path == "esi4")
    {
        esi4 = value;
    }
    if(value_path == "esi5")
    {
        esi5 = value;
    }
    if(value_path == "esi-type")
    {
        esi_type = value;
    }
    if(value_path == "ethernet-segment-identifier")
    {
        ethernet_segment_identifier.append(value);
    }
    if(value_path == "ethernet-segment-name")
    {
        ethernet_segment_name = value;
    }
    if(value_path == "ethernet-segment-state")
    {
        ethernet_segment_state = value;
    }
    if(value_path == "force-single-home")
    {
        force_single_home = value;
    }
    if(value_path == "forwarder-ports")
    {
        forwarder_ports = value;
    }
    if(value_path == "if-handle")
    {
        if_handle = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "load-balance-mode-config")
    {
        load_balance_mode_config = value;
    }
    if(value_path == "load-balance-mode-is-default")
    {
        load_balance_mode_is_default = value;
    }
    if(value_path == "load-balance-mode-oper")
    {
        load_balance_mode_oper = value;
    }
    if(value_path == "local-split-horizon-group-label")
    {
        local_split_horizon_group_label = value;
    }
    if(value_path == "mac-flushing-mode-config")
    {
        mac_flushing_mode_config = value;
    }
    if(value_path == "main-port-mac")
    {
        main_port_mac = value;
    }
    if(value_path == "main-port-role")
    {
        main_port_role = value;
    }
    if(value_path == "mp-protected")
    {
        mp_protected = value;
    }
    if(value_path == "not-config-d-fs")
    {
        not_config_d_fs = value;
    }
    if(value_path == "not-elected-d-fs")
    {
        not_elected_d_fs = value;
    }
    if(value_path == "num-up-p-ws")
    {
        num_up_p_ws = value;
    }
    if(value_path == "peering-timer")
    {
        peering_timer = value;
    }
    if(value_path == "peering-timer-left")
    {
        peering_timer_left = value;
    }
    if(value_path == "primary-service")
    {
        primary_service.append(value);
    }
    if(value_path == "primary-services-input")
    {
        primary_services_input = value;
    }
    if(value_path == "recovery-timer")
    {
        recovery_timer = value;
    }
    if(value_path == "recovery-timer-left")
    {
        recovery_timer_left = value;
    }
    if(value_path == "route-target")
    {
        route_target = value;
    }
    if(value_path == "rt-origin")
    {
        rt_origin = value;
    }
    if(value_path == "secondary-service")
    {
        secondary_service.append(value);
    }
    if(value_path == "secondary-services-input")
    {
        secondary_services_input = value;
    }
    if(value_path == "service-carving-mode")
    {
        service_carving_mode = value;
    }
    if(value_path == "service-carving-result")
    {
        service_carving_result.append(value);
    }
    if(value_path == "service-carving-type")
    {
        service_carving_type = value;
    }
    if(value_path == "source-mac-oper")
    {
        source_mac_oper = value;
    }
    if(value_path == "source-mac-origin")
    {
        source_mac_origin = value;
    }
}

Evpn::Nodes::Node::EthernetSegments::EthernetSegment::NextHop::NextHop()
    :
    next_hop{YType::str, "next-hop"}
{
    yang_name = "next-hop"; yang_parent_name = "ethernet-segment";
}

Evpn::Nodes::Node::EthernetSegments::EthernetSegment::NextHop::~NextHop()
{
}

bool Evpn::Nodes::Node::EthernetSegments::EthernetSegment::NextHop::has_data() const
{
    return next_hop.is_set;
}

bool Evpn::Nodes::Node::EthernetSegments::EthernetSegment::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation);
}

std::string Evpn::Nodes::Node::EthernetSegments::EthernetSegment::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EthernetSegments::EthernetSegment::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EthernetSegments::EthernetSegment::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EthernetSegments::EthernetSegment::NextHop::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EthernetSegments::EthernetSegment::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
}

Evpn::Nodes::Node::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::RemoteSplitHorizonGroupLabel()
    :
    label{YType::uint32, "label"},
    next_hop{YType::str, "next-hop"}
{
    yang_name = "remote-split-horizon-group-label"; yang_parent_name = "ethernet-segment";
}

Evpn::Nodes::Node::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::~RemoteSplitHorizonGroupLabel()
{
}

bool Evpn::Nodes::Node::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::has_data() const
{
    return label.is_set
	|| next_hop.is_set;
}

bool Evpn::Nodes::Node::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(next_hop.operation);
}

std::string Evpn::Nodes::Node::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-split-horizon-group-label";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteSplitHorizonGroupLabel' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_children()
{
    return children;
}

void Evpn::Nodes::Node::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
}

Evpn::Nodes::Node::AcIds::AcIds()
{
    yang_name = "ac-ids"; yang_parent_name = "node";
}

Evpn::Nodes::Node::AcIds::~AcIds()
{
}

bool Evpn::Nodes::Node::AcIds::has_data() const
{
    for (std::size_t index=0; index<ac_id.size(); index++)
    {
        if(ac_id[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Nodes::Node::AcIds::has_operation() const
{
    for (std::size_t index=0; index<ac_id.size(); index++)
    {
        if(ac_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Nodes::Node::AcIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac-ids";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::AcIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcIds' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::AcIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ac-id")
    {
        for(auto const & c : ac_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Nodes::Node::AcIds::AcId>();
        c->parent = this;
        ac_id.push_back(std::move(c));
        children[segment_path] = ac_id.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::AcIds::get_children()
{
    for (auto const & c : ac_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Nodes::Node::AcIds::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Nodes::Node::AcIds::AcId::AcId()
    :
    ac_id{YType::int32, "ac-id"},
    evi{YType::int32, "evi"},
    evi_xr{YType::uint32, "evi-xr"},
    neighbor{YType::str, "neighbor"}
{
    yang_name = "ac-id"; yang_parent_name = "ac-ids";
}

Evpn::Nodes::Node::AcIds::AcId::~AcId()
{
}

bool Evpn::Nodes::Node::AcIds::AcId::has_data() const
{
    return ac_id.is_set
	|| evi.is_set
	|| evi_xr.is_set
	|| neighbor.is_set;
}

bool Evpn::Nodes::Node::AcIds::AcId::has_operation() const
{
    return is_set(operation)
	|| is_set(ac_id.operation)
	|| is_set(evi.operation)
	|| is_set(evi_xr.operation)
	|| is_set(neighbor.operation);
}

std::string Evpn::Nodes::Node::AcIds::AcId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac-id";

    return path_buffer.str();

}

EntityPath Evpn::Nodes::Node::AcIds::AcId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AcId' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_id.is_set || is_set(ac_id.operation)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.operation)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Nodes::Node::AcIds::AcId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Nodes::Node::AcIds::AcId::get_children()
{
    return children;
}

void Evpn::Nodes::Node::AcIds::AcId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ac-id")
    {
        ac_id = value;
    }
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
    }
}

Evpn::Active::Active()
    :
    ac_ids(std::make_shared<Evpn::Active::AcIds>())
	,ethernet_segments(std::make_shared<Evpn::Active::EthernetSegments>())
	,evi_detail(std::make_shared<Evpn::Active::EviDetail>())
	,evis(std::make_shared<Evpn::Active::Evis>())
	,summary(std::make_shared<Evpn::Active::Summary>())
{
    ac_ids->parent = this;
    children["ac-ids"] = ac_ids;

    ethernet_segments->parent = this;
    children["ethernet-segments"] = ethernet_segments;

    evi_detail->parent = this;
    children["evi-detail"] = evi_detail;

    evis->parent = this;
    children["evis"] = evis;

    summary->parent = this;
    children["summary"] = summary;

    yang_name = "active"; yang_parent_name = "evpn";
}

Evpn::Active::~Active()
{
}

bool Evpn::Active::has_data() const
{
    return (ac_ids !=  nullptr && ac_ids->has_data())
	|| (ethernet_segments !=  nullptr && ethernet_segments->has_data())
	|| (evi_detail !=  nullptr && evi_detail->has_data())
	|| (evis !=  nullptr && evis->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Evpn::Active::has_operation() const
{
    return is_set(operation)
	|| (ac_ids !=  nullptr && ac_ids->has_operation())
	|| (ethernet_segments !=  nullptr && ethernet_segments->has_operation())
	|| (evi_detail !=  nullptr && evi_detail->has_operation())
	|| (evis !=  nullptr && evis->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Evpn::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

EntityPath Evpn::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ac-ids")
    {
        if(ac_ids != nullptr)
        {
            children["ac-ids"] = ac_ids;
        }
        else
        {
            ac_ids = std::make_shared<Evpn::Active::AcIds>();
            ac_ids->parent = this;
            children["ac-ids"] = ac_ids;
        }
        return children.at("ac-ids");
    }

    if(child_yang_name == "ethernet-segments")
    {
        if(ethernet_segments != nullptr)
        {
            children["ethernet-segments"] = ethernet_segments;
        }
        else
        {
            ethernet_segments = std::make_shared<Evpn::Active::EthernetSegments>();
            ethernet_segments->parent = this;
            children["ethernet-segments"] = ethernet_segments;
        }
        return children.at("ethernet-segments");
    }

    if(child_yang_name == "evi-detail")
    {
        if(evi_detail != nullptr)
        {
            children["evi-detail"] = evi_detail;
        }
        else
        {
            evi_detail = std::make_shared<Evpn::Active::EviDetail>();
            evi_detail->parent = this;
            children["evi-detail"] = evi_detail;
        }
        return children.at("evi-detail");
    }

    if(child_yang_name == "evis")
    {
        if(evis != nullptr)
        {
            children["evis"] = evis;
        }
        else
        {
            evis = std::make_shared<Evpn::Active::Evis>();
            evis->parent = this;
            children["evis"] = evis;
        }
        return children.at("evis");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<Evpn::Active::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::get_children()
{
    if(children.find("ac-ids") == children.end())
    {
        if(ac_ids != nullptr)
        {
            children["ac-ids"] = ac_ids;
        }
    }

    if(children.find("ethernet-segments") == children.end())
    {
        if(ethernet_segments != nullptr)
        {
            children["ethernet-segments"] = ethernet_segments;
        }
    }

    if(children.find("evi-detail") == children.end())
    {
        if(evi_detail != nullptr)
        {
            children["evi-detail"] = evi_detail;
        }
    }

    if(children.find("evis") == children.end())
    {
        if(evis != nullptr)
        {
            children["evis"] = evis;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void Evpn::Active::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Active::Evis::Evis()
{
    yang_name = "evis"; yang_parent_name = "active";
}

Evpn::Active::Evis::~Evis()
{
}

bool Evpn::Active::Evis::has_data() const
{
    for (std::size_t index=0; index<evi.size(); index++)
    {
        if(evi[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Active::Evis::has_operation() const
{
    for (std::size_t index=0; index<evi.size(); index++)
    {
        if(evi[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Active::Evis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evis";

    return path_buffer.str();

}

EntityPath Evpn::Active::Evis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::Evis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evi")
    {
        for(auto const & c : evi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Active::Evis::Evi>();
        c->parent = this;
        evi.push_back(std::move(c));
        children[segment_path] = evi.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::Evis::get_children()
{
    for (auto const & c : evi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Active::Evis::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Active::Evis::Evi::Evi()
    :
    evi{YType::int32, "evi"},
    bd_name{YType::str, "bd-name"},
    evi_xr{YType::uint32, "evi-xr"},
    type{YType::enumeration, "type"}
{
    yang_name = "evi"; yang_parent_name = "evis";
}

Evpn::Active::Evis::Evi::~Evi()
{
}

bool Evpn::Active::Evis::Evi::has_data() const
{
    return evi.is_set
	|| bd_name.is_set
	|| evi_xr.is_set
	|| type.is_set;
}

bool Evpn::Active::Evis::Evi::has_operation() const
{
    return is_set(operation)
	|| is_set(evi.operation)
	|| is_set(bd_name.operation)
	|| is_set(evi_xr.operation)
	|| is_set(type.operation);
}

std::string Evpn::Active::Evis::Evi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi" <<"[evi='" <<evi <<"']";

    return path_buffer.str();

}

EntityPath Evpn::Active::Evis::Evi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.operation)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.operation)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::Evis::Evi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::Evis::Evi::get_children()
{
    return children;
}

void Evpn::Active::Evis::Evi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Evpn::Active::Summary::Summary()
    :
    as{YType::uint32, "as"},
    es_entries{YType::uint32, "es-entries"},
    es_global_mac_routes{YType::uint32, "es-global-mac-routes"},
    ev_is{YType::uint32, "ev-is"},
    global_source_mac{YType::str, "global-source-mac"},
    l2rib_throttle{YType::boolean, "l2rib-throttle"},
    labels{YType::uint32, "labels"},
    local_ead_routes{YType::uint32, "local-ead-routes"},
    local_imcast_routes{YType::uint32, "local-imcast-routes"},
    local_ipv4_mac_routes{YType::uint32, "local-ipv4-mac-routes"},
    local_ipv6_mac_routes{YType::uint32, "local-ipv6-mac-routes"},
    local_mac_routes{YType::uint32, "local-mac-routes"},
    logging_df_election_enabled{YType::boolean, "logging-df-election-enabled"},
    neighbor_entries{YType::uint32, "neighbor-entries"},
    peering_time{YType::uint32, "peering-time"},
    recovery_time{YType::uint32, "recovery-time"},
    remote_ead_routes{YType::uint32, "remote-ead-routes"},
    remote_imcast_routes{YType::uint32, "remote-imcast-routes"},
    remote_ipv4_mac_routes{YType::uint32, "remote-ipv4-mac-routes"},
    remote_ipv6_mac_routes{YType::uint32, "remote-ipv6-mac-routes"},
    remote_mac_routes{YType::uint32, "remote-mac-routes"},
    remote_soo_mac_routes{YType::uint32, "remote-soo-mac-routes"},
    router_id{YType::str, "router-id"}
{
    yang_name = "summary"; yang_parent_name = "active";
}

Evpn::Active::Summary::~Summary()
{
}

bool Evpn::Active::Summary::has_data() const
{
    return as.is_set
	|| es_entries.is_set
	|| es_global_mac_routes.is_set
	|| ev_is.is_set
	|| global_source_mac.is_set
	|| l2rib_throttle.is_set
	|| labels.is_set
	|| local_ead_routes.is_set
	|| local_imcast_routes.is_set
	|| local_ipv4_mac_routes.is_set
	|| local_ipv6_mac_routes.is_set
	|| local_mac_routes.is_set
	|| logging_df_election_enabled.is_set
	|| neighbor_entries.is_set
	|| peering_time.is_set
	|| recovery_time.is_set
	|| remote_ead_routes.is_set
	|| remote_imcast_routes.is_set
	|| remote_ipv4_mac_routes.is_set
	|| remote_ipv6_mac_routes.is_set
	|| remote_mac_routes.is_set
	|| remote_soo_mac_routes.is_set
	|| router_id.is_set;
}

bool Evpn::Active::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(as.operation)
	|| is_set(es_entries.operation)
	|| is_set(es_global_mac_routes.operation)
	|| is_set(ev_is.operation)
	|| is_set(global_source_mac.operation)
	|| is_set(l2rib_throttle.operation)
	|| is_set(labels.operation)
	|| is_set(local_ead_routes.operation)
	|| is_set(local_imcast_routes.operation)
	|| is_set(local_ipv4_mac_routes.operation)
	|| is_set(local_ipv6_mac_routes.operation)
	|| is_set(local_mac_routes.operation)
	|| is_set(logging_df_election_enabled.operation)
	|| is_set(neighbor_entries.operation)
	|| is_set(peering_time.operation)
	|| is_set(recovery_time.operation)
	|| is_set(remote_ead_routes.operation)
	|| is_set(remote_imcast_routes.operation)
	|| is_set(remote_ipv4_mac_routes.operation)
	|| is_set(remote_ipv6_mac_routes.operation)
	|| is_set(remote_mac_routes.operation)
	|| is_set(remote_soo_mac_routes.operation)
	|| is_set(router_id.operation);
}

std::string Evpn::Active::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Evpn::Active::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (es_entries.is_set || is_set(es_entries.operation)) leaf_name_data.push_back(es_entries.get_name_leafdata());
    if (es_global_mac_routes.is_set || is_set(es_global_mac_routes.operation)) leaf_name_data.push_back(es_global_mac_routes.get_name_leafdata());
    if (ev_is.is_set || is_set(ev_is.operation)) leaf_name_data.push_back(ev_is.get_name_leafdata());
    if (global_source_mac.is_set || is_set(global_source_mac.operation)) leaf_name_data.push_back(global_source_mac.get_name_leafdata());
    if (l2rib_throttle.is_set || is_set(l2rib_throttle.operation)) leaf_name_data.push_back(l2rib_throttle.get_name_leafdata());
    if (labels.is_set || is_set(labels.operation)) leaf_name_data.push_back(labels.get_name_leafdata());
    if (local_ead_routes.is_set || is_set(local_ead_routes.operation)) leaf_name_data.push_back(local_ead_routes.get_name_leafdata());
    if (local_imcast_routes.is_set || is_set(local_imcast_routes.operation)) leaf_name_data.push_back(local_imcast_routes.get_name_leafdata());
    if (local_ipv4_mac_routes.is_set || is_set(local_ipv4_mac_routes.operation)) leaf_name_data.push_back(local_ipv4_mac_routes.get_name_leafdata());
    if (local_ipv6_mac_routes.is_set || is_set(local_ipv6_mac_routes.operation)) leaf_name_data.push_back(local_ipv6_mac_routes.get_name_leafdata());
    if (local_mac_routes.is_set || is_set(local_mac_routes.operation)) leaf_name_data.push_back(local_mac_routes.get_name_leafdata());
    if (logging_df_election_enabled.is_set || is_set(logging_df_election_enabled.operation)) leaf_name_data.push_back(logging_df_election_enabled.get_name_leafdata());
    if (neighbor_entries.is_set || is_set(neighbor_entries.operation)) leaf_name_data.push_back(neighbor_entries.get_name_leafdata());
    if (peering_time.is_set || is_set(peering_time.operation)) leaf_name_data.push_back(peering_time.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.operation)) leaf_name_data.push_back(recovery_time.get_name_leafdata());
    if (remote_ead_routes.is_set || is_set(remote_ead_routes.operation)) leaf_name_data.push_back(remote_ead_routes.get_name_leafdata());
    if (remote_imcast_routes.is_set || is_set(remote_imcast_routes.operation)) leaf_name_data.push_back(remote_imcast_routes.get_name_leafdata());
    if (remote_ipv4_mac_routes.is_set || is_set(remote_ipv4_mac_routes.operation)) leaf_name_data.push_back(remote_ipv4_mac_routes.get_name_leafdata());
    if (remote_ipv6_mac_routes.is_set || is_set(remote_ipv6_mac_routes.operation)) leaf_name_data.push_back(remote_ipv6_mac_routes.get_name_leafdata());
    if (remote_mac_routes.is_set || is_set(remote_mac_routes.operation)) leaf_name_data.push_back(remote_mac_routes.get_name_leafdata());
    if (remote_soo_mac_routes.is_set || is_set(remote_soo_mac_routes.operation)) leaf_name_data.push_back(remote_soo_mac_routes.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::Summary::get_children()
{
    return children;
}

void Evpn::Active::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "es-entries")
    {
        es_entries = value;
    }
    if(value_path == "es-global-mac-routes")
    {
        es_global_mac_routes = value;
    }
    if(value_path == "ev-is")
    {
        ev_is = value;
    }
    if(value_path == "global-source-mac")
    {
        global_source_mac = value;
    }
    if(value_path == "l2rib-throttle")
    {
        l2rib_throttle = value;
    }
    if(value_path == "labels")
    {
        labels = value;
    }
    if(value_path == "local-ead-routes")
    {
        local_ead_routes = value;
    }
    if(value_path == "local-imcast-routes")
    {
        local_imcast_routes = value;
    }
    if(value_path == "local-ipv4-mac-routes")
    {
        local_ipv4_mac_routes = value;
    }
    if(value_path == "local-ipv6-mac-routes")
    {
        local_ipv6_mac_routes = value;
    }
    if(value_path == "local-mac-routes")
    {
        local_mac_routes = value;
    }
    if(value_path == "logging-df-election-enabled")
    {
        logging_df_election_enabled = value;
    }
    if(value_path == "neighbor-entries")
    {
        neighbor_entries = value;
    }
    if(value_path == "peering-time")
    {
        peering_time = value;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
    }
    if(value_path == "remote-ead-routes")
    {
        remote_ead_routes = value;
    }
    if(value_path == "remote-imcast-routes")
    {
        remote_imcast_routes = value;
    }
    if(value_path == "remote-ipv4-mac-routes")
    {
        remote_ipv4_mac_routes = value;
    }
    if(value_path == "remote-ipv6-mac-routes")
    {
        remote_ipv6_mac_routes = value;
    }
    if(value_path == "remote-mac-routes")
    {
        remote_mac_routes = value;
    }
    if(value_path == "remote-soo-mac-routes")
    {
        remote_soo_mac_routes = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Evpn::Active::EviDetail::EviDetail()
    :
    elements(std::make_shared<Evpn::Active::EviDetail::Elements>())
	,evi_children(std::make_shared<Evpn::Active::EviDetail::EviChildren>())
{
    elements->parent = this;
    children["elements"] = elements;

    evi_children->parent = this;
    children["evi-children"] = evi_children;

    yang_name = "evi-detail"; yang_parent_name = "active";
}

Evpn::Active::EviDetail::~EviDetail()
{
}

bool Evpn::Active::EviDetail::has_data() const
{
    return (elements !=  nullptr && elements->has_data())
	|| (evi_children !=  nullptr && evi_children->has_data());
}

bool Evpn::Active::EviDetail::has_operation() const
{
    return is_set(operation)
	|| (elements !=  nullptr && elements->has_operation())
	|| (evi_children !=  nullptr && evi_children->has_operation());
}

std::string Evpn::Active::EviDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi-detail";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "elements")
    {
        if(elements != nullptr)
        {
            children["elements"] = elements;
        }
        else
        {
            elements = std::make_shared<Evpn::Active::EviDetail::Elements>();
            elements->parent = this;
            children["elements"] = elements;
        }
        return children.at("elements");
    }

    if(child_yang_name == "evi-children")
    {
        if(evi_children != nullptr)
        {
            children["evi-children"] = evi_children;
        }
        else
        {
            evi_children = std::make_shared<Evpn::Active::EviDetail::EviChildren>();
            evi_children->parent = this;
            children["evi-children"] = evi_children;
        }
        return children.at("evi-children");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::get_children()
{
    if(children.find("elements") == children.end())
    {
        if(elements != nullptr)
        {
            children["elements"] = elements;
        }
    }

    if(children.find("evi-children") == children.end())
    {
        if(evi_children != nullptr)
        {
            children["evi-children"] = evi_children;
        }
    }

    return children;
}

void Evpn::Active::EviDetail::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Active::EviDetail::Elements::Elements()
{
    yang_name = "elements"; yang_parent_name = "evi-detail";
}

Evpn::Active::EviDetail::Elements::~Elements()
{
}

bool Evpn::Active::EviDetail::Elements::has_data() const
{
    for (std::size_t index=0; index<element.size(); index++)
    {
        if(element[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Active::EviDetail::Elements::has_operation() const
{
    for (std::size_t index=0; index<element.size(); index++)
    {
        if(element[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Active::EviDetail::Elements::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "elements";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "element")
    {
        for(auto const & c : element)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Active::EviDetail::Elements::Element>();
        c->parent = this;
        element.push_back(std::move(c));
        children[segment_path] = element.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::get_children()
{
    for (auto const & c : element)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Active::EviDetail::Elements::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Active::EviDetail::Elements::Element::Element()
    :
    evi{YType::int32, "evi"},
    advertise_mac{YType::boolean, "advertise-mac"},
    aliasing_disabled{YType::boolean, "aliasing-disabled"},
    bd_name{YType::str, "bd-name"},
    cw_disable{YType::boolean, "cw-disable"},
    description{YType::str, "description"},
    evi_xr{YType::uint32, "evi-xr"},
    forward_class{YType::uint8, "forward-class"},
    multicast_label{YType::uint32, "multicast-label"},
    reoriginate_disabled{YType::boolean, "reoriginate-disabled"},
    rt_export_block_set{YType::boolean, "rt-export-block-set"},
    rt_import_block_set{YType::boolean, "rt-import-block-set"},
    stitching{YType::boolean, "stitching"},
    table_policy_name{YType::str, "table-policy-name"},
    type{YType::enumeration, "type"},
    unicast_label{YType::uint32, "unicast-label"},
    unknown_unicast_flooding_disabled{YType::boolean, "unknown-unicast-flooding-disabled"}
    	,
    flow_label(std::make_shared<Evpn::Active::EviDetail::Elements::Element::FlowLabel>())
	,rd_auto(std::make_shared<Evpn::Active::EviDetail::Elements::Element::RdAuto>())
	,rd_configured(std::make_shared<Evpn::Active::EviDetail::Elements::Element::RdConfigured>())
	,rt_auto(std::make_shared<Evpn::Active::EviDetail::Elements::Element::RtAuto>())
	,rt_auto_stitching(std::make_shared<Evpn::Active::EviDetail::Elements::Element::RtAutoStitching>())
{
    flow_label->parent = this;
    children["flow-label"] = flow_label;

    rd_auto->parent = this;
    children["rd-auto"] = rd_auto;

    rd_configured->parent = this;
    children["rd-configured"] = rd_configured;

    rt_auto->parent = this;
    children["rt-auto"] = rt_auto;

    rt_auto_stitching->parent = this;
    children["rt-auto-stitching"] = rt_auto_stitching;

    yang_name = "element"; yang_parent_name = "elements";
}

Evpn::Active::EviDetail::Elements::Element::~Element()
{
}

bool Evpn::Active::EviDetail::Elements::Element::has_data() const
{
    return evi.is_set
	|| advertise_mac.is_set
	|| aliasing_disabled.is_set
	|| bd_name.is_set
	|| cw_disable.is_set
	|| description.is_set
	|| evi_xr.is_set
	|| forward_class.is_set
	|| multicast_label.is_set
	|| reoriginate_disabled.is_set
	|| rt_export_block_set.is_set
	|| rt_import_block_set.is_set
	|| stitching.is_set
	|| table_policy_name.is_set
	|| type.is_set
	|| unicast_label.is_set
	|| unknown_unicast_flooding_disabled.is_set
	|| (flow_label !=  nullptr && flow_label->has_data())
	|| (rd_auto !=  nullptr && rd_auto->has_data())
	|| (rd_configured !=  nullptr && rd_configured->has_data())
	|| (rt_auto !=  nullptr && rt_auto->has_data())
	|| (rt_auto_stitching !=  nullptr && rt_auto_stitching->has_data());
}

bool Evpn::Active::EviDetail::Elements::Element::has_operation() const
{
    return is_set(operation)
	|| is_set(evi.operation)
	|| is_set(advertise_mac.operation)
	|| is_set(aliasing_disabled.operation)
	|| is_set(bd_name.operation)
	|| is_set(cw_disable.operation)
	|| is_set(description.operation)
	|| is_set(evi_xr.operation)
	|| is_set(forward_class.operation)
	|| is_set(multicast_label.operation)
	|| is_set(reoriginate_disabled.operation)
	|| is_set(rt_export_block_set.operation)
	|| is_set(rt_import_block_set.operation)
	|| is_set(stitching.operation)
	|| is_set(table_policy_name.operation)
	|| is_set(type.operation)
	|| is_set(unicast_label.operation)
	|| is_set(unknown_unicast_flooding_disabled.operation)
	|| (flow_label !=  nullptr && flow_label->has_operation())
	|| (rd_auto !=  nullptr && rd_auto->has_operation())
	|| (rd_configured !=  nullptr && rd_configured->has_operation())
	|| (rt_auto !=  nullptr && rt_auto->has_operation())
	|| (rt_auto_stitching !=  nullptr && rt_auto_stitching->has_operation());
}

std::string Evpn::Active::EviDetail::Elements::Element::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "element" <<"[evi='" <<evi <<"']";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::Element::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/elements/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (advertise_mac.is_set || is_set(advertise_mac.operation)) leaf_name_data.push_back(advertise_mac.get_name_leafdata());
    if (aliasing_disabled.is_set || is_set(aliasing_disabled.operation)) leaf_name_data.push_back(aliasing_disabled.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.operation)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (cw_disable.is_set || is_set(cw_disable.operation)) leaf_name_data.push_back(cw_disable.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.operation)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (multicast_label.is_set || is_set(multicast_label.operation)) leaf_name_data.push_back(multicast_label.get_name_leafdata());
    if (reoriginate_disabled.is_set || is_set(reoriginate_disabled.operation)) leaf_name_data.push_back(reoriginate_disabled.get_name_leafdata());
    if (rt_export_block_set.is_set || is_set(rt_export_block_set.operation)) leaf_name_data.push_back(rt_export_block_set.get_name_leafdata());
    if (rt_import_block_set.is_set || is_set(rt_import_block_set.operation)) leaf_name_data.push_back(rt_import_block_set.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.operation)) leaf_name_data.push_back(stitching.get_name_leafdata());
    if (table_policy_name.is_set || is_set(table_policy_name.operation)) leaf_name_data.push_back(table_policy_name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unicast_label.is_set || is_set(unicast_label.operation)) leaf_name_data.push_back(unicast_label.get_name_leafdata());
    if (unknown_unicast_flooding_disabled.is_set || is_set(unknown_unicast_flooding_disabled.operation)) leaf_name_data.push_back(unknown_unicast_flooding_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::Element::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-label")
    {
        if(flow_label != nullptr)
        {
            children["flow-label"] = flow_label;
        }
        else
        {
            flow_label = std::make_shared<Evpn::Active::EviDetail::Elements::Element::FlowLabel>();
            flow_label->parent = this;
            children["flow-label"] = flow_label;
        }
        return children.at("flow-label");
    }

    if(child_yang_name == "rd-auto")
    {
        if(rd_auto != nullptr)
        {
            children["rd-auto"] = rd_auto;
        }
        else
        {
            rd_auto = std::make_shared<Evpn::Active::EviDetail::Elements::Element::RdAuto>();
            rd_auto->parent = this;
            children["rd-auto"] = rd_auto;
        }
        return children.at("rd-auto");
    }

    if(child_yang_name == "rd-configured")
    {
        if(rd_configured != nullptr)
        {
            children["rd-configured"] = rd_configured;
        }
        else
        {
            rd_configured = std::make_shared<Evpn::Active::EviDetail::Elements::Element::RdConfigured>();
            rd_configured->parent = this;
            children["rd-configured"] = rd_configured;
        }
        return children.at("rd-configured");
    }

    if(child_yang_name == "rt-auto")
    {
        if(rt_auto != nullptr)
        {
            children["rt-auto"] = rt_auto;
        }
        else
        {
            rt_auto = std::make_shared<Evpn::Active::EviDetail::Elements::Element::RtAuto>();
            rt_auto->parent = this;
            children["rt-auto"] = rt_auto;
        }
        return children.at("rt-auto");
    }

    if(child_yang_name == "rt-auto-stitching")
    {
        if(rt_auto_stitching != nullptr)
        {
            children["rt-auto-stitching"] = rt_auto_stitching;
        }
        else
        {
            rt_auto_stitching = std::make_shared<Evpn::Active::EviDetail::Elements::Element::RtAutoStitching>();
            rt_auto_stitching->parent = this;
            children["rt-auto-stitching"] = rt_auto_stitching;
        }
        return children.at("rt-auto-stitching");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::Element::get_children()
{
    if(children.find("flow-label") == children.end())
    {
        if(flow_label != nullptr)
        {
            children["flow-label"] = flow_label;
        }
    }

    if(children.find("rd-auto") == children.end())
    {
        if(rd_auto != nullptr)
        {
            children["rd-auto"] = rd_auto;
        }
    }

    if(children.find("rd-configured") == children.end())
    {
        if(rd_configured != nullptr)
        {
            children["rd-configured"] = rd_configured;
        }
    }

    if(children.find("rt-auto") == children.end())
    {
        if(rt_auto != nullptr)
        {
            children["rt-auto"] = rt_auto;
        }
    }

    if(children.find("rt-auto-stitching") == children.end())
    {
        if(rt_auto_stitching != nullptr)
        {
            children["rt-auto-stitching"] = rt_auto_stitching;
        }
    }

    return children;
}

void Evpn::Active::EviDetail::Elements::Element::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "advertise-mac")
    {
        advertise_mac = value;
    }
    if(value_path == "aliasing-disabled")
    {
        aliasing_disabled = value;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
    }
    if(value_path == "cw-disable")
    {
        cw_disable = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "multicast-label")
    {
        multicast_label = value;
    }
    if(value_path == "reoriginate-disabled")
    {
        reoriginate_disabled = value;
    }
    if(value_path == "rt-export-block-set")
    {
        rt_export_block_set = value;
    }
    if(value_path == "rt-import-block-set")
    {
        rt_import_block_set = value;
    }
    if(value_path == "stitching")
    {
        stitching = value;
    }
    if(value_path == "table-policy-name")
    {
        table_policy_name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "unicast-label")
    {
        unicast_label = value;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled = value;
    }
}

Evpn::Active::EviDetail::Elements::Element::FlowLabel::FlowLabel()
    :
    global_flow_label{YType::boolean, "global-flow-label"},
    static_flow_label{YType::boolean, "static-flow-label"}
{
    yang_name = "flow-label"; yang_parent_name = "element";
}

Evpn::Active::EviDetail::Elements::Element::FlowLabel::~FlowLabel()
{
}

bool Evpn::Active::EviDetail::Elements::Element::FlowLabel::has_data() const
{
    return global_flow_label.is_set
	|| static_flow_label.is_set;
}

bool Evpn::Active::EviDetail::Elements::Element::FlowLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(global_flow_label.operation)
	|| is_set(static_flow_label.operation);
}

std::string Evpn::Active::EviDetail::Elements::Element::FlowLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-label";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::Element::FlowLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowLabel' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_flow_label.is_set || is_set(global_flow_label.operation)) leaf_name_data.push_back(global_flow_label.get_name_leafdata());
    if (static_flow_label.is_set || is_set(static_flow_label.operation)) leaf_name_data.push_back(static_flow_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::Element::FlowLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::Element::FlowLabel::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::Elements::Element::FlowLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "global-flow-label")
    {
        global_flow_label = value;
    }
    if(value_path == "static-flow-label")
    {
        static_flow_label = value;
    }
}

Evpn::Active::EviDetail::Elements::Element::RdAuto::RdAuto()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto_>())
	,four_byte_as(std::make_shared<Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs>())
	,two_byte_as(std::make_shared<Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs>())
	,v4_addr(std::make_shared<Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr>())
{
    auto_->parent = this;
    children["auto"] = auto_;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "rd-auto"; yang_parent_name = "element";
}

Evpn::Active::EviDetail::Elements::Element::RdAuto::~RdAuto()
{
}

bool Evpn::Active::EviDetail::Elements::Element::RdAuto::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool Evpn::Active::EviDetail::Elements::Element::RdAuto::has_operation() const
{
    return is_set(operation)
	|| is_set(rd.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string Evpn::Active::EviDetail::Elements::Element::RdAuto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-auto";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::Element::RdAuto::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RdAuto' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::Element::RdAuto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto")
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
        else
        {
            auto_ = std::make_shared<Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto_>();
            auto_->parent = this;
            children["auto"] = auto_;
        }
        return children.at("auto");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::Element::RdAuto::get_children()
{
    if(children.find("auto") == children.end())
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void Evpn::Active::EviDetail::Elements::Element::RdAuto::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rd")
    {
        rd = value;
    }
}

Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto_::Auto_()
    :
    auto_index{YType::uint16, "auto-index"},
    router_id{YType::str, "router-id"}
{
    yang_name = "auto"; yang_parent_name = "rd-auto";
}

Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto_::~Auto_()
{
}

bool Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto_::has_data() const
{
    return auto_index.is_set
	|| router_id.is_set;
}

bool Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_index.operation)
	|| is_set(router_id.operation);
}

std::string Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auto_' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_index.is_set || is_set(auto_index.operation)) leaf_name_data.push_back(auto_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto_::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::Elements::Element::RdAuto::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-index")
    {
        auto_index = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "rd-auto";
}

Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::Elements::Element::RdAuto::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "rd-auto";
}

Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs::~FourByteAs()
{
}

bool Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FourByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::Elements::Element::RdAuto::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "rd-auto";
}

Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr::~V4Addr()
{
}

bool Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Addr' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::Elements::Element::RdAuto::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Active::EviDetail::Elements::Element::RdConfigured::RdConfigured()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto_>())
	,four_byte_as(std::make_shared<Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs>())
	,two_byte_as(std::make_shared<Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs>())
	,v4_addr(std::make_shared<Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr>())
{
    auto_->parent = this;
    children["auto"] = auto_;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "rd-configured"; yang_parent_name = "element";
}

Evpn::Active::EviDetail::Elements::Element::RdConfigured::~RdConfigured()
{
}

bool Evpn::Active::EviDetail::Elements::Element::RdConfigured::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool Evpn::Active::EviDetail::Elements::Element::RdConfigured::has_operation() const
{
    return is_set(operation)
	|| is_set(rd.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string Evpn::Active::EviDetail::Elements::Element::RdConfigured::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-configured";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::Element::RdConfigured::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RdConfigured' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::Element::RdConfigured::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto")
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
        else
        {
            auto_ = std::make_shared<Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto_>();
            auto_->parent = this;
            children["auto"] = auto_;
        }
        return children.at("auto");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::Element::RdConfigured::get_children()
{
    if(children.find("auto") == children.end())
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void Evpn::Active::EviDetail::Elements::Element::RdConfigured::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rd")
    {
        rd = value;
    }
}

Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto_::Auto_()
    :
    auto_index{YType::uint16, "auto-index"},
    router_id{YType::str, "router-id"}
{
    yang_name = "auto"; yang_parent_name = "rd-configured";
}

Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto_::~Auto_()
{
}

bool Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto_::has_data() const
{
    return auto_index.is_set
	|| router_id.is_set;
}

bool Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_index.operation)
	|| is_set(router_id.operation);
}

std::string Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auto_' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_index.is_set || is_set(auto_index.operation)) leaf_name_data.push_back(auto_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto_::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::Elements::Element::RdConfigured::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-index")
    {
        auto_index = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "rd-configured";
}

Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::Elements::Element::RdConfigured::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "rd-configured";
}

Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs::~FourByteAs()
{
}

bool Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FourByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::Elements::Element::RdConfigured::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "rd-configured";
}

Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr::~V4Addr()
{
}

bool Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Addr' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::Elements::Element::RdConfigured::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Active::EviDetail::Elements::Element::RtAuto::RtAuto()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport>())
	,four_byte_as(std::make_shared<Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs>())
	,two_byte_as(std::make_shared<Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs>())
	,v4_addr(std::make_shared<Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr>())
{
    es_import->parent = this;
    children["es-import"] = es_import;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "rt-auto"; yang_parent_name = "element";
}

Evpn::Active::EviDetail::Elements::Element::RtAuto::~RtAuto()
{
}

bool Evpn::Active::EviDetail::Elements::Element::RtAuto::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool Evpn::Active::EviDetail::Elements::Element::RtAuto::has_operation() const
{
    return is_set(operation)
	|| is_set(rt.operation)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string Evpn::Active::EviDetail::Elements::Element::RtAuto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-auto";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::Element::RtAuto::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtAuto' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.operation)) leaf_name_data.push_back(rt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::Element::RtAuto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "es-import")
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
        else
        {
            es_import = std::make_shared<Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport>();
            es_import->parent = this;
            children["es-import"] = es_import;
        }
        return children.at("es-import");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::Element::RtAuto::get_children()
{
    if(children.find("es-import") == children.end())
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void Evpn::Active::EviDetail::Elements::Element::RtAuto::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rt")
    {
        rt = value;
    }
}

Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "rt-auto";
}

Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::Elements::Element::RtAuto::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "rt-auto";
}

Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs::~FourByteAs()
{
}

bool Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FourByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::Elements::Element::RtAuto::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "rt-auto";
}

Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr::~V4Addr()
{
}

bool Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Addr' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::Elements::Element::RtAuto::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{
    yang_name = "es-import"; yang_parent_name = "rt-auto";
}

Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport::~EsImport()
{
}

bool Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport::has_operation() const
{
    return is_set(operation)
	|| is_set(high_bytes.operation)
	|| is_set(low_bytes.operation);
}

std::string Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsImport' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.operation)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.operation)) leaf_name_data.push_back(low_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::Elements::Element::RtAuto::EsImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
    }
}

Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::RtAutoStitching()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::EsImport>())
	,four_byte_as(std::make_shared<Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::FourByteAs>())
	,two_byte_as(std::make_shared<Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs>())
	,v4_addr(std::make_shared<Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::V4Addr>())
{
    es_import->parent = this;
    children["es-import"] = es_import;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "rt-auto-stitching"; yang_parent_name = "element";
}

Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::~RtAutoStitching()
{
}

bool Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::has_operation() const
{
    return is_set(operation)
	|| is_set(rt.operation)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-auto-stitching";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtAutoStitching' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.operation)) leaf_name_data.push_back(rt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "es-import")
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
        else
        {
            es_import = std::make_shared<Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::EsImport>();
            es_import->parent = this;
            children["es-import"] = es_import;
        }
        return children.at("es-import");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::get_children()
{
    if(children.find("es-import") == children.end())
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rt")
    {
        rt = value;
    }
}

Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "rt-auto-stitching";
}

Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "rt-auto-stitching";
}

Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::~FourByteAs()
{
}

bool Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FourByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "rt-auto-stitching";
}

Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::V4Addr::~V4Addr()
{
}

bool Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Addr' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::V4Addr::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{
    yang_name = "es-import"; yang_parent_name = "rt-auto-stitching";
}

Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::EsImport::~EsImport()
{
}

bool Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::EsImport::has_operation() const
{
    return is_set(operation)
	|| is_set(high_bytes.operation)
	|| is_set(low_bytes.operation);
}

std::string Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::EsImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsImport' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.operation)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.operation)) leaf_name_data.push_back(low_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::EsImport::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::Elements::Element::RtAutoStitching::EsImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
    }
}

Evpn::Active::EviDetail::EviChildren::EviChildren()
    :
    ethernet_auto_discoveries(std::make_shared<Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries>())
	,inclusive_multicasts(std::make_shared<Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts>())
	,macs(std::make_shared<Evpn::Active::EviDetail::EviChildren::Macs>())
	,neighbors(std::make_shared<Evpn::Active::EviDetail::EviChildren::Neighbors>())
	,route_targets(std::make_shared<Evpn::Active::EviDetail::EviChildren::RouteTargets>())
{
    ethernet_auto_discoveries->parent = this;
    children["ethernet-auto-discoveries"] = ethernet_auto_discoveries;

    inclusive_multicasts->parent = this;
    children["inclusive-multicasts"] = inclusive_multicasts;

    macs->parent = this;
    children["macs"] = macs;

    neighbors->parent = this;
    children["neighbors"] = neighbors;

    route_targets->parent = this;
    children["route-targets"] = route_targets;

    yang_name = "evi-children"; yang_parent_name = "evi-detail";
}

Evpn::Active::EviDetail::EviChildren::~EviChildren()
{
}

bool Evpn::Active::EviDetail::EviChildren::has_data() const
{
    return (ethernet_auto_discoveries !=  nullptr && ethernet_auto_discoveries->has_data())
	|| (inclusive_multicasts !=  nullptr && inclusive_multicasts->has_data())
	|| (macs !=  nullptr && macs->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (route_targets !=  nullptr && route_targets->has_data());
}

bool Evpn::Active::EviDetail::EviChildren::has_operation() const
{
    return is_set(operation)
	|| (ethernet_auto_discoveries !=  nullptr && ethernet_auto_discoveries->has_operation())
	|| (inclusive_multicasts !=  nullptr && inclusive_multicasts->has_operation())
	|| (macs !=  nullptr && macs->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (route_targets !=  nullptr && route_targets->has_operation());
}

std::string Evpn::Active::EviDetail::EviChildren::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi-children";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::EviChildren::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::EviChildren::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ethernet-auto-discoveries")
    {
        if(ethernet_auto_discoveries != nullptr)
        {
            children["ethernet-auto-discoveries"] = ethernet_auto_discoveries;
        }
        else
        {
            ethernet_auto_discoveries = std::make_shared<Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries>();
            ethernet_auto_discoveries->parent = this;
            children["ethernet-auto-discoveries"] = ethernet_auto_discoveries;
        }
        return children.at("ethernet-auto-discoveries");
    }

    if(child_yang_name == "inclusive-multicasts")
    {
        if(inclusive_multicasts != nullptr)
        {
            children["inclusive-multicasts"] = inclusive_multicasts;
        }
        else
        {
            inclusive_multicasts = std::make_shared<Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts>();
            inclusive_multicasts->parent = this;
            children["inclusive-multicasts"] = inclusive_multicasts;
        }
        return children.at("inclusive-multicasts");
    }

    if(child_yang_name == "macs")
    {
        if(macs != nullptr)
        {
            children["macs"] = macs;
        }
        else
        {
            macs = std::make_shared<Evpn::Active::EviDetail::EviChildren::Macs>();
            macs->parent = this;
            children["macs"] = macs;
        }
        return children.at("macs");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<Evpn::Active::EviDetail::EviChildren::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    if(child_yang_name == "route-targets")
    {
        if(route_targets != nullptr)
        {
            children["route-targets"] = route_targets;
        }
        else
        {
            route_targets = std::make_shared<Evpn::Active::EviDetail::EviChildren::RouteTargets>();
            route_targets->parent = this;
            children["route-targets"] = route_targets;
        }
        return children.at("route-targets");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::EviChildren::get_children()
{
    if(children.find("ethernet-auto-discoveries") == children.end())
    {
        if(ethernet_auto_discoveries != nullptr)
        {
            children["ethernet-auto-discoveries"] = ethernet_auto_discoveries;
        }
    }

    if(children.find("inclusive-multicasts") == children.end())
    {
        if(inclusive_multicasts != nullptr)
        {
            children["inclusive-multicasts"] = inclusive_multicasts;
        }
    }

    if(children.find("macs") == children.end())
    {
        if(macs != nullptr)
        {
            children["macs"] = macs;
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
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

void Evpn::Active::EviDetail::EviChildren::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "evi-children";
}

Evpn::Active::EviDetail::EviChildren::Neighbors::~Neighbors()
{
}

bool Evpn::Active::EviDetail::EviChildren::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Active::EviDetail::EviChildren::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Active::EviDetail::EviChildren::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::EviChildren::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::EviChildren::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::EviChildren::Neighbors::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Active::EviDetail::EviChildren::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor::Neighbor()
    :
    evi{YType::int32, "evi"},
    evi_xr{YType::uint32, "evi-xr"},
    neighbor{YType::str, "neighbor"},
    neighbor_ip{YType::str, "neighbor-ip"}
{
    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor::~Neighbor()
{
}

bool Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor::has_data() const
{
    return evi.is_set
	|| evi_xr.is_set
	|| neighbor.is_set
	|| neighbor_ip.is_set;
}

bool Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(evi.operation)
	|| is_set(evi_xr.operation)
	|| is_set(neighbor.operation)
	|| is_set(neighbor_ip.operation);
}

std::string Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.operation)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (neighbor_ip.is_set || is_set(neighbor_ip.operation)) leaf_name_data.push_back(neighbor_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::EviChildren::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
    }
    if(value_path == "neighbor-ip")
    {
        neighbor_ip = value;
    }
}

Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscoveries()
{
    yang_name = "ethernet-auto-discoveries"; yang_parent_name = "evi-children";
}

Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::~EthernetAutoDiscoveries()
{
}

bool Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::has_data() const
{
    for (std::size_t index=0; index<ethernet_auto_discovery.size(); index++)
    {
        if(ethernet_auto_discovery[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::has_operation() const
{
    for (std::size_t index=0; index<ethernet_auto_discovery.size(); index++)
    {
        if(ethernet_auto_discovery[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-auto-discoveries";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ethernet-auto-discovery")
    {
        for(auto const & c : ethernet_auto_discovery)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery>();
        c->parent = this;
        ethernet_auto_discovery.push_back(std::move(c));
        children[segment_path] = ethernet_auto_discovery.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::get_children()
{
    for (auto const & c : ethernet_auto_discovery)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetAutoDiscovery()
    :
    encap{YType::uint8, "encap"},
    esi1{YType::str, "esi1"},
    esi2{YType::str, "esi2"},
    esi3{YType::str, "esi3"},
    esi4{YType::str, "esi4"},
    esi5{YType::str, "esi5"},
    ethernet_segment_identifier{YType::uint8, "ethernet-segment-identifier"},
    ethernet_tag{YType::int32, "ethernet-tag"},
    ethernet_tag_xr{YType::uint32, "ethernet-tag-xr"},
    ethernet_vpnid{YType::uint32, "ethernet-vpnid"},
    evi{YType::int32, "evi"},
    is_local_ead{YType::boolean, "is-local-ead"},
    local_label{YType::uint32, "local-label"},
    local_next_hop{YType::str, "local-next-hop"},
    num_paths{YType::uint32, "num-paths"},
    redundancy_single_active{YType::boolean, "redundancy-single-active"}
{
    yang_name = "ethernet-auto-discovery"; yang_parent_name = "ethernet-auto-discoveries";
}

Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::~EthernetAutoDiscovery()
{
}

bool Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::has_data() const
{
    for (std::size_t index=0; index<path_buffer.size(); index++)
    {
        if(path_buffer[index]->has_data())
            return true;
    }
    for (auto const & leaf : ethernet_segment_identifier.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return encap.is_set
	|| esi1.is_set
	|| esi2.is_set
	|| esi3.is_set
	|| esi4.is_set
	|| esi5.is_set
	|| ethernet_tag.is_set
	|| ethernet_tag_xr.is_set
	|| ethernet_vpnid.is_set
	|| evi.is_set
	|| is_local_ead.is_set
	|| local_label.is_set
	|| local_next_hop.is_set
	|| num_paths.is_set
	|| redundancy_single_active.is_set;
}

bool Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::has_operation() const
{
    for (std::size_t index=0; index<path_buffer.size(); index++)
    {
        if(path_buffer[index]->has_operation())
            return true;
    }
    for (auto const & leaf : ethernet_segment_identifier.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(encap.operation)
	|| is_set(esi1.operation)
	|| is_set(esi2.operation)
	|| is_set(esi3.operation)
	|| is_set(esi4.operation)
	|| is_set(esi5.operation)
	|| is_set(ethernet_segment_identifier.operation)
	|| is_set(ethernet_tag.operation)
	|| is_set(ethernet_tag_xr.operation)
	|| is_set(ethernet_vpnid.operation)
	|| is_set(evi.operation)
	|| is_set(is_local_ead.operation)
	|| is_set(local_label.operation)
	|| is_set(local_next_hop.operation)
	|| is_set(num_paths.operation)
	|| is_set(redundancy_single_active.operation);
}

std::string Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-auto-discovery";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/ethernet-auto-discoveries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.operation)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (esi1.is_set || is_set(esi1.operation)) leaf_name_data.push_back(esi1.get_name_leafdata());
    if (esi2.is_set || is_set(esi2.operation)) leaf_name_data.push_back(esi2.get_name_leafdata());
    if (esi3.is_set || is_set(esi3.operation)) leaf_name_data.push_back(esi3.get_name_leafdata());
    if (esi4.is_set || is_set(esi4.operation)) leaf_name_data.push_back(esi4.get_name_leafdata());
    if (esi5.is_set || is_set(esi5.operation)) leaf_name_data.push_back(esi5.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.operation)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (ethernet_tag_xr.is_set || is_set(ethernet_tag_xr.operation)) leaf_name_data.push_back(ethernet_tag_xr.get_name_leafdata());
    if (ethernet_vpnid.is_set || is_set(ethernet_vpnid.operation)) leaf_name_data.push_back(ethernet_vpnid.get_name_leafdata());
    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (is_local_ead.is_set || is_set(is_local_ead.operation)) leaf_name_data.push_back(is_local_ead.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (local_next_hop.is_set || is_set(local_next_hop.operation)) leaf_name_data.push_back(local_next_hop.get_name_leafdata());
    if (num_paths.is_set || is_set(num_paths.operation)) leaf_name_data.push_back(num_paths.get_name_leafdata());
    if (redundancy_single_active.is_set || is_set(redundancy_single_active.operation)) leaf_name_data.push_back(redundancy_single_active.get_name_leafdata());

    auto ethernet_segment_identifier_name_datas = ethernet_segment_identifier.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ethernet_segment_identifier_name_datas.begin(), ethernet_segment_identifier_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-buffer")
    {
        for(auto const & c : path_buffer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer>();
        c->parent = this;
        path_buffer.push_back(std::move(c));
        children[segment_path] = path_buffer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_children()
{
    for (auto const & c : path_buffer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encap")
    {
        encap = value;
    }
    if(value_path == "esi1")
    {
        esi1 = value;
    }
    if(value_path == "esi2")
    {
        esi2 = value;
    }
    if(value_path == "esi3")
    {
        esi3 = value;
    }
    if(value_path == "esi4")
    {
        esi4 = value;
    }
    if(value_path == "esi5")
    {
        esi5 = value;
    }
    if(value_path == "ethernet-segment-identifier")
    {
        ethernet_segment_identifier.append(value);
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr = value;
    }
    if(value_path == "ethernet-vpnid")
    {
        ethernet_vpnid = value;
    }
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "is-local-ead")
    {
        is_local_ead = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "local-next-hop")
    {
        local_next_hop = value;
    }
    if(value_path == "num-paths")
    {
        num_paths = value;
    }
    if(value_path == "redundancy-single-active")
    {
        redundancy_single_active = value;
    }
}

Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::PathBuffer()
    :
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"}
{
    yang_name = "path-buffer"; yang_parent_name = "ethernet-auto-discovery";
}

Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::~PathBuffer()
{
}

bool Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::has_data() const
{
    return next_hop.is_set
	|| output_label.is_set;
}

bool Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation)
	|| is_set(output_label.operation);
}

std::string Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-buffer";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/ethernet-auto-discoveries/ethernet-auto-discovery/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.operation)) leaf_name_data.push_back(output_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "output-label")
    {
        output_label = value;
    }
}

Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticasts()
{
    yang_name = "inclusive-multicasts"; yang_parent_name = "evi-children";
}

Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::~InclusiveMulticasts()
{
}

bool Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::has_data() const
{
    for (std::size_t index=0; index<inclusive_multicast.size(); index++)
    {
        if(inclusive_multicast[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::has_operation() const
{
    for (std::size_t index=0; index<inclusive_multicast.size(); index++)
    {
        if(inclusive_multicast[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inclusive-multicasts";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inclusive-multicast")
    {
        for(auto const & c : inclusive_multicast)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast>();
        c->parent = this;
        inclusive_multicast.push_back(std::move(c));
        children[segment_path] = inclusive_multicast.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::get_children()
{
    for (auto const & c : inclusive_multicast)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::InclusiveMulticast()
    :
    ethernet_tag{YType::int32, "ethernet-tag"},
    ethernet_tag_xr{YType::uint32, "ethernet-tag-xr"},
    evi{YType::int32, "evi"},
    evi_xr{YType::uint32, "evi-xr"},
    is_local_entry{YType::boolean, "is-local-entry"},
    next_hop{YType::str, "next-hop"},
    originating_ip{YType::str, "originating-ip"},
    originating_ip_xr{YType::str, "originating-ip-xr"},
    output_label{YType::uint32, "output-label"}
{
    yang_name = "inclusive-multicast"; yang_parent_name = "inclusive-multicasts";
}

Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::~InclusiveMulticast()
{
}

bool Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::has_data() const
{
    return ethernet_tag.is_set
	|| ethernet_tag_xr.is_set
	|| evi.is_set
	|| evi_xr.is_set
	|| is_local_entry.is_set
	|| next_hop.is_set
	|| originating_ip.is_set
	|| originating_ip_xr.is_set
	|| output_label.is_set;
}

bool Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::has_operation() const
{
    return is_set(operation)
	|| is_set(ethernet_tag.operation)
	|| is_set(ethernet_tag_xr.operation)
	|| is_set(evi.operation)
	|| is_set(evi_xr.operation)
	|| is_set(is_local_entry.operation)
	|| is_set(next_hop.operation)
	|| is_set(originating_ip.operation)
	|| is_set(originating_ip_xr.operation)
	|| is_set(output_label.operation);
}

std::string Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inclusive-multicast";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/inclusive-multicasts/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_tag.is_set || is_set(ethernet_tag.operation)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (ethernet_tag_xr.is_set || is_set(ethernet_tag_xr.operation)) leaf_name_data.push_back(ethernet_tag_xr.get_name_leafdata());
    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.operation)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (is_local_entry.is_set || is_set(is_local_entry.operation)) leaf_name_data.push_back(is_local_entry.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (originating_ip.is_set || is_set(originating_ip.operation)) leaf_name_data.push_back(originating_ip.get_name_leafdata());
    if (originating_ip_xr.is_set || is_set(originating_ip_xr.operation)) leaf_name_data.push_back(originating_ip_xr.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.operation)) leaf_name_data.push_back(output_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr = value;
    }
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
    }
    if(value_path == "is-local-entry")
    {
        is_local_entry = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "originating-ip")
    {
        originating_ip = value;
    }
    if(value_path == "originating-ip-xr")
    {
        originating_ip_xr = value;
    }
    if(value_path == "output-label")
    {
        output_label = value;
    }
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTargets()
{
    yang_name = "route-targets"; yang_parent_name = "evi-children";
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::~RouteTargets()
{
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::has_data() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::has_operation() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Active::EviDetail::EviChildren::RouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-targets";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::EviChildren::RouteTargets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::EviChildren::RouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-target")
    {
        for(auto const & c : route_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget>();
        c->parent = this;
        route_target.push_back(std::move(c));
        children[segment_path] = route_target.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::EviChildren::RouteTargets::get_children()
{
    for (auto const & c : route_target)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Active::EviDetail::EviChildren::RouteTargets::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget()
    :
    addr_index{YType::uint32, "addr-index"},
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    bd_name{YType::str, "bd-name"},
    evi{YType::int32, "evi"},
    evi_xr{YType::uint32, "evi-xr"},
    format{YType::enumeration, "format"},
    role{YType::enumeration, "role"},
    route_target_role{YType::enumeration, "route-target-role"},
    route_target_stitching{YType::boolean, "route-target-stitching"},
    type{YType::enumeration, "type"}
    	,
    route_target(std::make_shared<Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_>())
{
    route_target->parent = this;
    children["route-target"] = route_target;

    yang_name = "route-target"; yang_parent_name = "route-targets";
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::~RouteTarget()
{
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::has_data() const
{
    return addr_index.is_set
	|| address.is_set
	|| as.is_set
	|| as_index.is_set
	|| bd_name.is_set
	|| evi.is_set
	|| evi_xr.is_set
	|| format.is_set
	|| role.is_set
	|| route_target_role.is_set
	|| route_target_stitching.is_set
	|| type.is_set
	|| (route_target !=  nullptr && route_target->has_data());
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::has_operation() const
{
    return is_set(operation)
	|| is_set(addr_index.operation)
	|| is_set(address.operation)
	|| is_set(as.operation)
	|| is_set(as_index.operation)
	|| is_set(bd_name.operation)
	|| is_set(evi.operation)
	|| is_set(evi_xr.operation)
	|| is_set(format.operation)
	|| is_set(role.operation)
	|| is_set(route_target_role.operation)
	|| is_set(route_target_stitching.operation)
	|| is_set(type.operation)
	|| (route_target !=  nullptr && route_target->has_operation());
}

std::string Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/route-targets/" << get_segment_path();
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
    if (bd_name.is_set || is_set(bd_name.operation)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.operation)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());
    if (route_target_role.is_set || is_set(route_target_role.operation)) leaf_name_data.push_back(route_target_role.get_name_leafdata());
    if (route_target_stitching.is_set || is_set(route_target_stitching.operation)) leaf_name_data.push_back(route_target_stitching.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-target")
    {
        if(route_target != nullptr)
        {
            children["route-target"] = route_target;
        }
        else
        {
            route_target = std::make_shared<Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_>();
            route_target->parent = this;
            children["route-target"] = route_target;
        }
        return children.at("route-target");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::get_children()
{
    if(children.find("route-target") == children.end())
    {
        if(route_target != nullptr)
        {
            children["route-target"] = route_target;
        }
    }

    return children;
}

void Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "bd-name")
    {
        bd_name = value;
    }
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
    }
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
    if(value_path == "route-target-role")
    {
        route_target_role = value;
    }
    if(value_path == "route-target-stitching")
    {
        route_target_stitching = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::RouteTarget_()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport>())
	,four_byte_as(std::make_shared<Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs>())
	,two_byte_as(std::make_shared<Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs>())
	,v4_addr(std::make_shared<Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr>())
{
    es_import->parent = this;
    children["es-import"] = es_import;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "route-target"; yang_parent_name = "route-target";
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::~RouteTarget_()
{
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::has_operation() const
{
    return is_set(operation)
	|| is_set(rt.operation)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/route-targets/route-target/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.operation)) leaf_name_data.push_back(rt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "es-import")
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
        else
        {
            es_import = std::make_shared<Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport>();
            es_import->parent = this;
            children["es-import"] = es_import;
        }
        return children.at("es-import");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_children()
{
    if(children.find("es-import") == children.end())
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rt")
    {
        rt = value;
    }
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "route-target";
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/route-targets/route-target/route-target/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "route-target";
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::~FourByteAs()
{
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/route-targets/route-target/route-target/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "route-target";
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::~V4Addr()
{
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/route-targets/route-target/route-target/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{
    yang_name = "es-import"; yang_parent_name = "route-target";
}

Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::~EsImport()
{
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::has_operation() const
{
    return is_set(operation)
	|| is_set(high_bytes.operation)
	|| is_set(low_bytes.operation);
}

std::string Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/route-targets/route-target/route-target/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.operation)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.operation)) leaf_name_data.push_back(low_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
    }
}

Evpn::Active::EviDetail::EviChildren::Macs::Macs()
{
    yang_name = "macs"; yang_parent_name = "evi-children";
}

Evpn::Active::EviDetail::EviChildren::Macs::~Macs()
{
}

bool Evpn::Active::EviDetail::EviChildren::Macs::has_data() const
{
    for (std::size_t index=0; index<mac.size(); index++)
    {
        if(mac[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Active::EviDetail::EviChildren::Macs::has_operation() const
{
    for (std::size_t index=0; index<mac.size(); index++)
    {
        if(mac[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Active::EviDetail::EviChildren::Macs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macs";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::EviChildren::Macs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::EviChildren::Macs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mac")
    {
        for(auto const & c : mac)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Active::EviDetail::EviChildren::Macs::Mac>();
        c->parent = this;
        mac.push_back(std::move(c));
        children[segment_path] = mac.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::EviChildren::Macs::get_children()
{
    for (auto const & c : mac)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Active::EviDetail::EviChildren::Macs::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Active::EviDetail::EviChildren::Macs::Mac::Mac()
    :
    esi_port_key{YType::uint16, "esi-port-key"},
    ethernet_tag{YType::int32, "ethernet-tag"},
    ethernet_tag_xr{YType::uint32, "ethernet-tag-xr"},
    evi{YType::int32, "evi"},
    internal_label{YType::uint32, "internal-label"},
    ip_address{YType::str, "ip-address"},
    ip_address_xr{YType::str, "ip-address-xr"},
    is_local_mac{YType::boolean, "is-local-mac"},
    is_remote_mac{YType::boolean, "is-remote-mac"},
    is_static{YType::boolean, "is-static"},
    learned_bridge_port_name{YType::str, "learned-bridge-port-name"},
    local_encap_type{YType::uint8, "local-encap-type"},
    local_ethernet_segment_identifier{YType::uint8, "local-ethernet-segment-identifier"},
    local_label{YType::uint32, "local-label"},
    local_seq_id{YType::uint32, "local-seq-id"},
    mac_address{YType::str, "mac-address"},
    mac_address_xr{YType::str, "mac-address-xr"},
    mac_flush_received{YType::uint16, "mac-flush-received"},
    mac_flush_requested{YType::uint16, "mac-flush-requested"},
    num_paths{YType::uint32, "num-paths"},
    remote_encap_type{YType::uint8, "remote-encap-type"},
    remote_ethernet_segment_identifier{YType::uint8, "remote-ethernet-segment-identifier"},
    remote_seq_id{YType::uint32, "remote-seq-id"},
    resolved{YType::boolean, "resolved"},
    soo_nexthop{YType::str, "soo-nexthop"}
{
    yang_name = "mac"; yang_parent_name = "macs";
}

Evpn::Active::EviDetail::EviChildren::Macs::Mac::~Mac()
{
}

bool Evpn::Active::EviDetail::EviChildren::Macs::Mac::has_data() const
{
    for (std::size_t index=0; index<path_buffer.size(); index++)
    {
        if(path_buffer[index]->has_data())
            return true;
    }
    for (auto const & leaf : local_ethernet_segment_identifier.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_ethernet_segment_identifier.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return esi_port_key.is_set
	|| ethernet_tag.is_set
	|| ethernet_tag_xr.is_set
	|| evi.is_set
	|| internal_label.is_set
	|| ip_address.is_set
	|| ip_address_xr.is_set
	|| is_local_mac.is_set
	|| is_remote_mac.is_set
	|| is_static.is_set
	|| learned_bridge_port_name.is_set
	|| local_encap_type.is_set
	|| local_label.is_set
	|| local_seq_id.is_set
	|| mac_address.is_set
	|| mac_address_xr.is_set
	|| mac_flush_received.is_set
	|| mac_flush_requested.is_set
	|| num_paths.is_set
	|| remote_encap_type.is_set
	|| remote_seq_id.is_set
	|| resolved.is_set
	|| soo_nexthop.is_set;
}

bool Evpn::Active::EviDetail::EviChildren::Macs::Mac::has_operation() const
{
    for (std::size_t index=0; index<path_buffer.size(); index++)
    {
        if(path_buffer[index]->has_operation())
            return true;
    }
    for (auto const & leaf : local_ethernet_segment_identifier.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_ethernet_segment_identifier.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(esi_port_key.operation)
	|| is_set(ethernet_tag.operation)
	|| is_set(ethernet_tag_xr.operation)
	|| is_set(evi.operation)
	|| is_set(internal_label.operation)
	|| is_set(ip_address.operation)
	|| is_set(ip_address_xr.operation)
	|| is_set(is_local_mac.operation)
	|| is_set(is_remote_mac.operation)
	|| is_set(is_static.operation)
	|| is_set(learned_bridge_port_name.operation)
	|| is_set(local_encap_type.operation)
	|| is_set(local_ethernet_segment_identifier.operation)
	|| is_set(local_label.operation)
	|| is_set(local_seq_id.operation)
	|| is_set(mac_address.operation)
	|| is_set(mac_address_xr.operation)
	|| is_set(mac_flush_received.operation)
	|| is_set(mac_flush_requested.operation)
	|| is_set(num_paths.operation)
	|| is_set(remote_encap_type.operation)
	|| is_set(remote_ethernet_segment_identifier.operation)
	|| is_set(remote_seq_id.operation)
	|| is_set(resolved.operation)
	|| is_set(soo_nexthop.operation);
}

std::string Evpn::Active::EviDetail::EviChildren::Macs::Mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::EviChildren::Macs::Mac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/macs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (esi_port_key.is_set || is_set(esi_port_key.operation)) leaf_name_data.push_back(esi_port_key.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.operation)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (ethernet_tag_xr.is_set || is_set(ethernet_tag_xr.operation)) leaf_name_data.push_back(ethernet_tag_xr.get_name_leafdata());
    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.operation)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (ip_address_xr.is_set || is_set(ip_address_xr.operation)) leaf_name_data.push_back(ip_address_xr.get_name_leafdata());
    if (is_local_mac.is_set || is_set(is_local_mac.operation)) leaf_name_data.push_back(is_local_mac.get_name_leafdata());
    if (is_remote_mac.is_set || is_set(is_remote_mac.operation)) leaf_name_data.push_back(is_remote_mac.get_name_leafdata());
    if (is_static.is_set || is_set(is_static.operation)) leaf_name_data.push_back(is_static.get_name_leafdata());
    if (learned_bridge_port_name.is_set || is_set(learned_bridge_port_name.operation)) leaf_name_data.push_back(learned_bridge_port_name.get_name_leafdata());
    if (local_encap_type.is_set || is_set(local_encap_type.operation)) leaf_name_data.push_back(local_encap_type.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (local_seq_id.is_set || is_set(local_seq_id.operation)) leaf_name_data.push_back(local_seq_id.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (mac_address_xr.is_set || is_set(mac_address_xr.operation)) leaf_name_data.push_back(mac_address_xr.get_name_leafdata());
    if (mac_flush_received.is_set || is_set(mac_flush_received.operation)) leaf_name_data.push_back(mac_flush_received.get_name_leafdata());
    if (mac_flush_requested.is_set || is_set(mac_flush_requested.operation)) leaf_name_data.push_back(mac_flush_requested.get_name_leafdata());
    if (num_paths.is_set || is_set(num_paths.operation)) leaf_name_data.push_back(num_paths.get_name_leafdata());
    if (remote_encap_type.is_set || is_set(remote_encap_type.operation)) leaf_name_data.push_back(remote_encap_type.get_name_leafdata());
    if (remote_seq_id.is_set || is_set(remote_seq_id.operation)) leaf_name_data.push_back(remote_seq_id.get_name_leafdata());
    if (resolved.is_set || is_set(resolved.operation)) leaf_name_data.push_back(resolved.get_name_leafdata());
    if (soo_nexthop.is_set || is_set(soo_nexthop.operation)) leaf_name_data.push_back(soo_nexthop.get_name_leafdata());

    auto local_ethernet_segment_identifier_name_datas = local_ethernet_segment_identifier.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), local_ethernet_segment_identifier_name_datas.begin(), local_ethernet_segment_identifier_name_datas.end());
    auto remote_ethernet_segment_identifier_name_datas = remote_ethernet_segment_identifier.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_ethernet_segment_identifier_name_datas.begin(), remote_ethernet_segment_identifier_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::EviChildren::Macs::Mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-buffer")
    {
        for(auto const & c : path_buffer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer>();
        c->parent = this;
        path_buffer.push_back(std::move(c));
        children[segment_path] = path_buffer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::EviChildren::Macs::Mac::get_children()
{
    for (auto const & c : path_buffer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Active::EviDetail::EviChildren::Macs::Mac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "esi-port-key")
    {
        esi_port_key = value;
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr = value;
    }
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "ip-address-xr")
    {
        ip_address_xr = value;
    }
    if(value_path == "is-local-mac")
    {
        is_local_mac = value;
    }
    if(value_path == "is-remote-mac")
    {
        is_remote_mac = value;
    }
    if(value_path == "is-static")
    {
        is_static = value;
    }
    if(value_path == "learned-bridge-port-name")
    {
        learned_bridge_port_name = value;
    }
    if(value_path == "local-encap-type")
    {
        local_encap_type = value;
    }
    if(value_path == "local-ethernet-segment-identifier")
    {
        local_ethernet_segment_identifier.append(value);
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "local-seq-id")
    {
        local_seq_id = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr = value;
    }
    if(value_path == "mac-flush-received")
    {
        mac_flush_received = value;
    }
    if(value_path == "mac-flush-requested")
    {
        mac_flush_requested = value;
    }
    if(value_path == "num-paths")
    {
        num_paths = value;
    }
    if(value_path == "remote-encap-type")
    {
        remote_encap_type = value;
    }
    if(value_path == "remote-ethernet-segment-identifier")
    {
        remote_ethernet_segment_identifier.append(value);
    }
    if(value_path == "remote-seq-id")
    {
        remote_seq_id = value;
    }
    if(value_path == "resolved")
    {
        resolved = value;
    }
    if(value_path == "soo-nexthop")
    {
        soo_nexthop = value;
    }
}

Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer::PathBuffer()
    :
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"}
{
    yang_name = "path-buffer"; yang_parent_name = "mac";
}

Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer::~PathBuffer()
{
}

bool Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer::has_data() const
{
    return next_hop.is_set
	|| output_label.is_set;
}

bool Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation)
	|| is_set(output_label.operation);
}

std::string Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-buffer";

    return path_buffer.str();

}

EntityPath Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/evi-detail/evi-children/macs/mac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.operation)) leaf_name_data.push_back(output_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer::get_children()
{
    return children;
}

void Evpn::Active::EviDetail::EviChildren::Macs::Mac::PathBuffer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "output-label")
    {
        output_label = value;
    }
}

Evpn::Active::EthernetSegments::EthernetSegments()
{
    yang_name = "ethernet-segments"; yang_parent_name = "active";
}

Evpn::Active::EthernetSegments::~EthernetSegments()
{
}

bool Evpn::Active::EthernetSegments::has_data() const
{
    for (std::size_t index=0; index<ethernet_segment.size(); index++)
    {
        if(ethernet_segment[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Active::EthernetSegments::has_operation() const
{
    for (std::size_t index=0; index<ethernet_segment.size(); index++)
    {
        if(ethernet_segment[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Active::EthernetSegments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segments";

    return path_buffer.str();

}

EntityPath Evpn::Active::EthernetSegments::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EthernetSegments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ethernet-segment")
    {
        for(auto const & c : ethernet_segment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Active::EthernetSegments::EthernetSegment>();
        c->parent = this;
        ethernet_segment.push_back(std::move(c));
        children[segment_path] = ethernet_segment.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EthernetSegments::get_children()
{
    for (auto const & c : ethernet_segment)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Active::EthernetSegments::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Active::EthernetSegments::EthernetSegment::EthernetSegment()
    :
    elected_d_fs{YType::uint32, "elected-d-fs"},
    es_bgp_gates{YType::str, "es-bgp-gates"},
    es_l2fib_gates{YType::str, "es-l2fib-gates"},
    esi1{YType::str, "esi1"},
    esi2{YType::str, "esi2"},
    esi3{YType::str, "esi3"},
    esi4{YType::str, "esi4"},
    esi5{YType::str, "esi5"},
    esi_type{YType::enumeration, "esi-type"},
    ethernet_segment_identifier{YType::uint8, "ethernet-segment-identifier"},
    ethernet_segment_name{YType::str, "ethernet-segment-name"},
    ethernet_segment_state{YType::uint32, "ethernet-segment-state"},
    force_single_home{YType::boolean, "force-single-home"},
    forwarder_ports{YType::uint32, "forwarder-ports"},
    if_handle{YType::str, "if-handle"},
    interface_name{YType::str, "interface-name"},
    load_balance_mode_config{YType::enumeration, "load-balance-mode-config"},
    load_balance_mode_is_default{YType::boolean, "load-balance-mode-is-default"},
    load_balance_mode_oper{YType::enumeration, "load-balance-mode-oper"},
    local_split_horizon_group_label{YType::uint32, "local-split-horizon-group-label"},
    mac_flushing_mode_config{YType::enumeration, "mac-flushing-mode-config"},
    main_port_mac{YType::str, "main-port-mac"},
    main_port_role{YType::enumeration, "main-port-role"},
    mp_protected{YType::boolean, "mp-protected"},
    not_config_d_fs{YType::uint32, "not-config-d-fs"},
    not_elected_d_fs{YType::uint32, "not-elected-d-fs"},
    num_up_p_ws{YType::uint32, "num-up-p-ws"},
    peering_timer{YType::uint32, "peering-timer"},
    peering_timer_left{YType::uint32, "peering-timer-left"},
    primary_service{YType::uint32, "primary-service"},
    primary_services_input{YType::str, "primary-services-input"},
    recovery_timer{YType::uint32, "recovery-timer"},
    recovery_timer_left{YType::uint32, "recovery-timer-left"},
    route_target{YType::str, "route-target"},
    rt_origin{YType::enumeration, "rt-origin"},
    secondary_service{YType::uint32, "secondary-service"},
    secondary_services_input{YType::str, "secondary-services-input"},
    service_carving_mode{YType::enumeration, "service-carving-mode"},
    service_carving_result{YType::uint32, "service-carving-result"},
    service_carving_type{YType::enumeration, "service-carving-type"},
    source_mac_oper{YType::str, "source-mac-oper"},
    source_mac_origin{YType::enumeration, "source-mac-origin"}
{
    yang_name = "ethernet-segment"; yang_parent_name = "ethernet-segments";
}

Evpn::Active::EthernetSegments::EthernetSegment::~EthernetSegment()
{
}

bool Evpn::Active::EthernetSegments::EthernetSegment::has_data() const
{
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_split_horizon_group_label.size(); index++)
    {
        if(remote_split_horizon_group_label[index]->has_data())
            return true;
    }
    for (auto const & leaf : ethernet_segment_identifier.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : primary_service.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : secondary_service.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : service_carving_result.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return elected_d_fs.is_set
	|| es_bgp_gates.is_set
	|| es_l2fib_gates.is_set
	|| esi1.is_set
	|| esi2.is_set
	|| esi3.is_set
	|| esi4.is_set
	|| esi5.is_set
	|| esi_type.is_set
	|| ethernet_segment_name.is_set
	|| ethernet_segment_state.is_set
	|| force_single_home.is_set
	|| forwarder_ports.is_set
	|| if_handle.is_set
	|| interface_name.is_set
	|| load_balance_mode_config.is_set
	|| load_balance_mode_is_default.is_set
	|| load_balance_mode_oper.is_set
	|| local_split_horizon_group_label.is_set
	|| mac_flushing_mode_config.is_set
	|| main_port_mac.is_set
	|| main_port_role.is_set
	|| mp_protected.is_set
	|| not_config_d_fs.is_set
	|| not_elected_d_fs.is_set
	|| num_up_p_ws.is_set
	|| peering_timer.is_set
	|| peering_timer_left.is_set
	|| primary_services_input.is_set
	|| recovery_timer.is_set
	|| recovery_timer_left.is_set
	|| route_target.is_set
	|| rt_origin.is_set
	|| secondary_services_input.is_set
	|| service_carving_mode.is_set
	|| service_carving_type.is_set
	|| source_mac_oper.is_set
	|| source_mac_origin.is_set;
}

bool Evpn::Active::EthernetSegments::EthernetSegment::has_operation() const
{
    for (std::size_t index=0; index<next_hop.size(); index++)
    {
        if(next_hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_split_horizon_group_label.size(); index++)
    {
        if(remote_split_horizon_group_label[index]->has_operation())
            return true;
    }
    for (auto const & leaf : ethernet_segment_identifier.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : primary_service.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : secondary_service.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : service_carving_result.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(elected_d_fs.operation)
	|| is_set(es_bgp_gates.operation)
	|| is_set(es_l2fib_gates.operation)
	|| is_set(esi1.operation)
	|| is_set(esi2.operation)
	|| is_set(esi3.operation)
	|| is_set(esi4.operation)
	|| is_set(esi5.operation)
	|| is_set(esi_type.operation)
	|| is_set(ethernet_segment_identifier.operation)
	|| is_set(ethernet_segment_name.operation)
	|| is_set(ethernet_segment_state.operation)
	|| is_set(force_single_home.operation)
	|| is_set(forwarder_ports.operation)
	|| is_set(if_handle.operation)
	|| is_set(interface_name.operation)
	|| is_set(load_balance_mode_config.operation)
	|| is_set(load_balance_mode_is_default.operation)
	|| is_set(load_balance_mode_oper.operation)
	|| is_set(local_split_horizon_group_label.operation)
	|| is_set(mac_flushing_mode_config.operation)
	|| is_set(main_port_mac.operation)
	|| is_set(main_port_role.operation)
	|| is_set(mp_protected.operation)
	|| is_set(not_config_d_fs.operation)
	|| is_set(not_elected_d_fs.operation)
	|| is_set(num_up_p_ws.operation)
	|| is_set(peering_timer.operation)
	|| is_set(peering_timer_left.operation)
	|| is_set(primary_service.operation)
	|| is_set(primary_services_input.operation)
	|| is_set(recovery_timer.operation)
	|| is_set(recovery_timer_left.operation)
	|| is_set(route_target.operation)
	|| is_set(rt_origin.operation)
	|| is_set(secondary_service.operation)
	|| is_set(secondary_services_input.operation)
	|| is_set(service_carving_mode.operation)
	|| is_set(service_carving_result.operation)
	|| is_set(service_carving_type.operation)
	|| is_set(source_mac_oper.operation)
	|| is_set(source_mac_origin.operation);
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-segment";

    return path_buffer.str();

}

EntityPath Evpn::Active::EthernetSegments::EthernetSegment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/ethernet-segments/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (elected_d_fs.is_set || is_set(elected_d_fs.operation)) leaf_name_data.push_back(elected_d_fs.get_name_leafdata());
    if (es_bgp_gates.is_set || is_set(es_bgp_gates.operation)) leaf_name_data.push_back(es_bgp_gates.get_name_leafdata());
    if (es_l2fib_gates.is_set || is_set(es_l2fib_gates.operation)) leaf_name_data.push_back(es_l2fib_gates.get_name_leafdata());
    if (esi1.is_set || is_set(esi1.operation)) leaf_name_data.push_back(esi1.get_name_leafdata());
    if (esi2.is_set || is_set(esi2.operation)) leaf_name_data.push_back(esi2.get_name_leafdata());
    if (esi3.is_set || is_set(esi3.operation)) leaf_name_data.push_back(esi3.get_name_leafdata());
    if (esi4.is_set || is_set(esi4.operation)) leaf_name_data.push_back(esi4.get_name_leafdata());
    if (esi5.is_set || is_set(esi5.operation)) leaf_name_data.push_back(esi5.get_name_leafdata());
    if (esi_type.is_set || is_set(esi_type.operation)) leaf_name_data.push_back(esi_type.get_name_leafdata());
    if (ethernet_segment_name.is_set || is_set(ethernet_segment_name.operation)) leaf_name_data.push_back(ethernet_segment_name.get_name_leafdata());
    if (ethernet_segment_state.is_set || is_set(ethernet_segment_state.operation)) leaf_name_data.push_back(ethernet_segment_state.get_name_leafdata());
    if (force_single_home.is_set || is_set(force_single_home.operation)) leaf_name_data.push_back(force_single_home.get_name_leafdata());
    if (forwarder_ports.is_set || is_set(forwarder_ports.operation)) leaf_name_data.push_back(forwarder_ports.get_name_leafdata());
    if (if_handle.is_set || is_set(if_handle.operation)) leaf_name_data.push_back(if_handle.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_balance_mode_config.is_set || is_set(load_balance_mode_config.operation)) leaf_name_data.push_back(load_balance_mode_config.get_name_leafdata());
    if (load_balance_mode_is_default.is_set || is_set(load_balance_mode_is_default.operation)) leaf_name_data.push_back(load_balance_mode_is_default.get_name_leafdata());
    if (load_balance_mode_oper.is_set || is_set(load_balance_mode_oper.operation)) leaf_name_data.push_back(load_balance_mode_oper.get_name_leafdata());
    if (local_split_horizon_group_label.is_set || is_set(local_split_horizon_group_label.operation)) leaf_name_data.push_back(local_split_horizon_group_label.get_name_leafdata());
    if (mac_flushing_mode_config.is_set || is_set(mac_flushing_mode_config.operation)) leaf_name_data.push_back(mac_flushing_mode_config.get_name_leafdata());
    if (main_port_mac.is_set || is_set(main_port_mac.operation)) leaf_name_data.push_back(main_port_mac.get_name_leafdata());
    if (main_port_role.is_set || is_set(main_port_role.operation)) leaf_name_data.push_back(main_port_role.get_name_leafdata());
    if (mp_protected.is_set || is_set(mp_protected.operation)) leaf_name_data.push_back(mp_protected.get_name_leafdata());
    if (not_config_d_fs.is_set || is_set(not_config_d_fs.operation)) leaf_name_data.push_back(not_config_d_fs.get_name_leafdata());
    if (not_elected_d_fs.is_set || is_set(not_elected_d_fs.operation)) leaf_name_data.push_back(not_elected_d_fs.get_name_leafdata());
    if (num_up_p_ws.is_set || is_set(num_up_p_ws.operation)) leaf_name_data.push_back(num_up_p_ws.get_name_leafdata());
    if (peering_timer.is_set || is_set(peering_timer.operation)) leaf_name_data.push_back(peering_timer.get_name_leafdata());
    if (peering_timer_left.is_set || is_set(peering_timer_left.operation)) leaf_name_data.push_back(peering_timer_left.get_name_leafdata());
    if (primary_services_input.is_set || is_set(primary_services_input.operation)) leaf_name_data.push_back(primary_services_input.get_name_leafdata());
    if (recovery_timer.is_set || is_set(recovery_timer.operation)) leaf_name_data.push_back(recovery_timer.get_name_leafdata());
    if (recovery_timer_left.is_set || is_set(recovery_timer_left.operation)) leaf_name_data.push_back(recovery_timer_left.get_name_leafdata());
    if (route_target.is_set || is_set(route_target.operation)) leaf_name_data.push_back(route_target.get_name_leafdata());
    if (rt_origin.is_set || is_set(rt_origin.operation)) leaf_name_data.push_back(rt_origin.get_name_leafdata());
    if (secondary_services_input.is_set || is_set(secondary_services_input.operation)) leaf_name_data.push_back(secondary_services_input.get_name_leafdata());
    if (service_carving_mode.is_set || is_set(service_carving_mode.operation)) leaf_name_data.push_back(service_carving_mode.get_name_leafdata());
    if (service_carving_type.is_set || is_set(service_carving_type.operation)) leaf_name_data.push_back(service_carving_type.get_name_leafdata());
    if (source_mac_oper.is_set || is_set(source_mac_oper.operation)) leaf_name_data.push_back(source_mac_oper.get_name_leafdata());
    if (source_mac_origin.is_set || is_set(source_mac_origin.operation)) leaf_name_data.push_back(source_mac_origin.get_name_leafdata());

    auto ethernet_segment_identifier_name_datas = ethernet_segment_identifier.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ethernet_segment_identifier_name_datas.begin(), ethernet_segment_identifier_name_datas.end());
    auto primary_service_name_datas = primary_service.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), primary_service_name_datas.begin(), primary_service_name_datas.end());
    auto secondary_service_name_datas = secondary_service.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), secondary_service_name_datas.begin(), secondary_service_name_datas.end());
    auto service_carving_result_name_datas = service_carving_result.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), service_carving_result_name_datas.begin(), service_carving_result_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EthernetSegments::EthernetSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "next-hop")
    {
        for(auto const & c : next_hop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Active::EthernetSegments::EthernetSegment::NextHop>();
        c->parent = this;
        next_hop.push_back(std::move(c));
        children[segment_path] = next_hop.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-split-horizon-group-label")
    {
        for(auto const & c : remote_split_horizon_group_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel>();
        c->parent = this;
        remote_split_horizon_group_label.push_back(std::move(c));
        children[segment_path] = remote_split_horizon_group_label.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EthernetSegments::EthernetSegment::get_children()
{
    for (auto const & c : next_hop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : remote_split_horizon_group_label)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Active::EthernetSegments::EthernetSegment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "elected-d-fs")
    {
        elected_d_fs = value;
    }
    if(value_path == "es-bgp-gates")
    {
        es_bgp_gates = value;
    }
    if(value_path == "es-l2fib-gates")
    {
        es_l2fib_gates = value;
    }
    if(value_path == "esi1")
    {
        esi1 = value;
    }
    if(value_path == "esi2")
    {
        esi2 = value;
    }
    if(value_path == "esi3")
    {
        esi3 = value;
    }
    if(value_path == "esi4")
    {
        esi4 = value;
    }
    if(value_path == "esi5")
    {
        esi5 = value;
    }
    if(value_path == "esi-type")
    {
        esi_type = value;
    }
    if(value_path == "ethernet-segment-identifier")
    {
        ethernet_segment_identifier.append(value);
    }
    if(value_path == "ethernet-segment-name")
    {
        ethernet_segment_name = value;
    }
    if(value_path == "ethernet-segment-state")
    {
        ethernet_segment_state = value;
    }
    if(value_path == "force-single-home")
    {
        force_single_home = value;
    }
    if(value_path == "forwarder-ports")
    {
        forwarder_ports = value;
    }
    if(value_path == "if-handle")
    {
        if_handle = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "load-balance-mode-config")
    {
        load_balance_mode_config = value;
    }
    if(value_path == "load-balance-mode-is-default")
    {
        load_balance_mode_is_default = value;
    }
    if(value_path == "load-balance-mode-oper")
    {
        load_balance_mode_oper = value;
    }
    if(value_path == "local-split-horizon-group-label")
    {
        local_split_horizon_group_label = value;
    }
    if(value_path == "mac-flushing-mode-config")
    {
        mac_flushing_mode_config = value;
    }
    if(value_path == "main-port-mac")
    {
        main_port_mac = value;
    }
    if(value_path == "main-port-role")
    {
        main_port_role = value;
    }
    if(value_path == "mp-protected")
    {
        mp_protected = value;
    }
    if(value_path == "not-config-d-fs")
    {
        not_config_d_fs = value;
    }
    if(value_path == "not-elected-d-fs")
    {
        not_elected_d_fs = value;
    }
    if(value_path == "num-up-p-ws")
    {
        num_up_p_ws = value;
    }
    if(value_path == "peering-timer")
    {
        peering_timer = value;
    }
    if(value_path == "peering-timer-left")
    {
        peering_timer_left = value;
    }
    if(value_path == "primary-service")
    {
        primary_service.append(value);
    }
    if(value_path == "primary-services-input")
    {
        primary_services_input = value;
    }
    if(value_path == "recovery-timer")
    {
        recovery_timer = value;
    }
    if(value_path == "recovery-timer-left")
    {
        recovery_timer_left = value;
    }
    if(value_path == "route-target")
    {
        route_target = value;
    }
    if(value_path == "rt-origin")
    {
        rt_origin = value;
    }
    if(value_path == "secondary-service")
    {
        secondary_service.append(value);
    }
    if(value_path == "secondary-services-input")
    {
        secondary_services_input = value;
    }
    if(value_path == "service-carving-mode")
    {
        service_carving_mode = value;
    }
    if(value_path == "service-carving-result")
    {
        service_carving_result.append(value);
    }
    if(value_path == "service-carving-type")
    {
        service_carving_type = value;
    }
    if(value_path == "source-mac-oper")
    {
        source_mac_oper = value;
    }
    if(value_path == "source-mac-origin")
    {
        source_mac_origin = value;
    }
}

Evpn::Active::EthernetSegments::EthernetSegment::NextHop::NextHop()
    :
    next_hop{YType::str, "next-hop"}
{
    yang_name = "next-hop"; yang_parent_name = "ethernet-segment";
}

Evpn::Active::EthernetSegments::EthernetSegment::NextHop::~NextHop()
{
}

bool Evpn::Active::EthernetSegments::EthernetSegment::NextHop::has_data() const
{
    return next_hop.is_set;
}

bool Evpn::Active::EthernetSegments::EthernetSegment::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation);
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

EntityPath Evpn::Active::EthernetSegments::EthernetSegment::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/ethernet-segments/ethernet-segment/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EthernetSegments::EthernetSegment::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EthernetSegments::EthernetSegment::NextHop::get_children()
{
    return children;
}

void Evpn::Active::EthernetSegments::EthernetSegment::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
}

Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::RemoteSplitHorizonGroupLabel()
    :
    label{YType::uint32, "label"},
    next_hop{YType::str, "next-hop"}
{
    yang_name = "remote-split-horizon-group-label"; yang_parent_name = "ethernet-segment";
}

Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::~RemoteSplitHorizonGroupLabel()
{
}

bool Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::has_data() const
{
    return label.is_set
	|| next_hop.is_set;
}

bool Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(next_hop.operation);
}

std::string Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-split-horizon-group-label";

    return path_buffer.str();

}

EntityPath Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/ethernet-segments/ethernet-segment/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::get_children()
{
    return children;
}

void Evpn::Active::EthernetSegments::EthernetSegment::RemoteSplitHorizonGroupLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
}

Evpn::Active::AcIds::AcIds()
{
    yang_name = "ac-ids"; yang_parent_name = "active";
}

Evpn::Active::AcIds::~AcIds()
{
}

bool Evpn::Active::AcIds::has_data() const
{
    for (std::size_t index=0; index<ac_id.size(); index++)
    {
        if(ac_id[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Active::AcIds::has_operation() const
{
    for (std::size_t index=0; index<ac_id.size(); index++)
    {
        if(ac_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Active::AcIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac-ids";

    return path_buffer.str();

}

EntityPath Evpn::Active::AcIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::AcIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ac-id")
    {
        for(auto const & c : ac_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Active::AcIds::AcId>();
        c->parent = this;
        ac_id.push_back(std::move(c));
        children[segment_path] = ac_id.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::AcIds::get_children()
{
    for (auto const & c : ac_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Active::AcIds::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Active::AcIds::AcId::AcId()
    :
    ac_id{YType::int32, "ac-id"},
    evi{YType::int32, "evi"},
    evi_xr{YType::uint32, "evi-xr"},
    neighbor{YType::str, "neighbor"}
{
    yang_name = "ac-id"; yang_parent_name = "ac-ids";
}

Evpn::Active::AcIds::AcId::~AcId()
{
}

bool Evpn::Active::AcIds::AcId::has_data() const
{
    return ac_id.is_set
	|| evi.is_set
	|| evi_xr.is_set
	|| neighbor.is_set;
}

bool Evpn::Active::AcIds::AcId::has_operation() const
{
    return is_set(operation)
	|| is_set(ac_id.operation)
	|| is_set(evi.operation)
	|| is_set(evi_xr.operation)
	|| is_set(neighbor.operation);
}

std::string Evpn::Active::AcIds::AcId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac-id";

    return path_buffer.str();

}

EntityPath Evpn::Active::AcIds::AcId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/active/ac-ids/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ac_id.is_set || is_set(ac_id.operation)) leaf_name_data.push_back(ac_id.get_name_leafdata());
    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.operation)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Active::AcIds::AcId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Active::AcIds::AcId::get_children()
{
    return children;
}

void Evpn::Active::AcIds::AcId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ac-id")
    {
        ac_id = value;
    }
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
    }
}

Evpn::Standby::Standby()
    :
    ac_ids(std::make_shared<Evpn::Standby::AcIds>())
	,ethernet_segments(std::make_shared<Evpn::Standby::EthernetSegments>())
	,evi_detail(std::make_shared<Evpn::Standby::EviDetail>())
	,evis(std::make_shared<Evpn::Standby::Evis>())
	,summary(std::make_shared<Evpn::Standby::Summary>())
{
    ac_ids->parent = this;
    children["ac-ids"] = ac_ids;

    ethernet_segments->parent = this;
    children["ethernet-segments"] = ethernet_segments;

    evi_detail->parent = this;
    children["evi-detail"] = evi_detail;

    evis->parent = this;
    children["evis"] = evis;

    summary->parent = this;
    children["summary"] = summary;

    yang_name = "standby"; yang_parent_name = "evpn";
}

Evpn::Standby::~Standby()
{
}

bool Evpn::Standby::has_data() const
{
    return (ac_ids !=  nullptr && ac_ids->has_data())
	|| (ethernet_segments !=  nullptr && ethernet_segments->has_data())
	|| (evi_detail !=  nullptr && evi_detail->has_data())
	|| (evis !=  nullptr && evis->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Evpn::Standby::has_operation() const
{
    return is_set(operation)
	|| (ac_ids !=  nullptr && ac_ids->has_operation())
	|| (ethernet_segments !=  nullptr && ethernet_segments->has_operation())
	|| (evi_detail !=  nullptr && evi_detail->has_operation())
	|| (evis !=  nullptr && evis->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Evpn::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";

    return path_buffer.str();

}

EntityPath Evpn::Standby::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ac-ids")
    {
        if(ac_ids != nullptr)
        {
            children["ac-ids"] = ac_ids;
        }
        else
        {
            ac_ids = std::make_shared<Evpn::Standby::AcIds>();
            ac_ids->parent = this;
            children["ac-ids"] = ac_ids;
        }
        return children.at("ac-ids");
    }

    if(child_yang_name == "ethernet-segments")
    {
        if(ethernet_segments != nullptr)
        {
            children["ethernet-segments"] = ethernet_segments;
        }
        else
        {
            ethernet_segments = std::make_shared<Evpn::Standby::EthernetSegments>();
            ethernet_segments->parent = this;
            children["ethernet-segments"] = ethernet_segments;
        }
        return children.at("ethernet-segments");
    }

    if(child_yang_name == "evi-detail")
    {
        if(evi_detail != nullptr)
        {
            children["evi-detail"] = evi_detail;
        }
        else
        {
            evi_detail = std::make_shared<Evpn::Standby::EviDetail>();
            evi_detail->parent = this;
            children["evi-detail"] = evi_detail;
        }
        return children.at("evi-detail");
    }

    if(child_yang_name == "evis")
    {
        if(evis != nullptr)
        {
            children["evis"] = evis;
        }
        else
        {
            evis = std::make_shared<Evpn::Standby::Evis>();
            evis->parent = this;
            children["evis"] = evis;
        }
        return children.at("evis");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<Evpn::Standby::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::get_children()
{
    if(children.find("ac-ids") == children.end())
    {
        if(ac_ids != nullptr)
        {
            children["ac-ids"] = ac_ids;
        }
    }

    if(children.find("ethernet-segments") == children.end())
    {
        if(ethernet_segments != nullptr)
        {
            children["ethernet-segments"] = ethernet_segments;
        }
    }

    if(children.find("evi-detail") == children.end())
    {
        if(evi_detail != nullptr)
        {
            children["evi-detail"] = evi_detail;
        }
    }

    if(children.find("evis") == children.end())
    {
        if(evis != nullptr)
        {
            children["evis"] = evis;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void Evpn::Standby::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Standby::Evis::Evis()
{
    yang_name = "evis"; yang_parent_name = "standby";
}

Evpn::Standby::Evis::~Evis()
{
}

bool Evpn::Standby::Evis::has_data() const
{
    for (std::size_t index=0; index<evi.size(); index++)
    {
        if(evi[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::Evis::has_operation() const
{
    for (std::size_t index=0; index<evi.size(); index++)
    {
        if(evi[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Standby::Evis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evis";

    return path_buffer.str();

}

EntityPath Evpn::Standby::Evis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::Evis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evi")
    {
        for(auto const & c : evi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Standby::Evis::Evi>();
        c->parent = this;
        evi.push_back(std::move(c));
        children[segment_path] = evi.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::Evis::get_children()
{
    for (auto const & c : evi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Standby::Evis::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Standby::Evis::Evi::Evi()
    :
    evi{YType::int32, "evi"},
    bd_name{YType::str, "bd-name"},
    evi_xr{YType::uint32, "evi-xr"},
    type{YType::enumeration, "type"}
{
    yang_name = "evi"; yang_parent_name = "evis";
}

Evpn::Standby::Evis::Evi::~Evi()
{
}

bool Evpn::Standby::Evis::Evi::has_data() const
{
    return evi.is_set
	|| bd_name.is_set
	|| evi_xr.is_set
	|| type.is_set;
}

bool Evpn::Standby::Evis::Evi::has_operation() const
{
    return is_set(operation)
	|| is_set(evi.operation)
	|| is_set(bd_name.operation)
	|| is_set(evi_xr.operation)
	|| is_set(type.operation);
}

std::string Evpn::Standby::Evis::Evi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi" <<"[evi='" <<evi <<"']";

    return path_buffer.str();

}

EntityPath Evpn::Standby::Evis::Evi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.operation)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.operation)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::Evis::Evi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::Evis::Evi::get_children()
{
    return children;
}

void Evpn::Standby::Evis::Evi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Evpn::Standby::Summary::Summary()
    :
    as{YType::uint32, "as"},
    es_entries{YType::uint32, "es-entries"},
    es_global_mac_routes{YType::uint32, "es-global-mac-routes"},
    ev_is{YType::uint32, "ev-is"},
    global_source_mac{YType::str, "global-source-mac"},
    l2rib_throttle{YType::boolean, "l2rib-throttle"},
    labels{YType::uint32, "labels"},
    local_ead_routes{YType::uint32, "local-ead-routes"},
    local_imcast_routes{YType::uint32, "local-imcast-routes"},
    local_ipv4_mac_routes{YType::uint32, "local-ipv4-mac-routes"},
    local_ipv6_mac_routes{YType::uint32, "local-ipv6-mac-routes"},
    local_mac_routes{YType::uint32, "local-mac-routes"},
    logging_df_election_enabled{YType::boolean, "logging-df-election-enabled"},
    neighbor_entries{YType::uint32, "neighbor-entries"},
    peering_time{YType::uint32, "peering-time"},
    recovery_time{YType::uint32, "recovery-time"},
    remote_ead_routes{YType::uint32, "remote-ead-routes"},
    remote_imcast_routes{YType::uint32, "remote-imcast-routes"},
    remote_ipv4_mac_routes{YType::uint32, "remote-ipv4-mac-routes"},
    remote_ipv6_mac_routes{YType::uint32, "remote-ipv6-mac-routes"},
    remote_mac_routes{YType::uint32, "remote-mac-routes"},
    remote_soo_mac_routes{YType::uint32, "remote-soo-mac-routes"},
    router_id{YType::str, "router-id"}
{
    yang_name = "summary"; yang_parent_name = "standby";
}

Evpn::Standby::Summary::~Summary()
{
}

bool Evpn::Standby::Summary::has_data() const
{
    return as.is_set
	|| es_entries.is_set
	|| es_global_mac_routes.is_set
	|| ev_is.is_set
	|| global_source_mac.is_set
	|| l2rib_throttle.is_set
	|| labels.is_set
	|| local_ead_routes.is_set
	|| local_imcast_routes.is_set
	|| local_ipv4_mac_routes.is_set
	|| local_ipv6_mac_routes.is_set
	|| local_mac_routes.is_set
	|| logging_df_election_enabled.is_set
	|| neighbor_entries.is_set
	|| peering_time.is_set
	|| recovery_time.is_set
	|| remote_ead_routes.is_set
	|| remote_imcast_routes.is_set
	|| remote_ipv4_mac_routes.is_set
	|| remote_ipv6_mac_routes.is_set
	|| remote_mac_routes.is_set
	|| remote_soo_mac_routes.is_set
	|| router_id.is_set;
}

bool Evpn::Standby::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(as.operation)
	|| is_set(es_entries.operation)
	|| is_set(es_global_mac_routes.operation)
	|| is_set(ev_is.operation)
	|| is_set(global_source_mac.operation)
	|| is_set(l2rib_throttle.operation)
	|| is_set(labels.operation)
	|| is_set(local_ead_routes.operation)
	|| is_set(local_imcast_routes.operation)
	|| is_set(local_ipv4_mac_routes.operation)
	|| is_set(local_ipv6_mac_routes.operation)
	|| is_set(local_mac_routes.operation)
	|| is_set(logging_df_election_enabled.operation)
	|| is_set(neighbor_entries.operation)
	|| is_set(peering_time.operation)
	|| is_set(recovery_time.operation)
	|| is_set(remote_ead_routes.operation)
	|| is_set(remote_imcast_routes.operation)
	|| is_set(remote_ipv4_mac_routes.operation)
	|| is_set(remote_ipv6_mac_routes.operation)
	|| is_set(remote_mac_routes.operation)
	|| is_set(remote_soo_mac_routes.operation)
	|| is_set(router_id.operation);
}

std::string Evpn::Standby::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Evpn::Standby::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (es_entries.is_set || is_set(es_entries.operation)) leaf_name_data.push_back(es_entries.get_name_leafdata());
    if (es_global_mac_routes.is_set || is_set(es_global_mac_routes.operation)) leaf_name_data.push_back(es_global_mac_routes.get_name_leafdata());
    if (ev_is.is_set || is_set(ev_is.operation)) leaf_name_data.push_back(ev_is.get_name_leafdata());
    if (global_source_mac.is_set || is_set(global_source_mac.operation)) leaf_name_data.push_back(global_source_mac.get_name_leafdata());
    if (l2rib_throttle.is_set || is_set(l2rib_throttle.operation)) leaf_name_data.push_back(l2rib_throttle.get_name_leafdata());
    if (labels.is_set || is_set(labels.operation)) leaf_name_data.push_back(labels.get_name_leafdata());
    if (local_ead_routes.is_set || is_set(local_ead_routes.operation)) leaf_name_data.push_back(local_ead_routes.get_name_leafdata());
    if (local_imcast_routes.is_set || is_set(local_imcast_routes.operation)) leaf_name_data.push_back(local_imcast_routes.get_name_leafdata());
    if (local_ipv4_mac_routes.is_set || is_set(local_ipv4_mac_routes.operation)) leaf_name_data.push_back(local_ipv4_mac_routes.get_name_leafdata());
    if (local_ipv6_mac_routes.is_set || is_set(local_ipv6_mac_routes.operation)) leaf_name_data.push_back(local_ipv6_mac_routes.get_name_leafdata());
    if (local_mac_routes.is_set || is_set(local_mac_routes.operation)) leaf_name_data.push_back(local_mac_routes.get_name_leafdata());
    if (logging_df_election_enabled.is_set || is_set(logging_df_election_enabled.operation)) leaf_name_data.push_back(logging_df_election_enabled.get_name_leafdata());
    if (neighbor_entries.is_set || is_set(neighbor_entries.operation)) leaf_name_data.push_back(neighbor_entries.get_name_leafdata());
    if (peering_time.is_set || is_set(peering_time.operation)) leaf_name_data.push_back(peering_time.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.operation)) leaf_name_data.push_back(recovery_time.get_name_leafdata());
    if (remote_ead_routes.is_set || is_set(remote_ead_routes.operation)) leaf_name_data.push_back(remote_ead_routes.get_name_leafdata());
    if (remote_imcast_routes.is_set || is_set(remote_imcast_routes.operation)) leaf_name_data.push_back(remote_imcast_routes.get_name_leafdata());
    if (remote_ipv4_mac_routes.is_set || is_set(remote_ipv4_mac_routes.operation)) leaf_name_data.push_back(remote_ipv4_mac_routes.get_name_leafdata());
    if (remote_ipv6_mac_routes.is_set || is_set(remote_ipv6_mac_routes.operation)) leaf_name_data.push_back(remote_ipv6_mac_routes.get_name_leafdata());
    if (remote_mac_routes.is_set || is_set(remote_mac_routes.operation)) leaf_name_data.push_back(remote_mac_routes.get_name_leafdata());
    if (remote_soo_mac_routes.is_set || is_set(remote_soo_mac_routes.operation)) leaf_name_data.push_back(remote_soo_mac_routes.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::Summary::get_children()
{
    return children;
}

void Evpn::Standby::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "es-entries")
    {
        es_entries = value;
    }
    if(value_path == "es-global-mac-routes")
    {
        es_global_mac_routes = value;
    }
    if(value_path == "ev-is")
    {
        ev_is = value;
    }
    if(value_path == "global-source-mac")
    {
        global_source_mac = value;
    }
    if(value_path == "l2rib-throttle")
    {
        l2rib_throttle = value;
    }
    if(value_path == "labels")
    {
        labels = value;
    }
    if(value_path == "local-ead-routes")
    {
        local_ead_routes = value;
    }
    if(value_path == "local-imcast-routes")
    {
        local_imcast_routes = value;
    }
    if(value_path == "local-ipv4-mac-routes")
    {
        local_ipv4_mac_routes = value;
    }
    if(value_path == "local-ipv6-mac-routes")
    {
        local_ipv6_mac_routes = value;
    }
    if(value_path == "local-mac-routes")
    {
        local_mac_routes = value;
    }
    if(value_path == "logging-df-election-enabled")
    {
        logging_df_election_enabled = value;
    }
    if(value_path == "neighbor-entries")
    {
        neighbor_entries = value;
    }
    if(value_path == "peering-time")
    {
        peering_time = value;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
    }
    if(value_path == "remote-ead-routes")
    {
        remote_ead_routes = value;
    }
    if(value_path == "remote-imcast-routes")
    {
        remote_imcast_routes = value;
    }
    if(value_path == "remote-ipv4-mac-routes")
    {
        remote_ipv4_mac_routes = value;
    }
    if(value_path == "remote-ipv6-mac-routes")
    {
        remote_ipv6_mac_routes = value;
    }
    if(value_path == "remote-mac-routes")
    {
        remote_mac_routes = value;
    }
    if(value_path == "remote-soo-mac-routes")
    {
        remote_soo_mac_routes = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Evpn::Standby::EviDetail::EviDetail()
    :
    elements(std::make_shared<Evpn::Standby::EviDetail::Elements>())
	,evi_children(std::make_shared<Evpn::Standby::EviDetail::EviChildren>())
{
    elements->parent = this;
    children["elements"] = elements;

    evi_children->parent = this;
    children["evi-children"] = evi_children;

    yang_name = "evi-detail"; yang_parent_name = "standby";
}

Evpn::Standby::EviDetail::~EviDetail()
{
}

bool Evpn::Standby::EviDetail::has_data() const
{
    return (elements !=  nullptr && elements->has_data())
	|| (evi_children !=  nullptr && evi_children->has_data());
}

bool Evpn::Standby::EviDetail::has_operation() const
{
    return is_set(operation)
	|| (elements !=  nullptr && elements->has_operation())
	|| (evi_children !=  nullptr && evi_children->has_operation());
}

std::string Evpn::Standby::EviDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi-detail";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "elements")
    {
        if(elements != nullptr)
        {
            children["elements"] = elements;
        }
        else
        {
            elements = std::make_shared<Evpn::Standby::EviDetail::Elements>();
            elements->parent = this;
            children["elements"] = elements;
        }
        return children.at("elements");
    }

    if(child_yang_name == "evi-children")
    {
        if(evi_children != nullptr)
        {
            children["evi-children"] = evi_children;
        }
        else
        {
            evi_children = std::make_shared<Evpn::Standby::EviDetail::EviChildren>();
            evi_children->parent = this;
            children["evi-children"] = evi_children;
        }
        return children.at("evi-children");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::get_children()
{
    if(children.find("elements") == children.end())
    {
        if(elements != nullptr)
        {
            children["elements"] = elements;
        }
    }

    if(children.find("evi-children") == children.end())
    {
        if(evi_children != nullptr)
        {
            children["evi-children"] = evi_children;
        }
    }

    return children;
}

void Evpn::Standby::EviDetail::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Standby::EviDetail::Elements::Elements()
{
    yang_name = "elements"; yang_parent_name = "evi-detail";
}

Evpn::Standby::EviDetail::Elements::~Elements()
{
}

bool Evpn::Standby::EviDetail::Elements::has_data() const
{
    for (std::size_t index=0; index<element.size(); index++)
    {
        if(element[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::EviDetail::Elements::has_operation() const
{
    for (std::size_t index=0; index<element.size(); index++)
    {
        if(element[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Standby::EviDetail::Elements::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "elements";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "element")
    {
        for(auto const & c : element)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Standby::EviDetail::Elements::Element>();
        c->parent = this;
        element.push_back(std::move(c));
        children[segment_path] = element.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::get_children()
{
    for (auto const & c : element)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Standby::EviDetail::Elements::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Standby::EviDetail::Elements::Element::Element()
    :
    evi{YType::int32, "evi"},
    advertise_mac{YType::boolean, "advertise-mac"},
    aliasing_disabled{YType::boolean, "aliasing-disabled"},
    bd_name{YType::str, "bd-name"},
    cw_disable{YType::boolean, "cw-disable"},
    description{YType::str, "description"},
    evi_xr{YType::uint32, "evi-xr"},
    forward_class{YType::uint8, "forward-class"},
    multicast_label{YType::uint32, "multicast-label"},
    reoriginate_disabled{YType::boolean, "reoriginate-disabled"},
    rt_export_block_set{YType::boolean, "rt-export-block-set"},
    rt_import_block_set{YType::boolean, "rt-import-block-set"},
    stitching{YType::boolean, "stitching"},
    table_policy_name{YType::str, "table-policy-name"},
    type{YType::enumeration, "type"},
    unicast_label{YType::uint32, "unicast-label"},
    unknown_unicast_flooding_disabled{YType::boolean, "unknown-unicast-flooding-disabled"}
    	,
    flow_label(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::FlowLabel>())
	,rd_auto(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdAuto>())
	,rd_configured(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured>())
	,rt_auto(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto>())
	,rt_auto_stitching(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching>())
{
    flow_label->parent = this;
    children["flow-label"] = flow_label;

    rd_auto->parent = this;
    children["rd-auto"] = rd_auto;

    rd_configured->parent = this;
    children["rd-configured"] = rd_configured;

    rt_auto->parent = this;
    children["rt-auto"] = rt_auto;

    rt_auto_stitching->parent = this;
    children["rt-auto-stitching"] = rt_auto_stitching;

    yang_name = "element"; yang_parent_name = "elements";
}

Evpn::Standby::EviDetail::Elements::Element::~Element()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::has_data() const
{
    return evi.is_set
	|| advertise_mac.is_set
	|| aliasing_disabled.is_set
	|| bd_name.is_set
	|| cw_disable.is_set
	|| description.is_set
	|| evi_xr.is_set
	|| forward_class.is_set
	|| multicast_label.is_set
	|| reoriginate_disabled.is_set
	|| rt_export_block_set.is_set
	|| rt_import_block_set.is_set
	|| stitching.is_set
	|| table_policy_name.is_set
	|| type.is_set
	|| unicast_label.is_set
	|| unknown_unicast_flooding_disabled.is_set
	|| (flow_label !=  nullptr && flow_label->has_data())
	|| (rd_auto !=  nullptr && rd_auto->has_data())
	|| (rd_configured !=  nullptr && rd_configured->has_data())
	|| (rt_auto !=  nullptr && rt_auto->has_data())
	|| (rt_auto_stitching !=  nullptr && rt_auto_stitching->has_data());
}

bool Evpn::Standby::EviDetail::Elements::Element::has_operation() const
{
    return is_set(operation)
	|| is_set(evi.operation)
	|| is_set(advertise_mac.operation)
	|| is_set(aliasing_disabled.operation)
	|| is_set(bd_name.operation)
	|| is_set(cw_disable.operation)
	|| is_set(description.operation)
	|| is_set(evi_xr.operation)
	|| is_set(forward_class.operation)
	|| is_set(multicast_label.operation)
	|| is_set(reoriginate_disabled.operation)
	|| is_set(rt_export_block_set.operation)
	|| is_set(rt_import_block_set.operation)
	|| is_set(stitching.operation)
	|| is_set(table_policy_name.operation)
	|| is_set(type.operation)
	|| is_set(unicast_label.operation)
	|| is_set(unknown_unicast_flooding_disabled.operation)
	|| (flow_label !=  nullptr && flow_label->has_operation())
	|| (rd_auto !=  nullptr && rd_auto->has_operation())
	|| (rd_configured !=  nullptr && rd_configured->has_operation())
	|| (rt_auto !=  nullptr && rt_auto->has_operation())
	|| (rt_auto_stitching !=  nullptr && rt_auto_stitching->has_operation());
}

std::string Evpn::Standby::EviDetail::Elements::Element::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "element" <<"[evi='" <<evi <<"']";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::Element::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/elements/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (advertise_mac.is_set || is_set(advertise_mac.operation)) leaf_name_data.push_back(advertise_mac.get_name_leafdata());
    if (aliasing_disabled.is_set || is_set(aliasing_disabled.operation)) leaf_name_data.push_back(aliasing_disabled.get_name_leafdata());
    if (bd_name.is_set || is_set(bd_name.operation)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (cw_disable.is_set || is_set(cw_disable.operation)) leaf_name_data.push_back(cw_disable.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.operation)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (multicast_label.is_set || is_set(multicast_label.operation)) leaf_name_data.push_back(multicast_label.get_name_leafdata());
    if (reoriginate_disabled.is_set || is_set(reoriginate_disabled.operation)) leaf_name_data.push_back(reoriginate_disabled.get_name_leafdata());
    if (rt_export_block_set.is_set || is_set(rt_export_block_set.operation)) leaf_name_data.push_back(rt_export_block_set.get_name_leafdata());
    if (rt_import_block_set.is_set || is_set(rt_import_block_set.operation)) leaf_name_data.push_back(rt_import_block_set.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.operation)) leaf_name_data.push_back(stitching.get_name_leafdata());
    if (table_policy_name.is_set || is_set(table_policy_name.operation)) leaf_name_data.push_back(table_policy_name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (unicast_label.is_set || is_set(unicast_label.operation)) leaf_name_data.push_back(unicast_label.get_name_leafdata());
    if (unknown_unicast_flooding_disabled.is_set || is_set(unknown_unicast_flooding_disabled.operation)) leaf_name_data.push_back(unknown_unicast_flooding_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-label")
    {
        if(flow_label != nullptr)
        {
            children["flow-label"] = flow_label;
        }
        else
        {
            flow_label = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::FlowLabel>();
            flow_label->parent = this;
            children["flow-label"] = flow_label;
        }
        return children.at("flow-label");
    }

    if(child_yang_name == "rd-auto")
    {
        if(rd_auto != nullptr)
        {
            children["rd-auto"] = rd_auto;
        }
        else
        {
            rd_auto = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdAuto>();
            rd_auto->parent = this;
            children["rd-auto"] = rd_auto;
        }
        return children.at("rd-auto");
    }

    if(child_yang_name == "rd-configured")
    {
        if(rd_configured != nullptr)
        {
            children["rd-configured"] = rd_configured;
        }
        else
        {
            rd_configured = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured>();
            rd_configured->parent = this;
            children["rd-configured"] = rd_configured;
        }
        return children.at("rd-configured");
    }

    if(child_yang_name == "rt-auto")
    {
        if(rt_auto != nullptr)
        {
            children["rt-auto"] = rt_auto;
        }
        else
        {
            rt_auto = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto>();
            rt_auto->parent = this;
            children["rt-auto"] = rt_auto;
        }
        return children.at("rt-auto");
    }

    if(child_yang_name == "rt-auto-stitching")
    {
        if(rt_auto_stitching != nullptr)
        {
            children["rt-auto-stitching"] = rt_auto_stitching;
        }
        else
        {
            rt_auto_stitching = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching>();
            rt_auto_stitching->parent = this;
            children["rt-auto-stitching"] = rt_auto_stitching;
        }
        return children.at("rt-auto-stitching");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::Element::get_children()
{
    if(children.find("flow-label") == children.end())
    {
        if(flow_label != nullptr)
        {
            children["flow-label"] = flow_label;
        }
    }

    if(children.find("rd-auto") == children.end())
    {
        if(rd_auto != nullptr)
        {
            children["rd-auto"] = rd_auto;
        }
    }

    if(children.find("rd-configured") == children.end())
    {
        if(rd_configured != nullptr)
        {
            children["rd-configured"] = rd_configured;
        }
    }

    if(children.find("rt-auto") == children.end())
    {
        if(rt_auto != nullptr)
        {
            children["rt-auto"] = rt_auto;
        }
    }

    if(children.find("rt-auto-stitching") == children.end())
    {
        if(rt_auto_stitching != nullptr)
        {
            children["rt-auto-stitching"] = rt_auto_stitching;
        }
    }

    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "advertise-mac")
    {
        advertise_mac = value;
    }
    if(value_path == "aliasing-disabled")
    {
        aliasing_disabled = value;
    }
    if(value_path == "bd-name")
    {
        bd_name = value;
    }
    if(value_path == "cw-disable")
    {
        cw_disable = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "multicast-label")
    {
        multicast_label = value;
    }
    if(value_path == "reoriginate-disabled")
    {
        reoriginate_disabled = value;
    }
    if(value_path == "rt-export-block-set")
    {
        rt_export_block_set = value;
    }
    if(value_path == "rt-import-block-set")
    {
        rt_import_block_set = value;
    }
    if(value_path == "stitching")
    {
        stitching = value;
    }
    if(value_path == "table-policy-name")
    {
        table_policy_name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "unicast-label")
    {
        unicast_label = value;
    }
    if(value_path == "unknown-unicast-flooding-disabled")
    {
        unknown_unicast_flooding_disabled = value;
    }
}

Evpn::Standby::EviDetail::Elements::Element::FlowLabel::FlowLabel()
    :
    global_flow_label{YType::boolean, "global-flow-label"},
    static_flow_label{YType::boolean, "static-flow-label"}
{
    yang_name = "flow-label"; yang_parent_name = "element";
}

Evpn::Standby::EviDetail::Elements::Element::FlowLabel::~FlowLabel()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::FlowLabel::has_data() const
{
    return global_flow_label.is_set
	|| static_flow_label.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::FlowLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(global_flow_label.operation)
	|| is_set(static_flow_label.operation);
}

std::string Evpn::Standby::EviDetail::Elements::Element::FlowLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-label";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::Element::FlowLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowLabel' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_flow_label.is_set || is_set(global_flow_label.operation)) leaf_name_data.push_back(global_flow_label.get_name_leafdata());
    if (static_flow_label.is_set || is_set(static_flow_label.operation)) leaf_name_data.push_back(static_flow_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::FlowLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::Element::FlowLabel::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::FlowLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "global-flow-label")
    {
        global_flow_label = value;
    }
    if(value_path == "static-flow-label")
    {
        static_flow_label = value;
    }
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::RdAuto()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto_>())
	,four_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs>())
	,two_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs>())
	,v4_addr(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr>())
{
    auto_->parent = this;
    children["auto"] = auto_;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "rd-auto"; yang_parent_name = "element";
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::~RdAuto()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::has_operation() const
{
    return is_set(operation)
	|| is_set(rd.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdAuto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-auto";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::Element::RdAuto::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RdAuto' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RdAuto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto")
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
        else
        {
            auto_ = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto_>();
            auto_->parent = this;
            children["auto"] = auto_;
        }
        return children.at("auto");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::Element::RdAuto::get_children()
{
    if(children.find("auto") == children.end())
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rd")
    {
        rd = value;
    }
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto_::Auto_()
    :
    auto_index{YType::uint16, "auto-index"},
    router_id{YType::str, "router-id"}
{
    yang_name = "auto"; yang_parent_name = "rd-auto";
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto_::~Auto_()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto_::has_data() const
{
    return auto_index.is_set
	|| router_id.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_index.operation)
	|| is_set(router_id.operation);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auto_' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_index.is_set || is_set(auto_index.operation)) leaf_name_data.push_back(auto_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto_::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-index")
    {
        auto_index = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "rd-auto";
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "rd-auto";
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::~FourByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FourByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "rd-auto";
}

Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::~V4Addr()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Addr' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdAuto::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::RdConfigured()
    :
    rd{YType::enumeration, "rd"}
    	,
    auto_(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_>())
	,four_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs>())
	,two_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs>())
	,v4_addr(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr>())
{
    auto_->parent = this;
    children["auto"] = auto_;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "rd-configured"; yang_parent_name = "element";
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::~RdConfigured()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::has_data() const
{
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::has_operation() const
{
    return is_set(operation)
	|| is_set(rd.operation)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdConfigured::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-configured";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::Element::RdConfigured::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RdConfigured' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.operation)) leaf_name_data.push_back(rd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto")
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
        else
        {
            auto_ = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_>();
            auto_->parent = this;
            children["auto"] = auto_;
        }
        return children.at("auto");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::Element::RdConfigured::get_children()
{
    if(children.find("auto") == children.end())
    {
        if(auto_ != nullptr)
        {
            children["auto"] = auto_;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rd")
    {
        rd = value;
    }
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_::Auto_()
    :
    auto_index{YType::uint16, "auto-index"},
    router_id{YType::str, "router-id"}
{
    yang_name = "auto"; yang_parent_name = "rd-configured";
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_::~Auto_()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_::has_data() const
{
    return auto_index.is_set
	|| router_id.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_index.operation)
	|| is_set(router_id.operation);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auto_' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_index.is_set || is_set(auto_index.operation)) leaf_name_data.push_back(auto_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::Auto_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-index")
    {
        auto_index = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "rd-configured";
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "rd-configured";
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::~FourByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FourByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "rd-configured";
}

Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::~V4Addr()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Addr' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RdConfigured::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::RtAuto()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport>())
	,four_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs>())
	,two_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs>())
	,v4_addr(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr>())
{
    es_import->parent = this;
    children["es-import"] = es_import;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "rt-auto"; yang_parent_name = "element";
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::~RtAuto()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::has_operation() const
{
    return is_set(operation)
	|| is_set(rt.operation)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAuto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-auto";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::Element::RtAuto::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtAuto' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.operation)) leaf_name_data.push_back(rt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RtAuto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "es-import")
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
        else
        {
            es_import = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport>();
            es_import->parent = this;
            children["es-import"] = es_import;
        }
        return children.at("es-import");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::Element::RtAuto::get_children()
{
    if(children.find("es-import") == children.end())
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rt")
    {
        rt = value;
    }
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "rt-auto";
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "rt-auto";
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::~FourByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FourByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "rt-auto";
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::~V4Addr()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Addr' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{
    yang_name = "es-import"; yang_parent_name = "rt-auto";
}

Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::~EsImport()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::has_operation() const
{
    return is_set(operation)
	|| is_set(high_bytes.operation)
	|| is_set(low_bytes.operation);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsImport' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.operation)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.operation)) leaf_name_data.push_back(low_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAuto::EsImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
    }
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::RtAutoStitching()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport>())
	,four_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs>())
	,two_byte_as(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs>())
	,v4_addr(std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr>())
{
    es_import->parent = this;
    children["es-import"] = es_import;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "rt-auto-stitching"; yang_parent_name = "element";
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::~RtAutoStitching()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::has_operation() const
{
    return is_set(operation)
	|| is_set(rt.operation)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-auto-stitching";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RtAutoStitching' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.operation)) leaf_name_data.push_back(rt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "es-import")
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
        else
        {
            es_import = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport>();
            es_import->parent = this;
            children["es-import"] = es_import;
        }
        return children.at("es-import");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::get_children()
{
    if(children.find("es-import") == children.end())
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rt")
    {
        rt = value;
    }
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "rt-auto-stitching";
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "rt-auto-stitching";
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::~FourByteAs()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FourByteAs' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "rt-auto-stitching";
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr::~V4Addr()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V4Addr' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{
    yang_name = "es-import"; yang_parent_name = "rt-auto-stitching";
}

Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport::~EsImport()
{
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport::has_operation() const
{
    return is_set(operation)
	|| is_set(high_bytes.operation)
	|| is_set(low_bytes.operation);
}

std::string Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsImport' in Cisco_IOS_XR_evpn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.operation)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.operation)) leaf_name_data.push_back(low_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::Elements::Element::RtAutoStitching::EsImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
    }
}

Evpn::Standby::EviDetail::EviChildren::EviChildren()
    :
    ethernet_auto_discoveries(std::make_shared<Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries>())
	,inclusive_multicasts(std::make_shared<Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts>())
	,macs(std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs>())
	,neighbors(std::make_shared<Evpn::Standby::EviDetail::EviChildren::Neighbors>())
	,route_targets(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets>())
{
    ethernet_auto_discoveries->parent = this;
    children["ethernet-auto-discoveries"] = ethernet_auto_discoveries;

    inclusive_multicasts->parent = this;
    children["inclusive-multicasts"] = inclusive_multicasts;

    macs->parent = this;
    children["macs"] = macs;

    neighbors->parent = this;
    children["neighbors"] = neighbors;

    route_targets->parent = this;
    children["route-targets"] = route_targets;

    yang_name = "evi-children"; yang_parent_name = "evi-detail";
}

Evpn::Standby::EviDetail::EviChildren::~EviChildren()
{
}

bool Evpn::Standby::EviDetail::EviChildren::has_data() const
{
    return (ethernet_auto_discoveries !=  nullptr && ethernet_auto_discoveries->has_data())
	|| (inclusive_multicasts !=  nullptr && inclusive_multicasts->has_data())
	|| (macs !=  nullptr && macs->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (route_targets !=  nullptr && route_targets->has_data());
}

bool Evpn::Standby::EviDetail::EviChildren::has_operation() const
{
    return is_set(operation)
	|| (ethernet_auto_discoveries !=  nullptr && ethernet_auto_discoveries->has_operation())
	|| (inclusive_multicasts !=  nullptr && inclusive_multicasts->has_operation())
	|| (macs !=  nullptr && macs->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (route_targets !=  nullptr && route_targets->has_operation());
}

std::string Evpn::Standby::EviDetail::EviChildren::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi-children";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::EviChildren::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ethernet-auto-discoveries")
    {
        if(ethernet_auto_discoveries != nullptr)
        {
            children["ethernet-auto-discoveries"] = ethernet_auto_discoveries;
        }
        else
        {
            ethernet_auto_discoveries = std::make_shared<Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries>();
            ethernet_auto_discoveries->parent = this;
            children["ethernet-auto-discoveries"] = ethernet_auto_discoveries;
        }
        return children.at("ethernet-auto-discoveries");
    }

    if(child_yang_name == "inclusive-multicasts")
    {
        if(inclusive_multicasts != nullptr)
        {
            children["inclusive-multicasts"] = inclusive_multicasts;
        }
        else
        {
            inclusive_multicasts = std::make_shared<Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts>();
            inclusive_multicasts->parent = this;
            children["inclusive-multicasts"] = inclusive_multicasts;
        }
        return children.at("inclusive-multicasts");
    }

    if(child_yang_name == "macs")
    {
        if(macs != nullptr)
        {
            children["macs"] = macs;
        }
        else
        {
            macs = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs>();
            macs->parent = this;
            children["macs"] = macs;
        }
        return children.at("macs");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    if(child_yang_name == "route-targets")
    {
        if(route_targets != nullptr)
        {
            children["route-targets"] = route_targets;
        }
        else
        {
            route_targets = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets>();
            route_targets->parent = this;
            children["route-targets"] = route_targets;
        }
        return children.at("route-targets");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::EviChildren::get_children()
{
    if(children.find("ethernet-auto-discoveries") == children.end())
    {
        if(ethernet_auto_discoveries != nullptr)
        {
            children["ethernet-auto-discoveries"] = ethernet_auto_discoveries;
        }
    }

    if(children.find("inclusive-multicasts") == children.end())
    {
        if(inclusive_multicasts != nullptr)
        {
            children["inclusive-multicasts"] = inclusive_multicasts;
        }
    }

    if(children.find("macs") == children.end())
    {
        if(macs != nullptr)
        {
            children["macs"] = macs;
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
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

void Evpn::Standby::EviDetail::EviChildren::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "evi-children";
}

Evpn::Standby::EviDetail::EviChildren::Neighbors::~Neighbors()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Standby::EviDetail::EviChildren::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::EviChildren::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::EviChildren::Neighbors::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Standby::EviDetail::EviChildren::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::Neighbor()
    :
    evi{YType::int32, "evi"},
    evi_xr{YType::uint32, "evi-xr"},
    neighbor{YType::str, "neighbor"},
    neighbor_ip{YType::str, "neighbor-ip"}
{
    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::~Neighbor()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::has_data() const
{
    return evi.is_set
	|| evi_xr.is_set
	|| neighbor.is_set
	|| neighbor_ip.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(evi.operation)
	|| is_set(evi_xr.operation)
	|| is_set(neighbor.operation)
	|| is_set(neighbor_ip.operation);
}

std::string Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.operation)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (neighbor_ip.is_set || is_set(neighbor_ip.operation)) leaf_name_data.push_back(neighbor_ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::EviChildren::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
    }
    if(value_path == "neighbor-ip")
    {
        neighbor_ip = value;
    }
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscoveries()
{
    yang_name = "ethernet-auto-discoveries"; yang_parent_name = "evi-children";
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::~EthernetAutoDiscoveries()
{
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::has_data() const
{
    for (std::size_t index=0; index<ethernet_auto_discovery.size(); index++)
    {
        if(ethernet_auto_discovery[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::has_operation() const
{
    for (std::size_t index=0; index<ethernet_auto_discovery.size(); index++)
    {
        if(ethernet_auto_discovery[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-auto-discoveries";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ethernet-auto-discovery")
    {
        for(auto const & c : ethernet_auto_discovery)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery>();
        c->parent = this;
        ethernet_auto_discovery.push_back(std::move(c));
        children[segment_path] = ethernet_auto_discovery.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::get_children()
{
    for (auto const & c : ethernet_auto_discovery)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::EthernetAutoDiscovery()
    :
    encap{YType::uint8, "encap"},
    esi1{YType::str, "esi1"},
    esi2{YType::str, "esi2"},
    esi3{YType::str, "esi3"},
    esi4{YType::str, "esi4"},
    esi5{YType::str, "esi5"},
    ethernet_segment_identifier{YType::uint8, "ethernet-segment-identifier"},
    ethernet_tag{YType::int32, "ethernet-tag"},
    ethernet_tag_xr{YType::uint32, "ethernet-tag-xr"},
    ethernet_vpnid{YType::uint32, "ethernet-vpnid"},
    evi{YType::int32, "evi"},
    is_local_ead{YType::boolean, "is-local-ead"},
    local_label{YType::uint32, "local-label"},
    local_next_hop{YType::str, "local-next-hop"},
    num_paths{YType::uint32, "num-paths"},
    redundancy_single_active{YType::boolean, "redundancy-single-active"}
{
    yang_name = "ethernet-auto-discovery"; yang_parent_name = "ethernet-auto-discoveries";
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::~EthernetAutoDiscovery()
{
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::has_data() const
{
    for (std::size_t index=0; index<path_buffer.size(); index++)
    {
        if(path_buffer[index]->has_data())
            return true;
    }
    for (auto const & leaf : ethernet_segment_identifier.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return encap.is_set
	|| esi1.is_set
	|| esi2.is_set
	|| esi3.is_set
	|| esi4.is_set
	|| esi5.is_set
	|| ethernet_tag.is_set
	|| ethernet_tag_xr.is_set
	|| ethernet_vpnid.is_set
	|| evi.is_set
	|| is_local_ead.is_set
	|| local_label.is_set
	|| local_next_hop.is_set
	|| num_paths.is_set
	|| redundancy_single_active.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::has_operation() const
{
    for (std::size_t index=0; index<path_buffer.size(); index++)
    {
        if(path_buffer[index]->has_operation())
            return true;
    }
    for (auto const & leaf : ethernet_segment_identifier.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(encap.operation)
	|| is_set(esi1.operation)
	|| is_set(esi2.operation)
	|| is_set(esi3.operation)
	|| is_set(esi4.operation)
	|| is_set(esi5.operation)
	|| is_set(ethernet_segment_identifier.operation)
	|| is_set(ethernet_tag.operation)
	|| is_set(ethernet_tag_xr.operation)
	|| is_set(ethernet_vpnid.operation)
	|| is_set(evi.operation)
	|| is_set(is_local_ead.operation)
	|| is_set(local_label.operation)
	|| is_set(local_next_hop.operation)
	|| is_set(num_paths.operation)
	|| is_set(redundancy_single_active.operation);
}

std::string Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-auto-discovery";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/ethernet-auto-discoveries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encap.is_set || is_set(encap.operation)) leaf_name_data.push_back(encap.get_name_leafdata());
    if (esi1.is_set || is_set(esi1.operation)) leaf_name_data.push_back(esi1.get_name_leafdata());
    if (esi2.is_set || is_set(esi2.operation)) leaf_name_data.push_back(esi2.get_name_leafdata());
    if (esi3.is_set || is_set(esi3.operation)) leaf_name_data.push_back(esi3.get_name_leafdata());
    if (esi4.is_set || is_set(esi4.operation)) leaf_name_data.push_back(esi4.get_name_leafdata());
    if (esi5.is_set || is_set(esi5.operation)) leaf_name_data.push_back(esi5.get_name_leafdata());
    if (ethernet_tag.is_set || is_set(ethernet_tag.operation)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (ethernet_tag_xr.is_set || is_set(ethernet_tag_xr.operation)) leaf_name_data.push_back(ethernet_tag_xr.get_name_leafdata());
    if (ethernet_vpnid.is_set || is_set(ethernet_vpnid.operation)) leaf_name_data.push_back(ethernet_vpnid.get_name_leafdata());
    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (is_local_ead.is_set || is_set(is_local_ead.operation)) leaf_name_data.push_back(is_local_ead.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (local_next_hop.is_set || is_set(local_next_hop.operation)) leaf_name_data.push_back(local_next_hop.get_name_leafdata());
    if (num_paths.is_set || is_set(num_paths.operation)) leaf_name_data.push_back(num_paths.get_name_leafdata());
    if (redundancy_single_active.is_set || is_set(redundancy_single_active.operation)) leaf_name_data.push_back(redundancy_single_active.get_name_leafdata());

    auto ethernet_segment_identifier_name_datas = ethernet_segment_identifier.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ethernet_segment_identifier_name_datas.begin(), ethernet_segment_identifier_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-buffer")
    {
        for(auto const & c : path_buffer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer>();
        c->parent = this;
        path_buffer.push_back(std::move(c));
        children[segment_path] = path_buffer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::get_children()
{
    for (auto const & c : path_buffer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encap")
    {
        encap = value;
    }
    if(value_path == "esi1")
    {
        esi1 = value;
    }
    if(value_path == "esi2")
    {
        esi2 = value;
    }
    if(value_path == "esi3")
    {
        esi3 = value;
    }
    if(value_path == "esi4")
    {
        esi4 = value;
    }
    if(value_path == "esi5")
    {
        esi5 = value;
    }
    if(value_path == "ethernet-segment-identifier")
    {
        ethernet_segment_identifier.append(value);
    }
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr = value;
    }
    if(value_path == "ethernet-vpnid")
    {
        ethernet_vpnid = value;
    }
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "is-local-ead")
    {
        is_local_ead = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "local-next-hop")
    {
        local_next_hop = value;
    }
    if(value_path == "num-paths")
    {
        num_paths = value;
    }
    if(value_path == "redundancy-single-active")
    {
        redundancy_single_active = value;
    }
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::PathBuffer()
    :
    next_hop{YType::str, "next-hop"},
    output_label{YType::uint32, "output-label"}
{
    yang_name = "path-buffer"; yang_parent_name = "ethernet-auto-discovery";
}

Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::~PathBuffer()
{
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::has_data() const
{
    return next_hop.is_set
	|| output_label.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop.operation)
	|| is_set(output_label.operation);
}

std::string Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-buffer";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/ethernet-auto-discoveries/ethernet-auto-discovery/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.operation)) leaf_name_data.push_back(output_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::EviChildren::EthernetAutoDiscoveries::EthernetAutoDiscovery::PathBuffer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "output-label")
    {
        output_label = value;
    }
}

Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticasts()
{
    yang_name = "inclusive-multicasts"; yang_parent_name = "evi-children";
}

Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::~InclusiveMulticasts()
{
}

bool Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::has_data() const
{
    for (std::size_t index=0; index<inclusive_multicast.size(); index++)
    {
        if(inclusive_multicast[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::has_operation() const
{
    for (std::size_t index=0; index<inclusive_multicast.size(); index++)
    {
        if(inclusive_multicast[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inclusive-multicasts";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inclusive-multicast")
    {
        for(auto const & c : inclusive_multicast)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast>();
        c->parent = this;
        inclusive_multicast.push_back(std::move(c));
        children[segment_path] = inclusive_multicast.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::get_children()
{
    for (auto const & c : inclusive_multicast)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::InclusiveMulticast()
    :
    ethernet_tag{YType::int32, "ethernet-tag"},
    ethernet_tag_xr{YType::uint32, "ethernet-tag-xr"},
    evi{YType::int32, "evi"},
    evi_xr{YType::uint32, "evi-xr"},
    is_local_entry{YType::boolean, "is-local-entry"},
    next_hop{YType::str, "next-hop"},
    originating_ip{YType::str, "originating-ip"},
    originating_ip_xr{YType::str, "originating-ip-xr"},
    output_label{YType::uint32, "output-label"}
{
    yang_name = "inclusive-multicast"; yang_parent_name = "inclusive-multicasts";
}

Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::~InclusiveMulticast()
{
}

bool Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::has_data() const
{
    return ethernet_tag.is_set
	|| ethernet_tag_xr.is_set
	|| evi.is_set
	|| evi_xr.is_set
	|| is_local_entry.is_set
	|| next_hop.is_set
	|| originating_ip.is_set
	|| originating_ip_xr.is_set
	|| output_label.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::has_operation() const
{
    return is_set(operation)
	|| is_set(ethernet_tag.operation)
	|| is_set(ethernet_tag_xr.operation)
	|| is_set(evi.operation)
	|| is_set(evi_xr.operation)
	|| is_set(is_local_entry.operation)
	|| is_set(next_hop.operation)
	|| is_set(originating_ip.operation)
	|| is_set(originating_ip_xr.operation)
	|| is_set(output_label.operation);
}

std::string Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inclusive-multicast";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/inclusive-multicasts/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ethernet_tag.is_set || is_set(ethernet_tag.operation)) leaf_name_data.push_back(ethernet_tag.get_name_leafdata());
    if (ethernet_tag_xr.is_set || is_set(ethernet_tag_xr.operation)) leaf_name_data.push_back(ethernet_tag_xr.get_name_leafdata());
    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.operation)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (is_local_entry.is_set || is_set(is_local_entry.operation)) leaf_name_data.push_back(is_local_entry.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (originating_ip.is_set || is_set(originating_ip.operation)) leaf_name_data.push_back(originating_ip.get_name_leafdata());
    if (originating_ip_xr.is_set || is_set(originating_ip_xr.operation)) leaf_name_data.push_back(originating_ip_xr.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.operation)) leaf_name_data.push_back(output_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::EviChildren::InclusiveMulticasts::InclusiveMulticast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ethernet-tag")
    {
        ethernet_tag = value;
    }
    if(value_path == "ethernet-tag-xr")
    {
        ethernet_tag_xr = value;
    }
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
    }
    if(value_path == "is-local-entry")
    {
        is_local_entry = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "originating-ip")
    {
        originating_ip = value;
    }
    if(value_path == "originating-ip-xr")
    {
        originating_ip_xr = value;
    }
    if(value_path == "output-label")
    {
        output_label = value;
    }
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTargets()
{
    yang_name = "route-targets"; yang_parent_name = "evi-children";
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::~RouteTargets()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::has_data() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::has_operation() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-targets";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::EviChildren::RouteTargets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-target")
    {
        for(auto const & c : route_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget>();
        c->parent = this;
        route_target.push_back(std::move(c));
        children[segment_path] = route_target.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::EviChildren::RouteTargets::get_children()
{
    for (auto const & c : route_target)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::set_value(const std::string & value_path, std::string value)
{
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget()
    :
    addr_index{YType::uint32, "addr-index"},
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    bd_name{YType::str, "bd-name"},
    evi{YType::int32, "evi"},
    evi_xr{YType::uint32, "evi-xr"},
    format{YType::enumeration, "format"},
    role{YType::enumeration, "role"},
    route_target_role{YType::enumeration, "route-target-role"},
    route_target_stitching{YType::boolean, "route-target-stitching"},
    type{YType::enumeration, "type"}
    	,
    route_target(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_>())
{
    route_target->parent = this;
    children["route-target"] = route_target;

    yang_name = "route-target"; yang_parent_name = "route-targets";
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::~RouteTarget()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::has_data() const
{
    return addr_index.is_set
	|| address.is_set
	|| as.is_set
	|| as_index.is_set
	|| bd_name.is_set
	|| evi.is_set
	|| evi_xr.is_set
	|| format.is_set
	|| role.is_set
	|| route_target_role.is_set
	|| route_target_stitching.is_set
	|| type.is_set
	|| (route_target !=  nullptr && route_target->has_data());
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::has_operation() const
{
    return is_set(operation)
	|| is_set(addr_index.operation)
	|| is_set(address.operation)
	|| is_set(as.operation)
	|| is_set(as_index.operation)
	|| is_set(bd_name.operation)
	|| is_set(evi.operation)
	|| is_set(evi_xr.operation)
	|| is_set(format.operation)
	|| is_set(role.operation)
	|| is_set(route_target_role.operation)
	|| is_set(route_target_stitching.operation)
	|| is_set(type.operation)
	|| (route_target !=  nullptr && route_target->has_operation());
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/route-targets/" << get_segment_path();
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
    if (bd_name.is_set || is_set(bd_name.operation)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (evi.is_set || is_set(evi.operation)) leaf_name_data.push_back(evi.get_name_leafdata());
    if (evi_xr.is_set || is_set(evi_xr.operation)) leaf_name_data.push_back(evi_xr.get_name_leafdata());
    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());
    if (route_target_role.is_set || is_set(route_target_role.operation)) leaf_name_data.push_back(route_target_role.get_name_leafdata());
    if (route_target_stitching.is_set || is_set(route_target_stitching.operation)) leaf_name_data.push_back(route_target_stitching.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-target")
    {
        if(route_target != nullptr)
        {
            children["route-target"] = route_target;
        }
        else
        {
            route_target = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_>();
            route_target->parent = this;
            children["route-target"] = route_target;
        }
        return children.at("route-target");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::get_children()
{
    if(children.find("route-target") == children.end())
    {
        if(route_target != nullptr)
        {
            children["route-target"] = route_target;
        }
    }

    return children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::set_value(const std::string & value_path, std::string value)
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
    if(value_path == "bd-name")
    {
        bd_name = value;
    }
    if(value_path == "evi")
    {
        evi = value;
    }
    if(value_path == "evi-xr")
    {
        evi_xr = value;
    }
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
    if(value_path == "route-target-role")
    {
        route_target_role = value;
    }
    if(value_path == "route-target-stitching")
    {
        route_target_stitching = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::RouteTarget_()
    :
    rt{YType::enumeration, "rt"}
    	,
    es_import(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport>())
	,four_byte_as(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs>())
	,two_byte_as(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs>())
	,v4_addr(std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr>())
{
    es_import->parent = this;
    children["es-import"] = es_import;

    four_byte_as->parent = this;
    children["four-byte-as"] = four_byte_as;

    two_byte_as->parent = this;
    children["two-byte-as"] = two_byte_as;

    v4_addr->parent = this;
    children["v4-addr"] = v4_addr;

    yang_name = "route-target"; yang_parent_name = "route-target";
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::~RouteTarget_()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::has_data() const
{
    return rt.is_set
	|| (es_import !=  nullptr && es_import->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::has_operation() const
{
    return is_set(operation)
	|| is_set(rt.operation)
	|| (es_import !=  nullptr && es_import->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/route-targets/route-target/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rt.is_set || is_set(rt.operation)) leaf_name_data.push_back(rt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "es-import")
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
        else
        {
            es_import = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport>();
            es_import->parent = this;
            children["es-import"] = es_import;
        }
        return children.at("es-import");
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
        else
        {
            four_byte_as = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs>();
            four_byte_as->parent = this;
            children["four-byte-as"] = four_byte_as;
        }
        return children.at("four-byte-as");
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
        else
        {
            two_byte_as = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs>();
            two_byte_as->parent = this;
            children["two-byte-as"] = two_byte_as;
        }
        return children.at("two-byte-as");
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
        else
        {
            v4_addr = std::make_shared<Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr>();
            v4_addr->parent = this;
            children["v4-addr"] = v4_addr;
        }
        return children.at("v4-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::get_children()
{
    if(children.find("es-import") == children.end())
    {
        if(es_import != nullptr)
        {
            children["es-import"] = es_import;
        }
    }

    if(children.find("four-byte-as") == children.end())
    {
        if(four_byte_as != nullptr)
        {
            children["four-byte-as"] = four_byte_as;
        }
    }

    if(children.find("two-byte-as") == children.end())
    {
        if(two_byte_as != nullptr)
        {
            children["two-byte-as"] = two_byte_as;
        }
    }

    if(children.find("v4-addr") == children.end())
    {
        if(v4_addr != nullptr)
        {
            children["v4-addr"] = v4_addr;
        }
    }

    return children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rt")
    {
        rt = value;
    }
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::TwoByteAs()
    :
    four_byte_index{YType::uint32, "four-byte-index"},
    two_byte_as{YType::uint16, "two-byte-as"}
{
    yang_name = "two-byte-as"; yang_parent_name = "route-target";
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::~TwoByteAs()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::has_data() const
{
    return four_byte_index.is_set
	|| two_byte_as.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_index.operation)
	|| is_set(two_byte_as.operation);
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/route-targets/route-target/route-target/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_index.is_set || is_set(four_byte_index.operation)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());
    if (two_byte_as.is_set || is_set(two_byte_as.operation)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::TwoByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
    }
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
    }
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "four-byte-as"; yang_parent_name = "route-target";
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::~FourByteAs()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::has_data() const
{
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(four_byte_as.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/route-targets/route-target/route-target/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.operation)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::FourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{
    yang_name = "v4-addr"; yang_parent_name = "route-target";
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::~V4Addr()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::has_data() const
{
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(two_byte_index.operation);
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/route-targets/route-target/route-target/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.operation)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::V4Addr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
    }
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::EsImport()
    :
    high_bytes{YType::uint32, "high-bytes"},
    low_bytes{YType::uint16, "low-bytes"}
{
    yang_name = "es-import"; yang_parent_name = "route-target";
}

Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::~EsImport()
{
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::has_data() const
{
    return high_bytes.is_set
	|| low_bytes.is_set;
}

bool Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::has_operation() const
{
    return is_set(operation)
	|| is_set(high_bytes.operation)
	|| is_set(low_bytes.operation);
}

std::string Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "es-import";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/route-targets/route-target/route-target/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (high_bytes.is_set || is_set(high_bytes.operation)) leaf_name_data.push_back(high_bytes.get_name_leafdata());
    if (low_bytes.is_set || is_set(low_bytes.operation)) leaf_name_data.push_back(low_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::get_children()
{
    return children;
}

void Evpn::Standby::EviDetail::EviChildren::RouteTargets::RouteTarget::RouteTarget_::EsImport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "high-bytes")
    {
        high_bytes = value;
    }
    if(value_path == "low-bytes")
    {
        low_bytes = value;
    }
}

Evpn::Standby::EviDetail::EviChildren::Macs::Macs()
{
    yang_name = "macs"; yang_parent_name = "evi-children";
}

Evpn::Standby::EviDetail::EviChildren::Macs::~Macs()
{
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::has_data() const
{
    for (std::size_t index=0; index<mac.size(); index++)
    {
        if(mac[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::Standby::EviDetail::EviChildren::Macs::has_operation() const
{
    for (std::size_t index=0; index<mac.size(); index++)
    {
        if(mac[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::Standby::EviDetail::EviChildren::Macs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "macs";

    return path_buffer.str();

}

EntityPath Evpn::Standby::EviDetail::EviChildren::Macs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-evpn-oper:evpn/standby/evi-detail/evi-children/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::Standby::EviDetail::EviChildren::Macs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mac")
    {
        for(auto const & c : mac)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::Standby::EviDetail::EviChildren::Macs::Mac>();
        c->parent = this;
        mac.push_back(std::move(c));
        children[segment_path] = mac.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::Standby::EviDetail::EviChildren::Macs::get_children()
{
    for (auto const & c : mac)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::Standby::EviDetail::EviChildren::Macs::set_value(const std::string & value_path, std::string value)
{
}

const Enum::YLeaf L2VpnAdRtRoleEnum::both {0, "both"};
const Enum::YLeaf L2VpnAdRtRoleEnum::import {1, "import"};
const Enum::YLeaf L2VpnAdRtRoleEnum::export_ {2, "export"};

const Enum::YLeaf L2VpnEvpnSmacSrcEnum::invalid {0, "invalid"};
const Enum::YLeaf L2VpnEvpnSmacSrcEnum::not_applicable {1, "not-applicable"};
const Enum::YLeaf L2VpnEvpnSmacSrcEnum::local {2, "local"};
const Enum::YLeaf L2VpnEvpnSmacSrcEnum::pbb_bsa {3, "pbb-bsa"};
const Enum::YLeaf L2VpnEvpnSmacSrcEnum::esi {4, "esi"};
const Enum::YLeaf L2VpnEvpnSmacSrcEnum::esi_invalid {5, "esi-invalid"};
const Enum::YLeaf L2VpnEvpnSmacSrcEnum::pbb_bsa_overrride {6, "pbb-bsa-overrride"};

const Enum::YLeaf L2VpnRgStateEnum::unknown {0, "unknown"};
const Enum::YLeaf L2VpnRgStateEnum::active {1, "active"};
const Enum::YLeaf L2VpnRgStateEnum::standby {2, "standby"};

const Enum::YLeaf BgpRouteTargetRoleEnum::both {0, "both"};
const Enum::YLeaf BgpRouteTargetRoleEnum::import {1, "import"};
const Enum::YLeaf BgpRouteTargetRoleEnum::export_ {2, "export"};

const Enum::YLeaf L2VpnEvpnMfModeEnum::invalid {0, "invalid"};
const Enum::YLeaf L2VpnEvpnMfModeEnum::tcn_stp {1, "tcn-stp"};
const Enum::YLeaf L2VpnEvpnMfModeEnum::mvrp {2, "mvrp"};

const Enum::YLeaf L2VpnEvpnLbModeEnum::invalid_load_balancing {0, "invalid-load-balancing"};
const Enum::YLeaf L2VpnEvpnLbModeEnum::single_homed {1, "single-homed"};
const Enum::YLeaf L2VpnEvpnLbModeEnum::multi_homed_aa_per_flow {2, "multi-homed-aa-per-flow"};
const Enum::YLeaf L2VpnEvpnLbModeEnum::multi_homed_aa_per_service {3, "multi-homed-aa-per-service"};

const Enum::YLeaf L2VpnAdRtEnum::l2vpn_ad_rt_none {0, "l2vpn-ad-rt-none"};
const Enum::YLeaf L2VpnAdRtEnum::l2vpn_ad_rt_as {1, "l2vpn-ad-rt-as"};
const Enum::YLeaf L2VpnAdRtEnum::l2vpn_ad_rt_4byte_as {2, "l2vpn-ad-rt-4byte-as"};
const Enum::YLeaf L2VpnAdRtEnum::l2vpn_ad_rt_v4_addr {3, "l2vpn-ad-rt-v4-addr"};
const Enum::YLeaf L2VpnAdRtEnum::es_import {1538, "es-import"};

const Enum::YLeaf L2VpnEvpnScModeEnum::invalid {0, "invalid"};
const Enum::YLeaf L2VpnEvpnScModeEnum::auto_ {1, "auto"};
const Enum::YLeaf L2VpnEvpnScModeEnum::manual {2, "manual"};

const Enum::YLeaf L2VpnEvpnRtOriginEnum::invalid {0, "invalid"};
const Enum::YLeaf L2VpnEvpnRtOriginEnum::extracted {1, "extracted"};
const Enum::YLeaf L2VpnEvpnRtOriginEnum::configured {2, "configured"};

const Enum::YLeaf L2VpnEvpnScEnum::not_applicable {0, "not-applicable"};
const Enum::YLeaf L2VpnEvpnScEnum::evi {1, "evi"};
const Enum::YLeaf L2VpnEvpnScEnum::isid {2, "isid"};
const Enum::YLeaf L2VpnEvpnScEnum::evpn_bag_sc_type_max {3, "evpn-bag-sc-type-max"};

const Enum::YLeaf EvpnEnum::evpn_type_invalid {0, "evpn-type-invalid"};
const Enum::YLeaf EvpnEnum::evpn_type_evpn {1, "evpn-type-evpn"};
const Enum::YLeaf EvpnEnum::evpn_type_pbb_evpn {2, "evpn-type-pbb-evpn"};
const Enum::YLeaf EvpnEnum::evpn_type_evpn_vpws_vlan_unaware {3, "evpn-type-evpn-vpws-vlan-unaware"};
const Enum::YLeaf EvpnEnum::evpn_type_evpn_vpws_vlan_aware {4, "evpn-type-evpn-vpws-vlan-aware"};
const Enum::YLeaf EvpnEnum::evpn_type_max {5, "evpn-type-max"};

const Enum::YLeaf BgpRouteTargetFormatEnum::none {0, "none"};
const Enum::YLeaf BgpRouteTargetFormatEnum::two_byte_as {1, "two-byte-as"};
const Enum::YLeaf BgpRouteTargetFormatEnum::four_byte_as {2, "four-byte-as"};
const Enum::YLeaf BgpRouteTargetFormatEnum::ipv4_address {3, "ipv4-address"};

const Enum::YLeaf L2VpnAdRdEnum::l2vpn_ad_rd_none {0, "l2vpn-ad-rd-none"};
const Enum::YLeaf L2VpnAdRdEnum::l2vpn_ad_rd_auto {1, "l2vpn-ad-rd-auto"};
const Enum::YLeaf L2VpnAdRdEnum::l2vpn_ad_rd_as {2, "l2vpn-ad-rd-as"};
const Enum::YLeaf L2VpnAdRdEnum::l2vpn_ad_rd_4byte_as {3, "l2vpn-ad-rd-4byte-as"};
const Enum::YLeaf L2VpnAdRdEnum::l2vpn_ad_rd_v4_addr {4, "l2vpn-ad-rd-v4-addr"};

const Enum::YLeaf L2VpnEvpnEsiEnum::esi_type0 {0, "esi-type0"};
const Enum::YLeaf L2VpnEvpnEsiEnum::esi_type1 {1, "esi-type1"};
const Enum::YLeaf L2VpnEvpnEsiEnum::esi_type2 {2, "esi-type2"};
const Enum::YLeaf L2VpnEvpnEsiEnum::esi_type3 {3, "esi-type3"};
const Enum::YLeaf L2VpnEvpnEsiEnum::esi_type4 {4, "esi-type4"};
const Enum::YLeaf L2VpnEvpnEsiEnum::esi_type5 {5, "esi-type5"};
const Enum::YLeaf L2VpnEvpnEsiEnum::l2vpn_evpn_esi_type_legacy {128, "l2vpn-evpn-esi-type-legacy"};
const Enum::YLeaf L2VpnEvpnEsiEnum::l2vpn_evpn_esi_type_override {129, "l2vpn-evpn-esi-type-override"};
const Enum::YLeaf L2VpnEvpnEsiEnum::esi_type_invalid {255, "esi-type-invalid"};

const Enum::YLeaf BgpRouteTargetEnum::no_stitching {0, "no-stitching"};
const Enum::YLeaf BgpRouteTargetEnum::stitching {1, "stitching"};


}
}

