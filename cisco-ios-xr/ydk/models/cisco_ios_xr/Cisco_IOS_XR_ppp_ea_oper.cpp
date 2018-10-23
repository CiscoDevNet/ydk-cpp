
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ppp_ea_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ppp_ea_oper {

Pppea::Pppea()
    :
    nodes(std::make_shared<Pppea::Nodes>())
{
    nodes->parent = this;

    yang_name = "pppea"; yang_parent_name = "Cisco-IOS-XR-ppp-ea-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Pppea::~Pppea()
{
}

bool Pppea::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool Pppea::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Pppea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ea-oper:pppea";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Pppea::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppea::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void Pppea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pppea::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Pppea::clone_ptr() const
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

std::map<std::pair<std::string, std::string>, std::string> Pppea::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Pppea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Pppea::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "pppea"; is_top_level_class = false; has_list_ancestor = false; 
}

Pppea::Nodes::~Nodes()
{
}

bool Pppea::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Pppea::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pppea::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ea-oper:pppea/" << get_segment_path();
    return path_buffer.str();
}

std::string Pppea::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppea::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppea::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<Pppea::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppea::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pppea::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pppea::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pppea::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Pppea::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    ea_interface_names(std::make_shared<Pppea::Nodes::Node::EaInterfaceNames>())
{
    ea_interface_names->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

Pppea::Nodes::Node::~Node()
{
}

bool Pppea::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (ea_interface_names !=  nullptr && ea_interface_names->has_data());
}

bool Pppea::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (ea_interface_names !=  nullptr && ea_interface_names->has_operation());
}

std::string Pppea::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ea-oper:pppea/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Pppea::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppea::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppea::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ea-interface-names")
    {
        if(ea_interface_names == nullptr)
        {
            ea_interface_names = std::make_shared<Pppea::Nodes::Node::EaInterfaceNames>();
        }
        return ea_interface_names;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppea::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ea_interface_names != nullptr)
    {
        _children["ea-interface-names"] = ea_interface_names;
    }

    return _children;
}

void Pppea::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Pppea::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Pppea::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ea-interface-names" || name == "node-name")
        return true;
    return false;
}

Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceNames()
    :
    ea_interface_name(this, {"interface_name"})
{

    yang_name = "ea-interface-names"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppea::Nodes::Node::EaInterfaceNames::~EaInterfaceNames()
{
}

bool Pppea::Nodes::Node::EaInterfaceNames::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ea_interface_name.len(); index++)
    {
        if(ea_interface_name[index]->has_data())
            return true;
    }
    return false;
}

