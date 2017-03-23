
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_fib_common_oper_0.hpp"
#include "Cisco_IOS_XR_fib_common_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_fib_common_oper {

FibStatistics::FibStatistics()
    :
    nodes(std::make_shared<FibStatistics::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "fib-statistics"; yang_parent_name = "Cisco-IOS-XR-fib-common-oper";
}

FibStatistics::~FibStatistics()
{
}

bool FibStatistics::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool FibStatistics::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string FibStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fib-common-oper:fib-statistics";

    return path_buffer.str();

}

EntityPath FibStatistics::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> FibStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_shared<FibStatistics::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & FibStatistics::get_children()
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

void FibStatistics::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> FibStatistics::clone_ptr() const
{
    return std::make_shared<FibStatistics>();
}

std::string FibStatistics::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string FibStatistics::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function FibStatistics::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

FibStatistics::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "fib-statistics";
}

FibStatistics::Nodes::~Nodes()
{
}

bool FibStatistics::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool FibStatistics::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string FibStatistics::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath FibStatistics::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fib-common-oper:fib-statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FibStatistics::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<FibStatistics::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & FibStatistics::Nodes::get_children()
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

void FibStatistics::Nodes::set_value(const std::string & value_path, std::string value)
{
}

FibStatistics::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    drops(std::make_shared<FibStatistics::Nodes::Node::Drops>())
{
    drops->parent = this;
    children["drops"] = drops;

    yang_name = "node"; yang_parent_name = "nodes";
}

FibStatistics::Nodes::Node::~Node()
{
}

bool FibStatistics::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (drops !=  nullptr && drops->has_data());
}

bool FibStatistics::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (drops !=  nullptr && drops->has_operation());
}

std::string FibStatistics::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath FibStatistics::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fib-common-oper:fib-statistics/nodes/" << get_segment_path();
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

std::shared_ptr<Entity> FibStatistics::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "drops")
    {
        if(drops != nullptr)
        {
            children["drops"] = drops;
        }
        else
        {
            drops = std::make_shared<FibStatistics::Nodes::Node::Drops>();
            drops->parent = this;
            children["drops"] = drops;
        }
        return children.at("drops");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & FibStatistics::Nodes::Node::get_children()
{
    if(children.find("drops") == children.end())
    {
        if(drops != nullptr)
        {
            children["drops"] = drops;
        }
    }

    return children;
}

void FibStatistics::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

FibStatistics::Nodes::Node::Drops::Drops()
    :
    acl_in_rpf_packets{YType::uint64, "acl-in-rpf-packets"},
    checksum_error_packets{YType::uint64, "checksum-error-packets"},
    df_unreachable_packets{YType::uint64, "df-unreachable-packets"},
    discard_packets{YType::uint64, "discard-packets"},
    encapsulation_failure_packets{YType::uint64, "encapsulation-failure-packets"},
    fragmenation_consumed_packets{YType::uint64, "fragmenation-consumed-packets"},
    fragmenation_failure_packets{YType::uint64, "fragmenation-failure-packets"},
    gre_error_drop{YType::uint64, "gre-error-drop"},
    gre_lookup_failed_drop{YType::uint64, "gre-lookup-failed-drop"},
    incomplete_adjacency_packets{YType::uint64, "incomplete-adjacency-packets"},
    lisp_decap_error_drops{YType::uint64, "lisp-decap-error-drops"},
    lisp_encap_error_drops{YType::uint64, "lisp-encap-error-drops"},
    lisp_punt_drops{YType::uint64, "lisp-punt-drops"},
    mpls_disabled_interface{YType::uint64, "mpls-disabled-interface"},
    multi_label_drops{YType::uint64, "multi-label-drops"},
    no_route_packets{YType::uint64, "no-route-packets"},
    null_packets{YType::uint64, "null-packets"},
    punt_unreachable_packets{YType::uint64, "punt-unreachable-packets"},
    rp_destination_drop_packets{YType::uint64, "rp-destination-drop-packets"},
    rpf_check_failure_packets{YType::uint64, "rpf-check-failure-packets"},
    total_number_of_drop_packets{YType::uint64, "total-number-of-drop-packets"},
    unresolved_prefix_packets{YType::uint64, "unresolved-prefix-packets"},
    unsupported_feature_packets{YType::uint64, "unsupported-feature-packets"}
{
    yang_name = "drops"; yang_parent_name = "node";
}

FibStatistics::Nodes::Node::Drops::~Drops()
{
}

bool FibStatistics::Nodes::Node::Drops::has_data() const
{
    return acl_in_rpf_packets.is_set
	|| checksum_error_packets.is_set
	|| df_unreachable_packets.is_set
	|| discard_packets.is_set
	|| encapsulation_failure_packets.is_set
	|| fragmenation_consumed_packets.is_set
	|| fragmenation_failure_packets.is_set
	|| gre_error_drop.is_set
	|| gre_lookup_failed_drop.is_set
	|| incomplete_adjacency_packets.is_set
	|| lisp_decap_error_drops.is_set
	|| lisp_encap_error_drops.is_set
	|| lisp_punt_drops.is_set
	|| mpls_disabled_interface.is_set
	|| multi_label_drops.is_set
	|| no_route_packets.is_set
	|| null_packets.is_set
	|| punt_unreachable_packets.is_set
	|| rp_destination_drop_packets.is_set
	|| rpf_check_failure_packets.is_set
	|| total_number_of_drop_packets.is_set
	|| unresolved_prefix_packets.is_set
	|| unsupported_feature_packets.is_set;
}

bool FibStatistics::Nodes::Node::Drops::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_in_rpf_packets.operation)
	|| is_set(checksum_error_packets.operation)
	|| is_set(df_unreachable_packets.operation)
	|| is_set(discard_packets.operation)
	|| is_set(encapsulation_failure_packets.operation)
	|| is_set(fragmenation_consumed_packets.operation)
	|| is_set(fragmenation_failure_packets.operation)
	|| is_set(gre_error_drop.operation)
	|| is_set(gre_lookup_failed_drop.operation)
	|| is_set(incomplete_adjacency_packets.operation)
	|| is_set(lisp_decap_error_drops.operation)
	|| is_set(lisp_encap_error_drops.operation)
	|| is_set(lisp_punt_drops.operation)
	|| is_set(mpls_disabled_interface.operation)
	|| is_set(multi_label_drops.operation)
	|| is_set(no_route_packets.operation)
	|| is_set(null_packets.operation)
	|| is_set(punt_unreachable_packets.operation)
	|| is_set(rp_destination_drop_packets.operation)
	|| is_set(rpf_check_failure_packets.operation)
	|| is_set(total_number_of_drop_packets.operation)
	|| is_set(unresolved_prefix_packets.operation)
	|| is_set(unsupported_feature_packets.operation);
}

std::string FibStatistics::Nodes::Node::Drops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drops";

    return path_buffer.str();

}

EntityPath FibStatistics::Nodes::Node::Drops::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Drops' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_in_rpf_packets.is_set || is_set(acl_in_rpf_packets.operation)) leaf_name_data.push_back(acl_in_rpf_packets.get_name_leafdata());
    if (checksum_error_packets.is_set || is_set(checksum_error_packets.operation)) leaf_name_data.push_back(checksum_error_packets.get_name_leafdata());
    if (df_unreachable_packets.is_set || is_set(df_unreachable_packets.operation)) leaf_name_data.push_back(df_unreachable_packets.get_name_leafdata());
    if (discard_packets.is_set || is_set(discard_packets.operation)) leaf_name_data.push_back(discard_packets.get_name_leafdata());
    if (encapsulation_failure_packets.is_set || is_set(encapsulation_failure_packets.operation)) leaf_name_data.push_back(encapsulation_failure_packets.get_name_leafdata());
    if (fragmenation_consumed_packets.is_set || is_set(fragmenation_consumed_packets.operation)) leaf_name_data.push_back(fragmenation_consumed_packets.get_name_leafdata());
    if (fragmenation_failure_packets.is_set || is_set(fragmenation_failure_packets.operation)) leaf_name_data.push_back(fragmenation_failure_packets.get_name_leafdata());
    if (gre_error_drop.is_set || is_set(gre_error_drop.operation)) leaf_name_data.push_back(gre_error_drop.get_name_leafdata());
    if (gre_lookup_failed_drop.is_set || is_set(gre_lookup_failed_drop.operation)) leaf_name_data.push_back(gre_lookup_failed_drop.get_name_leafdata());
    if (incomplete_adjacency_packets.is_set || is_set(incomplete_adjacency_packets.operation)) leaf_name_data.push_back(incomplete_adjacency_packets.get_name_leafdata());
    if (lisp_decap_error_drops.is_set || is_set(lisp_decap_error_drops.operation)) leaf_name_data.push_back(lisp_decap_error_drops.get_name_leafdata());
    if (lisp_encap_error_drops.is_set || is_set(lisp_encap_error_drops.operation)) leaf_name_data.push_back(lisp_encap_error_drops.get_name_leafdata());
    if (lisp_punt_drops.is_set || is_set(lisp_punt_drops.operation)) leaf_name_data.push_back(lisp_punt_drops.get_name_leafdata());
    if (mpls_disabled_interface.is_set || is_set(mpls_disabled_interface.operation)) leaf_name_data.push_back(mpls_disabled_interface.get_name_leafdata());
    if (multi_label_drops.is_set || is_set(multi_label_drops.operation)) leaf_name_data.push_back(multi_label_drops.get_name_leafdata());
    if (no_route_packets.is_set || is_set(no_route_packets.operation)) leaf_name_data.push_back(no_route_packets.get_name_leafdata());
    if (null_packets.is_set || is_set(null_packets.operation)) leaf_name_data.push_back(null_packets.get_name_leafdata());
    if (punt_unreachable_packets.is_set || is_set(punt_unreachable_packets.operation)) leaf_name_data.push_back(punt_unreachable_packets.get_name_leafdata());
    if (rp_destination_drop_packets.is_set || is_set(rp_destination_drop_packets.operation)) leaf_name_data.push_back(rp_destination_drop_packets.get_name_leafdata());
    if (rpf_check_failure_packets.is_set || is_set(rpf_check_failure_packets.operation)) leaf_name_data.push_back(rpf_check_failure_packets.get_name_leafdata());
    if (total_number_of_drop_packets.is_set || is_set(total_number_of_drop_packets.operation)) leaf_name_data.push_back(total_number_of_drop_packets.get_name_leafdata());
    if (unresolved_prefix_packets.is_set || is_set(unresolved_prefix_packets.operation)) leaf_name_data.push_back(unresolved_prefix_packets.get_name_leafdata());
    if (unsupported_feature_packets.is_set || is_set(unsupported_feature_packets.operation)) leaf_name_data.push_back(unsupported_feature_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> FibStatistics::Nodes::Node::Drops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & FibStatistics::Nodes::Node::Drops::get_children()
{
    return children;
}

void FibStatistics::Nodes::Node::Drops::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-in-rpf-packets")
    {
        acl_in_rpf_packets = value;
    }
    if(value_path == "checksum-error-packets")
    {
        checksum_error_packets = value;
    }
    if(value_path == "df-unreachable-packets")
    {
        df_unreachable_packets = value;
    }
    if(value_path == "discard-packets")
    {
        discard_packets = value;
    }
    if(value_path == "encapsulation-failure-packets")
    {
        encapsulation_failure_packets = value;
    }
    if(value_path == "fragmenation-consumed-packets")
    {
        fragmenation_consumed_packets = value;
    }
    if(value_path == "fragmenation-failure-packets")
    {
        fragmenation_failure_packets = value;
    }
    if(value_path == "gre-error-drop")
    {
        gre_error_drop = value;
    }
    if(value_path == "gre-lookup-failed-drop")
    {
        gre_lookup_failed_drop = value;
    }
    if(value_path == "incomplete-adjacency-packets")
    {
        incomplete_adjacency_packets = value;
    }
    if(value_path == "lisp-decap-error-drops")
    {
        lisp_decap_error_drops = value;
    }
    if(value_path == "lisp-encap-error-drops")
    {
        lisp_encap_error_drops = value;
    }
    if(value_path == "lisp-punt-drops")
    {
        lisp_punt_drops = value;
    }
    if(value_path == "mpls-disabled-interface")
    {
        mpls_disabled_interface = value;
    }
    if(value_path == "multi-label-drops")
    {
        multi_label_drops = value;
    }
    if(value_path == "no-route-packets")
    {
        no_route_packets = value;
    }
    if(value_path == "null-packets")
    {
        null_packets = value;
    }
    if(value_path == "punt-unreachable-packets")
    {
        punt_unreachable_packets = value;
    }
    if(value_path == "rp-destination-drop-packets")
    {
        rp_destination_drop_packets = value;
    }
    if(value_path == "rpf-check-failure-packets")
    {
        rpf_check_failure_packets = value;
    }
    if(value_path == "total-number-of-drop-packets")
    {
        total_number_of_drop_packets = value;
    }
    if(value_path == "unresolved-prefix-packets")
    {
        unresolved_prefix_packets = value;
    }
    if(value_path == "unsupported-feature-packets")
    {
        unsupported_feature_packets = value;
    }
}

Fib::Fib()
    :
    nodes(std::make_shared<Fib::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "fib"; yang_parent_name = "Cisco-IOS-XR-fib-common-oper";
}

Fib::~Fib()
{
}

bool Fib::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Fib::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Fib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fib-common-oper:fib";

    return path_buffer.str();

}

EntityPath Fib::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Fib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_shared<Fib::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::get_children()
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

void Fib::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Fib::clone_ptr() const
{
    return std::make_shared<Fib>();
}

std::string Fib::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Fib::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Fib::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Fib::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "fib";
}

Fib::Nodes::~Nodes()
{
}

bool Fib::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fib::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Fib::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fib-common-oper:fib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Fib::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::get_children()
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

void Fib::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    global(std::make_shared<Fib::Nodes::Node::Global>())
	,protocols(std::make_shared<Fib::Nodes::Node::Protocols>())
{
    global->parent = this;
    children["global"] = global;

    protocols->parent = this;
    children["protocols"] = protocols;

    yang_name = "node"; yang_parent_name = "nodes";
}

Fib::Nodes::Node::~Node()
{
}

bool Fib::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (global !=  nullptr && global->has_data())
	|| (protocols !=  nullptr && protocols->has_data());
}

bool Fib::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (global !=  nullptr && global->has_operation())
	|| (protocols !=  nullptr && protocols->has_operation());
}

std::string Fib::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fib-common-oper:fib/nodes/" << get_segment_path();
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

std::shared_ptr<Entity> Fib::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
        else
        {
            global = std::make_shared<Fib::Nodes::Node::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    if(child_yang_name == "protocols")
    {
        if(protocols != nullptr)
        {
            children["protocols"] = protocols;
        }
        else
        {
            protocols = std::make_shared<Fib::Nodes::Node::Protocols>();
            protocols->parent = this;
            children["protocols"] = protocols;
        }
        return children.at("protocols");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::get_children()
{
    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
    }

    if(children.find("protocols") == children.end())
    {
        if(protocols != nullptr)
        {
            children["protocols"] = protocols;
        }
    }

    return children;
}

void Fib::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Fib::Nodes::Node::Global::Global()
    :
    object_history(std::make_shared<Fib::Nodes::Node::Global::ObjectHistory>())
	,summary(std::make_shared<Fib::Nodes::Node::Global::Summary>())
{
    object_history->parent = this;
    children["object-history"] = object_history;

    summary->parent = this;
    children["summary"] = summary;

    yang_name = "global"; yang_parent_name = "node";
}

Fib::Nodes::Node::Global::~Global()
{
}

bool Fib::Nodes::Node::Global::has_data() const
{
    return (object_history !=  nullptr && object_history->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Fib::Nodes::Node::Global::has_operation() const
{
    return is_set(operation)
	|| (object_history !=  nullptr && object_history->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Fib::Nodes::Node::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Global' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "object-history")
    {
        if(object_history != nullptr)
        {
            children["object-history"] = object_history;
        }
        else
        {
            object_history = std::make_shared<Fib::Nodes::Node::Global::ObjectHistory>();
            object_history->parent = this;
            children["object-history"] = object_history;
        }
        return children.at("object-history");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<Fib::Nodes::Node::Global::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Global::get_children()
{
    if(children.find("object-history") == children.end())
    {
        if(object_history != nullptr)
        {
            children["object-history"] = object_history;
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

void Fib::Nodes::Node::Global::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Global::Summary::Summary()
    :
    protos(std::make_shared<Fib::Nodes::Node::Global::Summary::Protos>())
	,total(std::make_shared<Fib::Nodes::Node::Global::Summary::Total>())
{
    protos->parent = this;
    children["protos"] = protos;

    total->parent = this;
    children["total"] = total;

    yang_name = "summary"; yang_parent_name = "global";
}

Fib::Nodes::Node::Global::Summary::~Summary()
{
}

bool Fib::Nodes::Node::Global::Summary::has_data() const
{
    return (protos !=  nullptr && protos->has_data())
	|| (total !=  nullptr && total->has_data());
}

bool Fib::Nodes::Node::Global::Summary::has_operation() const
{
    return is_set(operation)
	|| (protos !=  nullptr && protos->has_operation())
	|| (total !=  nullptr && total->has_operation());
}

std::string Fib::Nodes::Node::Global::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Global::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protos")
    {
        if(protos != nullptr)
        {
            children["protos"] = protos;
        }
        else
        {
            protos = std::make_shared<Fib::Nodes::Node::Global::Summary::Protos>();
            protos->parent = this;
            children["protos"] = protos;
        }
        return children.at("protos");
    }

    if(child_yang_name == "total")
    {
        if(total != nullptr)
        {
            children["total"] = total;
        }
        else
        {
            total = std::make_shared<Fib::Nodes::Node::Global::Summary::Total>();
            total->parent = this;
            children["total"] = total;
        }
        return children.at("total");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Global::Summary::get_children()
{
    if(children.find("protos") == children.end())
    {
        if(protos != nullptr)
        {
            children["protos"] = protos;
        }
    }

    if(children.find("total") == children.end())
    {
        if(total != nullptr)
        {
            children["total"] = total;
        }
    }

    return children;
}

void Fib::Nodes::Node::Global::Summary::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Global::Summary::Total::Total()
    :
    common_info(std::make_shared<Fib::Nodes::Node::Global::Summary::Total::CommonInfo>())
	,total_counters(std::make_shared<Fib::Nodes::Node::Global::Summary::Total::TotalCounters>())
{
    common_info->parent = this;
    children["common-info"] = common_info;

    total_counters->parent = this;
    children["total-counters"] = total_counters;

    yang_name = "total"; yang_parent_name = "summary";
}

Fib::Nodes::Node::Global::Summary::Total::~Total()
{
}

bool Fib::Nodes::Node::Global::Summary::Total::has_data() const
{
    return (common_info !=  nullptr && common_info->has_data())
	|| (total_counters !=  nullptr && total_counters->has_data());
}

bool Fib::Nodes::Node::Global::Summary::Total::has_operation() const
{
    return is_set(operation)
	|| (common_info !=  nullptr && common_info->has_operation())
	|| (total_counters !=  nullptr && total_counters->has_operation());
}

std::string Fib::Nodes::Node::Global::Summary::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Global::Summary::Total::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Total' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "common-info")
    {
        if(common_info != nullptr)
        {
            children["common-info"] = common_info;
        }
        else
        {
            common_info = std::make_shared<Fib::Nodes::Node::Global::Summary::Total::CommonInfo>();
            common_info->parent = this;
            children["common-info"] = common_info;
        }
        return children.at("common-info");
    }

    if(child_yang_name == "total-counters")
    {
        if(total_counters != nullptr)
        {
            children["total-counters"] = total_counters;
        }
        else
        {
            total_counters = std::make_shared<Fib::Nodes::Node::Global::Summary::Total::TotalCounters>();
            total_counters->parent = this;
            children["total-counters"] = total_counters;
        }
        return children.at("total-counters");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Global::Summary::Total::get_children()
{
    if(children.find("common-info") == children.end())
    {
        if(common_info != nullptr)
        {
            children["common-info"] = common_info;
        }
    }

    if(children.find("total-counters") == children.end())
    {
        if(total_counters != nullptr)
        {
            children["total-counters"] = total_counters;
        }
    }

    return children;
}

void Fib::Nodes::Node::Global::Summary::Total::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Global::Summary::Total::CommonInfo::CommonInfo()
    :
    count{YType::uint32, "count"}
{
    yang_name = "common-info"; yang_parent_name = "total";
}

Fib::Nodes::Node::Global::Summary::Total::CommonInfo::~CommonInfo()
{
}

bool Fib::Nodes::Node::Global::Summary::Total::CommonInfo::has_data() const
{
    return count.is_set;
}

bool Fib::Nodes::Node::Global::Summary::Total::CommonInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation);
}

std::string Fib::Nodes::Node::Global::Summary::Total::CommonInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-info";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Global::Summary::Total::CommonInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommonInfo' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Total::CommonInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Global::Summary::Total::CommonInfo::get_children()
{
    return children;
}

void Fib::Nodes::Node::Global::Summary::Total::CommonInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Fib::Nodes::Node::Global::Summary::Total::TotalCounters::TotalCounters()
    :
    num_retry_ojbects{YType::uint32, "num-retry-ojbects"},
    num_retry_timeouts{YType::uint64, "num-retry-timeouts"}
{
    yang_name = "total-counters"; yang_parent_name = "total";
}

Fib::Nodes::Node::Global::Summary::Total::TotalCounters::~TotalCounters()
{
}

bool Fib::Nodes::Node::Global::Summary::Total::TotalCounters::has_data() const
{
    for (std::size_t index=0; index<array_number_of_object.size(); index++)
    {
        if(array_number_of_object[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<array_number_of_retry.size(); index++)
    {
        if(array_number_of_retry[index]->has_data())
            return true;
    }
    return num_retry_ojbects.is_set
	|| num_retry_timeouts.is_set;
}

bool Fib::Nodes::Node::Global::Summary::Total::TotalCounters::has_operation() const
{
    for (std::size_t index=0; index<array_number_of_object.size(); index++)
    {
        if(array_number_of_object[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<array_number_of_retry.size(); index++)
    {
        if(array_number_of_retry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(num_retry_ojbects.operation)
	|| is_set(num_retry_timeouts.operation);
}

std::string Fib::Nodes::Node::Global::Summary::Total::TotalCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-counters";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Global::Summary::Total::TotalCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TotalCounters' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_retry_ojbects.is_set || is_set(num_retry_ojbects.operation)) leaf_name_data.push_back(num_retry_ojbects.get_name_leafdata());
    if (num_retry_timeouts.is_set || is_set(num_retry_timeouts.operation)) leaf_name_data.push_back(num_retry_timeouts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Total::TotalCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "array-number-of-object")
    {
        for(auto const & c : array_number_of_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject>();
        c->parent = this;
        array_number_of_object.push_back(std::move(c));
        children[segment_path] = array_number_of_object.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "array-number-of-retry")
    {
        for(auto const & c : array_number_of_retry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry>();
        c->parent = this;
        array_number_of_retry.push_back(std::move(c));
        children[segment_path] = array_number_of_retry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Global::Summary::Total::TotalCounters::get_children()
{
    for (auto const & c : array_number_of_object)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : array_number_of_retry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Global::Summary::Total::TotalCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-retry-ojbects")
    {
        num_retry_ojbects = value;
    }
    if(value_path == "num-retry-timeouts")
    {
        num_retry_timeouts = value;
    }
}

Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry::ArrayNumberOfRetry()
    :
    num_retries{YType::uint64, "num-retries"},
    retry_object_type{YType::str, "retry-object-type"}
{
    yang_name = "array-number-of-retry"; yang_parent_name = "total-counters";
}

Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry::~ArrayNumberOfRetry()
{
}

bool Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry::has_data() const
{
    return num_retries.is_set
	|| retry_object_type.is_set;
}

bool Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry::has_operation() const
{
    return is_set(operation)
	|| is_set(num_retries.operation)
	|| is_set(retry_object_type.operation);
}

std::string Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "array-number-of-retry";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ArrayNumberOfRetry' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_retries.is_set || is_set(num_retries.operation)) leaf_name_data.push_back(num_retries.get_name_leafdata());
    if (retry_object_type.is_set || is_set(retry_object_type.operation)) leaf_name_data.push_back(retry_object_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry::get_children()
{
    return children;
}

void Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfRetry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-retries")
    {
        num_retries = value;
    }
    if(value_path == "retry-object-type")
    {
        retry_object_type = value;
    }
}

Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject::ArrayNumberOfObject()
    :
    num_objects{YType::uint32, "num-objects"},
    object_type{YType::str, "object-type"}
{
    yang_name = "array-number-of-object"; yang_parent_name = "total-counters";
}

Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject::~ArrayNumberOfObject()
{
}

bool Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject::has_data() const
{
    return num_objects.is_set
	|| object_type.is_set;
}

bool Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject::has_operation() const
{
    return is_set(operation)
	|| is_set(num_objects.operation)
	|| is_set(object_type.operation);
}

std::string Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "array-number-of-object";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ArrayNumberOfObject' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_objects.is_set || is_set(num_objects.operation)) leaf_name_data.push_back(num_objects.get_name_leafdata());
    if (object_type.is_set || is_set(object_type.operation)) leaf_name_data.push_back(object_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject::get_children()
{
    return children;
}

void Fib::Nodes::Node::Global::Summary::Total::TotalCounters::ArrayNumberOfObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-objects")
    {
        num_objects = value;
    }
    if(value_path == "object-type")
    {
        object_type = value;
    }
}

Fib::Nodes::Node::Global::Summary::Protos::Protos()
{
    yang_name = "protos"; yang_parent_name = "summary";
}

Fib::Nodes::Node::Global::Summary::Protos::~Protos()
{
}

bool Fib::Nodes::Node::Global::Summary::Protos::has_data() const
{
    for (std::size_t index=0; index<proto.size(); index++)
    {
        if(proto[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Global::Summary::Protos::has_operation() const
{
    for (std::size_t index=0; index<proto.size(); index++)
    {
        if(proto[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fib::Nodes::Node::Global::Summary::Protos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protos";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Global::Summary::Protos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protos' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Protos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "proto")
    {
        for(auto const & c : proto)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto>();
        c->parent = this;
        proto.push_back(std::move(c));
        children[segment_path] = proto.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Global::Summary::Protos::get_children()
{
    for (auto const & c : proto)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Global::Summary::Protos::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Proto()
    :
    protocol_name{YType::enumeration, "protocol-name"}
    	,
    common_info(std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo>())
	,summary(std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_>())
{
    common_info->parent = this;
    children["common-info"] = common_info;

    summary->parent = this;
    children["summary"] = summary;

    yang_name = "proto"; yang_parent_name = "protos";
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::~Proto()
{
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::has_data() const
{
    return protocol_name.is_set
	|| (common_info !=  nullptr && common_info->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol_name.operation)
	|| (common_info !=  nullptr && common_info->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Fib::Nodes::Node::Global::Summary::Protos::Proto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proto" <<"[protocol-name='" <<protocol_name <<"']";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Global::Summary::Protos::Proto::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Proto' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Protos::Proto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "common-info")
    {
        if(common_info != nullptr)
        {
            children["common-info"] = common_info;
        }
        else
        {
            common_info = std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo>();
            common_info->parent = this;
            children["common-info"] = common_info;
        }
        return children.at("common-info");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Global::Summary::Protos::Proto::get_children()
{
    if(children.find("common-info") == children.end())
    {
        if(common_info != nullptr)
        {
            children["common-info"] = common_info;
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

void Fib::Nodes::Node::Global::Summary::Protos::Proto::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo::CommonInfo()
    :
    count{YType::uint32, "count"}
{
    yang_name = "common-info"; yang_parent_name = "proto";
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo::~CommonInfo()
{
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo::has_data() const
{
    return count.is_set;
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation);
}

std::string Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-info";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommonInfo' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo::get_children()
{
    return children;
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::CommonInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Summary_()
    :
    base_object(std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject>())
	,health(std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health>())
	,summary_counts(std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts>())
{
    base_object->parent = this;
    children["base-object"] = base_object;

    health->parent = this;
    children["health"] = health;

    summary_counts->parent = this;
    children["summary-counts"] = summary_counts;

    yang_name = "summary"; yang_parent_name = "proto";
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::~Summary_()
{
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::has_data() const
{
    return (base_object !=  nullptr && base_object->has_data())
	|| (health !=  nullptr && health->has_data())
	|| (summary_counts !=  nullptr && summary_counts->has_data());
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::has_operation() const
{
    return is_set(operation)
	|| (base_object !=  nullptr && base_object->has_operation())
	|| (health !=  nullptr && health->has_operation())
	|| (summary_counts !=  nullptr && summary_counts->has_operation());
}

std::string Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary_' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base-object")
    {
        if(base_object != nullptr)
        {
            children["base-object"] = base_object;
        }
        else
        {
            base_object = std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject>();
            base_object->parent = this;
            children["base-object"] = base_object;
        }
        return children.at("base-object");
    }

    if(child_yang_name == "health")
    {
        if(health != nullptr)
        {
            children["health"] = health;
        }
        else
        {
            health = std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health>();
            health->parent = this;
            children["health"] = health;
        }
        return children.at("health");
    }

    if(child_yang_name == "summary-counts")
    {
        if(summary_counts != nullptr)
        {
            children["summary-counts"] = summary_counts;
        }
        else
        {
            summary_counts = std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts>();
            summary_counts->parent = this;
            children["summary-counts"] = summary_counts;
        }
        return children.at("summary-counts");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::get_children()
{
    if(children.find("base-object") == children.end())
    {
        if(base_object != nullptr)
        {
            children["base-object"] = base_object;
        }
    }

    if(children.find("health") == children.end())
    {
        if(health != nullptr)
        {
            children["health"] = health;
        }
    }

    if(children.find("summary-counts") == children.end())
    {
        if(summary_counts != nullptr)
        {
            children["summary-counts"] = summary_counts;
        }
    }

    return children;
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject::BaseObject()
    :
    protocol{YType::uint32, "protocol"}
{
    yang_name = "base-object"; yang_parent_name = "summary";
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject::~BaseObject()
{
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject::has_data() const
{
    return protocol.is_set;
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol.operation);
}

std::string Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-object";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BaseObject' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject::get_children()
{
    return children;
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::BaseObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::SummaryCounts()
    :
    num_retry_ojbects{YType::uint32, "num-retry-ojbects"},
    num_retry_timeouts{YType::uint64, "num-retry-timeouts"}
{
    yang_name = "summary-counts"; yang_parent_name = "summary";
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::~SummaryCounts()
{
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::has_data() const
{
    for (std::size_t index=0; index<array_number_of_object.size(); index++)
    {
        if(array_number_of_object[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<array_number_of_retry.size(); index++)
    {
        if(array_number_of_retry[index]->has_data())
            return true;
    }
    return num_retry_ojbects.is_set
	|| num_retry_timeouts.is_set;
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::has_operation() const
{
    for (std::size_t index=0; index<array_number_of_object.size(); index++)
    {
        if(array_number_of_object[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<array_number_of_retry.size(); index++)
    {
        if(array_number_of_retry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(num_retry_ojbects.operation)
	|| is_set(num_retry_timeouts.operation);
}

std::string Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-counts";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryCounts' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_retry_ojbects.is_set || is_set(num_retry_ojbects.operation)) leaf_name_data.push_back(num_retry_ojbects.get_name_leafdata());
    if (num_retry_timeouts.is_set || is_set(num_retry_timeouts.operation)) leaf_name_data.push_back(num_retry_timeouts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "array-number-of-object")
    {
        for(auto const & c : array_number_of_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject>();
        c->parent = this;
        array_number_of_object.push_back(std::move(c));
        children[segment_path] = array_number_of_object.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "array-number-of-retry")
    {
        for(auto const & c : array_number_of_retry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry>();
        c->parent = this;
        array_number_of_retry.push_back(std::move(c));
        children[segment_path] = array_number_of_retry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::get_children()
{
    for (auto const & c : array_number_of_object)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : array_number_of_retry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-retry-ojbects")
    {
        num_retry_ojbects = value;
    }
    if(value_path == "num-retry-timeouts")
    {
        num_retry_timeouts = value;
    }
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry::ArrayNumberOfRetry()
    :
    num_retries{YType::uint64, "num-retries"},
    retry_object_type{YType::str, "retry-object-type"}
{
    yang_name = "array-number-of-retry"; yang_parent_name = "summary-counts";
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry::~ArrayNumberOfRetry()
{
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry::has_data() const
{
    return num_retries.is_set
	|| retry_object_type.is_set;
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry::has_operation() const
{
    return is_set(operation)
	|| is_set(num_retries.operation)
	|| is_set(retry_object_type.operation);
}

std::string Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "array-number-of-retry";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ArrayNumberOfRetry' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_retries.is_set || is_set(num_retries.operation)) leaf_name_data.push_back(num_retries.get_name_leafdata());
    if (retry_object_type.is_set || is_set(retry_object_type.operation)) leaf_name_data.push_back(retry_object_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry::get_children()
{
    return children;
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfRetry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-retries")
    {
        num_retries = value;
    }
    if(value_path == "retry-object-type")
    {
        retry_object_type = value;
    }
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject::ArrayNumberOfObject()
    :
    num_objects{YType::uint32, "num-objects"},
    object_type{YType::str, "object-type"}
{
    yang_name = "array-number-of-object"; yang_parent_name = "summary-counts";
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject::~ArrayNumberOfObject()
{
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject::has_data() const
{
    return num_objects.is_set
	|| object_type.is_set;
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject::has_operation() const
{
    return is_set(operation)
	|| is_set(num_objects.operation)
	|| is_set(object_type.operation);
}

std::string Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "array-number-of-object";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ArrayNumberOfObject' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_objects.is_set || is_set(num_objects.operation)) leaf_name_data.push_back(num_objects.get_name_leafdata());
    if (object_type.is_set || is_set(object_type.operation)) leaf_name_data.push_back(object_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject::get_children()
{
    return children;
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::SummaryCounts::ArrayNumberOfObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-objects")
    {
        num_objects = value;
    }
    if(value_path == "object-type")
    {
        object_type = value;
    }
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health::Health()
    :
    is_retry_db_empty{YType::boolean, "is-retry-db-empty"}
{
    yang_name = "health"; yang_parent_name = "summary";
}

Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health::~Health()
{
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health::has_data() const
{
    return is_retry_db_empty.is_set;
}

bool Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health::has_operation() const
{
    return is_set(operation)
	|| is_set(is_retry_db_empty.operation);
}

std::string Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "health";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Health' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_retry_db_empty.is_set || is_set(is_retry_db_empty.operation)) leaf_name_data.push_back(is_retry_db_empty.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health::get_children()
{
    return children;
}

void Fib::Nodes::Node::Global::Summary::Protos::Proto::Summary_::Health::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-retry-db-empty")
    {
        is_retry_db_empty = value;
    }
}

Fib::Nodes::Node::Global::ObjectHistory::ObjectHistory()
    :
    obj_history_protos(std::make_shared<Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos>())
{
    obj_history_protos->parent = this;
    children["obj-history-protos"] = obj_history_protos;

    yang_name = "object-history"; yang_parent_name = "global";
}

Fib::Nodes::Node::Global::ObjectHistory::~ObjectHistory()
{
}

bool Fib::Nodes::Node::Global::ObjectHistory::has_data() const
{
    return (obj_history_protos !=  nullptr && obj_history_protos->has_data());
}

bool Fib::Nodes::Node::Global::ObjectHistory::has_operation() const
{
    return is_set(operation)
	|| (obj_history_protos !=  nullptr && obj_history_protos->has_operation());
}

std::string Fib::Nodes::Node::Global::ObjectHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object-history";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Global::ObjectHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ObjectHistory' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::ObjectHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "obj-history-protos")
    {
        if(obj_history_protos != nullptr)
        {
            children["obj-history-protos"] = obj_history_protos;
        }
        else
        {
            obj_history_protos = std::make_shared<Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos>();
            obj_history_protos->parent = this;
            children["obj-history-protos"] = obj_history_protos;
        }
        return children.at("obj-history-protos");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Global::ObjectHistory::get_children()
{
    if(children.find("obj-history-protos") == children.end())
    {
        if(obj_history_protos != nullptr)
        {
            children["obj-history-protos"] = obj_history_protos;
        }
    }

    return children;
}

void Fib::Nodes::Node::Global::ObjectHistory::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProtos()
{
    yang_name = "obj-history-protos"; yang_parent_name = "object-history";
}

Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::~ObjHistoryProtos()
{
}

bool Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::has_data() const
{
    for (std::size_t index=0; index<obj_history_proto.size(); index++)
    {
        if(obj_history_proto[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::has_operation() const
{
    for (std::size_t index=0; index<obj_history_proto.size(); index++)
    {
        if(obj_history_proto[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obj-history-protos";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ObjHistoryProtos' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "obj-history-proto")
    {
        for(auto const & c : obj_history_proto)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto>();
        c->parent = this;
        obj_history_proto.push_back(std::move(c));
        children[segment_path] = obj_history_proto.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::get_children()
{
    for (auto const & c : obj_history_proto)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjHistoryProto()
    :
    protocol_name{YType::enumeration, "protocol-name"}
    	,
    base_object(std::make_shared<Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject>())
	,object_history(std::make_shared<Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_>())
{
    base_object->parent = this;
    children["base-object"] = base_object;

    object_history->parent = this;
    children["object-history"] = object_history;

    yang_name = "obj-history-proto"; yang_parent_name = "obj-history-protos";
}

Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::~ObjHistoryProto()
{
}

bool Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::has_data() const
{
    return protocol_name.is_set
	|| (base_object !=  nullptr && base_object->has_data())
	|| (object_history !=  nullptr && object_history->has_data());
}

bool Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol_name.operation)
	|| (base_object !=  nullptr && base_object->has_operation())
	|| (object_history !=  nullptr && object_history->has_operation());
}

std::string Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "obj-history-proto" <<"[protocol-name='" <<protocol_name <<"']";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ObjHistoryProto' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "base-object")
    {
        if(base_object != nullptr)
        {
            children["base-object"] = base_object;
        }
        else
        {
            base_object = std::make_shared<Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject>();
            base_object->parent = this;
            children["base-object"] = base_object;
        }
        return children.at("base-object");
    }

    if(child_yang_name == "object-history")
    {
        if(object_history != nullptr)
        {
            children["object-history"] = object_history;
        }
        else
        {
            object_history = std::make_shared<Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_>();
            object_history->parent = this;
            children["object-history"] = object_history;
        }
        return children.at("object-history");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::get_children()
{
    if(children.find("base-object") == children.end())
    {
        if(base_object != nullptr)
        {
            children["base-object"] = base_object;
        }
    }

    if(children.find("object-history") == children.end())
    {
        if(object_history != nullptr)
        {
            children["object-history"] = object_history;
        }
    }

    return children;
}

void Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
}

Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject::BaseObject()
    :
    protocol{YType::uint32, "protocol"}
{
    yang_name = "base-object"; yang_parent_name = "obj-history-proto";
}

Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject::~BaseObject()
{
}

bool Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject::has_data() const
{
    return protocol.is_set;
}

bool Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol.operation);
}

std::string Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "base-object";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BaseObject' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject::get_children()
{
    return children;
}

void Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::BaseObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_::ObjectHistory_()
    :
    count{YType::uint32, "count"}
{
    yang_name = "object-history"; yang_parent_name = "obj-history-proto";
}

Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_::~ObjectHistory_()
{
}

bool Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_::has_data() const
{
    return count.is_set;
}

bool Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation);
}

std::string Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "object-history";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ObjectHistory_' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_::get_children()
{
    return children;
}

void Fib::Nodes::Node::Global::ObjectHistory::ObjHistoryProtos::ObjHistoryProto::ObjectHistory_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Fib::Nodes::Node::Protocols::Protocols()
{
    yang_name = "protocols"; yang_parent_name = "node";
}

Fib::Nodes::Node::Protocols::~Protocols()
{
}

bool Fib::Nodes::Node::Protocols::has_data() const
{
    for (std::size_t index=0; index<protocol.size(); index++)
    {
        if(protocol[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::has_operation() const
{
    for (std::size_t index=0; index<protocol.size(); index++)
    {
        if(protocol[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fib::Nodes::Node::Protocols::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocols";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocols' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "protocol")
    {
        for(auto const & c : protocol)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol>();
        c->parent = this;
        protocol.push_back(std::move(c));
        children[segment_path] = protocol.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::get_children()
{
    for (auto const & c : protocol)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Protocols::Protocol::Protocol()
    :
    protocol_name{YType::enumeration, "protocol-name"}
    	,
    external_client_summaries(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries>())
	,external_summary_all(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll>())
	,fib_summaries(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries>())
	,frr_log(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FrrLog>())
	,issu_state(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::IssuState>())
	,local_label(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel>())
	,misc(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc>())
	,nh_ids(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::NhIds>())
	,resource(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource>())
	,vrfs(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs>())
{
    external_client_summaries->parent = this;
    children["external-client-summaries"] = external_client_summaries;

    external_summary_all->parent = this;
    children["external-summary-all"] = external_summary_all;

    fib_summaries->parent = this;
    children["fib-summaries"] = fib_summaries;

    frr_log->parent = this;
    children["frr-log"] = frr_log;

    issu_state->parent = this;
    children["issu-state"] = issu_state;

    local_label->parent = this;
    children["local-label"] = local_label;

    misc->parent = this;
    children["misc"] = misc;

    nh_ids->parent = this;
    children["nh-ids"] = nh_ids;

    resource->parent = this;
    children["resource"] = resource;

    vrfs->parent = this;
    children["vrfs"] = vrfs;

    yang_name = "protocol"; yang_parent_name = "protocols";
}

Fib::Nodes::Node::Protocols::Protocol::~Protocol()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::has_data() const
{
    return protocol_name.is_set
	|| (external_client_summaries !=  nullptr && external_client_summaries->has_data())
	|| (external_summary_all !=  nullptr && external_summary_all->has_data())
	|| (fib_summaries !=  nullptr && fib_summaries->has_data())
	|| (frr_log !=  nullptr && frr_log->has_data())
	|| (issu_state !=  nullptr && issu_state->has_data())
	|| (local_label !=  nullptr && local_label->has_data())
	|| (misc !=  nullptr && misc->has_data())
	|| (nh_ids !=  nullptr && nh_ids->has_data())
	|| (resource !=  nullptr && resource->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::has_operation() const
{
    return is_set(operation)
	|| is_set(protocol_name.operation)
	|| (external_client_summaries !=  nullptr && external_client_summaries->has_operation())
	|| (external_summary_all !=  nullptr && external_summary_all->has_operation())
	|| (fib_summaries !=  nullptr && fib_summaries->has_operation())
	|| (frr_log !=  nullptr && frr_log->has_operation())
	|| (issu_state !=  nullptr && issu_state->has_operation())
	|| (local_label !=  nullptr && local_label->has_operation())
	|| (misc !=  nullptr && misc->has_operation())
	|| (nh_ids !=  nullptr && nh_ids->has_operation())
	|| (resource !=  nullptr && resource->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol" <<"[protocol-name='" <<protocol_name <<"']";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protocol' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "external-client-summaries")
    {
        if(external_client_summaries != nullptr)
        {
            children["external-client-summaries"] = external_client_summaries;
        }
        else
        {
            external_client_summaries = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries>();
            external_client_summaries->parent = this;
            children["external-client-summaries"] = external_client_summaries;
        }
        return children.at("external-client-summaries");
    }

    if(child_yang_name == "external-summary-all")
    {
        if(external_summary_all != nullptr)
        {
            children["external-summary-all"] = external_summary_all;
        }
        else
        {
            external_summary_all = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll>();
            external_summary_all->parent = this;
            children["external-summary-all"] = external_summary_all;
        }
        return children.at("external-summary-all");
    }

    if(child_yang_name == "fib-summaries")
    {
        if(fib_summaries != nullptr)
        {
            children["fib-summaries"] = fib_summaries;
        }
        else
        {
            fib_summaries = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries>();
            fib_summaries->parent = this;
            children["fib-summaries"] = fib_summaries;
        }
        return children.at("fib-summaries");
    }

    if(child_yang_name == "frr-log")
    {
        if(frr_log != nullptr)
        {
            children["frr-log"] = frr_log;
        }
        else
        {
            frr_log = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FrrLog>();
            frr_log->parent = this;
            children["frr-log"] = frr_log;
        }
        return children.at("frr-log");
    }

    if(child_yang_name == "issu-state")
    {
        if(issu_state != nullptr)
        {
            children["issu-state"] = issu_state;
        }
        else
        {
            issu_state = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::IssuState>();
            issu_state->parent = this;
            children["issu-state"] = issu_state;
        }
        return children.at("issu-state");
    }

    if(child_yang_name == "local-label")
    {
        if(local_label != nullptr)
        {
            children["local-label"] = local_label;
        }
        else
        {
            local_label = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel>();
            local_label->parent = this;
            children["local-label"] = local_label;
        }
        return children.at("local-label");
    }

    if(child_yang_name == "misc")
    {
        if(misc != nullptr)
        {
            children["misc"] = misc;
        }
        else
        {
            misc = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc>();
            misc->parent = this;
            children["misc"] = misc;
        }
        return children.at("misc");
    }

    if(child_yang_name == "nh-ids")
    {
        if(nh_ids != nullptr)
        {
            children["nh-ids"] = nh_ids;
        }
        else
        {
            nh_ids = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::NhIds>();
            nh_ids->parent = this;
            children["nh-ids"] = nh_ids;
        }
        return children.at("nh-ids");
    }

    if(child_yang_name == "resource")
    {
        if(resource != nullptr)
        {
            children["resource"] = resource;
        }
        else
        {
            resource = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource>();
            resource->parent = this;
            children["resource"] = resource;
        }
        return children.at("resource");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
        else
        {
            vrfs = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::get_children()
{
    if(children.find("external-client-summaries") == children.end())
    {
        if(external_client_summaries != nullptr)
        {
            children["external-client-summaries"] = external_client_summaries;
        }
    }

    if(children.find("external-summary-all") == children.end())
    {
        if(external_summary_all != nullptr)
        {
            children["external-summary-all"] = external_summary_all;
        }
    }

    if(children.find("fib-summaries") == children.end())
    {
        if(fib_summaries != nullptr)
        {
            children["fib-summaries"] = fib_summaries;
        }
    }

    if(children.find("frr-log") == children.end())
    {
        if(frr_log != nullptr)
        {
            children["frr-log"] = frr_log;
        }
    }

    if(children.find("issu-state") == children.end())
    {
        if(issu_state != nullptr)
        {
            children["issu-state"] = issu_state;
        }
    }

    if(children.find("local-label") == children.end())
    {
        if(local_label != nullptr)
        {
            children["local-label"] = local_label;
        }
    }

    if(children.find("misc") == children.end())
    {
        if(misc != nullptr)
        {
            children["misc"] = misc;
        }
    }

    if(children.find("nh-ids") == children.end())
    {
        if(nh_ids != nullptr)
        {
            children["nh-ids"] = nh_ids;
        }
    }

    if(children.find("resource") == children.end())
    {
        if(resource != nullptr)
        {
            children["resource"] = resource;
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::IssuState::IssuState()
    :
    eoc_received_imdr_time_stamp{YType::str, "eoc-received-imdr-time-stamp"},
    eoc_received_slc_time_stamp{YType::str, "eoc-received-slc-time-stamp"},
    eod_received_im_time_stamp{YType::str, "eod-received-im-time-stamp"},
    eod_sent_imdr_time_stamp{YType::str, "eod-sent-imdr-time-stamp"},
    eod_sent_slc_time_stamp{YType::str, "eod-sent-slc-time-stamp"},
    fis_issu_error_ts{YType::uint64, "fis-issu-error-ts"},
    fis_issu_restart{YType::boolean, "fis-issu-restart"},
    imdr_eoc_implicit{YType::boolean, "imdr-eoc-implicit"},
    imdr_support{YType::boolean, "imdr-support"},
    slc_eoc_implicit{YType::boolean, "slc-eoc-implicit"},
    slc_support{YType::boolean, "slc-support"}
{
    yang_name = "issu-state"; yang_parent_name = "protocol";
}

Fib::Nodes::Node::Protocols::Protocol::IssuState::~IssuState()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::IssuState::has_data() const
{
    for (std::size_t index=0; index<fis_proto_state.size(); index++)
    {
        if(fis_proto_state[index]->has_data())
            return true;
    }
    return eoc_received_imdr_time_stamp.is_set
	|| eoc_received_slc_time_stamp.is_set
	|| eod_received_im_time_stamp.is_set
	|| eod_sent_imdr_time_stamp.is_set
	|| eod_sent_slc_time_stamp.is_set
	|| fis_issu_error_ts.is_set
	|| fis_issu_restart.is_set
	|| imdr_eoc_implicit.is_set
	|| imdr_support.is_set
	|| slc_eoc_implicit.is_set
	|| slc_support.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::IssuState::has_operation() const
{
    for (std::size_t index=0; index<fis_proto_state.size(); index++)
    {
        if(fis_proto_state[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(eoc_received_imdr_time_stamp.operation)
	|| is_set(eoc_received_slc_time_stamp.operation)
	|| is_set(eod_received_im_time_stamp.operation)
	|| is_set(eod_sent_imdr_time_stamp.operation)
	|| is_set(eod_sent_slc_time_stamp.operation)
	|| is_set(fis_issu_error_ts.operation)
	|| is_set(fis_issu_restart.operation)
	|| is_set(imdr_eoc_implicit.operation)
	|| is_set(imdr_support.operation)
	|| is_set(slc_eoc_implicit.operation)
	|| is_set(slc_support.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::IssuState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-state";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::IssuState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IssuState' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eoc_received_imdr_time_stamp.is_set || is_set(eoc_received_imdr_time_stamp.operation)) leaf_name_data.push_back(eoc_received_imdr_time_stamp.get_name_leafdata());
    if (eoc_received_slc_time_stamp.is_set || is_set(eoc_received_slc_time_stamp.operation)) leaf_name_data.push_back(eoc_received_slc_time_stamp.get_name_leafdata());
    if (eod_received_im_time_stamp.is_set || is_set(eod_received_im_time_stamp.operation)) leaf_name_data.push_back(eod_received_im_time_stamp.get_name_leafdata());
    if (eod_sent_imdr_time_stamp.is_set || is_set(eod_sent_imdr_time_stamp.operation)) leaf_name_data.push_back(eod_sent_imdr_time_stamp.get_name_leafdata());
    if (eod_sent_slc_time_stamp.is_set || is_set(eod_sent_slc_time_stamp.operation)) leaf_name_data.push_back(eod_sent_slc_time_stamp.get_name_leafdata());
    if (fis_issu_error_ts.is_set || is_set(fis_issu_error_ts.operation)) leaf_name_data.push_back(fis_issu_error_ts.get_name_leafdata());
    if (fis_issu_restart.is_set || is_set(fis_issu_restart.operation)) leaf_name_data.push_back(fis_issu_restart.get_name_leafdata());
    if (imdr_eoc_implicit.is_set || is_set(imdr_eoc_implicit.operation)) leaf_name_data.push_back(imdr_eoc_implicit.get_name_leafdata());
    if (imdr_support.is_set || is_set(imdr_support.operation)) leaf_name_data.push_back(imdr_support.get_name_leafdata());
    if (slc_eoc_implicit.is_set || is_set(slc_eoc_implicit.operation)) leaf_name_data.push_back(slc_eoc_implicit.get_name_leafdata());
    if (slc_support.is_set || is_set(slc_support.operation)) leaf_name_data.push_back(slc_support.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::IssuState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fis-proto-state")
    {
        for(auto const & c : fis_proto_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState>();
        c->parent = this;
        fis_proto_state.push_back(std::move(c));
        children[segment_path] = fis_proto_state.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::IssuState::get_children()
{
    for (auto const & c : fis_proto_state)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::IssuState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eoc-received-imdr-time-stamp")
    {
        eoc_received_imdr_time_stamp = value;
    }
    if(value_path == "eoc-received-slc-time-stamp")
    {
        eoc_received_slc_time_stamp = value;
    }
    if(value_path == "eod-received-im-time-stamp")
    {
        eod_received_im_time_stamp = value;
    }
    if(value_path == "eod-sent-imdr-time-stamp")
    {
        eod_sent_imdr_time_stamp = value;
    }
    if(value_path == "eod-sent-slc-time-stamp")
    {
        eod_sent_slc_time_stamp = value;
    }
    if(value_path == "fis-issu-error-ts")
    {
        fis_issu_error_ts = value;
    }
    if(value_path == "fis-issu-restart")
    {
        fis_issu_restart = value;
    }
    if(value_path == "imdr-eoc-implicit")
    {
        imdr_eoc_implicit = value;
    }
    if(value_path == "imdr-support")
    {
        imdr_support = value;
    }
    if(value_path == "slc-eoc-implicit")
    {
        slc_eoc_implicit = value;
    }
    if(value_path == "slc-support")
    {
        slc_support = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState::FisProtoState()
    :
    aib_eod_time_stamp{YType::str, "aib-eod-time-stamp"},
    bcdl_tables{YType::uint32, "bcdl-tables"},
    converged_tables{YType::uint32, "converged-tables"},
    lmrib_eod_time_stamp{YType::str, "lmrib-eod-time-stamp"},
    lmrib_eod_valid{YType::boolean, "lmrib-eod-valid"},
    lsd_eod_time_stamp{YType::str, "lsd-eod-time-stamp"},
    lsd_eod_valid{YType::boolean, "lsd-eod-valid"},
    protocol_eod_time_stamp{YType::str, "protocol-eod-time-stamp"},
    protocol_eod_valid{YType::boolean, "protocol-eod-valid"},
    protocol_name{YType::str, "protocol-name"},
    rib_info_valid{YType::boolean, "rib-info-valid"},
    rib_tables_converged_time_stamp{YType::str, "rib-tables-converged-time-stamp"},
    rsi_eod_time_stamp{YType::str, "rsi-eod-time-stamp"},
    rsi_eod_valid{YType::boolean, "rsi-eod-valid"}
{
    yang_name = "fis-proto-state"; yang_parent_name = "issu-state";
}

Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState::~FisProtoState()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState::has_data() const
{
    return aib_eod_time_stamp.is_set
	|| bcdl_tables.is_set
	|| converged_tables.is_set
	|| lmrib_eod_time_stamp.is_set
	|| lmrib_eod_valid.is_set
	|| lsd_eod_time_stamp.is_set
	|| lsd_eod_valid.is_set
	|| protocol_eod_time_stamp.is_set
	|| protocol_eod_valid.is_set
	|| protocol_name.is_set
	|| rib_info_valid.is_set
	|| rib_tables_converged_time_stamp.is_set
	|| rsi_eod_time_stamp.is_set
	|| rsi_eod_valid.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState::has_operation() const
{
    return is_set(operation)
	|| is_set(aib_eod_time_stamp.operation)
	|| is_set(bcdl_tables.operation)
	|| is_set(converged_tables.operation)
	|| is_set(lmrib_eod_time_stamp.operation)
	|| is_set(lmrib_eod_valid.operation)
	|| is_set(lsd_eod_time_stamp.operation)
	|| is_set(lsd_eod_valid.operation)
	|| is_set(protocol_eod_time_stamp.operation)
	|| is_set(protocol_eod_valid.operation)
	|| is_set(protocol_name.operation)
	|| is_set(rib_info_valid.operation)
	|| is_set(rib_tables_converged_time_stamp.operation)
	|| is_set(rsi_eod_time_stamp.operation)
	|| is_set(rsi_eod_valid.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fis-proto-state";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FisProtoState' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aib_eod_time_stamp.is_set || is_set(aib_eod_time_stamp.operation)) leaf_name_data.push_back(aib_eod_time_stamp.get_name_leafdata());
    if (bcdl_tables.is_set || is_set(bcdl_tables.operation)) leaf_name_data.push_back(bcdl_tables.get_name_leafdata());
    if (converged_tables.is_set || is_set(converged_tables.operation)) leaf_name_data.push_back(converged_tables.get_name_leafdata());
    if (lmrib_eod_time_stamp.is_set || is_set(lmrib_eod_time_stamp.operation)) leaf_name_data.push_back(lmrib_eod_time_stamp.get_name_leafdata());
    if (lmrib_eod_valid.is_set || is_set(lmrib_eod_valid.operation)) leaf_name_data.push_back(lmrib_eod_valid.get_name_leafdata());
    if (lsd_eod_time_stamp.is_set || is_set(lsd_eod_time_stamp.operation)) leaf_name_data.push_back(lsd_eod_time_stamp.get_name_leafdata());
    if (lsd_eod_valid.is_set || is_set(lsd_eod_valid.operation)) leaf_name_data.push_back(lsd_eod_valid.get_name_leafdata());
    if (protocol_eod_time_stamp.is_set || is_set(protocol_eod_time_stamp.operation)) leaf_name_data.push_back(protocol_eod_time_stamp.get_name_leafdata());
    if (protocol_eod_valid.is_set || is_set(protocol_eod_valid.operation)) leaf_name_data.push_back(protocol_eod_valid.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (rib_info_valid.is_set || is_set(rib_info_valid.operation)) leaf_name_data.push_back(rib_info_valid.get_name_leafdata());
    if (rib_tables_converged_time_stamp.is_set || is_set(rib_tables_converged_time_stamp.operation)) leaf_name_data.push_back(rib_tables_converged_time_stamp.get_name_leafdata());
    if (rsi_eod_time_stamp.is_set || is_set(rsi_eod_time_stamp.operation)) leaf_name_data.push_back(rsi_eod_time_stamp.get_name_leafdata());
    if (rsi_eod_valid.is_set || is_set(rsi_eod_valid.operation)) leaf_name_data.push_back(rsi_eod_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::IssuState::FisProtoState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aib-eod-time-stamp")
    {
        aib_eod_time_stamp = value;
    }
    if(value_path == "bcdl-tables")
    {
        bcdl_tables = value;
    }
    if(value_path == "converged-tables")
    {
        converged_tables = value;
    }
    if(value_path == "lmrib-eod-time-stamp")
    {
        lmrib_eod_time_stamp = value;
    }
    if(value_path == "lmrib-eod-valid")
    {
        lmrib_eod_valid = value;
    }
    if(value_path == "lsd-eod-time-stamp")
    {
        lsd_eod_time_stamp = value;
    }
    if(value_path == "lsd-eod-valid")
    {
        lsd_eod_valid = value;
    }
    if(value_path == "protocol-eod-time-stamp")
    {
        protocol_eod_time_stamp = value;
    }
    if(value_path == "protocol-eod-valid")
    {
        protocol_eod_valid = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "rib-info-valid")
    {
        rib_info_valid = value;
    }
    if(value_path == "rib-tables-converged-time-stamp")
    {
        rib_tables_converged_time_stamp = value;
    }
    if(value_path == "rsi-eod-time-stamp")
    {
        rsi_eod_time_stamp = value;
    }
    if(value_path == "rsi-eod-valid")
    {
        rsi_eod_valid = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Resource::Resource()
    :
    resource_detail_info(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo>())
	,resource_hardware_egress_info(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo>())
	,resource_hardware_ingress_info(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo>())
	,resource_summary_info(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo>())
{
    resource_detail_info->parent = this;
    children["resource-detail-info"] = resource_detail_info;

    resource_hardware_egress_info->parent = this;
    children["resource-hardware-egress-info"] = resource_hardware_egress_info;

    resource_hardware_ingress_info->parent = this;
    children["resource-hardware-ingress-info"] = resource_hardware_ingress_info;

    resource_summary_info->parent = this;
    children["resource-summary-info"] = resource_summary_info;

    yang_name = "resource"; yang_parent_name = "protocol";
}

Fib::Nodes::Node::Protocols::Protocol::Resource::~Resource()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::has_data() const
{
    return (resource_detail_info !=  nullptr && resource_detail_info->has_data())
	|| (resource_hardware_egress_info !=  nullptr && resource_hardware_egress_info->has_data())
	|| (resource_hardware_ingress_info !=  nullptr && resource_hardware_ingress_info->has_data())
	|| (resource_summary_info !=  nullptr && resource_summary_info->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::has_operation() const
{
    return is_set(operation)
	|| (resource_detail_info !=  nullptr && resource_detail_info->has_operation())
	|| (resource_hardware_egress_info !=  nullptr && resource_hardware_egress_info->has_operation())
	|| (resource_hardware_ingress_info !=  nullptr && resource_hardware_ingress_info->has_operation())
	|| (resource_summary_info !=  nullptr && resource_summary_info->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Resource::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Resource::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Resource' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Resource::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "resource-detail-info")
    {
        if(resource_detail_info != nullptr)
        {
            children["resource-detail-info"] = resource_detail_info;
        }
        else
        {
            resource_detail_info = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo>();
            resource_detail_info->parent = this;
            children["resource-detail-info"] = resource_detail_info;
        }
        return children.at("resource-detail-info");
    }

    if(child_yang_name == "resource-hardware-egress-info")
    {
        if(resource_hardware_egress_info != nullptr)
        {
            children["resource-hardware-egress-info"] = resource_hardware_egress_info;
        }
        else
        {
            resource_hardware_egress_info = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo>();
            resource_hardware_egress_info->parent = this;
            children["resource-hardware-egress-info"] = resource_hardware_egress_info;
        }
        return children.at("resource-hardware-egress-info");
    }

    if(child_yang_name == "resource-hardware-ingress-info")
    {
        if(resource_hardware_ingress_info != nullptr)
        {
            children["resource-hardware-ingress-info"] = resource_hardware_ingress_info;
        }
        else
        {
            resource_hardware_ingress_info = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo>();
            resource_hardware_ingress_info->parent = this;
            children["resource-hardware-ingress-info"] = resource_hardware_ingress_info;
        }
        return children.at("resource-hardware-ingress-info");
    }

    if(child_yang_name == "resource-summary-info")
    {
        if(resource_summary_info != nullptr)
        {
            children["resource-summary-info"] = resource_summary_info;
        }
        else
        {
            resource_summary_info = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo>();
            resource_summary_info->parent = this;
            children["resource-summary-info"] = resource_summary_info;
        }
        return children.at("resource-summary-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Resource::get_children()
{
    if(children.find("resource-detail-info") == children.end())
    {
        if(resource_detail_info != nullptr)
        {
            children["resource-detail-info"] = resource_detail_info;
        }
    }

    if(children.find("resource-hardware-egress-info") == children.end())
    {
        if(resource_hardware_egress_info != nullptr)
        {
            children["resource-hardware-egress-info"] = resource_hardware_egress_info;
        }
    }

    if(children.find("resource-hardware-ingress-info") == children.end())
    {
        if(resource_hardware_ingress_info != nullptr)
        {
            children["resource-hardware-ingress-info"] = resource_hardware_ingress_info;
        }
    }

    if(children.find("resource-summary-info") == children.end())
    {
        if(resource_summary_info != nullptr)
        {
            children["resource-summary-info"] = resource_summary_info;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::ResourceDetailInfo()
    :
    sr_curr_mode{YType::uint32, "sr-curr-mode"},
    sr_hw_oor_count{YType::uint8, "sr-hw-oor-count"},
    sr_hwrsrc_info{YType::str, "sr-hwrsrc-info"},
    sr_hwrsrc_mode{YType::uint32, "sr-hwrsrc-mode"},
    sr_in_oor_ts{YType::uint64, "sr-in-oor-ts"},
    sr_out_oor_ts{YType::uint64, "sr-out-oor-ts"},
    sr_shmwin_oor_count{YType::uint8, "sr-shmwin-oor-count"}
{
    yang_name = "resource-detail-info"; yang_parent_name = "resource";
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::~ResourceDetailInfo()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::has_data() const
{
    for (std::size_t index=0; index<sr_shm_state.size(); index++)
    {
        if(sr_shm_state[index]->has_data())
            return true;
    }
    for (auto const & leaf : sr_hwrsrc_mode.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return sr_curr_mode.is_set
	|| sr_hw_oor_count.is_set
	|| sr_hwrsrc_info.is_set
	|| sr_in_oor_ts.is_set
	|| sr_out_oor_ts.is_set
	|| sr_shmwin_oor_count.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::has_operation() const
{
    for (std::size_t index=0; index<sr_shm_state.size(); index++)
    {
        if(sr_shm_state[index]->has_operation())
            return true;
    }
    for (auto const & leaf : sr_hwrsrc_mode.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(sr_curr_mode.operation)
	|| is_set(sr_hw_oor_count.operation)
	|| is_set(sr_hwrsrc_info.operation)
	|| is_set(sr_hwrsrc_mode.operation)
	|| is_set(sr_in_oor_ts.operation)
	|| is_set(sr_out_oor_ts.operation)
	|| is_set(sr_shmwin_oor_count.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource-detail-info";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResourceDetailInfo' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_curr_mode.is_set || is_set(sr_curr_mode.operation)) leaf_name_data.push_back(sr_curr_mode.get_name_leafdata());
    if (sr_hw_oor_count.is_set || is_set(sr_hw_oor_count.operation)) leaf_name_data.push_back(sr_hw_oor_count.get_name_leafdata());
    if (sr_hwrsrc_info.is_set || is_set(sr_hwrsrc_info.operation)) leaf_name_data.push_back(sr_hwrsrc_info.get_name_leafdata());
    if (sr_in_oor_ts.is_set || is_set(sr_in_oor_ts.operation)) leaf_name_data.push_back(sr_in_oor_ts.get_name_leafdata());
    if (sr_out_oor_ts.is_set || is_set(sr_out_oor_ts.operation)) leaf_name_data.push_back(sr_out_oor_ts.get_name_leafdata());
    if (sr_shmwin_oor_count.is_set || is_set(sr_shmwin_oor_count.operation)) leaf_name_data.push_back(sr_shmwin_oor_count.get_name_leafdata());

    auto sr_hwrsrc_mode_name_datas = sr_hwrsrc_mode.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sr_hwrsrc_mode_name_datas.begin(), sr_hwrsrc_mode_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-shm-state")
    {
        for(auto const & c : sr_shm_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState>();
        c->parent = this;
        sr_shm_state.push_back(std::move(c));
        children[segment_path] = sr_shm_state.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::get_children()
{
    for (auto const & c : sr_shm_state)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sr-curr-mode")
    {
        sr_curr_mode = value;
    }
    if(value_path == "sr-hw-oor-count")
    {
        sr_hw_oor_count = value;
    }
    if(value_path == "sr-hwrsrc-info")
    {
        sr_hwrsrc_info = value;
    }
    if(value_path == "sr-hwrsrc-mode")
    {
        sr_hwrsrc_mode.append(value);
    }
    if(value_path == "sr-in-oor-ts")
    {
        sr_in_oor_ts = value;
    }
    if(value_path == "sr-out-oor-ts")
    {
        sr_out_oor_ts = value;
    }
    if(value_path == "sr-shmwin-oor-count")
    {
        sr_shmwin_oor_count = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState::SrShmState()
    :
    srs_avg_avail{YType::uint64, "srs-avg-avail"},
    srs_curr_mode{YType::uint32, "srs-curr-mode"},
    srs_max_avail{YType::uint64, "srs-max-avail"}
{
    yang_name = "sr-shm-state"; yang_parent_name = "resource-detail-info";
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState::~SrShmState()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState::has_data() const
{
    return srs_avg_avail.is_set
	|| srs_curr_mode.is_set
	|| srs_max_avail.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState::has_operation() const
{
    return is_set(operation)
	|| is_set(srs_avg_avail.operation)
	|| is_set(srs_curr_mode.operation)
	|| is_set(srs_max_avail.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-shm-state";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrShmState' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srs_avg_avail.is_set || is_set(srs_avg_avail.operation)) leaf_name_data.push_back(srs_avg_avail.get_name_leafdata());
    if (srs_curr_mode.is_set || is_set(srs_curr_mode.operation)) leaf_name_data.push_back(srs_curr_mode.get_name_leafdata());
    if (srs_max_avail.is_set || is_set(srs_max_avail.operation)) leaf_name_data.push_back(srs_max_avail.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceDetailInfo::SrShmState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srs-avg-avail")
    {
        srs_avg_avail = value;
    }
    if(value_path == "srs-curr-mode")
    {
        srs_curr_mode = value;
    }
    if(value_path == "srs-max-avail")
    {
        srs_max_avail = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::ResourceHardwareIngressInfo()
    :
    sr_curr_mode{YType::uint32, "sr-curr-mode"},
    sr_hw_oor_count{YType::uint8, "sr-hw-oor-count"},
    sr_hwrsrc_info{YType::str, "sr-hwrsrc-info"},
    sr_hwrsrc_mode{YType::uint32, "sr-hwrsrc-mode"},
    sr_in_oor_ts{YType::uint64, "sr-in-oor-ts"},
    sr_out_oor_ts{YType::uint64, "sr-out-oor-ts"},
    sr_shmwin_oor_count{YType::uint8, "sr-shmwin-oor-count"}
{
    yang_name = "resource-hardware-ingress-info"; yang_parent_name = "resource";
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::~ResourceHardwareIngressInfo()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::has_data() const
{
    for (std::size_t index=0; index<sr_shm_state.size(); index++)
    {
        if(sr_shm_state[index]->has_data())
            return true;
    }
    for (auto const & leaf : sr_hwrsrc_mode.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return sr_curr_mode.is_set
	|| sr_hw_oor_count.is_set
	|| sr_hwrsrc_info.is_set
	|| sr_in_oor_ts.is_set
	|| sr_out_oor_ts.is_set
	|| sr_shmwin_oor_count.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::has_operation() const
{
    for (std::size_t index=0; index<sr_shm_state.size(); index++)
    {
        if(sr_shm_state[index]->has_operation())
            return true;
    }
    for (auto const & leaf : sr_hwrsrc_mode.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(sr_curr_mode.operation)
	|| is_set(sr_hw_oor_count.operation)
	|| is_set(sr_hwrsrc_info.operation)
	|| is_set(sr_hwrsrc_mode.operation)
	|| is_set(sr_in_oor_ts.operation)
	|| is_set(sr_out_oor_ts.operation)
	|| is_set(sr_shmwin_oor_count.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource-hardware-ingress-info";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResourceHardwareIngressInfo' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_curr_mode.is_set || is_set(sr_curr_mode.operation)) leaf_name_data.push_back(sr_curr_mode.get_name_leafdata());
    if (sr_hw_oor_count.is_set || is_set(sr_hw_oor_count.operation)) leaf_name_data.push_back(sr_hw_oor_count.get_name_leafdata());
    if (sr_hwrsrc_info.is_set || is_set(sr_hwrsrc_info.operation)) leaf_name_data.push_back(sr_hwrsrc_info.get_name_leafdata());
    if (sr_in_oor_ts.is_set || is_set(sr_in_oor_ts.operation)) leaf_name_data.push_back(sr_in_oor_ts.get_name_leafdata());
    if (sr_out_oor_ts.is_set || is_set(sr_out_oor_ts.operation)) leaf_name_data.push_back(sr_out_oor_ts.get_name_leafdata());
    if (sr_shmwin_oor_count.is_set || is_set(sr_shmwin_oor_count.operation)) leaf_name_data.push_back(sr_shmwin_oor_count.get_name_leafdata());

    auto sr_hwrsrc_mode_name_datas = sr_hwrsrc_mode.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sr_hwrsrc_mode_name_datas.begin(), sr_hwrsrc_mode_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-shm-state")
    {
        for(auto const & c : sr_shm_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState>();
        c->parent = this;
        sr_shm_state.push_back(std::move(c));
        children[segment_path] = sr_shm_state.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::get_children()
{
    for (auto const & c : sr_shm_state)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sr-curr-mode")
    {
        sr_curr_mode = value;
    }
    if(value_path == "sr-hw-oor-count")
    {
        sr_hw_oor_count = value;
    }
    if(value_path == "sr-hwrsrc-info")
    {
        sr_hwrsrc_info = value;
    }
    if(value_path == "sr-hwrsrc-mode")
    {
        sr_hwrsrc_mode.append(value);
    }
    if(value_path == "sr-in-oor-ts")
    {
        sr_in_oor_ts = value;
    }
    if(value_path == "sr-out-oor-ts")
    {
        sr_out_oor_ts = value;
    }
    if(value_path == "sr-shmwin-oor-count")
    {
        sr_shmwin_oor_count = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState::SrShmState()
    :
    srs_avg_avail{YType::uint64, "srs-avg-avail"},
    srs_curr_mode{YType::uint32, "srs-curr-mode"},
    srs_max_avail{YType::uint64, "srs-max-avail"}
{
    yang_name = "sr-shm-state"; yang_parent_name = "resource-hardware-ingress-info";
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState::~SrShmState()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState::has_data() const
{
    return srs_avg_avail.is_set
	|| srs_curr_mode.is_set
	|| srs_max_avail.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState::has_operation() const
{
    return is_set(operation)
	|| is_set(srs_avg_avail.operation)
	|| is_set(srs_curr_mode.operation)
	|| is_set(srs_max_avail.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-shm-state";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrShmState' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srs_avg_avail.is_set || is_set(srs_avg_avail.operation)) leaf_name_data.push_back(srs_avg_avail.get_name_leafdata());
    if (srs_curr_mode.is_set || is_set(srs_curr_mode.operation)) leaf_name_data.push_back(srs_curr_mode.get_name_leafdata());
    if (srs_max_avail.is_set || is_set(srs_max_avail.operation)) leaf_name_data.push_back(srs_max_avail.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareIngressInfo::SrShmState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srs-avg-avail")
    {
        srs_avg_avail = value;
    }
    if(value_path == "srs-curr-mode")
    {
        srs_curr_mode = value;
    }
    if(value_path == "srs-max-avail")
    {
        srs_max_avail = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::ResourceHardwareEgressInfo()
    :
    sr_curr_mode{YType::uint32, "sr-curr-mode"},
    sr_hw_oor_count{YType::uint8, "sr-hw-oor-count"},
    sr_hwrsrc_info{YType::str, "sr-hwrsrc-info"},
    sr_hwrsrc_mode{YType::uint32, "sr-hwrsrc-mode"},
    sr_in_oor_ts{YType::uint64, "sr-in-oor-ts"},
    sr_out_oor_ts{YType::uint64, "sr-out-oor-ts"},
    sr_shmwin_oor_count{YType::uint8, "sr-shmwin-oor-count"}
{
    yang_name = "resource-hardware-egress-info"; yang_parent_name = "resource";
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::~ResourceHardwareEgressInfo()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::has_data() const
{
    for (std::size_t index=0; index<sr_shm_state.size(); index++)
    {
        if(sr_shm_state[index]->has_data())
            return true;
    }
    for (auto const & leaf : sr_hwrsrc_mode.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return sr_curr_mode.is_set
	|| sr_hw_oor_count.is_set
	|| sr_hwrsrc_info.is_set
	|| sr_in_oor_ts.is_set
	|| sr_out_oor_ts.is_set
	|| sr_shmwin_oor_count.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::has_operation() const
{
    for (std::size_t index=0; index<sr_shm_state.size(); index++)
    {
        if(sr_shm_state[index]->has_operation())
            return true;
    }
    for (auto const & leaf : sr_hwrsrc_mode.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(sr_curr_mode.operation)
	|| is_set(sr_hw_oor_count.operation)
	|| is_set(sr_hwrsrc_info.operation)
	|| is_set(sr_hwrsrc_mode.operation)
	|| is_set(sr_in_oor_ts.operation)
	|| is_set(sr_out_oor_ts.operation)
	|| is_set(sr_shmwin_oor_count.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource-hardware-egress-info";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResourceHardwareEgressInfo' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_curr_mode.is_set || is_set(sr_curr_mode.operation)) leaf_name_data.push_back(sr_curr_mode.get_name_leafdata());
    if (sr_hw_oor_count.is_set || is_set(sr_hw_oor_count.operation)) leaf_name_data.push_back(sr_hw_oor_count.get_name_leafdata());
    if (sr_hwrsrc_info.is_set || is_set(sr_hwrsrc_info.operation)) leaf_name_data.push_back(sr_hwrsrc_info.get_name_leafdata());
    if (sr_in_oor_ts.is_set || is_set(sr_in_oor_ts.operation)) leaf_name_data.push_back(sr_in_oor_ts.get_name_leafdata());
    if (sr_out_oor_ts.is_set || is_set(sr_out_oor_ts.operation)) leaf_name_data.push_back(sr_out_oor_ts.get_name_leafdata());
    if (sr_shmwin_oor_count.is_set || is_set(sr_shmwin_oor_count.operation)) leaf_name_data.push_back(sr_shmwin_oor_count.get_name_leafdata());

    auto sr_hwrsrc_mode_name_datas = sr_hwrsrc_mode.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sr_hwrsrc_mode_name_datas.begin(), sr_hwrsrc_mode_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-shm-state")
    {
        for(auto const & c : sr_shm_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState>();
        c->parent = this;
        sr_shm_state.push_back(std::move(c));
        children[segment_path] = sr_shm_state.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::get_children()
{
    for (auto const & c : sr_shm_state)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sr-curr-mode")
    {
        sr_curr_mode = value;
    }
    if(value_path == "sr-hw-oor-count")
    {
        sr_hw_oor_count = value;
    }
    if(value_path == "sr-hwrsrc-info")
    {
        sr_hwrsrc_info = value;
    }
    if(value_path == "sr-hwrsrc-mode")
    {
        sr_hwrsrc_mode.append(value);
    }
    if(value_path == "sr-in-oor-ts")
    {
        sr_in_oor_ts = value;
    }
    if(value_path == "sr-out-oor-ts")
    {
        sr_out_oor_ts = value;
    }
    if(value_path == "sr-shmwin-oor-count")
    {
        sr_shmwin_oor_count = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState::SrShmState()
    :
    srs_avg_avail{YType::uint64, "srs-avg-avail"},
    srs_curr_mode{YType::uint32, "srs-curr-mode"},
    srs_max_avail{YType::uint64, "srs-max-avail"}
{
    yang_name = "sr-shm-state"; yang_parent_name = "resource-hardware-egress-info";
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState::~SrShmState()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState::has_data() const
{
    return srs_avg_avail.is_set
	|| srs_curr_mode.is_set
	|| srs_max_avail.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState::has_operation() const
{
    return is_set(operation)
	|| is_set(srs_avg_avail.operation)
	|| is_set(srs_curr_mode.operation)
	|| is_set(srs_max_avail.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-shm-state";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrShmState' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srs_avg_avail.is_set || is_set(srs_avg_avail.operation)) leaf_name_data.push_back(srs_avg_avail.get_name_leafdata());
    if (srs_curr_mode.is_set || is_set(srs_curr_mode.operation)) leaf_name_data.push_back(srs_curr_mode.get_name_leafdata());
    if (srs_max_avail.is_set || is_set(srs_max_avail.operation)) leaf_name_data.push_back(srs_max_avail.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceHardwareEgressInfo::SrShmState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srs-avg-avail")
    {
        srs_avg_avail = value;
    }
    if(value_path == "srs-curr-mode")
    {
        srs_curr_mode = value;
    }
    if(value_path == "srs-max-avail")
    {
        srs_max_avail = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::ResourceSummaryInfo()
    :
    sr_curr_mode{YType::uint32, "sr-curr-mode"},
    sr_hw_oor_count{YType::uint8, "sr-hw-oor-count"},
    sr_hwrsrc_info{YType::str, "sr-hwrsrc-info"},
    sr_hwrsrc_mode{YType::uint32, "sr-hwrsrc-mode"},
    sr_in_oor_ts{YType::uint64, "sr-in-oor-ts"},
    sr_out_oor_ts{YType::uint64, "sr-out-oor-ts"},
    sr_shmwin_oor_count{YType::uint8, "sr-shmwin-oor-count"}
{
    yang_name = "resource-summary-info"; yang_parent_name = "resource";
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::~ResourceSummaryInfo()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::has_data() const
{
    for (std::size_t index=0; index<sr_shm_state.size(); index++)
    {
        if(sr_shm_state[index]->has_data())
            return true;
    }
    for (auto const & leaf : sr_hwrsrc_mode.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return sr_curr_mode.is_set
	|| sr_hw_oor_count.is_set
	|| sr_hwrsrc_info.is_set
	|| sr_in_oor_ts.is_set
	|| sr_out_oor_ts.is_set
	|| sr_shmwin_oor_count.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::has_operation() const
{
    for (std::size_t index=0; index<sr_shm_state.size(); index++)
    {
        if(sr_shm_state[index]->has_operation())
            return true;
    }
    for (auto const & leaf : sr_hwrsrc_mode.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(sr_curr_mode.operation)
	|| is_set(sr_hw_oor_count.operation)
	|| is_set(sr_hwrsrc_info.operation)
	|| is_set(sr_hwrsrc_mode.operation)
	|| is_set(sr_in_oor_ts.operation)
	|| is_set(sr_out_oor_ts.operation)
	|| is_set(sr_shmwin_oor_count.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resource-summary-info";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResourceSummaryInfo' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sr_curr_mode.is_set || is_set(sr_curr_mode.operation)) leaf_name_data.push_back(sr_curr_mode.get_name_leafdata());
    if (sr_hw_oor_count.is_set || is_set(sr_hw_oor_count.operation)) leaf_name_data.push_back(sr_hw_oor_count.get_name_leafdata());
    if (sr_hwrsrc_info.is_set || is_set(sr_hwrsrc_info.operation)) leaf_name_data.push_back(sr_hwrsrc_info.get_name_leafdata());
    if (sr_in_oor_ts.is_set || is_set(sr_in_oor_ts.operation)) leaf_name_data.push_back(sr_in_oor_ts.get_name_leafdata());
    if (sr_out_oor_ts.is_set || is_set(sr_out_oor_ts.operation)) leaf_name_data.push_back(sr_out_oor_ts.get_name_leafdata());
    if (sr_shmwin_oor_count.is_set || is_set(sr_shmwin_oor_count.operation)) leaf_name_data.push_back(sr_shmwin_oor_count.get_name_leafdata());

    auto sr_hwrsrc_mode_name_datas = sr_hwrsrc_mode.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sr_hwrsrc_mode_name_datas.begin(), sr_hwrsrc_mode_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-shm-state")
    {
        for(auto const & c : sr_shm_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState>();
        c->parent = this;
        sr_shm_state.push_back(std::move(c));
        children[segment_path] = sr_shm_state.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::get_children()
{
    for (auto const & c : sr_shm_state)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sr-curr-mode")
    {
        sr_curr_mode = value;
    }
    if(value_path == "sr-hw-oor-count")
    {
        sr_hw_oor_count = value;
    }
    if(value_path == "sr-hwrsrc-info")
    {
        sr_hwrsrc_info = value;
    }
    if(value_path == "sr-hwrsrc-mode")
    {
        sr_hwrsrc_mode.append(value);
    }
    if(value_path == "sr-in-oor-ts")
    {
        sr_in_oor_ts = value;
    }
    if(value_path == "sr-out-oor-ts")
    {
        sr_out_oor_ts = value;
    }
    if(value_path == "sr-shmwin-oor-count")
    {
        sr_shmwin_oor_count = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState::SrShmState()
    :
    srs_avg_avail{YType::uint64, "srs-avg-avail"},
    srs_curr_mode{YType::uint32, "srs-curr-mode"},
    srs_max_avail{YType::uint64, "srs-max-avail"}
{
    yang_name = "sr-shm-state"; yang_parent_name = "resource-summary-info";
}

Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState::~SrShmState()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState::has_data() const
{
    return srs_avg_avail.is_set
	|| srs_curr_mode.is_set
	|| srs_max_avail.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState::has_operation() const
{
    return is_set(operation)
	|| is_set(srs_avg_avail.operation)
	|| is_set(srs_curr_mode.operation)
	|| is_set(srs_max_avail.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-shm-state";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrShmState' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srs_avg_avail.is_set || is_set(srs_avg_avail.operation)) leaf_name_data.push_back(srs_avg_avail.get_name_leafdata());
    if (srs_curr_mode.is_set || is_set(srs_curr_mode.operation)) leaf_name_data.push_back(srs_curr_mode.get_name_leafdata());
    if (srs_max_avail.is_set || is_set(srs_max_avail.operation)) leaf_name_data.push_back(srs_max_avail.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Resource::ResourceSummaryInfo::SrShmState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srs-avg-avail")
    {
        srs_avg_avail = value;
    }
    if(value_path == "srs-curr-mode")
    {
        srs_curr_mode = value;
    }
    if(value_path == "srs-max-avail")
    {
        srs_max_avail = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummaries()
{
    yang_name = "fib-summaries"; yang_parent_name = "protocol";
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::~FibSummaries()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::has_data() const
{
    for (std::size_t index=0; index<fib_summary.size(); index++)
    {
        if(fib_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::has_operation() const
{
    for (std::size_t index=0; index<fib_summary.size(); index++)
    {
        if(fib_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::FibSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-summaries";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::FibSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FibSummaries' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fib-summary")
    {
        for(auto const & c : fib_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary>();
        c->parent = this;
        fib_summary.push_back(std::move(c));
        children[segment_path] = fib_summary.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::FibSummaries::get_children()
{
    for (auto const & c : fib_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::FibSummary()
    :
    cef_route_drops{YType::uint32, "cef-route-drops"},
    cef_version_mismatch_route_drops{YType::uint64, "cef-version-mismatch-route-drops"},
    cefl_bl_recycled_routes{YType::uint32, "cefl-bl-recycled-routes"},
    delete_cache_num_entries{YType::uint32, "delete-cache-num-entries"},
    existing_leaves_revisions{YType::uint32, "existing-leaves-revisions"},
    extended_prefixes{YType::uint32, "extended-prefixes"},
    fib_default_prefix{YType::uint32, "fib-default-prefix"},
    fib_default_prefix_mask_length{YType::uint32, "fib-default-prefix-mask-length"},
    forwarding_elements{YType::uint32, "forwarding-elements"},
    imposition_prefixes{YType::uint32, "imposition-prefixes"},
    incomplete_next_hops{YType::uint32, "incomplete-next-hops"},
    ldi_backwalks{YType::uint32, "ldi-backwalks"},
    leaves_used_bytes{YType::uint32, "leaves-used-bytes"},
    lisp_eid_prefixes{YType::uint32, "lisp-eid-prefixes"},
    lisp_eid_valid_prefixes{YType::uint32, "lisp-eid-valid-prefixes"},
    lisp_rloc_objects{YType::uint32, "lisp-rloc-objects"},
    load_balancing{YType::enumeration, "load-balancing"},
    load_sharing_elements{YType::uint32, "load-sharing-elements"},
    load_sharing_references{YType::uint64, "load-sharing-references"},
    max_resolution_timer{YType::uint32, "max-resolution-timer"},
    new_unresolve_entries{YType::uint32, "new-unresolve-entries"},
    next_hops{YType::uint32, "next-hops"},
    old_unresolve_entries{YType::uint32, "old-unresolve-entries"},
    prefix{YType::str, "prefix"},
    prefix_in_place_modifications{YType::uint32, "prefix-in-place-modifications"},
    reresolve_entries{YType::uint32, "reresolve-entries"},
    resolution_timer{YType::uint32, "resolution-timer"},
    routes{YType::uint32, "routes"},
    slow_process_timer{YType::uint32, "slow-process-timer"},
    ss_drop_pl_count{YType::uint32, "ss-drop-pl-count"},
    ss_prot_route_count{YType::uint32, "ss-prot-route-count"},
    ss_tbl_id{YType::uint32, "ss-tbl-id"},
    ss_tbl_id_ptr{YType::uint32, "ss-tbl-id-ptr"},
    ss_vr_id{YType::uint32, "ss-vr-id"},
    ss_vrf_id{YType::uint32, "ss-vrf-id"},
    ss_vxlan_ltep_ifh{YType::str, "ss-vxlan-ltep-ifh"},
    stale_prefix_deletes{YType::uint32, "stale-prefix-deletes"},
    table_id{YType::int32, "table-id"},
    total_load_share_element_bytes{YType::uint32, "total-load-share-element-bytes"},
    unresolve_entries{YType::uint32, "unresolve-entries"},
    vrf_name{YType::str, "vrf-name"}
    	,
    cross_shared_load_sharing_element(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement>())
	,exclusive_load_sharing_element(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement>())
	,label_shared_load_sharing_element(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement>())
	,shared_load_sharing_element(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement>())
{
    cross_shared_load_sharing_element->parent = this;
    children["cross-shared-load-sharing-element"] = cross_shared_load_sharing_element;

    exclusive_load_sharing_element->parent = this;
    children["exclusive-load-sharing-element"] = exclusive_load_sharing_element;

    label_shared_load_sharing_element->parent = this;
    children["label-shared-load-sharing-element"] = label_shared_load_sharing_element;

    shared_load_sharing_element->parent = this;
    children["shared-load-sharing-element"] = shared_load_sharing_element;

    yang_name = "fib-summary"; yang_parent_name = "fib-summaries";
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::~FibSummary()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::has_data() const
{
    return cef_route_drops.is_set
	|| cef_version_mismatch_route_drops.is_set
	|| cefl_bl_recycled_routes.is_set
	|| delete_cache_num_entries.is_set
	|| existing_leaves_revisions.is_set
	|| extended_prefixes.is_set
	|| fib_default_prefix.is_set
	|| fib_default_prefix_mask_length.is_set
	|| forwarding_elements.is_set
	|| imposition_prefixes.is_set
	|| incomplete_next_hops.is_set
	|| ldi_backwalks.is_set
	|| leaves_used_bytes.is_set
	|| lisp_eid_prefixes.is_set
	|| lisp_eid_valid_prefixes.is_set
	|| lisp_rloc_objects.is_set
	|| load_balancing.is_set
	|| load_sharing_elements.is_set
	|| load_sharing_references.is_set
	|| max_resolution_timer.is_set
	|| new_unresolve_entries.is_set
	|| next_hops.is_set
	|| old_unresolve_entries.is_set
	|| prefix.is_set
	|| prefix_in_place_modifications.is_set
	|| reresolve_entries.is_set
	|| resolution_timer.is_set
	|| routes.is_set
	|| slow_process_timer.is_set
	|| ss_drop_pl_count.is_set
	|| ss_prot_route_count.is_set
	|| ss_tbl_id.is_set
	|| ss_tbl_id_ptr.is_set
	|| ss_vr_id.is_set
	|| ss_vrf_id.is_set
	|| ss_vxlan_ltep_ifh.is_set
	|| stale_prefix_deletes.is_set
	|| table_id.is_set
	|| total_load_share_element_bytes.is_set
	|| unresolve_entries.is_set
	|| vrf_name.is_set
	|| (cross_shared_load_sharing_element !=  nullptr && cross_shared_load_sharing_element->has_data())
	|| (exclusive_load_sharing_element !=  nullptr && exclusive_load_sharing_element->has_data())
	|| (label_shared_load_sharing_element !=  nullptr && label_shared_load_sharing_element->has_data())
	|| (shared_load_sharing_element !=  nullptr && shared_load_sharing_element->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(cef_route_drops.operation)
	|| is_set(cef_version_mismatch_route_drops.operation)
	|| is_set(cefl_bl_recycled_routes.operation)
	|| is_set(delete_cache_num_entries.operation)
	|| is_set(existing_leaves_revisions.operation)
	|| is_set(extended_prefixes.operation)
	|| is_set(fib_default_prefix.operation)
	|| is_set(fib_default_prefix_mask_length.operation)
	|| is_set(forwarding_elements.operation)
	|| is_set(imposition_prefixes.operation)
	|| is_set(incomplete_next_hops.operation)
	|| is_set(ldi_backwalks.operation)
	|| is_set(leaves_used_bytes.operation)
	|| is_set(lisp_eid_prefixes.operation)
	|| is_set(lisp_eid_valid_prefixes.operation)
	|| is_set(lisp_rloc_objects.operation)
	|| is_set(load_balancing.operation)
	|| is_set(load_sharing_elements.operation)
	|| is_set(load_sharing_references.operation)
	|| is_set(max_resolution_timer.operation)
	|| is_set(new_unresolve_entries.operation)
	|| is_set(next_hops.operation)
	|| is_set(old_unresolve_entries.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_in_place_modifications.operation)
	|| is_set(reresolve_entries.operation)
	|| is_set(resolution_timer.operation)
	|| is_set(routes.operation)
	|| is_set(slow_process_timer.operation)
	|| is_set(ss_drop_pl_count.operation)
	|| is_set(ss_prot_route_count.operation)
	|| is_set(ss_tbl_id.operation)
	|| is_set(ss_tbl_id_ptr.operation)
	|| is_set(ss_vr_id.operation)
	|| is_set(ss_vrf_id.operation)
	|| is_set(ss_vxlan_ltep_ifh.operation)
	|| is_set(stale_prefix_deletes.operation)
	|| is_set(table_id.operation)
	|| is_set(total_load_share_element_bytes.operation)
	|| is_set(unresolve_entries.operation)
	|| is_set(vrf_name.operation)
	|| (cross_shared_load_sharing_element !=  nullptr && cross_shared_load_sharing_element->has_operation())
	|| (exclusive_load_sharing_element !=  nullptr && exclusive_load_sharing_element->has_operation())
	|| (label_shared_load_sharing_element !=  nullptr && label_shared_load_sharing_element->has_operation())
	|| (shared_load_sharing_element !=  nullptr && shared_load_sharing_element->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-summary";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FibSummary' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cef_route_drops.is_set || is_set(cef_route_drops.operation)) leaf_name_data.push_back(cef_route_drops.get_name_leafdata());
    if (cef_version_mismatch_route_drops.is_set || is_set(cef_version_mismatch_route_drops.operation)) leaf_name_data.push_back(cef_version_mismatch_route_drops.get_name_leafdata());
    if (cefl_bl_recycled_routes.is_set || is_set(cefl_bl_recycled_routes.operation)) leaf_name_data.push_back(cefl_bl_recycled_routes.get_name_leafdata());
    if (delete_cache_num_entries.is_set || is_set(delete_cache_num_entries.operation)) leaf_name_data.push_back(delete_cache_num_entries.get_name_leafdata());
    if (existing_leaves_revisions.is_set || is_set(existing_leaves_revisions.operation)) leaf_name_data.push_back(existing_leaves_revisions.get_name_leafdata());
    if (extended_prefixes.is_set || is_set(extended_prefixes.operation)) leaf_name_data.push_back(extended_prefixes.get_name_leafdata());
    if (fib_default_prefix.is_set || is_set(fib_default_prefix.operation)) leaf_name_data.push_back(fib_default_prefix.get_name_leafdata());
    if (fib_default_prefix_mask_length.is_set || is_set(fib_default_prefix_mask_length.operation)) leaf_name_data.push_back(fib_default_prefix_mask_length.get_name_leafdata());
    if (forwarding_elements.is_set || is_set(forwarding_elements.operation)) leaf_name_data.push_back(forwarding_elements.get_name_leafdata());
    if (imposition_prefixes.is_set || is_set(imposition_prefixes.operation)) leaf_name_data.push_back(imposition_prefixes.get_name_leafdata());
    if (incomplete_next_hops.is_set || is_set(incomplete_next_hops.operation)) leaf_name_data.push_back(incomplete_next_hops.get_name_leafdata());
    if (ldi_backwalks.is_set || is_set(ldi_backwalks.operation)) leaf_name_data.push_back(ldi_backwalks.get_name_leafdata());
    if (leaves_used_bytes.is_set || is_set(leaves_used_bytes.operation)) leaf_name_data.push_back(leaves_used_bytes.get_name_leafdata());
    if (lisp_eid_prefixes.is_set || is_set(lisp_eid_prefixes.operation)) leaf_name_data.push_back(lisp_eid_prefixes.get_name_leafdata());
    if (lisp_eid_valid_prefixes.is_set || is_set(lisp_eid_valid_prefixes.operation)) leaf_name_data.push_back(lisp_eid_valid_prefixes.get_name_leafdata());
    if (lisp_rloc_objects.is_set || is_set(lisp_rloc_objects.operation)) leaf_name_data.push_back(lisp_rloc_objects.get_name_leafdata());
    if (load_balancing.is_set || is_set(load_balancing.operation)) leaf_name_data.push_back(load_balancing.get_name_leafdata());
    if (load_sharing_elements.is_set || is_set(load_sharing_elements.operation)) leaf_name_data.push_back(load_sharing_elements.get_name_leafdata());
    if (load_sharing_references.is_set || is_set(load_sharing_references.operation)) leaf_name_data.push_back(load_sharing_references.get_name_leafdata());
    if (max_resolution_timer.is_set || is_set(max_resolution_timer.operation)) leaf_name_data.push_back(max_resolution_timer.get_name_leafdata());
    if (new_unresolve_entries.is_set || is_set(new_unresolve_entries.operation)) leaf_name_data.push_back(new_unresolve_entries.get_name_leafdata());
    if (next_hops.is_set || is_set(next_hops.operation)) leaf_name_data.push_back(next_hops.get_name_leafdata());
    if (old_unresolve_entries.is_set || is_set(old_unresolve_entries.operation)) leaf_name_data.push_back(old_unresolve_entries.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_in_place_modifications.is_set || is_set(prefix_in_place_modifications.operation)) leaf_name_data.push_back(prefix_in_place_modifications.get_name_leafdata());
    if (reresolve_entries.is_set || is_set(reresolve_entries.operation)) leaf_name_data.push_back(reresolve_entries.get_name_leafdata());
    if (resolution_timer.is_set || is_set(resolution_timer.operation)) leaf_name_data.push_back(resolution_timer.get_name_leafdata());
    if (routes.is_set || is_set(routes.operation)) leaf_name_data.push_back(routes.get_name_leafdata());
    if (slow_process_timer.is_set || is_set(slow_process_timer.operation)) leaf_name_data.push_back(slow_process_timer.get_name_leafdata());
    if (ss_drop_pl_count.is_set || is_set(ss_drop_pl_count.operation)) leaf_name_data.push_back(ss_drop_pl_count.get_name_leafdata());
    if (ss_prot_route_count.is_set || is_set(ss_prot_route_count.operation)) leaf_name_data.push_back(ss_prot_route_count.get_name_leafdata());
    if (ss_tbl_id.is_set || is_set(ss_tbl_id.operation)) leaf_name_data.push_back(ss_tbl_id.get_name_leafdata());
    if (ss_tbl_id_ptr.is_set || is_set(ss_tbl_id_ptr.operation)) leaf_name_data.push_back(ss_tbl_id_ptr.get_name_leafdata());
    if (ss_vr_id.is_set || is_set(ss_vr_id.operation)) leaf_name_data.push_back(ss_vr_id.get_name_leafdata());
    if (ss_vrf_id.is_set || is_set(ss_vrf_id.operation)) leaf_name_data.push_back(ss_vrf_id.get_name_leafdata());
    if (ss_vxlan_ltep_ifh.is_set || is_set(ss_vxlan_ltep_ifh.operation)) leaf_name_data.push_back(ss_vxlan_ltep_ifh.get_name_leafdata());
    if (stale_prefix_deletes.is_set || is_set(stale_prefix_deletes.operation)) leaf_name_data.push_back(stale_prefix_deletes.get_name_leafdata());
    if (table_id.is_set || is_set(table_id.operation)) leaf_name_data.push_back(table_id.get_name_leafdata());
    if (total_load_share_element_bytes.is_set || is_set(total_load_share_element_bytes.operation)) leaf_name_data.push_back(total_load_share_element_bytes.get_name_leafdata());
    if (unresolve_entries.is_set || is_set(unresolve_entries.operation)) leaf_name_data.push_back(unresolve_entries.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cross-shared-load-sharing-element")
    {
        if(cross_shared_load_sharing_element != nullptr)
        {
            children["cross-shared-load-sharing-element"] = cross_shared_load_sharing_element;
        }
        else
        {
            cross_shared_load_sharing_element = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement>();
            cross_shared_load_sharing_element->parent = this;
            children["cross-shared-load-sharing-element"] = cross_shared_load_sharing_element;
        }
        return children.at("cross-shared-load-sharing-element");
    }

    if(child_yang_name == "exclusive-load-sharing-element")
    {
        if(exclusive_load_sharing_element != nullptr)
        {
            children["exclusive-load-sharing-element"] = exclusive_load_sharing_element;
        }
        else
        {
            exclusive_load_sharing_element = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement>();
            exclusive_load_sharing_element->parent = this;
            children["exclusive-load-sharing-element"] = exclusive_load_sharing_element;
        }
        return children.at("exclusive-load-sharing-element");
    }

    if(child_yang_name == "label-shared-load-sharing-element")
    {
        if(label_shared_load_sharing_element != nullptr)
        {
            children["label-shared-load-sharing-element"] = label_shared_load_sharing_element;
        }
        else
        {
            label_shared_load_sharing_element = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement>();
            label_shared_load_sharing_element->parent = this;
            children["label-shared-load-sharing-element"] = label_shared_load_sharing_element;
        }
        return children.at("label-shared-load-sharing-element");
    }

    if(child_yang_name == "shared-load-sharing-element")
    {
        if(shared_load_sharing_element != nullptr)
        {
            children["shared-load-sharing-element"] = shared_load_sharing_element;
        }
        else
        {
            shared_load_sharing_element = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement>();
            shared_load_sharing_element->parent = this;
            children["shared-load-sharing-element"] = shared_load_sharing_element;
        }
        return children.at("shared-load-sharing-element");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::get_children()
{
    if(children.find("cross-shared-load-sharing-element") == children.end())
    {
        if(cross_shared_load_sharing_element != nullptr)
        {
            children["cross-shared-load-sharing-element"] = cross_shared_load_sharing_element;
        }
    }

    if(children.find("exclusive-load-sharing-element") == children.end())
    {
        if(exclusive_load_sharing_element != nullptr)
        {
            children["exclusive-load-sharing-element"] = exclusive_load_sharing_element;
        }
    }

    if(children.find("label-shared-load-sharing-element") == children.end())
    {
        if(label_shared_load_sharing_element != nullptr)
        {
            children["label-shared-load-sharing-element"] = label_shared_load_sharing_element;
        }
    }

    if(children.find("shared-load-sharing-element") == children.end())
    {
        if(shared_load_sharing_element != nullptr)
        {
            children["shared-load-sharing-element"] = shared_load_sharing_element;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cef-route-drops")
    {
        cef_route_drops = value;
    }
    if(value_path == "cef-version-mismatch-route-drops")
    {
        cef_version_mismatch_route_drops = value;
    }
    if(value_path == "cefl-bl-recycled-routes")
    {
        cefl_bl_recycled_routes = value;
    }
    if(value_path == "delete-cache-num-entries")
    {
        delete_cache_num_entries = value;
    }
    if(value_path == "existing-leaves-revisions")
    {
        existing_leaves_revisions = value;
    }
    if(value_path == "extended-prefixes")
    {
        extended_prefixes = value;
    }
    if(value_path == "fib-default-prefix")
    {
        fib_default_prefix = value;
    }
    if(value_path == "fib-default-prefix-mask-length")
    {
        fib_default_prefix_mask_length = value;
    }
    if(value_path == "forwarding-elements")
    {
        forwarding_elements = value;
    }
    if(value_path == "imposition-prefixes")
    {
        imposition_prefixes = value;
    }
    if(value_path == "incomplete-next-hops")
    {
        incomplete_next_hops = value;
    }
    if(value_path == "ldi-backwalks")
    {
        ldi_backwalks = value;
    }
    if(value_path == "leaves-used-bytes")
    {
        leaves_used_bytes = value;
    }
    if(value_path == "lisp-eid-prefixes")
    {
        lisp_eid_prefixes = value;
    }
    if(value_path == "lisp-eid-valid-prefixes")
    {
        lisp_eid_valid_prefixes = value;
    }
    if(value_path == "lisp-rloc-objects")
    {
        lisp_rloc_objects = value;
    }
    if(value_path == "load-balancing")
    {
        load_balancing = value;
    }
    if(value_path == "load-sharing-elements")
    {
        load_sharing_elements = value;
    }
    if(value_path == "load-sharing-references")
    {
        load_sharing_references = value;
    }
    if(value_path == "max-resolution-timer")
    {
        max_resolution_timer = value;
    }
    if(value_path == "new-unresolve-entries")
    {
        new_unresolve_entries = value;
    }
    if(value_path == "next-hops")
    {
        next_hops = value;
    }
    if(value_path == "old-unresolve-entries")
    {
        old_unresolve_entries = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-in-place-modifications")
    {
        prefix_in_place_modifications = value;
    }
    if(value_path == "reresolve-entries")
    {
        reresolve_entries = value;
    }
    if(value_path == "resolution-timer")
    {
        resolution_timer = value;
    }
    if(value_path == "routes")
    {
        routes = value;
    }
    if(value_path == "slow-process-timer")
    {
        slow_process_timer = value;
    }
    if(value_path == "ss-drop-pl-count")
    {
        ss_drop_pl_count = value;
    }
    if(value_path == "ss-prot-route-count")
    {
        ss_prot_route_count = value;
    }
    if(value_path == "ss-tbl-id")
    {
        ss_tbl_id = value;
    }
    if(value_path == "ss-tbl-id-ptr")
    {
        ss_tbl_id_ptr = value;
    }
    if(value_path == "ss-vr-id")
    {
        ss_vr_id = value;
    }
    if(value_path == "ss-vrf-id")
    {
        ss_vrf_id = value;
    }
    if(value_path == "ss-vxlan-ltep-ifh")
    {
        ss_vxlan_ltep_ifh = value;
    }
    if(value_path == "stale-prefix-deletes")
    {
        stale_prefix_deletes = value;
    }
    if(value_path == "table-id")
    {
        table_id = value;
    }
    if(value_path == "total-load-share-element-bytes")
    {
        total_load_share_element_bytes = value;
    }
    if(value_path == "unresolve-entries")
    {
        unresolve_entries = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement::ExclusiveLoadSharingElement()
    :
    platform_shared_load_info_elements{YType::uint32, "platform-shared-load-info-elements"},
    platform_shared_path_list_elements{YType::uint32, "platform-shared-path-list-elements"},
    recursive_load_info_elements{YType::uint32, "recursive-load-info-elements"},
    recursive_path_list_elements{YType::uint32, "recursive-path-list-elements"},
    retry_path_list_elements{YType::uint32, "retry-path-list-elements"},
    total_load_info_elements{YType::uint32, "total-load-info-elements"},
    total_load_sharing_element_bytes{YType::uint32, "total-load-sharing-element-bytes"},
    total_load_sharing_element_references{YType::uint64, "total-load-sharing-element-references"},
    total_path_list_elements{YType::uint32, "total-path-list-elements"}
{
    yang_name = "exclusive-load-sharing-element"; yang_parent_name = "fib-summary";
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement::~ExclusiveLoadSharingElement()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement::has_data() const
{
    return platform_shared_load_info_elements.is_set
	|| platform_shared_path_list_elements.is_set
	|| recursive_load_info_elements.is_set
	|| recursive_path_list_elements.is_set
	|| retry_path_list_elements.is_set
	|| total_load_info_elements.is_set
	|| total_load_sharing_element_bytes.is_set
	|| total_load_sharing_element_references.is_set
	|| total_path_list_elements.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement::has_operation() const
{
    return is_set(operation)
	|| is_set(platform_shared_load_info_elements.operation)
	|| is_set(platform_shared_path_list_elements.operation)
	|| is_set(recursive_load_info_elements.operation)
	|| is_set(recursive_path_list_elements.operation)
	|| is_set(retry_path_list_elements.operation)
	|| is_set(total_load_info_elements.operation)
	|| is_set(total_load_sharing_element_bytes.operation)
	|| is_set(total_load_sharing_element_references.operation)
	|| is_set(total_path_list_elements.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclusive-load-sharing-element";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExclusiveLoadSharingElement' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (platform_shared_load_info_elements.is_set || is_set(platform_shared_load_info_elements.operation)) leaf_name_data.push_back(platform_shared_load_info_elements.get_name_leafdata());
    if (platform_shared_path_list_elements.is_set || is_set(platform_shared_path_list_elements.operation)) leaf_name_data.push_back(platform_shared_path_list_elements.get_name_leafdata());
    if (recursive_load_info_elements.is_set || is_set(recursive_load_info_elements.operation)) leaf_name_data.push_back(recursive_load_info_elements.get_name_leafdata());
    if (recursive_path_list_elements.is_set || is_set(recursive_path_list_elements.operation)) leaf_name_data.push_back(recursive_path_list_elements.get_name_leafdata());
    if (retry_path_list_elements.is_set || is_set(retry_path_list_elements.operation)) leaf_name_data.push_back(retry_path_list_elements.get_name_leafdata());
    if (total_load_info_elements.is_set || is_set(total_load_info_elements.operation)) leaf_name_data.push_back(total_load_info_elements.get_name_leafdata());
    if (total_load_sharing_element_bytes.is_set || is_set(total_load_sharing_element_bytes.operation)) leaf_name_data.push_back(total_load_sharing_element_bytes.get_name_leafdata());
    if (total_load_sharing_element_references.is_set || is_set(total_load_sharing_element_references.operation)) leaf_name_data.push_back(total_load_sharing_element_references.get_name_leafdata());
    if (total_path_list_elements.is_set || is_set(total_path_list_elements.operation)) leaf_name_data.push_back(total_path_list_elements.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::ExclusiveLoadSharingElement::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "platform-shared-load-info-elements")
    {
        platform_shared_load_info_elements = value;
    }
    if(value_path == "platform-shared-path-list-elements")
    {
        platform_shared_path_list_elements = value;
    }
    if(value_path == "recursive-load-info-elements")
    {
        recursive_load_info_elements = value;
    }
    if(value_path == "recursive-path-list-elements")
    {
        recursive_path_list_elements = value;
    }
    if(value_path == "retry-path-list-elements")
    {
        retry_path_list_elements = value;
    }
    if(value_path == "total-load-info-elements")
    {
        total_load_info_elements = value;
    }
    if(value_path == "total-load-sharing-element-bytes")
    {
        total_load_sharing_element_bytes = value;
    }
    if(value_path == "total-load-sharing-element-references")
    {
        total_load_sharing_element_references = value;
    }
    if(value_path == "total-path-list-elements")
    {
        total_path_list_elements = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement::SharedLoadSharingElement()
    :
    platform_shared_load_info_elements{YType::uint32, "platform-shared-load-info-elements"},
    platform_shared_path_list_elements{YType::uint32, "platform-shared-path-list-elements"},
    recursive_load_info_elements{YType::uint32, "recursive-load-info-elements"},
    recursive_path_list_elements{YType::uint32, "recursive-path-list-elements"},
    retry_path_list_elements{YType::uint32, "retry-path-list-elements"},
    total_load_info_elements{YType::uint32, "total-load-info-elements"},
    total_load_sharing_element_bytes{YType::uint32, "total-load-sharing-element-bytes"},
    total_load_sharing_element_references{YType::uint64, "total-load-sharing-element-references"},
    total_path_list_elements{YType::uint32, "total-path-list-elements"}
{
    yang_name = "shared-load-sharing-element"; yang_parent_name = "fib-summary";
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement::~SharedLoadSharingElement()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement::has_data() const
{
    return platform_shared_load_info_elements.is_set
	|| platform_shared_path_list_elements.is_set
	|| recursive_load_info_elements.is_set
	|| recursive_path_list_elements.is_set
	|| retry_path_list_elements.is_set
	|| total_load_info_elements.is_set
	|| total_load_sharing_element_bytes.is_set
	|| total_load_sharing_element_references.is_set
	|| total_path_list_elements.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement::has_operation() const
{
    return is_set(operation)
	|| is_set(platform_shared_load_info_elements.operation)
	|| is_set(platform_shared_path_list_elements.operation)
	|| is_set(recursive_load_info_elements.operation)
	|| is_set(recursive_path_list_elements.operation)
	|| is_set(retry_path_list_elements.operation)
	|| is_set(total_load_info_elements.operation)
	|| is_set(total_load_sharing_element_bytes.operation)
	|| is_set(total_load_sharing_element_references.operation)
	|| is_set(total_path_list_elements.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-load-sharing-element";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SharedLoadSharingElement' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (platform_shared_load_info_elements.is_set || is_set(platform_shared_load_info_elements.operation)) leaf_name_data.push_back(platform_shared_load_info_elements.get_name_leafdata());
    if (platform_shared_path_list_elements.is_set || is_set(platform_shared_path_list_elements.operation)) leaf_name_data.push_back(platform_shared_path_list_elements.get_name_leafdata());
    if (recursive_load_info_elements.is_set || is_set(recursive_load_info_elements.operation)) leaf_name_data.push_back(recursive_load_info_elements.get_name_leafdata());
    if (recursive_path_list_elements.is_set || is_set(recursive_path_list_elements.operation)) leaf_name_data.push_back(recursive_path_list_elements.get_name_leafdata());
    if (retry_path_list_elements.is_set || is_set(retry_path_list_elements.operation)) leaf_name_data.push_back(retry_path_list_elements.get_name_leafdata());
    if (total_load_info_elements.is_set || is_set(total_load_info_elements.operation)) leaf_name_data.push_back(total_load_info_elements.get_name_leafdata());
    if (total_load_sharing_element_bytes.is_set || is_set(total_load_sharing_element_bytes.operation)) leaf_name_data.push_back(total_load_sharing_element_bytes.get_name_leafdata());
    if (total_load_sharing_element_references.is_set || is_set(total_load_sharing_element_references.operation)) leaf_name_data.push_back(total_load_sharing_element_references.get_name_leafdata());
    if (total_path_list_elements.is_set || is_set(total_path_list_elements.operation)) leaf_name_data.push_back(total_path_list_elements.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::SharedLoadSharingElement::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "platform-shared-load-info-elements")
    {
        platform_shared_load_info_elements = value;
    }
    if(value_path == "platform-shared-path-list-elements")
    {
        platform_shared_path_list_elements = value;
    }
    if(value_path == "recursive-load-info-elements")
    {
        recursive_load_info_elements = value;
    }
    if(value_path == "recursive-path-list-elements")
    {
        recursive_path_list_elements = value;
    }
    if(value_path == "retry-path-list-elements")
    {
        retry_path_list_elements = value;
    }
    if(value_path == "total-load-info-elements")
    {
        total_load_info_elements = value;
    }
    if(value_path == "total-load-sharing-element-bytes")
    {
        total_load_sharing_element_bytes = value;
    }
    if(value_path == "total-load-sharing-element-references")
    {
        total_load_sharing_element_references = value;
    }
    if(value_path == "total-path-list-elements")
    {
        total_path_list_elements = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement::CrossSharedLoadSharingElement()
    :
    platform_shared_load_info_elements{YType::uint32, "platform-shared-load-info-elements"},
    platform_shared_path_list_elements{YType::uint32, "platform-shared-path-list-elements"},
    recursive_load_info_elements{YType::uint32, "recursive-load-info-elements"},
    recursive_path_list_elements{YType::uint32, "recursive-path-list-elements"},
    retry_path_list_elements{YType::uint32, "retry-path-list-elements"},
    total_load_info_elements{YType::uint32, "total-load-info-elements"},
    total_load_sharing_element_bytes{YType::uint32, "total-load-sharing-element-bytes"},
    total_load_sharing_element_references{YType::uint64, "total-load-sharing-element-references"},
    total_path_list_elements{YType::uint32, "total-path-list-elements"}
{
    yang_name = "cross-shared-load-sharing-element"; yang_parent_name = "fib-summary";
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement::~CrossSharedLoadSharingElement()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement::has_data() const
{
    return platform_shared_load_info_elements.is_set
	|| platform_shared_path_list_elements.is_set
	|| recursive_load_info_elements.is_set
	|| recursive_path_list_elements.is_set
	|| retry_path_list_elements.is_set
	|| total_load_info_elements.is_set
	|| total_load_sharing_element_bytes.is_set
	|| total_load_sharing_element_references.is_set
	|| total_path_list_elements.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement::has_operation() const
{
    return is_set(operation)
	|| is_set(platform_shared_load_info_elements.operation)
	|| is_set(platform_shared_path_list_elements.operation)
	|| is_set(recursive_load_info_elements.operation)
	|| is_set(recursive_path_list_elements.operation)
	|| is_set(retry_path_list_elements.operation)
	|| is_set(total_load_info_elements.operation)
	|| is_set(total_load_sharing_element_bytes.operation)
	|| is_set(total_load_sharing_element_references.operation)
	|| is_set(total_path_list_elements.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cross-shared-load-sharing-element";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CrossSharedLoadSharingElement' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (platform_shared_load_info_elements.is_set || is_set(platform_shared_load_info_elements.operation)) leaf_name_data.push_back(platform_shared_load_info_elements.get_name_leafdata());
    if (platform_shared_path_list_elements.is_set || is_set(platform_shared_path_list_elements.operation)) leaf_name_data.push_back(platform_shared_path_list_elements.get_name_leafdata());
    if (recursive_load_info_elements.is_set || is_set(recursive_load_info_elements.operation)) leaf_name_data.push_back(recursive_load_info_elements.get_name_leafdata());
    if (recursive_path_list_elements.is_set || is_set(recursive_path_list_elements.operation)) leaf_name_data.push_back(recursive_path_list_elements.get_name_leafdata());
    if (retry_path_list_elements.is_set || is_set(retry_path_list_elements.operation)) leaf_name_data.push_back(retry_path_list_elements.get_name_leafdata());
    if (total_load_info_elements.is_set || is_set(total_load_info_elements.operation)) leaf_name_data.push_back(total_load_info_elements.get_name_leafdata());
    if (total_load_sharing_element_bytes.is_set || is_set(total_load_sharing_element_bytes.operation)) leaf_name_data.push_back(total_load_sharing_element_bytes.get_name_leafdata());
    if (total_load_sharing_element_references.is_set || is_set(total_load_sharing_element_references.operation)) leaf_name_data.push_back(total_load_sharing_element_references.get_name_leafdata());
    if (total_path_list_elements.is_set || is_set(total_path_list_elements.operation)) leaf_name_data.push_back(total_path_list_elements.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::CrossSharedLoadSharingElement::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "platform-shared-load-info-elements")
    {
        platform_shared_load_info_elements = value;
    }
    if(value_path == "platform-shared-path-list-elements")
    {
        platform_shared_path_list_elements = value;
    }
    if(value_path == "recursive-load-info-elements")
    {
        recursive_load_info_elements = value;
    }
    if(value_path == "recursive-path-list-elements")
    {
        recursive_path_list_elements = value;
    }
    if(value_path == "retry-path-list-elements")
    {
        retry_path_list_elements = value;
    }
    if(value_path == "total-load-info-elements")
    {
        total_load_info_elements = value;
    }
    if(value_path == "total-load-sharing-element-bytes")
    {
        total_load_sharing_element_bytes = value;
    }
    if(value_path == "total-load-sharing-element-references")
    {
        total_load_sharing_element_references = value;
    }
    if(value_path == "total-path-list-elements")
    {
        total_path_list_elements = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement::LabelSharedLoadSharingElement()
    :
    platform_shared_load_info_elements{YType::uint32, "platform-shared-load-info-elements"},
    platform_shared_path_list_elements{YType::uint32, "platform-shared-path-list-elements"},
    recursive_load_info_elements{YType::uint32, "recursive-load-info-elements"},
    recursive_path_list_elements{YType::uint32, "recursive-path-list-elements"},
    retry_path_list_elements{YType::uint32, "retry-path-list-elements"},
    total_load_info_elements{YType::uint32, "total-load-info-elements"},
    total_load_sharing_element_bytes{YType::uint32, "total-load-sharing-element-bytes"},
    total_load_sharing_element_references{YType::uint64, "total-load-sharing-element-references"},
    total_path_list_elements{YType::uint32, "total-path-list-elements"}
{
    yang_name = "label-shared-load-sharing-element"; yang_parent_name = "fib-summary";
}

Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement::~LabelSharedLoadSharingElement()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement::has_data() const
{
    return platform_shared_load_info_elements.is_set
	|| platform_shared_path_list_elements.is_set
	|| recursive_load_info_elements.is_set
	|| recursive_path_list_elements.is_set
	|| retry_path_list_elements.is_set
	|| total_load_info_elements.is_set
	|| total_load_sharing_element_bytes.is_set
	|| total_load_sharing_element_references.is_set
	|| total_path_list_elements.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement::has_operation() const
{
    return is_set(operation)
	|| is_set(platform_shared_load_info_elements.operation)
	|| is_set(platform_shared_path_list_elements.operation)
	|| is_set(recursive_load_info_elements.operation)
	|| is_set(recursive_path_list_elements.operation)
	|| is_set(retry_path_list_elements.operation)
	|| is_set(total_load_info_elements.operation)
	|| is_set(total_load_sharing_element_bytes.operation)
	|| is_set(total_load_sharing_element_references.operation)
	|| is_set(total_path_list_elements.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-shared-load-sharing-element";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelSharedLoadSharingElement' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (platform_shared_load_info_elements.is_set || is_set(platform_shared_load_info_elements.operation)) leaf_name_data.push_back(platform_shared_load_info_elements.get_name_leafdata());
    if (platform_shared_path_list_elements.is_set || is_set(platform_shared_path_list_elements.operation)) leaf_name_data.push_back(platform_shared_path_list_elements.get_name_leafdata());
    if (recursive_load_info_elements.is_set || is_set(recursive_load_info_elements.operation)) leaf_name_data.push_back(recursive_load_info_elements.get_name_leafdata());
    if (recursive_path_list_elements.is_set || is_set(recursive_path_list_elements.operation)) leaf_name_data.push_back(recursive_path_list_elements.get_name_leafdata());
    if (retry_path_list_elements.is_set || is_set(retry_path_list_elements.operation)) leaf_name_data.push_back(retry_path_list_elements.get_name_leafdata());
    if (total_load_info_elements.is_set || is_set(total_load_info_elements.operation)) leaf_name_data.push_back(total_load_info_elements.get_name_leafdata());
    if (total_load_sharing_element_bytes.is_set || is_set(total_load_sharing_element_bytes.operation)) leaf_name_data.push_back(total_load_sharing_element_bytes.get_name_leafdata());
    if (total_load_sharing_element_references.is_set || is_set(total_load_sharing_element_references.operation)) leaf_name_data.push_back(total_load_sharing_element_references.get_name_leafdata());
    if (total_path_list_elements.is_set || is_set(total_path_list_elements.operation)) leaf_name_data.push_back(total_path_list_elements.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FibSummaries::FibSummary::LabelSharedLoadSharingElement::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "platform-shared-load-info-elements")
    {
        platform_shared_load_info_elements = value;
    }
    if(value_path == "platform-shared-path-list-elements")
    {
        platform_shared_path_list_elements = value;
    }
    if(value_path == "recursive-load-info-elements")
    {
        recursive_load_info_elements = value;
    }
    if(value_path == "recursive-path-list-elements")
    {
        recursive_path_list_elements = value;
    }
    if(value_path == "retry-path-list-elements")
    {
        retry_path_list_elements = value;
    }
    if(value_path == "total-load-info-elements")
    {
        total_load_info_elements = value;
    }
    if(value_path == "total-load-sharing-element-bytes")
    {
        total_load_sharing_element_bytes = value;
    }
    if(value_path == "total-load-sharing-element-references")
    {
        total_load_sharing_element_references = value;
    }
    if(value_path == "total-path-list-elements")
    {
        total_path_list_elements = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::ExternalSummaryAll()
    :
    sesa_num_client{YType::uint32, "sesa-num-client"}
    	,
    sesa_pl_sum(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum>())
{
    sesa_pl_sum->parent = this;
    children["sesa-pl-sum"] = sesa_pl_sum;

    yang_name = "external-summary-all"; yang_parent_name = "protocol";
}

Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::~ExternalSummaryAll()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::has_data() const
{
    return sesa_num_client.is_set
	|| (sesa_pl_sum !=  nullptr && sesa_pl_sum->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::has_operation() const
{
    return is_set(operation)
	|| is_set(sesa_num_client.operation)
	|| (sesa_pl_sum !=  nullptr && sesa_pl_sum->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-summary-all";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalSummaryAll' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sesa_num_client.is_set || is_set(sesa_num_client.operation)) leaf_name_data.push_back(sesa_num_client.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sesa-pl-sum")
    {
        if(sesa_pl_sum != nullptr)
        {
            children["sesa-pl-sum"] = sesa_pl_sum;
        }
        else
        {
            sesa_pl_sum = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum>();
            sesa_pl_sum->parent = this;
            children["sesa-pl-sum"] = sesa_pl_sum;
        }
        return children.at("sesa-pl-sum");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::get_children()
{
    if(children.find("sesa-pl-sum") == children.end())
    {
        if(sesa_pl_sum != nullptr)
        {
            children["sesa-pl-sum"] = sesa_pl_sum;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sesa-num-client")
    {
        sesa_num_client = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::SesaPlSum()
    :
    sep_num_ecd_pathlist{YType::uint32, "sep-num-ecd-pathlist"},
    sep_num_ecd_pl_per_interest{YType::uint32, "sep-num-ecd-pl-per-interest"},
    sep_num_ecd_pl_unresolved{YType::uint32, "sep-num-ecd-pl-unresolved"}
{
    yang_name = "sesa-pl-sum"; yang_parent_name = "external-summary-all";
}

Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::~SesaPlSum()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::has_data() const
{
    for (auto const & leaf : sep_num_ecd_pl_per_interest.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return sep_num_ecd_pathlist.is_set
	|| sep_num_ecd_pl_unresolved.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::has_operation() const
{
    for (auto const & leaf : sep_num_ecd_pl_per_interest.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(sep_num_ecd_pathlist.operation)
	|| is_set(sep_num_ecd_pl_per_interest.operation)
	|| is_set(sep_num_ecd_pl_unresolved.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sesa-pl-sum";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesaPlSum' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sep_num_ecd_pathlist.is_set || is_set(sep_num_ecd_pathlist.operation)) leaf_name_data.push_back(sep_num_ecd_pathlist.get_name_leafdata());
    if (sep_num_ecd_pl_unresolved.is_set || is_set(sep_num_ecd_pl_unresolved.operation)) leaf_name_data.push_back(sep_num_ecd_pl_unresolved.get_name_leafdata());

    auto sep_num_ecd_pl_per_interest_name_datas = sep_num_ecd_pl_per_interest.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sep_num_ecd_pl_per_interest_name_datas.begin(), sep_num_ecd_pl_per_interest_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExternalSummaryAll::SesaPlSum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sep-num-ecd-pathlist")
    {
        sep_num_ecd_pathlist = value;
    }
    if(value_path == "sep-num-ecd-pl-per-interest")
    {
        sep_num_ecd_pl_per_interest.append(value);
    }
    if(value_path == "sep-num-ecd-pl-unresolved")
    {
        sep_num_ecd_pl_unresolved = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrLog()
    :
    frr_interfaces(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces>())
{
    frr_interfaces->parent = this;
    children["frr-interfaces"] = frr_interfaces;

    yang_name = "frr-log"; yang_parent_name = "protocol";
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::~FrrLog()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::has_data() const
{
    return (frr_interfaces !=  nullptr && frr_interfaces->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::has_operation() const
{
    return is_set(operation)
	|| (frr_interfaces !=  nullptr && frr_interfaces->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::FrrLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-log";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::FrrLog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrLog' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FrrLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-interfaces")
    {
        if(frr_interfaces != nullptr)
        {
            children["frr-interfaces"] = frr_interfaces;
        }
        else
        {
            frr_interfaces = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces>();
            frr_interfaces->parent = this;
            children["frr-interfaces"] = frr_interfaces;
        }
        return children.at("frr-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::FrrLog::get_children()
{
    if(children.find("frr-interfaces") == children.end())
    {
        if(frr_interfaces != nullptr)
        {
            children["frr-interfaces"] = frr_interfaces;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FrrLog::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterfaces()
{
    yang_name = "frr-interfaces"; yang_parent_name = "frr-log";
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::~FrrInterfaces()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::has_data() const
{
    for (std::size_t index=0; index<frr_interface.size(); index++)
    {
        if(frr_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::has_operation() const
{
    for (std::size_t index=0; index<frr_interface.size(); index++)
    {
        if(frr_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-interfaces";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrInterfaces' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-interface")
    {
        for(auto const & c : frr_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface>();
        c->parent = this;
        frr_interface.push_back(std::move(c));
        children[segment_path] = frr_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::get_children()
{
    for (auto const & c : frr_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::FrrInterface()
    :
    frr_interface_name{YType::str, "frr-interface-name"}
    	,
    logs(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs>())
{
    logs->parent = this;
    children["logs"] = logs;

    yang_name = "frr-interface"; yang_parent_name = "frr-interfaces";
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::~FrrInterface()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::has_data() const
{
    return frr_interface_name.is_set
	|| (logs !=  nullptr && logs->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(frr_interface_name.operation)
	|| (logs !=  nullptr && logs->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-interface" <<"[frr-interface-name='" <<frr_interface_name <<"']";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrInterface' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_interface_name.is_set || is_set(frr_interface_name.operation)) leaf_name_data.push_back(frr_interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "logs")
    {
        if(logs != nullptr)
        {
            children["logs"] = logs;
        }
        else
        {
            logs = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs>();
            logs->parent = this;
            children["logs"] = logs;
        }
        return children.at("logs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::get_children()
{
    if(children.find("logs") == children.end())
    {
        if(logs != nullptr)
        {
            children["logs"] = logs;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frr-interface-name")
    {
        frr_interface_name = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Logs()
{
    yang_name = "logs"; yang_parent_name = "frr-interface";
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::~Logs()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::has_data() const
{
    for (std::size_t index=0; index<log.size(); index++)
    {
        if(log[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::has_operation() const
{
    for (std::size_t index=0; index<log.size(); index++)
    {
        if(log[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logs";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logs' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "log")
    {
        for(auto const & c : log)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log>();
        c->parent = this;
        log.push_back(std::move(c));
        children[segment_path] = log.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::get_children()
{
    for (auto const & c : log)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::Log()
    :
    log_index{YType::int32, "log-index"},
    bundle_member_interface_name{YType::str, "bundle-member-interface-name"},
    frr_interface_name{YType::str, "frr-interface-name"},
    frr_prefix{YType::str, "frr-prefix"},
    frr_protocol_type{YType::enumeration, "frr-protocol-type"},
    frr_switching_time{YType::uint32, "frr-switching-time"}
    	,
    frr_timestamp(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp>())
{
    frr_timestamp->parent = this;
    children["frr-timestamp"] = frr_timestamp;

    yang_name = "log"; yang_parent_name = "logs";
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::~Log()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::has_data() const
{
    return log_index.is_set
	|| bundle_member_interface_name.is_set
	|| frr_interface_name.is_set
	|| frr_prefix.is_set
	|| frr_protocol_type.is_set
	|| frr_switching_time.is_set
	|| (frr_timestamp !=  nullptr && frr_timestamp->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::has_operation() const
{
    return is_set(operation)
	|| is_set(log_index.operation)
	|| is_set(bundle_member_interface_name.operation)
	|| is_set(frr_interface_name.operation)
	|| is_set(frr_prefix.operation)
	|| is_set(frr_protocol_type.operation)
	|| is_set(frr_switching_time.operation)
	|| (frr_timestamp !=  nullptr && frr_timestamp->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log" <<"[log-index='" <<log_index <<"']";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Log' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_index.is_set || is_set(log_index.operation)) leaf_name_data.push_back(log_index.get_name_leafdata());
    if (bundle_member_interface_name.is_set || is_set(bundle_member_interface_name.operation)) leaf_name_data.push_back(bundle_member_interface_name.get_name_leafdata());
    if (frr_interface_name.is_set || is_set(frr_interface_name.operation)) leaf_name_data.push_back(frr_interface_name.get_name_leafdata());
    if (frr_prefix.is_set || is_set(frr_prefix.operation)) leaf_name_data.push_back(frr_prefix.get_name_leafdata());
    if (frr_protocol_type.is_set || is_set(frr_protocol_type.operation)) leaf_name_data.push_back(frr_protocol_type.get_name_leafdata());
    if (frr_switching_time.is_set || is_set(frr_switching_time.operation)) leaf_name_data.push_back(frr_switching_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-timestamp")
    {
        if(frr_timestamp != nullptr)
        {
            children["frr-timestamp"] = frr_timestamp;
        }
        else
        {
            frr_timestamp = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp>();
            frr_timestamp->parent = this;
            children["frr-timestamp"] = frr_timestamp;
        }
        return children.at("frr-timestamp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::get_children()
{
    if(children.find("frr-timestamp") == children.end())
    {
        if(frr_timestamp != nullptr)
        {
            children["frr-timestamp"] = frr_timestamp;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "log-index")
    {
        log_index = value;
    }
    if(value_path == "bundle-member-interface-name")
    {
        bundle_member_interface_name = value;
    }
    if(value_path == "frr-interface-name")
    {
        frr_interface_name = value;
    }
    if(value_path == "frr-prefix")
    {
        frr_prefix = value;
    }
    if(value_path == "frr-protocol-type")
    {
        frr_protocol_type = value;
    }
    if(value_path == "frr-switching-time")
    {
        frr_switching_time = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp::FrrTimestamp()
    :
    nano_seconds{YType::int32, "nano-seconds"},
    seconds{YType::int32, "seconds"}
{
    yang_name = "frr-timestamp"; yang_parent_name = "log";
}

Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp::~FrrTimestamp()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp::has_data() const
{
    return nano_seconds.is_set
	|| seconds.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nano_seconds.operation)
	|| is_set(seconds.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-timestamp";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrTimestamp' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nano_seconds.is_set || is_set(nano_seconds.operation)) leaf_name_data.push_back(nano_seconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::FrrLog::FrrInterfaces::FrrInterface::Logs::Log::FrrTimestamp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nano-seconds")
    {
        nano_seconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "protocol";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::~Vrfs()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrfs' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    interface_infos(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos>())
	,ip_prefix_briefs(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs>())
	,ip_prefix_details(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails>())
	,summary(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary>())
{
    interface_infos->parent = this;
    children["interface-infos"] = interface_infos;

    ip_prefix_briefs->parent = this;
    children["ip-prefix-briefs"] = ip_prefix_briefs;

    ip_prefix_details->parent = this;
    children["ip-prefix-details"] = ip_prefix_details;

    summary->parent = this;
    children["summary"] = summary;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::~Vrf()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| (interface_infos !=  nullptr && interface_infos->has_data())
	|| (ip_prefix_briefs !=  nullptr && ip_prefix_briefs->has_data())
	|| (ip_prefix_details !=  nullptr && ip_prefix_details->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| (interface_infos !=  nullptr && interface_infos->has_operation())
	|| (ip_prefix_briefs !=  nullptr && ip_prefix_briefs->has_operation())
	|| (ip_prefix_details !=  nullptr && ip_prefix_details->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-infos")
    {
        if(interface_infos != nullptr)
        {
            children["interface-infos"] = interface_infos;
        }
        else
        {
            interface_infos = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos>();
            interface_infos->parent = this;
            children["interface-infos"] = interface_infos;
        }
        return children.at("interface-infos");
    }

    if(child_yang_name == "ip-prefix-briefs")
    {
        if(ip_prefix_briefs != nullptr)
        {
            children["ip-prefix-briefs"] = ip_prefix_briefs;
        }
        else
        {
            ip_prefix_briefs = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs>();
            ip_prefix_briefs->parent = this;
            children["ip-prefix-briefs"] = ip_prefix_briefs;
        }
        return children.at("ip-prefix-briefs");
    }

    if(child_yang_name == "ip-prefix-details")
    {
        if(ip_prefix_details != nullptr)
        {
            children["ip-prefix-details"] = ip_prefix_details;
        }
        else
        {
            ip_prefix_details = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails>();
            ip_prefix_details->parent = this;
            children["ip-prefix-details"] = ip_prefix_details;
        }
        return children.at("ip-prefix-details");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::get_children()
{
    if(children.find("interface-infos") == children.end())
    {
        if(interface_infos != nullptr)
        {
            children["interface-infos"] = interface_infos;
        }
    }

    if(children.find("ip-prefix-briefs") == children.end())
    {
        if(ip_prefix_briefs != nullptr)
        {
            children["ip-prefix-briefs"] = ip_prefix_briefs;
        }
    }

    if(children.find("ip-prefix-details") == children.end())
    {
        if(ip_prefix_details != nullptr)
        {
            children["ip-prefix-details"] = ip_prefix_details;
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

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetails()
{
    yang_name = "ip-prefix-details"; yang_parent_name = "vrf";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::~IpPrefixDetails()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::has_data() const
{
    for (std::size_t index=0; index<ip_prefix_detail.size(); index++)
    {
        if(ip_prefix_detail[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::has_operation() const
{
    for (std::size_t index=0; index<ip_prefix_detail.size(); index++)
    {
        if(ip_prefix_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-prefix-details";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpPrefixDetails' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-prefix-detail")
    {
        for(auto const & c : ip_prefix_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail>();
        c->parent = this;
        ip_prefix_detail.push_back(std::move(c));
        children[segment_path] = ip_prefix_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::get_children()
{
    for (auto const & c : ip_prefix_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::IpPrefixDetail()
    :
    broadcast_forward_flag{YType::boolean, "broadcast-forward-flag"},
    broadcast_recive_flag{YType::boolean, "broadcast-recive-flag"},
    dummy_real_zero_route{YType::boolean, "dummy-real-zero-route"},
    exact_route_result{YType::boolean, "exact-route-result"},
    external_switch_triggered{YType::boolean, "external-switch-triggered"},
    fib_route_download_priority{YType::uint32, "fib-route-download-priority"},
    flags_external_ldi{YType::uint32, "flags-external-ldi"},
    l2_subscriber_ip_protocol{YType::uint32, "l2-subscriber-ip-protocol"},
    l2_subscriber_route{YType::boolean, "l2-subscriber-route"},
    l2_subscriber_xconnect_id{YType::uint32, "l2-subscriber-xconnect-id"},
    l2tpv3_cookie_length_bits{YType::uint32, "l2tpv3-cookie-length-bits"},
    ldi_flags{YType::uint32, "ldi-flags"},
    ldi_lw_flag{YType::uint32, "ldi-lw-flag"},
    lspa_flags{YType::uint32, "lspa-flags"},
    number_of_referances_to_ldi{YType::uint32, "number-of-referances-to-ldi"},
    number_of_referances_to_path_list{YType::uint32, "number-of-referances-to-path-list"},
    packet_should_recieve{YType::boolean, "packet-should-recieve"},
    path_list_flags{YType::uint32, "path-list-flags"},
    path_list_source{YType::uint32, "path-list-source"},
    platform_hardware{YType::str, "platform-hardware"},
    prefix{YType::str, "prefix"},
    prefix_connected{YType::boolean, "prefix-connected"},
    prefix_for_adjancency{YType::boolean, "prefix-for-adjancency"},
    prefix_for_pic_next_hop{YType::boolean, "prefix-for-pic-next-hop"},
    prefix_is_static_or_connected{YType::boolean, "prefix-is-static-or-connected"},
    prefix_length{YType::uint8, "prefix-length"},
    protocol_type_fib_entry{YType::uint32, "protocol-type-fib-entry"},
    purgable_after_purge_interval{YType::boolean, "purgable-after-purge-interval"},
    ref_counter_of_ldi_lw_ldi{YType::uint32, "ref-counter-of-ldi-lw-ldi"},
    route_attribute_flag{YType::boolean, "route-attribute-flag"},
    route_for_external_reach_linecard_flag{YType::boolean, "route-for-external-reach-linecard-flag"},
    route_is_sr_flag{YType::boolean, "route-is-sr-flag"},
    time_of_last_update_in_msec{YType::uint64, "time-of-last-update-in-msec"},
    type_of_ldi_lw_ldi{YType::uint32, "type-of-ldi-lw-ldi"},
    version_of_route{YType::uint64, "version-of-route"},
    zero_by_zero_route_as_default{YType::boolean, "zero-by-zero-route-as-default"}
    	,
    detail_fib_entry_information(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation>())
	,fib_entry_path(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath>())
	,srv6_information(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information>())
{
    detail_fib_entry_information->parent = this;
    children["detail-fib-entry-information"] = detail_fib_entry_information;

    fib_entry_path->parent = this;
    children["fib-entry-path"] = fib_entry_path;

    srv6_information->parent = this;
    children["srv6-information"] = srv6_information;

    yang_name = "ip-prefix-detail"; yang_parent_name = "ip-prefix-details";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::~IpPrefixDetail()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::has_data() const
{
    for (std::size_t index=0; index<extension_object.size(); index++)
    {
        if(extension_object[index]->has_data())
            return true;
    }
    return broadcast_forward_flag.is_set
	|| broadcast_recive_flag.is_set
	|| dummy_real_zero_route.is_set
	|| exact_route_result.is_set
	|| external_switch_triggered.is_set
	|| fib_route_download_priority.is_set
	|| flags_external_ldi.is_set
	|| l2_subscriber_ip_protocol.is_set
	|| l2_subscriber_route.is_set
	|| l2_subscriber_xconnect_id.is_set
	|| l2tpv3_cookie_length_bits.is_set
	|| ldi_flags.is_set
	|| ldi_lw_flag.is_set
	|| lspa_flags.is_set
	|| number_of_referances_to_ldi.is_set
	|| number_of_referances_to_path_list.is_set
	|| packet_should_recieve.is_set
	|| path_list_flags.is_set
	|| path_list_source.is_set
	|| platform_hardware.is_set
	|| prefix.is_set
	|| prefix_connected.is_set
	|| prefix_for_adjancency.is_set
	|| prefix_for_pic_next_hop.is_set
	|| prefix_is_static_or_connected.is_set
	|| prefix_length.is_set
	|| protocol_type_fib_entry.is_set
	|| purgable_after_purge_interval.is_set
	|| ref_counter_of_ldi_lw_ldi.is_set
	|| route_attribute_flag.is_set
	|| route_for_external_reach_linecard_flag.is_set
	|| route_is_sr_flag.is_set
	|| time_of_last_update_in_msec.is_set
	|| type_of_ldi_lw_ldi.is_set
	|| version_of_route.is_set
	|| zero_by_zero_route_as_default.is_set
	|| (detail_fib_entry_information !=  nullptr && detail_fib_entry_information->has_data())
	|| (fib_entry_path !=  nullptr && fib_entry_path->has_data())
	|| (srv6_information !=  nullptr && srv6_information->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::has_operation() const
{
    for (std::size_t index=0; index<extension_object.size(); index++)
    {
        if(extension_object[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(broadcast_forward_flag.operation)
	|| is_set(broadcast_recive_flag.operation)
	|| is_set(dummy_real_zero_route.operation)
	|| is_set(exact_route_result.operation)
	|| is_set(external_switch_triggered.operation)
	|| is_set(fib_route_download_priority.operation)
	|| is_set(flags_external_ldi.operation)
	|| is_set(l2_subscriber_ip_protocol.operation)
	|| is_set(l2_subscriber_route.operation)
	|| is_set(l2_subscriber_xconnect_id.operation)
	|| is_set(l2tpv3_cookie_length_bits.operation)
	|| is_set(ldi_flags.operation)
	|| is_set(ldi_lw_flag.operation)
	|| is_set(lspa_flags.operation)
	|| is_set(number_of_referances_to_ldi.operation)
	|| is_set(number_of_referances_to_path_list.operation)
	|| is_set(packet_should_recieve.operation)
	|| is_set(path_list_flags.operation)
	|| is_set(path_list_source.operation)
	|| is_set(platform_hardware.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_connected.operation)
	|| is_set(prefix_for_adjancency.operation)
	|| is_set(prefix_for_pic_next_hop.operation)
	|| is_set(prefix_is_static_or_connected.operation)
	|| is_set(prefix_length.operation)
	|| is_set(protocol_type_fib_entry.operation)
	|| is_set(purgable_after_purge_interval.operation)
	|| is_set(ref_counter_of_ldi_lw_ldi.operation)
	|| is_set(route_attribute_flag.operation)
	|| is_set(route_for_external_reach_linecard_flag.operation)
	|| is_set(route_is_sr_flag.operation)
	|| is_set(time_of_last_update_in_msec.operation)
	|| is_set(type_of_ldi_lw_ldi.operation)
	|| is_set(version_of_route.operation)
	|| is_set(zero_by_zero_route_as_default.operation)
	|| (detail_fib_entry_information !=  nullptr && detail_fib_entry_information->has_operation())
	|| (fib_entry_path !=  nullptr && fib_entry_path->has_operation())
	|| (srv6_information !=  nullptr && srv6_information->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-prefix-detail";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpPrefixDetail' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_forward_flag.is_set || is_set(broadcast_forward_flag.operation)) leaf_name_data.push_back(broadcast_forward_flag.get_name_leafdata());
    if (broadcast_recive_flag.is_set || is_set(broadcast_recive_flag.operation)) leaf_name_data.push_back(broadcast_recive_flag.get_name_leafdata());
    if (dummy_real_zero_route.is_set || is_set(dummy_real_zero_route.operation)) leaf_name_data.push_back(dummy_real_zero_route.get_name_leafdata());
    if (exact_route_result.is_set || is_set(exact_route_result.operation)) leaf_name_data.push_back(exact_route_result.get_name_leafdata());
    if (external_switch_triggered.is_set || is_set(external_switch_triggered.operation)) leaf_name_data.push_back(external_switch_triggered.get_name_leafdata());
    if (fib_route_download_priority.is_set || is_set(fib_route_download_priority.operation)) leaf_name_data.push_back(fib_route_download_priority.get_name_leafdata());
    if (flags_external_ldi.is_set || is_set(flags_external_ldi.operation)) leaf_name_data.push_back(flags_external_ldi.get_name_leafdata());
    if (l2_subscriber_ip_protocol.is_set || is_set(l2_subscriber_ip_protocol.operation)) leaf_name_data.push_back(l2_subscriber_ip_protocol.get_name_leafdata());
    if (l2_subscriber_route.is_set || is_set(l2_subscriber_route.operation)) leaf_name_data.push_back(l2_subscriber_route.get_name_leafdata());
    if (l2_subscriber_xconnect_id.is_set || is_set(l2_subscriber_xconnect_id.operation)) leaf_name_data.push_back(l2_subscriber_xconnect_id.get_name_leafdata());
    if (l2tpv3_cookie_length_bits.is_set || is_set(l2tpv3_cookie_length_bits.operation)) leaf_name_data.push_back(l2tpv3_cookie_length_bits.get_name_leafdata());
    if (ldi_flags.is_set || is_set(ldi_flags.operation)) leaf_name_data.push_back(ldi_flags.get_name_leafdata());
    if (ldi_lw_flag.is_set || is_set(ldi_lw_flag.operation)) leaf_name_data.push_back(ldi_lw_flag.get_name_leafdata());
    if (lspa_flags.is_set || is_set(lspa_flags.operation)) leaf_name_data.push_back(lspa_flags.get_name_leafdata());
    if (number_of_referances_to_ldi.is_set || is_set(number_of_referances_to_ldi.operation)) leaf_name_data.push_back(number_of_referances_to_ldi.get_name_leafdata());
    if (number_of_referances_to_path_list.is_set || is_set(number_of_referances_to_path_list.operation)) leaf_name_data.push_back(number_of_referances_to_path_list.get_name_leafdata());
    if (packet_should_recieve.is_set || is_set(packet_should_recieve.operation)) leaf_name_data.push_back(packet_should_recieve.get_name_leafdata());
    if (path_list_flags.is_set || is_set(path_list_flags.operation)) leaf_name_data.push_back(path_list_flags.get_name_leafdata());
    if (path_list_source.is_set || is_set(path_list_source.operation)) leaf_name_data.push_back(path_list_source.get_name_leafdata());
    if (platform_hardware.is_set || is_set(platform_hardware.operation)) leaf_name_data.push_back(platform_hardware.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_connected.is_set || is_set(prefix_connected.operation)) leaf_name_data.push_back(prefix_connected.get_name_leafdata());
    if (prefix_for_adjancency.is_set || is_set(prefix_for_adjancency.operation)) leaf_name_data.push_back(prefix_for_adjancency.get_name_leafdata());
    if (prefix_for_pic_next_hop.is_set || is_set(prefix_for_pic_next_hop.operation)) leaf_name_data.push_back(prefix_for_pic_next_hop.get_name_leafdata());
    if (prefix_is_static_or_connected.is_set || is_set(prefix_is_static_or_connected.operation)) leaf_name_data.push_back(prefix_is_static_or_connected.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protocol_type_fib_entry.is_set || is_set(protocol_type_fib_entry.operation)) leaf_name_data.push_back(protocol_type_fib_entry.get_name_leafdata());
    if (purgable_after_purge_interval.is_set || is_set(purgable_after_purge_interval.operation)) leaf_name_data.push_back(purgable_after_purge_interval.get_name_leafdata());
    if (ref_counter_of_ldi_lw_ldi.is_set || is_set(ref_counter_of_ldi_lw_ldi.operation)) leaf_name_data.push_back(ref_counter_of_ldi_lw_ldi.get_name_leafdata());
    if (route_attribute_flag.is_set || is_set(route_attribute_flag.operation)) leaf_name_data.push_back(route_attribute_flag.get_name_leafdata());
    if (route_for_external_reach_linecard_flag.is_set || is_set(route_for_external_reach_linecard_flag.operation)) leaf_name_data.push_back(route_for_external_reach_linecard_flag.get_name_leafdata());
    if (route_is_sr_flag.is_set || is_set(route_is_sr_flag.operation)) leaf_name_data.push_back(route_is_sr_flag.get_name_leafdata());
    if (time_of_last_update_in_msec.is_set || is_set(time_of_last_update_in_msec.operation)) leaf_name_data.push_back(time_of_last_update_in_msec.get_name_leafdata());
    if (type_of_ldi_lw_ldi.is_set || is_set(type_of_ldi_lw_ldi.operation)) leaf_name_data.push_back(type_of_ldi_lw_ldi.get_name_leafdata());
    if (version_of_route.is_set || is_set(version_of_route.operation)) leaf_name_data.push_back(version_of_route.get_name_leafdata());
    if (zero_by_zero_route_as_default.is_set || is_set(zero_by_zero_route_as_default.operation)) leaf_name_data.push_back(zero_by_zero_route_as_default.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail-fib-entry-information")
    {
        if(detail_fib_entry_information != nullptr)
        {
            children["detail-fib-entry-information"] = detail_fib_entry_information;
        }
        else
        {
            detail_fib_entry_information = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation>();
            detail_fib_entry_information->parent = this;
            children["detail-fib-entry-information"] = detail_fib_entry_information;
        }
        return children.at("detail-fib-entry-information");
    }

    if(child_yang_name == "extension-object")
    {
        for(auto const & c : extension_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject>();
        c->parent = this;
        extension_object.push_back(std::move(c));
        children[segment_path] = extension_object.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "fib-entry-path")
    {
        if(fib_entry_path != nullptr)
        {
            children["fib-entry-path"] = fib_entry_path;
        }
        else
        {
            fib_entry_path = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath>();
            fib_entry_path->parent = this;
            children["fib-entry-path"] = fib_entry_path;
        }
        return children.at("fib-entry-path");
    }

    if(child_yang_name == "srv6-information")
    {
        if(srv6_information != nullptr)
        {
            children["srv6-information"] = srv6_information;
        }
        else
        {
            srv6_information = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information>();
            srv6_information->parent = this;
            children["srv6-information"] = srv6_information;
        }
        return children.at("srv6-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::get_children()
{
    if(children.find("detail-fib-entry-information") == children.end())
    {
        if(detail_fib_entry_information != nullptr)
        {
            children["detail-fib-entry-information"] = detail_fib_entry_information;
        }
    }

    for (auto const & c : extension_object)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("fib-entry-path") == children.end())
    {
        if(fib_entry_path != nullptr)
        {
            children["fib-entry-path"] = fib_entry_path;
        }
    }

    if(children.find("srv6-information") == children.end())
    {
        if(srv6_information != nullptr)
        {
            children["srv6-information"] = srv6_information;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-forward-flag")
    {
        broadcast_forward_flag = value;
    }
    if(value_path == "broadcast-recive-flag")
    {
        broadcast_recive_flag = value;
    }
    if(value_path == "dummy-real-zero-route")
    {
        dummy_real_zero_route = value;
    }
    if(value_path == "exact-route-result")
    {
        exact_route_result = value;
    }
    if(value_path == "external-switch-triggered")
    {
        external_switch_triggered = value;
    }
    if(value_path == "fib-route-download-priority")
    {
        fib_route_download_priority = value;
    }
    if(value_path == "flags-external-ldi")
    {
        flags_external_ldi = value;
    }
    if(value_path == "l2-subscriber-ip-protocol")
    {
        l2_subscriber_ip_protocol = value;
    }
    if(value_path == "l2-subscriber-route")
    {
        l2_subscriber_route = value;
    }
    if(value_path == "l2-subscriber-xconnect-id")
    {
        l2_subscriber_xconnect_id = value;
    }
    if(value_path == "l2tpv3-cookie-length-bits")
    {
        l2tpv3_cookie_length_bits = value;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags = value;
    }
    if(value_path == "ldi-lw-flag")
    {
        ldi_lw_flag = value;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags = value;
    }
    if(value_path == "number-of-referances-to-ldi")
    {
        number_of_referances_to_ldi = value;
    }
    if(value_path == "number-of-referances-to-path-list")
    {
        number_of_referances_to_path_list = value;
    }
    if(value_path == "packet-should-recieve")
    {
        packet_should_recieve = value;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags = value;
    }
    if(value_path == "path-list-source")
    {
        path_list_source = value;
    }
    if(value_path == "platform-hardware")
    {
        platform_hardware = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-connected")
    {
        prefix_connected = value;
    }
    if(value_path == "prefix-for-adjancency")
    {
        prefix_for_adjancency = value;
    }
    if(value_path == "prefix-for-pic-next-hop")
    {
        prefix_for_pic_next_hop = value;
    }
    if(value_path == "prefix-is-static-or-connected")
    {
        prefix_is_static_or_connected = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "protocol-type-fib-entry")
    {
        protocol_type_fib_entry = value;
    }
    if(value_path == "purgable-after-purge-interval")
    {
        purgable_after_purge_interval = value;
    }
    if(value_path == "ref-counter-of-ldi-lw-ldi")
    {
        ref_counter_of_ldi_lw_ldi = value;
    }
    if(value_path == "route-attribute-flag")
    {
        route_attribute_flag = value;
    }
    if(value_path == "route-for-external-reach-linecard-flag")
    {
        route_for_external_reach_linecard_flag = value;
    }
    if(value_path == "route-is-sr-flag")
    {
        route_is_sr_flag = value;
    }
    if(value_path == "time-of-last-update-in-msec")
    {
        time_of_last_update_in_msec = value;
    }
    if(value_path == "type-of-ldi-lw-ldi")
    {
        type_of_ldi_lw_ldi = value;
    }
    if(value_path == "version-of-route")
    {
        version_of_route = value;
    }
    if(value_path == "zero-by-zero-route-as-default")
    {
        zero_by_zero_route_as_default = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::DetailFibEntryInformation()
    :
    adjacency_address_length{YType::uint32, "adjacency-address-length"},
    adjacency_interface{YType::uint32, "adjacency-interface"},
    afi_fib_protocol_type{YType::uint32, "afi-fib-protocol-type"},
    aib_l3_address{YType::str, "aib-l3-address"},
    bgp_attribute_id{YType::uint32, "bgp-attribute-id"},
    bgp_attribute_next_hop_as{YType::uint32, "bgp-attribute-next-hop-as"},
    bgp_attribute_origin_as{YType::uint32, "bgp-attribute-origin-as"},
    bgp_local_attribute_id{YType::uint32, "bgp-local-attribute-id"},
    bytes_through_fib_entry{YType::uint64, "bytes-through-fib-entry"},
    com_string{YType::str, "com-string"},
    detailed_prefix_length{YType::uint32, "detailed-prefix-length"},
    extcom_string{YType::str, "extcom-string"},
    extended_community{YType::uint32, "extended-community"},
    fast_adjacency_flag{YType::boolean, "fast-adjacency-flag"},
    fib_entry_adjacency_address{YType::str, "fib-entry-adjacency-address"},
    fib_entry_adjacency_interface{YType::uint32, "fib-entry-adjacency-interface"},
    fib_entry_adjacency_type{YType::enumeration, "fib-entry-adjacency-type"},
    fib_entry_version{YType::uint32, "fib-entry-version"},
    fib_protocol_type{YType::uint32, "fib-protocol-type"},
    fib_special_nh_information_type{YType::uint32, "fib-special-nh-information-type"},
    flow_tag{YType::uint8, "flow-tag"},
    forward_class{YType::uint8, "forward-class"},
    illegal_fast_adjacency_flag{YType::boolean, "illegal-fast-adjacency-flag"},
    ldi_time_of_last_update_in_msec{YType::uint64, "ldi-time-of-last-update-in-msec"},
    load_sharing_type{YType::enumeration, "load-sharing-type"},
    lwldi_time_of_last_update_in_msec{YType::uint64, "lwldi-time-of-last-update-in-msec"},
    mpls_fec{YType::uint32, "mpls-fec"},
    packets_through_fib_entry{YType::uint64, "packets-through-fib-entry"},
    path_string{YType::str, "path-string"},
    per_prefix_accounting{YType::uint8, "per-prefix-accounting"},
    pl_time_of_last_update_in_msec{YType::uint64, "pl-time-of-last-update-in-msec"},
    pl_time_stamp_type{YType::uint32, "pl-time-stamp-type"},
    precedence_forpackets{YType::uint8, "precedence-forpackets"},
    prefix_protocol{YType::uint32, "prefix-protocol"},
    qos_group{YType::uint32, "qos-group"},
    qppb_qos_group_and_ip_precedence{YType::uint32, "qppb-qos-group-and-ip-precedence"},
    remote_adjacency_flag{YType::boolean, "remote-adjacency-flag"},
    switch_compontent_id{YType::uint32, "switch-compontent-id"},
    traffic_index_for_packets{YType::uint8, "traffic-index-for-packets"}
    	,
    loadshare_information(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation>())
{
    loadshare_information->parent = this;
    children["loadshare-information"] = loadshare_information;

    yang_name = "detail-fib-entry-information"; yang_parent_name = "ip-prefix-detail";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::~DetailFibEntryInformation()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::has_data() const
{
    return adjacency_address_length.is_set
	|| adjacency_interface.is_set
	|| afi_fib_protocol_type.is_set
	|| aib_l3_address.is_set
	|| bgp_attribute_id.is_set
	|| bgp_attribute_next_hop_as.is_set
	|| bgp_attribute_origin_as.is_set
	|| bgp_local_attribute_id.is_set
	|| bytes_through_fib_entry.is_set
	|| com_string.is_set
	|| detailed_prefix_length.is_set
	|| extcom_string.is_set
	|| extended_community.is_set
	|| fast_adjacency_flag.is_set
	|| fib_entry_adjacency_address.is_set
	|| fib_entry_adjacency_interface.is_set
	|| fib_entry_adjacency_type.is_set
	|| fib_entry_version.is_set
	|| fib_protocol_type.is_set
	|| fib_special_nh_information_type.is_set
	|| flow_tag.is_set
	|| forward_class.is_set
	|| illegal_fast_adjacency_flag.is_set
	|| ldi_time_of_last_update_in_msec.is_set
	|| load_sharing_type.is_set
	|| lwldi_time_of_last_update_in_msec.is_set
	|| mpls_fec.is_set
	|| packets_through_fib_entry.is_set
	|| path_string.is_set
	|| per_prefix_accounting.is_set
	|| pl_time_of_last_update_in_msec.is_set
	|| pl_time_stamp_type.is_set
	|| precedence_forpackets.is_set
	|| prefix_protocol.is_set
	|| qos_group.is_set
	|| qppb_qos_group_and_ip_precedence.is_set
	|| remote_adjacency_flag.is_set
	|| switch_compontent_id.is_set
	|| traffic_index_for_packets.is_set
	|| (loadshare_information !=  nullptr && loadshare_information->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(adjacency_address_length.operation)
	|| is_set(adjacency_interface.operation)
	|| is_set(afi_fib_protocol_type.operation)
	|| is_set(aib_l3_address.operation)
	|| is_set(bgp_attribute_id.operation)
	|| is_set(bgp_attribute_next_hop_as.operation)
	|| is_set(bgp_attribute_origin_as.operation)
	|| is_set(bgp_local_attribute_id.operation)
	|| is_set(bytes_through_fib_entry.operation)
	|| is_set(com_string.operation)
	|| is_set(detailed_prefix_length.operation)
	|| is_set(extcom_string.operation)
	|| is_set(extended_community.operation)
	|| is_set(fast_adjacency_flag.operation)
	|| is_set(fib_entry_adjacency_address.operation)
	|| is_set(fib_entry_adjacency_interface.operation)
	|| is_set(fib_entry_adjacency_type.operation)
	|| is_set(fib_entry_version.operation)
	|| is_set(fib_protocol_type.operation)
	|| is_set(fib_special_nh_information_type.operation)
	|| is_set(flow_tag.operation)
	|| is_set(forward_class.operation)
	|| is_set(illegal_fast_adjacency_flag.operation)
	|| is_set(ldi_time_of_last_update_in_msec.operation)
	|| is_set(load_sharing_type.operation)
	|| is_set(lwldi_time_of_last_update_in_msec.operation)
	|| is_set(mpls_fec.operation)
	|| is_set(packets_through_fib_entry.operation)
	|| is_set(path_string.operation)
	|| is_set(per_prefix_accounting.operation)
	|| is_set(pl_time_of_last_update_in_msec.operation)
	|| is_set(pl_time_stamp_type.operation)
	|| is_set(precedence_forpackets.operation)
	|| is_set(prefix_protocol.operation)
	|| is_set(qos_group.operation)
	|| is_set(qppb_qos_group_and_ip_precedence.operation)
	|| is_set(remote_adjacency_flag.operation)
	|| is_set(switch_compontent_id.operation)
	|| is_set(traffic_index_for_packets.operation)
	|| (loadshare_information !=  nullptr && loadshare_information->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-fib-entry-information";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DetailFibEntryInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_address_length.is_set || is_set(adjacency_address_length.operation)) leaf_name_data.push_back(adjacency_address_length.get_name_leafdata());
    if (adjacency_interface.is_set || is_set(adjacency_interface.operation)) leaf_name_data.push_back(adjacency_interface.get_name_leafdata());
    if (afi_fib_protocol_type.is_set || is_set(afi_fib_protocol_type.operation)) leaf_name_data.push_back(afi_fib_protocol_type.get_name_leafdata());
    if (aib_l3_address.is_set || is_set(aib_l3_address.operation)) leaf_name_data.push_back(aib_l3_address.get_name_leafdata());
    if (bgp_attribute_id.is_set || is_set(bgp_attribute_id.operation)) leaf_name_data.push_back(bgp_attribute_id.get_name_leafdata());
    if (bgp_attribute_next_hop_as.is_set || is_set(bgp_attribute_next_hop_as.operation)) leaf_name_data.push_back(bgp_attribute_next_hop_as.get_name_leafdata());
    if (bgp_attribute_origin_as.is_set || is_set(bgp_attribute_origin_as.operation)) leaf_name_data.push_back(bgp_attribute_origin_as.get_name_leafdata());
    if (bgp_local_attribute_id.is_set || is_set(bgp_local_attribute_id.operation)) leaf_name_data.push_back(bgp_local_attribute_id.get_name_leafdata());
    if (bytes_through_fib_entry.is_set || is_set(bytes_through_fib_entry.operation)) leaf_name_data.push_back(bytes_through_fib_entry.get_name_leafdata());
    if (com_string.is_set || is_set(com_string.operation)) leaf_name_data.push_back(com_string.get_name_leafdata());
    if (detailed_prefix_length.is_set || is_set(detailed_prefix_length.operation)) leaf_name_data.push_back(detailed_prefix_length.get_name_leafdata());
    if (extcom_string.is_set || is_set(extcom_string.operation)) leaf_name_data.push_back(extcom_string.get_name_leafdata());
    if (extended_community.is_set || is_set(extended_community.operation)) leaf_name_data.push_back(extended_community.get_name_leafdata());
    if (fast_adjacency_flag.is_set || is_set(fast_adjacency_flag.operation)) leaf_name_data.push_back(fast_adjacency_flag.get_name_leafdata());
    if (fib_entry_adjacency_address.is_set || is_set(fib_entry_adjacency_address.operation)) leaf_name_data.push_back(fib_entry_adjacency_address.get_name_leafdata());
    if (fib_entry_adjacency_interface.is_set || is_set(fib_entry_adjacency_interface.operation)) leaf_name_data.push_back(fib_entry_adjacency_interface.get_name_leafdata());
    if (fib_entry_adjacency_type.is_set || is_set(fib_entry_adjacency_type.operation)) leaf_name_data.push_back(fib_entry_adjacency_type.get_name_leafdata());
    if (fib_entry_version.is_set || is_set(fib_entry_version.operation)) leaf_name_data.push_back(fib_entry_version.get_name_leafdata());
    if (fib_protocol_type.is_set || is_set(fib_protocol_type.operation)) leaf_name_data.push_back(fib_protocol_type.get_name_leafdata());
    if (fib_special_nh_information_type.is_set || is_set(fib_special_nh_information_type.operation)) leaf_name_data.push_back(fib_special_nh_information_type.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (illegal_fast_adjacency_flag.is_set || is_set(illegal_fast_adjacency_flag.operation)) leaf_name_data.push_back(illegal_fast_adjacency_flag.get_name_leafdata());
    if (ldi_time_of_last_update_in_msec.is_set || is_set(ldi_time_of_last_update_in_msec.operation)) leaf_name_data.push_back(ldi_time_of_last_update_in_msec.get_name_leafdata());
    if (load_sharing_type.is_set || is_set(load_sharing_type.operation)) leaf_name_data.push_back(load_sharing_type.get_name_leafdata());
    if (lwldi_time_of_last_update_in_msec.is_set || is_set(lwldi_time_of_last_update_in_msec.operation)) leaf_name_data.push_back(lwldi_time_of_last_update_in_msec.get_name_leafdata());
    if (mpls_fec.is_set || is_set(mpls_fec.operation)) leaf_name_data.push_back(mpls_fec.get_name_leafdata());
    if (packets_through_fib_entry.is_set || is_set(packets_through_fib_entry.operation)) leaf_name_data.push_back(packets_through_fib_entry.get_name_leafdata());
    if (path_string.is_set || is_set(path_string.operation)) leaf_name_data.push_back(path_string.get_name_leafdata());
    if (per_prefix_accounting.is_set || is_set(per_prefix_accounting.operation)) leaf_name_data.push_back(per_prefix_accounting.get_name_leafdata());
    if (pl_time_of_last_update_in_msec.is_set || is_set(pl_time_of_last_update_in_msec.operation)) leaf_name_data.push_back(pl_time_of_last_update_in_msec.get_name_leafdata());
    if (pl_time_stamp_type.is_set || is_set(pl_time_stamp_type.operation)) leaf_name_data.push_back(pl_time_stamp_type.get_name_leafdata());
    if (precedence_forpackets.is_set || is_set(precedence_forpackets.operation)) leaf_name_data.push_back(precedence_forpackets.get_name_leafdata());
    if (prefix_protocol.is_set || is_set(prefix_protocol.operation)) leaf_name_data.push_back(prefix_protocol.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (qppb_qos_group_and_ip_precedence.is_set || is_set(qppb_qos_group_and_ip_precedence.operation)) leaf_name_data.push_back(qppb_qos_group_and_ip_precedence.get_name_leafdata());
    if (remote_adjacency_flag.is_set || is_set(remote_adjacency_flag.operation)) leaf_name_data.push_back(remote_adjacency_flag.get_name_leafdata());
    if (switch_compontent_id.is_set || is_set(switch_compontent_id.operation)) leaf_name_data.push_back(switch_compontent_id.get_name_leafdata());
    if (traffic_index_for_packets.is_set || is_set(traffic_index_for_packets.operation)) leaf_name_data.push_back(traffic_index_for_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "loadshare-information")
    {
        if(loadshare_information != nullptr)
        {
            children["loadshare-information"] = loadshare_information;
        }
        else
        {
            loadshare_information = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation>();
            loadshare_information->parent = this;
            children["loadshare-information"] = loadshare_information;
        }
        return children.at("loadshare-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::get_children()
{
    if(children.find("loadshare-information") == children.end())
    {
        if(loadshare_information != nullptr)
        {
            children["loadshare-information"] = loadshare_information;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-address-length")
    {
        adjacency_address_length = value;
    }
    if(value_path == "adjacency-interface")
    {
        adjacency_interface = value;
    }
    if(value_path == "afi-fib-protocol-type")
    {
        afi_fib_protocol_type = value;
    }
    if(value_path == "aib-l3-address")
    {
        aib_l3_address = value;
    }
    if(value_path == "bgp-attribute-id")
    {
        bgp_attribute_id = value;
    }
    if(value_path == "bgp-attribute-next-hop-as")
    {
        bgp_attribute_next_hop_as = value;
    }
    if(value_path == "bgp-attribute-origin-as")
    {
        bgp_attribute_origin_as = value;
    }
    if(value_path == "bgp-local-attribute-id")
    {
        bgp_local_attribute_id = value;
    }
    if(value_path == "bytes-through-fib-entry")
    {
        bytes_through_fib_entry = value;
    }
    if(value_path == "com-string")
    {
        com_string = value;
    }
    if(value_path == "detailed-prefix-length")
    {
        detailed_prefix_length = value;
    }
    if(value_path == "extcom-string")
    {
        extcom_string = value;
    }
    if(value_path == "extended-community")
    {
        extended_community = value;
    }
    if(value_path == "fast-adjacency-flag")
    {
        fast_adjacency_flag = value;
    }
    if(value_path == "fib-entry-adjacency-address")
    {
        fib_entry_adjacency_address = value;
    }
    if(value_path == "fib-entry-adjacency-interface")
    {
        fib_entry_adjacency_interface = value;
    }
    if(value_path == "fib-entry-adjacency-type")
    {
        fib_entry_adjacency_type = value;
    }
    if(value_path == "fib-entry-version")
    {
        fib_entry_version = value;
    }
    if(value_path == "fib-protocol-type")
    {
        fib_protocol_type = value;
    }
    if(value_path == "fib-special-nh-information-type")
    {
        fib_special_nh_information_type = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "illegal-fast-adjacency-flag")
    {
        illegal_fast_adjacency_flag = value;
    }
    if(value_path == "ldi-time-of-last-update-in-msec")
    {
        ldi_time_of_last_update_in_msec = value;
    }
    if(value_path == "load-sharing-type")
    {
        load_sharing_type = value;
    }
    if(value_path == "lwldi-time-of-last-update-in-msec")
    {
        lwldi_time_of_last_update_in_msec = value;
    }
    if(value_path == "mpls-fec")
    {
        mpls_fec = value;
    }
    if(value_path == "packets-through-fib-entry")
    {
        packets_through_fib_entry = value;
    }
    if(value_path == "path-string")
    {
        path_string = value;
    }
    if(value_path == "per-prefix-accounting")
    {
        per_prefix_accounting = value;
    }
    if(value_path == "pl-time-of-last-update-in-msec")
    {
        pl_time_of_last_update_in_msec = value;
    }
    if(value_path == "pl-time-stamp-type")
    {
        pl_time_stamp_type = value;
    }
    if(value_path == "precedence-forpackets")
    {
        precedence_forpackets = value;
    }
    if(value_path == "prefix-protocol")
    {
        prefix_protocol = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "qppb-qos-group-and-ip-precedence")
    {
        qppb_qos_group_and_ip_precedence = value;
    }
    if(value_path == "remote-adjacency-flag")
    {
        remote_adjacency_flag = value;
    }
    if(value_path == "switch-compontent-id")
    {
        switch_compontent_id = value;
    }
    if(value_path == "traffic-index-for-packets")
    {
        traffic_index_for_packets = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadshareInformation()
    :
    bytes_through_load_information{YType::uint64, "bytes-through-load-information"},
    is_owner{YType::boolean, "is-owner"},
    load_information_owner_deleted_flag{YType::boolean, "load-information-owner-deleted-flag"},
    load_information_reference_count{YType::uint16, "load-information-reference-count"},
    loadinfo_sanity_flag{YType::boolean, "loadinfo-sanity-flag"},
    mask_length_of_owner{YType::uint32, "mask-length-of-owner"},
    packets_through_load_information{YType::uint64, "packets-through-load-information"},
    per_dest_load_sharing_flag{YType::boolean, "per-dest-load-sharing-flag"},
    prefix_of_owner{YType::uint32, "prefix-of-owner"},
    total_bytes_through_load_information{YType::uint64, "total-bytes-through-load-information"},
    total_packets_through_load_information{YType::uint64, "total-packets-through-load-information"}
    	,
    load_informtion_internal_data(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData>())
{
    load_informtion_internal_data->parent = this;
    children["load-informtion-internal-data"] = load_informtion_internal_data;

    yang_name = "loadshare-information"; yang_parent_name = "detail-fib-entry-information";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::~LoadshareInformation()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::has_data() const
{
    return bytes_through_load_information.is_set
	|| is_owner.is_set
	|| load_information_owner_deleted_flag.is_set
	|| load_information_reference_count.is_set
	|| loadinfo_sanity_flag.is_set
	|| mask_length_of_owner.is_set
	|| packets_through_load_information.is_set
	|| per_dest_load_sharing_flag.is_set
	|| prefix_of_owner.is_set
	|| total_bytes_through_load_information.is_set
	|| total_packets_through_load_information.is_set
	|| (load_informtion_internal_data !=  nullptr && load_informtion_internal_data->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes_through_load_information.operation)
	|| is_set(is_owner.operation)
	|| is_set(load_information_owner_deleted_flag.operation)
	|| is_set(load_information_reference_count.operation)
	|| is_set(loadinfo_sanity_flag.operation)
	|| is_set(mask_length_of_owner.operation)
	|| is_set(packets_through_load_information.operation)
	|| is_set(per_dest_load_sharing_flag.operation)
	|| is_set(prefix_of_owner.operation)
	|| is_set(total_bytes_through_load_information.operation)
	|| is_set(total_packets_through_load_information.operation)
	|| (load_informtion_internal_data !=  nullptr && load_informtion_internal_data->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loadshare-information";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadshareInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes_through_load_information.is_set || is_set(bytes_through_load_information.operation)) leaf_name_data.push_back(bytes_through_load_information.get_name_leafdata());
    if (is_owner.is_set || is_set(is_owner.operation)) leaf_name_data.push_back(is_owner.get_name_leafdata());
    if (load_information_owner_deleted_flag.is_set || is_set(load_information_owner_deleted_flag.operation)) leaf_name_data.push_back(load_information_owner_deleted_flag.get_name_leafdata());
    if (load_information_reference_count.is_set || is_set(load_information_reference_count.operation)) leaf_name_data.push_back(load_information_reference_count.get_name_leafdata());
    if (loadinfo_sanity_flag.is_set || is_set(loadinfo_sanity_flag.operation)) leaf_name_data.push_back(loadinfo_sanity_flag.get_name_leafdata());
    if (mask_length_of_owner.is_set || is_set(mask_length_of_owner.operation)) leaf_name_data.push_back(mask_length_of_owner.get_name_leafdata());
    if (packets_through_load_information.is_set || is_set(packets_through_load_information.operation)) leaf_name_data.push_back(packets_through_load_information.get_name_leafdata());
    if (per_dest_load_sharing_flag.is_set || is_set(per_dest_load_sharing_flag.operation)) leaf_name_data.push_back(per_dest_load_sharing_flag.get_name_leafdata());
    if (prefix_of_owner.is_set || is_set(prefix_of_owner.operation)) leaf_name_data.push_back(prefix_of_owner.get_name_leafdata());
    if (total_bytes_through_load_information.is_set || is_set(total_bytes_through_load_information.operation)) leaf_name_data.push_back(total_bytes_through_load_information.get_name_leafdata());
    if (total_packets_through_load_information.is_set || is_set(total_packets_through_load_information.operation)) leaf_name_data.push_back(total_packets_through_load_information.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-informtion-internal-data")
    {
        if(load_informtion_internal_data != nullptr)
        {
            children["load-informtion-internal-data"] = load_informtion_internal_data;
        }
        else
        {
            load_informtion_internal_data = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData>();
            load_informtion_internal_data->parent = this;
            children["load-informtion-internal-data"] = load_informtion_internal_data;
        }
        return children.at("load-informtion-internal-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::get_children()
{
    if(children.find("load-informtion-internal-data") == children.end())
    {
        if(load_informtion_internal_data != nullptr)
        {
            children["load-informtion-internal-data"] = load_informtion_internal_data;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes-through-load-information")
    {
        bytes_through_load_information = value;
    }
    if(value_path == "is-owner")
    {
        is_owner = value;
    }
    if(value_path == "load-information-owner-deleted-flag")
    {
        load_information_owner_deleted_flag = value;
    }
    if(value_path == "load-information-reference-count")
    {
        load_information_reference_count = value;
    }
    if(value_path == "loadinfo-sanity-flag")
    {
        loadinfo_sanity_flag = value;
    }
    if(value_path == "mask-length-of-owner")
    {
        mask_length_of_owner = value;
    }
    if(value_path == "packets-through-load-information")
    {
        packets_through_load_information = value;
    }
    if(value_path == "per-dest-load-sharing-flag")
    {
        per_dest_load_sharing_flag = value;
    }
    if(value_path == "prefix-of-owner")
    {
        prefix_of_owner = value;
    }
    if(value_path == "total-bytes-through-load-information")
    {
        total_bytes_through_load_information = value;
    }
    if(value_path == "total-packets-through-load-information")
    {
        total_packets_through_load_information = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::LoadInformtionInternalData()
    :
    interface_handle{YType::str, "interface-handle"},
    is_pbts_info_valid{YType::boolean, "is-pbts-info-valid"},
    ldi_next_hop_buckets{YType::uint8, "ldi-next-hop-buckets"},
    level_ofldis{YType::uint8, "level-ofldis"},
    maximum_index_arrays{YType::uint32, "maximum-index-arrays"},
    maximum_slots{YType::uint32, "maximum-slots"},
    normalized_weights{YType::str, "normalized-weights"},
    number_of_ldis{YType::uint8, "number-of-ldis"},
    path_indices{YType::str, "path-indices"},
    path_ldi_numbers{YType::str, "path-ldi-numbers"},
    pbts_class_num_paths{YType::str, "pbts-class-num-paths"},
    pbts_class_offset{YType::str, "pbts-class-offset"},
    pbts_fallback_mapped_class{YType::str, "pbts-fallback-mapped-class"},
    platform_hardware_information{YType::str, "platform-hardware-information"},
    round_robin_disable{YType::boolean, "round-robin-disable"},
    sanity_flag{YType::boolean, "sanity-flag"},
    tunnel_class_value{YType::str, "tunnel-class-value"},
    weights_of_path{YType::uint32, "weights-of-path"}
{
    yang_name = "load-informtion-internal-data"; yang_parent_name = "loadshare-information";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::~LoadInformtionInternalData()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::has_data() const
{
    for (std::size_t index=0; index<adjacency_address.size(); index++)
    {
        if(adjacency_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pbts_class_is_fallback_mapped.size(); index++)
    {
        if(pbts_class_is_fallback_mapped[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pbts_fallback_to_drop.size(); index++)
    {
        if(pbts_fallback_to_drop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel_is_forward_class.size(); index++)
    {
        if(tunnel_is_forward_class[index]->has_data())
            return true;
    }
    for (auto const & leaf : interface_handle.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sanity_flag.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : weights_of_path.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_pbts_info_valid.is_set
	|| ldi_next_hop_buckets.is_set
	|| level_ofldis.is_set
	|| maximum_index_arrays.is_set
	|| maximum_slots.is_set
	|| normalized_weights.is_set
	|| number_of_ldis.is_set
	|| path_indices.is_set
	|| path_ldi_numbers.is_set
	|| pbts_class_num_paths.is_set
	|| pbts_class_offset.is_set
	|| pbts_fallback_mapped_class.is_set
	|| platform_hardware_information.is_set
	|| round_robin_disable.is_set
	|| tunnel_class_value.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::has_operation() const
{
    for (std::size_t index=0; index<adjacency_address.size(); index++)
    {
        if(adjacency_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pbts_class_is_fallback_mapped.size(); index++)
    {
        if(pbts_class_is_fallback_mapped[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pbts_fallback_to_drop.size(); index++)
    {
        if(pbts_fallback_to_drop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel_is_forward_class.size(); index++)
    {
        if(tunnel_is_forward_class[index]->has_operation())
            return true;
    }
    for (auto const & leaf : interface_handle.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sanity_flag.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : weights_of_path.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_handle.operation)
	|| is_set(is_pbts_info_valid.operation)
	|| is_set(ldi_next_hop_buckets.operation)
	|| is_set(level_ofldis.operation)
	|| is_set(maximum_index_arrays.operation)
	|| is_set(maximum_slots.operation)
	|| is_set(normalized_weights.operation)
	|| is_set(number_of_ldis.operation)
	|| is_set(path_indices.operation)
	|| is_set(path_ldi_numbers.operation)
	|| is_set(pbts_class_num_paths.operation)
	|| is_set(pbts_class_offset.operation)
	|| is_set(pbts_fallback_mapped_class.operation)
	|| is_set(platform_hardware_information.operation)
	|| is_set(round_robin_disable.operation)
	|| is_set(sanity_flag.operation)
	|| is_set(tunnel_class_value.operation)
	|| is_set(weights_of_path.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-informtion-internal-data";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadInformtionInternalData' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_pbts_info_valid.is_set || is_set(is_pbts_info_valid.operation)) leaf_name_data.push_back(is_pbts_info_valid.get_name_leafdata());
    if (ldi_next_hop_buckets.is_set || is_set(ldi_next_hop_buckets.operation)) leaf_name_data.push_back(ldi_next_hop_buckets.get_name_leafdata());
    if (level_ofldis.is_set || is_set(level_ofldis.operation)) leaf_name_data.push_back(level_ofldis.get_name_leafdata());
    if (maximum_index_arrays.is_set || is_set(maximum_index_arrays.operation)) leaf_name_data.push_back(maximum_index_arrays.get_name_leafdata());
    if (maximum_slots.is_set || is_set(maximum_slots.operation)) leaf_name_data.push_back(maximum_slots.get_name_leafdata());
    if (normalized_weights.is_set || is_set(normalized_weights.operation)) leaf_name_data.push_back(normalized_weights.get_name_leafdata());
    if (number_of_ldis.is_set || is_set(number_of_ldis.operation)) leaf_name_data.push_back(number_of_ldis.get_name_leafdata());
    if (path_indices.is_set || is_set(path_indices.operation)) leaf_name_data.push_back(path_indices.get_name_leafdata());
    if (path_ldi_numbers.is_set || is_set(path_ldi_numbers.operation)) leaf_name_data.push_back(path_ldi_numbers.get_name_leafdata());
    if (pbts_class_num_paths.is_set || is_set(pbts_class_num_paths.operation)) leaf_name_data.push_back(pbts_class_num_paths.get_name_leafdata());
    if (pbts_class_offset.is_set || is_set(pbts_class_offset.operation)) leaf_name_data.push_back(pbts_class_offset.get_name_leafdata());
    if (pbts_fallback_mapped_class.is_set || is_set(pbts_fallback_mapped_class.operation)) leaf_name_data.push_back(pbts_fallback_mapped_class.get_name_leafdata());
    if (platform_hardware_information.is_set || is_set(platform_hardware_information.operation)) leaf_name_data.push_back(platform_hardware_information.get_name_leafdata());
    if (round_robin_disable.is_set || is_set(round_robin_disable.operation)) leaf_name_data.push_back(round_robin_disable.get_name_leafdata());
    if (tunnel_class_value.is_set || is_set(tunnel_class_value.operation)) leaf_name_data.push_back(tunnel_class_value.get_name_leafdata());

    auto interface_handle_name_datas = interface_handle.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_handle_name_datas.begin(), interface_handle_name_datas.end());
    auto sanity_flag_name_datas = sanity_flag.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sanity_flag_name_datas.begin(), sanity_flag_name_datas.end());
    auto weights_of_path_name_datas = weights_of_path.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), weights_of_path_name_datas.begin(), weights_of_path_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-address")
    {
        for(auto const & c : adjacency_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress>();
        c->parent = this;
        adjacency_address.push_back(std::move(c));
        children[segment_path] = adjacency_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "pbts-class-is-fallback-mapped")
    {
        for(auto const & c : pbts_class_is_fallback_mapped)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped>();
        c->parent = this;
        pbts_class_is_fallback_mapped.push_back(std::move(c));
        children[segment_path] = pbts_class_is_fallback_mapped.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "pbts-fallback-to-drop")
    {
        for(auto const & c : pbts_fallback_to_drop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop>();
        c->parent = this;
        pbts_fallback_to_drop.push_back(std::move(c));
        children[segment_path] = pbts_fallback_to_drop.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel-is-forward-class")
    {
        for(auto const & c : tunnel_is_forward_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass>();
        c->parent = this;
        tunnel_is_forward_class.push_back(std::move(c));
        children[segment_path] = tunnel_is_forward_class.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::get_children()
{
    for (auto const & c : adjacency_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : pbts_class_is_fallback_mapped)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : pbts_fallback_to_drop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : tunnel_is_forward_class)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-handle")
    {
        interface_handle.append(value);
    }
    if(value_path == "is-pbts-info-valid")
    {
        is_pbts_info_valid = value;
    }
    if(value_path == "ldi-next-hop-buckets")
    {
        ldi_next_hop_buckets = value;
    }
    if(value_path == "level-ofldis")
    {
        level_ofldis = value;
    }
    if(value_path == "maximum-index-arrays")
    {
        maximum_index_arrays = value;
    }
    if(value_path == "maximum-slots")
    {
        maximum_slots = value;
    }
    if(value_path == "normalized-weights")
    {
        normalized_weights = value;
    }
    if(value_path == "number-of-ldis")
    {
        number_of_ldis = value;
    }
    if(value_path == "path-indices")
    {
        path_indices = value;
    }
    if(value_path == "path-ldi-numbers")
    {
        path_ldi_numbers = value;
    }
    if(value_path == "pbts-class-num-paths")
    {
        pbts_class_num_paths = value;
    }
    if(value_path == "pbts-class-offset")
    {
        pbts_class_offset = value;
    }
    if(value_path == "pbts-fallback-mapped-class")
    {
        pbts_fallback_mapped_class = value;
    }
    if(value_path == "platform-hardware-information")
    {
        platform_hardware_information = value;
    }
    if(value_path == "round-robin-disable")
    {
        round_robin_disable = value;
    }
    if(value_path == "sanity-flag")
    {
        sanity_flag.append(value);
    }
    if(value_path == "tunnel-class-value")
    {
        tunnel_class_value = value;
    }
    if(value_path == "weights-of-path")
    {
        weights_of_path.append(value);
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::AdjacencyAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "adjacency-address"; yang_parent_name = "load-informtion-internal-data";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::~AdjacencyAddress()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::has_data() const
{
    return address.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-address";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencyAddress' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::PbtsClassIsFallbackMapped()
    :
    entry{YType::boolean, "entry"}
{
    yang_name = "pbts-class-is-fallback-mapped"; yang_parent_name = "load-informtion-internal-data";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::~PbtsClassIsFallbackMapped()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbts-class-is-fallback-mapped";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbtsClassIsFallbackMapped' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::PbtsFallbackToDrop()
    :
    entry{YType::boolean, "entry"}
{
    yang_name = "pbts-fallback-to-drop"; yang_parent_name = "load-informtion-internal-data";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::~PbtsFallbackToDrop()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbts-fallback-to-drop";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbtsFallbackToDrop' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::TunnelIsForwardClass()
    :
    entry{YType::boolean, "entry"}
{
    yang_name = "tunnel-is-forward-class"; yang_parent_name = "load-informtion-internal-data";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::~TunnelIsForwardClass()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-is-forward-class";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelIsForwardClass' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibEntryPath()
{
    yang_name = "fib-entry-path"; yang_parent_name = "ip-prefix-detail";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::~FibEntryPath()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::has_data() const
{
    for (std::size_t index=0; index<fib_sh_tbl_path.size(); index++)
    {
        if(fib_sh_tbl_path[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::has_operation() const
{
    for (std::size_t index=0; index<fib_sh_tbl_path.size(); index++)
    {
        if(fib_sh_tbl_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-entry-path";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FibEntryPath' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fib-sh-tbl-path")
    {
        for(auto const & c : fib_sh_tbl_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath>();
        c->parent = this;
        fib_sh_tbl_path.push_back(std::move(c));
        children[segment_path] = fib_sh_tbl_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::get_children()
{
    for (auto const & c : fib_sh_tbl_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::FibShTblPath()
    :
    attached_path{YType::boolean, "attached-path"},
    backup_index{YType::uint8, "backup-index"},
    backup_path{YType::boolean, "backup-path"},
    best_external_path{YType::boolean, "best-external-path"},
    brief_interface_handle{YType::str, "brief-interface-handle"},
    brief_lfa_protection_type{YType::enumeration, "brief-lfa-protection-type"},
    brief_next_hop_prefix{YType::str, "brief-next-hop-prefix"},
    brief_pnode_address{YType::str, "brief-pnode-address"},
    brief_qnode_address{YType::str, "brief-qnode-address"},
    hardware_information{YType::str, "hardware-information"},
    next_hop_index{YType::uint32, "next-hop-index"},
    packets_received_path{YType::boolean, "packets-received-path"},
    parent_interface_handle{YType::str, "parent-interface-handle"},
    path_dlb{YType::boolean, "path-dlb"},
    path_flags{YType::uint32, "path-flags"},
    path_index{YType::uint8, "path-index"},
    path_info_flags{YType::uint16, "path-info-flags"},
    protect_ignore{YType::boolean, "protect-ignore"},
    recursionvia_len{YType::uint8, "recursionvia-len"},
    recursive_path{YType::boolean, "recursive-path"},
    resolved_path{YType::boolean, "resolved-path"},
    via_label_to_recurse{YType::uint32, "via-label-to-recurse"}
    	,
    more_detail_about_path(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath>())
	,mpls_information_for_path(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath>())
{
    more_detail_about_path->parent = this;
    children["more-detail-about-path"] = more_detail_about_path;

    mpls_information_for_path->parent = this;
    children["mpls-information-for-path"] = mpls_information_for_path;

    yang_name = "fib-sh-tbl-path"; yang_parent_name = "fib-entry-path";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::~FibShTblPath()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::has_data() const
{
    return attached_path.is_set
	|| backup_index.is_set
	|| backup_path.is_set
	|| best_external_path.is_set
	|| brief_interface_handle.is_set
	|| brief_lfa_protection_type.is_set
	|| brief_next_hop_prefix.is_set
	|| brief_pnode_address.is_set
	|| brief_qnode_address.is_set
	|| hardware_information.is_set
	|| next_hop_index.is_set
	|| packets_received_path.is_set
	|| parent_interface_handle.is_set
	|| path_dlb.is_set
	|| path_flags.is_set
	|| path_index.is_set
	|| path_info_flags.is_set
	|| protect_ignore.is_set
	|| recursionvia_len.is_set
	|| recursive_path.is_set
	|| resolved_path.is_set
	|| via_label_to_recurse.is_set
	|| (more_detail_about_path !=  nullptr && more_detail_about_path->has_data())
	|| (mpls_information_for_path !=  nullptr && mpls_information_for_path->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::has_operation() const
{
    return is_set(operation)
	|| is_set(attached_path.operation)
	|| is_set(backup_index.operation)
	|| is_set(backup_path.operation)
	|| is_set(best_external_path.operation)
	|| is_set(brief_interface_handle.operation)
	|| is_set(brief_lfa_protection_type.operation)
	|| is_set(brief_next_hop_prefix.operation)
	|| is_set(brief_pnode_address.operation)
	|| is_set(brief_qnode_address.operation)
	|| is_set(hardware_information.operation)
	|| is_set(next_hop_index.operation)
	|| is_set(packets_received_path.operation)
	|| is_set(parent_interface_handle.operation)
	|| is_set(path_dlb.operation)
	|| is_set(path_flags.operation)
	|| is_set(path_index.operation)
	|| is_set(path_info_flags.operation)
	|| is_set(protect_ignore.operation)
	|| is_set(recursionvia_len.operation)
	|| is_set(recursive_path.operation)
	|| is_set(resolved_path.operation)
	|| is_set(via_label_to_recurse.operation)
	|| (more_detail_about_path !=  nullptr && more_detail_about_path->has_operation())
	|| (mpls_information_for_path !=  nullptr && mpls_information_for_path->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-sh-tbl-path";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FibShTblPath' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attached_path.is_set || is_set(attached_path.operation)) leaf_name_data.push_back(attached_path.get_name_leafdata());
    if (backup_index.is_set || is_set(backup_index.operation)) leaf_name_data.push_back(backup_index.get_name_leafdata());
    if (backup_path.is_set || is_set(backup_path.operation)) leaf_name_data.push_back(backup_path.get_name_leafdata());
    if (best_external_path.is_set || is_set(best_external_path.operation)) leaf_name_data.push_back(best_external_path.get_name_leafdata());
    if (brief_interface_handle.is_set || is_set(brief_interface_handle.operation)) leaf_name_data.push_back(brief_interface_handle.get_name_leafdata());
    if (brief_lfa_protection_type.is_set || is_set(brief_lfa_protection_type.operation)) leaf_name_data.push_back(brief_lfa_protection_type.get_name_leafdata());
    if (brief_next_hop_prefix.is_set || is_set(brief_next_hop_prefix.operation)) leaf_name_data.push_back(brief_next_hop_prefix.get_name_leafdata());
    if (brief_pnode_address.is_set || is_set(brief_pnode_address.operation)) leaf_name_data.push_back(brief_pnode_address.get_name_leafdata());
    if (brief_qnode_address.is_set || is_set(brief_qnode_address.operation)) leaf_name_data.push_back(brief_qnode_address.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.operation)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (next_hop_index.is_set || is_set(next_hop_index.operation)) leaf_name_data.push_back(next_hop_index.get_name_leafdata());
    if (packets_received_path.is_set || is_set(packets_received_path.operation)) leaf_name_data.push_back(packets_received_path.get_name_leafdata());
    if (parent_interface_handle.is_set || is_set(parent_interface_handle.operation)) leaf_name_data.push_back(parent_interface_handle.get_name_leafdata());
    if (path_dlb.is_set || is_set(path_dlb.operation)) leaf_name_data.push_back(path_dlb.get_name_leafdata());
    if (path_flags.is_set || is_set(path_flags.operation)) leaf_name_data.push_back(path_flags.get_name_leafdata());
    if (path_index.is_set || is_set(path_index.operation)) leaf_name_data.push_back(path_index.get_name_leafdata());
    if (path_info_flags.is_set || is_set(path_info_flags.operation)) leaf_name_data.push_back(path_info_flags.get_name_leafdata());
    if (protect_ignore.is_set || is_set(protect_ignore.operation)) leaf_name_data.push_back(protect_ignore.get_name_leafdata());
    if (recursionvia_len.is_set || is_set(recursionvia_len.operation)) leaf_name_data.push_back(recursionvia_len.get_name_leafdata());
    if (recursive_path.is_set || is_set(recursive_path.operation)) leaf_name_data.push_back(recursive_path.get_name_leafdata());
    if (resolved_path.is_set || is_set(resolved_path.operation)) leaf_name_data.push_back(resolved_path.get_name_leafdata());
    if (via_label_to_recurse.is_set || is_set(via_label_to_recurse.operation)) leaf_name_data.push_back(via_label_to_recurse.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "more-detail-about-path")
    {
        if(more_detail_about_path != nullptr)
        {
            children["more-detail-about-path"] = more_detail_about_path;
        }
        else
        {
            more_detail_about_path = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath>();
            more_detail_about_path->parent = this;
            children["more-detail-about-path"] = more_detail_about_path;
        }
        return children.at("more-detail-about-path");
    }

    if(child_yang_name == "mpls-information-for-path")
    {
        if(mpls_information_for_path != nullptr)
        {
            children["mpls-information-for-path"] = mpls_information_for_path;
        }
        else
        {
            mpls_information_for_path = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath>();
            mpls_information_for_path->parent = this;
            children["mpls-information-for-path"] = mpls_information_for_path;
        }
        return children.at("mpls-information-for-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::get_children()
{
    if(children.find("more-detail-about-path") == children.end())
    {
        if(more_detail_about_path != nullptr)
        {
            children["more-detail-about-path"] = more_detail_about_path;
        }
    }

    if(children.find("mpls-information-for-path") == children.end())
    {
        if(mpls_information_for_path != nullptr)
        {
            children["mpls-information-for-path"] = mpls_information_for_path;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attached-path")
    {
        attached_path = value;
    }
    if(value_path == "backup-index")
    {
        backup_index = value;
    }
    if(value_path == "backup-path")
    {
        backup_path = value;
    }
    if(value_path == "best-external-path")
    {
        best_external_path = value;
    }
    if(value_path == "brief-interface-handle")
    {
        brief_interface_handle = value;
    }
    if(value_path == "brief-lfa-protection-type")
    {
        brief_lfa_protection_type = value;
    }
    if(value_path == "brief-next-hop-prefix")
    {
        brief_next_hop_prefix = value;
    }
    if(value_path == "brief-pnode-address")
    {
        brief_pnode_address = value;
    }
    if(value_path == "brief-qnode-address")
    {
        brief_qnode_address = value;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
    }
    if(value_path == "next-hop-index")
    {
        next_hop_index = value;
    }
    if(value_path == "packets-received-path")
    {
        packets_received_path = value;
    }
    if(value_path == "parent-interface-handle")
    {
        parent_interface_handle = value;
    }
    if(value_path == "path-dlb")
    {
        path_dlb = value;
    }
    if(value_path == "path-flags")
    {
        path_flags = value;
    }
    if(value_path == "path-index")
    {
        path_index = value;
    }
    if(value_path == "path-info-flags")
    {
        path_info_flags = value;
    }
    if(value_path == "protect-ignore")
    {
        protect_ignore = value;
    }
    if(value_path == "recursionvia-len")
    {
        recursionvia_len = value;
    }
    if(value_path == "recursive-path")
    {
        recursive_path = value;
    }
    if(value_path == "resolved-path")
    {
        resolved_path = value;
    }
    if(value_path == "via-label-to-recurse")
    {
        via_label_to_recurse = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::MoreDetailAboutPath()
    :
    current_path_flag{YType::boolean, "current-path-flag"},
    detail_fib_adjacency_type{YType::enumeration, "detail-fib-adjacency-type"},
    detail_next_hop_prefix{YType::str, "detail-next-hop-prefix"},
    external_adjacency{YType::boolean, "external-adjacency"},
    fib_path_nh_information_type{YType::enumeration, "fib-path-nh-information-type"},
    fib_path_nh_information_type_special{YType::enumeration, "fib-path-nh-information-type-special"},
    interface_associated_path{YType::str, "interface-associated-path"},
    ip_address_to_recurse{YType::str, "ip-address-to-recurse"},
    label_to_recurse{YType::uint32, "label-to-recurse"},
    lisprlocid{YType::uint32, "lisprlocid"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_mask_length{YType::uint8, "next-hop-mask-length"},
    next_hop_vrf{YType::str, "next-hop-vrf"},
    next_prefix_length{YType::uint8, "next-prefix-length"},
    next_prefix_length2{YType::uint8, "next-prefix-length2"},
    next_prefix_recursion{YType::str, "next-prefix-recursion"},
    next_prefix_recursion2{YType::str, "next-prefix-recursion2"},
    number_of_dependencies_this_path{YType::uint32, "number-of-dependencies-this-path"},
    recurse_prefix_object{YType::boolean, "recurse-prefix-object"},
    recurse_prefix_object2{YType::boolean, "recurse-prefix-object2"},
    recursive_path_information{YType::boolean, "recursive-path-information"},
    robin_reset_value{YType::uint8, "robin-reset-value"},
    tunnel_class{YType::uint8, "tunnel-class"},
    tunnel_is_forward_class{YType::boolean, "tunnel-is-forward-class"},
    tunnle_endpoint_id{YType::uint32, "tunnle-endpoint-id"},
    weight_of_path{YType::uint32, "weight-of-path"}
{
    yang_name = "more-detail-about-path"; yang_parent_name = "fib-sh-tbl-path";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::~MoreDetailAboutPath()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::has_data() const
{
    for (std::size_t index=0; index<spd_ipencap.size(); index++)
    {
        if(spd_ipencap[index]->has_data())
            return true;
    }
    return current_path_flag.is_set
	|| detail_fib_adjacency_type.is_set
	|| detail_next_hop_prefix.is_set
	|| external_adjacency.is_set
	|| fib_path_nh_information_type.is_set
	|| fib_path_nh_information_type_special.is_set
	|| interface_associated_path.is_set
	|| ip_address_to_recurse.is_set
	|| label_to_recurse.is_set
	|| lisprlocid.is_set
	|| next_hop_interface.is_set
	|| next_hop_mask_length.is_set
	|| next_hop_vrf.is_set
	|| next_prefix_length.is_set
	|| next_prefix_length2.is_set
	|| next_prefix_recursion.is_set
	|| next_prefix_recursion2.is_set
	|| number_of_dependencies_this_path.is_set
	|| recurse_prefix_object.is_set
	|| recurse_prefix_object2.is_set
	|| recursive_path_information.is_set
	|| robin_reset_value.is_set
	|| tunnel_class.is_set
	|| tunnel_is_forward_class.is_set
	|| tunnle_endpoint_id.is_set
	|| weight_of_path.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::has_operation() const
{
    for (std::size_t index=0; index<spd_ipencap.size(); index++)
    {
        if(spd_ipencap[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(current_path_flag.operation)
	|| is_set(detail_fib_adjacency_type.operation)
	|| is_set(detail_next_hop_prefix.operation)
	|| is_set(external_adjacency.operation)
	|| is_set(fib_path_nh_information_type.operation)
	|| is_set(fib_path_nh_information_type_special.operation)
	|| is_set(interface_associated_path.operation)
	|| is_set(ip_address_to_recurse.operation)
	|| is_set(label_to_recurse.operation)
	|| is_set(lisprlocid.operation)
	|| is_set(next_hop_interface.operation)
	|| is_set(next_hop_mask_length.operation)
	|| is_set(next_hop_vrf.operation)
	|| is_set(next_prefix_length.operation)
	|| is_set(next_prefix_length2.operation)
	|| is_set(next_prefix_recursion.operation)
	|| is_set(next_prefix_recursion2.operation)
	|| is_set(number_of_dependencies_this_path.operation)
	|| is_set(recurse_prefix_object.operation)
	|| is_set(recurse_prefix_object2.operation)
	|| is_set(recursive_path_information.operation)
	|| is_set(robin_reset_value.operation)
	|| is_set(tunnel_class.operation)
	|| is_set(tunnel_is_forward_class.operation)
	|| is_set(tunnle_endpoint_id.operation)
	|| is_set(weight_of_path.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "more-detail-about-path";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MoreDetailAboutPath' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_path_flag.is_set || is_set(current_path_flag.operation)) leaf_name_data.push_back(current_path_flag.get_name_leafdata());
    if (detail_fib_adjacency_type.is_set || is_set(detail_fib_adjacency_type.operation)) leaf_name_data.push_back(detail_fib_adjacency_type.get_name_leafdata());
    if (detail_next_hop_prefix.is_set || is_set(detail_next_hop_prefix.operation)) leaf_name_data.push_back(detail_next_hop_prefix.get_name_leafdata());
    if (external_adjacency.is_set || is_set(external_adjacency.operation)) leaf_name_data.push_back(external_adjacency.get_name_leafdata());
    if (fib_path_nh_information_type.is_set || is_set(fib_path_nh_information_type.operation)) leaf_name_data.push_back(fib_path_nh_information_type.get_name_leafdata());
    if (fib_path_nh_information_type_special.is_set || is_set(fib_path_nh_information_type_special.operation)) leaf_name_data.push_back(fib_path_nh_information_type_special.get_name_leafdata());
    if (interface_associated_path.is_set || is_set(interface_associated_path.operation)) leaf_name_data.push_back(interface_associated_path.get_name_leafdata());
    if (ip_address_to_recurse.is_set || is_set(ip_address_to_recurse.operation)) leaf_name_data.push_back(ip_address_to_recurse.get_name_leafdata());
    if (label_to_recurse.is_set || is_set(label_to_recurse.operation)) leaf_name_data.push_back(label_to_recurse.get_name_leafdata());
    if (lisprlocid.is_set || is_set(lisprlocid.operation)) leaf_name_data.push_back(lisprlocid.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.operation)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_mask_length.is_set || is_set(next_hop_mask_length.operation)) leaf_name_data.push_back(next_hop_mask_length.get_name_leafdata());
    if (next_hop_vrf.is_set || is_set(next_hop_vrf.operation)) leaf_name_data.push_back(next_hop_vrf.get_name_leafdata());
    if (next_prefix_length.is_set || is_set(next_prefix_length.operation)) leaf_name_data.push_back(next_prefix_length.get_name_leafdata());
    if (next_prefix_length2.is_set || is_set(next_prefix_length2.operation)) leaf_name_data.push_back(next_prefix_length2.get_name_leafdata());
    if (next_prefix_recursion.is_set || is_set(next_prefix_recursion.operation)) leaf_name_data.push_back(next_prefix_recursion.get_name_leafdata());
    if (next_prefix_recursion2.is_set || is_set(next_prefix_recursion2.operation)) leaf_name_data.push_back(next_prefix_recursion2.get_name_leafdata());
    if (number_of_dependencies_this_path.is_set || is_set(number_of_dependencies_this_path.operation)) leaf_name_data.push_back(number_of_dependencies_this_path.get_name_leafdata());
    if (recurse_prefix_object.is_set || is_set(recurse_prefix_object.operation)) leaf_name_data.push_back(recurse_prefix_object.get_name_leafdata());
    if (recurse_prefix_object2.is_set || is_set(recurse_prefix_object2.operation)) leaf_name_data.push_back(recurse_prefix_object2.get_name_leafdata());
    if (recursive_path_information.is_set || is_set(recursive_path_information.operation)) leaf_name_data.push_back(recursive_path_information.get_name_leafdata());
    if (robin_reset_value.is_set || is_set(robin_reset_value.operation)) leaf_name_data.push_back(robin_reset_value.get_name_leafdata());
    if (tunnel_class.is_set || is_set(tunnel_class.operation)) leaf_name_data.push_back(tunnel_class.get_name_leafdata());
    if (tunnel_is_forward_class.is_set || is_set(tunnel_is_forward_class.operation)) leaf_name_data.push_back(tunnel_is_forward_class.get_name_leafdata());
    if (tunnle_endpoint_id.is_set || is_set(tunnle_endpoint_id.operation)) leaf_name_data.push_back(tunnle_endpoint_id.get_name_leafdata());
    if (weight_of_path.is_set || is_set(weight_of_path.operation)) leaf_name_data.push_back(weight_of_path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spd-ipencap")
    {
        for(auto const & c : spd_ipencap)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap>();
        c->parent = this;
        spd_ipencap.push_back(std::move(c));
        children[segment_path] = spd_ipencap.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::get_children()
{
    for (auto const & c : spd_ipencap)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "current-path-flag")
    {
        current_path_flag = value;
    }
    if(value_path == "detail-fib-adjacency-type")
    {
        detail_fib_adjacency_type = value;
    }
    if(value_path == "detail-next-hop-prefix")
    {
        detail_next_hop_prefix = value;
    }
    if(value_path == "external-adjacency")
    {
        external_adjacency = value;
    }
    if(value_path == "fib-path-nh-information-type")
    {
        fib_path_nh_information_type = value;
    }
    if(value_path == "fib-path-nh-information-type-special")
    {
        fib_path_nh_information_type_special = value;
    }
    if(value_path == "interface-associated-path")
    {
        interface_associated_path = value;
    }
    if(value_path == "ip-address-to-recurse")
    {
        ip_address_to_recurse = value;
    }
    if(value_path == "label-to-recurse")
    {
        label_to_recurse = value;
    }
    if(value_path == "lisprlocid")
    {
        lisprlocid = value;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
    }
    if(value_path == "next-hop-mask-length")
    {
        next_hop_mask_length = value;
    }
    if(value_path == "next-hop-vrf")
    {
        next_hop_vrf = value;
    }
    if(value_path == "next-prefix-length")
    {
        next_prefix_length = value;
    }
    if(value_path == "next-prefix-length2")
    {
        next_prefix_length2 = value;
    }
    if(value_path == "next-prefix-recursion")
    {
        next_prefix_recursion = value;
    }
    if(value_path == "next-prefix-recursion2")
    {
        next_prefix_recursion2 = value;
    }
    if(value_path == "number-of-dependencies-this-path")
    {
        number_of_dependencies_this_path = value;
    }
    if(value_path == "recurse-prefix-object")
    {
        recurse_prefix_object = value;
    }
    if(value_path == "recurse-prefix-object2")
    {
        recurse_prefix_object2 = value;
    }
    if(value_path == "recursive-path-information")
    {
        recursive_path_information = value;
    }
    if(value_path == "robin-reset-value")
    {
        robin_reset_value = value;
    }
    if(value_path == "tunnel-class")
    {
        tunnel_class = value;
    }
    if(value_path == "tunnel-is-forward-class")
    {
        tunnel_is_forward_class = value;
    }
    if(value_path == "tunnle-endpoint-id")
    {
        tunnle_endpoint_id = value;
    }
    if(value_path == "weight-of-path")
    {
        weight_of_path = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::SpdIpencap()
    :
    ip_encap_hdr_count{YType::uint8, "ip-encap-hdr-count"},
    ip_encap_locks{YType::uint32, "ip-encap-locks"},
    ip_encap_parent{YType::uint32, "ip-encap-parent"},
    ip_encap_parent_type{YType::uint32, "ip-encap-parent-type"},
    ip_encap_payload_af{YType::uint32, "ip-encap-payload-af"},
    ip_encap_payload_mtu{YType::uint16, "ip-encap-payload-mtu"},
    ip_encap_transport_af{YType::uint32, "ip-encap-transport-af"},
    ip_encap_transport_tbl{YType::uint32, "ip-encap-transport-tbl"},
    ipe_transport_vrf_name{YType::str, "ipe-transport-vrf-name"}
{
    yang_name = "spd-ipencap"; yang_parent_name = "more-detail-about-path";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::~SpdIpencap()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::has_data() const
{
    for (std::size_t index=0; index<ip_encap_hdr.size(); index++)
    {
        if(ip_encap_hdr[index]->has_data())
            return true;
    }
    return ip_encap_hdr_count.is_set
	|| ip_encap_locks.is_set
	|| ip_encap_parent.is_set
	|| ip_encap_parent_type.is_set
	|| ip_encap_payload_af.is_set
	|| ip_encap_payload_mtu.is_set
	|| ip_encap_transport_af.is_set
	|| ip_encap_transport_tbl.is_set
	|| ipe_transport_vrf_name.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::has_operation() const
{
    for (std::size_t index=0; index<ip_encap_hdr.size(); index++)
    {
        if(ip_encap_hdr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ip_encap_hdr_count.operation)
	|| is_set(ip_encap_locks.operation)
	|| is_set(ip_encap_parent.operation)
	|| is_set(ip_encap_parent_type.operation)
	|| is_set(ip_encap_payload_af.operation)
	|| is_set(ip_encap_payload_mtu.operation)
	|| is_set(ip_encap_transport_af.operation)
	|| is_set(ip_encap_transport_tbl.operation)
	|| is_set(ipe_transport_vrf_name.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spd-ipencap";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpdIpencap' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_encap_hdr_count.is_set || is_set(ip_encap_hdr_count.operation)) leaf_name_data.push_back(ip_encap_hdr_count.get_name_leafdata());
    if (ip_encap_locks.is_set || is_set(ip_encap_locks.operation)) leaf_name_data.push_back(ip_encap_locks.get_name_leafdata());
    if (ip_encap_parent.is_set || is_set(ip_encap_parent.operation)) leaf_name_data.push_back(ip_encap_parent.get_name_leafdata());
    if (ip_encap_parent_type.is_set || is_set(ip_encap_parent_type.operation)) leaf_name_data.push_back(ip_encap_parent_type.get_name_leafdata());
    if (ip_encap_payload_af.is_set || is_set(ip_encap_payload_af.operation)) leaf_name_data.push_back(ip_encap_payload_af.get_name_leafdata());
    if (ip_encap_payload_mtu.is_set || is_set(ip_encap_payload_mtu.operation)) leaf_name_data.push_back(ip_encap_payload_mtu.get_name_leafdata());
    if (ip_encap_transport_af.is_set || is_set(ip_encap_transport_af.operation)) leaf_name_data.push_back(ip_encap_transport_af.get_name_leafdata());
    if (ip_encap_transport_tbl.is_set || is_set(ip_encap_transport_tbl.operation)) leaf_name_data.push_back(ip_encap_transport_tbl.get_name_leafdata());
    if (ipe_transport_vrf_name.is_set || is_set(ipe_transport_vrf_name.operation)) leaf_name_data.push_back(ipe_transport_vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-encap-hdr")
    {
        for(auto const & c : ip_encap_hdr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr>();
        c->parent = this;
        ip_encap_hdr.push_back(std::move(c));
        children[segment_path] = ip_encap_hdr.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::get_children()
{
    for (auto const & c : ip_encap_hdr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-encap-hdr-count")
    {
        ip_encap_hdr_count = value;
    }
    if(value_path == "ip-encap-locks")
    {
        ip_encap_locks = value;
    }
    if(value_path == "ip-encap-parent")
    {
        ip_encap_parent = value;
    }
    if(value_path == "ip-encap-parent-type")
    {
        ip_encap_parent_type = value;
    }
    if(value_path == "ip-encap-payload-af")
    {
        ip_encap_payload_af = value;
    }
    if(value_path == "ip-encap-payload-mtu")
    {
        ip_encap_payload_mtu = value;
    }
    if(value_path == "ip-encap-transport-af")
    {
        ip_encap_transport_af = value;
    }
    if(value_path == "ip-encap-transport-tbl")
    {
        ip_encap_transport_tbl = value;
    }
    if(value_path == "ipe-transport-vrf-name")
    {
        ipe_transport_vrf_name = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::IpEncapHdr()
    :
    ip_encap_hdr_dyn{YType::uint32, "ip-encap-hdr-dyn"},
    ip_encap_hdr_type{YType::enumeration, "ip-encap-hdr-type"},
    ip_encap_hdrp{YType::str, "ip-encap-hdrp"}
{
    yang_name = "ip-encap-hdr"; yang_parent_name = "spd-ipencap";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::~IpEncapHdr()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::has_data() const
{
    return ip_encap_hdr_dyn.is_set
	|| ip_encap_hdr_type.is_set
	|| ip_encap_hdrp.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_encap_hdr_dyn.operation)
	|| is_set(ip_encap_hdr_type.operation)
	|| is_set(ip_encap_hdrp.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-encap-hdr";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpEncapHdr' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_encap_hdr_dyn.is_set || is_set(ip_encap_hdr_dyn.operation)) leaf_name_data.push_back(ip_encap_hdr_dyn.get_name_leafdata());
    if (ip_encap_hdr_type.is_set || is_set(ip_encap_hdr_type.operation)) leaf_name_data.push_back(ip_encap_hdr_type.get_name_leafdata());
    if (ip_encap_hdrp.is_set || is_set(ip_encap_hdrp.operation)) leaf_name_data.push_back(ip_encap_hdrp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-encap-hdr-dyn")
    {
        ip_encap_hdr_dyn = value;
    }
    if(value_path == "ip-encap-hdr-type")
    {
        ip_encap_hdr_type = value;
    }
    if(value_path == "ip-encap-hdrp")
    {
        ip_encap_hdrp = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::MplsInformationForPath()
    :
    local_lable{YType::uint32, "local-lable"},
    number_of_igp_paths{YType::uint32, "number-of-igp-paths"},
    recursive_fwd_chain{YType::boolean, "recursive-fwd-chain"},
    recursive_out_label_valid{YType::boolean, "recursive-out-label-valid"},
    recursive_out_lable{YType::uint32, "recursive-out-lable"},
    remote_backup{YType::boolean, "remote-backup"}
{
    yang_name = "mpls-information-for-path"; yang_parent_name = "fib-sh-tbl-path";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::~MplsInformationForPath()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::has_data() const
{
    for (std::size_t index=0; index<igp_label_stack_array.size(); index++)
    {
        if(igp_label_stack_array[index]->has_data())
            return true;
    }
    return local_lable.is_set
	|| number_of_igp_paths.is_set
	|| recursive_fwd_chain.is_set
	|| recursive_out_label_valid.is_set
	|| recursive_out_lable.is_set
	|| remote_backup.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::has_operation() const
{
    for (std::size_t index=0; index<igp_label_stack_array.size(); index++)
    {
        if(igp_label_stack_array[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(local_lable.operation)
	|| is_set(number_of_igp_paths.operation)
	|| is_set(recursive_fwd_chain.operation)
	|| is_set(recursive_out_label_valid.operation)
	|| is_set(recursive_out_lable.operation)
	|| is_set(remote_backup.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-information-for-path";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsInformationForPath' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_lable.is_set || is_set(local_lable.operation)) leaf_name_data.push_back(local_lable.get_name_leafdata());
    if (number_of_igp_paths.is_set || is_set(number_of_igp_paths.operation)) leaf_name_data.push_back(number_of_igp_paths.get_name_leafdata());
    if (recursive_fwd_chain.is_set || is_set(recursive_fwd_chain.operation)) leaf_name_data.push_back(recursive_fwd_chain.get_name_leafdata());
    if (recursive_out_label_valid.is_set || is_set(recursive_out_label_valid.operation)) leaf_name_data.push_back(recursive_out_label_valid.get_name_leafdata());
    if (recursive_out_lable.is_set || is_set(recursive_out_lable.operation)) leaf_name_data.push_back(recursive_out_lable.get_name_leafdata());
    if (remote_backup.is_set || is_set(remote_backup.operation)) leaf_name_data.push_back(remote_backup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "igp-label-stack-array")
    {
        for(auto const & c : igp_label_stack_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray>();
        c->parent = this;
        igp_label_stack_array.push_back(std::move(c));
        children[segment_path] = igp_label_stack_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::get_children()
{
    for (auto const & c : igp_label_stack_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-lable")
    {
        local_lable = value;
    }
    if(value_path == "number-of-igp-paths")
    {
        number_of_igp_paths = value;
    }
    if(value_path == "recursive-fwd-chain")
    {
        recursive_fwd_chain = value;
    }
    if(value_path == "recursive-out-label-valid")
    {
        recursive_out_label_valid = value;
    }
    if(value_path == "recursive-out-lable")
    {
        recursive_out_lable = value;
    }
    if(value_path == "remote-backup")
    {
        remote_backup = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::IgpLabelStackArray()
    :
    lstack{YType::uint32, "lstack"},
    nh_address{YType::str, "nh-address"},
    number_of_labels{YType::uint32, "number-of-labels"},
    out_interface{YType::str, "out-interface"}
{
    yang_name = "igp-label-stack-array"; yang_parent_name = "mpls-information-for-path";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::~IgpLabelStackArray()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::has_data() const
{
    for (auto const & leaf : lstack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return nh_address.is_set
	|| number_of_labels.is_set
	|| out_interface.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::has_operation() const
{
    for (auto const & leaf : lstack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(lstack.operation)
	|| is_set(nh_address.operation)
	|| is_set(number_of_labels.operation)
	|| is_set(out_interface.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-label-stack-array";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgpLabelStackArray' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nh_address.is_set || is_set(nh_address.operation)) leaf_name_data.push_back(nh_address.get_name_leafdata());
    if (number_of_labels.is_set || is_set(number_of_labels.operation)) leaf_name_data.push_back(number_of_labels.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.operation)) leaf_name_data.push_back(out_interface.get_name_leafdata());

    auto lstack_name_datas = lstack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lstack_name_datas.begin(), lstack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lstack")
    {
        lstack.append(value);
    }
    if(value_path == "nh-address")
    {
        nh_address = value;
    }
    if(value_path == "number-of-labels")
    {
        number_of_labels = value;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Information()
    :
    route_is_sripv6_flag{YType::boolean, "route-is-sripv6-flag"},
    sripv6_stats_valid_flag{YType::boolean, "sripv6-stats-valid-flag"},
    srv6_pfx_resolved_via_policy_label{YType::boolean, "srv6-pfx-resolved-via-policy-label"}
    	,
    srv6_statistics(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics>())
{
    srv6_statistics->parent = this;
    children["srv6-statistics"] = srv6_statistics;

    yang_name = "srv6-information"; yang_parent_name = "ip-prefix-detail";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::~Srv6Information()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::has_data() const
{
    return route_is_sripv6_flag.is_set
	|| sripv6_stats_valid_flag.is_set
	|| srv6_pfx_resolved_via_policy_label.is_set
	|| (srv6_statistics !=  nullptr && srv6_statistics->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::has_operation() const
{
    return is_set(operation)
	|| is_set(route_is_sripv6_flag.operation)
	|| is_set(sripv6_stats_valid_flag.operation)
	|| is_set(srv6_pfx_resolved_via_policy_label.operation)
	|| (srv6_statistics !=  nullptr && srv6_statistics->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srv6-information";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Srv6Information' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_is_sripv6_flag.is_set || is_set(route_is_sripv6_flag.operation)) leaf_name_data.push_back(route_is_sripv6_flag.get_name_leafdata());
    if (sripv6_stats_valid_flag.is_set || is_set(sripv6_stats_valid_flag.operation)) leaf_name_data.push_back(sripv6_stats_valid_flag.get_name_leafdata());
    if (srv6_pfx_resolved_via_policy_label.is_set || is_set(srv6_pfx_resolved_via_policy_label.operation)) leaf_name_data.push_back(srv6_pfx_resolved_via_policy_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "srv6-statistics")
    {
        if(srv6_statistics != nullptr)
        {
            children["srv6-statistics"] = srv6_statistics;
        }
        else
        {
            srv6_statistics = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics>();
            srv6_statistics->parent = this;
            children["srv6-statistics"] = srv6_statistics;
        }
        return children.at("srv6-statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::get_children()
{
    if(children.find("srv6-statistics") == children.end())
    {
        if(srv6_statistics != nullptr)
        {
            children["srv6-statistics"] = srv6_statistics;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-is-sripv6-flag")
    {
        route_is_sripv6_flag = value;
    }
    if(value_path == "sripv6-stats-valid-flag")
    {
        sripv6_stats_valid_flag = value;
    }
    if(value_path == "srv6-pfx-resolved-via-policy-label")
    {
        srv6_pfx_resolved_via_policy_label = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics::Srv6Statistics()
    :
    srv6_packets_dropped{YType::uint64, "srv6-packets-dropped"},
    srv6_packets_forwarded{YType::uint64, "srv6-packets-forwarded"}
{
    yang_name = "srv6-statistics"; yang_parent_name = "srv6-information";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics::~Srv6Statistics()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics::has_data() const
{
    return srv6_packets_dropped.is_set
	|| srv6_packets_forwarded.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(srv6_packets_dropped.operation)
	|| is_set(srv6_packets_forwarded.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srv6-statistics";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Srv6Statistics' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srv6_packets_dropped.is_set || is_set(srv6_packets_dropped.operation)) leaf_name_data.push_back(srv6_packets_dropped.get_name_leafdata());
    if (srv6_packets_forwarded.is_set || is_set(srv6_packets_forwarded.operation)) leaf_name_data.push_back(srv6_packets_forwarded.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::Srv6Information::Srv6Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srv6-packets-dropped")
    {
        srv6_packets_dropped = value;
    }
    if(value_path == "srv6-packets-forwarded")
    {
        srv6_packets_forwarded = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::ExtensionObject()
    :
    type{YType::enumeration, "type"}
    	,
    sfecd_le(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe>())
{
    sfecd_le->parent = this;
    children["sfecd-le"] = sfecd_le;

    yang_name = "extension-object"; yang_parent_name = "ip-prefix-detail";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::~ExtensionObject()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::has_data() const
{
    return type.is_set
	|| (sfecd_le !=  nullptr && sfecd_le->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (sfecd_le !=  nullptr && sfecd_le->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extension-object";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtensionObject' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sfecd-le")
    {
        if(sfecd_le != nullptr)
        {
            children["sfecd-le"] = sfecd_le;
        }
        else
        {
            sfecd_le = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe>();
            sfecd_le->parent = this;
            children["sfecd-le"] = sfecd_le;
        }
        return children.at("sfecd-le");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::get_children()
{
    if(children.find("sfecd-le") == children.end())
    {
        if(sfecd_le != nullptr)
        {
            children["sfecd-le"] = sfecd_le;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe::SfecdLe()
    :
    context_label{YType::uint32, "context-label"},
    context_label_flag{YType::boolean, "context-label-flag"}
{
    yang_name = "sfecd-le"; yang_parent_name = "extension-object";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe::~SfecdLe()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe::has_data() const
{
    return context_label.is_set
	|| context_label_flag.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe::has_operation() const
{
    return is_set(operation)
	|| is_set(context_label.operation)
	|| is_set(context_label_flag.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfecd-le";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SfecdLe' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_label.is_set || is_set(context_label.operation)) leaf_name_data.push_back(context_label.get_name_leafdata());
    if (context_label_flag.is_set || is_set(context_label_flag.operation)) leaf_name_data.push_back(context_label_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixDetails::IpPrefixDetail::ExtensionObject::SfecdLe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "context-label")
    {
        context_label = value;
    }
    if(value_path == "context-label-flag")
    {
        context_label_flag = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::Summary()
    :
    cef_route_drops{YType::uint32, "cef-route-drops"},
    cef_version_mismatch_route_drops{YType::uint64, "cef-version-mismatch-route-drops"},
    cefl_bl_recycled_routes{YType::uint32, "cefl-bl-recycled-routes"},
    delete_cache_num_entries{YType::uint32, "delete-cache-num-entries"},
    existing_leaves_revisions{YType::uint32, "existing-leaves-revisions"},
    extended_prefixes{YType::uint32, "extended-prefixes"},
    fib_default_prefix{YType::uint32, "fib-default-prefix"},
    fib_default_prefix_mask_length{YType::uint32, "fib-default-prefix-mask-length"},
    forwarding_elements{YType::uint32, "forwarding-elements"},
    imposition_prefixes{YType::uint32, "imposition-prefixes"},
    incomplete_next_hops{YType::uint32, "incomplete-next-hops"},
    ldi_backwalks{YType::uint32, "ldi-backwalks"},
    leaves_used_bytes{YType::uint32, "leaves-used-bytes"},
    lisp_eid_prefixes{YType::uint32, "lisp-eid-prefixes"},
    lisp_eid_valid_prefixes{YType::uint32, "lisp-eid-valid-prefixes"},
    lisp_rloc_objects{YType::uint32, "lisp-rloc-objects"},
    load_balancing{YType::enumeration, "load-balancing"},
    load_sharing_elements{YType::uint32, "load-sharing-elements"},
    load_sharing_references{YType::uint64, "load-sharing-references"},
    max_resolution_timer{YType::uint32, "max-resolution-timer"},
    new_unresolve_entries{YType::uint32, "new-unresolve-entries"},
    next_hops{YType::uint32, "next-hops"},
    old_unresolve_entries{YType::uint32, "old-unresolve-entries"},
    prefix{YType::str, "prefix"},
    prefix_in_place_modifications{YType::uint32, "prefix-in-place-modifications"},
    reresolve_entries{YType::uint32, "reresolve-entries"},
    resolution_timer{YType::uint32, "resolution-timer"},
    routes{YType::uint32, "routes"},
    slow_process_timer{YType::uint32, "slow-process-timer"},
    ss_drop_pl_count{YType::uint32, "ss-drop-pl-count"},
    ss_prot_route_count{YType::uint32, "ss-prot-route-count"},
    ss_tbl_id{YType::uint32, "ss-tbl-id"},
    ss_tbl_id_ptr{YType::uint32, "ss-tbl-id-ptr"},
    ss_vr_id{YType::uint32, "ss-vr-id"},
    ss_vrf_id{YType::uint32, "ss-vrf-id"},
    ss_vxlan_ltep_ifh{YType::str, "ss-vxlan-ltep-ifh"},
    stale_prefix_deletes{YType::uint32, "stale-prefix-deletes"},
    total_load_share_element_bytes{YType::uint32, "total-load-share-element-bytes"},
    unresolve_entries{YType::uint32, "unresolve-entries"}
    	,
    cross_shared_load_sharing_element(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement>())
	,exclusive_load_sharing_element(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement>())
	,label_shared_load_sharing_element(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement>())
	,shared_load_sharing_element(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement>())
{
    cross_shared_load_sharing_element->parent = this;
    children["cross-shared-load-sharing-element"] = cross_shared_load_sharing_element;

    exclusive_load_sharing_element->parent = this;
    children["exclusive-load-sharing-element"] = exclusive_load_sharing_element;

    label_shared_load_sharing_element->parent = this;
    children["label-shared-load-sharing-element"] = label_shared_load_sharing_element;

    shared_load_sharing_element->parent = this;
    children["shared-load-sharing-element"] = shared_load_sharing_element;

    yang_name = "summary"; yang_parent_name = "vrf";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::~Summary()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::has_data() const
{
    return cef_route_drops.is_set
	|| cef_version_mismatch_route_drops.is_set
	|| cefl_bl_recycled_routes.is_set
	|| delete_cache_num_entries.is_set
	|| existing_leaves_revisions.is_set
	|| extended_prefixes.is_set
	|| fib_default_prefix.is_set
	|| fib_default_prefix_mask_length.is_set
	|| forwarding_elements.is_set
	|| imposition_prefixes.is_set
	|| incomplete_next_hops.is_set
	|| ldi_backwalks.is_set
	|| leaves_used_bytes.is_set
	|| lisp_eid_prefixes.is_set
	|| lisp_eid_valid_prefixes.is_set
	|| lisp_rloc_objects.is_set
	|| load_balancing.is_set
	|| load_sharing_elements.is_set
	|| load_sharing_references.is_set
	|| max_resolution_timer.is_set
	|| new_unresolve_entries.is_set
	|| next_hops.is_set
	|| old_unresolve_entries.is_set
	|| prefix.is_set
	|| prefix_in_place_modifications.is_set
	|| reresolve_entries.is_set
	|| resolution_timer.is_set
	|| routes.is_set
	|| slow_process_timer.is_set
	|| ss_drop_pl_count.is_set
	|| ss_prot_route_count.is_set
	|| ss_tbl_id.is_set
	|| ss_tbl_id_ptr.is_set
	|| ss_vr_id.is_set
	|| ss_vrf_id.is_set
	|| ss_vxlan_ltep_ifh.is_set
	|| stale_prefix_deletes.is_set
	|| total_load_share_element_bytes.is_set
	|| unresolve_entries.is_set
	|| (cross_shared_load_sharing_element !=  nullptr && cross_shared_load_sharing_element->has_data())
	|| (exclusive_load_sharing_element !=  nullptr && exclusive_load_sharing_element->has_data())
	|| (label_shared_load_sharing_element !=  nullptr && label_shared_load_sharing_element->has_data())
	|| (shared_load_sharing_element !=  nullptr && shared_load_sharing_element->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(cef_route_drops.operation)
	|| is_set(cef_version_mismatch_route_drops.operation)
	|| is_set(cefl_bl_recycled_routes.operation)
	|| is_set(delete_cache_num_entries.operation)
	|| is_set(existing_leaves_revisions.operation)
	|| is_set(extended_prefixes.operation)
	|| is_set(fib_default_prefix.operation)
	|| is_set(fib_default_prefix_mask_length.operation)
	|| is_set(forwarding_elements.operation)
	|| is_set(imposition_prefixes.operation)
	|| is_set(incomplete_next_hops.operation)
	|| is_set(ldi_backwalks.operation)
	|| is_set(leaves_used_bytes.operation)
	|| is_set(lisp_eid_prefixes.operation)
	|| is_set(lisp_eid_valid_prefixes.operation)
	|| is_set(lisp_rloc_objects.operation)
	|| is_set(load_balancing.operation)
	|| is_set(load_sharing_elements.operation)
	|| is_set(load_sharing_references.operation)
	|| is_set(max_resolution_timer.operation)
	|| is_set(new_unresolve_entries.operation)
	|| is_set(next_hops.operation)
	|| is_set(old_unresolve_entries.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_in_place_modifications.operation)
	|| is_set(reresolve_entries.operation)
	|| is_set(resolution_timer.operation)
	|| is_set(routes.operation)
	|| is_set(slow_process_timer.operation)
	|| is_set(ss_drop_pl_count.operation)
	|| is_set(ss_prot_route_count.operation)
	|| is_set(ss_tbl_id.operation)
	|| is_set(ss_tbl_id_ptr.operation)
	|| is_set(ss_vr_id.operation)
	|| is_set(ss_vrf_id.operation)
	|| is_set(ss_vxlan_ltep_ifh.operation)
	|| is_set(stale_prefix_deletes.operation)
	|| is_set(total_load_share_element_bytes.operation)
	|| is_set(unresolve_entries.operation)
	|| (cross_shared_load_sharing_element !=  nullptr && cross_shared_load_sharing_element->has_operation())
	|| (exclusive_load_sharing_element !=  nullptr && exclusive_load_sharing_element->has_operation())
	|| (label_shared_load_sharing_element !=  nullptr && label_shared_load_sharing_element->has_operation())
	|| (shared_load_sharing_element !=  nullptr && shared_load_sharing_element->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cef_route_drops.is_set || is_set(cef_route_drops.operation)) leaf_name_data.push_back(cef_route_drops.get_name_leafdata());
    if (cef_version_mismatch_route_drops.is_set || is_set(cef_version_mismatch_route_drops.operation)) leaf_name_data.push_back(cef_version_mismatch_route_drops.get_name_leafdata());
    if (cefl_bl_recycled_routes.is_set || is_set(cefl_bl_recycled_routes.operation)) leaf_name_data.push_back(cefl_bl_recycled_routes.get_name_leafdata());
    if (delete_cache_num_entries.is_set || is_set(delete_cache_num_entries.operation)) leaf_name_data.push_back(delete_cache_num_entries.get_name_leafdata());
    if (existing_leaves_revisions.is_set || is_set(existing_leaves_revisions.operation)) leaf_name_data.push_back(existing_leaves_revisions.get_name_leafdata());
    if (extended_prefixes.is_set || is_set(extended_prefixes.operation)) leaf_name_data.push_back(extended_prefixes.get_name_leafdata());
    if (fib_default_prefix.is_set || is_set(fib_default_prefix.operation)) leaf_name_data.push_back(fib_default_prefix.get_name_leafdata());
    if (fib_default_prefix_mask_length.is_set || is_set(fib_default_prefix_mask_length.operation)) leaf_name_data.push_back(fib_default_prefix_mask_length.get_name_leafdata());
    if (forwarding_elements.is_set || is_set(forwarding_elements.operation)) leaf_name_data.push_back(forwarding_elements.get_name_leafdata());
    if (imposition_prefixes.is_set || is_set(imposition_prefixes.operation)) leaf_name_data.push_back(imposition_prefixes.get_name_leafdata());
    if (incomplete_next_hops.is_set || is_set(incomplete_next_hops.operation)) leaf_name_data.push_back(incomplete_next_hops.get_name_leafdata());
    if (ldi_backwalks.is_set || is_set(ldi_backwalks.operation)) leaf_name_data.push_back(ldi_backwalks.get_name_leafdata());
    if (leaves_used_bytes.is_set || is_set(leaves_used_bytes.operation)) leaf_name_data.push_back(leaves_used_bytes.get_name_leafdata());
    if (lisp_eid_prefixes.is_set || is_set(lisp_eid_prefixes.operation)) leaf_name_data.push_back(lisp_eid_prefixes.get_name_leafdata());
    if (lisp_eid_valid_prefixes.is_set || is_set(lisp_eid_valid_prefixes.operation)) leaf_name_data.push_back(lisp_eid_valid_prefixes.get_name_leafdata());
    if (lisp_rloc_objects.is_set || is_set(lisp_rloc_objects.operation)) leaf_name_data.push_back(lisp_rloc_objects.get_name_leafdata());
    if (load_balancing.is_set || is_set(load_balancing.operation)) leaf_name_data.push_back(load_balancing.get_name_leafdata());
    if (load_sharing_elements.is_set || is_set(load_sharing_elements.operation)) leaf_name_data.push_back(load_sharing_elements.get_name_leafdata());
    if (load_sharing_references.is_set || is_set(load_sharing_references.operation)) leaf_name_data.push_back(load_sharing_references.get_name_leafdata());
    if (max_resolution_timer.is_set || is_set(max_resolution_timer.operation)) leaf_name_data.push_back(max_resolution_timer.get_name_leafdata());
    if (new_unresolve_entries.is_set || is_set(new_unresolve_entries.operation)) leaf_name_data.push_back(new_unresolve_entries.get_name_leafdata());
    if (next_hops.is_set || is_set(next_hops.operation)) leaf_name_data.push_back(next_hops.get_name_leafdata());
    if (old_unresolve_entries.is_set || is_set(old_unresolve_entries.operation)) leaf_name_data.push_back(old_unresolve_entries.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_in_place_modifications.is_set || is_set(prefix_in_place_modifications.operation)) leaf_name_data.push_back(prefix_in_place_modifications.get_name_leafdata());
    if (reresolve_entries.is_set || is_set(reresolve_entries.operation)) leaf_name_data.push_back(reresolve_entries.get_name_leafdata());
    if (resolution_timer.is_set || is_set(resolution_timer.operation)) leaf_name_data.push_back(resolution_timer.get_name_leafdata());
    if (routes.is_set || is_set(routes.operation)) leaf_name_data.push_back(routes.get_name_leafdata());
    if (slow_process_timer.is_set || is_set(slow_process_timer.operation)) leaf_name_data.push_back(slow_process_timer.get_name_leafdata());
    if (ss_drop_pl_count.is_set || is_set(ss_drop_pl_count.operation)) leaf_name_data.push_back(ss_drop_pl_count.get_name_leafdata());
    if (ss_prot_route_count.is_set || is_set(ss_prot_route_count.operation)) leaf_name_data.push_back(ss_prot_route_count.get_name_leafdata());
    if (ss_tbl_id.is_set || is_set(ss_tbl_id.operation)) leaf_name_data.push_back(ss_tbl_id.get_name_leafdata());
    if (ss_tbl_id_ptr.is_set || is_set(ss_tbl_id_ptr.operation)) leaf_name_data.push_back(ss_tbl_id_ptr.get_name_leafdata());
    if (ss_vr_id.is_set || is_set(ss_vr_id.operation)) leaf_name_data.push_back(ss_vr_id.get_name_leafdata());
    if (ss_vrf_id.is_set || is_set(ss_vrf_id.operation)) leaf_name_data.push_back(ss_vrf_id.get_name_leafdata());
    if (ss_vxlan_ltep_ifh.is_set || is_set(ss_vxlan_ltep_ifh.operation)) leaf_name_data.push_back(ss_vxlan_ltep_ifh.get_name_leafdata());
    if (stale_prefix_deletes.is_set || is_set(stale_prefix_deletes.operation)) leaf_name_data.push_back(stale_prefix_deletes.get_name_leafdata());
    if (total_load_share_element_bytes.is_set || is_set(total_load_share_element_bytes.operation)) leaf_name_data.push_back(total_load_share_element_bytes.get_name_leafdata());
    if (unresolve_entries.is_set || is_set(unresolve_entries.operation)) leaf_name_data.push_back(unresolve_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cross-shared-load-sharing-element")
    {
        if(cross_shared_load_sharing_element != nullptr)
        {
            children["cross-shared-load-sharing-element"] = cross_shared_load_sharing_element;
        }
        else
        {
            cross_shared_load_sharing_element = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement>();
            cross_shared_load_sharing_element->parent = this;
            children["cross-shared-load-sharing-element"] = cross_shared_load_sharing_element;
        }
        return children.at("cross-shared-load-sharing-element");
    }

    if(child_yang_name == "exclusive-load-sharing-element")
    {
        if(exclusive_load_sharing_element != nullptr)
        {
            children["exclusive-load-sharing-element"] = exclusive_load_sharing_element;
        }
        else
        {
            exclusive_load_sharing_element = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement>();
            exclusive_load_sharing_element->parent = this;
            children["exclusive-load-sharing-element"] = exclusive_load_sharing_element;
        }
        return children.at("exclusive-load-sharing-element");
    }

    if(child_yang_name == "label-shared-load-sharing-element")
    {
        if(label_shared_load_sharing_element != nullptr)
        {
            children["label-shared-load-sharing-element"] = label_shared_load_sharing_element;
        }
        else
        {
            label_shared_load_sharing_element = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement>();
            label_shared_load_sharing_element->parent = this;
            children["label-shared-load-sharing-element"] = label_shared_load_sharing_element;
        }
        return children.at("label-shared-load-sharing-element");
    }

    if(child_yang_name == "shared-load-sharing-element")
    {
        if(shared_load_sharing_element != nullptr)
        {
            children["shared-load-sharing-element"] = shared_load_sharing_element;
        }
        else
        {
            shared_load_sharing_element = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement>();
            shared_load_sharing_element->parent = this;
            children["shared-load-sharing-element"] = shared_load_sharing_element;
        }
        return children.at("shared-load-sharing-element");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::get_children()
{
    if(children.find("cross-shared-load-sharing-element") == children.end())
    {
        if(cross_shared_load_sharing_element != nullptr)
        {
            children["cross-shared-load-sharing-element"] = cross_shared_load_sharing_element;
        }
    }

    if(children.find("exclusive-load-sharing-element") == children.end())
    {
        if(exclusive_load_sharing_element != nullptr)
        {
            children["exclusive-load-sharing-element"] = exclusive_load_sharing_element;
        }
    }

    if(children.find("label-shared-load-sharing-element") == children.end())
    {
        if(label_shared_load_sharing_element != nullptr)
        {
            children["label-shared-load-sharing-element"] = label_shared_load_sharing_element;
        }
    }

    if(children.find("shared-load-sharing-element") == children.end())
    {
        if(shared_load_sharing_element != nullptr)
        {
            children["shared-load-sharing-element"] = shared_load_sharing_element;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cef-route-drops")
    {
        cef_route_drops = value;
    }
    if(value_path == "cef-version-mismatch-route-drops")
    {
        cef_version_mismatch_route_drops = value;
    }
    if(value_path == "cefl-bl-recycled-routes")
    {
        cefl_bl_recycled_routes = value;
    }
    if(value_path == "delete-cache-num-entries")
    {
        delete_cache_num_entries = value;
    }
    if(value_path == "existing-leaves-revisions")
    {
        existing_leaves_revisions = value;
    }
    if(value_path == "extended-prefixes")
    {
        extended_prefixes = value;
    }
    if(value_path == "fib-default-prefix")
    {
        fib_default_prefix = value;
    }
    if(value_path == "fib-default-prefix-mask-length")
    {
        fib_default_prefix_mask_length = value;
    }
    if(value_path == "forwarding-elements")
    {
        forwarding_elements = value;
    }
    if(value_path == "imposition-prefixes")
    {
        imposition_prefixes = value;
    }
    if(value_path == "incomplete-next-hops")
    {
        incomplete_next_hops = value;
    }
    if(value_path == "ldi-backwalks")
    {
        ldi_backwalks = value;
    }
    if(value_path == "leaves-used-bytes")
    {
        leaves_used_bytes = value;
    }
    if(value_path == "lisp-eid-prefixes")
    {
        lisp_eid_prefixes = value;
    }
    if(value_path == "lisp-eid-valid-prefixes")
    {
        lisp_eid_valid_prefixes = value;
    }
    if(value_path == "lisp-rloc-objects")
    {
        lisp_rloc_objects = value;
    }
    if(value_path == "load-balancing")
    {
        load_balancing = value;
    }
    if(value_path == "load-sharing-elements")
    {
        load_sharing_elements = value;
    }
    if(value_path == "load-sharing-references")
    {
        load_sharing_references = value;
    }
    if(value_path == "max-resolution-timer")
    {
        max_resolution_timer = value;
    }
    if(value_path == "new-unresolve-entries")
    {
        new_unresolve_entries = value;
    }
    if(value_path == "next-hops")
    {
        next_hops = value;
    }
    if(value_path == "old-unresolve-entries")
    {
        old_unresolve_entries = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-in-place-modifications")
    {
        prefix_in_place_modifications = value;
    }
    if(value_path == "reresolve-entries")
    {
        reresolve_entries = value;
    }
    if(value_path == "resolution-timer")
    {
        resolution_timer = value;
    }
    if(value_path == "routes")
    {
        routes = value;
    }
    if(value_path == "slow-process-timer")
    {
        slow_process_timer = value;
    }
    if(value_path == "ss-drop-pl-count")
    {
        ss_drop_pl_count = value;
    }
    if(value_path == "ss-prot-route-count")
    {
        ss_prot_route_count = value;
    }
    if(value_path == "ss-tbl-id")
    {
        ss_tbl_id = value;
    }
    if(value_path == "ss-tbl-id-ptr")
    {
        ss_tbl_id_ptr = value;
    }
    if(value_path == "ss-vr-id")
    {
        ss_vr_id = value;
    }
    if(value_path == "ss-vrf-id")
    {
        ss_vrf_id = value;
    }
    if(value_path == "ss-vxlan-ltep-ifh")
    {
        ss_vxlan_ltep_ifh = value;
    }
    if(value_path == "stale-prefix-deletes")
    {
        stale_prefix_deletes = value;
    }
    if(value_path == "total-load-share-element-bytes")
    {
        total_load_share_element_bytes = value;
    }
    if(value_path == "unresolve-entries")
    {
        unresolve_entries = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement::ExclusiveLoadSharingElement()
    :
    platform_shared_load_info_elements{YType::uint32, "platform-shared-load-info-elements"},
    platform_shared_path_list_elements{YType::uint32, "platform-shared-path-list-elements"},
    recursive_load_info_elements{YType::uint32, "recursive-load-info-elements"},
    recursive_path_list_elements{YType::uint32, "recursive-path-list-elements"},
    retry_path_list_elements{YType::uint32, "retry-path-list-elements"},
    total_load_info_elements{YType::uint32, "total-load-info-elements"},
    total_load_sharing_element_bytes{YType::uint32, "total-load-sharing-element-bytes"},
    total_load_sharing_element_references{YType::uint64, "total-load-sharing-element-references"},
    total_path_list_elements{YType::uint32, "total-path-list-elements"}
{
    yang_name = "exclusive-load-sharing-element"; yang_parent_name = "summary";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement::~ExclusiveLoadSharingElement()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement::has_data() const
{
    return platform_shared_load_info_elements.is_set
	|| platform_shared_path_list_elements.is_set
	|| recursive_load_info_elements.is_set
	|| recursive_path_list_elements.is_set
	|| retry_path_list_elements.is_set
	|| total_load_info_elements.is_set
	|| total_load_sharing_element_bytes.is_set
	|| total_load_sharing_element_references.is_set
	|| total_path_list_elements.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement::has_operation() const
{
    return is_set(operation)
	|| is_set(platform_shared_load_info_elements.operation)
	|| is_set(platform_shared_path_list_elements.operation)
	|| is_set(recursive_load_info_elements.operation)
	|| is_set(recursive_path_list_elements.operation)
	|| is_set(retry_path_list_elements.operation)
	|| is_set(total_load_info_elements.operation)
	|| is_set(total_load_sharing_element_bytes.operation)
	|| is_set(total_load_sharing_element_references.operation)
	|| is_set(total_path_list_elements.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclusive-load-sharing-element";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExclusiveLoadSharingElement' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (platform_shared_load_info_elements.is_set || is_set(platform_shared_load_info_elements.operation)) leaf_name_data.push_back(platform_shared_load_info_elements.get_name_leafdata());
    if (platform_shared_path_list_elements.is_set || is_set(platform_shared_path_list_elements.operation)) leaf_name_data.push_back(platform_shared_path_list_elements.get_name_leafdata());
    if (recursive_load_info_elements.is_set || is_set(recursive_load_info_elements.operation)) leaf_name_data.push_back(recursive_load_info_elements.get_name_leafdata());
    if (recursive_path_list_elements.is_set || is_set(recursive_path_list_elements.operation)) leaf_name_data.push_back(recursive_path_list_elements.get_name_leafdata());
    if (retry_path_list_elements.is_set || is_set(retry_path_list_elements.operation)) leaf_name_data.push_back(retry_path_list_elements.get_name_leafdata());
    if (total_load_info_elements.is_set || is_set(total_load_info_elements.operation)) leaf_name_data.push_back(total_load_info_elements.get_name_leafdata());
    if (total_load_sharing_element_bytes.is_set || is_set(total_load_sharing_element_bytes.operation)) leaf_name_data.push_back(total_load_sharing_element_bytes.get_name_leafdata());
    if (total_load_sharing_element_references.is_set || is_set(total_load_sharing_element_references.operation)) leaf_name_data.push_back(total_load_sharing_element_references.get_name_leafdata());
    if (total_path_list_elements.is_set || is_set(total_path_list_elements.operation)) leaf_name_data.push_back(total_path_list_elements.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::ExclusiveLoadSharingElement::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "platform-shared-load-info-elements")
    {
        platform_shared_load_info_elements = value;
    }
    if(value_path == "platform-shared-path-list-elements")
    {
        platform_shared_path_list_elements = value;
    }
    if(value_path == "recursive-load-info-elements")
    {
        recursive_load_info_elements = value;
    }
    if(value_path == "recursive-path-list-elements")
    {
        recursive_path_list_elements = value;
    }
    if(value_path == "retry-path-list-elements")
    {
        retry_path_list_elements = value;
    }
    if(value_path == "total-load-info-elements")
    {
        total_load_info_elements = value;
    }
    if(value_path == "total-load-sharing-element-bytes")
    {
        total_load_sharing_element_bytes = value;
    }
    if(value_path == "total-load-sharing-element-references")
    {
        total_load_sharing_element_references = value;
    }
    if(value_path == "total-path-list-elements")
    {
        total_path_list_elements = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement::SharedLoadSharingElement()
    :
    platform_shared_load_info_elements{YType::uint32, "platform-shared-load-info-elements"},
    platform_shared_path_list_elements{YType::uint32, "platform-shared-path-list-elements"},
    recursive_load_info_elements{YType::uint32, "recursive-load-info-elements"},
    recursive_path_list_elements{YType::uint32, "recursive-path-list-elements"},
    retry_path_list_elements{YType::uint32, "retry-path-list-elements"},
    total_load_info_elements{YType::uint32, "total-load-info-elements"},
    total_load_sharing_element_bytes{YType::uint32, "total-load-sharing-element-bytes"},
    total_load_sharing_element_references{YType::uint64, "total-load-sharing-element-references"},
    total_path_list_elements{YType::uint32, "total-path-list-elements"}
{
    yang_name = "shared-load-sharing-element"; yang_parent_name = "summary";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement::~SharedLoadSharingElement()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement::has_data() const
{
    return platform_shared_load_info_elements.is_set
	|| platform_shared_path_list_elements.is_set
	|| recursive_load_info_elements.is_set
	|| recursive_path_list_elements.is_set
	|| retry_path_list_elements.is_set
	|| total_load_info_elements.is_set
	|| total_load_sharing_element_bytes.is_set
	|| total_load_sharing_element_references.is_set
	|| total_path_list_elements.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement::has_operation() const
{
    return is_set(operation)
	|| is_set(platform_shared_load_info_elements.operation)
	|| is_set(platform_shared_path_list_elements.operation)
	|| is_set(recursive_load_info_elements.operation)
	|| is_set(recursive_path_list_elements.operation)
	|| is_set(retry_path_list_elements.operation)
	|| is_set(total_load_info_elements.operation)
	|| is_set(total_load_sharing_element_bytes.operation)
	|| is_set(total_load_sharing_element_references.operation)
	|| is_set(total_path_list_elements.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-load-sharing-element";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SharedLoadSharingElement' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (platform_shared_load_info_elements.is_set || is_set(platform_shared_load_info_elements.operation)) leaf_name_data.push_back(platform_shared_load_info_elements.get_name_leafdata());
    if (platform_shared_path_list_elements.is_set || is_set(platform_shared_path_list_elements.operation)) leaf_name_data.push_back(platform_shared_path_list_elements.get_name_leafdata());
    if (recursive_load_info_elements.is_set || is_set(recursive_load_info_elements.operation)) leaf_name_data.push_back(recursive_load_info_elements.get_name_leafdata());
    if (recursive_path_list_elements.is_set || is_set(recursive_path_list_elements.operation)) leaf_name_data.push_back(recursive_path_list_elements.get_name_leafdata());
    if (retry_path_list_elements.is_set || is_set(retry_path_list_elements.operation)) leaf_name_data.push_back(retry_path_list_elements.get_name_leafdata());
    if (total_load_info_elements.is_set || is_set(total_load_info_elements.operation)) leaf_name_data.push_back(total_load_info_elements.get_name_leafdata());
    if (total_load_sharing_element_bytes.is_set || is_set(total_load_sharing_element_bytes.operation)) leaf_name_data.push_back(total_load_sharing_element_bytes.get_name_leafdata());
    if (total_load_sharing_element_references.is_set || is_set(total_load_sharing_element_references.operation)) leaf_name_data.push_back(total_load_sharing_element_references.get_name_leafdata());
    if (total_path_list_elements.is_set || is_set(total_path_list_elements.operation)) leaf_name_data.push_back(total_path_list_elements.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::SharedLoadSharingElement::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "platform-shared-load-info-elements")
    {
        platform_shared_load_info_elements = value;
    }
    if(value_path == "platform-shared-path-list-elements")
    {
        platform_shared_path_list_elements = value;
    }
    if(value_path == "recursive-load-info-elements")
    {
        recursive_load_info_elements = value;
    }
    if(value_path == "recursive-path-list-elements")
    {
        recursive_path_list_elements = value;
    }
    if(value_path == "retry-path-list-elements")
    {
        retry_path_list_elements = value;
    }
    if(value_path == "total-load-info-elements")
    {
        total_load_info_elements = value;
    }
    if(value_path == "total-load-sharing-element-bytes")
    {
        total_load_sharing_element_bytes = value;
    }
    if(value_path == "total-load-sharing-element-references")
    {
        total_load_sharing_element_references = value;
    }
    if(value_path == "total-path-list-elements")
    {
        total_path_list_elements = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement::CrossSharedLoadSharingElement()
    :
    platform_shared_load_info_elements{YType::uint32, "platform-shared-load-info-elements"},
    platform_shared_path_list_elements{YType::uint32, "platform-shared-path-list-elements"},
    recursive_load_info_elements{YType::uint32, "recursive-load-info-elements"},
    recursive_path_list_elements{YType::uint32, "recursive-path-list-elements"},
    retry_path_list_elements{YType::uint32, "retry-path-list-elements"},
    total_load_info_elements{YType::uint32, "total-load-info-elements"},
    total_load_sharing_element_bytes{YType::uint32, "total-load-sharing-element-bytes"},
    total_load_sharing_element_references{YType::uint64, "total-load-sharing-element-references"},
    total_path_list_elements{YType::uint32, "total-path-list-elements"}
{
    yang_name = "cross-shared-load-sharing-element"; yang_parent_name = "summary";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement::~CrossSharedLoadSharingElement()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement::has_data() const
{
    return platform_shared_load_info_elements.is_set
	|| platform_shared_path_list_elements.is_set
	|| recursive_load_info_elements.is_set
	|| recursive_path_list_elements.is_set
	|| retry_path_list_elements.is_set
	|| total_load_info_elements.is_set
	|| total_load_sharing_element_bytes.is_set
	|| total_load_sharing_element_references.is_set
	|| total_path_list_elements.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement::has_operation() const
{
    return is_set(operation)
	|| is_set(platform_shared_load_info_elements.operation)
	|| is_set(platform_shared_path_list_elements.operation)
	|| is_set(recursive_load_info_elements.operation)
	|| is_set(recursive_path_list_elements.operation)
	|| is_set(retry_path_list_elements.operation)
	|| is_set(total_load_info_elements.operation)
	|| is_set(total_load_sharing_element_bytes.operation)
	|| is_set(total_load_sharing_element_references.operation)
	|| is_set(total_path_list_elements.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cross-shared-load-sharing-element";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CrossSharedLoadSharingElement' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (platform_shared_load_info_elements.is_set || is_set(platform_shared_load_info_elements.operation)) leaf_name_data.push_back(platform_shared_load_info_elements.get_name_leafdata());
    if (platform_shared_path_list_elements.is_set || is_set(platform_shared_path_list_elements.operation)) leaf_name_data.push_back(platform_shared_path_list_elements.get_name_leafdata());
    if (recursive_load_info_elements.is_set || is_set(recursive_load_info_elements.operation)) leaf_name_data.push_back(recursive_load_info_elements.get_name_leafdata());
    if (recursive_path_list_elements.is_set || is_set(recursive_path_list_elements.operation)) leaf_name_data.push_back(recursive_path_list_elements.get_name_leafdata());
    if (retry_path_list_elements.is_set || is_set(retry_path_list_elements.operation)) leaf_name_data.push_back(retry_path_list_elements.get_name_leafdata());
    if (total_load_info_elements.is_set || is_set(total_load_info_elements.operation)) leaf_name_data.push_back(total_load_info_elements.get_name_leafdata());
    if (total_load_sharing_element_bytes.is_set || is_set(total_load_sharing_element_bytes.operation)) leaf_name_data.push_back(total_load_sharing_element_bytes.get_name_leafdata());
    if (total_load_sharing_element_references.is_set || is_set(total_load_sharing_element_references.operation)) leaf_name_data.push_back(total_load_sharing_element_references.get_name_leafdata());
    if (total_path_list_elements.is_set || is_set(total_path_list_elements.operation)) leaf_name_data.push_back(total_path_list_elements.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::CrossSharedLoadSharingElement::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "platform-shared-load-info-elements")
    {
        platform_shared_load_info_elements = value;
    }
    if(value_path == "platform-shared-path-list-elements")
    {
        platform_shared_path_list_elements = value;
    }
    if(value_path == "recursive-load-info-elements")
    {
        recursive_load_info_elements = value;
    }
    if(value_path == "recursive-path-list-elements")
    {
        recursive_path_list_elements = value;
    }
    if(value_path == "retry-path-list-elements")
    {
        retry_path_list_elements = value;
    }
    if(value_path == "total-load-info-elements")
    {
        total_load_info_elements = value;
    }
    if(value_path == "total-load-sharing-element-bytes")
    {
        total_load_sharing_element_bytes = value;
    }
    if(value_path == "total-load-sharing-element-references")
    {
        total_load_sharing_element_references = value;
    }
    if(value_path == "total-path-list-elements")
    {
        total_path_list_elements = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement::LabelSharedLoadSharingElement()
    :
    platform_shared_load_info_elements{YType::uint32, "platform-shared-load-info-elements"},
    platform_shared_path_list_elements{YType::uint32, "platform-shared-path-list-elements"},
    recursive_load_info_elements{YType::uint32, "recursive-load-info-elements"},
    recursive_path_list_elements{YType::uint32, "recursive-path-list-elements"},
    retry_path_list_elements{YType::uint32, "retry-path-list-elements"},
    total_load_info_elements{YType::uint32, "total-load-info-elements"},
    total_load_sharing_element_bytes{YType::uint32, "total-load-sharing-element-bytes"},
    total_load_sharing_element_references{YType::uint64, "total-load-sharing-element-references"},
    total_path_list_elements{YType::uint32, "total-path-list-elements"}
{
    yang_name = "label-shared-load-sharing-element"; yang_parent_name = "summary";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement::~LabelSharedLoadSharingElement()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement::has_data() const
{
    return platform_shared_load_info_elements.is_set
	|| platform_shared_path_list_elements.is_set
	|| recursive_load_info_elements.is_set
	|| recursive_path_list_elements.is_set
	|| retry_path_list_elements.is_set
	|| total_load_info_elements.is_set
	|| total_load_sharing_element_bytes.is_set
	|| total_load_sharing_element_references.is_set
	|| total_path_list_elements.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement::has_operation() const
{
    return is_set(operation)
	|| is_set(platform_shared_load_info_elements.operation)
	|| is_set(platform_shared_path_list_elements.operation)
	|| is_set(recursive_load_info_elements.operation)
	|| is_set(recursive_path_list_elements.operation)
	|| is_set(retry_path_list_elements.operation)
	|| is_set(total_load_info_elements.operation)
	|| is_set(total_load_sharing_element_bytes.operation)
	|| is_set(total_load_sharing_element_references.operation)
	|| is_set(total_path_list_elements.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-shared-load-sharing-element";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelSharedLoadSharingElement' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (platform_shared_load_info_elements.is_set || is_set(platform_shared_load_info_elements.operation)) leaf_name_data.push_back(platform_shared_load_info_elements.get_name_leafdata());
    if (platform_shared_path_list_elements.is_set || is_set(platform_shared_path_list_elements.operation)) leaf_name_data.push_back(platform_shared_path_list_elements.get_name_leafdata());
    if (recursive_load_info_elements.is_set || is_set(recursive_load_info_elements.operation)) leaf_name_data.push_back(recursive_load_info_elements.get_name_leafdata());
    if (recursive_path_list_elements.is_set || is_set(recursive_path_list_elements.operation)) leaf_name_data.push_back(recursive_path_list_elements.get_name_leafdata());
    if (retry_path_list_elements.is_set || is_set(retry_path_list_elements.operation)) leaf_name_data.push_back(retry_path_list_elements.get_name_leafdata());
    if (total_load_info_elements.is_set || is_set(total_load_info_elements.operation)) leaf_name_data.push_back(total_load_info_elements.get_name_leafdata());
    if (total_load_sharing_element_bytes.is_set || is_set(total_load_sharing_element_bytes.operation)) leaf_name_data.push_back(total_load_sharing_element_bytes.get_name_leafdata());
    if (total_load_sharing_element_references.is_set || is_set(total_load_sharing_element_references.operation)) leaf_name_data.push_back(total_load_sharing_element_references.get_name_leafdata());
    if (total_path_list_elements.is_set || is_set(total_path_list_elements.operation)) leaf_name_data.push_back(total_path_list_elements.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::Summary::LabelSharedLoadSharingElement::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "platform-shared-load-info-elements")
    {
        platform_shared_load_info_elements = value;
    }
    if(value_path == "platform-shared-path-list-elements")
    {
        platform_shared_path_list_elements = value;
    }
    if(value_path == "recursive-load-info-elements")
    {
        recursive_load_info_elements = value;
    }
    if(value_path == "recursive-path-list-elements")
    {
        recursive_path_list_elements = value;
    }
    if(value_path == "retry-path-list-elements")
    {
        retry_path_list_elements = value;
    }
    if(value_path == "total-load-info-elements")
    {
        total_load_info_elements = value;
    }
    if(value_path == "total-load-sharing-element-bytes")
    {
        total_load_sharing_element_bytes = value;
    }
    if(value_path == "total-load-sharing-element-references")
    {
        total_load_sharing_element_references = value;
    }
    if(value_path == "total-path-list-elements")
    {
        total_path_list_elements = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfos()
{
    yang_name = "interface-infos"; yang_parent_name = "vrf";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::~InterfaceInfos()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::has_data() const
{
    for (std::size_t index=0; index<interface_info.size(); index++)
    {
        if(interface_info[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::has_operation() const
{
    for (std::size_t index=0; index<interface_info.size(); index++)
    {
        if(interface_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-infos";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceInfos' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-info")
    {
        for(auto const & c : interface_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo>();
        c->parent = this;
        interface_info.push_back(std::move(c));
        children[segment_path] = interface_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::get_children()
{
    for (auto const & c : interface_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::InterfaceInfo()
    :
    link_type{YType::enumeration, "link-type"}
    	,
    interfaces(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces;

    yang_name = "interface-info"; yang_parent_name = "interface-infos";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::~InterfaceInfo()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::has_data() const
{
    return link_type.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(link_type.operation)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-info" <<"[link-type='" <<link_type <<"']";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceInfo' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_type.is_set || is_set(link_type.operation)) leaf_name_data.push_back(link_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-type")
    {
        link_type = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "interface-info";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::~Interfaces()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    drop_packets_while_fib_switching_flag{YType::boolean, "drop-packets-while-fib-switching-flag"},
    fib_id_extension_flags{YType::uint32, "fib-id-extension-flags"},
    fib_id_extension_pointer{YType::uint32, "fib-id-extension-pointer"},
    fib_id_flags{YType::uint32, "fib-id-flags"},
    fib_id_pointer{YType::uint32, "fib-id-pointer"},
    fib_interface_type{YType::uint32, "fib-interface-type"},
    gre_tunnel_interface_flag{YType::boolean, "gre-tunnel-interface-flag"},
    interface_up_flag{YType::boolean, "interface-up-flag"},
    last_modified_time{YType::uint32, "last-modified-time"},
    last_operation{YType::enumeration, "last-operation"},
    loopback_interface_flag{YType::boolean, "loopback-interface-flag"},
    null_interface_flag{YType::boolean, "null-interface-flag"},
    number_of_dependent_next_hop_information{YType::uint32, "number-of-dependent-next-hop-information"},
    number_of_input_bytes{YType::uint64, "number-of-input-bytes"},
    number_of_input_packets{YType::uint64, "number-of-input-packets"},
    number_of_output_bytes{YType::uint64, "number-of-output-bytes"},
    number_of_output_packets{YType::uint64, "number-of-output-packets"},
    p2p_interface_flag{YType::boolean, "p2p-interface-flag"},
    per_interface{YType::str, "per-interface"},
    per_packet_load_balancing_flag{YType::boolean, "per-packet-load-balancing-flag"},
    primary_ipv4_address{YType::str, "primary-ipv4-address"},
    primary_ipv6_address{YType::str, "primary-ipv6-address"},
    protocol_enabled{YType::boolean, "protocol-enabled"},
    punt_packets_from_fib_switching_flag{YType::boolean, "punt-packets-from-fib-switching-flag"},
    punt_packets_from_linecard_flag{YType::boolean, "punt-packets-from-linecard-flag"},
    referance_count_for_protocol{YType::uint32, "referance-count-for-protocol"},
    reference_count{YType::uint16, "reference-count"},
    tunnel_interface_flag{YType::boolean, "tunnel-interface-flag"},
    vrf_local_cef_information_pointer{YType::uint32, "vrf-local-cef-information-pointer"}
    	,
    detail_fib_int_information(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation>())
	,si_internal(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal>())
{
    detail_fib_int_information->parent = this;
    children["detail-fib-int-information"] = detail_fib_int_information;

    si_internal->parent = this;
    children["si-internal"] = si_internal;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::~Interface()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| drop_packets_while_fib_switching_flag.is_set
	|| fib_id_extension_flags.is_set
	|| fib_id_extension_pointer.is_set
	|| fib_id_flags.is_set
	|| fib_id_pointer.is_set
	|| fib_interface_type.is_set
	|| gre_tunnel_interface_flag.is_set
	|| interface_up_flag.is_set
	|| last_modified_time.is_set
	|| last_operation.is_set
	|| loopback_interface_flag.is_set
	|| null_interface_flag.is_set
	|| number_of_dependent_next_hop_information.is_set
	|| number_of_input_bytes.is_set
	|| number_of_input_packets.is_set
	|| number_of_output_bytes.is_set
	|| number_of_output_packets.is_set
	|| p2p_interface_flag.is_set
	|| per_interface.is_set
	|| per_packet_load_balancing_flag.is_set
	|| primary_ipv4_address.is_set
	|| primary_ipv6_address.is_set
	|| protocol_enabled.is_set
	|| punt_packets_from_fib_switching_flag.is_set
	|| punt_packets_from_linecard_flag.is_set
	|| referance_count_for_protocol.is_set
	|| reference_count.is_set
	|| tunnel_interface_flag.is_set
	|| vrf_local_cef_information_pointer.is_set
	|| (detail_fib_int_information !=  nullptr && detail_fib_int_information->has_data())
	|| (si_internal !=  nullptr && si_internal->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(drop_packets_while_fib_switching_flag.operation)
	|| is_set(fib_id_extension_flags.operation)
	|| is_set(fib_id_extension_pointer.operation)
	|| is_set(fib_id_flags.operation)
	|| is_set(fib_id_pointer.operation)
	|| is_set(fib_interface_type.operation)
	|| is_set(gre_tunnel_interface_flag.operation)
	|| is_set(interface_up_flag.operation)
	|| is_set(last_modified_time.operation)
	|| is_set(last_operation.operation)
	|| is_set(loopback_interface_flag.operation)
	|| is_set(null_interface_flag.operation)
	|| is_set(number_of_dependent_next_hop_information.operation)
	|| is_set(number_of_input_bytes.operation)
	|| is_set(number_of_input_packets.operation)
	|| is_set(number_of_output_bytes.operation)
	|| is_set(number_of_output_packets.operation)
	|| is_set(p2p_interface_flag.operation)
	|| is_set(per_interface.operation)
	|| is_set(per_packet_load_balancing_flag.operation)
	|| is_set(primary_ipv4_address.operation)
	|| is_set(primary_ipv6_address.operation)
	|| is_set(protocol_enabled.operation)
	|| is_set(punt_packets_from_fib_switching_flag.operation)
	|| is_set(punt_packets_from_linecard_flag.operation)
	|| is_set(referance_count_for_protocol.operation)
	|| is_set(reference_count.operation)
	|| is_set(tunnel_interface_flag.operation)
	|| is_set(vrf_local_cef_information_pointer.operation)
	|| (detail_fib_int_information !=  nullptr && detail_fib_int_information->has_operation())
	|| (si_internal !=  nullptr && si_internal->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (drop_packets_while_fib_switching_flag.is_set || is_set(drop_packets_while_fib_switching_flag.operation)) leaf_name_data.push_back(drop_packets_while_fib_switching_flag.get_name_leafdata());
    if (fib_id_extension_flags.is_set || is_set(fib_id_extension_flags.operation)) leaf_name_data.push_back(fib_id_extension_flags.get_name_leafdata());
    if (fib_id_extension_pointer.is_set || is_set(fib_id_extension_pointer.operation)) leaf_name_data.push_back(fib_id_extension_pointer.get_name_leafdata());
    if (fib_id_flags.is_set || is_set(fib_id_flags.operation)) leaf_name_data.push_back(fib_id_flags.get_name_leafdata());
    if (fib_id_pointer.is_set || is_set(fib_id_pointer.operation)) leaf_name_data.push_back(fib_id_pointer.get_name_leafdata());
    if (fib_interface_type.is_set || is_set(fib_interface_type.operation)) leaf_name_data.push_back(fib_interface_type.get_name_leafdata());
    if (gre_tunnel_interface_flag.is_set || is_set(gre_tunnel_interface_flag.operation)) leaf_name_data.push_back(gre_tunnel_interface_flag.get_name_leafdata());
    if (interface_up_flag.is_set || is_set(interface_up_flag.operation)) leaf_name_data.push_back(interface_up_flag.get_name_leafdata());
    if (last_modified_time.is_set || is_set(last_modified_time.operation)) leaf_name_data.push_back(last_modified_time.get_name_leafdata());
    if (last_operation.is_set || is_set(last_operation.operation)) leaf_name_data.push_back(last_operation.get_name_leafdata());
    if (loopback_interface_flag.is_set || is_set(loopback_interface_flag.operation)) leaf_name_data.push_back(loopback_interface_flag.get_name_leafdata());
    if (null_interface_flag.is_set || is_set(null_interface_flag.operation)) leaf_name_data.push_back(null_interface_flag.get_name_leafdata());
    if (number_of_dependent_next_hop_information.is_set || is_set(number_of_dependent_next_hop_information.operation)) leaf_name_data.push_back(number_of_dependent_next_hop_information.get_name_leafdata());
    if (number_of_input_bytes.is_set || is_set(number_of_input_bytes.operation)) leaf_name_data.push_back(number_of_input_bytes.get_name_leafdata());
    if (number_of_input_packets.is_set || is_set(number_of_input_packets.operation)) leaf_name_data.push_back(number_of_input_packets.get_name_leafdata());
    if (number_of_output_bytes.is_set || is_set(number_of_output_bytes.operation)) leaf_name_data.push_back(number_of_output_bytes.get_name_leafdata());
    if (number_of_output_packets.is_set || is_set(number_of_output_packets.operation)) leaf_name_data.push_back(number_of_output_packets.get_name_leafdata());
    if (p2p_interface_flag.is_set || is_set(p2p_interface_flag.operation)) leaf_name_data.push_back(p2p_interface_flag.get_name_leafdata());
    if (per_interface.is_set || is_set(per_interface.operation)) leaf_name_data.push_back(per_interface.get_name_leafdata());
    if (per_packet_load_balancing_flag.is_set || is_set(per_packet_load_balancing_flag.operation)) leaf_name_data.push_back(per_packet_load_balancing_flag.get_name_leafdata());
    if (primary_ipv4_address.is_set || is_set(primary_ipv4_address.operation)) leaf_name_data.push_back(primary_ipv4_address.get_name_leafdata());
    if (primary_ipv6_address.is_set || is_set(primary_ipv6_address.operation)) leaf_name_data.push_back(primary_ipv6_address.get_name_leafdata());
    if (protocol_enabled.is_set || is_set(protocol_enabled.operation)) leaf_name_data.push_back(protocol_enabled.get_name_leafdata());
    if (punt_packets_from_fib_switching_flag.is_set || is_set(punt_packets_from_fib_switching_flag.operation)) leaf_name_data.push_back(punt_packets_from_fib_switching_flag.get_name_leafdata());
    if (punt_packets_from_linecard_flag.is_set || is_set(punt_packets_from_linecard_flag.operation)) leaf_name_data.push_back(punt_packets_from_linecard_flag.get_name_leafdata());
    if (referance_count_for_protocol.is_set || is_set(referance_count_for_protocol.operation)) leaf_name_data.push_back(referance_count_for_protocol.get_name_leafdata());
    if (reference_count.is_set || is_set(reference_count.operation)) leaf_name_data.push_back(reference_count.get_name_leafdata());
    if (tunnel_interface_flag.is_set || is_set(tunnel_interface_flag.operation)) leaf_name_data.push_back(tunnel_interface_flag.get_name_leafdata());
    if (vrf_local_cef_information_pointer.is_set || is_set(vrf_local_cef_information_pointer.operation)) leaf_name_data.push_back(vrf_local_cef_information_pointer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail-fib-int-information")
    {
        if(detail_fib_int_information != nullptr)
        {
            children["detail-fib-int-information"] = detail_fib_int_information;
        }
        else
        {
            detail_fib_int_information = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation>();
            detail_fib_int_information->parent = this;
            children["detail-fib-int-information"] = detail_fib_int_information;
        }
        return children.at("detail-fib-int-information");
    }

    if(child_yang_name == "si-internal")
    {
        if(si_internal != nullptr)
        {
            children["si-internal"] = si_internal;
        }
        else
        {
            si_internal = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal>();
            si_internal->parent = this;
            children["si-internal"] = si_internal;
        }
        return children.at("si-internal");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::get_children()
{
    if(children.find("detail-fib-int-information") == children.end())
    {
        if(detail_fib_int_information != nullptr)
        {
            children["detail-fib-int-information"] = detail_fib_int_information;
        }
    }

    if(children.find("si-internal") == children.end())
    {
        if(si_internal != nullptr)
        {
            children["si-internal"] = si_internal;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "drop-packets-while-fib-switching-flag")
    {
        drop_packets_while_fib_switching_flag = value;
    }
    if(value_path == "fib-id-extension-flags")
    {
        fib_id_extension_flags = value;
    }
    if(value_path == "fib-id-extension-pointer")
    {
        fib_id_extension_pointer = value;
    }
    if(value_path == "fib-id-flags")
    {
        fib_id_flags = value;
    }
    if(value_path == "fib-id-pointer")
    {
        fib_id_pointer = value;
    }
    if(value_path == "fib-interface-type")
    {
        fib_interface_type = value;
    }
    if(value_path == "gre-tunnel-interface-flag")
    {
        gre_tunnel_interface_flag = value;
    }
    if(value_path == "interface-up-flag")
    {
        interface_up_flag = value;
    }
    if(value_path == "last-modified-time")
    {
        last_modified_time = value;
    }
    if(value_path == "last-operation")
    {
        last_operation = value;
    }
    if(value_path == "loopback-interface-flag")
    {
        loopback_interface_flag = value;
    }
    if(value_path == "null-interface-flag")
    {
        null_interface_flag = value;
    }
    if(value_path == "number-of-dependent-next-hop-information")
    {
        number_of_dependent_next_hop_information = value;
    }
    if(value_path == "number-of-input-bytes")
    {
        number_of_input_bytes = value;
    }
    if(value_path == "number-of-input-packets")
    {
        number_of_input_packets = value;
    }
    if(value_path == "number-of-output-bytes")
    {
        number_of_output_bytes = value;
    }
    if(value_path == "number-of-output-packets")
    {
        number_of_output_packets = value;
    }
    if(value_path == "p2p-interface-flag")
    {
        p2p_interface_flag = value;
    }
    if(value_path == "per-interface")
    {
        per_interface = value;
    }
    if(value_path == "per-packet-load-balancing-flag")
    {
        per_packet_load_balancing_flag = value;
    }
    if(value_path == "primary-ipv4-address")
    {
        primary_ipv4_address = value;
    }
    if(value_path == "primary-ipv6-address")
    {
        primary_ipv6_address = value;
    }
    if(value_path == "protocol-enabled")
    {
        protocol_enabled = value;
    }
    if(value_path == "punt-packets-from-fib-switching-flag")
    {
        punt_packets_from_fib_switching_flag = value;
    }
    if(value_path == "punt-packets-from-linecard-flag")
    {
        punt_packets_from_linecard_flag = value;
    }
    if(value_path == "referance-count-for-protocol")
    {
        referance_count_for_protocol = value;
    }
    if(value_path == "reference-count")
    {
        reference_count = value;
    }
    if(value_path == "tunnel-interface-flag")
    {
        tunnel_interface_flag = value;
    }
    if(value_path == "vrf-local-cef-information-pointer")
    {
        vrf_local_cef_information_pointer = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation::DetailFibIntInformation()
    :
    bgp_pa_input_configured_flag{YType::boolean, "bgp-pa-input-configured-flag"},
    bgp_pa_output_configured_flag{YType::boolean, "bgp-pa-output-configured-flag"},
    default_route_with_rpf{YType::boolean, "default-route-with-rpf"},
    destination_bgp_pa_input_configured_flag{YType::boolean, "destination-bgp-pa-input-configured-flag"},
    destination_bgp_pa_output_configured_flag{YType::boolean, "destination-bgp-pa-output-configured-flag"},
    forwarding_flag{YType::boolean, "forwarding-flag"},
    icmp_flag{YType::uint32, "icmp-flag"},
    interface_mtu{YType::uint16, "interface-mtu"},
    multi_label_drop_flag{YType::boolean, "multi-label-drop-flag"},
    rpf_configured_flag{YType::boolean, "rpf-configured-flag"},
    rpf_mode{YType::enumeration, "rpf-mode"},
    self_ping_with_rpf{YType::boolean, "self-ping-with-rpf"},
    source_bgp_pa_input_configured_flag{YType::boolean, "source-bgp-pa-input-configured-flag"},
    source_bgp_pa_output_configured_flag{YType::boolean, "source-bgp-pa-output-configured-flag"}
{
    yang_name = "detail-fib-int-information"; yang_parent_name = "interface";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation::~DetailFibIntInformation()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation::has_data() const
{
    return bgp_pa_input_configured_flag.is_set
	|| bgp_pa_output_configured_flag.is_set
	|| default_route_with_rpf.is_set
	|| destination_bgp_pa_input_configured_flag.is_set
	|| destination_bgp_pa_output_configured_flag.is_set
	|| forwarding_flag.is_set
	|| icmp_flag.is_set
	|| interface_mtu.is_set
	|| multi_label_drop_flag.is_set
	|| rpf_configured_flag.is_set
	|| rpf_mode.is_set
	|| self_ping_with_rpf.is_set
	|| source_bgp_pa_input_configured_flag.is_set
	|| source_bgp_pa_output_configured_flag.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(bgp_pa_input_configured_flag.operation)
	|| is_set(bgp_pa_output_configured_flag.operation)
	|| is_set(default_route_with_rpf.operation)
	|| is_set(destination_bgp_pa_input_configured_flag.operation)
	|| is_set(destination_bgp_pa_output_configured_flag.operation)
	|| is_set(forwarding_flag.operation)
	|| is_set(icmp_flag.operation)
	|| is_set(interface_mtu.operation)
	|| is_set(multi_label_drop_flag.operation)
	|| is_set(rpf_configured_flag.operation)
	|| is_set(rpf_mode.operation)
	|| is_set(self_ping_with_rpf.operation)
	|| is_set(source_bgp_pa_input_configured_flag.operation)
	|| is_set(source_bgp_pa_output_configured_flag.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-fib-int-information";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DetailFibIntInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_pa_input_configured_flag.is_set || is_set(bgp_pa_input_configured_flag.operation)) leaf_name_data.push_back(bgp_pa_input_configured_flag.get_name_leafdata());
    if (bgp_pa_output_configured_flag.is_set || is_set(bgp_pa_output_configured_flag.operation)) leaf_name_data.push_back(bgp_pa_output_configured_flag.get_name_leafdata());
    if (default_route_with_rpf.is_set || is_set(default_route_with_rpf.operation)) leaf_name_data.push_back(default_route_with_rpf.get_name_leafdata());
    if (destination_bgp_pa_input_configured_flag.is_set || is_set(destination_bgp_pa_input_configured_flag.operation)) leaf_name_data.push_back(destination_bgp_pa_input_configured_flag.get_name_leafdata());
    if (destination_bgp_pa_output_configured_flag.is_set || is_set(destination_bgp_pa_output_configured_flag.operation)) leaf_name_data.push_back(destination_bgp_pa_output_configured_flag.get_name_leafdata());
    if (forwarding_flag.is_set || is_set(forwarding_flag.operation)) leaf_name_data.push_back(forwarding_flag.get_name_leafdata());
    if (icmp_flag.is_set || is_set(icmp_flag.operation)) leaf_name_data.push_back(icmp_flag.get_name_leafdata());
    if (interface_mtu.is_set || is_set(interface_mtu.operation)) leaf_name_data.push_back(interface_mtu.get_name_leafdata());
    if (multi_label_drop_flag.is_set || is_set(multi_label_drop_flag.operation)) leaf_name_data.push_back(multi_label_drop_flag.get_name_leafdata());
    if (rpf_configured_flag.is_set || is_set(rpf_configured_flag.operation)) leaf_name_data.push_back(rpf_configured_flag.get_name_leafdata());
    if (rpf_mode.is_set || is_set(rpf_mode.operation)) leaf_name_data.push_back(rpf_mode.get_name_leafdata());
    if (self_ping_with_rpf.is_set || is_set(self_ping_with_rpf.operation)) leaf_name_data.push_back(self_ping_with_rpf.get_name_leafdata());
    if (source_bgp_pa_input_configured_flag.is_set || is_set(source_bgp_pa_input_configured_flag.operation)) leaf_name_data.push_back(source_bgp_pa_input_configured_flag.get_name_leafdata());
    if (source_bgp_pa_output_configured_flag.is_set || is_set(source_bgp_pa_output_configured_flag.operation)) leaf_name_data.push_back(source_bgp_pa_output_configured_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::DetailFibIntInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bgp-pa-input-configured-flag")
    {
        bgp_pa_input_configured_flag = value;
    }
    if(value_path == "bgp-pa-output-configured-flag")
    {
        bgp_pa_output_configured_flag = value;
    }
    if(value_path == "default-route-with-rpf")
    {
        default_route_with_rpf = value;
    }
    if(value_path == "destination-bgp-pa-input-configured-flag")
    {
        destination_bgp_pa_input_configured_flag = value;
    }
    if(value_path == "destination-bgp-pa-output-configured-flag")
    {
        destination_bgp_pa_output_configured_flag = value;
    }
    if(value_path == "forwarding-flag")
    {
        forwarding_flag = value;
    }
    if(value_path == "icmp-flag")
    {
        icmp_flag = value;
    }
    if(value_path == "interface-mtu")
    {
        interface_mtu = value;
    }
    if(value_path == "multi-label-drop-flag")
    {
        multi_label_drop_flag = value;
    }
    if(value_path == "rpf-configured-flag")
    {
        rpf_configured_flag = value;
    }
    if(value_path == "rpf-mode")
    {
        rpf_mode = value;
    }
    if(value_path == "self-ping-with-rpf")
    {
        self_ping_with_rpf = value;
    }
    if(value_path == "source-bgp-pa-input-configured-flag")
    {
        source_bgp_pa_input_configured_flag = value;
    }
    if(value_path == "source-bgp-pa-output-configured-flag")
    {
        source_bgp_pa_output_configured_flag = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::SiInternal()
    :
    fib_idb_hist(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist>())
	,fib_srte_head_hist(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist>())
{
    fib_idb_hist->parent = this;
    children["fib-idb-hist"] = fib_idb_hist;

    fib_srte_head_hist->parent = this;
    children["fib-srte-head-hist"] = fib_srte_head_hist;

    yang_name = "si-internal"; yang_parent_name = "interface";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::~SiInternal()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::has_data() const
{
    return (fib_idb_hist !=  nullptr && fib_idb_hist->has_data())
	|| (fib_srte_head_hist !=  nullptr && fib_srte_head_hist->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::has_operation() const
{
    return is_set(operation)
	|| (fib_idb_hist !=  nullptr && fib_idb_hist->has_operation())
	|| (fib_srte_head_hist !=  nullptr && fib_srte_head_hist->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "si-internal";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiInternal' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fib-idb-hist")
    {
        if(fib_idb_hist != nullptr)
        {
            children["fib-idb-hist"] = fib_idb_hist;
        }
        else
        {
            fib_idb_hist = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist>();
            fib_idb_hist->parent = this;
            children["fib-idb-hist"] = fib_idb_hist;
        }
        return children.at("fib-idb-hist");
    }

    if(child_yang_name == "fib-srte-head-hist")
    {
        if(fib_srte_head_hist != nullptr)
        {
            children["fib-srte-head-hist"] = fib_srte_head_hist;
        }
        else
        {
            fib_srte_head_hist = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist>();
            fib_srte_head_hist->parent = this;
            children["fib-srte-head-hist"] = fib_srte_head_hist;
        }
        return children.at("fib-srte-head-hist");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::get_children()
{
    if(children.find("fib-idb-hist") == children.end())
    {
        if(fib_idb_hist != nullptr)
        {
            children["fib-idb-hist"] = fib_idb_hist;
        }
    }

    if(children.find("fib-srte-head-hist") == children.end())
    {
        if(fib_srte_head_hist != nullptr)
        {
            children["fib-srte-head-hist"] = fib_srte_head_hist;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::FibIdbHist()
    :
    evt_class_name{YType::str, "evt-class-name"}
{
    yang_name = "fib-idb-hist"; yang_parent_name = "si-internal";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::~FibIdbHist()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::has_data() const
{
    for (std::size_t index=0; index<evt_entry.size(); index++)
    {
        if(evt_entry[index]->has_data())
            return true;
    }
    return evt_class_name.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::has_operation() const
{
    for (std::size_t index=0; index<evt_entry.size(); index++)
    {
        if(evt_entry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(evt_class_name.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-idb-hist";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FibIdbHist' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evt_class_name.is_set || is_set(evt_class_name.operation)) leaf_name_data.push_back(evt_class_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evt-entry")
    {
        for(auto const & c : evt_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry>();
        c->parent = this;
        evt_entry.push_back(std::move(c));
        children[segment_path] = evt_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::get_children()
{
    for (auto const & c : evt_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "evt-class-name")
    {
        evt_class_name = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::EvtEntry()
    :
    evt_data{YType::uint32, "evt-data"},
    evt_many{YType::boolean, "evt-many"},
    evt_name{YType::str, "evt-name"},
    evt_sticky{YType::boolean, "evt-sticky"},
    evt_timestamp{YType::str, "evt-timestamp"},
    evt_type{YType::uint8, "evt-type"}
{
    yang_name = "evt-entry"; yang_parent_name = "fib-idb-hist";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::~EvtEntry()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::has_data() const
{
    for (auto const & leaf : evt_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return evt_many.is_set
	|| evt_name.is_set
	|| evt_sticky.is_set
	|| evt_timestamp.is_set
	|| evt_type.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::has_operation() const
{
    for (auto const & leaf : evt_data.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(evt_data.operation)
	|| is_set(evt_many.operation)
	|| is_set(evt_name.operation)
	|| is_set(evt_sticky.operation)
	|| is_set(evt_timestamp.operation)
	|| is_set(evt_type.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evt-entry";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EvtEntry' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evt_many.is_set || is_set(evt_many.operation)) leaf_name_data.push_back(evt_many.get_name_leafdata());
    if (evt_name.is_set || is_set(evt_name.operation)) leaf_name_data.push_back(evt_name.get_name_leafdata());
    if (evt_sticky.is_set || is_set(evt_sticky.operation)) leaf_name_data.push_back(evt_sticky.get_name_leafdata());
    if (evt_timestamp.is_set || is_set(evt_timestamp.operation)) leaf_name_data.push_back(evt_timestamp.get_name_leafdata());
    if (evt_type.is_set || is_set(evt_type.operation)) leaf_name_data.push_back(evt_type.get_name_leafdata());

    auto evt_data_name_datas = evt_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), evt_data_name_datas.begin(), evt_data_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibIdbHist::EvtEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "evt-data")
    {
        evt_data.append(value);
    }
    if(value_path == "evt-many")
    {
        evt_many = value;
    }
    if(value_path == "evt-name")
    {
        evt_name = value;
    }
    if(value_path == "evt-sticky")
    {
        evt_sticky = value;
    }
    if(value_path == "evt-timestamp")
    {
        evt_timestamp = value;
    }
    if(value_path == "evt-type")
    {
        evt_type = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::FibSrteHeadHist()
    :
    evt_class_name{YType::str, "evt-class-name"}
{
    yang_name = "fib-srte-head-hist"; yang_parent_name = "si-internal";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::~FibSrteHeadHist()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::has_data() const
{
    for (std::size_t index=0; index<evt_entry.size(); index++)
    {
        if(evt_entry[index]->has_data())
            return true;
    }
    return evt_class_name.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::has_operation() const
{
    for (std::size_t index=0; index<evt_entry.size(); index++)
    {
        if(evt_entry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(evt_class_name.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-srte-head-hist";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FibSrteHeadHist' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evt_class_name.is_set || is_set(evt_class_name.operation)) leaf_name_data.push_back(evt_class_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evt-entry")
    {
        for(auto const & c : evt_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry>();
        c->parent = this;
        evt_entry.push_back(std::move(c));
        children[segment_path] = evt_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::get_children()
{
    for (auto const & c : evt_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "evt-class-name")
    {
        evt_class_name = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::EvtEntry()
    :
    evt_data{YType::uint32, "evt-data"},
    evt_many{YType::boolean, "evt-many"},
    evt_name{YType::str, "evt-name"},
    evt_sticky{YType::boolean, "evt-sticky"},
    evt_timestamp{YType::str, "evt-timestamp"},
    evt_type{YType::uint8, "evt-type"}
{
    yang_name = "evt-entry"; yang_parent_name = "fib-srte-head-hist";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::~EvtEntry()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::has_data() const
{
    for (auto const & leaf : evt_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return evt_many.is_set
	|| evt_name.is_set
	|| evt_sticky.is_set
	|| evt_timestamp.is_set
	|| evt_type.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::has_operation() const
{
    for (auto const & leaf : evt_data.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(evt_data.operation)
	|| is_set(evt_many.operation)
	|| is_set(evt_name.operation)
	|| is_set(evt_sticky.operation)
	|| is_set(evt_timestamp.operation)
	|| is_set(evt_type.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evt-entry";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EvtEntry' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evt_many.is_set || is_set(evt_many.operation)) leaf_name_data.push_back(evt_many.get_name_leafdata());
    if (evt_name.is_set || is_set(evt_name.operation)) leaf_name_data.push_back(evt_name.get_name_leafdata());
    if (evt_sticky.is_set || is_set(evt_sticky.operation)) leaf_name_data.push_back(evt_sticky.get_name_leafdata());
    if (evt_timestamp.is_set || is_set(evt_timestamp.operation)) leaf_name_data.push_back(evt_timestamp.get_name_leafdata());
    if (evt_type.is_set || is_set(evt_type.operation)) leaf_name_data.push_back(evt_type.get_name_leafdata());

    auto evt_data_name_datas = evt_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), evt_data_name_datas.begin(), evt_data_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::InterfaceInfos::InterfaceInfo::Interfaces::Interface::SiInternal::FibSrteHeadHist::EvtEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "evt-data")
    {
        evt_data.append(value);
    }
    if(value_path == "evt-many")
    {
        evt_many = value;
    }
    if(value_path == "evt-name")
    {
        evt_name = value;
    }
    if(value_path == "evt-sticky")
    {
        evt_sticky = value;
    }
    if(value_path == "evt-timestamp")
    {
        evt_timestamp = value;
    }
    if(value_path == "evt-type")
    {
        evt_type = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBriefs()
{
    yang_name = "ip-prefix-briefs"; yang_parent_name = "vrf";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::~IpPrefixBriefs()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::has_data() const
{
    for (std::size_t index=0; index<ip_prefix_brief.size(); index++)
    {
        if(ip_prefix_brief[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::has_operation() const
{
    for (std::size_t index=0; index<ip_prefix_brief.size(); index++)
    {
        if(ip_prefix_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-prefix-briefs";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpPrefixBriefs' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-prefix-brief")
    {
        for(auto const & c : ip_prefix_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief>();
        c->parent = this;
        ip_prefix_brief.push_back(std::move(c));
        children[segment_path] = ip_prefix_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::get_children()
{
    for (auto const & c : ip_prefix_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::IpPrefixBrief()
    :
    broadcast_forward_flag{YType::boolean, "broadcast-forward-flag"},
    broadcast_recive_flag{YType::boolean, "broadcast-recive-flag"},
    dummy_real_zero_route{YType::boolean, "dummy-real-zero-route"},
    exact_route_result{YType::boolean, "exact-route-result"},
    external_switch_triggered{YType::boolean, "external-switch-triggered"},
    fib_route_download_priority{YType::uint32, "fib-route-download-priority"},
    flags_external_ldi{YType::uint32, "flags-external-ldi"},
    l2_subscriber_ip_protocol{YType::uint32, "l2-subscriber-ip-protocol"},
    l2_subscriber_route{YType::boolean, "l2-subscriber-route"},
    l2_subscriber_xconnect_id{YType::uint32, "l2-subscriber-xconnect-id"},
    l2tpv3_cookie_length_bits{YType::uint32, "l2tpv3-cookie-length-bits"},
    ldi_flags{YType::uint32, "ldi-flags"},
    ldi_lw_flag{YType::uint32, "ldi-lw-flag"},
    lspa_flags{YType::uint32, "lspa-flags"},
    number_of_referances_to_ldi{YType::uint32, "number-of-referances-to-ldi"},
    number_of_referances_to_path_list{YType::uint32, "number-of-referances-to-path-list"},
    packet_should_recieve{YType::boolean, "packet-should-recieve"},
    path_list_flags{YType::uint32, "path-list-flags"},
    path_list_source{YType::uint32, "path-list-source"},
    platform_hardware{YType::str, "platform-hardware"},
    prefix{YType::str, "prefix"},
    prefix_connected{YType::boolean, "prefix-connected"},
    prefix_for_adjancency{YType::boolean, "prefix-for-adjancency"},
    prefix_for_pic_next_hop{YType::boolean, "prefix-for-pic-next-hop"},
    prefix_is_static_or_connected{YType::boolean, "prefix-is-static-or-connected"},
    prefix_length{YType::uint8, "prefix-length"},
    protocol_type_fib_entry{YType::uint32, "protocol-type-fib-entry"},
    purgable_after_purge_interval{YType::boolean, "purgable-after-purge-interval"},
    ref_counter_of_ldi_lw_ldi{YType::uint32, "ref-counter-of-ldi-lw-ldi"},
    route_attribute_flag{YType::boolean, "route-attribute-flag"},
    route_for_external_reach_linecard_flag{YType::boolean, "route-for-external-reach-linecard-flag"},
    route_is_sr_flag{YType::boolean, "route-is-sr-flag"},
    time_of_last_update_in_msec{YType::uint64, "time-of-last-update-in-msec"},
    type_of_ldi_lw_ldi{YType::uint32, "type-of-ldi-lw-ldi"},
    version_of_route{YType::uint64, "version-of-route"},
    zero_by_zero_route_as_default{YType::boolean, "zero-by-zero-route-as-default"}
    	,
    detail_fib_entry_information(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation>())
	,fib_entry_path(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath>())
	,srv6_information(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information>())
{
    detail_fib_entry_information->parent = this;
    children["detail-fib-entry-information"] = detail_fib_entry_information;

    fib_entry_path->parent = this;
    children["fib-entry-path"] = fib_entry_path;

    srv6_information->parent = this;
    children["srv6-information"] = srv6_information;

    yang_name = "ip-prefix-brief"; yang_parent_name = "ip-prefix-briefs";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::~IpPrefixBrief()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::has_data() const
{
    for (std::size_t index=0; index<extension_object.size(); index++)
    {
        if(extension_object[index]->has_data())
            return true;
    }
    return broadcast_forward_flag.is_set
	|| broadcast_recive_flag.is_set
	|| dummy_real_zero_route.is_set
	|| exact_route_result.is_set
	|| external_switch_triggered.is_set
	|| fib_route_download_priority.is_set
	|| flags_external_ldi.is_set
	|| l2_subscriber_ip_protocol.is_set
	|| l2_subscriber_route.is_set
	|| l2_subscriber_xconnect_id.is_set
	|| l2tpv3_cookie_length_bits.is_set
	|| ldi_flags.is_set
	|| ldi_lw_flag.is_set
	|| lspa_flags.is_set
	|| number_of_referances_to_ldi.is_set
	|| number_of_referances_to_path_list.is_set
	|| packet_should_recieve.is_set
	|| path_list_flags.is_set
	|| path_list_source.is_set
	|| platform_hardware.is_set
	|| prefix.is_set
	|| prefix_connected.is_set
	|| prefix_for_adjancency.is_set
	|| prefix_for_pic_next_hop.is_set
	|| prefix_is_static_or_connected.is_set
	|| prefix_length.is_set
	|| protocol_type_fib_entry.is_set
	|| purgable_after_purge_interval.is_set
	|| ref_counter_of_ldi_lw_ldi.is_set
	|| route_attribute_flag.is_set
	|| route_for_external_reach_linecard_flag.is_set
	|| route_is_sr_flag.is_set
	|| time_of_last_update_in_msec.is_set
	|| type_of_ldi_lw_ldi.is_set
	|| version_of_route.is_set
	|| zero_by_zero_route_as_default.is_set
	|| (detail_fib_entry_information !=  nullptr && detail_fib_entry_information->has_data())
	|| (fib_entry_path !=  nullptr && fib_entry_path->has_data())
	|| (srv6_information !=  nullptr && srv6_information->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::has_operation() const
{
    for (std::size_t index=0; index<extension_object.size(); index++)
    {
        if(extension_object[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(broadcast_forward_flag.operation)
	|| is_set(broadcast_recive_flag.operation)
	|| is_set(dummy_real_zero_route.operation)
	|| is_set(exact_route_result.operation)
	|| is_set(external_switch_triggered.operation)
	|| is_set(fib_route_download_priority.operation)
	|| is_set(flags_external_ldi.operation)
	|| is_set(l2_subscriber_ip_protocol.operation)
	|| is_set(l2_subscriber_route.operation)
	|| is_set(l2_subscriber_xconnect_id.operation)
	|| is_set(l2tpv3_cookie_length_bits.operation)
	|| is_set(ldi_flags.operation)
	|| is_set(ldi_lw_flag.operation)
	|| is_set(lspa_flags.operation)
	|| is_set(number_of_referances_to_ldi.operation)
	|| is_set(number_of_referances_to_path_list.operation)
	|| is_set(packet_should_recieve.operation)
	|| is_set(path_list_flags.operation)
	|| is_set(path_list_source.operation)
	|| is_set(platform_hardware.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_connected.operation)
	|| is_set(prefix_for_adjancency.operation)
	|| is_set(prefix_for_pic_next_hop.operation)
	|| is_set(prefix_is_static_or_connected.operation)
	|| is_set(prefix_length.operation)
	|| is_set(protocol_type_fib_entry.operation)
	|| is_set(purgable_after_purge_interval.operation)
	|| is_set(ref_counter_of_ldi_lw_ldi.operation)
	|| is_set(route_attribute_flag.operation)
	|| is_set(route_for_external_reach_linecard_flag.operation)
	|| is_set(route_is_sr_flag.operation)
	|| is_set(time_of_last_update_in_msec.operation)
	|| is_set(type_of_ldi_lw_ldi.operation)
	|| is_set(version_of_route.operation)
	|| is_set(zero_by_zero_route_as_default.operation)
	|| (detail_fib_entry_information !=  nullptr && detail_fib_entry_information->has_operation())
	|| (fib_entry_path !=  nullptr && fib_entry_path->has_operation())
	|| (srv6_information !=  nullptr && srv6_information->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-prefix-brief";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpPrefixBrief' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast_forward_flag.is_set || is_set(broadcast_forward_flag.operation)) leaf_name_data.push_back(broadcast_forward_flag.get_name_leafdata());
    if (broadcast_recive_flag.is_set || is_set(broadcast_recive_flag.operation)) leaf_name_data.push_back(broadcast_recive_flag.get_name_leafdata());
    if (dummy_real_zero_route.is_set || is_set(dummy_real_zero_route.operation)) leaf_name_data.push_back(dummy_real_zero_route.get_name_leafdata());
    if (exact_route_result.is_set || is_set(exact_route_result.operation)) leaf_name_data.push_back(exact_route_result.get_name_leafdata());
    if (external_switch_triggered.is_set || is_set(external_switch_triggered.operation)) leaf_name_data.push_back(external_switch_triggered.get_name_leafdata());
    if (fib_route_download_priority.is_set || is_set(fib_route_download_priority.operation)) leaf_name_data.push_back(fib_route_download_priority.get_name_leafdata());
    if (flags_external_ldi.is_set || is_set(flags_external_ldi.operation)) leaf_name_data.push_back(flags_external_ldi.get_name_leafdata());
    if (l2_subscriber_ip_protocol.is_set || is_set(l2_subscriber_ip_protocol.operation)) leaf_name_data.push_back(l2_subscriber_ip_protocol.get_name_leafdata());
    if (l2_subscriber_route.is_set || is_set(l2_subscriber_route.operation)) leaf_name_data.push_back(l2_subscriber_route.get_name_leafdata());
    if (l2_subscriber_xconnect_id.is_set || is_set(l2_subscriber_xconnect_id.operation)) leaf_name_data.push_back(l2_subscriber_xconnect_id.get_name_leafdata());
    if (l2tpv3_cookie_length_bits.is_set || is_set(l2tpv3_cookie_length_bits.operation)) leaf_name_data.push_back(l2tpv3_cookie_length_bits.get_name_leafdata());
    if (ldi_flags.is_set || is_set(ldi_flags.operation)) leaf_name_data.push_back(ldi_flags.get_name_leafdata());
    if (ldi_lw_flag.is_set || is_set(ldi_lw_flag.operation)) leaf_name_data.push_back(ldi_lw_flag.get_name_leafdata());
    if (lspa_flags.is_set || is_set(lspa_flags.operation)) leaf_name_data.push_back(lspa_flags.get_name_leafdata());
    if (number_of_referances_to_ldi.is_set || is_set(number_of_referances_to_ldi.operation)) leaf_name_data.push_back(number_of_referances_to_ldi.get_name_leafdata());
    if (number_of_referances_to_path_list.is_set || is_set(number_of_referances_to_path_list.operation)) leaf_name_data.push_back(number_of_referances_to_path_list.get_name_leafdata());
    if (packet_should_recieve.is_set || is_set(packet_should_recieve.operation)) leaf_name_data.push_back(packet_should_recieve.get_name_leafdata());
    if (path_list_flags.is_set || is_set(path_list_flags.operation)) leaf_name_data.push_back(path_list_flags.get_name_leafdata());
    if (path_list_source.is_set || is_set(path_list_source.operation)) leaf_name_data.push_back(path_list_source.get_name_leafdata());
    if (platform_hardware.is_set || is_set(platform_hardware.operation)) leaf_name_data.push_back(platform_hardware.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_connected.is_set || is_set(prefix_connected.operation)) leaf_name_data.push_back(prefix_connected.get_name_leafdata());
    if (prefix_for_adjancency.is_set || is_set(prefix_for_adjancency.operation)) leaf_name_data.push_back(prefix_for_adjancency.get_name_leafdata());
    if (prefix_for_pic_next_hop.is_set || is_set(prefix_for_pic_next_hop.operation)) leaf_name_data.push_back(prefix_for_pic_next_hop.get_name_leafdata());
    if (prefix_is_static_or_connected.is_set || is_set(prefix_is_static_or_connected.operation)) leaf_name_data.push_back(prefix_is_static_or_connected.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (protocol_type_fib_entry.is_set || is_set(protocol_type_fib_entry.operation)) leaf_name_data.push_back(protocol_type_fib_entry.get_name_leafdata());
    if (purgable_after_purge_interval.is_set || is_set(purgable_after_purge_interval.operation)) leaf_name_data.push_back(purgable_after_purge_interval.get_name_leafdata());
    if (ref_counter_of_ldi_lw_ldi.is_set || is_set(ref_counter_of_ldi_lw_ldi.operation)) leaf_name_data.push_back(ref_counter_of_ldi_lw_ldi.get_name_leafdata());
    if (route_attribute_flag.is_set || is_set(route_attribute_flag.operation)) leaf_name_data.push_back(route_attribute_flag.get_name_leafdata());
    if (route_for_external_reach_linecard_flag.is_set || is_set(route_for_external_reach_linecard_flag.operation)) leaf_name_data.push_back(route_for_external_reach_linecard_flag.get_name_leafdata());
    if (route_is_sr_flag.is_set || is_set(route_is_sr_flag.operation)) leaf_name_data.push_back(route_is_sr_flag.get_name_leafdata());
    if (time_of_last_update_in_msec.is_set || is_set(time_of_last_update_in_msec.operation)) leaf_name_data.push_back(time_of_last_update_in_msec.get_name_leafdata());
    if (type_of_ldi_lw_ldi.is_set || is_set(type_of_ldi_lw_ldi.operation)) leaf_name_data.push_back(type_of_ldi_lw_ldi.get_name_leafdata());
    if (version_of_route.is_set || is_set(version_of_route.operation)) leaf_name_data.push_back(version_of_route.get_name_leafdata());
    if (zero_by_zero_route_as_default.is_set || is_set(zero_by_zero_route_as_default.operation)) leaf_name_data.push_back(zero_by_zero_route_as_default.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail-fib-entry-information")
    {
        if(detail_fib_entry_information != nullptr)
        {
            children["detail-fib-entry-information"] = detail_fib_entry_information;
        }
        else
        {
            detail_fib_entry_information = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation>();
            detail_fib_entry_information->parent = this;
            children["detail-fib-entry-information"] = detail_fib_entry_information;
        }
        return children.at("detail-fib-entry-information");
    }

    if(child_yang_name == "extension-object")
    {
        for(auto const & c : extension_object)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject>();
        c->parent = this;
        extension_object.push_back(std::move(c));
        children[segment_path] = extension_object.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "fib-entry-path")
    {
        if(fib_entry_path != nullptr)
        {
            children["fib-entry-path"] = fib_entry_path;
        }
        else
        {
            fib_entry_path = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath>();
            fib_entry_path->parent = this;
            children["fib-entry-path"] = fib_entry_path;
        }
        return children.at("fib-entry-path");
    }

    if(child_yang_name == "srv6-information")
    {
        if(srv6_information != nullptr)
        {
            children["srv6-information"] = srv6_information;
        }
        else
        {
            srv6_information = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information>();
            srv6_information->parent = this;
            children["srv6-information"] = srv6_information;
        }
        return children.at("srv6-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::get_children()
{
    if(children.find("detail-fib-entry-information") == children.end())
    {
        if(detail_fib_entry_information != nullptr)
        {
            children["detail-fib-entry-information"] = detail_fib_entry_information;
        }
    }

    for (auto const & c : extension_object)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("fib-entry-path") == children.end())
    {
        if(fib_entry_path != nullptr)
        {
            children["fib-entry-path"] = fib_entry_path;
        }
    }

    if(children.find("srv6-information") == children.end())
    {
        if(srv6_information != nullptr)
        {
            children["srv6-information"] = srv6_information;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast-forward-flag")
    {
        broadcast_forward_flag = value;
    }
    if(value_path == "broadcast-recive-flag")
    {
        broadcast_recive_flag = value;
    }
    if(value_path == "dummy-real-zero-route")
    {
        dummy_real_zero_route = value;
    }
    if(value_path == "exact-route-result")
    {
        exact_route_result = value;
    }
    if(value_path == "external-switch-triggered")
    {
        external_switch_triggered = value;
    }
    if(value_path == "fib-route-download-priority")
    {
        fib_route_download_priority = value;
    }
    if(value_path == "flags-external-ldi")
    {
        flags_external_ldi = value;
    }
    if(value_path == "l2-subscriber-ip-protocol")
    {
        l2_subscriber_ip_protocol = value;
    }
    if(value_path == "l2-subscriber-route")
    {
        l2_subscriber_route = value;
    }
    if(value_path == "l2-subscriber-xconnect-id")
    {
        l2_subscriber_xconnect_id = value;
    }
    if(value_path == "l2tpv3-cookie-length-bits")
    {
        l2tpv3_cookie_length_bits = value;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags = value;
    }
    if(value_path == "ldi-lw-flag")
    {
        ldi_lw_flag = value;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags = value;
    }
    if(value_path == "number-of-referances-to-ldi")
    {
        number_of_referances_to_ldi = value;
    }
    if(value_path == "number-of-referances-to-path-list")
    {
        number_of_referances_to_path_list = value;
    }
    if(value_path == "packet-should-recieve")
    {
        packet_should_recieve = value;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags = value;
    }
    if(value_path == "path-list-source")
    {
        path_list_source = value;
    }
    if(value_path == "platform-hardware")
    {
        platform_hardware = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-connected")
    {
        prefix_connected = value;
    }
    if(value_path == "prefix-for-adjancency")
    {
        prefix_for_adjancency = value;
    }
    if(value_path == "prefix-for-pic-next-hop")
    {
        prefix_for_pic_next_hop = value;
    }
    if(value_path == "prefix-is-static-or-connected")
    {
        prefix_is_static_or_connected = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "protocol-type-fib-entry")
    {
        protocol_type_fib_entry = value;
    }
    if(value_path == "purgable-after-purge-interval")
    {
        purgable_after_purge_interval = value;
    }
    if(value_path == "ref-counter-of-ldi-lw-ldi")
    {
        ref_counter_of_ldi_lw_ldi = value;
    }
    if(value_path == "route-attribute-flag")
    {
        route_attribute_flag = value;
    }
    if(value_path == "route-for-external-reach-linecard-flag")
    {
        route_for_external_reach_linecard_flag = value;
    }
    if(value_path == "route-is-sr-flag")
    {
        route_is_sr_flag = value;
    }
    if(value_path == "time-of-last-update-in-msec")
    {
        time_of_last_update_in_msec = value;
    }
    if(value_path == "type-of-ldi-lw-ldi")
    {
        type_of_ldi_lw_ldi = value;
    }
    if(value_path == "version-of-route")
    {
        version_of_route = value;
    }
    if(value_path == "zero-by-zero-route-as-default")
    {
        zero_by_zero_route_as_default = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::DetailFibEntryInformation()
    :
    adjacency_address_length{YType::uint32, "adjacency-address-length"},
    adjacency_interface{YType::uint32, "adjacency-interface"},
    afi_fib_protocol_type{YType::uint32, "afi-fib-protocol-type"},
    aib_l3_address{YType::str, "aib-l3-address"},
    bgp_attribute_id{YType::uint32, "bgp-attribute-id"},
    bgp_attribute_next_hop_as{YType::uint32, "bgp-attribute-next-hop-as"},
    bgp_attribute_origin_as{YType::uint32, "bgp-attribute-origin-as"},
    bgp_local_attribute_id{YType::uint32, "bgp-local-attribute-id"},
    bytes_through_fib_entry{YType::uint64, "bytes-through-fib-entry"},
    com_string{YType::str, "com-string"},
    detailed_prefix_length{YType::uint32, "detailed-prefix-length"},
    extcom_string{YType::str, "extcom-string"},
    extended_community{YType::uint32, "extended-community"},
    fast_adjacency_flag{YType::boolean, "fast-adjacency-flag"},
    fib_entry_adjacency_address{YType::str, "fib-entry-adjacency-address"},
    fib_entry_adjacency_interface{YType::uint32, "fib-entry-adjacency-interface"},
    fib_entry_adjacency_type{YType::enumeration, "fib-entry-adjacency-type"},
    fib_entry_version{YType::uint32, "fib-entry-version"},
    fib_protocol_type{YType::uint32, "fib-protocol-type"},
    fib_special_nh_information_type{YType::uint32, "fib-special-nh-information-type"},
    flow_tag{YType::uint8, "flow-tag"},
    forward_class{YType::uint8, "forward-class"},
    illegal_fast_adjacency_flag{YType::boolean, "illegal-fast-adjacency-flag"},
    ldi_time_of_last_update_in_msec{YType::uint64, "ldi-time-of-last-update-in-msec"},
    load_sharing_type{YType::enumeration, "load-sharing-type"},
    lwldi_time_of_last_update_in_msec{YType::uint64, "lwldi-time-of-last-update-in-msec"},
    mpls_fec{YType::uint32, "mpls-fec"},
    packets_through_fib_entry{YType::uint64, "packets-through-fib-entry"},
    path_string{YType::str, "path-string"},
    per_prefix_accounting{YType::uint8, "per-prefix-accounting"},
    pl_time_of_last_update_in_msec{YType::uint64, "pl-time-of-last-update-in-msec"},
    pl_time_stamp_type{YType::uint32, "pl-time-stamp-type"},
    precedence_forpackets{YType::uint8, "precedence-forpackets"},
    prefix_protocol{YType::uint32, "prefix-protocol"},
    qos_group{YType::uint32, "qos-group"},
    qppb_qos_group_and_ip_precedence{YType::uint32, "qppb-qos-group-and-ip-precedence"},
    remote_adjacency_flag{YType::boolean, "remote-adjacency-flag"},
    switch_compontent_id{YType::uint32, "switch-compontent-id"},
    traffic_index_for_packets{YType::uint8, "traffic-index-for-packets"}
    	,
    loadshare_information(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation>())
{
    loadshare_information->parent = this;
    children["loadshare-information"] = loadshare_information;

    yang_name = "detail-fib-entry-information"; yang_parent_name = "ip-prefix-brief";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::~DetailFibEntryInformation()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::has_data() const
{
    return adjacency_address_length.is_set
	|| adjacency_interface.is_set
	|| afi_fib_protocol_type.is_set
	|| aib_l3_address.is_set
	|| bgp_attribute_id.is_set
	|| bgp_attribute_next_hop_as.is_set
	|| bgp_attribute_origin_as.is_set
	|| bgp_local_attribute_id.is_set
	|| bytes_through_fib_entry.is_set
	|| com_string.is_set
	|| detailed_prefix_length.is_set
	|| extcom_string.is_set
	|| extended_community.is_set
	|| fast_adjacency_flag.is_set
	|| fib_entry_adjacency_address.is_set
	|| fib_entry_adjacency_interface.is_set
	|| fib_entry_adjacency_type.is_set
	|| fib_entry_version.is_set
	|| fib_protocol_type.is_set
	|| fib_special_nh_information_type.is_set
	|| flow_tag.is_set
	|| forward_class.is_set
	|| illegal_fast_adjacency_flag.is_set
	|| ldi_time_of_last_update_in_msec.is_set
	|| load_sharing_type.is_set
	|| lwldi_time_of_last_update_in_msec.is_set
	|| mpls_fec.is_set
	|| packets_through_fib_entry.is_set
	|| path_string.is_set
	|| per_prefix_accounting.is_set
	|| pl_time_of_last_update_in_msec.is_set
	|| pl_time_stamp_type.is_set
	|| precedence_forpackets.is_set
	|| prefix_protocol.is_set
	|| qos_group.is_set
	|| qppb_qos_group_and_ip_precedence.is_set
	|| remote_adjacency_flag.is_set
	|| switch_compontent_id.is_set
	|| traffic_index_for_packets.is_set
	|| (loadshare_information !=  nullptr && loadshare_information->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(adjacency_address_length.operation)
	|| is_set(adjacency_interface.operation)
	|| is_set(afi_fib_protocol_type.operation)
	|| is_set(aib_l3_address.operation)
	|| is_set(bgp_attribute_id.operation)
	|| is_set(bgp_attribute_next_hop_as.operation)
	|| is_set(bgp_attribute_origin_as.operation)
	|| is_set(bgp_local_attribute_id.operation)
	|| is_set(bytes_through_fib_entry.operation)
	|| is_set(com_string.operation)
	|| is_set(detailed_prefix_length.operation)
	|| is_set(extcom_string.operation)
	|| is_set(extended_community.operation)
	|| is_set(fast_adjacency_flag.operation)
	|| is_set(fib_entry_adjacency_address.operation)
	|| is_set(fib_entry_adjacency_interface.operation)
	|| is_set(fib_entry_adjacency_type.operation)
	|| is_set(fib_entry_version.operation)
	|| is_set(fib_protocol_type.operation)
	|| is_set(fib_special_nh_information_type.operation)
	|| is_set(flow_tag.operation)
	|| is_set(forward_class.operation)
	|| is_set(illegal_fast_adjacency_flag.operation)
	|| is_set(ldi_time_of_last_update_in_msec.operation)
	|| is_set(load_sharing_type.operation)
	|| is_set(lwldi_time_of_last_update_in_msec.operation)
	|| is_set(mpls_fec.operation)
	|| is_set(packets_through_fib_entry.operation)
	|| is_set(path_string.operation)
	|| is_set(per_prefix_accounting.operation)
	|| is_set(pl_time_of_last_update_in_msec.operation)
	|| is_set(pl_time_stamp_type.operation)
	|| is_set(precedence_forpackets.operation)
	|| is_set(prefix_protocol.operation)
	|| is_set(qos_group.operation)
	|| is_set(qppb_qos_group_and_ip_precedence.operation)
	|| is_set(remote_adjacency_flag.operation)
	|| is_set(switch_compontent_id.operation)
	|| is_set(traffic_index_for_packets.operation)
	|| (loadshare_information !=  nullptr && loadshare_information->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-fib-entry-information";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DetailFibEntryInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_address_length.is_set || is_set(adjacency_address_length.operation)) leaf_name_data.push_back(adjacency_address_length.get_name_leafdata());
    if (adjacency_interface.is_set || is_set(adjacency_interface.operation)) leaf_name_data.push_back(adjacency_interface.get_name_leafdata());
    if (afi_fib_protocol_type.is_set || is_set(afi_fib_protocol_type.operation)) leaf_name_data.push_back(afi_fib_protocol_type.get_name_leafdata());
    if (aib_l3_address.is_set || is_set(aib_l3_address.operation)) leaf_name_data.push_back(aib_l3_address.get_name_leafdata());
    if (bgp_attribute_id.is_set || is_set(bgp_attribute_id.operation)) leaf_name_data.push_back(bgp_attribute_id.get_name_leafdata());
    if (bgp_attribute_next_hop_as.is_set || is_set(bgp_attribute_next_hop_as.operation)) leaf_name_data.push_back(bgp_attribute_next_hop_as.get_name_leafdata());
    if (bgp_attribute_origin_as.is_set || is_set(bgp_attribute_origin_as.operation)) leaf_name_data.push_back(bgp_attribute_origin_as.get_name_leafdata());
    if (bgp_local_attribute_id.is_set || is_set(bgp_local_attribute_id.operation)) leaf_name_data.push_back(bgp_local_attribute_id.get_name_leafdata());
    if (bytes_through_fib_entry.is_set || is_set(bytes_through_fib_entry.operation)) leaf_name_data.push_back(bytes_through_fib_entry.get_name_leafdata());
    if (com_string.is_set || is_set(com_string.operation)) leaf_name_data.push_back(com_string.get_name_leafdata());
    if (detailed_prefix_length.is_set || is_set(detailed_prefix_length.operation)) leaf_name_data.push_back(detailed_prefix_length.get_name_leafdata());
    if (extcom_string.is_set || is_set(extcom_string.operation)) leaf_name_data.push_back(extcom_string.get_name_leafdata());
    if (extended_community.is_set || is_set(extended_community.operation)) leaf_name_data.push_back(extended_community.get_name_leafdata());
    if (fast_adjacency_flag.is_set || is_set(fast_adjacency_flag.operation)) leaf_name_data.push_back(fast_adjacency_flag.get_name_leafdata());
    if (fib_entry_adjacency_address.is_set || is_set(fib_entry_adjacency_address.operation)) leaf_name_data.push_back(fib_entry_adjacency_address.get_name_leafdata());
    if (fib_entry_adjacency_interface.is_set || is_set(fib_entry_adjacency_interface.operation)) leaf_name_data.push_back(fib_entry_adjacency_interface.get_name_leafdata());
    if (fib_entry_adjacency_type.is_set || is_set(fib_entry_adjacency_type.operation)) leaf_name_data.push_back(fib_entry_adjacency_type.get_name_leafdata());
    if (fib_entry_version.is_set || is_set(fib_entry_version.operation)) leaf_name_data.push_back(fib_entry_version.get_name_leafdata());
    if (fib_protocol_type.is_set || is_set(fib_protocol_type.operation)) leaf_name_data.push_back(fib_protocol_type.get_name_leafdata());
    if (fib_special_nh_information_type.is_set || is_set(fib_special_nh_information_type.operation)) leaf_name_data.push_back(fib_special_nh_information_type.get_name_leafdata());
    if (flow_tag.is_set || is_set(flow_tag.operation)) leaf_name_data.push_back(flow_tag.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (illegal_fast_adjacency_flag.is_set || is_set(illegal_fast_adjacency_flag.operation)) leaf_name_data.push_back(illegal_fast_adjacency_flag.get_name_leafdata());
    if (ldi_time_of_last_update_in_msec.is_set || is_set(ldi_time_of_last_update_in_msec.operation)) leaf_name_data.push_back(ldi_time_of_last_update_in_msec.get_name_leafdata());
    if (load_sharing_type.is_set || is_set(load_sharing_type.operation)) leaf_name_data.push_back(load_sharing_type.get_name_leafdata());
    if (lwldi_time_of_last_update_in_msec.is_set || is_set(lwldi_time_of_last_update_in_msec.operation)) leaf_name_data.push_back(lwldi_time_of_last_update_in_msec.get_name_leafdata());
    if (mpls_fec.is_set || is_set(mpls_fec.operation)) leaf_name_data.push_back(mpls_fec.get_name_leafdata());
    if (packets_through_fib_entry.is_set || is_set(packets_through_fib_entry.operation)) leaf_name_data.push_back(packets_through_fib_entry.get_name_leafdata());
    if (path_string.is_set || is_set(path_string.operation)) leaf_name_data.push_back(path_string.get_name_leafdata());
    if (per_prefix_accounting.is_set || is_set(per_prefix_accounting.operation)) leaf_name_data.push_back(per_prefix_accounting.get_name_leafdata());
    if (pl_time_of_last_update_in_msec.is_set || is_set(pl_time_of_last_update_in_msec.operation)) leaf_name_data.push_back(pl_time_of_last_update_in_msec.get_name_leafdata());
    if (pl_time_stamp_type.is_set || is_set(pl_time_stamp_type.operation)) leaf_name_data.push_back(pl_time_stamp_type.get_name_leafdata());
    if (precedence_forpackets.is_set || is_set(precedence_forpackets.operation)) leaf_name_data.push_back(precedence_forpackets.get_name_leafdata());
    if (prefix_protocol.is_set || is_set(prefix_protocol.operation)) leaf_name_data.push_back(prefix_protocol.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (qppb_qos_group_and_ip_precedence.is_set || is_set(qppb_qos_group_and_ip_precedence.operation)) leaf_name_data.push_back(qppb_qos_group_and_ip_precedence.get_name_leafdata());
    if (remote_adjacency_flag.is_set || is_set(remote_adjacency_flag.operation)) leaf_name_data.push_back(remote_adjacency_flag.get_name_leafdata());
    if (switch_compontent_id.is_set || is_set(switch_compontent_id.operation)) leaf_name_data.push_back(switch_compontent_id.get_name_leafdata());
    if (traffic_index_for_packets.is_set || is_set(traffic_index_for_packets.operation)) leaf_name_data.push_back(traffic_index_for_packets.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "loadshare-information")
    {
        if(loadshare_information != nullptr)
        {
            children["loadshare-information"] = loadshare_information;
        }
        else
        {
            loadshare_information = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation>();
            loadshare_information->parent = this;
            children["loadshare-information"] = loadshare_information;
        }
        return children.at("loadshare-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::get_children()
{
    if(children.find("loadshare-information") == children.end())
    {
        if(loadshare_information != nullptr)
        {
            children["loadshare-information"] = loadshare_information;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-address-length")
    {
        adjacency_address_length = value;
    }
    if(value_path == "adjacency-interface")
    {
        adjacency_interface = value;
    }
    if(value_path == "afi-fib-protocol-type")
    {
        afi_fib_protocol_type = value;
    }
    if(value_path == "aib-l3-address")
    {
        aib_l3_address = value;
    }
    if(value_path == "bgp-attribute-id")
    {
        bgp_attribute_id = value;
    }
    if(value_path == "bgp-attribute-next-hop-as")
    {
        bgp_attribute_next_hop_as = value;
    }
    if(value_path == "bgp-attribute-origin-as")
    {
        bgp_attribute_origin_as = value;
    }
    if(value_path == "bgp-local-attribute-id")
    {
        bgp_local_attribute_id = value;
    }
    if(value_path == "bytes-through-fib-entry")
    {
        bytes_through_fib_entry = value;
    }
    if(value_path == "com-string")
    {
        com_string = value;
    }
    if(value_path == "detailed-prefix-length")
    {
        detailed_prefix_length = value;
    }
    if(value_path == "extcom-string")
    {
        extcom_string = value;
    }
    if(value_path == "extended-community")
    {
        extended_community = value;
    }
    if(value_path == "fast-adjacency-flag")
    {
        fast_adjacency_flag = value;
    }
    if(value_path == "fib-entry-adjacency-address")
    {
        fib_entry_adjacency_address = value;
    }
    if(value_path == "fib-entry-adjacency-interface")
    {
        fib_entry_adjacency_interface = value;
    }
    if(value_path == "fib-entry-adjacency-type")
    {
        fib_entry_adjacency_type = value;
    }
    if(value_path == "fib-entry-version")
    {
        fib_entry_version = value;
    }
    if(value_path == "fib-protocol-type")
    {
        fib_protocol_type = value;
    }
    if(value_path == "fib-special-nh-information-type")
    {
        fib_special_nh_information_type = value;
    }
    if(value_path == "flow-tag")
    {
        flow_tag = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "illegal-fast-adjacency-flag")
    {
        illegal_fast_adjacency_flag = value;
    }
    if(value_path == "ldi-time-of-last-update-in-msec")
    {
        ldi_time_of_last_update_in_msec = value;
    }
    if(value_path == "load-sharing-type")
    {
        load_sharing_type = value;
    }
    if(value_path == "lwldi-time-of-last-update-in-msec")
    {
        lwldi_time_of_last_update_in_msec = value;
    }
    if(value_path == "mpls-fec")
    {
        mpls_fec = value;
    }
    if(value_path == "packets-through-fib-entry")
    {
        packets_through_fib_entry = value;
    }
    if(value_path == "path-string")
    {
        path_string = value;
    }
    if(value_path == "per-prefix-accounting")
    {
        per_prefix_accounting = value;
    }
    if(value_path == "pl-time-of-last-update-in-msec")
    {
        pl_time_of_last_update_in_msec = value;
    }
    if(value_path == "pl-time-stamp-type")
    {
        pl_time_stamp_type = value;
    }
    if(value_path == "precedence-forpackets")
    {
        precedence_forpackets = value;
    }
    if(value_path == "prefix-protocol")
    {
        prefix_protocol = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "qppb-qos-group-and-ip-precedence")
    {
        qppb_qos_group_and_ip_precedence = value;
    }
    if(value_path == "remote-adjacency-flag")
    {
        remote_adjacency_flag = value;
    }
    if(value_path == "switch-compontent-id")
    {
        switch_compontent_id = value;
    }
    if(value_path == "traffic-index-for-packets")
    {
        traffic_index_for_packets = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadshareInformation()
    :
    bytes_through_load_information{YType::uint64, "bytes-through-load-information"},
    is_owner{YType::boolean, "is-owner"},
    load_information_owner_deleted_flag{YType::boolean, "load-information-owner-deleted-flag"},
    load_information_reference_count{YType::uint16, "load-information-reference-count"},
    loadinfo_sanity_flag{YType::boolean, "loadinfo-sanity-flag"},
    mask_length_of_owner{YType::uint32, "mask-length-of-owner"},
    packets_through_load_information{YType::uint64, "packets-through-load-information"},
    per_dest_load_sharing_flag{YType::boolean, "per-dest-load-sharing-flag"},
    prefix_of_owner{YType::uint32, "prefix-of-owner"},
    total_bytes_through_load_information{YType::uint64, "total-bytes-through-load-information"},
    total_packets_through_load_information{YType::uint64, "total-packets-through-load-information"}
    	,
    load_informtion_internal_data(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData>())
{
    load_informtion_internal_data->parent = this;
    children["load-informtion-internal-data"] = load_informtion_internal_data;

    yang_name = "loadshare-information"; yang_parent_name = "detail-fib-entry-information";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::~LoadshareInformation()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::has_data() const
{
    return bytes_through_load_information.is_set
	|| is_owner.is_set
	|| load_information_owner_deleted_flag.is_set
	|| load_information_reference_count.is_set
	|| loadinfo_sanity_flag.is_set
	|| mask_length_of_owner.is_set
	|| packets_through_load_information.is_set
	|| per_dest_load_sharing_flag.is_set
	|| prefix_of_owner.is_set
	|| total_bytes_through_load_information.is_set
	|| total_packets_through_load_information.is_set
	|| (load_informtion_internal_data !=  nullptr && load_informtion_internal_data->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes_through_load_information.operation)
	|| is_set(is_owner.operation)
	|| is_set(load_information_owner_deleted_flag.operation)
	|| is_set(load_information_reference_count.operation)
	|| is_set(loadinfo_sanity_flag.operation)
	|| is_set(mask_length_of_owner.operation)
	|| is_set(packets_through_load_information.operation)
	|| is_set(per_dest_load_sharing_flag.operation)
	|| is_set(prefix_of_owner.operation)
	|| is_set(total_bytes_through_load_information.operation)
	|| is_set(total_packets_through_load_information.operation)
	|| (load_informtion_internal_data !=  nullptr && load_informtion_internal_data->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "loadshare-information";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadshareInformation' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes_through_load_information.is_set || is_set(bytes_through_load_information.operation)) leaf_name_data.push_back(bytes_through_load_information.get_name_leafdata());
    if (is_owner.is_set || is_set(is_owner.operation)) leaf_name_data.push_back(is_owner.get_name_leafdata());
    if (load_information_owner_deleted_flag.is_set || is_set(load_information_owner_deleted_flag.operation)) leaf_name_data.push_back(load_information_owner_deleted_flag.get_name_leafdata());
    if (load_information_reference_count.is_set || is_set(load_information_reference_count.operation)) leaf_name_data.push_back(load_information_reference_count.get_name_leafdata());
    if (loadinfo_sanity_flag.is_set || is_set(loadinfo_sanity_flag.operation)) leaf_name_data.push_back(loadinfo_sanity_flag.get_name_leafdata());
    if (mask_length_of_owner.is_set || is_set(mask_length_of_owner.operation)) leaf_name_data.push_back(mask_length_of_owner.get_name_leafdata());
    if (packets_through_load_information.is_set || is_set(packets_through_load_information.operation)) leaf_name_data.push_back(packets_through_load_information.get_name_leafdata());
    if (per_dest_load_sharing_flag.is_set || is_set(per_dest_load_sharing_flag.operation)) leaf_name_data.push_back(per_dest_load_sharing_flag.get_name_leafdata());
    if (prefix_of_owner.is_set || is_set(prefix_of_owner.operation)) leaf_name_data.push_back(prefix_of_owner.get_name_leafdata());
    if (total_bytes_through_load_information.is_set || is_set(total_bytes_through_load_information.operation)) leaf_name_data.push_back(total_bytes_through_load_information.get_name_leafdata());
    if (total_packets_through_load_information.is_set || is_set(total_packets_through_load_information.operation)) leaf_name_data.push_back(total_packets_through_load_information.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-informtion-internal-data")
    {
        if(load_informtion_internal_data != nullptr)
        {
            children["load-informtion-internal-data"] = load_informtion_internal_data;
        }
        else
        {
            load_informtion_internal_data = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData>();
            load_informtion_internal_data->parent = this;
            children["load-informtion-internal-data"] = load_informtion_internal_data;
        }
        return children.at("load-informtion-internal-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::get_children()
{
    if(children.find("load-informtion-internal-data") == children.end())
    {
        if(load_informtion_internal_data != nullptr)
        {
            children["load-informtion-internal-data"] = load_informtion_internal_data;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes-through-load-information")
    {
        bytes_through_load_information = value;
    }
    if(value_path == "is-owner")
    {
        is_owner = value;
    }
    if(value_path == "load-information-owner-deleted-flag")
    {
        load_information_owner_deleted_flag = value;
    }
    if(value_path == "load-information-reference-count")
    {
        load_information_reference_count = value;
    }
    if(value_path == "loadinfo-sanity-flag")
    {
        loadinfo_sanity_flag = value;
    }
    if(value_path == "mask-length-of-owner")
    {
        mask_length_of_owner = value;
    }
    if(value_path == "packets-through-load-information")
    {
        packets_through_load_information = value;
    }
    if(value_path == "per-dest-load-sharing-flag")
    {
        per_dest_load_sharing_flag = value;
    }
    if(value_path == "prefix-of-owner")
    {
        prefix_of_owner = value;
    }
    if(value_path == "total-bytes-through-load-information")
    {
        total_bytes_through_load_information = value;
    }
    if(value_path == "total-packets-through-load-information")
    {
        total_packets_through_load_information = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::LoadInformtionInternalData()
    :
    interface_handle{YType::str, "interface-handle"},
    is_pbts_info_valid{YType::boolean, "is-pbts-info-valid"},
    ldi_next_hop_buckets{YType::uint8, "ldi-next-hop-buckets"},
    level_ofldis{YType::uint8, "level-ofldis"},
    maximum_index_arrays{YType::uint32, "maximum-index-arrays"},
    maximum_slots{YType::uint32, "maximum-slots"},
    normalized_weights{YType::str, "normalized-weights"},
    number_of_ldis{YType::uint8, "number-of-ldis"},
    path_indices{YType::str, "path-indices"},
    path_ldi_numbers{YType::str, "path-ldi-numbers"},
    pbts_class_num_paths{YType::str, "pbts-class-num-paths"},
    pbts_class_offset{YType::str, "pbts-class-offset"},
    pbts_fallback_mapped_class{YType::str, "pbts-fallback-mapped-class"},
    platform_hardware_information{YType::str, "platform-hardware-information"},
    round_robin_disable{YType::boolean, "round-robin-disable"},
    sanity_flag{YType::boolean, "sanity-flag"},
    tunnel_class_value{YType::str, "tunnel-class-value"},
    weights_of_path{YType::uint32, "weights-of-path"}
{
    yang_name = "load-informtion-internal-data"; yang_parent_name = "loadshare-information";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::~LoadInformtionInternalData()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::has_data() const
{
    for (std::size_t index=0; index<adjacency_address.size(); index++)
    {
        if(adjacency_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pbts_class_is_fallback_mapped.size(); index++)
    {
        if(pbts_class_is_fallback_mapped[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pbts_fallback_to_drop.size(); index++)
    {
        if(pbts_fallback_to_drop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel_is_forward_class.size(); index++)
    {
        if(tunnel_is_forward_class[index]->has_data())
            return true;
    }
    for (auto const & leaf : interface_handle.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : sanity_flag.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : weights_of_path.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return is_pbts_info_valid.is_set
	|| ldi_next_hop_buckets.is_set
	|| level_ofldis.is_set
	|| maximum_index_arrays.is_set
	|| maximum_slots.is_set
	|| normalized_weights.is_set
	|| number_of_ldis.is_set
	|| path_indices.is_set
	|| path_ldi_numbers.is_set
	|| pbts_class_num_paths.is_set
	|| pbts_class_offset.is_set
	|| pbts_fallback_mapped_class.is_set
	|| platform_hardware_information.is_set
	|| round_robin_disable.is_set
	|| tunnel_class_value.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::has_operation() const
{
    for (std::size_t index=0; index<adjacency_address.size(); index++)
    {
        if(adjacency_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pbts_class_is_fallback_mapped.size(); index++)
    {
        if(pbts_class_is_fallback_mapped[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pbts_fallback_to_drop.size(); index++)
    {
        if(pbts_fallback_to_drop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel_is_forward_class.size(); index++)
    {
        if(tunnel_is_forward_class[index]->has_operation())
            return true;
    }
    for (auto const & leaf : interface_handle.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : sanity_flag.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : weights_of_path.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_handle.operation)
	|| is_set(is_pbts_info_valid.operation)
	|| is_set(ldi_next_hop_buckets.operation)
	|| is_set(level_ofldis.operation)
	|| is_set(maximum_index_arrays.operation)
	|| is_set(maximum_slots.operation)
	|| is_set(normalized_weights.operation)
	|| is_set(number_of_ldis.operation)
	|| is_set(path_indices.operation)
	|| is_set(path_ldi_numbers.operation)
	|| is_set(pbts_class_num_paths.operation)
	|| is_set(pbts_class_offset.operation)
	|| is_set(pbts_fallback_mapped_class.operation)
	|| is_set(platform_hardware_information.operation)
	|| is_set(round_robin_disable.operation)
	|| is_set(sanity_flag.operation)
	|| is_set(tunnel_class_value.operation)
	|| is_set(weights_of_path.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-informtion-internal-data";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadInformtionInternalData' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_pbts_info_valid.is_set || is_set(is_pbts_info_valid.operation)) leaf_name_data.push_back(is_pbts_info_valid.get_name_leafdata());
    if (ldi_next_hop_buckets.is_set || is_set(ldi_next_hop_buckets.operation)) leaf_name_data.push_back(ldi_next_hop_buckets.get_name_leafdata());
    if (level_ofldis.is_set || is_set(level_ofldis.operation)) leaf_name_data.push_back(level_ofldis.get_name_leafdata());
    if (maximum_index_arrays.is_set || is_set(maximum_index_arrays.operation)) leaf_name_data.push_back(maximum_index_arrays.get_name_leafdata());
    if (maximum_slots.is_set || is_set(maximum_slots.operation)) leaf_name_data.push_back(maximum_slots.get_name_leafdata());
    if (normalized_weights.is_set || is_set(normalized_weights.operation)) leaf_name_data.push_back(normalized_weights.get_name_leafdata());
    if (number_of_ldis.is_set || is_set(number_of_ldis.operation)) leaf_name_data.push_back(number_of_ldis.get_name_leafdata());
    if (path_indices.is_set || is_set(path_indices.operation)) leaf_name_data.push_back(path_indices.get_name_leafdata());
    if (path_ldi_numbers.is_set || is_set(path_ldi_numbers.operation)) leaf_name_data.push_back(path_ldi_numbers.get_name_leafdata());
    if (pbts_class_num_paths.is_set || is_set(pbts_class_num_paths.operation)) leaf_name_data.push_back(pbts_class_num_paths.get_name_leafdata());
    if (pbts_class_offset.is_set || is_set(pbts_class_offset.operation)) leaf_name_data.push_back(pbts_class_offset.get_name_leafdata());
    if (pbts_fallback_mapped_class.is_set || is_set(pbts_fallback_mapped_class.operation)) leaf_name_data.push_back(pbts_fallback_mapped_class.get_name_leafdata());
    if (platform_hardware_information.is_set || is_set(platform_hardware_information.operation)) leaf_name_data.push_back(platform_hardware_information.get_name_leafdata());
    if (round_robin_disable.is_set || is_set(round_robin_disable.operation)) leaf_name_data.push_back(round_robin_disable.get_name_leafdata());
    if (tunnel_class_value.is_set || is_set(tunnel_class_value.operation)) leaf_name_data.push_back(tunnel_class_value.get_name_leafdata());

    auto interface_handle_name_datas = interface_handle.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), interface_handle_name_datas.begin(), interface_handle_name_datas.end());
    auto sanity_flag_name_datas = sanity_flag.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sanity_flag_name_datas.begin(), sanity_flag_name_datas.end());
    auto weights_of_path_name_datas = weights_of_path.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), weights_of_path_name_datas.begin(), weights_of_path_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-address")
    {
        for(auto const & c : adjacency_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress>();
        c->parent = this;
        adjacency_address.push_back(std::move(c));
        children[segment_path] = adjacency_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "pbts-class-is-fallback-mapped")
    {
        for(auto const & c : pbts_class_is_fallback_mapped)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped>();
        c->parent = this;
        pbts_class_is_fallback_mapped.push_back(std::move(c));
        children[segment_path] = pbts_class_is_fallback_mapped.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "pbts-fallback-to-drop")
    {
        for(auto const & c : pbts_fallback_to_drop)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop>();
        c->parent = this;
        pbts_fallback_to_drop.push_back(std::move(c));
        children[segment_path] = pbts_fallback_to_drop.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel-is-forward-class")
    {
        for(auto const & c : tunnel_is_forward_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass>();
        c->parent = this;
        tunnel_is_forward_class.push_back(std::move(c));
        children[segment_path] = tunnel_is_forward_class.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::get_children()
{
    for (auto const & c : adjacency_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : pbts_class_is_fallback_mapped)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : pbts_fallback_to_drop)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : tunnel_is_forward_class)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-handle")
    {
        interface_handle.append(value);
    }
    if(value_path == "is-pbts-info-valid")
    {
        is_pbts_info_valid = value;
    }
    if(value_path == "ldi-next-hop-buckets")
    {
        ldi_next_hop_buckets = value;
    }
    if(value_path == "level-ofldis")
    {
        level_ofldis = value;
    }
    if(value_path == "maximum-index-arrays")
    {
        maximum_index_arrays = value;
    }
    if(value_path == "maximum-slots")
    {
        maximum_slots = value;
    }
    if(value_path == "normalized-weights")
    {
        normalized_weights = value;
    }
    if(value_path == "number-of-ldis")
    {
        number_of_ldis = value;
    }
    if(value_path == "path-indices")
    {
        path_indices = value;
    }
    if(value_path == "path-ldi-numbers")
    {
        path_ldi_numbers = value;
    }
    if(value_path == "pbts-class-num-paths")
    {
        pbts_class_num_paths = value;
    }
    if(value_path == "pbts-class-offset")
    {
        pbts_class_offset = value;
    }
    if(value_path == "pbts-fallback-mapped-class")
    {
        pbts_fallback_mapped_class = value;
    }
    if(value_path == "platform-hardware-information")
    {
        platform_hardware_information = value;
    }
    if(value_path == "round-robin-disable")
    {
        round_robin_disable = value;
    }
    if(value_path == "sanity-flag")
    {
        sanity_flag.append(value);
    }
    if(value_path == "tunnel-class-value")
    {
        tunnel_class_value = value;
    }
    if(value_path == "weights-of-path")
    {
        weights_of_path.append(value);
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::AdjacencyAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "adjacency-address"; yang_parent_name = "load-informtion-internal-data";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::~AdjacencyAddress()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::has_data() const
{
    return address.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-address";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencyAddress' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::AdjacencyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::PbtsClassIsFallbackMapped()
    :
    entry{YType::boolean, "entry"}
{
    yang_name = "pbts-class-is-fallback-mapped"; yang_parent_name = "load-informtion-internal-data";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::~PbtsClassIsFallbackMapped()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbts-class-is-fallback-mapped";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbtsClassIsFallbackMapped' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsClassIsFallbackMapped::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::PbtsFallbackToDrop()
    :
    entry{YType::boolean, "entry"}
{
    yang_name = "pbts-fallback-to-drop"; yang_parent_name = "load-informtion-internal-data";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::~PbtsFallbackToDrop()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbts-fallback-to-drop";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PbtsFallbackToDrop' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::PbtsFallbackToDrop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::TunnelIsForwardClass()
    :
    entry{YType::boolean, "entry"}
{
    yang_name = "tunnel-is-forward-class"; yang_parent_name = "load-informtion-internal-data";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::~TunnelIsForwardClass()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-is-forward-class";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TunnelIsForwardClass' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::DetailFibEntryInformation::LoadshareInformation::LoadInformtionInternalData::TunnelIsForwardClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibEntryPath()
{
    yang_name = "fib-entry-path"; yang_parent_name = "ip-prefix-brief";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::~FibEntryPath()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::has_data() const
{
    for (std::size_t index=0; index<fib_sh_tbl_path.size(); index++)
    {
        if(fib_sh_tbl_path[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::has_operation() const
{
    for (std::size_t index=0; index<fib_sh_tbl_path.size(); index++)
    {
        if(fib_sh_tbl_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-entry-path";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FibEntryPath' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fib-sh-tbl-path")
    {
        for(auto const & c : fib_sh_tbl_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath>();
        c->parent = this;
        fib_sh_tbl_path.push_back(std::move(c));
        children[segment_path] = fib_sh_tbl_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::get_children()
{
    for (auto const & c : fib_sh_tbl_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::FibShTblPath()
    :
    attached_path{YType::boolean, "attached-path"},
    backup_index{YType::uint8, "backup-index"},
    backup_path{YType::boolean, "backup-path"},
    best_external_path{YType::boolean, "best-external-path"},
    brief_interface_handle{YType::str, "brief-interface-handle"},
    brief_lfa_protection_type{YType::enumeration, "brief-lfa-protection-type"},
    brief_next_hop_prefix{YType::str, "brief-next-hop-prefix"},
    brief_pnode_address{YType::str, "brief-pnode-address"},
    brief_qnode_address{YType::str, "brief-qnode-address"},
    hardware_information{YType::str, "hardware-information"},
    next_hop_index{YType::uint32, "next-hop-index"},
    packets_received_path{YType::boolean, "packets-received-path"},
    parent_interface_handle{YType::str, "parent-interface-handle"},
    path_dlb{YType::boolean, "path-dlb"},
    path_flags{YType::uint32, "path-flags"},
    path_index{YType::uint8, "path-index"},
    path_info_flags{YType::uint16, "path-info-flags"},
    protect_ignore{YType::boolean, "protect-ignore"},
    recursionvia_len{YType::uint8, "recursionvia-len"},
    recursive_path{YType::boolean, "recursive-path"},
    resolved_path{YType::boolean, "resolved-path"},
    via_label_to_recurse{YType::uint32, "via-label-to-recurse"}
    	,
    more_detail_about_path(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath>())
	,mpls_information_for_path(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath>())
{
    more_detail_about_path->parent = this;
    children["more-detail-about-path"] = more_detail_about_path;

    mpls_information_for_path->parent = this;
    children["mpls-information-for-path"] = mpls_information_for_path;

    yang_name = "fib-sh-tbl-path"; yang_parent_name = "fib-entry-path";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::~FibShTblPath()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::has_data() const
{
    return attached_path.is_set
	|| backup_index.is_set
	|| backup_path.is_set
	|| best_external_path.is_set
	|| brief_interface_handle.is_set
	|| brief_lfa_protection_type.is_set
	|| brief_next_hop_prefix.is_set
	|| brief_pnode_address.is_set
	|| brief_qnode_address.is_set
	|| hardware_information.is_set
	|| next_hop_index.is_set
	|| packets_received_path.is_set
	|| parent_interface_handle.is_set
	|| path_dlb.is_set
	|| path_flags.is_set
	|| path_index.is_set
	|| path_info_flags.is_set
	|| protect_ignore.is_set
	|| recursionvia_len.is_set
	|| recursive_path.is_set
	|| resolved_path.is_set
	|| via_label_to_recurse.is_set
	|| (more_detail_about_path !=  nullptr && more_detail_about_path->has_data())
	|| (mpls_information_for_path !=  nullptr && mpls_information_for_path->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::has_operation() const
{
    return is_set(operation)
	|| is_set(attached_path.operation)
	|| is_set(backup_index.operation)
	|| is_set(backup_path.operation)
	|| is_set(best_external_path.operation)
	|| is_set(brief_interface_handle.operation)
	|| is_set(brief_lfa_protection_type.operation)
	|| is_set(brief_next_hop_prefix.operation)
	|| is_set(brief_pnode_address.operation)
	|| is_set(brief_qnode_address.operation)
	|| is_set(hardware_information.operation)
	|| is_set(next_hop_index.operation)
	|| is_set(packets_received_path.operation)
	|| is_set(parent_interface_handle.operation)
	|| is_set(path_dlb.operation)
	|| is_set(path_flags.operation)
	|| is_set(path_index.operation)
	|| is_set(path_info_flags.operation)
	|| is_set(protect_ignore.operation)
	|| is_set(recursionvia_len.operation)
	|| is_set(recursive_path.operation)
	|| is_set(resolved_path.operation)
	|| is_set(via_label_to_recurse.operation)
	|| (more_detail_about_path !=  nullptr && more_detail_about_path->has_operation())
	|| (mpls_information_for_path !=  nullptr && mpls_information_for_path->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-sh-tbl-path";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FibShTblPath' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attached_path.is_set || is_set(attached_path.operation)) leaf_name_data.push_back(attached_path.get_name_leafdata());
    if (backup_index.is_set || is_set(backup_index.operation)) leaf_name_data.push_back(backup_index.get_name_leafdata());
    if (backup_path.is_set || is_set(backup_path.operation)) leaf_name_data.push_back(backup_path.get_name_leafdata());
    if (best_external_path.is_set || is_set(best_external_path.operation)) leaf_name_data.push_back(best_external_path.get_name_leafdata());
    if (brief_interface_handle.is_set || is_set(brief_interface_handle.operation)) leaf_name_data.push_back(brief_interface_handle.get_name_leafdata());
    if (brief_lfa_protection_type.is_set || is_set(brief_lfa_protection_type.operation)) leaf_name_data.push_back(brief_lfa_protection_type.get_name_leafdata());
    if (brief_next_hop_prefix.is_set || is_set(brief_next_hop_prefix.operation)) leaf_name_data.push_back(brief_next_hop_prefix.get_name_leafdata());
    if (brief_pnode_address.is_set || is_set(brief_pnode_address.operation)) leaf_name_data.push_back(brief_pnode_address.get_name_leafdata());
    if (brief_qnode_address.is_set || is_set(brief_qnode_address.operation)) leaf_name_data.push_back(brief_qnode_address.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.operation)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (next_hop_index.is_set || is_set(next_hop_index.operation)) leaf_name_data.push_back(next_hop_index.get_name_leafdata());
    if (packets_received_path.is_set || is_set(packets_received_path.operation)) leaf_name_data.push_back(packets_received_path.get_name_leafdata());
    if (parent_interface_handle.is_set || is_set(parent_interface_handle.operation)) leaf_name_data.push_back(parent_interface_handle.get_name_leafdata());
    if (path_dlb.is_set || is_set(path_dlb.operation)) leaf_name_data.push_back(path_dlb.get_name_leafdata());
    if (path_flags.is_set || is_set(path_flags.operation)) leaf_name_data.push_back(path_flags.get_name_leafdata());
    if (path_index.is_set || is_set(path_index.operation)) leaf_name_data.push_back(path_index.get_name_leafdata());
    if (path_info_flags.is_set || is_set(path_info_flags.operation)) leaf_name_data.push_back(path_info_flags.get_name_leafdata());
    if (protect_ignore.is_set || is_set(protect_ignore.operation)) leaf_name_data.push_back(protect_ignore.get_name_leafdata());
    if (recursionvia_len.is_set || is_set(recursionvia_len.operation)) leaf_name_data.push_back(recursionvia_len.get_name_leafdata());
    if (recursive_path.is_set || is_set(recursive_path.operation)) leaf_name_data.push_back(recursive_path.get_name_leafdata());
    if (resolved_path.is_set || is_set(resolved_path.operation)) leaf_name_data.push_back(resolved_path.get_name_leafdata());
    if (via_label_to_recurse.is_set || is_set(via_label_to_recurse.operation)) leaf_name_data.push_back(via_label_to_recurse.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "more-detail-about-path")
    {
        if(more_detail_about_path != nullptr)
        {
            children["more-detail-about-path"] = more_detail_about_path;
        }
        else
        {
            more_detail_about_path = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath>();
            more_detail_about_path->parent = this;
            children["more-detail-about-path"] = more_detail_about_path;
        }
        return children.at("more-detail-about-path");
    }

    if(child_yang_name == "mpls-information-for-path")
    {
        if(mpls_information_for_path != nullptr)
        {
            children["mpls-information-for-path"] = mpls_information_for_path;
        }
        else
        {
            mpls_information_for_path = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath>();
            mpls_information_for_path->parent = this;
            children["mpls-information-for-path"] = mpls_information_for_path;
        }
        return children.at("mpls-information-for-path");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::get_children()
{
    if(children.find("more-detail-about-path") == children.end())
    {
        if(more_detail_about_path != nullptr)
        {
            children["more-detail-about-path"] = more_detail_about_path;
        }
    }

    if(children.find("mpls-information-for-path") == children.end())
    {
        if(mpls_information_for_path != nullptr)
        {
            children["mpls-information-for-path"] = mpls_information_for_path;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attached-path")
    {
        attached_path = value;
    }
    if(value_path == "backup-index")
    {
        backup_index = value;
    }
    if(value_path == "backup-path")
    {
        backup_path = value;
    }
    if(value_path == "best-external-path")
    {
        best_external_path = value;
    }
    if(value_path == "brief-interface-handle")
    {
        brief_interface_handle = value;
    }
    if(value_path == "brief-lfa-protection-type")
    {
        brief_lfa_protection_type = value;
    }
    if(value_path == "brief-next-hop-prefix")
    {
        brief_next_hop_prefix = value;
    }
    if(value_path == "brief-pnode-address")
    {
        brief_pnode_address = value;
    }
    if(value_path == "brief-qnode-address")
    {
        brief_qnode_address = value;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
    }
    if(value_path == "next-hop-index")
    {
        next_hop_index = value;
    }
    if(value_path == "packets-received-path")
    {
        packets_received_path = value;
    }
    if(value_path == "parent-interface-handle")
    {
        parent_interface_handle = value;
    }
    if(value_path == "path-dlb")
    {
        path_dlb = value;
    }
    if(value_path == "path-flags")
    {
        path_flags = value;
    }
    if(value_path == "path-index")
    {
        path_index = value;
    }
    if(value_path == "path-info-flags")
    {
        path_info_flags = value;
    }
    if(value_path == "protect-ignore")
    {
        protect_ignore = value;
    }
    if(value_path == "recursionvia-len")
    {
        recursionvia_len = value;
    }
    if(value_path == "recursive-path")
    {
        recursive_path = value;
    }
    if(value_path == "resolved-path")
    {
        resolved_path = value;
    }
    if(value_path == "via-label-to-recurse")
    {
        via_label_to_recurse = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::MoreDetailAboutPath()
    :
    current_path_flag{YType::boolean, "current-path-flag"},
    detail_fib_adjacency_type{YType::enumeration, "detail-fib-adjacency-type"},
    detail_next_hop_prefix{YType::str, "detail-next-hop-prefix"},
    external_adjacency{YType::boolean, "external-adjacency"},
    fib_path_nh_information_type{YType::enumeration, "fib-path-nh-information-type"},
    fib_path_nh_information_type_special{YType::enumeration, "fib-path-nh-information-type-special"},
    interface_associated_path{YType::str, "interface-associated-path"},
    ip_address_to_recurse{YType::str, "ip-address-to-recurse"},
    label_to_recurse{YType::uint32, "label-to-recurse"},
    lisprlocid{YType::uint32, "lisprlocid"},
    next_hop_interface{YType::str, "next-hop-interface"},
    next_hop_mask_length{YType::uint8, "next-hop-mask-length"},
    next_hop_vrf{YType::str, "next-hop-vrf"},
    next_prefix_length{YType::uint8, "next-prefix-length"},
    next_prefix_length2{YType::uint8, "next-prefix-length2"},
    next_prefix_recursion{YType::str, "next-prefix-recursion"},
    next_prefix_recursion2{YType::str, "next-prefix-recursion2"},
    number_of_dependencies_this_path{YType::uint32, "number-of-dependencies-this-path"},
    recurse_prefix_object{YType::boolean, "recurse-prefix-object"},
    recurse_prefix_object2{YType::boolean, "recurse-prefix-object2"},
    recursive_path_information{YType::boolean, "recursive-path-information"},
    robin_reset_value{YType::uint8, "robin-reset-value"},
    tunnel_class{YType::uint8, "tunnel-class"},
    tunnel_is_forward_class{YType::boolean, "tunnel-is-forward-class"},
    tunnle_endpoint_id{YType::uint32, "tunnle-endpoint-id"},
    weight_of_path{YType::uint32, "weight-of-path"}
{
    yang_name = "more-detail-about-path"; yang_parent_name = "fib-sh-tbl-path";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::~MoreDetailAboutPath()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::has_data() const
{
    for (std::size_t index=0; index<spd_ipencap.size(); index++)
    {
        if(spd_ipencap[index]->has_data())
            return true;
    }
    return current_path_flag.is_set
	|| detail_fib_adjacency_type.is_set
	|| detail_next_hop_prefix.is_set
	|| external_adjacency.is_set
	|| fib_path_nh_information_type.is_set
	|| fib_path_nh_information_type_special.is_set
	|| interface_associated_path.is_set
	|| ip_address_to_recurse.is_set
	|| label_to_recurse.is_set
	|| lisprlocid.is_set
	|| next_hop_interface.is_set
	|| next_hop_mask_length.is_set
	|| next_hop_vrf.is_set
	|| next_prefix_length.is_set
	|| next_prefix_length2.is_set
	|| next_prefix_recursion.is_set
	|| next_prefix_recursion2.is_set
	|| number_of_dependencies_this_path.is_set
	|| recurse_prefix_object.is_set
	|| recurse_prefix_object2.is_set
	|| recursive_path_information.is_set
	|| robin_reset_value.is_set
	|| tunnel_class.is_set
	|| tunnel_is_forward_class.is_set
	|| tunnle_endpoint_id.is_set
	|| weight_of_path.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::has_operation() const
{
    for (std::size_t index=0; index<spd_ipencap.size(); index++)
    {
        if(spd_ipencap[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(current_path_flag.operation)
	|| is_set(detail_fib_adjacency_type.operation)
	|| is_set(detail_next_hop_prefix.operation)
	|| is_set(external_adjacency.operation)
	|| is_set(fib_path_nh_information_type.operation)
	|| is_set(fib_path_nh_information_type_special.operation)
	|| is_set(interface_associated_path.operation)
	|| is_set(ip_address_to_recurse.operation)
	|| is_set(label_to_recurse.operation)
	|| is_set(lisprlocid.operation)
	|| is_set(next_hop_interface.operation)
	|| is_set(next_hop_mask_length.operation)
	|| is_set(next_hop_vrf.operation)
	|| is_set(next_prefix_length.operation)
	|| is_set(next_prefix_length2.operation)
	|| is_set(next_prefix_recursion.operation)
	|| is_set(next_prefix_recursion2.operation)
	|| is_set(number_of_dependencies_this_path.operation)
	|| is_set(recurse_prefix_object.operation)
	|| is_set(recurse_prefix_object2.operation)
	|| is_set(recursive_path_information.operation)
	|| is_set(robin_reset_value.operation)
	|| is_set(tunnel_class.operation)
	|| is_set(tunnel_is_forward_class.operation)
	|| is_set(tunnle_endpoint_id.operation)
	|| is_set(weight_of_path.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "more-detail-about-path";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MoreDetailAboutPath' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_path_flag.is_set || is_set(current_path_flag.operation)) leaf_name_data.push_back(current_path_flag.get_name_leafdata());
    if (detail_fib_adjacency_type.is_set || is_set(detail_fib_adjacency_type.operation)) leaf_name_data.push_back(detail_fib_adjacency_type.get_name_leafdata());
    if (detail_next_hop_prefix.is_set || is_set(detail_next_hop_prefix.operation)) leaf_name_data.push_back(detail_next_hop_prefix.get_name_leafdata());
    if (external_adjacency.is_set || is_set(external_adjacency.operation)) leaf_name_data.push_back(external_adjacency.get_name_leafdata());
    if (fib_path_nh_information_type.is_set || is_set(fib_path_nh_information_type.operation)) leaf_name_data.push_back(fib_path_nh_information_type.get_name_leafdata());
    if (fib_path_nh_information_type_special.is_set || is_set(fib_path_nh_information_type_special.operation)) leaf_name_data.push_back(fib_path_nh_information_type_special.get_name_leafdata());
    if (interface_associated_path.is_set || is_set(interface_associated_path.operation)) leaf_name_data.push_back(interface_associated_path.get_name_leafdata());
    if (ip_address_to_recurse.is_set || is_set(ip_address_to_recurse.operation)) leaf_name_data.push_back(ip_address_to_recurse.get_name_leafdata());
    if (label_to_recurse.is_set || is_set(label_to_recurse.operation)) leaf_name_data.push_back(label_to_recurse.get_name_leafdata());
    if (lisprlocid.is_set || is_set(lisprlocid.operation)) leaf_name_data.push_back(lisprlocid.get_name_leafdata());
    if (next_hop_interface.is_set || is_set(next_hop_interface.operation)) leaf_name_data.push_back(next_hop_interface.get_name_leafdata());
    if (next_hop_mask_length.is_set || is_set(next_hop_mask_length.operation)) leaf_name_data.push_back(next_hop_mask_length.get_name_leafdata());
    if (next_hop_vrf.is_set || is_set(next_hop_vrf.operation)) leaf_name_data.push_back(next_hop_vrf.get_name_leafdata());
    if (next_prefix_length.is_set || is_set(next_prefix_length.operation)) leaf_name_data.push_back(next_prefix_length.get_name_leafdata());
    if (next_prefix_length2.is_set || is_set(next_prefix_length2.operation)) leaf_name_data.push_back(next_prefix_length2.get_name_leafdata());
    if (next_prefix_recursion.is_set || is_set(next_prefix_recursion.operation)) leaf_name_data.push_back(next_prefix_recursion.get_name_leafdata());
    if (next_prefix_recursion2.is_set || is_set(next_prefix_recursion2.operation)) leaf_name_data.push_back(next_prefix_recursion2.get_name_leafdata());
    if (number_of_dependencies_this_path.is_set || is_set(number_of_dependencies_this_path.operation)) leaf_name_data.push_back(number_of_dependencies_this_path.get_name_leafdata());
    if (recurse_prefix_object.is_set || is_set(recurse_prefix_object.operation)) leaf_name_data.push_back(recurse_prefix_object.get_name_leafdata());
    if (recurse_prefix_object2.is_set || is_set(recurse_prefix_object2.operation)) leaf_name_data.push_back(recurse_prefix_object2.get_name_leafdata());
    if (recursive_path_information.is_set || is_set(recursive_path_information.operation)) leaf_name_data.push_back(recursive_path_information.get_name_leafdata());
    if (robin_reset_value.is_set || is_set(robin_reset_value.operation)) leaf_name_data.push_back(robin_reset_value.get_name_leafdata());
    if (tunnel_class.is_set || is_set(tunnel_class.operation)) leaf_name_data.push_back(tunnel_class.get_name_leafdata());
    if (tunnel_is_forward_class.is_set || is_set(tunnel_is_forward_class.operation)) leaf_name_data.push_back(tunnel_is_forward_class.get_name_leafdata());
    if (tunnle_endpoint_id.is_set || is_set(tunnle_endpoint_id.operation)) leaf_name_data.push_back(tunnle_endpoint_id.get_name_leafdata());
    if (weight_of_path.is_set || is_set(weight_of_path.operation)) leaf_name_data.push_back(weight_of_path.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "spd-ipencap")
    {
        for(auto const & c : spd_ipencap)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap>();
        c->parent = this;
        spd_ipencap.push_back(std::move(c));
        children[segment_path] = spd_ipencap.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::get_children()
{
    for (auto const & c : spd_ipencap)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "current-path-flag")
    {
        current_path_flag = value;
    }
    if(value_path == "detail-fib-adjacency-type")
    {
        detail_fib_adjacency_type = value;
    }
    if(value_path == "detail-next-hop-prefix")
    {
        detail_next_hop_prefix = value;
    }
    if(value_path == "external-adjacency")
    {
        external_adjacency = value;
    }
    if(value_path == "fib-path-nh-information-type")
    {
        fib_path_nh_information_type = value;
    }
    if(value_path == "fib-path-nh-information-type-special")
    {
        fib_path_nh_information_type_special = value;
    }
    if(value_path == "interface-associated-path")
    {
        interface_associated_path = value;
    }
    if(value_path == "ip-address-to-recurse")
    {
        ip_address_to_recurse = value;
    }
    if(value_path == "label-to-recurse")
    {
        label_to_recurse = value;
    }
    if(value_path == "lisprlocid")
    {
        lisprlocid = value;
    }
    if(value_path == "next-hop-interface")
    {
        next_hop_interface = value;
    }
    if(value_path == "next-hop-mask-length")
    {
        next_hop_mask_length = value;
    }
    if(value_path == "next-hop-vrf")
    {
        next_hop_vrf = value;
    }
    if(value_path == "next-prefix-length")
    {
        next_prefix_length = value;
    }
    if(value_path == "next-prefix-length2")
    {
        next_prefix_length2 = value;
    }
    if(value_path == "next-prefix-recursion")
    {
        next_prefix_recursion = value;
    }
    if(value_path == "next-prefix-recursion2")
    {
        next_prefix_recursion2 = value;
    }
    if(value_path == "number-of-dependencies-this-path")
    {
        number_of_dependencies_this_path = value;
    }
    if(value_path == "recurse-prefix-object")
    {
        recurse_prefix_object = value;
    }
    if(value_path == "recurse-prefix-object2")
    {
        recurse_prefix_object2 = value;
    }
    if(value_path == "recursive-path-information")
    {
        recursive_path_information = value;
    }
    if(value_path == "robin-reset-value")
    {
        robin_reset_value = value;
    }
    if(value_path == "tunnel-class")
    {
        tunnel_class = value;
    }
    if(value_path == "tunnel-is-forward-class")
    {
        tunnel_is_forward_class = value;
    }
    if(value_path == "tunnle-endpoint-id")
    {
        tunnle_endpoint_id = value;
    }
    if(value_path == "weight-of-path")
    {
        weight_of_path = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::SpdIpencap()
    :
    ip_encap_hdr_count{YType::uint8, "ip-encap-hdr-count"},
    ip_encap_locks{YType::uint32, "ip-encap-locks"},
    ip_encap_parent{YType::uint32, "ip-encap-parent"},
    ip_encap_parent_type{YType::uint32, "ip-encap-parent-type"},
    ip_encap_payload_af{YType::uint32, "ip-encap-payload-af"},
    ip_encap_payload_mtu{YType::uint16, "ip-encap-payload-mtu"},
    ip_encap_transport_af{YType::uint32, "ip-encap-transport-af"},
    ip_encap_transport_tbl{YType::uint32, "ip-encap-transport-tbl"},
    ipe_transport_vrf_name{YType::str, "ipe-transport-vrf-name"}
{
    yang_name = "spd-ipencap"; yang_parent_name = "more-detail-about-path";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::~SpdIpencap()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::has_data() const
{
    for (std::size_t index=0; index<ip_encap_hdr.size(); index++)
    {
        if(ip_encap_hdr[index]->has_data())
            return true;
    }
    return ip_encap_hdr_count.is_set
	|| ip_encap_locks.is_set
	|| ip_encap_parent.is_set
	|| ip_encap_parent_type.is_set
	|| ip_encap_payload_af.is_set
	|| ip_encap_payload_mtu.is_set
	|| ip_encap_transport_af.is_set
	|| ip_encap_transport_tbl.is_set
	|| ipe_transport_vrf_name.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::has_operation() const
{
    for (std::size_t index=0; index<ip_encap_hdr.size(); index++)
    {
        if(ip_encap_hdr[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ip_encap_hdr_count.operation)
	|| is_set(ip_encap_locks.operation)
	|| is_set(ip_encap_parent.operation)
	|| is_set(ip_encap_parent_type.operation)
	|| is_set(ip_encap_payload_af.operation)
	|| is_set(ip_encap_payload_mtu.operation)
	|| is_set(ip_encap_transport_af.operation)
	|| is_set(ip_encap_transport_tbl.operation)
	|| is_set(ipe_transport_vrf_name.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spd-ipencap";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpdIpencap' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_encap_hdr_count.is_set || is_set(ip_encap_hdr_count.operation)) leaf_name_data.push_back(ip_encap_hdr_count.get_name_leafdata());
    if (ip_encap_locks.is_set || is_set(ip_encap_locks.operation)) leaf_name_data.push_back(ip_encap_locks.get_name_leafdata());
    if (ip_encap_parent.is_set || is_set(ip_encap_parent.operation)) leaf_name_data.push_back(ip_encap_parent.get_name_leafdata());
    if (ip_encap_parent_type.is_set || is_set(ip_encap_parent_type.operation)) leaf_name_data.push_back(ip_encap_parent_type.get_name_leafdata());
    if (ip_encap_payload_af.is_set || is_set(ip_encap_payload_af.operation)) leaf_name_data.push_back(ip_encap_payload_af.get_name_leafdata());
    if (ip_encap_payload_mtu.is_set || is_set(ip_encap_payload_mtu.operation)) leaf_name_data.push_back(ip_encap_payload_mtu.get_name_leafdata());
    if (ip_encap_transport_af.is_set || is_set(ip_encap_transport_af.operation)) leaf_name_data.push_back(ip_encap_transport_af.get_name_leafdata());
    if (ip_encap_transport_tbl.is_set || is_set(ip_encap_transport_tbl.operation)) leaf_name_data.push_back(ip_encap_transport_tbl.get_name_leafdata());
    if (ipe_transport_vrf_name.is_set || is_set(ipe_transport_vrf_name.operation)) leaf_name_data.push_back(ipe_transport_vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-encap-hdr")
    {
        for(auto const & c : ip_encap_hdr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr>();
        c->parent = this;
        ip_encap_hdr.push_back(std::move(c));
        children[segment_path] = ip_encap_hdr.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::get_children()
{
    for (auto const & c : ip_encap_hdr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-encap-hdr-count")
    {
        ip_encap_hdr_count = value;
    }
    if(value_path == "ip-encap-locks")
    {
        ip_encap_locks = value;
    }
    if(value_path == "ip-encap-parent")
    {
        ip_encap_parent = value;
    }
    if(value_path == "ip-encap-parent-type")
    {
        ip_encap_parent_type = value;
    }
    if(value_path == "ip-encap-payload-af")
    {
        ip_encap_payload_af = value;
    }
    if(value_path == "ip-encap-payload-mtu")
    {
        ip_encap_payload_mtu = value;
    }
    if(value_path == "ip-encap-transport-af")
    {
        ip_encap_transport_af = value;
    }
    if(value_path == "ip-encap-transport-tbl")
    {
        ip_encap_transport_tbl = value;
    }
    if(value_path == "ipe-transport-vrf-name")
    {
        ipe_transport_vrf_name = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::IpEncapHdr()
    :
    ip_encap_hdr_dyn{YType::uint32, "ip-encap-hdr-dyn"},
    ip_encap_hdr_type{YType::enumeration, "ip-encap-hdr-type"},
    ip_encap_hdrp{YType::str, "ip-encap-hdrp"}
{
    yang_name = "ip-encap-hdr"; yang_parent_name = "spd-ipencap";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::~IpEncapHdr()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::has_data() const
{
    return ip_encap_hdr_dyn.is_set
	|| ip_encap_hdr_type.is_set
	|| ip_encap_hdrp.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_encap_hdr_dyn.operation)
	|| is_set(ip_encap_hdr_type.operation)
	|| is_set(ip_encap_hdrp.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-encap-hdr";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpEncapHdr' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_encap_hdr_dyn.is_set || is_set(ip_encap_hdr_dyn.operation)) leaf_name_data.push_back(ip_encap_hdr_dyn.get_name_leafdata());
    if (ip_encap_hdr_type.is_set || is_set(ip_encap_hdr_type.operation)) leaf_name_data.push_back(ip_encap_hdr_type.get_name_leafdata());
    if (ip_encap_hdrp.is_set || is_set(ip_encap_hdrp.operation)) leaf_name_data.push_back(ip_encap_hdrp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MoreDetailAboutPath::SpdIpencap::IpEncapHdr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-encap-hdr-dyn")
    {
        ip_encap_hdr_dyn = value;
    }
    if(value_path == "ip-encap-hdr-type")
    {
        ip_encap_hdr_type = value;
    }
    if(value_path == "ip-encap-hdrp")
    {
        ip_encap_hdrp = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::MplsInformationForPath()
    :
    local_lable{YType::uint32, "local-lable"},
    number_of_igp_paths{YType::uint32, "number-of-igp-paths"},
    recursive_fwd_chain{YType::boolean, "recursive-fwd-chain"},
    recursive_out_label_valid{YType::boolean, "recursive-out-label-valid"},
    recursive_out_lable{YType::uint32, "recursive-out-lable"},
    remote_backup{YType::boolean, "remote-backup"}
{
    yang_name = "mpls-information-for-path"; yang_parent_name = "fib-sh-tbl-path";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::~MplsInformationForPath()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::has_data() const
{
    for (std::size_t index=0; index<igp_label_stack_array.size(); index++)
    {
        if(igp_label_stack_array[index]->has_data())
            return true;
    }
    return local_lable.is_set
	|| number_of_igp_paths.is_set
	|| recursive_fwd_chain.is_set
	|| recursive_out_label_valid.is_set
	|| recursive_out_lable.is_set
	|| remote_backup.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::has_operation() const
{
    for (std::size_t index=0; index<igp_label_stack_array.size(); index++)
    {
        if(igp_label_stack_array[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(local_lable.operation)
	|| is_set(number_of_igp_paths.operation)
	|| is_set(recursive_fwd_chain.operation)
	|| is_set(recursive_out_label_valid.operation)
	|| is_set(recursive_out_lable.operation)
	|| is_set(remote_backup.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-information-for-path";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsInformationForPath' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_lable.is_set || is_set(local_lable.operation)) leaf_name_data.push_back(local_lable.get_name_leafdata());
    if (number_of_igp_paths.is_set || is_set(number_of_igp_paths.operation)) leaf_name_data.push_back(number_of_igp_paths.get_name_leafdata());
    if (recursive_fwd_chain.is_set || is_set(recursive_fwd_chain.operation)) leaf_name_data.push_back(recursive_fwd_chain.get_name_leafdata());
    if (recursive_out_label_valid.is_set || is_set(recursive_out_label_valid.operation)) leaf_name_data.push_back(recursive_out_label_valid.get_name_leafdata());
    if (recursive_out_lable.is_set || is_set(recursive_out_lable.operation)) leaf_name_data.push_back(recursive_out_lable.get_name_leafdata());
    if (remote_backup.is_set || is_set(remote_backup.operation)) leaf_name_data.push_back(remote_backup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "igp-label-stack-array")
    {
        for(auto const & c : igp_label_stack_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray>();
        c->parent = this;
        igp_label_stack_array.push_back(std::move(c));
        children[segment_path] = igp_label_stack_array.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::get_children()
{
    for (auto const & c : igp_label_stack_array)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-lable")
    {
        local_lable = value;
    }
    if(value_path == "number-of-igp-paths")
    {
        number_of_igp_paths = value;
    }
    if(value_path == "recursive-fwd-chain")
    {
        recursive_fwd_chain = value;
    }
    if(value_path == "recursive-out-label-valid")
    {
        recursive_out_label_valid = value;
    }
    if(value_path == "recursive-out-lable")
    {
        recursive_out_lable = value;
    }
    if(value_path == "remote-backup")
    {
        remote_backup = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::IgpLabelStackArray()
    :
    lstack{YType::uint32, "lstack"},
    nh_address{YType::str, "nh-address"},
    number_of_labels{YType::uint32, "number-of-labels"},
    out_interface{YType::str, "out-interface"}
{
    yang_name = "igp-label-stack-array"; yang_parent_name = "mpls-information-for-path";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::~IgpLabelStackArray()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::has_data() const
{
    for (auto const & leaf : lstack.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return nh_address.is_set
	|| number_of_labels.is_set
	|| out_interface.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::has_operation() const
{
    for (auto const & leaf : lstack.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(lstack.operation)
	|| is_set(nh_address.operation)
	|| is_set(number_of_labels.operation)
	|| is_set(out_interface.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-label-stack-array";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgpLabelStackArray' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nh_address.is_set || is_set(nh_address.operation)) leaf_name_data.push_back(nh_address.get_name_leafdata());
    if (number_of_labels.is_set || is_set(number_of_labels.operation)) leaf_name_data.push_back(number_of_labels.get_name_leafdata());
    if (out_interface.is_set || is_set(out_interface.operation)) leaf_name_data.push_back(out_interface.get_name_leafdata());

    auto lstack_name_datas = lstack.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), lstack_name_datas.begin(), lstack_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::FibEntryPath::FibShTblPath::MplsInformationForPath::IgpLabelStackArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lstack")
    {
        lstack.append(value);
    }
    if(value_path == "nh-address")
    {
        nh_address = value;
    }
    if(value_path == "number-of-labels")
    {
        number_of_labels = value;
    }
    if(value_path == "out-interface")
    {
        out_interface = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Information()
    :
    route_is_sripv6_flag{YType::boolean, "route-is-sripv6-flag"},
    sripv6_stats_valid_flag{YType::boolean, "sripv6-stats-valid-flag"},
    srv6_pfx_resolved_via_policy_label{YType::boolean, "srv6-pfx-resolved-via-policy-label"}
    	,
    srv6_statistics(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics>())
{
    srv6_statistics->parent = this;
    children["srv6-statistics"] = srv6_statistics;

    yang_name = "srv6-information"; yang_parent_name = "ip-prefix-brief";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::~Srv6Information()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::has_data() const
{
    return route_is_sripv6_flag.is_set
	|| sripv6_stats_valid_flag.is_set
	|| srv6_pfx_resolved_via_policy_label.is_set
	|| (srv6_statistics !=  nullptr && srv6_statistics->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::has_operation() const
{
    return is_set(operation)
	|| is_set(route_is_sripv6_flag.operation)
	|| is_set(sripv6_stats_valid_flag.operation)
	|| is_set(srv6_pfx_resolved_via_policy_label.operation)
	|| (srv6_statistics !=  nullptr && srv6_statistics->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srv6-information";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Srv6Information' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_is_sripv6_flag.is_set || is_set(route_is_sripv6_flag.operation)) leaf_name_data.push_back(route_is_sripv6_flag.get_name_leafdata());
    if (sripv6_stats_valid_flag.is_set || is_set(sripv6_stats_valid_flag.operation)) leaf_name_data.push_back(sripv6_stats_valid_flag.get_name_leafdata());
    if (srv6_pfx_resolved_via_policy_label.is_set || is_set(srv6_pfx_resolved_via_policy_label.operation)) leaf_name_data.push_back(srv6_pfx_resolved_via_policy_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "srv6-statistics")
    {
        if(srv6_statistics != nullptr)
        {
            children["srv6-statistics"] = srv6_statistics;
        }
        else
        {
            srv6_statistics = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics>();
            srv6_statistics->parent = this;
            children["srv6-statistics"] = srv6_statistics;
        }
        return children.at("srv6-statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::get_children()
{
    if(children.find("srv6-statistics") == children.end())
    {
        if(srv6_statistics != nullptr)
        {
            children["srv6-statistics"] = srv6_statistics;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-is-sripv6-flag")
    {
        route_is_sripv6_flag = value;
    }
    if(value_path == "sripv6-stats-valid-flag")
    {
        sripv6_stats_valid_flag = value;
    }
    if(value_path == "srv6-pfx-resolved-via-policy-label")
    {
        srv6_pfx_resolved_via_policy_label = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics::Srv6Statistics()
    :
    srv6_packets_dropped{YType::uint64, "srv6-packets-dropped"},
    srv6_packets_forwarded{YType::uint64, "srv6-packets-forwarded"}
{
    yang_name = "srv6-statistics"; yang_parent_name = "srv6-information";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics::~Srv6Statistics()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics::has_data() const
{
    return srv6_packets_dropped.is_set
	|| srv6_packets_forwarded.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(srv6_packets_dropped.operation)
	|| is_set(srv6_packets_forwarded.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srv6-statistics";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Srv6Statistics' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srv6_packets_dropped.is_set || is_set(srv6_packets_dropped.operation)) leaf_name_data.push_back(srv6_packets_dropped.get_name_leafdata());
    if (srv6_packets_forwarded.is_set || is_set(srv6_packets_forwarded.operation)) leaf_name_data.push_back(srv6_packets_forwarded.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::Srv6Information::Srv6Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srv6-packets-dropped")
    {
        srv6_packets_dropped = value;
    }
    if(value_path == "srv6-packets-forwarded")
    {
        srv6_packets_forwarded = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::ExtensionObject()
    :
    type{YType::enumeration, "type"}
    	,
    sfecd_le(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe>())
{
    sfecd_le->parent = this;
    children["sfecd-le"] = sfecd_le;

    yang_name = "extension-object"; yang_parent_name = "ip-prefix-brief";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::~ExtensionObject()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::has_data() const
{
    return type.is_set
	|| (sfecd_le !=  nullptr && sfecd_le->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (sfecd_le !=  nullptr && sfecd_le->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extension-object";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtensionObject' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sfecd-le")
    {
        if(sfecd_le != nullptr)
        {
            children["sfecd-le"] = sfecd_le;
        }
        else
        {
            sfecd_le = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe>();
            sfecd_le->parent = this;
            children["sfecd-le"] = sfecd_le;
        }
        return children.at("sfecd-le");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::get_children()
{
    if(children.find("sfecd-le") == children.end())
    {
        if(sfecd_le != nullptr)
        {
            children["sfecd-le"] = sfecd_le;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe::SfecdLe()
    :
    context_label{YType::uint32, "context-label"},
    context_label_flag{YType::boolean, "context-label-flag"}
{
    yang_name = "sfecd-le"; yang_parent_name = "extension-object";
}

Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe::~SfecdLe()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe::has_data() const
{
    return context_label.is_set
	|| context_label_flag.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe::has_operation() const
{
    return is_set(operation)
	|| is_set(context_label.operation)
	|| is_set(context_label_flag.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sfecd-le";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SfecdLe' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_label.is_set || is_set(context_label.operation)) leaf_name_data.push_back(context_label.get_name_leafdata());
    if (context_label_flag.is_set || is_set(context_label_flag.operation)) leaf_name_data.push_back(context_label_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Vrfs::Vrf::IpPrefixBriefs::IpPrefixBrief::ExtensionObject::SfecdLe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "context-label")
    {
        context_label = value;
    }
    if(value_path == "context-label-flag")
    {
        context_label_flag = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::NhIds::NhIds()
{
    yang_name = "nh-ids"; yang_parent_name = "protocol";
}

Fib::Nodes::Node::Protocols::Protocol::NhIds::~NhIds()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::NhIds::has_data() const
{
    for (std::size_t index=0; index<nh_id.size(); index++)
    {
        if(nh_id[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::NhIds::has_operation() const
{
    for (std::size_t index=0; index<nh_id.size(); index++)
    {
        if(nh_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::NhIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-ids";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::NhIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NhIds' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::NhIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nh-id")
    {
        for(auto const & c : nh_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId>();
        c->parent = this;
        nh_id.push_back(std::move(c));
        children[segment_path] = nh_id.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::NhIds::get_children()
{
    for (auto const & c : nh_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::NhIds::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId::NhId()
    :
    nh_address{YType::str, "nh-address"},
    nh_address_xr{YType::str, "nh-address-xr"},
    nh_id{YType::uint32, "nh-id"},
    nh_id_value{YType::int32, "nh-id-value"},
    nh_interf_handle{YType::str, "nh-interf-handle"},
    nh_interface_name{YType::str, "nh-interface-name"},
    nh_link_type{YType::uint8, "nh-link-type"},
    nh_protocol{YType::uint8, "nh-protocol"},
    nh_table_id{YType::uint32, "nh-table-id"},
    time_of_last_update_in_msec{YType::uint64, "time-of-last-update-in-msec"},
    version{YType::uint64, "version"}
{
    yang_name = "nh-id"; yang_parent_name = "nh-ids";
}

Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId::~NhId()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId::has_data() const
{
    return nh_address.is_set
	|| nh_address_xr.is_set
	|| nh_id.is_set
	|| nh_id_value.is_set
	|| nh_interf_handle.is_set
	|| nh_interface_name.is_set
	|| nh_link_type.is_set
	|| nh_protocol.is_set
	|| nh_table_id.is_set
	|| time_of_last_update_in_msec.is_set
	|| version.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId::has_operation() const
{
    return is_set(operation)
	|| is_set(nh_address.operation)
	|| is_set(nh_address_xr.operation)
	|| is_set(nh_id.operation)
	|| is_set(nh_id_value.operation)
	|| is_set(nh_interf_handle.operation)
	|| is_set(nh_interface_name.operation)
	|| is_set(nh_link_type.operation)
	|| is_set(nh_protocol.operation)
	|| is_set(nh_table_id.operation)
	|| is_set(time_of_last_update_in_msec.operation)
	|| is_set(version.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-id";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NhId' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nh_address.is_set || is_set(nh_address.operation)) leaf_name_data.push_back(nh_address.get_name_leafdata());
    if (nh_address_xr.is_set || is_set(nh_address_xr.operation)) leaf_name_data.push_back(nh_address_xr.get_name_leafdata());
    if (nh_id.is_set || is_set(nh_id.operation)) leaf_name_data.push_back(nh_id.get_name_leafdata());
    if (nh_id_value.is_set || is_set(nh_id_value.operation)) leaf_name_data.push_back(nh_id_value.get_name_leafdata());
    if (nh_interf_handle.is_set || is_set(nh_interf_handle.operation)) leaf_name_data.push_back(nh_interf_handle.get_name_leafdata());
    if (nh_interface_name.is_set || is_set(nh_interface_name.operation)) leaf_name_data.push_back(nh_interface_name.get_name_leafdata());
    if (nh_link_type.is_set || is_set(nh_link_type.operation)) leaf_name_data.push_back(nh_link_type.get_name_leafdata());
    if (nh_protocol.is_set || is_set(nh_protocol.operation)) leaf_name_data.push_back(nh_protocol.get_name_leafdata());
    if (nh_table_id.is_set || is_set(nh_table_id.operation)) leaf_name_data.push_back(nh_table_id.get_name_leafdata());
    if (time_of_last_update_in_msec.is_set || is_set(time_of_last_update_in_msec.operation)) leaf_name_data.push_back(time_of_last_update_in_msec.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::NhIds::NhId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nh-address")
    {
        nh_address = value;
    }
    if(value_path == "nh-address-xr")
    {
        nh_address_xr = value;
    }
    if(value_path == "nh-id")
    {
        nh_id = value;
    }
    if(value_path == "nh-id-value")
    {
        nh_id_value = value;
    }
    if(value_path == "nh-interf-handle")
    {
        nh_interf_handle = value;
    }
    if(value_path == "nh-interface-name")
    {
        nh_interface_name = value;
    }
    if(value_path == "nh-link-type")
    {
        nh_link_type = value;
    }
    if(value_path == "nh-protocol")
    {
        nh_protocol = value;
    }
    if(value_path == "nh-table-id")
    {
        nh_table_id = value;
    }
    if(value_path == "time-of-last-update-in-msec")
    {
        time_of_last_update_in_msec = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummaries()
{
    yang_name = "external-client-summaries"; yang_parent_name = "protocol";
}

Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::~ExternalClientSummaries()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::has_data() const
{
    for (std::size_t index=0; index<external_client_summary.size(); index++)
    {
        if(external_client_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::has_operation() const
{
    for (std::size_t index=0; index<external_client_summary.size(); index++)
    {
        if(external_client_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-client-summaries";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalClientSummaries' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "external-client-summary")
    {
        for(auto const & c : external_client_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary>();
        c->parent = this;
        external_client_summary.push_back(std::move(c));
        children[segment_path] = external_client_summary.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::get_children()
{
    for (auto const & c : external_client_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::ExternalClientSummary()
    :
    ecd_ver{YType::int32, "ecd-ver"},
    id{YType::int32, "id"},
    ses_client_name{YType::str, "ses-client-name"},
    ses_client_pulsed_time{YType::uint64, "ses-client-pulsed-time"},
    ses_comp_id{YType::uint32, "ses-comp-id"},
    ses_ecd_version{YType::uint32, "ses-ecd-version"},
    ses_feci_fib_proto{YType::uint32, "ses-feci-fib-proto"},
    ses_num_pending{YType::uint32, "ses-num-pending"},
    ses_num_regs{YType::uint32, "ses-num-regs"}
    	,
    ses_pl_sum(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum>())
{
    ses_pl_sum->parent = this;
    children["ses-pl-sum"] = ses_pl_sum;

    yang_name = "external-client-summary"; yang_parent_name = "external-client-summaries";
}

Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::~ExternalClientSummary()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::has_data() const
{
    return ecd_ver.is_set
	|| id.is_set
	|| ses_client_name.is_set
	|| ses_client_pulsed_time.is_set
	|| ses_comp_id.is_set
	|| ses_ecd_version.is_set
	|| ses_feci_fib_proto.is_set
	|| ses_num_pending.is_set
	|| ses_num_regs.is_set
	|| (ses_pl_sum !=  nullptr && ses_pl_sum->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(ecd_ver.operation)
	|| is_set(id.operation)
	|| is_set(ses_client_name.operation)
	|| is_set(ses_client_pulsed_time.operation)
	|| is_set(ses_comp_id.operation)
	|| is_set(ses_ecd_version.operation)
	|| is_set(ses_feci_fib_proto.operation)
	|| is_set(ses_num_pending.operation)
	|| is_set(ses_num_regs.operation)
	|| (ses_pl_sum !=  nullptr && ses_pl_sum->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-client-summary";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExternalClientSummary' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ecd_ver.is_set || is_set(ecd_ver.operation)) leaf_name_data.push_back(ecd_ver.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ses_client_name.is_set || is_set(ses_client_name.operation)) leaf_name_data.push_back(ses_client_name.get_name_leafdata());
    if (ses_client_pulsed_time.is_set || is_set(ses_client_pulsed_time.operation)) leaf_name_data.push_back(ses_client_pulsed_time.get_name_leafdata());
    if (ses_comp_id.is_set || is_set(ses_comp_id.operation)) leaf_name_data.push_back(ses_comp_id.get_name_leafdata());
    if (ses_ecd_version.is_set || is_set(ses_ecd_version.operation)) leaf_name_data.push_back(ses_ecd_version.get_name_leafdata());
    if (ses_feci_fib_proto.is_set || is_set(ses_feci_fib_proto.operation)) leaf_name_data.push_back(ses_feci_fib_proto.get_name_leafdata());
    if (ses_num_pending.is_set || is_set(ses_num_pending.operation)) leaf_name_data.push_back(ses_num_pending.get_name_leafdata());
    if (ses_num_regs.is_set || is_set(ses_num_regs.operation)) leaf_name_data.push_back(ses_num_regs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ses-pl-sum")
    {
        if(ses_pl_sum != nullptr)
        {
            children["ses-pl-sum"] = ses_pl_sum;
        }
        else
        {
            ses_pl_sum = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum>();
            ses_pl_sum->parent = this;
            children["ses-pl-sum"] = ses_pl_sum;
        }
        return children.at("ses-pl-sum");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::get_children()
{
    if(children.find("ses-pl-sum") == children.end())
    {
        if(ses_pl_sum != nullptr)
        {
            children["ses-pl-sum"] = ses_pl_sum;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ecd-ver")
    {
        ecd_ver = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "ses-client-name")
    {
        ses_client_name = value;
    }
    if(value_path == "ses-client-pulsed-time")
    {
        ses_client_pulsed_time = value;
    }
    if(value_path == "ses-comp-id")
    {
        ses_comp_id = value;
    }
    if(value_path == "ses-ecd-version")
    {
        ses_ecd_version = value;
    }
    if(value_path == "ses-feci-fib-proto")
    {
        ses_feci_fib_proto = value;
    }
    if(value_path == "ses-num-pending")
    {
        ses_num_pending = value;
    }
    if(value_path == "ses-num-regs")
    {
        ses_num_regs = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::SesPlSum()
    :
    sep_num_ecd_pathlist{YType::uint32, "sep-num-ecd-pathlist"},
    sep_num_ecd_pl_per_interest{YType::uint32, "sep-num-ecd-pl-per-interest"},
    sep_num_ecd_pl_unresolved{YType::uint32, "sep-num-ecd-pl-unresolved"}
{
    yang_name = "ses-pl-sum"; yang_parent_name = "external-client-summary";
}

Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::~SesPlSum()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::has_data() const
{
    for (auto const & leaf : sep_num_ecd_pl_per_interest.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return sep_num_ecd_pathlist.is_set
	|| sep_num_ecd_pl_unresolved.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::has_operation() const
{
    for (auto const & leaf : sep_num_ecd_pl_per_interest.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(sep_num_ecd_pathlist.operation)
	|| is_set(sep_num_ecd_pl_per_interest.operation)
	|| is_set(sep_num_ecd_pl_unresolved.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ses-pl-sum";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SesPlSum' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sep_num_ecd_pathlist.is_set || is_set(sep_num_ecd_pathlist.operation)) leaf_name_data.push_back(sep_num_ecd_pathlist.get_name_leafdata());
    if (sep_num_ecd_pl_unresolved.is_set || is_set(sep_num_ecd_pl_unresolved.operation)) leaf_name_data.push_back(sep_num_ecd_pl_unresolved.get_name_leafdata());

    auto sep_num_ecd_pl_per_interest_name_datas = sep_num_ecd_pl_per_interest.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), sep_num_ecd_pl_per_interest_name_datas.begin(), sep_num_ecd_pl_per_interest_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::ExternalClientSummaries::ExternalClientSummary::SesPlSum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sep-num-ecd-pathlist")
    {
        sep_num_ecd_pathlist = value;
    }
    if(value_path == "sep-num-ecd-pl-per-interest")
    {
        sep_num_ecd_pl_per_interest.append(value);
    }
    if(value_path == "sep-num-ecd-pl-unresolved")
    {
        sep_num_ecd_pl_unresolved = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Misc::Misc()
    :
    mi_clock_time{YType::uint64, "mi-clock-time"},
    mi_cpu_time{YType::uint64, "mi-cpu-time"},
    mi_cpuless_count{YType::uint32, "mi-cpuless-count"},
    mi_cpuless_init{YType::boolean, "mi-cpuless-init"},
    mi_cpuless_node{YType::uint32, "mi-cpuless-node"},
    mi_idb_ext_cleanup_failed_count{YType::uint32, "mi-idb-ext-cleanup-failed-count"},
    mi_idb_lsec_enabled_num{YType::uint32, "mi-idb-lsec-enabled-num"},
    mi_idb_recycle_cleanup_count{YType::uint32, "mi-idb-recycle-cleanup-count"},
    mi_idb_recycle_count{YType::uint32, "mi-idb-recycle-count"},
    mi_lrpf_num{YType::uint32, "mi-lrpf-num"},
    mi_lrpf_stats_act{YType::uint32, "mi-lrpf-stats-act"},
    mi_lrpf_stats_fail{YType::uint32, "mi-lrpf-stats-fail"},
    mi_num_lisp_eid{YType::uint32, "mi-num-lisp-eid"},
    mi_num_lisp_valid_eid{YType::uint32, "mi-num-lisp-valid-eid"},
    mi_num_mgmt_list{YType::uint32, "mi-num-mgmt-list"},
    mi_num_virtual_ll_addresses_added{YType::uint32, "mi-num-virtual-ll-addresses-added"},
    mi_num_virtual_ll_addresses_cached{YType::uint32, "mi-num-virtual-ll-addresses-cached"},
    mi_num_virtual_ll_addresses_deleted{YType::uint32, "mi-num-virtual-ll-addresses-deleted"},
    mi_num_virtual_ll_addresses_dropped{YType::uint32, "mi-num-virtual-ll-addresses-dropped"},
    mi_pfi_ifh_del{YType::uint64, "mi-pfi-ifh-del"},
    mi_pfi_ifh_stale{YType::uint64, "mi-pfi-ifh-stale"},
    mi_pfi_ifh_upd{YType::uint64, "mi-pfi-ifh-upd"},
    mi_prefer_aib_routes_over_rib_cfg{YType::boolean, "mi-prefer-aib-routes-over-rib-cfg"},
    mi_prefer_aib_routes_over_rib_oper{YType::boolean, "mi-prefer-aib-routes-over-rib-oper"},
    mi_shm_reset_ts{YType::uint64, "mi-shm-reset-ts"},
    mi_tot_dnld_time{YType::uint64, "mi-tot-dnld-time"},
    mi_tot_gtrie_time{YType::uint64, "mi-tot-gtrie-time"},
    mi_tot_plat_upd_time{YType::uint64, "mi-tot-plat-upd-time"}
    	,
    mi_issu_state(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState>())
	,mi_plat_capabilities(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities>())
{
    mi_issu_state->parent = this;
    children["mi-issu-state"] = mi_issu_state;

    mi_plat_capabilities->parent = this;
    children["mi-plat-capabilities"] = mi_plat_capabilities;

    yang_name = "misc"; yang_parent_name = "protocol";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::~Misc()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::has_data() const
{
    for (std::size_t index=0; index<mi_del.size(); index++)
    {
        if(mi_del[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mi_frr_stat.size(); index++)
    {
        if(mi_frr_stat[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mi_idb_purge_cntr.size(); index++)
    {
        if(mi_idb_purge_cntr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mi_proto_dbg_stat.size(); index++)
    {
        if(mi_proto_dbg_stat[index]->has_data())
            return true;
    }
    for (auto const & leaf : mi_cpuless_node.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mi_idb_ext_cleanup_failed_count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mi_idb_lsec_enabled_num.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mi_lrpf_num.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mi_lrpf_stats_act.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mi_lrpf_stats_fail.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mi_num_lisp_eid.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mi_num_lisp_valid_eid.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return mi_clock_time.is_set
	|| mi_cpu_time.is_set
	|| mi_cpuless_count.is_set
	|| mi_cpuless_init.is_set
	|| mi_idb_recycle_cleanup_count.is_set
	|| mi_idb_recycle_count.is_set
	|| mi_num_mgmt_list.is_set
	|| mi_num_virtual_ll_addresses_added.is_set
	|| mi_num_virtual_ll_addresses_cached.is_set
	|| mi_num_virtual_ll_addresses_deleted.is_set
	|| mi_num_virtual_ll_addresses_dropped.is_set
	|| mi_pfi_ifh_del.is_set
	|| mi_pfi_ifh_stale.is_set
	|| mi_pfi_ifh_upd.is_set
	|| mi_prefer_aib_routes_over_rib_cfg.is_set
	|| mi_prefer_aib_routes_over_rib_oper.is_set
	|| mi_shm_reset_ts.is_set
	|| mi_tot_dnld_time.is_set
	|| mi_tot_gtrie_time.is_set
	|| mi_tot_plat_upd_time.is_set
	|| (mi_issu_state !=  nullptr && mi_issu_state->has_data())
	|| (mi_plat_capabilities !=  nullptr && mi_plat_capabilities->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::has_operation() const
{
    for (std::size_t index=0; index<mi_del.size(); index++)
    {
        if(mi_del[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mi_frr_stat.size(); index++)
    {
        if(mi_frr_stat[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mi_idb_purge_cntr.size(); index++)
    {
        if(mi_idb_purge_cntr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mi_proto_dbg_stat.size(); index++)
    {
        if(mi_proto_dbg_stat[index]->has_operation())
            return true;
    }
    for (auto const & leaf : mi_cpuless_node.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : mi_idb_ext_cleanup_failed_count.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : mi_idb_lsec_enabled_num.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : mi_lrpf_num.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : mi_lrpf_stats_act.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : mi_lrpf_stats_fail.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : mi_num_lisp_eid.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : mi_num_lisp_valid_eid.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(mi_clock_time.operation)
	|| is_set(mi_cpu_time.operation)
	|| is_set(mi_cpuless_count.operation)
	|| is_set(mi_cpuless_init.operation)
	|| is_set(mi_cpuless_node.operation)
	|| is_set(mi_idb_ext_cleanup_failed_count.operation)
	|| is_set(mi_idb_lsec_enabled_num.operation)
	|| is_set(mi_idb_recycle_cleanup_count.operation)
	|| is_set(mi_idb_recycle_count.operation)
	|| is_set(mi_lrpf_num.operation)
	|| is_set(mi_lrpf_stats_act.operation)
	|| is_set(mi_lrpf_stats_fail.operation)
	|| is_set(mi_num_lisp_eid.operation)
	|| is_set(mi_num_lisp_valid_eid.operation)
	|| is_set(mi_num_mgmt_list.operation)
	|| is_set(mi_num_virtual_ll_addresses_added.operation)
	|| is_set(mi_num_virtual_ll_addresses_cached.operation)
	|| is_set(mi_num_virtual_ll_addresses_deleted.operation)
	|| is_set(mi_num_virtual_ll_addresses_dropped.operation)
	|| is_set(mi_pfi_ifh_del.operation)
	|| is_set(mi_pfi_ifh_stale.operation)
	|| is_set(mi_pfi_ifh_upd.operation)
	|| is_set(mi_prefer_aib_routes_over_rib_cfg.operation)
	|| is_set(mi_prefer_aib_routes_over_rib_oper.operation)
	|| is_set(mi_shm_reset_ts.operation)
	|| is_set(mi_tot_dnld_time.operation)
	|| is_set(mi_tot_gtrie_time.operation)
	|| is_set(mi_tot_plat_upd_time.operation)
	|| (mi_issu_state !=  nullptr && mi_issu_state->has_operation())
	|| (mi_plat_capabilities !=  nullptr && mi_plat_capabilities->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "misc";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Misc' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_clock_time.is_set || is_set(mi_clock_time.operation)) leaf_name_data.push_back(mi_clock_time.get_name_leafdata());
    if (mi_cpu_time.is_set || is_set(mi_cpu_time.operation)) leaf_name_data.push_back(mi_cpu_time.get_name_leafdata());
    if (mi_cpuless_count.is_set || is_set(mi_cpuless_count.operation)) leaf_name_data.push_back(mi_cpuless_count.get_name_leafdata());
    if (mi_cpuless_init.is_set || is_set(mi_cpuless_init.operation)) leaf_name_data.push_back(mi_cpuless_init.get_name_leafdata());
    if (mi_idb_recycle_cleanup_count.is_set || is_set(mi_idb_recycle_cleanup_count.operation)) leaf_name_data.push_back(mi_idb_recycle_cleanup_count.get_name_leafdata());
    if (mi_idb_recycle_count.is_set || is_set(mi_idb_recycle_count.operation)) leaf_name_data.push_back(mi_idb_recycle_count.get_name_leafdata());
    if (mi_num_mgmt_list.is_set || is_set(mi_num_mgmt_list.operation)) leaf_name_data.push_back(mi_num_mgmt_list.get_name_leafdata());
    if (mi_num_virtual_ll_addresses_added.is_set || is_set(mi_num_virtual_ll_addresses_added.operation)) leaf_name_data.push_back(mi_num_virtual_ll_addresses_added.get_name_leafdata());
    if (mi_num_virtual_ll_addresses_cached.is_set || is_set(mi_num_virtual_ll_addresses_cached.operation)) leaf_name_data.push_back(mi_num_virtual_ll_addresses_cached.get_name_leafdata());
    if (mi_num_virtual_ll_addresses_deleted.is_set || is_set(mi_num_virtual_ll_addresses_deleted.operation)) leaf_name_data.push_back(mi_num_virtual_ll_addresses_deleted.get_name_leafdata());
    if (mi_num_virtual_ll_addresses_dropped.is_set || is_set(mi_num_virtual_ll_addresses_dropped.operation)) leaf_name_data.push_back(mi_num_virtual_ll_addresses_dropped.get_name_leafdata());
    if (mi_pfi_ifh_del.is_set || is_set(mi_pfi_ifh_del.operation)) leaf_name_data.push_back(mi_pfi_ifh_del.get_name_leafdata());
    if (mi_pfi_ifh_stale.is_set || is_set(mi_pfi_ifh_stale.operation)) leaf_name_data.push_back(mi_pfi_ifh_stale.get_name_leafdata());
    if (mi_pfi_ifh_upd.is_set || is_set(mi_pfi_ifh_upd.operation)) leaf_name_data.push_back(mi_pfi_ifh_upd.get_name_leafdata());
    if (mi_prefer_aib_routes_over_rib_cfg.is_set || is_set(mi_prefer_aib_routes_over_rib_cfg.operation)) leaf_name_data.push_back(mi_prefer_aib_routes_over_rib_cfg.get_name_leafdata());
    if (mi_prefer_aib_routes_over_rib_oper.is_set || is_set(mi_prefer_aib_routes_over_rib_oper.operation)) leaf_name_data.push_back(mi_prefer_aib_routes_over_rib_oper.get_name_leafdata());
    if (mi_shm_reset_ts.is_set || is_set(mi_shm_reset_ts.operation)) leaf_name_data.push_back(mi_shm_reset_ts.get_name_leafdata());
    if (mi_tot_dnld_time.is_set || is_set(mi_tot_dnld_time.operation)) leaf_name_data.push_back(mi_tot_dnld_time.get_name_leafdata());
    if (mi_tot_gtrie_time.is_set || is_set(mi_tot_gtrie_time.operation)) leaf_name_data.push_back(mi_tot_gtrie_time.get_name_leafdata());
    if (mi_tot_plat_upd_time.is_set || is_set(mi_tot_plat_upd_time.operation)) leaf_name_data.push_back(mi_tot_plat_upd_time.get_name_leafdata());

    auto mi_cpuless_node_name_datas = mi_cpuless_node.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mi_cpuless_node_name_datas.begin(), mi_cpuless_node_name_datas.end());
    auto mi_idb_ext_cleanup_failed_count_name_datas = mi_idb_ext_cleanup_failed_count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mi_idb_ext_cleanup_failed_count_name_datas.begin(), mi_idb_ext_cleanup_failed_count_name_datas.end());
    auto mi_idb_lsec_enabled_num_name_datas = mi_idb_lsec_enabled_num.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mi_idb_lsec_enabled_num_name_datas.begin(), mi_idb_lsec_enabled_num_name_datas.end());
    auto mi_lrpf_num_name_datas = mi_lrpf_num.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mi_lrpf_num_name_datas.begin(), mi_lrpf_num_name_datas.end());
    auto mi_lrpf_stats_act_name_datas = mi_lrpf_stats_act.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mi_lrpf_stats_act_name_datas.begin(), mi_lrpf_stats_act_name_datas.end());
    auto mi_lrpf_stats_fail_name_datas = mi_lrpf_stats_fail.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mi_lrpf_stats_fail_name_datas.begin(), mi_lrpf_stats_fail_name_datas.end());
    auto mi_num_lisp_eid_name_datas = mi_num_lisp_eid.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mi_num_lisp_eid_name_datas.begin(), mi_num_lisp_eid_name_datas.end());
    auto mi_num_lisp_valid_eid_name_datas = mi_num_lisp_valid_eid.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mi_num_lisp_valid_eid_name_datas.begin(), mi_num_lisp_valid_eid_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mi-del")
    {
        for(auto const & c : mi_del)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel>();
        c->parent = this;
        mi_del.push_back(std::move(c));
        children[segment_path] = mi_del.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "mi-frr-stat")
    {
        for(auto const & c : mi_frr_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat>();
        c->parent = this;
        mi_frr_stat.push_back(std::move(c));
        children[segment_path] = mi_frr_stat.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "mi-idb-purge-cntr")
    {
        for(auto const & c : mi_idb_purge_cntr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr>();
        c->parent = this;
        mi_idb_purge_cntr.push_back(std::move(c));
        children[segment_path] = mi_idb_purge_cntr.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "mi-issu-state")
    {
        if(mi_issu_state != nullptr)
        {
            children["mi-issu-state"] = mi_issu_state;
        }
        else
        {
            mi_issu_state = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState>();
            mi_issu_state->parent = this;
            children["mi-issu-state"] = mi_issu_state;
        }
        return children.at("mi-issu-state");
    }

    if(child_yang_name == "mi-plat-capabilities")
    {
        if(mi_plat_capabilities != nullptr)
        {
            children["mi-plat-capabilities"] = mi_plat_capabilities;
        }
        else
        {
            mi_plat_capabilities = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities>();
            mi_plat_capabilities->parent = this;
            children["mi-plat-capabilities"] = mi_plat_capabilities;
        }
        return children.at("mi-plat-capabilities");
    }

    if(child_yang_name == "mi-proto-dbg-stat")
    {
        for(auto const & c : mi_proto_dbg_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat>();
        c->parent = this;
        mi_proto_dbg_stat.push_back(std::move(c));
        children[segment_path] = mi_proto_dbg_stat.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Misc::get_children()
{
    for (auto const & c : mi_del)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : mi_frr_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : mi_idb_purge_cntr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("mi-issu-state") == children.end())
    {
        if(mi_issu_state != nullptr)
        {
            children["mi-issu-state"] = mi_issu_state;
        }
    }

    if(children.find("mi-plat-capabilities") == children.end())
    {
        if(mi_plat_capabilities != nullptr)
        {
            children["mi-plat-capabilities"] = mi_plat_capabilities;
        }
    }

    for (auto const & c : mi_proto_dbg_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mi-clock-time")
    {
        mi_clock_time = value;
    }
    if(value_path == "mi-cpu-time")
    {
        mi_cpu_time = value;
    }
    if(value_path == "mi-cpuless-count")
    {
        mi_cpuless_count = value;
    }
    if(value_path == "mi-cpuless-init")
    {
        mi_cpuless_init = value;
    }
    if(value_path == "mi-cpuless-node")
    {
        mi_cpuless_node.append(value);
    }
    if(value_path == "mi-idb-ext-cleanup-failed-count")
    {
        mi_idb_ext_cleanup_failed_count.append(value);
    }
    if(value_path == "mi-idb-lsec-enabled-num")
    {
        mi_idb_lsec_enabled_num.append(value);
    }
    if(value_path == "mi-idb-recycle-cleanup-count")
    {
        mi_idb_recycle_cleanup_count = value;
    }
    if(value_path == "mi-idb-recycle-count")
    {
        mi_idb_recycle_count = value;
    }
    if(value_path == "mi-lrpf-num")
    {
        mi_lrpf_num.append(value);
    }
    if(value_path == "mi-lrpf-stats-act")
    {
        mi_lrpf_stats_act.append(value);
    }
    if(value_path == "mi-lrpf-stats-fail")
    {
        mi_lrpf_stats_fail.append(value);
    }
    if(value_path == "mi-num-lisp-eid")
    {
        mi_num_lisp_eid.append(value);
    }
    if(value_path == "mi-num-lisp-valid-eid")
    {
        mi_num_lisp_valid_eid.append(value);
    }
    if(value_path == "mi-num-mgmt-list")
    {
        mi_num_mgmt_list = value;
    }
    if(value_path == "mi-num-virtual-ll-addresses-added")
    {
        mi_num_virtual_ll_addresses_added = value;
    }
    if(value_path == "mi-num-virtual-ll-addresses-cached")
    {
        mi_num_virtual_ll_addresses_cached = value;
    }
    if(value_path == "mi-num-virtual-ll-addresses-deleted")
    {
        mi_num_virtual_ll_addresses_deleted = value;
    }
    if(value_path == "mi-num-virtual-ll-addresses-dropped")
    {
        mi_num_virtual_ll_addresses_dropped = value;
    }
    if(value_path == "mi-pfi-ifh-del")
    {
        mi_pfi_ifh_del = value;
    }
    if(value_path == "mi-pfi-ifh-stale")
    {
        mi_pfi_ifh_stale = value;
    }
    if(value_path == "mi-pfi-ifh-upd")
    {
        mi_pfi_ifh_upd = value;
    }
    if(value_path == "mi-prefer-aib-routes-over-rib-cfg")
    {
        mi_prefer_aib_routes_over_rib_cfg = value;
    }
    if(value_path == "mi-prefer-aib-routes-over-rib-oper")
    {
        mi_prefer_aib_routes_over_rib_oper = value;
    }
    if(value_path == "mi-shm-reset-ts")
    {
        mi_shm_reset_ts = value;
    }
    if(value_path == "mi-tot-dnld-time")
    {
        mi_tot_dnld_time = value;
    }
    if(value_path == "mi-tot-gtrie-time")
    {
        mi_tot_gtrie_time = value;
    }
    if(value_path == "mi-tot-plat-upd-time")
    {
        mi_tot_plat_upd_time = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::MiIssuState()
    :
    eoc_received_imdr_time_stamp{YType::str, "eoc-received-imdr-time-stamp"},
    eoc_received_slc_time_stamp{YType::str, "eoc-received-slc-time-stamp"},
    eod_received_im_time_stamp{YType::str, "eod-received-im-time-stamp"},
    eod_sent_imdr_time_stamp{YType::str, "eod-sent-imdr-time-stamp"},
    eod_sent_slc_time_stamp{YType::str, "eod-sent-slc-time-stamp"},
    fis_issu_error_ts{YType::uint64, "fis-issu-error-ts"},
    fis_issu_restart{YType::boolean, "fis-issu-restart"},
    imdr_eoc_implicit{YType::boolean, "imdr-eoc-implicit"},
    imdr_support{YType::boolean, "imdr-support"},
    slc_eoc_implicit{YType::boolean, "slc-eoc-implicit"},
    slc_support{YType::boolean, "slc-support"}
{
    yang_name = "mi-issu-state"; yang_parent_name = "misc";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::~MiIssuState()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::has_data() const
{
    for (std::size_t index=0; index<fis_proto_state.size(); index++)
    {
        if(fis_proto_state[index]->has_data())
            return true;
    }
    return eoc_received_imdr_time_stamp.is_set
	|| eoc_received_slc_time_stamp.is_set
	|| eod_received_im_time_stamp.is_set
	|| eod_sent_imdr_time_stamp.is_set
	|| eod_sent_slc_time_stamp.is_set
	|| fis_issu_error_ts.is_set
	|| fis_issu_restart.is_set
	|| imdr_eoc_implicit.is_set
	|| imdr_support.is_set
	|| slc_eoc_implicit.is_set
	|| slc_support.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::has_operation() const
{
    for (std::size_t index=0; index<fis_proto_state.size(); index++)
    {
        if(fis_proto_state[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(eoc_received_imdr_time_stamp.operation)
	|| is_set(eoc_received_slc_time_stamp.operation)
	|| is_set(eod_received_im_time_stamp.operation)
	|| is_set(eod_sent_imdr_time_stamp.operation)
	|| is_set(eod_sent_slc_time_stamp.operation)
	|| is_set(fis_issu_error_ts.operation)
	|| is_set(fis_issu_restart.operation)
	|| is_set(imdr_eoc_implicit.operation)
	|| is_set(imdr_support.operation)
	|| is_set(slc_eoc_implicit.operation)
	|| is_set(slc_support.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-issu-state";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MiIssuState' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eoc_received_imdr_time_stamp.is_set || is_set(eoc_received_imdr_time_stamp.operation)) leaf_name_data.push_back(eoc_received_imdr_time_stamp.get_name_leafdata());
    if (eoc_received_slc_time_stamp.is_set || is_set(eoc_received_slc_time_stamp.operation)) leaf_name_data.push_back(eoc_received_slc_time_stamp.get_name_leafdata());
    if (eod_received_im_time_stamp.is_set || is_set(eod_received_im_time_stamp.operation)) leaf_name_data.push_back(eod_received_im_time_stamp.get_name_leafdata());
    if (eod_sent_imdr_time_stamp.is_set || is_set(eod_sent_imdr_time_stamp.operation)) leaf_name_data.push_back(eod_sent_imdr_time_stamp.get_name_leafdata());
    if (eod_sent_slc_time_stamp.is_set || is_set(eod_sent_slc_time_stamp.operation)) leaf_name_data.push_back(eod_sent_slc_time_stamp.get_name_leafdata());
    if (fis_issu_error_ts.is_set || is_set(fis_issu_error_ts.operation)) leaf_name_data.push_back(fis_issu_error_ts.get_name_leafdata());
    if (fis_issu_restart.is_set || is_set(fis_issu_restart.operation)) leaf_name_data.push_back(fis_issu_restart.get_name_leafdata());
    if (imdr_eoc_implicit.is_set || is_set(imdr_eoc_implicit.operation)) leaf_name_data.push_back(imdr_eoc_implicit.get_name_leafdata());
    if (imdr_support.is_set || is_set(imdr_support.operation)) leaf_name_data.push_back(imdr_support.get_name_leafdata());
    if (slc_eoc_implicit.is_set || is_set(slc_eoc_implicit.operation)) leaf_name_data.push_back(slc_eoc_implicit.get_name_leafdata());
    if (slc_support.is_set || is_set(slc_support.operation)) leaf_name_data.push_back(slc_support.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fis-proto-state")
    {
        for(auto const & c : fis_proto_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState>();
        c->parent = this;
        fis_proto_state.push_back(std::move(c));
        children[segment_path] = fis_proto_state.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::get_children()
{
    for (auto const & c : fis_proto_state)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eoc-received-imdr-time-stamp")
    {
        eoc_received_imdr_time_stamp = value;
    }
    if(value_path == "eoc-received-slc-time-stamp")
    {
        eoc_received_slc_time_stamp = value;
    }
    if(value_path == "eod-received-im-time-stamp")
    {
        eod_received_im_time_stamp = value;
    }
    if(value_path == "eod-sent-imdr-time-stamp")
    {
        eod_sent_imdr_time_stamp = value;
    }
    if(value_path == "eod-sent-slc-time-stamp")
    {
        eod_sent_slc_time_stamp = value;
    }
    if(value_path == "fis-issu-error-ts")
    {
        fis_issu_error_ts = value;
    }
    if(value_path == "fis-issu-restart")
    {
        fis_issu_restart = value;
    }
    if(value_path == "imdr-eoc-implicit")
    {
        imdr_eoc_implicit = value;
    }
    if(value_path == "imdr-support")
    {
        imdr_support = value;
    }
    if(value_path == "slc-eoc-implicit")
    {
        slc_eoc_implicit = value;
    }
    if(value_path == "slc-support")
    {
        slc_support = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState::FisProtoState()
    :
    aib_eod_time_stamp{YType::str, "aib-eod-time-stamp"},
    bcdl_tables{YType::uint32, "bcdl-tables"},
    converged_tables{YType::uint32, "converged-tables"},
    lmrib_eod_time_stamp{YType::str, "lmrib-eod-time-stamp"},
    lmrib_eod_valid{YType::boolean, "lmrib-eod-valid"},
    lsd_eod_time_stamp{YType::str, "lsd-eod-time-stamp"},
    lsd_eod_valid{YType::boolean, "lsd-eod-valid"},
    protocol_eod_time_stamp{YType::str, "protocol-eod-time-stamp"},
    protocol_eod_valid{YType::boolean, "protocol-eod-valid"},
    protocol_name{YType::str, "protocol-name"},
    rib_info_valid{YType::boolean, "rib-info-valid"},
    rib_tables_converged_time_stamp{YType::str, "rib-tables-converged-time-stamp"},
    rsi_eod_time_stamp{YType::str, "rsi-eod-time-stamp"},
    rsi_eod_valid{YType::boolean, "rsi-eod-valid"}
{
    yang_name = "fis-proto-state"; yang_parent_name = "mi-issu-state";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState::~FisProtoState()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState::has_data() const
{
    return aib_eod_time_stamp.is_set
	|| bcdl_tables.is_set
	|| converged_tables.is_set
	|| lmrib_eod_time_stamp.is_set
	|| lmrib_eod_valid.is_set
	|| lsd_eod_time_stamp.is_set
	|| lsd_eod_valid.is_set
	|| protocol_eod_time_stamp.is_set
	|| protocol_eod_valid.is_set
	|| protocol_name.is_set
	|| rib_info_valid.is_set
	|| rib_tables_converged_time_stamp.is_set
	|| rsi_eod_time_stamp.is_set
	|| rsi_eod_valid.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState::has_operation() const
{
    return is_set(operation)
	|| is_set(aib_eod_time_stamp.operation)
	|| is_set(bcdl_tables.operation)
	|| is_set(converged_tables.operation)
	|| is_set(lmrib_eod_time_stamp.operation)
	|| is_set(lmrib_eod_valid.operation)
	|| is_set(lsd_eod_time_stamp.operation)
	|| is_set(lsd_eod_valid.operation)
	|| is_set(protocol_eod_time_stamp.operation)
	|| is_set(protocol_eod_valid.operation)
	|| is_set(protocol_name.operation)
	|| is_set(rib_info_valid.operation)
	|| is_set(rib_tables_converged_time_stamp.operation)
	|| is_set(rsi_eod_time_stamp.operation)
	|| is_set(rsi_eod_valid.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fis-proto-state";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FisProtoState' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aib_eod_time_stamp.is_set || is_set(aib_eod_time_stamp.operation)) leaf_name_data.push_back(aib_eod_time_stamp.get_name_leafdata());
    if (bcdl_tables.is_set || is_set(bcdl_tables.operation)) leaf_name_data.push_back(bcdl_tables.get_name_leafdata());
    if (converged_tables.is_set || is_set(converged_tables.operation)) leaf_name_data.push_back(converged_tables.get_name_leafdata());
    if (lmrib_eod_time_stamp.is_set || is_set(lmrib_eod_time_stamp.operation)) leaf_name_data.push_back(lmrib_eod_time_stamp.get_name_leafdata());
    if (lmrib_eod_valid.is_set || is_set(lmrib_eod_valid.operation)) leaf_name_data.push_back(lmrib_eod_valid.get_name_leafdata());
    if (lsd_eod_time_stamp.is_set || is_set(lsd_eod_time_stamp.operation)) leaf_name_data.push_back(lsd_eod_time_stamp.get_name_leafdata());
    if (lsd_eod_valid.is_set || is_set(lsd_eod_valid.operation)) leaf_name_data.push_back(lsd_eod_valid.get_name_leafdata());
    if (protocol_eod_time_stamp.is_set || is_set(protocol_eod_time_stamp.operation)) leaf_name_data.push_back(protocol_eod_time_stamp.get_name_leafdata());
    if (protocol_eod_valid.is_set || is_set(protocol_eod_valid.operation)) leaf_name_data.push_back(protocol_eod_valid.get_name_leafdata());
    if (protocol_name.is_set || is_set(protocol_name.operation)) leaf_name_data.push_back(protocol_name.get_name_leafdata());
    if (rib_info_valid.is_set || is_set(rib_info_valid.operation)) leaf_name_data.push_back(rib_info_valid.get_name_leafdata());
    if (rib_tables_converged_time_stamp.is_set || is_set(rib_tables_converged_time_stamp.operation)) leaf_name_data.push_back(rib_tables_converged_time_stamp.get_name_leafdata());
    if (rsi_eod_time_stamp.is_set || is_set(rsi_eod_time_stamp.operation)) leaf_name_data.push_back(rsi_eod_time_stamp.get_name_leafdata());
    if (rsi_eod_valid.is_set || is_set(rsi_eod_valid.operation)) leaf_name_data.push_back(rsi_eod_valid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiIssuState::FisProtoState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aib-eod-time-stamp")
    {
        aib_eod_time_stamp = value;
    }
    if(value_path == "bcdl-tables")
    {
        bcdl_tables = value;
    }
    if(value_path == "converged-tables")
    {
        converged_tables = value;
    }
    if(value_path == "lmrib-eod-time-stamp")
    {
        lmrib_eod_time_stamp = value;
    }
    if(value_path == "lmrib-eod-valid")
    {
        lmrib_eod_valid = value;
    }
    if(value_path == "lsd-eod-time-stamp")
    {
        lsd_eod_time_stamp = value;
    }
    if(value_path == "lsd-eod-valid")
    {
        lsd_eod_valid = value;
    }
    if(value_path == "protocol-eod-time-stamp")
    {
        protocol_eod_time_stamp = value;
    }
    if(value_path == "protocol-eod-valid")
    {
        protocol_eod_valid = value;
    }
    if(value_path == "protocol-name")
    {
        protocol_name = value;
    }
    if(value_path == "rib-info-valid")
    {
        rib_info_valid = value;
    }
    if(value_path == "rib-tables-converged-time-stamp")
    {
        rib_tables_converged_time_stamp = value;
    }
    if(value_path == "rsi-eod-time-stamp")
    {
        rsi_eod_time_stamp = value;
    }
    if(value_path == "rsi-eod-valid")
    {
        rsi_eod_valid = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::MiPlatCapabilities()
    :
    fpc_dlb_support{YType::boolean, "fpc-dlb-support"},
    fpc_exclude_deag_bkup{YType::boolean, "fpc-exclude-deag-bkup"},
    fpc_lba_tuples_default{YType::uint32, "fpc-lba-tuples-default"},
    fpc_link_mpls_nhinfo_in_ipv6_thread_support{YType::boolean, "fpc-link-mpls-nhinfo-in-ipv6-thread-support"},
    fpc_loadinfo_filter_support{YType::boolean, "fpc-loadinfo-filter-support"},
    fpc_local_label_split{YType::uint32, "fpc-local-label-split"},
    fpc_mraps_support{YType::boolean, "fpc-mraps-support"},
    fpc_nhid{YType::boolean, "fpc-nhid"},
    fpc_num_fwding_stages{YType::uint8, "fpc-num-fwding-stages"},
    fpc_num_l3_lbl_levels{YType::uint8, "fpc-num-l3-lbl-levels"},
    fpc_num_l3_lbl_paths{YType::uint8, "fpc-num-l3-lbl-paths"},
    fpc_num_l3_lbl_rec_paths{YType::uint8, "fpc-num-l3-lbl-rec-paths"},
    fpc_num_l3_ucmp_paths{YType::uint8, "fpc-num-l3-ucmp-paths"},
    fpc_num_paths_per_pbts_class{YType::uint8, "fpc-num-paths-per-pbts-class"},
    fpc_pbts_defclass_support{YType::boolean, "fpc-pbts-defclass-support"},
    fpc_platf_ready_cb_wait{YType::boolean, "fpc-platf-ready-cb-wait"},
    fpc_platf_temp_back_walk_reqd{YType::boolean, "fpc-platf-temp-back-walk-reqd"},
    fpc_platf_v4_upd_disable{YType::boolean, "fpc-platf-v4-upd-disable"},
    fpc_platf_v6_upd_disable{YType::boolean, "fpc-platf-v6-upd-disable"},
    fpc_prefix_filter_support{YType::uint8, "fpc-prefix-filter-support"},
    fpc_slowpath_ingress_inject_reqd{YType::boolean, "fpc-slowpath-ingress-inject-reqd"},
    fpc_stats_support{YType::boolean, "fpc-stats-support"}
{
    yang_name = "mi-plat-capabilities"; yang_parent_name = "misc";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::~MiPlatCapabilities()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::has_data() const
{
    for (std::size_t index=0; index<fpc_lisp_decap_over_v4.size(); index++)
    {
        if(fpc_lisp_decap_over_v4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<fpc_lisp_decap_over_v6.size(); index++)
    {
        if(fpc_lisp_decap_over_v6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<fpc_lisp_ucmp.size(); index++)
    {
        if(fpc_lisp_ucmp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<fpc_resolve_via_table.size(); index++)
    {
        if(fpc_resolve_via_table[index]->has_data())
            return true;
    }
    return fpc_dlb_support.is_set
	|| fpc_exclude_deag_bkup.is_set
	|| fpc_lba_tuples_default.is_set
	|| fpc_link_mpls_nhinfo_in_ipv6_thread_support.is_set
	|| fpc_loadinfo_filter_support.is_set
	|| fpc_local_label_split.is_set
	|| fpc_mraps_support.is_set
	|| fpc_nhid.is_set
	|| fpc_num_fwding_stages.is_set
	|| fpc_num_l3_lbl_levels.is_set
	|| fpc_num_l3_lbl_paths.is_set
	|| fpc_num_l3_lbl_rec_paths.is_set
	|| fpc_num_l3_ucmp_paths.is_set
	|| fpc_num_paths_per_pbts_class.is_set
	|| fpc_pbts_defclass_support.is_set
	|| fpc_platf_ready_cb_wait.is_set
	|| fpc_platf_temp_back_walk_reqd.is_set
	|| fpc_platf_v4_upd_disable.is_set
	|| fpc_platf_v6_upd_disable.is_set
	|| fpc_prefix_filter_support.is_set
	|| fpc_slowpath_ingress_inject_reqd.is_set
	|| fpc_stats_support.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::has_operation() const
{
    for (std::size_t index=0; index<fpc_lisp_decap_over_v4.size(); index++)
    {
        if(fpc_lisp_decap_over_v4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<fpc_lisp_decap_over_v6.size(); index++)
    {
        if(fpc_lisp_decap_over_v6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<fpc_lisp_ucmp.size(); index++)
    {
        if(fpc_lisp_ucmp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<fpc_resolve_via_table.size(); index++)
    {
        if(fpc_resolve_via_table[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(fpc_dlb_support.operation)
	|| is_set(fpc_exclude_deag_bkup.operation)
	|| is_set(fpc_lba_tuples_default.operation)
	|| is_set(fpc_link_mpls_nhinfo_in_ipv6_thread_support.operation)
	|| is_set(fpc_loadinfo_filter_support.operation)
	|| is_set(fpc_local_label_split.operation)
	|| is_set(fpc_mraps_support.operation)
	|| is_set(fpc_nhid.operation)
	|| is_set(fpc_num_fwding_stages.operation)
	|| is_set(fpc_num_l3_lbl_levels.operation)
	|| is_set(fpc_num_l3_lbl_paths.operation)
	|| is_set(fpc_num_l3_lbl_rec_paths.operation)
	|| is_set(fpc_num_l3_ucmp_paths.operation)
	|| is_set(fpc_num_paths_per_pbts_class.operation)
	|| is_set(fpc_pbts_defclass_support.operation)
	|| is_set(fpc_platf_ready_cb_wait.operation)
	|| is_set(fpc_platf_temp_back_walk_reqd.operation)
	|| is_set(fpc_platf_v4_upd_disable.operation)
	|| is_set(fpc_platf_v6_upd_disable.operation)
	|| is_set(fpc_prefix_filter_support.operation)
	|| is_set(fpc_slowpath_ingress_inject_reqd.operation)
	|| is_set(fpc_stats_support.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-plat-capabilities";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MiPlatCapabilities' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpc_dlb_support.is_set || is_set(fpc_dlb_support.operation)) leaf_name_data.push_back(fpc_dlb_support.get_name_leafdata());
    if (fpc_exclude_deag_bkup.is_set || is_set(fpc_exclude_deag_bkup.operation)) leaf_name_data.push_back(fpc_exclude_deag_bkup.get_name_leafdata());
    if (fpc_lba_tuples_default.is_set || is_set(fpc_lba_tuples_default.operation)) leaf_name_data.push_back(fpc_lba_tuples_default.get_name_leafdata());
    if (fpc_link_mpls_nhinfo_in_ipv6_thread_support.is_set || is_set(fpc_link_mpls_nhinfo_in_ipv6_thread_support.operation)) leaf_name_data.push_back(fpc_link_mpls_nhinfo_in_ipv6_thread_support.get_name_leafdata());
    if (fpc_loadinfo_filter_support.is_set || is_set(fpc_loadinfo_filter_support.operation)) leaf_name_data.push_back(fpc_loadinfo_filter_support.get_name_leafdata());
    if (fpc_local_label_split.is_set || is_set(fpc_local_label_split.operation)) leaf_name_data.push_back(fpc_local_label_split.get_name_leafdata());
    if (fpc_mraps_support.is_set || is_set(fpc_mraps_support.operation)) leaf_name_data.push_back(fpc_mraps_support.get_name_leafdata());
    if (fpc_nhid.is_set || is_set(fpc_nhid.operation)) leaf_name_data.push_back(fpc_nhid.get_name_leafdata());
    if (fpc_num_fwding_stages.is_set || is_set(fpc_num_fwding_stages.operation)) leaf_name_data.push_back(fpc_num_fwding_stages.get_name_leafdata());
    if (fpc_num_l3_lbl_levels.is_set || is_set(fpc_num_l3_lbl_levels.operation)) leaf_name_data.push_back(fpc_num_l3_lbl_levels.get_name_leafdata());
    if (fpc_num_l3_lbl_paths.is_set || is_set(fpc_num_l3_lbl_paths.operation)) leaf_name_data.push_back(fpc_num_l3_lbl_paths.get_name_leafdata());
    if (fpc_num_l3_lbl_rec_paths.is_set || is_set(fpc_num_l3_lbl_rec_paths.operation)) leaf_name_data.push_back(fpc_num_l3_lbl_rec_paths.get_name_leafdata());
    if (fpc_num_l3_ucmp_paths.is_set || is_set(fpc_num_l3_ucmp_paths.operation)) leaf_name_data.push_back(fpc_num_l3_ucmp_paths.get_name_leafdata());
    if (fpc_num_paths_per_pbts_class.is_set || is_set(fpc_num_paths_per_pbts_class.operation)) leaf_name_data.push_back(fpc_num_paths_per_pbts_class.get_name_leafdata());
    if (fpc_pbts_defclass_support.is_set || is_set(fpc_pbts_defclass_support.operation)) leaf_name_data.push_back(fpc_pbts_defclass_support.get_name_leafdata());
    if (fpc_platf_ready_cb_wait.is_set || is_set(fpc_platf_ready_cb_wait.operation)) leaf_name_data.push_back(fpc_platf_ready_cb_wait.get_name_leafdata());
    if (fpc_platf_temp_back_walk_reqd.is_set || is_set(fpc_platf_temp_back_walk_reqd.operation)) leaf_name_data.push_back(fpc_platf_temp_back_walk_reqd.get_name_leafdata());
    if (fpc_platf_v4_upd_disable.is_set || is_set(fpc_platf_v4_upd_disable.operation)) leaf_name_data.push_back(fpc_platf_v4_upd_disable.get_name_leafdata());
    if (fpc_platf_v6_upd_disable.is_set || is_set(fpc_platf_v6_upd_disable.operation)) leaf_name_data.push_back(fpc_platf_v6_upd_disable.get_name_leafdata());
    if (fpc_prefix_filter_support.is_set || is_set(fpc_prefix_filter_support.operation)) leaf_name_data.push_back(fpc_prefix_filter_support.get_name_leafdata());
    if (fpc_slowpath_ingress_inject_reqd.is_set || is_set(fpc_slowpath_ingress_inject_reqd.operation)) leaf_name_data.push_back(fpc_slowpath_ingress_inject_reqd.get_name_leafdata());
    if (fpc_stats_support.is_set || is_set(fpc_stats_support.operation)) leaf_name_data.push_back(fpc_stats_support.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fpc-lisp-decap-over-v4")
    {
        for(auto const & c : fpc_lisp_decap_over_v4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4>();
        c->parent = this;
        fpc_lisp_decap_over_v4.push_back(std::move(c));
        children[segment_path] = fpc_lisp_decap_over_v4.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "fpc-lisp-decap-over-v6")
    {
        for(auto const & c : fpc_lisp_decap_over_v6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6>();
        c->parent = this;
        fpc_lisp_decap_over_v6.push_back(std::move(c));
        children[segment_path] = fpc_lisp_decap_over_v6.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "fpc-lisp-ucmp")
    {
        for(auto const & c : fpc_lisp_ucmp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp>();
        c->parent = this;
        fpc_lisp_ucmp.push_back(std::move(c));
        children[segment_path] = fpc_lisp_ucmp.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "fpc-resolve-via-table")
    {
        for(auto const & c : fpc_resolve_via_table)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable>();
        c->parent = this;
        fpc_resolve_via_table.push_back(std::move(c));
        children[segment_path] = fpc_resolve_via_table.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::get_children()
{
    for (auto const & c : fpc_lisp_decap_over_v4)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : fpc_lisp_decap_over_v6)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : fpc_lisp_ucmp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : fpc_resolve_via_table)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fpc-dlb-support")
    {
        fpc_dlb_support = value;
    }
    if(value_path == "fpc-exclude-deag-bkup")
    {
        fpc_exclude_deag_bkup = value;
    }
    if(value_path == "fpc-lba-tuples-default")
    {
        fpc_lba_tuples_default = value;
    }
    if(value_path == "fpc-link-mpls-nhinfo-in-ipv6-thread-support")
    {
        fpc_link_mpls_nhinfo_in_ipv6_thread_support = value;
    }
    if(value_path == "fpc-loadinfo-filter-support")
    {
        fpc_loadinfo_filter_support = value;
    }
    if(value_path == "fpc-local-label-split")
    {
        fpc_local_label_split = value;
    }
    if(value_path == "fpc-mraps-support")
    {
        fpc_mraps_support = value;
    }
    if(value_path == "fpc-nhid")
    {
        fpc_nhid = value;
    }
    if(value_path == "fpc-num-fwding-stages")
    {
        fpc_num_fwding_stages = value;
    }
    if(value_path == "fpc-num-l3-lbl-levels")
    {
        fpc_num_l3_lbl_levels = value;
    }
    if(value_path == "fpc-num-l3-lbl-paths")
    {
        fpc_num_l3_lbl_paths = value;
    }
    if(value_path == "fpc-num-l3-lbl-rec-paths")
    {
        fpc_num_l3_lbl_rec_paths = value;
    }
    if(value_path == "fpc-num-l3-ucmp-paths")
    {
        fpc_num_l3_ucmp_paths = value;
    }
    if(value_path == "fpc-num-paths-per-pbts-class")
    {
        fpc_num_paths_per_pbts_class = value;
    }
    if(value_path == "fpc-pbts-defclass-support")
    {
        fpc_pbts_defclass_support = value;
    }
    if(value_path == "fpc-platf-ready-cb-wait")
    {
        fpc_platf_ready_cb_wait = value;
    }
    if(value_path == "fpc-platf-temp-back-walk-reqd")
    {
        fpc_platf_temp_back_walk_reqd = value;
    }
    if(value_path == "fpc-platf-v4-upd-disable")
    {
        fpc_platf_v4_upd_disable = value;
    }
    if(value_path == "fpc-platf-v6-upd-disable")
    {
        fpc_platf_v6_upd_disable = value;
    }
    if(value_path == "fpc-prefix-filter-support")
    {
        fpc_prefix_filter_support = value;
    }
    if(value_path == "fpc-slowpath-ingress-inject-reqd")
    {
        fpc_slowpath_ingress_inject_reqd = value;
    }
    if(value_path == "fpc-stats-support")
    {
        fpc_stats_support = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4::FpcLispDecapOverV4()
    :
    entry{YType::boolean, "entry"}
{
    yang_name = "fpc-lisp-decap-over-v4"; yang_parent_name = "mi-plat-capabilities";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4::~FpcLispDecapOverV4()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpc-lisp-decap-over-v4";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FpcLispDecapOverV4' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6::FpcLispDecapOverV6()
    :
    entry{YType::boolean, "entry"}
{
    yang_name = "fpc-lisp-decap-over-v6"; yang_parent_name = "mi-plat-capabilities";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6::~FpcLispDecapOverV6()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpc-lisp-decap-over-v6";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FpcLispDecapOverV6' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispDecapOverV6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp::FpcLispUcmp()
    :
    entry{YType::boolean, "entry"}
{
    yang_name = "fpc-lisp-ucmp"; yang_parent_name = "mi-plat-capabilities";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp::~FpcLispUcmp()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpc-lisp-ucmp";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FpcLispUcmp' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcLispUcmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable::FpcResolveViaTable()
    :
    entry{YType::boolean, "entry"}
{
    yang_name = "fpc-resolve-via-table"; yang_parent_name = "mi-plat-capabilities";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable::~FpcResolveViaTable()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable::has_data() const
{
    return entry.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpc-resolve-via-table";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FpcResolveViaTable' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiPlatCapabilities::FpcResolveViaTable::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::MiProtoDbgStat()
    :
    fpd_adj_del{YType::uint64, "fpd-adj-del"},
    fpd_adj_drops{YType::uint64, "fpd-adj-drops"},
    fpd_adj_msg{YType::uint64, "fpd-adj-msg"},
    fpd_adj_tx_retry_nh_found{YType::uint64, "fpd-adj-tx-retry-nh-found"},
    fpd_adj_tx_retry_obj_reinit{YType::uint64, "fpd-adj-tx-retry-obj-reinit"},
    fpd_adj_upd{YType::uint64, "fpd-adj-upd"},
    fpd_adj_upd_tx{YType::uint64, "fpd-adj-upd-tx"},
    fpd_adj_upd_tx_nh_found{YType::uint64, "fpd-adj-upd-tx-nh-found"},
    fpd_adj_upd_tx_retry_created{YType::uint64, "fpd-adj-upd-tx-retry-created"},
    fpd_bcdl_msgs{YType::uint64, "fpd-bcdl-msgs"},
    fpd_gbltbl_entries{YType::uint64, "fpd-gbltbl-entries"},
    fpd_gbltbl_rej_entries{YType::uint64, "fpd-gbltbl-rej-entries"},
    fpd_gbltbl_src_entry{YType::uint64, "fpd-gbltbl-src-entry"},
    fpd_lbl_recycled{YType::uint64, "fpd-lbl-recycled"},
    fpd_ldi_avg_backup_activate_time{YType::uint64, "fpd-ldi-avg-backup-activate-time"},
    fpd_ldi_backup_activate_count{YType::uint64, "fpd-ldi-backup-activate-count"},
    fpd_ldi_last_backup_activate_time{YType::uint64, "fpd-ldi-last-backup-activate-time"},
    fpd_ldi_max_backup_activate_time{YType::uint64, "fpd-ldi-max-backup-activate-time"},
    fpd_ldi_min_backup_activate_time{YType::uint64, "fpd-ldi-min-backup-activate-time"},
    fpd_ldi_num_correct_fixup{YType::uint64, "fpd-ldi-num-correct-fixup"},
    fpd_ldi_num_del_refcnt{YType::uint64, "fpd-ldi-num-del-refcnt"},
    fpd_ldi_num_fixedup{YType::uint64, "fpd-ldi-num-fixedup"},
    fpd_ldi_total_backup_activate_time{YType::uint64, "fpd-ldi-total-backup-activate-time"},
    fpd_num_allocs{YType::uint64, "fpd-num-allocs"},
    fpd_num_frees{YType::uint64, "fpd-num-frees"},
    fpd_num_retry{YType::uint64, "fpd-num-retry"},
    fpd_num_retry_touts{YType::uint64, "fpd-num-retry-touts"},
    fpd_num_tbls{YType::uint32, "fpd-num-tbls"},
    fpd_pl_backup_disable_count{YType::uint64, "fpd-pl-backup-disable-count"},
    fpd_pl_backup_enable_count{YType::uint64, "fpd-pl-backup-enable-count"},
    fpd_pl_fast_nfn_count{YType::uint64, "fpd-pl-fast-nfn-count"},
    fpd_pl_inline_res_q{YType::uint64, "fpd-pl-inline-res-q"},
    fpd_pl_num_correct_fixup{YType::uint64, "fpd-pl-num-correct-fixup"},
    fpd_pl_num_queued_fixedup{YType::uint64, "fpd-pl-num-queued-fixedup"},
    fpd_pl_retry_add_exist{YType::uint64, "fpd-pl-retry-add-exist"},
    fpd_pl_with_backup_create_count{YType::uint64, "fpd-pl-with-backup-create-count"},
    fpd_pl_with_backup_del_count{YType::uint64, "fpd-pl-with-backup-del-count"},
    fpd_recursion_constraint_count{YType::uint64, "fpd-recursion-constraint-count"},
    fpd_retryq_size{YType::uint32, "fpd-retryq-size"},
    fpd_route_del{YType::uint64, "fpd-route-del"},
    fpd_route_drops{YType::uint64, "fpd-route-drops"},
    fpd_route_rcv{YType::uint64, "fpd-route-rcv"},
    fpd_route_upd{YType::uint64, "fpd-route-upd"},
    fpd_te_rcv{YType::uint64, "fpd-te-rcv"},
    fpd_te_version_mismatch_drops{YType::uint64, "fpd-te-version-mismatch-drops"},
    fpd_version_mismatch_drops{YType::uint64, "fpd-version-mismatch-drops"},
    fpd_vrftbl_entries{YType::uint64, "fpd-vrftbl-entries"},
    fpd_vrftbl_rej_entries{YType::uint64, "fpd-vrftbl-rej-entries"},
    fpd_vrftbl_src_entry{YType::uint64, "fpd-vrftbl-src-entry"}
    	,
    fpd_gtrie_timing(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming>())
	,fpd_platf_upd_stats(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats>())
{
    fpd_gtrie_timing->parent = this;
    children["fpd-gtrie-timing"] = fpd_gtrie_timing;

    fpd_platf_upd_stats->parent = this;
    children["fpd-platf-upd-stats"] = fpd_platf_upd_stats;

    yang_name = "mi-proto-dbg-stat"; yang_parent_name = "misc";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::~MiProtoDbgStat()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::has_data() const
{
    for (auto const & leaf : fpd_gbltbl_src_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : fpd_num_retry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : fpd_vrftbl_src_entry.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return fpd_adj_del.is_set
	|| fpd_adj_drops.is_set
	|| fpd_adj_msg.is_set
	|| fpd_adj_tx_retry_nh_found.is_set
	|| fpd_adj_tx_retry_obj_reinit.is_set
	|| fpd_adj_upd.is_set
	|| fpd_adj_upd_tx.is_set
	|| fpd_adj_upd_tx_nh_found.is_set
	|| fpd_adj_upd_tx_retry_created.is_set
	|| fpd_bcdl_msgs.is_set
	|| fpd_gbltbl_entries.is_set
	|| fpd_gbltbl_rej_entries.is_set
	|| fpd_lbl_recycled.is_set
	|| fpd_ldi_avg_backup_activate_time.is_set
	|| fpd_ldi_backup_activate_count.is_set
	|| fpd_ldi_last_backup_activate_time.is_set
	|| fpd_ldi_max_backup_activate_time.is_set
	|| fpd_ldi_min_backup_activate_time.is_set
	|| fpd_ldi_num_correct_fixup.is_set
	|| fpd_ldi_num_del_refcnt.is_set
	|| fpd_ldi_num_fixedup.is_set
	|| fpd_ldi_total_backup_activate_time.is_set
	|| fpd_num_allocs.is_set
	|| fpd_num_frees.is_set
	|| fpd_num_retry_touts.is_set
	|| fpd_num_tbls.is_set
	|| fpd_pl_backup_disable_count.is_set
	|| fpd_pl_backup_enable_count.is_set
	|| fpd_pl_fast_nfn_count.is_set
	|| fpd_pl_inline_res_q.is_set
	|| fpd_pl_num_correct_fixup.is_set
	|| fpd_pl_num_queued_fixedup.is_set
	|| fpd_pl_retry_add_exist.is_set
	|| fpd_pl_with_backup_create_count.is_set
	|| fpd_pl_with_backup_del_count.is_set
	|| fpd_recursion_constraint_count.is_set
	|| fpd_retryq_size.is_set
	|| fpd_route_del.is_set
	|| fpd_route_drops.is_set
	|| fpd_route_rcv.is_set
	|| fpd_route_upd.is_set
	|| fpd_te_rcv.is_set
	|| fpd_te_version_mismatch_drops.is_set
	|| fpd_version_mismatch_drops.is_set
	|| fpd_vrftbl_entries.is_set
	|| fpd_vrftbl_rej_entries.is_set
	|| (fpd_gtrie_timing !=  nullptr && fpd_gtrie_timing->has_data())
	|| (fpd_platf_upd_stats !=  nullptr && fpd_platf_upd_stats->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::has_operation() const
{
    for (auto const & leaf : fpd_gbltbl_src_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : fpd_num_retry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : fpd_vrftbl_src_entry.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(fpd_adj_del.operation)
	|| is_set(fpd_adj_drops.operation)
	|| is_set(fpd_adj_msg.operation)
	|| is_set(fpd_adj_tx_retry_nh_found.operation)
	|| is_set(fpd_adj_tx_retry_obj_reinit.operation)
	|| is_set(fpd_adj_upd.operation)
	|| is_set(fpd_adj_upd_tx.operation)
	|| is_set(fpd_adj_upd_tx_nh_found.operation)
	|| is_set(fpd_adj_upd_tx_retry_created.operation)
	|| is_set(fpd_bcdl_msgs.operation)
	|| is_set(fpd_gbltbl_entries.operation)
	|| is_set(fpd_gbltbl_rej_entries.operation)
	|| is_set(fpd_gbltbl_src_entry.operation)
	|| is_set(fpd_lbl_recycled.operation)
	|| is_set(fpd_ldi_avg_backup_activate_time.operation)
	|| is_set(fpd_ldi_backup_activate_count.operation)
	|| is_set(fpd_ldi_last_backup_activate_time.operation)
	|| is_set(fpd_ldi_max_backup_activate_time.operation)
	|| is_set(fpd_ldi_min_backup_activate_time.operation)
	|| is_set(fpd_ldi_num_correct_fixup.operation)
	|| is_set(fpd_ldi_num_del_refcnt.operation)
	|| is_set(fpd_ldi_num_fixedup.operation)
	|| is_set(fpd_ldi_total_backup_activate_time.operation)
	|| is_set(fpd_num_allocs.operation)
	|| is_set(fpd_num_frees.operation)
	|| is_set(fpd_num_retry.operation)
	|| is_set(fpd_num_retry_touts.operation)
	|| is_set(fpd_num_tbls.operation)
	|| is_set(fpd_pl_backup_disable_count.operation)
	|| is_set(fpd_pl_backup_enable_count.operation)
	|| is_set(fpd_pl_fast_nfn_count.operation)
	|| is_set(fpd_pl_inline_res_q.operation)
	|| is_set(fpd_pl_num_correct_fixup.operation)
	|| is_set(fpd_pl_num_queued_fixedup.operation)
	|| is_set(fpd_pl_retry_add_exist.operation)
	|| is_set(fpd_pl_with_backup_create_count.operation)
	|| is_set(fpd_pl_with_backup_del_count.operation)
	|| is_set(fpd_recursion_constraint_count.operation)
	|| is_set(fpd_retryq_size.operation)
	|| is_set(fpd_route_del.operation)
	|| is_set(fpd_route_drops.operation)
	|| is_set(fpd_route_rcv.operation)
	|| is_set(fpd_route_upd.operation)
	|| is_set(fpd_te_rcv.operation)
	|| is_set(fpd_te_version_mismatch_drops.operation)
	|| is_set(fpd_version_mismatch_drops.operation)
	|| is_set(fpd_vrftbl_entries.operation)
	|| is_set(fpd_vrftbl_rej_entries.operation)
	|| is_set(fpd_vrftbl_src_entry.operation)
	|| (fpd_gtrie_timing !=  nullptr && fpd_gtrie_timing->has_operation())
	|| (fpd_platf_upd_stats !=  nullptr && fpd_platf_upd_stats->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-proto-dbg-stat";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MiProtoDbgStat' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpd_adj_del.is_set || is_set(fpd_adj_del.operation)) leaf_name_data.push_back(fpd_adj_del.get_name_leafdata());
    if (fpd_adj_drops.is_set || is_set(fpd_adj_drops.operation)) leaf_name_data.push_back(fpd_adj_drops.get_name_leafdata());
    if (fpd_adj_msg.is_set || is_set(fpd_adj_msg.operation)) leaf_name_data.push_back(fpd_adj_msg.get_name_leafdata());
    if (fpd_adj_tx_retry_nh_found.is_set || is_set(fpd_adj_tx_retry_nh_found.operation)) leaf_name_data.push_back(fpd_adj_tx_retry_nh_found.get_name_leafdata());
    if (fpd_adj_tx_retry_obj_reinit.is_set || is_set(fpd_adj_tx_retry_obj_reinit.operation)) leaf_name_data.push_back(fpd_adj_tx_retry_obj_reinit.get_name_leafdata());
    if (fpd_adj_upd.is_set || is_set(fpd_adj_upd.operation)) leaf_name_data.push_back(fpd_adj_upd.get_name_leafdata());
    if (fpd_adj_upd_tx.is_set || is_set(fpd_adj_upd_tx.operation)) leaf_name_data.push_back(fpd_adj_upd_tx.get_name_leafdata());
    if (fpd_adj_upd_tx_nh_found.is_set || is_set(fpd_adj_upd_tx_nh_found.operation)) leaf_name_data.push_back(fpd_adj_upd_tx_nh_found.get_name_leafdata());
    if (fpd_adj_upd_tx_retry_created.is_set || is_set(fpd_adj_upd_tx_retry_created.operation)) leaf_name_data.push_back(fpd_adj_upd_tx_retry_created.get_name_leafdata());
    if (fpd_bcdl_msgs.is_set || is_set(fpd_bcdl_msgs.operation)) leaf_name_data.push_back(fpd_bcdl_msgs.get_name_leafdata());
    if (fpd_gbltbl_entries.is_set || is_set(fpd_gbltbl_entries.operation)) leaf_name_data.push_back(fpd_gbltbl_entries.get_name_leafdata());
    if (fpd_gbltbl_rej_entries.is_set || is_set(fpd_gbltbl_rej_entries.operation)) leaf_name_data.push_back(fpd_gbltbl_rej_entries.get_name_leafdata());
    if (fpd_lbl_recycled.is_set || is_set(fpd_lbl_recycled.operation)) leaf_name_data.push_back(fpd_lbl_recycled.get_name_leafdata());
    if (fpd_ldi_avg_backup_activate_time.is_set || is_set(fpd_ldi_avg_backup_activate_time.operation)) leaf_name_data.push_back(fpd_ldi_avg_backup_activate_time.get_name_leafdata());
    if (fpd_ldi_backup_activate_count.is_set || is_set(fpd_ldi_backup_activate_count.operation)) leaf_name_data.push_back(fpd_ldi_backup_activate_count.get_name_leafdata());
    if (fpd_ldi_last_backup_activate_time.is_set || is_set(fpd_ldi_last_backup_activate_time.operation)) leaf_name_data.push_back(fpd_ldi_last_backup_activate_time.get_name_leafdata());
    if (fpd_ldi_max_backup_activate_time.is_set || is_set(fpd_ldi_max_backup_activate_time.operation)) leaf_name_data.push_back(fpd_ldi_max_backup_activate_time.get_name_leafdata());
    if (fpd_ldi_min_backup_activate_time.is_set || is_set(fpd_ldi_min_backup_activate_time.operation)) leaf_name_data.push_back(fpd_ldi_min_backup_activate_time.get_name_leafdata());
    if (fpd_ldi_num_correct_fixup.is_set || is_set(fpd_ldi_num_correct_fixup.operation)) leaf_name_data.push_back(fpd_ldi_num_correct_fixup.get_name_leafdata());
    if (fpd_ldi_num_del_refcnt.is_set || is_set(fpd_ldi_num_del_refcnt.operation)) leaf_name_data.push_back(fpd_ldi_num_del_refcnt.get_name_leafdata());
    if (fpd_ldi_num_fixedup.is_set || is_set(fpd_ldi_num_fixedup.operation)) leaf_name_data.push_back(fpd_ldi_num_fixedup.get_name_leafdata());
    if (fpd_ldi_total_backup_activate_time.is_set || is_set(fpd_ldi_total_backup_activate_time.operation)) leaf_name_data.push_back(fpd_ldi_total_backup_activate_time.get_name_leafdata());
    if (fpd_num_allocs.is_set || is_set(fpd_num_allocs.operation)) leaf_name_data.push_back(fpd_num_allocs.get_name_leafdata());
    if (fpd_num_frees.is_set || is_set(fpd_num_frees.operation)) leaf_name_data.push_back(fpd_num_frees.get_name_leafdata());
    if (fpd_num_retry_touts.is_set || is_set(fpd_num_retry_touts.operation)) leaf_name_data.push_back(fpd_num_retry_touts.get_name_leafdata());
    if (fpd_num_tbls.is_set || is_set(fpd_num_tbls.operation)) leaf_name_data.push_back(fpd_num_tbls.get_name_leafdata());
    if (fpd_pl_backup_disable_count.is_set || is_set(fpd_pl_backup_disable_count.operation)) leaf_name_data.push_back(fpd_pl_backup_disable_count.get_name_leafdata());
    if (fpd_pl_backup_enable_count.is_set || is_set(fpd_pl_backup_enable_count.operation)) leaf_name_data.push_back(fpd_pl_backup_enable_count.get_name_leafdata());
    if (fpd_pl_fast_nfn_count.is_set || is_set(fpd_pl_fast_nfn_count.operation)) leaf_name_data.push_back(fpd_pl_fast_nfn_count.get_name_leafdata());
    if (fpd_pl_inline_res_q.is_set || is_set(fpd_pl_inline_res_q.operation)) leaf_name_data.push_back(fpd_pl_inline_res_q.get_name_leafdata());
    if (fpd_pl_num_correct_fixup.is_set || is_set(fpd_pl_num_correct_fixup.operation)) leaf_name_data.push_back(fpd_pl_num_correct_fixup.get_name_leafdata());
    if (fpd_pl_num_queued_fixedup.is_set || is_set(fpd_pl_num_queued_fixedup.operation)) leaf_name_data.push_back(fpd_pl_num_queued_fixedup.get_name_leafdata());
    if (fpd_pl_retry_add_exist.is_set || is_set(fpd_pl_retry_add_exist.operation)) leaf_name_data.push_back(fpd_pl_retry_add_exist.get_name_leafdata());
    if (fpd_pl_with_backup_create_count.is_set || is_set(fpd_pl_with_backup_create_count.operation)) leaf_name_data.push_back(fpd_pl_with_backup_create_count.get_name_leafdata());
    if (fpd_pl_with_backup_del_count.is_set || is_set(fpd_pl_with_backup_del_count.operation)) leaf_name_data.push_back(fpd_pl_with_backup_del_count.get_name_leafdata());
    if (fpd_recursion_constraint_count.is_set || is_set(fpd_recursion_constraint_count.operation)) leaf_name_data.push_back(fpd_recursion_constraint_count.get_name_leafdata());
    if (fpd_retryq_size.is_set || is_set(fpd_retryq_size.operation)) leaf_name_data.push_back(fpd_retryq_size.get_name_leafdata());
    if (fpd_route_del.is_set || is_set(fpd_route_del.operation)) leaf_name_data.push_back(fpd_route_del.get_name_leafdata());
    if (fpd_route_drops.is_set || is_set(fpd_route_drops.operation)) leaf_name_data.push_back(fpd_route_drops.get_name_leafdata());
    if (fpd_route_rcv.is_set || is_set(fpd_route_rcv.operation)) leaf_name_data.push_back(fpd_route_rcv.get_name_leafdata());
    if (fpd_route_upd.is_set || is_set(fpd_route_upd.operation)) leaf_name_data.push_back(fpd_route_upd.get_name_leafdata());
    if (fpd_te_rcv.is_set || is_set(fpd_te_rcv.operation)) leaf_name_data.push_back(fpd_te_rcv.get_name_leafdata());
    if (fpd_te_version_mismatch_drops.is_set || is_set(fpd_te_version_mismatch_drops.operation)) leaf_name_data.push_back(fpd_te_version_mismatch_drops.get_name_leafdata());
    if (fpd_version_mismatch_drops.is_set || is_set(fpd_version_mismatch_drops.operation)) leaf_name_data.push_back(fpd_version_mismatch_drops.get_name_leafdata());
    if (fpd_vrftbl_entries.is_set || is_set(fpd_vrftbl_entries.operation)) leaf_name_data.push_back(fpd_vrftbl_entries.get_name_leafdata());
    if (fpd_vrftbl_rej_entries.is_set || is_set(fpd_vrftbl_rej_entries.operation)) leaf_name_data.push_back(fpd_vrftbl_rej_entries.get_name_leafdata());

    auto fpd_gbltbl_src_entry_name_datas = fpd_gbltbl_src_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fpd_gbltbl_src_entry_name_datas.begin(), fpd_gbltbl_src_entry_name_datas.end());
    auto fpd_num_retry_name_datas = fpd_num_retry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fpd_num_retry_name_datas.begin(), fpd_num_retry_name_datas.end());
    auto fpd_vrftbl_src_entry_name_datas = fpd_vrftbl_src_entry.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fpd_vrftbl_src_entry_name_datas.begin(), fpd_vrftbl_src_entry_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fpd-gtrie-timing")
    {
        if(fpd_gtrie_timing != nullptr)
        {
            children["fpd-gtrie-timing"] = fpd_gtrie_timing;
        }
        else
        {
            fpd_gtrie_timing = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming>();
            fpd_gtrie_timing->parent = this;
            children["fpd-gtrie-timing"] = fpd_gtrie_timing;
        }
        return children.at("fpd-gtrie-timing");
    }

    if(child_yang_name == "fpd-platf-upd-stats")
    {
        if(fpd_platf_upd_stats != nullptr)
        {
            children["fpd-platf-upd-stats"] = fpd_platf_upd_stats;
        }
        else
        {
            fpd_platf_upd_stats = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats>();
            fpd_platf_upd_stats->parent = this;
            children["fpd-platf-upd-stats"] = fpd_platf_upd_stats;
        }
        return children.at("fpd-platf-upd-stats");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::get_children()
{
    if(children.find("fpd-gtrie-timing") == children.end())
    {
        if(fpd_gtrie_timing != nullptr)
        {
            children["fpd-gtrie-timing"] = fpd_gtrie_timing;
        }
    }

    if(children.find("fpd-platf-upd-stats") == children.end())
    {
        if(fpd_platf_upd_stats != nullptr)
        {
            children["fpd-platf-upd-stats"] = fpd_platf_upd_stats;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fpd-adj-del")
    {
        fpd_adj_del = value;
    }
    if(value_path == "fpd-adj-drops")
    {
        fpd_adj_drops = value;
    }
    if(value_path == "fpd-adj-msg")
    {
        fpd_adj_msg = value;
    }
    if(value_path == "fpd-adj-tx-retry-nh-found")
    {
        fpd_adj_tx_retry_nh_found = value;
    }
    if(value_path == "fpd-adj-tx-retry-obj-reinit")
    {
        fpd_adj_tx_retry_obj_reinit = value;
    }
    if(value_path == "fpd-adj-upd")
    {
        fpd_adj_upd = value;
    }
    if(value_path == "fpd-adj-upd-tx")
    {
        fpd_adj_upd_tx = value;
    }
    if(value_path == "fpd-adj-upd-tx-nh-found")
    {
        fpd_adj_upd_tx_nh_found = value;
    }
    if(value_path == "fpd-adj-upd-tx-retry-created")
    {
        fpd_adj_upd_tx_retry_created = value;
    }
    if(value_path == "fpd-bcdl-msgs")
    {
        fpd_bcdl_msgs = value;
    }
    if(value_path == "fpd-gbltbl-entries")
    {
        fpd_gbltbl_entries = value;
    }
    if(value_path == "fpd-gbltbl-rej-entries")
    {
        fpd_gbltbl_rej_entries = value;
    }
    if(value_path == "fpd-gbltbl-src-entry")
    {
        fpd_gbltbl_src_entry.append(value);
    }
    if(value_path == "fpd-lbl-recycled")
    {
        fpd_lbl_recycled = value;
    }
    if(value_path == "fpd-ldi-avg-backup-activate-time")
    {
        fpd_ldi_avg_backup_activate_time = value;
    }
    if(value_path == "fpd-ldi-backup-activate-count")
    {
        fpd_ldi_backup_activate_count = value;
    }
    if(value_path == "fpd-ldi-last-backup-activate-time")
    {
        fpd_ldi_last_backup_activate_time = value;
    }
    if(value_path == "fpd-ldi-max-backup-activate-time")
    {
        fpd_ldi_max_backup_activate_time = value;
    }
    if(value_path == "fpd-ldi-min-backup-activate-time")
    {
        fpd_ldi_min_backup_activate_time = value;
    }
    if(value_path == "fpd-ldi-num-correct-fixup")
    {
        fpd_ldi_num_correct_fixup = value;
    }
    if(value_path == "fpd-ldi-num-del-refcnt")
    {
        fpd_ldi_num_del_refcnt = value;
    }
    if(value_path == "fpd-ldi-num-fixedup")
    {
        fpd_ldi_num_fixedup = value;
    }
    if(value_path == "fpd-ldi-total-backup-activate-time")
    {
        fpd_ldi_total_backup_activate_time = value;
    }
    if(value_path == "fpd-num-allocs")
    {
        fpd_num_allocs = value;
    }
    if(value_path == "fpd-num-frees")
    {
        fpd_num_frees = value;
    }
    if(value_path == "fpd-num-retry")
    {
        fpd_num_retry.append(value);
    }
    if(value_path == "fpd-num-retry-touts")
    {
        fpd_num_retry_touts = value;
    }
    if(value_path == "fpd-num-tbls")
    {
        fpd_num_tbls = value;
    }
    if(value_path == "fpd-pl-backup-disable-count")
    {
        fpd_pl_backup_disable_count = value;
    }
    if(value_path == "fpd-pl-backup-enable-count")
    {
        fpd_pl_backup_enable_count = value;
    }
    if(value_path == "fpd-pl-fast-nfn-count")
    {
        fpd_pl_fast_nfn_count = value;
    }
    if(value_path == "fpd-pl-inline-res-q")
    {
        fpd_pl_inline_res_q = value;
    }
    if(value_path == "fpd-pl-num-correct-fixup")
    {
        fpd_pl_num_correct_fixup = value;
    }
    if(value_path == "fpd-pl-num-queued-fixedup")
    {
        fpd_pl_num_queued_fixedup = value;
    }
    if(value_path == "fpd-pl-retry-add-exist")
    {
        fpd_pl_retry_add_exist = value;
    }
    if(value_path == "fpd-pl-with-backup-create-count")
    {
        fpd_pl_with_backup_create_count = value;
    }
    if(value_path == "fpd-pl-with-backup-del-count")
    {
        fpd_pl_with_backup_del_count = value;
    }
    if(value_path == "fpd-recursion-constraint-count")
    {
        fpd_recursion_constraint_count = value;
    }
    if(value_path == "fpd-retryq-size")
    {
        fpd_retryq_size = value;
    }
    if(value_path == "fpd-route-del")
    {
        fpd_route_del = value;
    }
    if(value_path == "fpd-route-drops")
    {
        fpd_route_drops = value;
    }
    if(value_path == "fpd-route-rcv")
    {
        fpd_route_rcv = value;
    }
    if(value_path == "fpd-route-upd")
    {
        fpd_route_upd = value;
    }
    if(value_path == "fpd-te-rcv")
    {
        fpd_te_rcv = value;
    }
    if(value_path == "fpd-te-version-mismatch-drops")
    {
        fpd_te_version_mismatch_drops = value;
    }
    if(value_path == "fpd-version-mismatch-drops")
    {
        fpd_version_mismatch_drops = value;
    }
    if(value_path == "fpd-vrftbl-entries")
    {
        fpd_vrftbl_entries = value;
    }
    if(value_path == "fpd-vrftbl-rej-entries")
    {
        fpd_vrftbl_rej_entries = value;
    }
    if(value_path == "fpd-vrftbl-src-entry")
    {
        fpd_vrftbl_src_entry.append(value);
    }
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpdPlatfUpdStats()
    :
    fpus_num_failure{YType::uint64, "fpus-num-failure"},
    fpus_num_success{YType::uint64, "fpus-num-success"},
    fpus_upd_total_time{YType::uint64, "fpus-upd-total-time"}
{
    yang_name = "fpd-platf-upd-stats"; yang_parent_name = "mi-proto-dbg-stat";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::~FpdPlatfUpdStats()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::has_data() const
{
    for (std::size_t index=0; index<fpus_obj_stat.size(); index++)
    {
        if(fpus_obj_stat[index]->has_data())
            return true;
    }
    return fpus_num_failure.is_set
	|| fpus_num_success.is_set
	|| fpus_upd_total_time.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::has_operation() const
{
    for (std::size_t index=0; index<fpus_obj_stat.size(); index++)
    {
        if(fpus_obj_stat[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(fpus_num_failure.operation)
	|| is_set(fpus_num_success.operation)
	|| is_set(fpus_upd_total_time.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-platf-upd-stats";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FpdPlatfUpdStats' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fpus_num_failure.is_set || is_set(fpus_num_failure.operation)) leaf_name_data.push_back(fpus_num_failure.get_name_leafdata());
    if (fpus_num_success.is_set || is_set(fpus_num_success.operation)) leaf_name_data.push_back(fpus_num_success.get_name_leafdata());
    if (fpus_upd_total_time.is_set || is_set(fpus_upd_total_time.operation)) leaf_name_data.push_back(fpus_upd_total_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fpus-obj-stat")
    {
        for(auto const & c : fpus_obj_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat>();
        c->parent = this;
        fpus_obj_stat.push_back(std::move(c));
        children[segment_path] = fpus_obj_stat.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::get_children()
{
    for (auto const & c : fpus_obj_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fpus-num-failure")
    {
        fpus_num_failure = value;
    }
    if(value_path == "fpus-num-success")
    {
        fpus_num_success = value;
    }
    if(value_path == "fpus-upd-total-time")
    {
        fpus_upd_total_time = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FpusObjStat()
    :
    fos_tot_upd_time{YType::uint64, "fos-tot-upd-time"},
    fos_tot_updates{YType::uint64, "fos-tot-updates"}
{
    yang_name = "fpus-obj-stat"; yang_parent_name = "fpd-platf-upd-stats";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::~FpusObjStat()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::has_data() const
{
    for (std::size_t index=0; index<fos_obj_act_stat.size(); index++)
    {
        if(fos_obj_act_stat[index]->has_data())
            return true;
    }
    return fos_tot_upd_time.is_set
	|| fos_tot_updates.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::has_operation() const
{
    for (std::size_t index=0; index<fos_obj_act_stat.size(); index++)
    {
        if(fos_obj_act_stat[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(fos_tot_upd_time.operation)
	|| is_set(fos_tot_updates.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpus-obj-stat";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FpusObjStat' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fos_tot_upd_time.is_set || is_set(fos_tot_upd_time.operation)) leaf_name_data.push_back(fos_tot_upd_time.get_name_leafdata());
    if (fos_tot_updates.is_set || is_set(fos_tot_updates.operation)) leaf_name_data.push_back(fos_tot_updates.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fos-obj-act-stat")
    {
        for(auto const & c : fos_obj_act_stat)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat>();
        c->parent = this;
        fos_obj_act_stat.push_back(std::move(c));
        children[segment_path] = fos_obj_act_stat.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::get_children()
{
    for (auto const & c : fos_obj_act_stat)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fos-tot-upd-time")
    {
        fos_tot_upd_time = value;
    }
    if(value_path == "fos-tot-updates")
    {
        fos_tot_updates = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::FosObjActStat()
    :
    foas_max_time{YType::uint64, "foas-max-time"},
    foas_max_tstamp{YType::uint64, "foas-max-tstamp"},
    foas_num_failure{YType::uint64, "foas-num-failure"},
    foas_num_success{YType::uint64, "foas-num-success"},
    foas_tot_upd_time{YType::uint64, "foas-tot-upd-time"},
    foas_tot_updates{YType::uint64, "foas-tot-updates"},
    foas_tot_updates_zero{YType::uint64, "foas-tot-updates-zero"}
{
    yang_name = "fos-obj-act-stat"; yang_parent_name = "fpus-obj-stat";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::~FosObjActStat()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::has_data() const
{
    return foas_max_time.is_set
	|| foas_max_tstamp.is_set
	|| foas_num_failure.is_set
	|| foas_num_success.is_set
	|| foas_tot_upd_time.is_set
	|| foas_tot_updates.is_set
	|| foas_tot_updates_zero.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::has_operation() const
{
    return is_set(operation)
	|| is_set(foas_max_time.operation)
	|| is_set(foas_max_tstamp.operation)
	|| is_set(foas_num_failure.operation)
	|| is_set(foas_num_success.operation)
	|| is_set(foas_tot_upd_time.operation)
	|| is_set(foas_tot_updates.operation)
	|| is_set(foas_tot_updates_zero.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fos-obj-act-stat";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FosObjActStat' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (foas_max_time.is_set || is_set(foas_max_time.operation)) leaf_name_data.push_back(foas_max_time.get_name_leafdata());
    if (foas_max_tstamp.is_set || is_set(foas_max_tstamp.operation)) leaf_name_data.push_back(foas_max_tstamp.get_name_leafdata());
    if (foas_num_failure.is_set || is_set(foas_num_failure.operation)) leaf_name_data.push_back(foas_num_failure.get_name_leafdata());
    if (foas_num_success.is_set || is_set(foas_num_success.operation)) leaf_name_data.push_back(foas_num_success.get_name_leafdata());
    if (foas_tot_upd_time.is_set || is_set(foas_tot_upd_time.operation)) leaf_name_data.push_back(foas_tot_upd_time.get_name_leafdata());
    if (foas_tot_updates.is_set || is_set(foas_tot_updates.operation)) leaf_name_data.push_back(foas_tot_updates.get_name_leafdata());
    if (foas_tot_updates_zero.is_set || is_set(foas_tot_updates_zero.operation)) leaf_name_data.push_back(foas_tot_updates_zero.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdPlatfUpdStats::FpusObjStat::FosObjActStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "foas-max-time")
    {
        foas_max_time = value;
    }
    if(value_path == "foas-max-tstamp")
    {
        foas_max_tstamp = value;
    }
    if(value_path == "foas-num-failure")
    {
        foas_num_failure = value;
    }
    if(value_path == "foas-num-success")
    {
        foas_num_success = value;
    }
    if(value_path == "foas-tot-upd-time")
    {
        foas_tot_upd_time = value;
    }
    if(value_path == "foas-tot-updates")
    {
        foas_tot_updates = value;
    }
    if(value_path == "foas-tot-updates-zero")
    {
        foas_tot_updates_zero = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FpdGtrieTiming()
    :
    fgt_num_failure{YType::uint64, "fgt-num-failure"},
    fgt_num_success{YType::uint64, "fgt-num-success"},
    fgt_upd_total_time{YType::uint64, "fgt-upd-total-time"}
{
    yang_name = "fpd-gtrie-timing"; yang_parent_name = "mi-proto-dbg-stat";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::~FpdGtrieTiming()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::has_data() const
{
    for (std::size_t index=0; index<fgt_gtrie_fn_timing.size(); index++)
    {
        if(fgt_gtrie_fn_timing[index]->has_data())
            return true;
    }
    return fgt_num_failure.is_set
	|| fgt_num_success.is_set
	|| fgt_upd_total_time.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::has_operation() const
{
    for (std::size_t index=0; index<fgt_gtrie_fn_timing.size(); index++)
    {
        if(fgt_gtrie_fn_timing[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(fgt_num_failure.operation)
	|| is_set(fgt_num_success.operation)
	|| is_set(fgt_upd_total_time.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fpd-gtrie-timing";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FpdGtrieTiming' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fgt_num_failure.is_set || is_set(fgt_num_failure.operation)) leaf_name_data.push_back(fgt_num_failure.get_name_leafdata());
    if (fgt_num_success.is_set || is_set(fgt_num_success.operation)) leaf_name_data.push_back(fgt_num_success.get_name_leafdata());
    if (fgt_upd_total_time.is_set || is_set(fgt_upd_total_time.operation)) leaf_name_data.push_back(fgt_upd_total_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fgt-gtrie-fn-timing")
    {
        for(auto const & c : fgt_gtrie_fn_timing)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming>();
        c->parent = this;
        fgt_gtrie_fn_timing.push_back(std::move(c));
        children[segment_path] = fgt_gtrie_fn_timing.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::get_children()
{
    for (auto const & c : fgt_gtrie_fn_timing)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fgt-num-failure")
    {
        fgt_num_failure = value;
    }
    if(value_path == "fgt-num-success")
    {
        fgt_num_success = value;
    }
    if(value_path == "fgt-upd-total-time")
    {
        fgt_upd_total_time = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::FgtGtrieFnTiming()
    :
    fgft_fn{YType::str, "fgft-fn"},
    fgft_max_time{YType::uint64, "fgft-max-time"},
    fgft_max_tstamp{YType::uint64, "fgft-max-tstamp"},
    fgft_tot_upd_time{YType::uint64, "fgft-tot-upd-time"},
    fgft_tot_updates{YType::uint64, "fgft-tot-updates"},
    fgft_tot_updates_zero{YType::uint64, "fgft-tot-updates-zero"}
{
    yang_name = "fgt-gtrie-fn-timing"; yang_parent_name = "fpd-gtrie-timing";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::~FgtGtrieFnTiming()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::has_data() const
{
    return fgft_fn.is_set
	|| fgft_max_time.is_set
	|| fgft_max_tstamp.is_set
	|| fgft_tot_upd_time.is_set
	|| fgft_tot_updates.is_set
	|| fgft_tot_updates_zero.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::has_operation() const
{
    return is_set(operation)
	|| is_set(fgft_fn.operation)
	|| is_set(fgft_max_time.operation)
	|| is_set(fgft_max_tstamp.operation)
	|| is_set(fgft_tot_upd_time.operation)
	|| is_set(fgft_tot_updates.operation)
	|| is_set(fgft_tot_updates_zero.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fgt-gtrie-fn-timing";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FgtGtrieFnTiming' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fgft_fn.is_set || is_set(fgft_fn.operation)) leaf_name_data.push_back(fgft_fn.get_name_leafdata());
    if (fgft_max_time.is_set || is_set(fgft_max_time.operation)) leaf_name_data.push_back(fgft_max_time.get_name_leafdata());
    if (fgft_max_tstamp.is_set || is_set(fgft_max_tstamp.operation)) leaf_name_data.push_back(fgft_max_tstamp.get_name_leafdata());
    if (fgft_tot_upd_time.is_set || is_set(fgft_tot_upd_time.operation)) leaf_name_data.push_back(fgft_tot_upd_time.get_name_leafdata());
    if (fgft_tot_updates.is_set || is_set(fgft_tot_updates.operation)) leaf_name_data.push_back(fgft_tot_updates.get_name_leafdata());
    if (fgft_tot_updates_zero.is_set || is_set(fgft_tot_updates_zero.operation)) leaf_name_data.push_back(fgft_tot_updates_zero.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiProtoDbgStat::FpdGtrieTiming::FgtGtrieFnTiming::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fgft-fn")
    {
        fgft_fn = value;
    }
    if(value_path == "fgft-max-time")
    {
        fgft_max_time = value;
    }
    if(value_path == "fgft-max-tstamp")
    {
        fgft_max_tstamp = value;
    }
    if(value_path == "fgft-tot-upd-time")
    {
        fgft_tot_upd_time = value;
    }
    if(value_path == "fgft-tot-updates")
    {
        fgft_tot_updates = value;
    }
    if(value_path == "fgft-tot-updates-zero")
    {
        fgft_tot_updates_zero = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::MiIdbPurgeCntr()
    :
    fpp_cntr{YType::uint32, "fpp-cntr"}
{
    yang_name = "mi-idb-purge-cntr"; yang_parent_name = "misc";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::~MiIdbPurgeCntr()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::has_data() const
{
    for (auto const & leaf : fpp_cntr.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::has_operation() const
{
    for (auto const & leaf : fpp_cntr.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(fpp_cntr.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-idb-purge-cntr";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MiIdbPurgeCntr' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto fpp_cntr_name_datas = fpp_cntr.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fpp_cntr_name_datas.begin(), fpp_cntr_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiIdbPurgeCntr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fpp-cntr")
    {
        fpp_cntr.append(value);
    }
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::MiDel()
    :
    msec_time{YType::uint64, "msec-time"},
    prfx{YType::str, "prfx"},
    prfx_len{YType::uint16, "prfx-len"},
    prfx_proto{YType::uint16, "prfx-proto"},
    tableid{YType::uint32, "tableid"}
{
    yang_name = "mi-del"; yang_parent_name = "misc";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::~MiDel()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::has_data() const
{
    return msec_time.is_set
	|| prfx.is_set
	|| prfx_len.is_set
	|| prfx_proto.is_set
	|| tableid.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::has_operation() const
{
    return is_set(operation)
	|| is_set(msec_time.operation)
	|| is_set(prfx.operation)
	|| is_set(prfx_len.operation)
	|| is_set(prfx_proto.operation)
	|| is_set(tableid.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-del";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MiDel' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msec_time.is_set || is_set(msec_time.operation)) leaf_name_data.push_back(msec_time.get_name_leafdata());
    if (prfx.is_set || is_set(prfx.operation)) leaf_name_data.push_back(prfx.get_name_leafdata());
    if (prfx_len.is_set || is_set(prfx_len.operation)) leaf_name_data.push_back(prfx_len.get_name_leafdata());
    if (prfx_proto.is_set || is_set(prfx_proto.operation)) leaf_name_data.push_back(prfx_proto.get_name_leafdata());
    if (tableid.is_set || is_set(tableid.operation)) leaf_name_data.push_back(tableid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiDel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "msec-time")
    {
        msec_time = value;
    }
    if(value_path == "prfx")
    {
        prfx = value;
    }
    if(value_path == "prfx-len")
    {
        prfx_len = value;
    }
    if(value_path == "prfx-proto")
    {
        prfx_proto = value;
    }
    if(value_path == "tableid")
    {
        tableid = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::MiFrrStat()
    :
    mi_num_bfd_down{YType::uint32, "mi-num-bfd-down"},
    mi_num_bkup_frr_objects{YType::uint32, "mi-num-bkup-frr-objects"},
    mi_num_frr_logs{YType::uint32, "mi-num-frr-logs"},
    mi_num_frr_proto_events{YType::uint32, "mi-num-frr-proto-events"},
    mi_num_frr_reset{YType::uint32, "mi-num-frr-reset"},
    mi_num_frr_reset_queue_adds{YType::uint32, "mi-num-frr-reset-queue-adds"},
    mi_num_frr_reset_queue_remove{YType::uint32, "mi-num-frr-reset-queue-remove"},
    mi_num_intf_frr{YType::uint32, "mi-num-intf-frr"},
    mi_num_parent_intf_frr{YType::uint32, "mi-num-parent-intf-frr"},
    mi_num_pfi_intf_down{YType::uint32, "mi-num-pfi-intf-down"},
    mi_num_prot_frr_objects{YType::uint32, "mi-num-prot-frr-objects"},
    mi_num_tunid_alloc_failures{YType::uint32, "mi-num-tunid-alloc-failures"},
    mi_num_tunid_allocs{YType::uint32, "mi-num-tunid-allocs"},
    mi_num_tunid_free_failures{YType::uint32, "mi-num-tunid-free-failures"},
    mi_num_tunid_frees{YType::uint32, "mi-num-tunid-frees"}
{
    yang_name = "mi-frr-stat"; yang_parent_name = "misc";
}

Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::~MiFrrStat()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::has_data() const
{
    return mi_num_bfd_down.is_set
	|| mi_num_bkup_frr_objects.is_set
	|| mi_num_frr_logs.is_set
	|| mi_num_frr_proto_events.is_set
	|| mi_num_frr_reset.is_set
	|| mi_num_frr_reset_queue_adds.is_set
	|| mi_num_frr_reset_queue_remove.is_set
	|| mi_num_intf_frr.is_set
	|| mi_num_parent_intf_frr.is_set
	|| mi_num_pfi_intf_down.is_set
	|| mi_num_prot_frr_objects.is_set
	|| mi_num_tunid_alloc_failures.is_set
	|| mi_num_tunid_allocs.is_set
	|| mi_num_tunid_free_failures.is_set
	|| mi_num_tunid_frees.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::has_operation() const
{
    return is_set(operation)
	|| is_set(mi_num_bfd_down.operation)
	|| is_set(mi_num_bkup_frr_objects.operation)
	|| is_set(mi_num_frr_logs.operation)
	|| is_set(mi_num_frr_proto_events.operation)
	|| is_set(mi_num_frr_reset.operation)
	|| is_set(mi_num_frr_reset_queue_adds.operation)
	|| is_set(mi_num_frr_reset_queue_remove.operation)
	|| is_set(mi_num_intf_frr.operation)
	|| is_set(mi_num_parent_intf_frr.operation)
	|| is_set(mi_num_pfi_intf_down.operation)
	|| is_set(mi_num_prot_frr_objects.operation)
	|| is_set(mi_num_tunid_alloc_failures.operation)
	|| is_set(mi_num_tunid_allocs.operation)
	|| is_set(mi_num_tunid_free_failures.operation)
	|| is_set(mi_num_tunid_frees.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mi-frr-stat";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MiFrrStat' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mi_num_bfd_down.is_set || is_set(mi_num_bfd_down.operation)) leaf_name_data.push_back(mi_num_bfd_down.get_name_leafdata());
    if (mi_num_bkup_frr_objects.is_set || is_set(mi_num_bkup_frr_objects.operation)) leaf_name_data.push_back(mi_num_bkup_frr_objects.get_name_leafdata());
    if (mi_num_frr_logs.is_set || is_set(mi_num_frr_logs.operation)) leaf_name_data.push_back(mi_num_frr_logs.get_name_leafdata());
    if (mi_num_frr_proto_events.is_set || is_set(mi_num_frr_proto_events.operation)) leaf_name_data.push_back(mi_num_frr_proto_events.get_name_leafdata());
    if (mi_num_frr_reset.is_set || is_set(mi_num_frr_reset.operation)) leaf_name_data.push_back(mi_num_frr_reset.get_name_leafdata());
    if (mi_num_frr_reset_queue_adds.is_set || is_set(mi_num_frr_reset_queue_adds.operation)) leaf_name_data.push_back(mi_num_frr_reset_queue_adds.get_name_leafdata());
    if (mi_num_frr_reset_queue_remove.is_set || is_set(mi_num_frr_reset_queue_remove.operation)) leaf_name_data.push_back(mi_num_frr_reset_queue_remove.get_name_leafdata());
    if (mi_num_intf_frr.is_set || is_set(mi_num_intf_frr.operation)) leaf_name_data.push_back(mi_num_intf_frr.get_name_leafdata());
    if (mi_num_parent_intf_frr.is_set || is_set(mi_num_parent_intf_frr.operation)) leaf_name_data.push_back(mi_num_parent_intf_frr.get_name_leafdata());
    if (mi_num_pfi_intf_down.is_set || is_set(mi_num_pfi_intf_down.operation)) leaf_name_data.push_back(mi_num_pfi_intf_down.get_name_leafdata());
    if (mi_num_prot_frr_objects.is_set || is_set(mi_num_prot_frr_objects.operation)) leaf_name_data.push_back(mi_num_prot_frr_objects.get_name_leafdata());
    if (mi_num_tunid_alloc_failures.is_set || is_set(mi_num_tunid_alloc_failures.operation)) leaf_name_data.push_back(mi_num_tunid_alloc_failures.get_name_leafdata());
    if (mi_num_tunid_allocs.is_set || is_set(mi_num_tunid_allocs.operation)) leaf_name_data.push_back(mi_num_tunid_allocs.get_name_leafdata());
    if (mi_num_tunid_free_failures.is_set || is_set(mi_num_tunid_free_failures.operation)) leaf_name_data.push_back(mi_num_tunid_free_failures.get_name_leafdata());
    if (mi_num_tunid_frees.is_set || is_set(mi_num_tunid_frees.operation)) leaf_name_data.push_back(mi_num_tunid_frees.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::Misc::MiFrrStat::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mi-num-bfd-down")
    {
        mi_num_bfd_down = value;
    }
    if(value_path == "mi-num-bkup-frr-objects")
    {
        mi_num_bkup_frr_objects = value;
    }
    if(value_path == "mi-num-frr-logs")
    {
        mi_num_frr_logs = value;
    }
    if(value_path == "mi-num-frr-proto-events")
    {
        mi_num_frr_proto_events = value;
    }
    if(value_path == "mi-num-frr-reset")
    {
        mi_num_frr_reset = value;
    }
    if(value_path == "mi-num-frr-reset-queue-adds")
    {
        mi_num_frr_reset_queue_adds = value;
    }
    if(value_path == "mi-num-frr-reset-queue-remove")
    {
        mi_num_frr_reset_queue_remove = value;
    }
    if(value_path == "mi-num-intf-frr")
    {
        mi_num_intf_frr = value;
    }
    if(value_path == "mi-num-parent-intf-frr")
    {
        mi_num_parent_intf_frr = value;
    }
    if(value_path == "mi-num-pfi-intf-down")
    {
        mi_num_pfi_intf_down = value;
    }
    if(value_path == "mi-num-prot-frr-objects")
    {
        mi_num_prot_frr_objects = value;
    }
    if(value_path == "mi-num-tunid-alloc-failures")
    {
        mi_num_tunid_alloc_failures = value;
    }
    if(value_path == "mi-num-tunid-allocs")
    {
        mi_num_tunid_allocs = value;
    }
    if(value_path == "mi-num-tunid-free-failures")
    {
        mi_num_tunid_free_failures = value;
    }
    if(value_path == "mi-num-tunid-frees")
    {
        mi_num_tunid_frees = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::LocalLabel()
    :
    conflicts(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts>())
{
    conflicts->parent = this;
    children["conflicts"] = conflicts;

    yang_name = "local-label"; yang_parent_name = "protocol";
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::~LocalLabel()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::has_data() const
{
    return (conflicts !=  nullptr && conflicts->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::has_operation() const
{
    return is_set(operation)
	|| (conflicts !=  nullptr && conflicts->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::LocalLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-label";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::LocalLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalLabel' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "conflicts")
    {
        if(conflicts != nullptr)
        {
            children["conflicts"] = conflicts;
        }
        else
        {
            conflicts = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts>();
            conflicts->parent = this;
            children["conflicts"] = conflicts;
        }
        return children.at("conflicts");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::LocalLabel::get_children()
{
    if(children.find("conflicts") == children.end())
    {
        if(conflicts != nullptr)
        {
            children["conflicts"] = conflicts;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflicts()
{
    yang_name = "conflicts"; yang_parent_name = "local-label";
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::~Conflicts()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::has_data() const
{
    for (std::size_t index=0; index<conflict.size(); index++)
    {
        if(conflict[index]->has_data())
            return true;
    }
    return false;
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::has_operation() const
{
    for (std::size_t index=0; index<conflict.size(); index++)
    {
        if(conflict[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conflicts";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Conflicts' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "conflict")
    {
        for(auto const & c : conflict)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict>();
        c->parent = this;
        conflict.push_back(std::move(c));
        children[segment_path] = conflict.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::get_children()
{
    for (auto const & c : conflict)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::set_value(const std::string & value_path, std::string value)
{
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Conflict()
    :
    label{YType::uint32, "label"},
    ll_ctype{YType::enumeration, "ll-ctype"},
    local_label{YType::uint32, "local-label"},
    num_retries{YType::uint32, "num-retries"},
    pfx_tbl_id{YType::int32, "pfx-tbl-id"},
    prefix{YType::str, "prefix"},
    prefix_len{YType::int32, "prefix-len"},
    retry_ts{YType::uint64, "retry-ts"},
    source{YType::enumeration, "source"},
    source_xr{YType::uint32, "source-xr"},
    update_ts{YType::uint64, "update-ts"}
    	,
    ext(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext>())
{
    ext->parent = this;
    children["ext"] = ext;

    yang_name = "conflict"; yang_parent_name = "conflicts";
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::~Conflict()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::has_data() const
{
    return label.is_set
	|| ll_ctype.is_set
	|| local_label.is_set
	|| num_retries.is_set
	|| pfx_tbl_id.is_set
	|| prefix.is_set
	|| prefix_len.is_set
	|| retry_ts.is_set
	|| source.is_set
	|| source_xr.is_set
	|| update_ts.is_set
	|| (ext !=  nullptr && ext->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(ll_ctype.operation)
	|| is_set(local_label.operation)
	|| is_set(num_retries.operation)
	|| is_set(pfx_tbl_id.operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_len.operation)
	|| is_set(retry_ts.operation)
	|| is_set(source.operation)
	|| is_set(source_xr.operation)
	|| is_set(update_ts.operation)
	|| (ext !=  nullptr && ext->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conflict";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Conflict' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ll_ctype.is_set || is_set(ll_ctype.operation)) leaf_name_data.push_back(ll_ctype.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (num_retries.is_set || is_set(num_retries.operation)) leaf_name_data.push_back(num_retries.get_name_leafdata());
    if (pfx_tbl_id.is_set || is_set(pfx_tbl_id.operation)) leaf_name_data.push_back(pfx_tbl_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.operation)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (retry_ts.is_set || is_set(retry_ts.operation)) leaf_name_data.push_back(retry_ts.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (source_xr.is_set || is_set(source_xr.operation)) leaf_name_data.push_back(source_xr.get_name_leafdata());
    if (update_ts.is_set || is_set(update_ts.operation)) leaf_name_data.push_back(update_ts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ext")
    {
        if(ext != nullptr)
        {
            children["ext"] = ext;
        }
        else
        {
            ext = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext>();
            ext->parent = this;
            children["ext"] = ext;
        }
        return children.at("ext");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::get_children()
{
    if(children.find("ext") == children.end())
    {
        if(ext != nullptr)
        {
            children["ext"] = ext;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "ll-ctype")
    {
        ll_ctype = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "num-retries")
    {
        num_retries = value;
    }
    if(value_path == "pfx-tbl-id")
    {
        pfx_tbl_id = value;
    }
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
    }
    if(value_path == "retry-ts")
    {
        retry_ts = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "source-xr")
    {
        source_xr = value;
    }
    if(value_path == "update-ts")
    {
        update_ts = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Ext()
    :
    type{YType::enumeration, "type"}
    	,
    lsm(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm>())
	,pfx(std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx>())
{
    lsm->parent = this;
    children["lsm"] = lsm;

    pfx->parent = this;
    children["pfx"] = pfx;

    yang_name = "ext"; yang_parent_name = "conflict";
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::~Ext()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::has_data() const
{
    return type.is_set
	|| (lsm !=  nullptr && lsm->has_data())
	|| (pfx !=  nullptr && pfx->has_data());
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (lsm !=  nullptr && lsm->has_operation())
	|| (pfx !=  nullptr && pfx->has_operation());
}

std::string Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ext";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ext' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsm")
    {
        if(lsm != nullptr)
        {
            children["lsm"] = lsm;
        }
        else
        {
            lsm = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm>();
            lsm->parent = this;
            children["lsm"] = lsm;
        }
        return children.at("lsm");
    }

    if(child_yang_name == "pfx")
    {
        if(pfx != nullptr)
        {
            children["pfx"] = pfx;
        }
        else
        {
            pfx = std::make_shared<Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx>();
            pfx->parent = this;
            children["pfx"] = pfx;
        }
        return children.at("pfx");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::get_children()
{
    if(children.find("lsm") == children.end())
    {
        if(lsm != nullptr)
        {
            children["lsm"] = lsm;
        }
    }

    if(children.find("pfx") == children.end())
    {
        if(pfx != nullptr)
        {
            children["pfx"] = pfx;
        }
    }

    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::Pfx()
    :
    pfx{YType::str, "pfx"},
    tbl_id{YType::uint32, "tbl-id"}
{
    yang_name = "pfx"; yang_parent_name = "ext";
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::~Pfx()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::has_data() const
{
    return pfx.is_set
	|| tbl_id.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::has_operation() const
{
    return is_set(operation)
	|| is_set(pfx.operation)
	|| is_set(tbl_id.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfx";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pfx' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfx.is_set || is_set(pfx.operation)) leaf_name_data.push_back(pfx.get_name_leafdata());
    if (tbl_id.is_set || is_set(tbl_id.operation)) leaf_name_data.push_back(tbl_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Pfx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pfx")
    {
        pfx = value;
    }
    if(value_path == "tbl-id")
    {
        tbl_id = value;
    }
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::Lsm()
    :
    mcast_id{YType::uint32, "mcast-id"},
    nh{YType::str, "nh"}
{
    yang_name = "lsm"; yang_parent_name = "ext";
}

Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::~Lsm()
{
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::has_data() const
{
    return mcast_id.is_set
	|| nh.is_set;
}

bool Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::has_operation() const
{
    return is_set(operation)
	|| is_set(mcast_id.operation)
	|| is_set(nh.operation);
}

std::string Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsm";

    return path_buffer.str();

}

EntityPath Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsm' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mcast_id.is_set || is_set(mcast_id.operation)) leaf_name_data.push_back(mcast_id.get_name_leafdata());
    if (nh.is_set || is_set(nh.operation)) leaf_name_data.push_back(nh.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::get_children()
{
    return children;
}

void Fib::Nodes::Node::Protocols::Protocol::LocalLabel::Conflicts::Conflict::Ext::Lsm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mcast-id")
    {
        mcast_id = value;
    }
    if(value_path == "nh")
    {
        nh = value;
    }
}

MplsForwarding::MplsForwarding()
    :
    nodes(std::make_shared<MplsForwarding::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "mpls-forwarding"; yang_parent_name = "Cisco-IOS-XR-fib-common-oper";
}

MplsForwarding::~MplsForwarding()
{
}

bool MplsForwarding::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool MplsForwarding::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string MplsForwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-fib-common-oper:mpls-forwarding";

    return path_buffer.str();

}

EntityPath MplsForwarding::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> MplsForwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_shared<MplsForwarding::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsForwarding::get_children()
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

void MplsForwarding::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> MplsForwarding::clone_ptr() const
{
    return std::make_shared<MplsForwarding>();
}

std::string MplsForwarding::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsForwarding::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsForwarding::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

MplsForwarding::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "mpls-forwarding";
}

MplsForwarding::Nodes::~Nodes()
{
}

bool MplsForwarding::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsForwarding::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath MplsForwarding::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fib-common-oper:mpls-forwarding/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsForwarding::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsForwarding::Nodes::get_children()
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

void MplsForwarding::Nodes::set_value(const std::string & value_path, std::string value)
{
}

MplsForwarding::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    forwarding_summary(std::make_shared<MplsForwarding::Nodes::Node::ForwardingSummary>())
	,frr_database(std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase>())
	,frr_logs(std::make_shared<MplsForwarding::Nodes::Node::FrrLogs>())
	,label_fib(std::make_shared<MplsForwarding::Nodes::Node::LabelFib>())
	,tunnel(std::make_shared<MplsForwarding::Nodes::Node::Tunnel>())
{
    forwarding_summary->parent = this;
    children["forwarding-summary"] = forwarding_summary;

    frr_database->parent = this;
    children["frr-database"] = frr_database;

    frr_logs->parent = this;
    children["frr-logs"] = frr_logs;

    label_fib->parent = this;
    children["label-fib"] = label_fib;

    tunnel->parent = this;
    children["tunnel"] = tunnel;

    yang_name = "node"; yang_parent_name = "nodes";
}

MplsForwarding::Nodes::Node::~Node()
{
}

bool MplsForwarding::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (forwarding_summary !=  nullptr && forwarding_summary->has_data())
	|| (frr_database !=  nullptr && frr_database->has_data())
	|| (frr_logs !=  nullptr && frr_logs->has_data())
	|| (label_fib !=  nullptr && label_fib->has_data())
	|| (tunnel !=  nullptr && tunnel->has_data());
}

bool MplsForwarding::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (forwarding_summary !=  nullptr && forwarding_summary->has_operation())
	|| (frr_database !=  nullptr && frr_database->has_operation())
	|| (frr_logs !=  nullptr && frr_logs->has_operation())
	|| (label_fib !=  nullptr && label_fib->has_operation())
	|| (tunnel !=  nullptr && tunnel->has_operation());
}

std::string MplsForwarding::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

EntityPath MplsForwarding::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-fib-common-oper:mpls-forwarding/nodes/" << get_segment_path();
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

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "forwarding-summary")
    {
        if(forwarding_summary != nullptr)
        {
            children["forwarding-summary"] = forwarding_summary;
        }
        else
        {
            forwarding_summary = std::make_shared<MplsForwarding::Nodes::Node::ForwardingSummary>();
            forwarding_summary->parent = this;
            children["forwarding-summary"] = forwarding_summary;
        }
        return children.at("forwarding-summary");
    }

    if(child_yang_name == "frr-database")
    {
        if(frr_database != nullptr)
        {
            children["frr-database"] = frr_database;
        }
        else
        {
            frr_database = std::make_shared<MplsForwarding::Nodes::Node::FrrDatabase>();
            frr_database->parent = this;
            children["frr-database"] = frr_database;
        }
        return children.at("frr-database");
    }

    if(child_yang_name == "frr-logs")
    {
        if(frr_logs != nullptr)
        {
            children["frr-logs"] = frr_logs;
        }
        else
        {
            frr_logs = std::make_shared<MplsForwarding::Nodes::Node::FrrLogs>();
            frr_logs->parent = this;
            children["frr-logs"] = frr_logs;
        }
        return children.at("frr-logs");
    }

    if(child_yang_name == "label-fib")
    {
        if(label_fib != nullptr)
        {
            children["label-fib"] = label_fib;
        }
        else
        {
            label_fib = std::make_shared<MplsForwarding::Nodes::Node::LabelFib>();
            label_fib->parent = this;
            children["label-fib"] = label_fib;
        }
        return children.at("label-fib");
    }

    if(child_yang_name == "tunnel")
    {
        if(tunnel != nullptr)
        {
            children["tunnel"] = tunnel;
        }
        else
        {
            tunnel = std::make_shared<MplsForwarding::Nodes::Node::Tunnel>();
            tunnel->parent = this;
            children["tunnel"] = tunnel;
        }
        return children.at("tunnel");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsForwarding::Nodes::Node::get_children()
{
    if(children.find("forwarding-summary") == children.end())
    {
        if(forwarding_summary != nullptr)
        {
            children["forwarding-summary"] = forwarding_summary;
        }
    }

    if(children.find("frr-database") == children.end())
    {
        if(frr_database != nullptr)
        {
            children["frr-database"] = frr_database;
        }
    }

    if(children.find("frr-logs") == children.end())
    {
        if(frr_logs != nullptr)
        {
            children["frr-logs"] = frr_logs;
        }
    }

    if(children.find("label-fib") == children.end())
    {
        if(label_fib != nullptr)
        {
            children["label-fib"] = label_fib;
        }
    }

    if(children.find("tunnel") == children.end())
    {
        if(tunnel != nullptr)
        {
            children["tunnel"] = tunnel;
        }
    }

    return children;
}

void MplsForwarding::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

MplsForwarding::Nodes::Node::ForwardingSummary::ForwardingSummary()
    :
    deleted_stale_entries{YType::uint32, "deleted-stale-entries"},
    global_dropped_packets{YType::uint64, "global-dropped-packets"},
    global_failed_lookups{YType::uint64, "global-failed-lookups"},
    global_fragmented_packets{YType::uint64, "global-fragmented-packets"},
    highest_label{YType::uint32, "highest-label"},
    ignore_protect{YType::uint32, "ignore-protect"},
    ipv4_imposition_entries{YType::uint32, "ipv4-imposition-entries"},
    label_switched_entries{YType::uint32, "label-switched-entries"},
    lowest_label{YType::uint32, "lowest-label"},
    lrpf_entries{YType::uint32, "lrpf-entries"},
    mte_head_entries{YType::uint32, "mte-head-entries"},
    mte_ll_entries{YType::uint32, "mte-ll-entries"},
    mte_midpoint_entries{YType::uint32, "mte-midpoint-entries"},
    reserved_label_entries{YType::uint32, "reserved-label-entries"},
    te_frr_head_entries{YType::uint32, "te-frr-head-entries"},
    te_frr_interface_entries{YType::uint32, "te-frr-interface-entries"},
    te_frr_internal_entries{YType::uint32, "te-frr-internal-entries"},
    te_frr_mid_points_entries{YType::uint32, "te-frr-mid-points-entries"},
    te_frr_next_hop_entries{YType::uint32, "te-frr-next-hop-entries"},
    te_head_entries{YType::uint32, "te-head-entries"},
    te_internal_entries{YType::uint32, "te-internal-entries"},
    te_mid_points_entries{YType::uint32, "te-mid-points-entries"},
    total_forwarding_update_messages{YType::uint32, "total-forwarding-update-messages"},
    total_forwarding_updates{YType::uint32, "total-forwarding-updates"},
    total_p2mp_forwarding_added_or_modify_messages{YType::uint32, "total-p2mp-forwarding-added-or-modify-messages"},
    total_p2mp_forwarding_delete_messages{YType::uint32, "total-p2mp-forwarding-delete-messages"},
    total_p2mp_forwarding_drop_messages{YType::uint32, "total-p2mp-forwarding-drop-messages"},
    total_p2mp_forwarding_updates{YType::uint32, "total-p2mp-forwarding-updates"},
    total_p2mp_iir_forwarding_drop_messages{YType::uint32, "total-p2mp-iir-forwarding-drop-messages"}
{
    yang_name = "forwarding-summary"; yang_parent_name = "node";
}

MplsForwarding::Nodes::Node::ForwardingSummary::~ForwardingSummary()
{
}

bool MplsForwarding::Nodes::Node::ForwardingSummary::has_data() const
{
    return deleted_stale_entries.is_set
	|| global_dropped_packets.is_set
	|| global_failed_lookups.is_set
	|| global_fragmented_packets.is_set
	|| highest_label.is_set
	|| ignore_protect.is_set
	|| ipv4_imposition_entries.is_set
	|| label_switched_entries.is_set
	|| lowest_label.is_set
	|| lrpf_entries.is_set
	|| mte_head_entries.is_set
	|| mte_ll_entries.is_set
	|| mte_midpoint_entries.is_set
	|| reserved_label_entries.is_set
	|| te_frr_head_entries.is_set
	|| te_frr_interface_entries.is_set
	|| te_frr_internal_entries.is_set
	|| te_frr_mid_points_entries.is_set
	|| te_frr_next_hop_entries.is_set
	|| te_head_entries.is_set
	|| te_internal_entries.is_set
	|| te_mid_points_entries.is_set
	|| total_forwarding_update_messages.is_set
	|| total_forwarding_updates.is_set
	|| total_p2mp_forwarding_added_or_modify_messages.is_set
	|| total_p2mp_forwarding_delete_messages.is_set
	|| total_p2mp_forwarding_drop_messages.is_set
	|| total_p2mp_forwarding_updates.is_set
	|| total_p2mp_iir_forwarding_drop_messages.is_set;
}

bool MplsForwarding::Nodes::Node::ForwardingSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(deleted_stale_entries.operation)
	|| is_set(global_dropped_packets.operation)
	|| is_set(global_failed_lookups.operation)
	|| is_set(global_fragmented_packets.operation)
	|| is_set(highest_label.operation)
	|| is_set(ignore_protect.operation)
	|| is_set(ipv4_imposition_entries.operation)
	|| is_set(label_switched_entries.operation)
	|| is_set(lowest_label.operation)
	|| is_set(lrpf_entries.operation)
	|| is_set(mte_head_entries.operation)
	|| is_set(mte_ll_entries.operation)
	|| is_set(mte_midpoint_entries.operation)
	|| is_set(reserved_label_entries.operation)
	|| is_set(te_frr_head_entries.operation)
	|| is_set(te_frr_interface_entries.operation)
	|| is_set(te_frr_internal_entries.operation)
	|| is_set(te_frr_mid_points_entries.operation)
	|| is_set(te_frr_next_hop_entries.operation)
	|| is_set(te_head_entries.operation)
	|| is_set(te_internal_entries.operation)
	|| is_set(te_mid_points_entries.operation)
	|| is_set(total_forwarding_update_messages.operation)
	|| is_set(total_forwarding_updates.operation)
	|| is_set(total_p2mp_forwarding_added_or_modify_messages.operation)
	|| is_set(total_p2mp_forwarding_delete_messages.operation)
	|| is_set(total_p2mp_forwarding_drop_messages.operation)
	|| is_set(total_p2mp_forwarding_updates.operation)
	|| is_set(total_p2mp_iir_forwarding_drop_messages.operation);
}

std::string MplsForwarding::Nodes::Node::ForwardingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-summary";

    return path_buffer.str();

}

EntityPath MplsForwarding::Nodes::Node::ForwardingSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingSummary' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (deleted_stale_entries.is_set || is_set(deleted_stale_entries.operation)) leaf_name_data.push_back(deleted_stale_entries.get_name_leafdata());
    if (global_dropped_packets.is_set || is_set(global_dropped_packets.operation)) leaf_name_data.push_back(global_dropped_packets.get_name_leafdata());
    if (global_failed_lookups.is_set || is_set(global_failed_lookups.operation)) leaf_name_data.push_back(global_failed_lookups.get_name_leafdata());
    if (global_fragmented_packets.is_set || is_set(global_fragmented_packets.operation)) leaf_name_data.push_back(global_fragmented_packets.get_name_leafdata());
    if (highest_label.is_set || is_set(highest_label.operation)) leaf_name_data.push_back(highest_label.get_name_leafdata());
    if (ignore_protect.is_set || is_set(ignore_protect.operation)) leaf_name_data.push_back(ignore_protect.get_name_leafdata());
    if (ipv4_imposition_entries.is_set || is_set(ipv4_imposition_entries.operation)) leaf_name_data.push_back(ipv4_imposition_entries.get_name_leafdata());
    if (label_switched_entries.is_set || is_set(label_switched_entries.operation)) leaf_name_data.push_back(label_switched_entries.get_name_leafdata());
    if (lowest_label.is_set || is_set(lowest_label.operation)) leaf_name_data.push_back(lowest_label.get_name_leafdata());
    if (lrpf_entries.is_set || is_set(lrpf_entries.operation)) leaf_name_data.push_back(lrpf_entries.get_name_leafdata());
    if (mte_head_entries.is_set || is_set(mte_head_entries.operation)) leaf_name_data.push_back(mte_head_entries.get_name_leafdata());
    if (mte_ll_entries.is_set || is_set(mte_ll_entries.operation)) leaf_name_data.push_back(mte_ll_entries.get_name_leafdata());
    if (mte_midpoint_entries.is_set || is_set(mte_midpoint_entries.operation)) leaf_name_data.push_back(mte_midpoint_entries.get_name_leafdata());
    if (reserved_label_entries.is_set || is_set(reserved_label_entries.operation)) leaf_name_data.push_back(reserved_label_entries.get_name_leafdata());
    if (te_frr_head_entries.is_set || is_set(te_frr_head_entries.operation)) leaf_name_data.push_back(te_frr_head_entries.get_name_leafdata());
    if (te_frr_interface_entries.is_set || is_set(te_frr_interface_entries.operation)) leaf_name_data.push_back(te_frr_interface_entries.get_name_leafdata());
    if (te_frr_internal_entries.is_set || is_set(te_frr_internal_entries.operation)) leaf_name_data.push_back(te_frr_internal_entries.get_name_leafdata());
    if (te_frr_mid_points_entries.is_set || is_set(te_frr_mid_points_entries.operation)) leaf_name_data.push_back(te_frr_mid_points_entries.get_name_leafdata());
    if (te_frr_next_hop_entries.is_set || is_set(te_frr_next_hop_entries.operation)) leaf_name_data.push_back(te_frr_next_hop_entries.get_name_leafdata());
    if (te_head_entries.is_set || is_set(te_head_entries.operation)) leaf_name_data.push_back(te_head_entries.get_name_leafdata());
    if (te_internal_entries.is_set || is_set(te_internal_entries.operation)) leaf_name_data.push_back(te_internal_entries.get_name_leafdata());
    if (te_mid_points_entries.is_set || is_set(te_mid_points_entries.operation)) leaf_name_data.push_back(te_mid_points_entries.get_name_leafdata());
    if (total_forwarding_update_messages.is_set || is_set(total_forwarding_update_messages.operation)) leaf_name_data.push_back(total_forwarding_update_messages.get_name_leafdata());
    if (total_forwarding_updates.is_set || is_set(total_forwarding_updates.operation)) leaf_name_data.push_back(total_forwarding_updates.get_name_leafdata());
    if (total_p2mp_forwarding_added_or_modify_messages.is_set || is_set(total_p2mp_forwarding_added_or_modify_messages.operation)) leaf_name_data.push_back(total_p2mp_forwarding_added_or_modify_messages.get_name_leafdata());
    if (total_p2mp_forwarding_delete_messages.is_set || is_set(total_p2mp_forwarding_delete_messages.operation)) leaf_name_data.push_back(total_p2mp_forwarding_delete_messages.get_name_leafdata());
    if (total_p2mp_forwarding_drop_messages.is_set || is_set(total_p2mp_forwarding_drop_messages.operation)) leaf_name_data.push_back(total_p2mp_forwarding_drop_messages.get_name_leafdata());
    if (total_p2mp_forwarding_updates.is_set || is_set(total_p2mp_forwarding_updates.operation)) leaf_name_data.push_back(total_p2mp_forwarding_updates.get_name_leafdata());
    if (total_p2mp_iir_forwarding_drop_messages.is_set || is_set(total_p2mp_iir_forwarding_drop_messages.operation)) leaf_name_data.push_back(total_p2mp_iir_forwarding_drop_messages.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::ForwardingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsForwarding::Nodes::Node::ForwardingSummary::get_children()
{
    return children;
}

void MplsForwarding::Nodes::Node::ForwardingSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "deleted-stale-entries")
    {
        deleted_stale_entries = value;
    }
    if(value_path == "global-dropped-packets")
    {
        global_dropped_packets = value;
    }
    if(value_path == "global-failed-lookups")
    {
        global_failed_lookups = value;
    }
    if(value_path == "global-fragmented-packets")
    {
        global_fragmented_packets = value;
    }
    if(value_path == "highest-label")
    {
        highest_label = value;
    }
    if(value_path == "ignore-protect")
    {
        ignore_protect = value;
    }
    if(value_path == "ipv4-imposition-entries")
    {
        ipv4_imposition_entries = value;
    }
    if(value_path == "label-switched-entries")
    {
        label_switched_entries = value;
    }
    if(value_path == "lowest-label")
    {
        lowest_label = value;
    }
    if(value_path == "lrpf-entries")
    {
        lrpf_entries = value;
    }
    if(value_path == "mte-head-entries")
    {
        mte_head_entries = value;
    }
    if(value_path == "mte-ll-entries")
    {
        mte_ll_entries = value;
    }
    if(value_path == "mte-midpoint-entries")
    {
        mte_midpoint_entries = value;
    }
    if(value_path == "reserved-label-entries")
    {
        reserved_label_entries = value;
    }
    if(value_path == "te-frr-head-entries")
    {
        te_frr_head_entries = value;
    }
    if(value_path == "te-frr-interface-entries")
    {
        te_frr_interface_entries = value;
    }
    if(value_path == "te-frr-internal-entries")
    {
        te_frr_internal_entries = value;
    }
    if(value_path == "te-frr-mid-points-entries")
    {
        te_frr_mid_points_entries = value;
    }
    if(value_path == "te-frr-next-hop-entries")
    {
        te_frr_next_hop_entries = value;
    }
    if(value_path == "te-head-entries")
    {
        te_head_entries = value;
    }
    if(value_path == "te-internal-entries")
    {
        te_internal_entries = value;
    }
    if(value_path == "te-mid-points-entries")
    {
        te_mid_points_entries = value;
    }
    if(value_path == "total-forwarding-update-messages")
    {
        total_forwarding_update_messages = value;
    }
    if(value_path == "total-forwarding-updates")
    {
        total_forwarding_updates = value;
    }
    if(value_path == "total-p2mp-forwarding-added-or-modify-messages")
    {
        total_p2mp_forwarding_added_or_modify_messages = value;
    }
    if(value_path == "total-p2mp-forwarding-delete-messages")
    {
        total_p2mp_forwarding_delete_messages = value;
    }
    if(value_path == "total-p2mp-forwarding-drop-messages")
    {
        total_p2mp_forwarding_drop_messages = value;
    }
    if(value_path == "total-p2mp-forwarding-updates")
    {
        total_p2mp_forwarding_updates = value;
    }
    if(value_path == "total-p2mp-iir-forwarding-drop-messages")
    {
        total_p2mp_iir_forwarding_drop_messages = value;
    }
}

MplsForwarding::Nodes::Node::FrrLogs::FrrLogs()
{
    yang_name = "frr-logs"; yang_parent_name = "node";
}

MplsForwarding::Nodes::Node::FrrLogs::~FrrLogs()
{
}

bool MplsForwarding::Nodes::Node::FrrLogs::has_data() const
{
    for (std::size_t index=0; index<frr_log.size(); index++)
    {
        if(frr_log[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::FrrLogs::has_operation() const
{
    for (std::size_t index=0; index<frr_log.size(); index++)
    {
        if(frr_log[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsForwarding::Nodes::Node::FrrLogs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-logs";

    return path_buffer.str();

}

EntityPath MplsForwarding::Nodes::Node::FrrLogs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrLogs' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrLogs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "frr-log")
    {
        for(auto const & c : frr_log)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::FrrLogs::FrrLog>();
        c->parent = this;
        frr_log.push_back(std::move(c));
        children[segment_path] = frr_log.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsForwarding::Nodes::Node::FrrLogs::get_children()
{
    for (auto const & c : frr_log)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrLogs::set_value(const std::string & value_path, std::string value)
{
}

MplsForwarding::Nodes::Node::FrrLogs::FrrLog::FrrLog()
    :
    event_id{YType::int32, "event-id"},
    fast_bundle_member_down_interface{YType::uint32, "fast-bundle-member-down-interface"},
    frr_event_node_id{YType::str, "frr-event-node-id"},
    main_processing{YType::uint32, "main-processing"},
    next_hop{YType::uint32, "next-hop"},
    number_of_rewrites_affected{YType::uint32, "number-of-rewrites-affected"},
    protected_frr_interface_name{YType::str, "protected-frr-interface-name"},
    switching_time_nsecs{YType::uint32, "switching-time-nsecs"}
    	,
    start_time(std::make_shared<MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime>())
{
    start_time->parent = this;
    children["start-time"] = start_time;

    yang_name = "frr-log"; yang_parent_name = "frr-logs";
}

MplsForwarding::Nodes::Node::FrrLogs::FrrLog::~FrrLog()
{
}

bool MplsForwarding::Nodes::Node::FrrLogs::FrrLog::has_data() const
{
    return event_id.is_set
	|| fast_bundle_member_down_interface.is_set
	|| frr_event_node_id.is_set
	|| main_processing.is_set
	|| next_hop.is_set
	|| number_of_rewrites_affected.is_set
	|| protected_frr_interface_name.is_set
	|| switching_time_nsecs.is_set
	|| (start_time !=  nullptr && start_time->has_data());
}

bool MplsForwarding::Nodes::Node::FrrLogs::FrrLog::has_operation() const
{
    return is_set(operation)
	|| is_set(event_id.operation)
	|| is_set(fast_bundle_member_down_interface.operation)
	|| is_set(frr_event_node_id.operation)
	|| is_set(main_processing.operation)
	|| is_set(next_hop.operation)
	|| is_set(number_of_rewrites_affected.operation)
	|| is_set(protected_frr_interface_name.operation)
	|| is_set(switching_time_nsecs.operation)
	|| (start_time !=  nullptr && start_time->has_operation());
}

std::string MplsForwarding::Nodes::Node::FrrLogs::FrrLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-log" <<"[event-id='" <<event_id <<"']";

    return path_buffer.str();

}

EntityPath MplsForwarding::Nodes::Node::FrrLogs::FrrLog::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrLog' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.operation)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (fast_bundle_member_down_interface.is_set || is_set(fast_bundle_member_down_interface.operation)) leaf_name_data.push_back(fast_bundle_member_down_interface.get_name_leafdata());
    if (frr_event_node_id.is_set || is_set(frr_event_node_id.operation)) leaf_name_data.push_back(frr_event_node_id.get_name_leafdata());
    if (main_processing.is_set || is_set(main_processing.operation)) leaf_name_data.push_back(main_processing.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.operation)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (number_of_rewrites_affected.is_set || is_set(number_of_rewrites_affected.operation)) leaf_name_data.push_back(number_of_rewrites_affected.get_name_leafdata());
    if (protected_frr_interface_name.is_set || is_set(protected_frr_interface_name.operation)) leaf_name_data.push_back(protected_frr_interface_name.get_name_leafdata());
    if (switching_time_nsecs.is_set || is_set(switching_time_nsecs.operation)) leaf_name_data.push_back(switching_time_nsecs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrLogs::FrrLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "start-time")
    {
        if(start_time != nullptr)
        {
            children["start-time"] = start_time;
        }
        else
        {
            start_time = std::make_shared<MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime>();
            start_time->parent = this;
            children["start-time"] = start_time;
        }
        return children.at("start-time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsForwarding::Nodes::Node::FrrLogs::FrrLog::get_children()
{
    if(children.find("start-time") == children.end())
    {
        if(start_time != nullptr)
        {
            children["start-time"] = start_time;
        }
    }

    return children;
}

void MplsForwarding::Nodes::Node::FrrLogs::FrrLog::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-id")
    {
        event_id = value;
    }
    if(value_path == "fast-bundle-member-down-interface")
    {
        fast_bundle_member_down_interface = value;
    }
    if(value_path == "frr-event-node-id")
    {
        frr_event_node_id = value;
    }
    if(value_path == "main-processing")
    {
        main_processing = value;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
    }
    if(value_path == "number-of-rewrites-affected")
    {
        number_of_rewrites_affected = value;
    }
    if(value_path == "protected-frr-interface-name")
    {
        protected_frr_interface_name = value;
    }
    if(value_path == "switching-time-nsecs")
    {
        switching_time_nsecs = value;
    }
}

MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::StartTime()
    :
    nanoseconds{YType::int32, "nanoseconds"},
    seconds{YType::int32, "seconds"}
{
    yang_name = "start-time"; yang_parent_name = "frr-log";
}

MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::~StartTime()
{
}

bool MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-time";

    return path_buffer.str();

}

EntityPath MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StartTime' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::get_children()
{
    return children;
}

void MplsForwarding::Nodes::Node::FrrLogs::FrrLog::StartTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

MplsForwarding::Nodes::Node::LabelFib::LabelFib()
    :
    forwarding_details(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails>())
	,informations(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations>())
	,label_security(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity>())
{
    forwarding_details->parent = this;
    children["forwarding-details"] = forwarding_details;

    informations->parent = this;
    children["informations"] = informations;

    label_security->parent = this;
    children["label-security"] = label_security;

    yang_name = "label-fib"; yang_parent_name = "node";
}

MplsForwarding::Nodes::Node::LabelFib::~LabelFib()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::has_data() const
{
    return (forwarding_details !=  nullptr && forwarding_details->has_data())
	|| (informations !=  nullptr && informations->has_data())
	|| (label_security !=  nullptr && label_security->has_data());
}

bool MplsForwarding::Nodes::Node::LabelFib::has_operation() const
{
    return is_set(operation)
	|| (forwarding_details !=  nullptr && forwarding_details->has_operation())
	|| (informations !=  nullptr && informations->has_operation())
	|| (label_security !=  nullptr && label_security->has_operation());
}

std::string MplsForwarding::Nodes::Node::LabelFib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-fib";

    return path_buffer.str();

}

EntityPath MplsForwarding::Nodes::Node::LabelFib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelFib' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "forwarding-details")
    {
        if(forwarding_details != nullptr)
        {
            children["forwarding-details"] = forwarding_details;
        }
        else
        {
            forwarding_details = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails>();
            forwarding_details->parent = this;
            children["forwarding-details"] = forwarding_details;
        }
        return children.at("forwarding-details");
    }

    if(child_yang_name == "informations")
    {
        if(informations != nullptr)
        {
            children["informations"] = informations;
        }
        else
        {
            informations = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::Informations>();
            informations->parent = this;
            children["informations"] = informations;
        }
        return children.at("informations");
    }

    if(child_yang_name == "label-security")
    {
        if(label_security != nullptr)
        {
            children["label-security"] = label_security;
        }
        else
        {
            label_security = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::LabelSecurity>();
            label_security->parent = this;
            children["label-security"] = label_security;
        }
        return children.at("label-security");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsForwarding::Nodes::Node::LabelFib::get_children()
{
    if(children.find("forwarding-details") == children.end())
    {
        if(forwarding_details != nullptr)
        {
            children["forwarding-details"] = forwarding_details;
        }
    }

    if(children.find("informations") == children.end())
    {
        if(informations != nullptr)
        {
            children["informations"] = informations;
        }
    }

    if(children.find("label-security") == children.end())
    {
        if(label_security != nullptr)
        {
            children["label-security"] = label_security;
        }
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::set_value(const std::string & value_path, std::string value)
{
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetails()
{
    yang_name = "forwarding-details"; yang_parent_name = "label-fib";
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::~ForwardingDetails()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::has_data() const
{
    for (std::size_t index=0; index<forwarding_detail.size(); index++)
    {
        if(forwarding_detail[index]->has_data())
            return true;
    }
    return false;
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::has_operation() const
{
    for (std::size_t index=0; index<forwarding_detail.size(); index++)
    {
        if(forwarding_detail[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-details";

    return path_buffer.str();

}

EntityPath MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingDetails' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "forwarding-detail")
    {
        for(auto const & c : forwarding_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail>();
        c->parent = this;
        forwarding_detail.push_back(std::move(c));
        children[segment_path] = forwarding_detail.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::get_children()
{
    for (auto const & c : forwarding_detail)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::set_value(const std::string & value_path, std::string value)
{
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::ForwardingDetail()
    :
    afi_table_id{YType::uint32, "afi-table-id"},
    eos{YType::enumeration, "eos"},
    eos_bit{YType::uint32, "eos-bit"},
    hardware_information{YType::str, "hardware-information"},
    label_value{YType::uint32, "label-value"},
    ldi_flags{YType::uint32, "ldi-flags"},
    ldi_pointer{YType::uint32, "ldi-pointer"},
    ldi_referance_count{YType::uint32, "ldi-referance-count"},
    ldi_type{YType::uint32, "ldi-type"},
    leaf_flags{YType::uint32, "leaf-flags"},
    leaf_local_label{YType::uint32, "leaf-local-label"},
    leaf_referance_count{YType::uint32, "leaf-referance-count"},
    leaf_time_in_milli_seconds{YType::uint64, "leaf-time-in-milli-seconds"},
    lspa_flags{YType::uint32, "lspa-flags"},
    lw_ldi_pointer{YType::uint32, "lw-ldi-pointer"},
    lw_ldi_refernace_count{YType::uint32, "lw-ldi-refernace-count"},
    lw_ldi_type{YType::uint32, "lw-ldi-type"},
    lw_shared_ldi_pointer{YType::uint32, "lw-shared-ldi-pointer"},
    multicast_label{YType::boolean, "multicast-label"},
    path_list_flags{YType::uint32, "path-list-flags"},
    path_list_referance_count{YType::uint32, "path-list-referance-count"}
    	,
    ldi_information(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation>())
	,multicast_information(std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation>())
{
    ldi_information->parent = this;
    children["ldi-information"] = ldi_information;

    multicast_information->parent = this;
    children["multicast-information"] = multicast_information;

    yang_name = "forwarding-detail"; yang_parent_name = "forwarding-details";
}

MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::~ForwardingDetail()
{
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::has_data() const
{
    for (std::size_t index=0; index<label_information.size(); index++)
    {
        if(label_information[index]->has_data())
            return true;
    }
    return afi_table_id.is_set
	|| eos.is_set
	|| eos_bit.is_set
	|| hardware_information.is_set
	|| label_value.is_set
	|| ldi_flags.is_set
	|| ldi_pointer.is_set
	|| ldi_referance_count.is_set
	|| ldi_type.is_set
	|| leaf_flags.is_set
	|| leaf_local_label.is_set
	|| leaf_referance_count.is_set
	|| leaf_time_in_milli_seconds.is_set
	|| lspa_flags.is_set
	|| lw_ldi_pointer.is_set
	|| lw_ldi_refernace_count.is_set
	|| lw_ldi_type.is_set
	|| lw_shared_ldi_pointer.is_set
	|| multicast_label.is_set
	|| path_list_flags.is_set
	|| path_list_referance_count.is_set
	|| (ldi_information !=  nullptr && ldi_information->has_data())
	|| (multicast_information !=  nullptr && multicast_information->has_data());
}

bool MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::has_operation() const
{
    for (std::size_t index=0; index<label_information.size(); index++)
    {
        if(label_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(afi_table_id.operation)
	|| is_set(eos.operation)
	|| is_set(eos_bit.operation)
	|| is_set(hardware_information.operation)
	|| is_set(label_value.operation)
	|| is_set(ldi_flags.operation)
	|| is_set(ldi_pointer.operation)
	|| is_set(ldi_referance_count.operation)
	|| is_set(ldi_type.operation)
	|| is_set(leaf_flags.operation)
	|| is_set(leaf_local_label.operation)
	|| is_set(leaf_referance_count.operation)
	|| is_set(leaf_time_in_milli_seconds.operation)
	|| is_set(lspa_flags.operation)
	|| is_set(lw_ldi_pointer.operation)
	|| is_set(lw_ldi_refernace_count.operation)
	|| is_set(lw_ldi_type.operation)
	|| is_set(lw_shared_ldi_pointer.operation)
	|| is_set(multicast_label.operation)
	|| is_set(path_list_flags.operation)
	|| is_set(path_list_referance_count.operation)
	|| (ldi_information !=  nullptr && ldi_information->has_operation())
	|| (multicast_information !=  nullptr && multicast_information->has_operation());
}

std::string MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-detail";

    return path_buffer.str();

}

EntityPath MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingDetail' in Cisco_IOS_XR_fib_common_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_table_id.is_set || is_set(afi_table_id.operation)) leaf_name_data.push_back(afi_table_id.get_name_leafdata());
    if (eos.is_set || is_set(eos.operation)) leaf_name_data.push_back(eos.get_name_leafdata());
    if (eos_bit.is_set || is_set(eos_bit.operation)) leaf_name_data.push_back(eos_bit.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.operation)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (label_value.is_set || is_set(label_value.operation)) leaf_name_data.push_back(label_value.get_name_leafdata());
    if (ldi_flags.is_set || is_set(ldi_flags.operation)) leaf_name_data.push_back(ldi_flags.get_name_leafdata());
    if (ldi_pointer.is_set || is_set(ldi_pointer.operation)) leaf_name_data.push_back(ldi_pointer.get_name_leafdata());
    if (ldi_referance_count.is_set || is_set(ldi_referance_count.operation)) leaf_name_data.push_back(ldi_referance_count.get_name_leafdata());
    if (ldi_type.is_set || is_set(ldi_type.operation)) leaf_name_data.push_back(ldi_type.get_name_leafdata());
    if (leaf_flags.is_set || is_set(leaf_flags.operation)) leaf_name_data.push_back(leaf_flags.get_name_leafdata());
    if (leaf_local_label.is_set || is_set(leaf_local_label.operation)) leaf_name_data.push_back(leaf_local_label.get_name_leafdata());
    if (leaf_referance_count.is_set || is_set(leaf_referance_count.operation)) leaf_name_data.push_back(leaf_referance_count.get_name_leafdata());
    if (leaf_time_in_milli_seconds.is_set || is_set(leaf_time_in_milli_seconds.operation)) leaf_name_data.push_back(leaf_time_in_milli_seconds.get_name_leafdata());
    if (lspa_flags.is_set || is_set(lspa_flags.operation)) leaf_name_data.push_back(lspa_flags.get_name_leafdata());
    if (lw_ldi_pointer.is_set || is_set(lw_ldi_pointer.operation)) leaf_name_data.push_back(lw_ldi_pointer.get_name_leafdata());
    if (lw_ldi_refernace_count.is_set || is_set(lw_ldi_refernace_count.operation)) leaf_name_data.push_back(lw_ldi_refernace_count.get_name_leafdata());
    if (lw_ldi_type.is_set || is_set(lw_ldi_type.operation)) leaf_name_data.push_back(lw_ldi_type.get_name_leafdata());
    if (lw_shared_ldi_pointer.is_set || is_set(lw_shared_ldi_pointer.operation)) leaf_name_data.push_back(lw_shared_ldi_pointer.get_name_leafdata());
    if (multicast_label.is_set || is_set(multicast_label.operation)) leaf_name_data.push_back(multicast_label.get_name_leafdata());
    if (path_list_flags.is_set || is_set(path_list_flags.operation)) leaf_name_data.push_back(path_list_flags.get_name_leafdata());
    if (path_list_referance_count.is_set || is_set(path_list_referance_count.operation)) leaf_name_data.push_back(path_list_referance_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "label-information")
    {
        for(auto const & c : label_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LabelInformation>();
        c->parent = this;
        label_information.push_back(std::move(c));
        children[segment_path] = label_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ldi-information")
    {
        if(ldi_information != nullptr)
        {
            children["ldi-information"] = ldi_information;
        }
        else
        {
            ldi_information = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::LdiInformation>();
            ldi_information->parent = this;
            children["ldi-information"] = ldi_information;
        }
        return children.at("ldi-information");
    }

    if(child_yang_name == "multicast-information")
    {
        if(multicast_information != nullptr)
        {
            children["multicast-information"] = multicast_information;
        }
        else
        {
            multicast_information = std::make_shared<MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::MulticastInformation>();
            multicast_information->parent = this;
            children["multicast-information"] = multicast_information;
        }
        return children.at("multicast-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::get_children()
{
    for (auto const & c : label_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("ldi-information") == children.end())
    {
        if(ldi_information != nullptr)
        {
            children["ldi-information"] = ldi_information;
        }
    }

    if(children.find("multicast-information") == children.end())
    {
        if(multicast_information != nullptr)
        {
            children["multicast-information"] = multicast_information;
        }
    }

    return children;
}

void MplsForwarding::Nodes::Node::LabelFib::ForwardingDetails::ForwardingDetail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-table-id")
    {
        afi_table_id = value;
    }
    if(value_path == "eos")
    {
        eos = value;
    }
    if(value_path == "eos-bit")
    {
        eos_bit = value;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
    }
    if(value_path == "label-value")
    {
        label_value = value;
    }
    if(value_path == "ldi-flags")
    {
        ldi_flags = value;
    }
    if(value_path == "ldi-pointer")
    {
        ldi_pointer = value;
    }
    if(value_path == "ldi-referance-count")
    {
        ldi_referance_count = value;
    }
    if(value_path == "ldi-type")
    {
        ldi_type = value;
    }
    if(value_path == "leaf-flags")
    {
        leaf_flags = value;
    }
    if(value_path == "leaf-local-label")
    {
        leaf_local_label = value;
    }
    if(value_path == "leaf-referance-count")
    {
        leaf_referance_count = value;
    }
    if(value_path == "leaf-time-in-milli-seconds")
    {
        leaf_time_in_milli_seconds = value;
    }
    if(value_path == "lspa-flags")
    {
        lspa_flags = value;
    }
    if(value_path == "lw-ldi-pointer")
    {
        lw_ldi_pointer = value;
    }
    if(value_path == "lw-ldi-refernace-count")
    {
        lw_ldi_refernace_count = value;
    }
    if(value_path == "lw-ldi-type")
    {
        lw_ldi_type = value;
    }
    if(value_path == "lw-shared-ldi-pointer")
    {
        lw_shared_ldi_pointer = value;
    }
    if(value_path == "multicast-label")
    {
        multicast_label = value;
    }
    if(value_path == "path-list-flags")
    {
        path_list_flags = value;
    }
    if(value_path == "path-list-referance-count")
    {
        path_list_referance_count = value;
    }
}

const Enum::YLeaf MgmtFibMplsFrrStateEnum::partial {0, "partial"};
const Enum::YLeaf MgmtFibMplsFrrStateEnum::active {1, "active"};
const Enum::YLeaf MgmtFibMplsFrrStateEnum::ready {2, "ready"};
const Enum::YLeaf MgmtFibMplsFrrStateEnum::complete {3, "complete"};
const Enum::YLeaf MgmtFibMplsFrrStateEnum::any {4, "any"};

const Enum::YLeaf FibNehSpecialEnum::nh_not_found {0, "nh-not-found"};
const Enum::YLeaf FibNehSpecialEnum::nh_null0 {1, "nh-null0"};
const Enum::YLeaf FibNehSpecialEnum::nh_punt {2, "nh-punt"};
const Enum::YLeaf FibNehSpecialEnum::nh_drop {3, "nh-drop"};
const Enum::YLeaf FibNehSpecialEnum::nh_glean {4, "nh-glean"};
const Enum::YLeaf FibNehSpecialEnum::nh_receive {5, "nh-receive"};
const Enum::YLeaf FibNehSpecialEnum::nh_broadcast {6, "nh-broadcast"};
const Enum::YLeaf FibNehSpecialEnum::nh_external {7, "nh-external"};
const Enum::YLeaf FibNehSpecialEnum::nh_lisp {8, "nh-lisp"};
const Enum::YLeaf FibNehSpecialEnum::nh_lookup {9, "nh-lookup"};
const Enum::YLeaf FibNehSpecialEnum::nh_max_type {10, "nh-max-type"};

const Enum::YLeaf ProtoEnum::ipv4 {0, "ipv4"};
const Enum::YLeaf ProtoEnum::ipv6 {1, "ipv6"};
const Enum::YLeaf ProtoEnum::mpls {2, "mpls"};

const Enum::YLeaf FibShIpencapHdrEnum::fib_sh_ip_encap_none {0, "fib-sh-ip-encap-none"};
const Enum::YLeaf FibShIpencapHdrEnum::fib_sh_ip_encap_ip4 {1, "fib-sh-ip-encap-ip4"};
const Enum::YLeaf FibShIpencapHdrEnum::fib_sh_ip_encap_ip6 {2, "fib-sh-ip-encap-ip6"};
const Enum::YLeaf FibShIpencapHdrEnum::fib_sh_ip_encap_udp {3, "fib-sh-ip-encap-udp"};
const Enum::YLeaf FibShIpencapHdrEnum::fib_sh_ip_encap_lisp {4, "fib-sh-ip-encap-lisp"};

const Enum::YLeaf FibAdjacencyShowEnum::fib_adjacency_normal {0, "fib-adjacency-normal"};
const Enum::YLeaf FibAdjacencyShowEnum::fib_adjacency_null {1, "fib-adjacency-null"};
const Enum::YLeaf FibAdjacencyShowEnum::fib_adjacency_punt {2, "fib-adjacency-punt"};
const Enum::YLeaf FibAdjacencyShowEnum::fib_adjacency_drop {3, "fib-adjacency-drop"};
const Enum::YLeaf FibAdjacencyShowEnum::fib_adjacency_glean {4, "fib-adjacency-glean"};
const Enum::YLeaf FibAdjacencyShowEnum::fib_adjacency_discard {5, "fib-adjacency-discard"};
const Enum::YLeaf FibAdjacencyShowEnum::fib_adjacency_broadcast {6, "fib-adjacency-broadcast"};
const Enum::YLeaf FibAdjacencyShowEnum::fib_adjacency_external {7, "fib-adjacency-external"};
const Enum::YLeaf FibAdjacencyShowEnum::fib_adjacency_lisp {8, "fib-adjacency-lisp"};
const Enum::YLeaf FibAdjacencyShowEnum::fib_adjacency_unknown {9, "fib-adjacency-unknown"};

const Enum::YLeaf SsLbaStateEnum::l3 {0, "l3"};
const Enum::YLeaf SsLbaStateEnum::l4 {1, "l4"};

const Enum::YLeaf FibRouteSourceEnum::lsd {5, "lsd"};
const Enum::YLeaf FibRouteSourceEnum::rib {7, "rib"};
const Enum::YLeaf FibRouteSourceEnum::mrib {13, "mrib"};

const Enum::YLeaf FibMplsLlcEntryBagEnum::fib_mpls_llc_bag_type_xc {1, "fib-mpls-llc-bag-type-xc"};
const Enum::YLeaf FibMplsLlcEntryBagEnum::fib_mpls_llc_bag_type_pfx {2, "fib-mpls-llc-bag-type-pfx"};
const Enum::YLeaf FibMplsLlcEntryBagEnum::fib_mpls_llc_bag_type_lsm {3, "fib-mpls-llc-bag-type-lsm"};
const Enum::YLeaf FibMplsLlcEntryBagEnum::fib_mpls_llc_bag_type_max {4, "fib-mpls-llc-bag-type-max"};

const Enum::YLeaf FibRpfModeEnum::fib_rpf_mode_strict {0, "fib-rpf-mode-strict"};
const Enum::YLeaf FibRpfModeEnum::fib_rpf_mode_loose {1, "fib-rpf-mode-loose"};
const Enum::YLeaf FibRpfModeEnum::fib_rpf_mode_unknown {2, "fib-rpf-mode-unknown"};

const Enum::YLeaf FibafiProtoEnum::ipv4 {0, "ipv4"};
const Enum::YLeaf FibafiProtoEnum::ipv4_mpls {1, "ipv4-mpls"};
const Enum::YLeaf FibafiProtoEnum::ipv6 {2, "ipv6"};
const Enum::YLeaf FibafiProtoEnum::ipv6_mpls {3, "ipv6-mpls"};

const Enum::YLeaf MplseosEnum::eos0 {0, "eos0"};
const Enum::YLeaf MplseosEnum::eos1 {1, "eos1"};

const Enum::YLeaf FibFrrProtocolShowEnum::frr_protocol_ipv4 {0, "frr-protocol-ipv4"};
const Enum::YLeaf FibFrrProtocolShowEnum::frr_protocol_ipv6 {1, "frr-protocol-ipv6"};
const Enum::YLeaf FibFrrProtocolShowEnum::frr_protocol_mpls {2, "frr-protocol-mpls"};

const Enum::YLeaf FibLinkEnum::link_ipv4 {0, "link-ipv4"};
const Enum::YLeaf FibLinkEnum::link_ipv6 {1, "link-ipv6"};
const Enum::YLeaf FibLinkEnum::link_mpls {2, "link-mpls"};

const Enum::YLeaf FibUpdatePathLfaProtectionEnum::not_lfa_protected {0, "not-lfa-protected"};
const Enum::YLeaf FibUpdatePathLfaProtectionEnum::local_lfa_protected {1, "local-lfa-protected"};
const Enum::YLeaf FibUpdatePathLfaProtectionEnum::remote_lfa_protected {2, "remote-lfa-protected"};
const Enum::YLeaf FibUpdatePathLfaProtectionEnum::ti_lfa_protected {3, "ti-lfa-protected"};

const Enum::YLeaf FibLoadshareShowEnum::fib_load_share_none {0, "fib-load-share-none"};
const Enum::YLeaf FibLoadshareShowEnum::fib_load_share_per_packet {1, "fib-load-share-per-packet"};
const Enum::YLeaf FibLoadshareShowEnum::fib_load_share_dest_sharing {2, "fib-load-share-dest-sharing"};

const Enum::YLeaf FibllcEntryEnum::xc {1, "xc"};
const Enum::YLeaf FibllcEntryEnum::pfx {2, "pfx"};

const Enum::YLeaf FibNehEnum::nh_local {0, "nh-local"};
const Enum::YLeaf FibNehEnum::nh_remote {1, "nh-remote"};
const Enum::YLeaf FibNehEnum::nh_special {2, "nh-special"};

const Enum::YLeaf NextHopEnum::tx {0, "tx"};
const Enum::YLeaf NextHopEnum::rx {1, "rx"};
const Enum::YLeaf NextHopEnum::special {2, "special"};

const Enum::YLeaf MgmtFibMplsLspRoleEnum::head {0, "head"};
const Enum::YLeaf MgmtFibMplsLspRoleEnum::midpoint {1, "midpoint"};

const Enum::YLeaf FibProtocolEnum::ipv4 {0, "ipv4"};
const Enum::YLeaf FibProtocolEnum::ipv6 {1, "ipv6"};
const Enum::YLeaf FibProtocolEnum::mpls {2, "mpls"};

const Enum::YLeaf FibidbOperEnum::fibidb_none {0, "fibidb-none"};
const Enum::YLeaf FibidbOperEnum::fibidb_create {1, "fibidb-create"};
const Enum::YLeaf FibidbOperEnum::fibidb_delete {2, "fibidb-delete"};
const Enum::YLeaf FibidbOperEnum::fibidb_modify {3, "fibidb-modify"};
const Enum::YLeaf FibidbOperEnum::fibidb_max {4, "fibidb-max"};

const Enum::YLeaf FibShTblFibExtBagEnum::leaf_extension {1, "leaf-extension"};


}
}

