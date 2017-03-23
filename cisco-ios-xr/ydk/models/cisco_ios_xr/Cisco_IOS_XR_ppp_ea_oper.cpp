
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ppp_ea_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ppp_ea_oper {

Pppea::Pppea()
    :
    nodes(std::make_shared<Pppea::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "pppea"; yang_parent_name = "Cisco-IOS-XR-ppp-ea-oper";
}

Pppea::~Pppea()
{
}

bool Pppea::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Pppea::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Pppea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ea-oper:pppea";

    return path_buffer.str();

}

EntityPath Pppea::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Pppea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
        else
        {
            nodes = std::make_shared<Pppea::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pppea::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
    }

    return children;
}

void Pppea::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Pppea::clone_ptr() const
{
    return std::make_shared<Pppea>();
}

std::string Pppea::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Pppea::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Pppea::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Pppea::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "pppea";
}

Pppea::Nodes::~Nodes()
{
}

bool Pppea::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Pppea::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pppea::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Pppea::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ppp-ea-oper:pppea/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppea::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Pppea::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pppea::Nodes::get_children()
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

void Pppea::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Pppea::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    ea_interface_names(std::make_shared<Pppea::Nodes::Node::EaInterfaceNames>())
{
    ea_interface_names->parent = this;
    children["ea-interface-names"] = ea_interface_names;

    yang_name = "node"; yang_parent_name = "nodes";
}

Pppea::Nodes::Node::~Node()
{
}

bool Pppea::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (ea_interface_names !=  nullptr && ea_interface_names->has_data());
}

bool Pppea::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (ea_interface_names !=  nullptr && ea_interface_names->has_operation());
}