bool Pppea::Nodes::Node::EaInterfaceNames::has_operation() const
{
    for (std::size_t index=0; index<ea_interface_name.len(); index++)
    {
        if(ea_interface_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Pppea::Nodes::Node::EaInterfaceNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ea-interface-names";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppea::Nodes::Node::EaInterfaceNames::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppea::Nodes::Node::EaInterfaceNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ea-interface-name")
    {
        auto ent_ = std::make_shared<Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName>();
        ent_->parent = this;
        ea_interface_name.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppea::Nodes::Node::EaInterfaceNames::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ea_interface_name.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Pppea::Nodes::Node::EaInterfaceNames::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Pppea::Nodes::Node::EaInterfaceNames::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Pppea::Nodes::Node::EaInterfaceNames::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ea-interface-name")
        return true;
    return false;
}

Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName::EaInterfaceName()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    is_lcp_running{YType::boolean, "is-lcp-running"},
    is_ipcp_running{YType::boolean, "is-ipcp-running"},
    is_ipv6cp_running{YType::boolean, "is-ipv6cp-running"},
    is_mplscp_running{YType::boolean, "is-mplscp-running"},
    local_mtu{YType::uint16, "local-mtu"},
    local_mrru{YType::uint16, "local-mrru"},
    peer_mrru{YType::uint16, "peer-mrru"},
    local_magic{YType::uint32, "local-magic"},
    peer_magic{YType::uint32, "peer-magic"},
    local_mcmp_classes{YType::uint8, "local-mcmp-classes"},
    peer_mcmp_classes{YType::uint8, "peer-mcmp-classes"},
    echo_request_interval{YType::uint32, "echo-request-interval"},
    echo_request_retry_count{YType::uint32, "echo-request-retry-count"},
    is_multilink_bundle{YType::boolean, "is-multilink-bundle"},
    synchronized{YType::boolean, "synchronized"},
    forwarding_enabled{YType::boolean, "forwarding-enabled"},
    multilink_interface{YType::str, "multilink-interface"},
    l2_tunnel_enabled{YType::boolean, "l2-tunnel-enabled"},
    l2_provisioned{YType::boolean, "l2-provisioned"},
    l2ip_interworking_enabled{YType::boolean, "l2ip-interworking-enabled"},
    is_vpdn_tunneled{YType::boolean, "is-vpdn-tunneled"},
    xconnect_id{YType::uint32, "xconnect-id"},
    parent_interface_handle{YType::str, "parent-interface-handle"},
    vrf_table_id{YType::uint32, "vrf-table-id"},
    ipv6vrf_table_id{YType::uint32, "ipv6vrf-table-id"},
    l2_adjacency_state{YType::enumeration, "l2-adjacency-state"},
    l2ip_interworking_adjacency_state{YType::enumeration, "l2ip-interworking-adjacency-state"},
    lac_adjacency_state{YType::enumeration, "lac-adjacency-state"},
    interface_adjacency_state{YType::enumeration, "interface-adjacency-state"},
    ipv4_adjacency_state{YType::enumeration, "ipv4-adjacency-state"},
    ipv6_adjacency_state{YType::enumeration, "ipv6-adjacency-state"},
    mpls_adjacency_state{YType::enumeration, "mpls-adjacency-state"}
{

    yang_name = "ea-interface-name"; yang_parent_name = "ea-interface-names"; is_top_level_class = false; has_list_ancestor = true; 
}

Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName::~EaInterfaceName()
{
}

bool Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface.is_set
	|| is_lcp_running.is_set
	|| is_ipcp_running.is_set
	|| is_ipv6cp_running.is_set
	|| is_mplscp_running.is_set
	|| local_mtu.is_set
	|| local_mrru.is_set
	|| peer_mrru.is_set
	|| local_magic.is_set
	|| peer_magic.is_set
	|| local_mcmp_classes.is_set
	|| peer_mcmp_classes.is_set
	|| echo_request_interval.is_set
	|| echo_request_retry_count.is_set
	|| is_multilink_bundle.is_set
	|| synchronized.is_set
	|| forwarding_enabled.is_set
	|| multilink_interface.is_set
	|| l2_tunnel_enabled.is_set
	|| l2_provisioned.is_set
	|| l2ip_interworking_enabled.is_set
	|| is_vpdn_tunneled.is_set
	|| xconnect_id.is_set
	|| parent_interface_handle.is_set
	|| vrf_table_id.is_set
	|| ipv6vrf_table_id.is_set
	|| l2_adjacency_state.is_set
	|| l2ip_interworking_adjacency_state.is_set
	|| lac_adjacency_state.is_set
	|| interface_adjacency_state.is_set
	|| ipv4_adjacency_state.is_set
	|| ipv6_adjacency_state.is_set
	|| mpls_adjacency_state.is_set;
}

bool Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(is_lcp_running.yfilter)
	|| ydk::is_set(is_ipcp_running.yfilter)
	|| ydk::is_set(is_ipv6cp_running.yfilter)
	|| ydk::is_set(is_mplscp_running.yfilter)
	|| ydk::is_set(local_mtu.yfilter)
	|| ydk::is_set(local_mrru.yfilter)
	|| ydk::is_set(peer_mrru.yfilter)
	|| ydk::is_set(local_magic.yfilter)
	|| ydk::is_set(peer_magic.yfilter)
	|| ydk::is_set(local_mcmp_classes.yfilter)
	|| ydk::is_set(peer_mcmp_classes.yfilter)
	|| ydk::is_set(echo_request_interval.yfilter)
	|| ydk::is_set(echo_request_retry_count.yfilter)
	|| ydk::is_set(is_multilink_bundle.yfilter)
	|| ydk::is_set(synchronized.yfilter)
	|| ydk::is_set(forwarding_enabled.yfilter)
	|| ydk::is_set(multilink_interface.yfilter)
	|| ydk::is_set(l2_tunnel_enabled.yfilter)
	|| ydk::is_set(l2_provisioned.yfilter)
	|| ydk::is_set(l2ip_interworking_enabled.yfilter)
	|| ydk::is_set(is_vpdn_tunneled.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| ydk::is_set(parent_interface_handle.yfilter)
	|| ydk::is_set(vrf_table_id.yfilter)
	|| ydk::is_set(ipv6vrf_table_id.yfilter)
	|| ydk::is_set(l2_adjacency_state.yfilter)
	|| ydk::is_set(l2ip_interworking_adjacency_state.yfilter)
	|| ydk::is_set(lac_adjacency_state.yfilter)
	|| ydk::is_set(interface_adjacency_state.yfilter)
	|| ydk::is_set(ipv4_adjacency_state.yfilter)
	|| ydk::is_set(ipv6_adjacency_state.yfilter)
	|| ydk::is_set(mpls_adjacency_state.yfilter);
}

std::string Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ea-interface-name";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (is_lcp_running.is_set || is_set(is_lcp_running.yfilter)) leaf_name_data.push_back(is_lcp_running.get_name_leafdata());
    if (is_ipcp_running.is_set || is_set(is_ipcp_running.yfilter)) leaf_name_data.push_back(is_ipcp_running.get_name_leafdata());
    if (is_ipv6cp_running.is_set || is_set(is_ipv6cp_running.yfilter)) leaf_name_data.push_back(is_ipv6cp_running.get_name_leafdata());
    if (is_mplscp_running.is_set || is_set(is_mplscp_running.yfilter)) leaf_name_data.push_back(is_mplscp_running.get_name_leafdata());
    if (local_mtu.is_set || is_set(local_mtu.yfilter)) leaf_name_data.push_back(local_mtu.get_name_leafdata());
    if (local_mrru.is_set || is_set(local_mrru.yfilter)) leaf_name_data.push_back(local_mrru.get_name_leafdata());
    if (peer_mrru.is_set || is_set(peer_mrru.yfilter)) leaf_name_data.push_back(peer_mrru.get_name_leafdata());
    if (local_magic.is_set || is_set(local_magic.yfilter)) leaf_name_data.push_back(local_magic.get_name_leafdata());
    if (peer_magic.is_set || is_set(peer_magic.yfilter)) leaf_name_data.push_back(peer_magic.get_name_leafdata());
    if (local_mcmp_classes.is_set || is_set(local_mcmp_classes.yfilter)) leaf_name_data.push_back(local_mcmp_classes.get_name_leafdata());
    if (peer_mcmp_classes.is_set || is_set(peer_mcmp_classes.yfilter)) leaf_name_data.push_back(peer_mcmp_classes.get_name_leafdata());
    if (echo_request_interval.is_set || is_set(echo_request_interval.yfilter)) leaf_name_data.push_back(echo_request_interval.get_name_leafdata());
    if (echo_request_retry_count.is_set || is_set(echo_request_retry_count.yfilter)) leaf_name_data.push_back(echo_request_retry_count.get_name_leafdata());
    if (is_multilink_bundle.is_set || is_set(is_multilink_bundle.yfilter)) leaf_name_data.push_back(is_multilink_bundle.get_name_leafdata());
    if (synchronized.is_set || is_set(synchronized.yfilter)) leaf_name_data.push_back(synchronized.get_name_leafdata());
    if (forwarding_enabled.is_set || is_set(forwarding_enabled.yfilter)) leaf_name_data.push_back(forwarding_enabled.get_name_leafdata());
    if (multilink_interface.is_set || is_set(multilink_interface.yfilter)) leaf_name_data.push_back(multilink_interface.get_name_leafdata());
    if (l2_tunnel_enabled.is_set || is_set(l2_tunnel_enabled.yfilter)) leaf_name_data.push_back(l2_tunnel_enabled.get_name_leafdata());
    if (l2_provisioned.is_set || is_set(l2_provisioned.yfilter)) leaf_name_data.push_back(l2_provisioned.get_name_leafdata());
    if (l2ip_interworking_enabled.is_set || is_set(l2ip_interworking_enabled.yfilter)) leaf_name_data.push_back(l2ip_interworking_enabled.get_name_leafdata());
    if (is_vpdn_tunneled.is_set || is_set(is_vpdn_tunneled.yfilter)) leaf_name_data.push_back(is_vpdn_tunneled.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());
    if (parent_interface_handle.is_set || is_set(parent_interface_handle.yfilter)) leaf_name_data.push_back(parent_interface_handle.get_name_leafdata());
    if (vrf_table_id.is_set || is_set(vrf_table_id.yfilter)) leaf_name_data.push_back(vrf_table_id.get_name_leafdata());
    if (ipv6vrf_table_id.is_set || is_set(ipv6vrf_table_id.yfilter)) leaf_name_data.push_back(ipv6vrf_table_id.get_name_leafdata());
    if (l2_adjacency_state.is_set || is_set(l2_adjacency_state.yfilter)) leaf_name_data.push_back(l2_adjacency_state.get_name_leafdata());
    if (l2ip_interworking_adjacency_state.is_set || is_set(l2ip_interworking_adjacency_state.yfilter)) leaf_name_data.push_back(l2ip_interworking_adjacency_state.get_name_leafdata());
    if (lac_adjacency_state.is_set || is_set(lac_adjacency_state.yfilter)) leaf_name_data.push_back(lac_adjacency_state.get_name_leafdata());
    if (interface_adjacency_state.is_set || is_set(interface_adjacency_state.yfilter)) leaf_name_data.push_back(interface_adjacency_state.get_name_leafdata());
    if (ipv4_adjacency_state.is_set || is_set(ipv4_adjacency_state.yfilter)) leaf_name_data.push_back(ipv4_adjacency_state.get_name_leafdata());
    if (ipv6_adjacency_state.is_set || is_set(ipv6_adjacency_state.yfilter)) leaf_name_data.push_back(ipv6_adjacency_state.get_name_leafdata());
    if (mpls_adjacency_state.is_set || is_set(mpls_adjacency_state.yfilter)) leaf_name_data.push_back(mpls_adjacency_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-lcp-running")
    {
        is_lcp_running = value;
        is_lcp_running.value_namespace = name_space;
        is_lcp_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipcp-running")
    {
        is_ipcp_running = value;
        is_ipcp_running.value_namespace = name_space;
        is_ipcp_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ipv6cp-running")
    {
        is_ipv6cp_running = value;
        is_ipv6cp_running.value_namespace = name_space;
        is_ipv6cp_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mplscp-running")
    {
        is_mplscp_running = value;
        is_mplscp_running.value_namespace = name_space;
        is_mplscp_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-mtu")
    {
        local_mtu = value;
        local_mtu.value_namespace = name_space;
        local_mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-mrru")
    {
        local_mrru = value;
        local_mrru.value_namespace = name_space;
        local_mrru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-mrru")
    {
        peer_mrru = value;
        peer_mrru.value_namespace = name_space;
        peer_mrru.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-magic")
    {
        local_magic = value;
        local_magic.value_namespace = name_space;
        local_magic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-magic")
    {
        peer_magic = value;
        peer_magic.value_namespace = name_space;
        peer_magic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-mcmp-classes")
    {
        local_mcmp_classes = value;
        local_mcmp_classes.value_namespace = name_space;
        local_mcmp_classes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-mcmp-classes")
    {
        peer_mcmp_classes = value;
        peer_mcmp_classes.value_namespace = name_space;
        peer_mcmp_classes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-request-interval")
    {
        echo_request_interval = value;
        echo_request_interval.value_namespace = name_space;
        echo_request_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "echo-request-retry-count")
    {
        echo_request_retry_count = value;
        echo_request_retry_count.value_namespace = name_space;
        echo_request_retry_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multilink-bundle")
    {
        is_multilink_bundle = value;
        is_multilink_bundle.value_namespace = name_space;
        is_multilink_bundle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronized")
    {
        synchronized = value;
        synchronized.value_namespace = name_space;
        synchronized.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forwarding-enabled")
    {
        forwarding_enabled = value;
        forwarding_enabled.value_namespace = name_space;
        forwarding_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multilink-interface")
    {
        multilink_interface = value;
        multilink_interface.value_namespace = name_space;
        multilink_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-tunnel-enabled")
    {
        l2_tunnel_enabled = value;
        l2_tunnel_enabled.value_namespace = name_space;
        l2_tunnel_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-provisioned")
    {
        l2_provisioned = value;
        l2_provisioned.value_namespace = name_space;
        l2_provisioned.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2ip-interworking-enabled")
    {
        l2ip_interworking_enabled = value;
        l2ip_interworking_enabled.value_namespace = name_space;
        l2ip_interworking_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-vpdn-tunneled")
    {
        is_vpdn_tunneled = value;
        is_vpdn_tunneled.value_namespace = name_space;
        is_vpdn_tunneled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-handle")
    {
        parent_interface_handle = value;
        parent_interface_handle.value_namespace = name_space;
        parent_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-table-id")
    {
        vrf_table_id = value;
        vrf_table_id.value_namespace = name_space;
        vrf_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vrf-table-id")
    {
        ipv6vrf_table_id = value;
        ipv6vrf_table_id.value_namespace = name_space;
        ipv6vrf_table_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-adjacency-state")
    {
        l2_adjacency_state = value;
        l2_adjacency_state.value_namespace = name_space;
        l2_adjacency_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2ip-interworking-adjacency-state")
    {
        l2ip_interworking_adjacency_state = value;
        l2ip_interworking_adjacency_state.value_namespace = name_space;
        l2ip_interworking_adjacency_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-adjacency-state")
    {
        lac_adjacency_state = value;
        lac_adjacency_state.value_namespace = name_space;
        lac_adjacency_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-adjacency-state")
    {
        interface_adjacency_state = value;
        interface_adjacency_state.value_namespace = name_space;
        interface_adjacency_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-adjacency-state")
    {
        ipv4_adjacency_state = value;
        ipv4_adjacency_state.value_namespace = name_space;
        ipv4_adjacency_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-adjacency-state")
    {
        ipv6_adjacency_state = value;
        ipv6_adjacency_state.value_namespace = name_space;
        ipv6_adjacency_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-adjacency-state")
    {
        mpls_adjacency_state = value;
        mpls_adjacency_state.value_namespace = name_space;
        mpls_adjacency_state.value_namespace_prefix = name_space_prefix;
    }
}

void Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "is-lcp-running")
    {
        is_lcp_running.yfilter = yfilter;
    }
    if(value_path == "is-ipcp-running")
    {
        is_ipcp_running.yfilter = yfilter;
    }
    if(value_path == "is-ipv6cp-running")
    {
        is_ipv6cp_running.yfilter = yfilter;
    }
    if(value_path == "is-mplscp-running")
    {
        is_mplscp_running.yfilter = yfilter;
    }
    if(value_path == "local-mtu")
    {
        local_mtu.yfilter = yfilter;
    }
    if(value_path == "local-mrru")
    {
        local_mrru.yfilter = yfilter;
    }
    if(value_path == "peer-mrru")
    {
        peer_mrru.yfilter = yfilter;
    }
    if(value_path == "local-magic")
    {
        local_magic.yfilter = yfilter;
    }
    if(value_path == "peer-magic")
    {
        peer_magic.yfilter = yfilter;
    }
    if(value_path == "local-mcmp-classes")
    {
        local_mcmp_classes.yfilter = yfilter;
    }
    if(value_path == "peer-mcmp-classes")
    {
        peer_mcmp_classes.yfilter = yfilter;
    }
    if(value_path == "echo-request-interval")
    {
        echo_request_interval.yfilter = yfilter;
    }
    if(value_path == "echo-request-retry-count")
    {
        echo_request_retry_count.yfilter = yfilter;
    }
    if(value_path == "is-multilink-bundle")
    {
        is_multilink_bundle.yfilter = yfilter;
    }
    if(value_path == "synchronized")
    {
        synchronized.yfilter = yfilter;
    }
    if(value_path == "forwarding-enabled")
    {
        forwarding_enabled.yfilter = yfilter;
    }
    if(value_path == "multilink-interface")
    {
        multilink_interface.yfilter = yfilter;
    }
    if(value_path == "l2-tunnel-enabled")
    {
        l2_tunnel_enabled.yfilter = yfilter;
    }
    if(value_path == "l2-provisioned")
    {
        l2_provisioned.yfilter = yfilter;
    }
    if(value_path == "l2ip-interworking-enabled")
    {
        l2ip_interworking_enabled.yfilter = yfilter;
    }
    if(value_path == "is-vpdn-tunneled")
    {
        is_vpdn_tunneled.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
    if(value_path == "parent-interface-handle")
    {
        parent_interface_handle.yfilter = yfilter;
    }
    if(value_path == "vrf-table-id")
    {
        vrf_table_id.yfilter = yfilter;
    }
    if(value_path == "ipv6vrf-table-id")
    {
        ipv6vrf_table_id.yfilter = yfilter;
    }
    if(value_path == "l2-adjacency-state")
    {
        l2_adjacency_state.yfilter = yfilter;
    }
    if(value_path == "l2ip-interworking-adjacency-state")
    {
        l2ip_interworking_adjacency_state.yfilter = yfilter;
    }
    if(value_path == "lac-adjacency-state")
    {
        lac_adjacency_state.yfilter = yfilter;
    }
    if(value_path == "interface-adjacency-state")
    {
        interface_adjacency_state.yfilter = yfilter;
    }
    if(value_path == "ipv4-adjacency-state")
    {
        ipv4_adjacency_state.yfilter = yfilter;
    }
    if(value_path == "ipv6-adjacency-state")
    {
        ipv6_adjacency_state.yfilter = yfilter;
    }
    if(value_path == "mpls-adjacency-state")
    {
        mpls_adjacency_state.yfilter = yfilter;
    }
}

bool Pppea::Nodes::Node::EaInterfaceNames::EaInterfaceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "interface" || name == "is-lcp-running" || name == "is-ipcp-running" || name == "is-ipv6cp-running" || name == "is-mplscp-running" || name == "local-mtu" || name == "local-mrru" || name == "peer-mrru" || name == "local-magic" || name == "peer-magic" || name == "local-mcmp-classes" || name == "peer-mcmp-classes" || name == "echo-request-interval" || name == "echo-request-retry-count" || name == "is-multilink-bundle" || name == "synchronized" || name == "forwarding-enabled" || name == "multilink-interface" || name == "l2-tunnel-enabled" || name == "l2-provisioned" || name == "l2ip-interworking-enabled" || name == "is-vpdn-tunneled" || name == "xconnect-id" || name == "parent-interface-handle" || name == "vrf-table-id" || name == "ipv6vrf-table-id" || name == "l2-adjacency-state" || name == "l2ip-interworking-adjacency-state" || name == "lac-adjacency-state" || name == "interface-adjacency-state" || name == "ipv4-adjacency-state" || name == "ipv6-adjacency-state" || name == "mpls-adjacency-state")
        return true;
    return false;
}

const Enum::YLeaf PppEaAdjState::ppp_ea_adj_state_not_installed {0, "ppp-ea-adj-state-not-installed"};
const Enum::YLeaf PppEaAdjState::ppp_ea_adj_state_installed {1, "ppp-ea-adj-state-installed"};


}
}