std::string Pppea::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath Pppea::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ppp-ea-oper:pppea/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppea::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ea-interface-names")
    {
        if(ea_interface_names != nullptr)
        {
            children["ea-interface-names"] = ea_interface_names;
        }
        else
        {
            ea_interface_names = std::make_shared<Pppea::Nodes::Node::EaInterfaceNames>();
            ea_interface_names->parent = this;
            children["ea-interface-names"] = ea_interface_names;
        }
        return children.at("ea-interface-names");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pppea::Nodes::Node::get_children()
{
    if(children.find("ea-interface-names") == children.end())
    {
        if(ea_interface_names != nullptr)
        {
            children["ea-interface-names"] = ea_interface_names;
        }
    }

    return children;
}

void Pppea::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceNames()
{
    yang_name = "ea-interface-names"; yang_parent_name = "node";
}

Pppea::Nodes::Node::EaInterfaceNames::~EaInterfaceNames()
{
}

bool Pppea::Nodes::Node::EaInterfaceNames::has_data() const
{
    for (std::size_t index=0; index<ea_interface_name.size(); index++)
    {
        if(ea_interface_name[index]->has_data())
            return true;
    }
    return false;
}

bool Pppea::Nodes::Node::EaInterfaceNames::has_operation() const
{
    for (std::size_t index=0; index<ea_interface_name.size(); index++)
    {
        if(ea_interface_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pppea::Nodes::Node::EaInterfaceNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ea-interface-names";

    return path_buffer.str();

}

EntityPath Pppea::Nodes::Node::EaInterfaceNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EaInterfaceNames' in Cisco_IOS_XR_ppp_ea_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppea::Nodes::Node::EaInterfaceNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ea-interface-name")
    {
        for(auto const & c : ea_interface_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName>();
        c->parent = this;
        ea_interface_name.push_back(std::move(c));
        children[segment_path] = ea_interface_name.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pppea::Nodes::Node::EaInterfaceNames::get_children()
{
    for (auto const & c : ea_interface_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pppea::Nodes::Node::EaInterfaceNames::set_value(const std::string & value_path, std::string value)
{
}

Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName::EaInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    echo_request_interval{YType::uint32, "echo-request-interval"},
    echo_request_retry_count{YType::uint32, "echo-request-retry-count"},
    forwarding_enabled{YType::boolean, "forwarding-enabled"},
    interface{YType::str, "interface"},
    interface_adjacency_state{YType::enumeration, "interface-adjacency-state"},
    ipv4_adjacency_state{YType::enumeration, "ipv4-adjacency-state"},
    ipv6_adjacency_state{YType::enumeration, "ipv6-adjacency-state"},
    ipv6vrf_table_id{YType::uint32, "ipv6vrf-table-id"},
    is_ipcp_running{YType::boolean, "is-ipcp-running"},
    is_ipv6cp_running{YType::boolean, "is-ipv6cp-running"},
    is_lcp_running{YType::boolean, "is-lcp-running"},
    is_mplscp_running{YType::boolean, "is-mplscp-running"},
    is_multilink_bundle{YType::boolean, "is-multilink-bundle"},
    is_vpdn_tunneled{YType::boolean, "is-vpdn-tunneled"},
    l2_adjacency_state{YType::enumeration, "l2-adjacency-state"},
    l2_provisioned{YType::boolean, "l2-provisioned"},
    l2_tunnel_enabled{YType::boolean, "l2-tunnel-enabled"},
    l2ip_interworking_adjacency_state{YType::enumeration, "l2ip-interworking-adjacency-state"},
    l2ip_interworking_enabled{YType::boolean, "l2ip-interworking-enabled"},
    lac_adjacency_state{YType::enumeration, "lac-adjacency-state"},
    local_magic{YType::uint32, "local-magic"},
    local_mcmp_classes{YType::uint8, "local-mcmp-classes"},
    local_mrru{YType::uint16, "local-mrru"},
    local_mtu{YType::uint16, "local-mtu"},
    mpls_adjacency_state{YType::enumeration, "mpls-adjacency-state"},
    multilink_interface{YType::str, "multilink-interface"},
    parent_interface_handle{YType::str, "parent-interface-handle"},
    peer_magic{YType::uint32, "peer-magic"},
    peer_mcmp_classes{YType::uint8, "peer-mcmp-classes"},
    peer_mrru{YType::uint16, "peer-mrru"},
    synchronized{YType::boolean, "synchronized"},
    vrf_table_id{YType::uint32, "vrf-table-id"},
    xconnect_id{YType::uint32, "xconnect-id"}
{
    yang_name = "ea-interface-name"; yang_parent_name = "ea-interface-names";
}

Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName::~EaInterfaceName()
{
}

bool Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName::has_data() const
{
    return interface_name.is_set
	|| echo_request_interval.is_set
	|| echo_request_retry_count.is_set
	|| forwarding_enabled.is_set
	|| interface.is_set
	|| interface_adjacency_state.is_set
	|| ipv4_adjacency_state.is_set
	|| ipv6_adjacency_state.is_set
	|| ipv6vrf_table_id.is_set
	|| is_ipcp_running.is_set
	|| is_ipv6cp_running.is_set
	|| is_lcp_running.is_set
	|| is_mplscp_running.is_set
	|| is_multilink_bundle.is_set
	|| is_vpdn_tunneled.is_set
	|| l2_adjacency_state.is_set
	|| l2_provisioned.is_set
	|| l2_tunnel_enabled.is_set
	|| l2ip_interworking_adjacency_state.is_set
	|| l2ip_interworking_enabled.is_set
	|| lac_adjacency_state.is_set
	|| local_magic.is_set
	|| local_mcmp_classes.is_set
	|| local_mrru.is_set
	|| local_mtu.is_set
	|| mpls_adjacency_state.is_set
	|| multilink_interface.is_set
	|| parent_interface_handle.is_set
	|| peer_magic.is_set
	|| peer_mcmp_classes.is_set
	|| peer_mrru.is_set
	|| synchronized.is_set
	|| vrf_table_id.is_set
	|| xconnect_id.is_set;
}

bool Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(echo_request_interval.operation)
	|| is_set(echo_request_retry_count.operation)
	|| is_set(forwarding_enabled.operation)
	|| is_set(interface.operation)
	|| is_set(interface_adjacency_state.operation)
	|| is_set(ipv4_adjacency_state.operation)
	|| is_set(ipv6_adjacency_state.operation)
	|| is_set(ipv6vrf_table_id.operation)
	|| is_set(is_ipcp_running.operation)
	|| is_set(is_ipv6cp_running.operation)
	|| is_set(is_lcp_running.operation)
	|| is_set(is_mplscp_running.operation)
	|| is_set(is_multilink_bundle.operation)
	|| is_set(is_vpdn_tunneled.operation)
	|| is_set(l2_adjacency_state.operation)
	|| is_set(l2_provisioned.operation)
	|| is_set(l2_tunnel_enabled.operation)
	|| is_set(l2ip_interworking_adjacency_state.operation)
	|| is_set(l2ip_interworking_enabled.operation)
	|| is_set(lac_adjacency_state.operation)
	|| is_set(local_magic.operation)
	|| is_set(local_mcmp_classes.operation)
	|| is_set(local_mrru.operation)
	|| is_set(local_mtu.operation)
	|| is_set(mpls_adjacency_state.operation)
	|| is_set(multilink_interface.operation)
	|| is_set(parent_interface_handle.operation)
	|| is_set(peer_magic.operation)
	|| is_set(peer_mcmp_classes.operation)
	|| is_set(peer_mrru.operation)
	|| is_set(synchronized.operation)
	|| is_set(vrf_table_id.operation)
	|| is_set(xconnect_id.operation);
}

std::string Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ea-interface-name" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EaInterfaceName' in Cisco_IOS_XR_ppp_ea_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (echo_request_interval.is_set || is_set(echo_request_interval.operation)) leaf_name_data.push_back(echo_request_interval.get_name_leafdata());
    if (echo_request_retry_count.is_set || is_set(echo_request_retry_count.operation)) leaf_name_data.push_back(echo_request_retry_count.get_name_leafdata());
    if (forwarding_enabled.is_set || is_set(forwarding_enabled.operation)) leaf_name_data.push_back(forwarding_enabled.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_adjacency_state.is_set || is_set(interface_adjacency_state.operation)) leaf_name_data.push_back(interface_adjacency_state.get_name_leafdata());
    if (ipv4_adjacency_state.is_set || is_set(ipv4_adjacency_state.operation)) leaf_name_data.push_back(ipv4_adjacency_state.get_name_leafdata());
    if (ipv6_adjacency_state.is_set || is_set(ipv6_adjacency_state.operation)) leaf_name_data.push_back(ipv6_adjacency_state.get_name_leafdata());
    if (ipv6vrf_table_id.is_set || is_set(ipv6vrf_table_id.operation)) leaf_name_data.push_back(ipv6vrf_table_id.get_name_leafdata());
    if (is_ipcp_running.is_set || is_set(is_ipcp_running.operation)) leaf_name_data.push_back(is_ipcp_running.get_name_leafdata());
    if (is_ipv6cp_running.is_set || is_set(is_ipv6cp_running.operation)) leaf_name_data.push_back(is_ipv6cp_running.get_name_leafdata());
    if (is_lcp_running.is_set || is_set(is_lcp_running.operation)) leaf_name_data.push_back(is_lcp_running.get_name_leafdata());
    if (is_mplscp_running.is_set || is_set(is_mplscp_running.operation)) leaf_name_data.push_back(is_mplscp_running.get_name_leafdata());
    if (is_multilink_bundle.is_set || is_set(is_multilink_bundle.operation)) leaf_name_data.push_back(is_multilink_bundle.get_name_leafdata());
    if (is_vpdn_tunneled.is_set || is_set(is_vpdn_tunneled.operation)) leaf_name_data.push_back(is_vpdn_tunneled.get_name_leafdata());
    if (l2_adjacency_state.is_set || is_set(l2_adjacency_state.operation)) leaf_name_data.push_back(l2_adjacency_state.get_name_leafdata());
    if (l2_provisioned.is_set || is_set(l2_provisioned.operation)) leaf_name_data.push_back(l2_provisioned.get_name_leafdata());
    if (l2_tunnel_enabled.is_set || is_set(l2_tunnel_enabled.operation)) leaf_name_data.push_back(l2_tunnel_enabled.get_name_leafdata());
    if (l2ip_interworking_adjacency_state.is_set || is_set(l2ip_interworking_adjacency_state.operation)) leaf_name_data.push_back(l2ip_interworking_adjacency_state.get_name_leafdata());
    if (l2ip_interworking_enabled.is_set || is_set(l2ip_interworking_enabled.operation)) leaf_name_data.push_back(l2ip_interworking_enabled.get_name_leafdata());
    if (lac_adjacency_state.is_set || is_set(lac_adjacency_state.operation)) leaf_name_data.push_back(lac_adjacency_state.get_name_leafdata());
    if (local_magic.is_set || is_set(local_magic.operation)) leaf_name_data.push_back(local_magic.get_name_leafdata());
    if (local_mcmp_classes.is_set || is_set(local_mcmp_classes.operation)) leaf_name_data.push_back(local_mcmp_classes.get_name_leafdata());
    if (local_mrru.is_set || is_set(local_mrru.operation)) leaf_name_data.push_back(local_mrru.get_name_leafdata());
    if (local_mtu.is_set || is_set(local_mtu.operation)) leaf_name_data.push_back(local_mtu.get_name_leafdata());
    if (mpls_adjacency_state.is_set || is_set(mpls_adjacency_state.operation)) leaf_name_data.push_back(mpls_adjacency_state.get_name_leafdata());
    if (multilink_interface.is_set || is_set(multilink_interface.operation)) leaf_name_data.push_back(multilink_interface.get_name_leafdata());
    if (parent_interface_handle.is_set || is_set(parent_interface_handle.operation)) leaf_name_data.push_back(parent_interface_handle.get_name_leafdata());
    if (peer_magic.is_set || is_set(peer_magic.operation)) leaf_name_data.push_back(peer_magic.get_name_leafdata());
    if (peer_mcmp_classes.is_set || is_set(peer_mcmp_classes.operation)) leaf_name_data.push_back(peer_mcmp_classes.get_name_leafdata());
    if (peer_mrru.is_set || is_set(peer_mrru.operation)) leaf_name_data.push_back(peer_mrru.get_name_leafdata());
    if (synchronized.is_set || is_set(synchronized.operation)) leaf_name_data.push_back(synchronized.get_name_leafdata());
    if (vrf_table_id.is_set || is_set(vrf_table_id.operation)) leaf_name_data.push_back(vrf_table_id.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.operation)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName::get_children()
{
    return children;
}

void Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "echo-request-interval")
    {
        echo_request_interval = value;
    }
    if(value_path == "echo-request-retry-count")
    {
        echo_request_retry_count = value;
    }
    if(value_path == "forwarding-enabled")
    {
        forwarding_enabled = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-adjacency-state")
    {
        interface_adjacency_state = value;
    }
    if(value_path == "ipv4-adjacency-state")
    {
        ipv4_adjacency_state = value;
    }
    if(value_path == "ipv6-adjacency-state")
    {
        ipv6_adjacency_state = value;
    }
    if(value_path == "ipv6vrf-table-id")
    {
        ipv6vrf_table_id = value;
    }
    if(value_path == "is-ipcp-running")
    {
        is_ipcp_running = value;
    }
    if(value_path == "is-ipv6cp-running")
    {
        is_ipv6cp_running = value;
    }
    if(value_path == "is-lcp-running")
    {
        is_lcp_running = value;
    }
    if(value_path == "is-mplscp-running")
    {
        is_mplscp_running = value;
    }
    if(value_path == "is-multilink-bundle")
    {
        is_multilink_bundle = value;
    }
    if(value_path == "is-vpdn-tunneled")
    {
        is_vpdn_tunneled = value;
    }
    if(value_path == "l2-adjacency-state")
    {
        l2_adjacency_state = value;
    }
    if(value_path == "l2-provisioned")
    {
        l2_provisioned = value;
    }
    if(value_path == "l2-tunnel-enabled")
    {
        l2_tunnel_enabled = value;
    }
    if(value_path == "l2ip-interworking-adjacency-state")
    {
        l2ip_interworking_adjacency_state = value;
    }
    if(value_path == "l2ip-interworking-enabled")
    {
        l2ip_interworking_enabled = value;
    }
    if(value_path == "lac-adjacency-state")
    {
        lac_adjacency_state = value;
    }
    if(value_path == "local-magic")
    {
        local_magic = value;
    }
    if(value_path == "local-mcmp-classes")
    {
        local_mcmp_classes = value;
    }
    if(value_path == "local-mrru")
    {
        local_mrru = value;
    }
    if(value_path == "local-mtu")
    {
        local_mtu = value;
    }
    if(value_path == "mpls-adjacency-state")
    {
        mpls_adjacency_state = value;
    }
    if(value_path == "multilink-interface")
    {
        multilink_interface = value;
    }
    if(value_path == "parent-interface-handle")
    {
        parent_interface_handle = value;
    }
    if(value_path == "peer-magic")
    {
        peer_magic = value;
    }
    if(value_path == "peer-mcmp-classes")
    {
        peer_mcmp_classes = value;
    }
    if(value_path == "peer-mrru")
    {
        peer_mrru = value;
    }
    if(value_path == "synchronized")
    {
        synchronized = value;
    }
    if(value_path == "vrf-table-id")
    {
        vrf_table_id = value;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
    }
}

const Enum::YLeaf PppEaAdjStateEnum::ppp_ea_adj_state_not_installed {0, "ppp-ea-adj-state-not-installed"};
const Enum::YLeaf PppEaAdjStateEnum::ppp_ea_adj_state_installed {1, "ppp-ea-adj-state-installed"};


}
}

