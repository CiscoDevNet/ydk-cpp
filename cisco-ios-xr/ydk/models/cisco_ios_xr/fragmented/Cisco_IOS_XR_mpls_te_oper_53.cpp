
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_53.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_54.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::OduCapability()
    :
    lcas_capable{YType::boolean, "lcas-capable"},
    signal_type{YType::enumeration, "signal-type"},
    stage1{YType::enumeration, "stage1"},
    stage2{YType::enumeration, "stage2"},
    stage3{YType::enumeration, "stage3"},
    stage4{YType::enumeration, "stage4"},
    switchable{YType::boolean, "switchable"},
    terminable{YType::boolean, "terminable"},
    tsg1p25{YType::boolean, "tsg1p25"},
    tsg2p5{YType::boolean, "tsg2p5"},
    vcat_capable{YType::boolean, "vcat-capable"}
    	,
    bandwidth_info(std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo>())
{
    bandwidth_info->parent = this;

    yang_name = "odu-capability"; yang_parent_name = "odu-link-capabilities";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::~OduCapability()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::has_data() const
{
    return lcas_capable.is_set
	|| signal_type.is_set
	|| stage1.is_set
	|| stage2.is_set
	|| stage3.is_set
	|| stage4.is_set
	|| switchable.is_set
	|| terminable.is_set
	|| tsg1p25.is_set
	|| tsg2p5.is_set
	|| vcat_capable.is_set
	|| (bandwidth_info !=  nullptr && bandwidth_info->has_data());
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::has_operation() const
{
    return is_set(operation)
	|| is_set(lcas_capable.operation)
	|| is_set(signal_type.operation)
	|| is_set(stage1.operation)
	|| is_set(stage2.operation)
	|| is_set(stage3.operation)
	|| is_set(stage4.operation)
	|| is_set(switchable.operation)
	|| is_set(terminable.operation)
	|| is_set(tsg1p25.operation)
	|| is_set(tsg2p5.operation)
	|| is_set(vcat_capable.operation)
	|| (bandwidth_info !=  nullptr && bandwidth_info->has_operation());
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-capability";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OduCapability' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lcas_capable.is_set || is_set(lcas_capable.operation)) leaf_name_data.push_back(lcas_capable.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.operation)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage1.is_set || is_set(stage1.operation)) leaf_name_data.push_back(stage1.get_name_leafdata());
    if (stage2.is_set || is_set(stage2.operation)) leaf_name_data.push_back(stage2.get_name_leafdata());
    if (stage3.is_set || is_set(stage3.operation)) leaf_name_data.push_back(stage3.get_name_leafdata());
    if (stage4.is_set || is_set(stage4.operation)) leaf_name_data.push_back(stage4.get_name_leafdata());
    if (switchable.is_set || is_set(switchable.operation)) leaf_name_data.push_back(switchable.get_name_leafdata());
    if (terminable.is_set || is_set(terminable.operation)) leaf_name_data.push_back(terminable.get_name_leafdata());
    if (tsg1p25.is_set || is_set(tsg1p25.operation)) leaf_name_data.push_back(tsg1p25.get_name_leafdata());
    if (tsg2p5.is_set || is_set(tsg2p5.operation)) leaf_name_data.push_back(tsg2p5.get_name_leafdata());
    if (vcat_capable.is_set || is_set(vcat_capable.operation)) leaf_name_data.push_back(vcat_capable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bandwidth-info")
    {
        if(bandwidth_info == nullptr)
        {
            bandwidth_info = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo>();
        }
        return bandwidth_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bandwidth_info != nullptr)
    {
        children["bandwidth-info"] = bandwidth_info;
    }

    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lcas-capable")
    {
        lcas_capable = value;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
    }
    if(value_path == "stage1")
    {
        stage1 = value;
    }
    if(value_path == "stage2")
    {
        stage2 = value;
    }
    if(value_path == "stage3")
    {
        stage3 = value;
    }
    if(value_path == "stage4")
    {
        stage4 = value;
    }
    if(value_path == "switchable")
    {
        switchable = value;
    }
    if(value_path == "terminable")
    {
        terminable = value;
    }
    if(value_path == "tsg1p25")
    {
        tsg1p25 = value;
    }
    if(value_path == "tsg2p5")
    {
        tsg2p5 = value;
    }
    if(value_path == "vcat-capable")
    {
        vcat_capable = value;
    }
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::BandwidthInfo()
    :
    type{YType::enumeration, "type"}
    	,
    fixed(std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>())
	,flex(std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>())
{
    fixed->parent = this;

    flex->parent = this;

    yang_name = "bandwidth-info"; yang_parent_name = "odu-capability";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::~BandwidthInfo()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_data() const
{
    return type.is_set
	|| (fixed !=  nullptr && fixed->has_data())
	|| (flex !=  nullptr && flex->has_data());
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (fixed !=  nullptr && fixed->has_operation())
	|| (flex !=  nullptr && flex->has_operation());
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-info";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fixed")
    {
        if(fixed == nullptr)
        {
            fixed = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>();
        }
        return fixed;
    }

    if(child_yang_name == "flex")
    {
        if(flex == nullptr)
        {
            flex = std::make_shared<MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>();
        }
        return flex;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fixed != nullptr)
    {
        children["fixed"] = fixed;
    }

    if(flex != nullptr)
    {
        children["flex"] = flex;
    }

    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::Fixed()
    :
    maximum_od_us{YType::uint8, "maximum-od-us"},
    unreserved_od_us{YType::uint8, "unreserved-od-us"}
{
    yang_name = "fixed"; yang_parent_name = "bandwidth-info";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::~Fixed()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_data() const
{
    return maximum_od_us.is_set
	|| unreserved_od_us.is_set;
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_od_us.operation)
	|| is_set(unreserved_od_us.operation);
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Fixed' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_od_us.is_set || is_set(maximum_od_us.operation)) leaf_name_data.push_back(maximum_od_us.get_name_leafdata());
    if (unreserved_od_us.is_set || is_set(unreserved_od_us.operation)) leaf_name_data.push_back(unreserved_od_us.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-od-us")
    {
        maximum_od_us = value;
    }
    if(value_path == "unreserved-od-us")
    {
        unreserved_od_us = value;
    }
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::Flex()
    :
    max_bandwidth{YType::uint32, "max-bandwidth"},
    max_lsp_bandwidth{YType::uint32, "max-lsp-bandwidth"},
    unreserved_bandwidth{YType::uint32, "unreserved-bandwidth"}
{
    yang_name = "flex"; yang_parent_name = "bandwidth-info";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::~Flex()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_data() const
{
    return max_bandwidth.is_set
	|| max_lsp_bandwidth.is_set
	|| unreserved_bandwidth.is_set;
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_operation() const
{
    return is_set(operation)
	|| is_set(max_bandwidth.operation)
	|| is_set(max_lsp_bandwidth.operation)
	|| is_set(unreserved_bandwidth.operation);
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flex' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_bandwidth.is_set || is_set(max_bandwidth.operation)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_lsp_bandwidth.is_set || is_set(max_lsp_bandwidth.operation)) leaf_name_data.push_back(max_lsp_bandwidth.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.operation)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
    }
    if(value_path == "max-lsp-bandwidth")
    {
        max_lsp_bandwidth = value;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth = value;
    }
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{
    yang_name = "shared-risk-link-group"; yang_parent_name = "topology-node-link";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(shared_risk_group.operation)
	|| is_set(srlg_name.operation);
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SharedRiskLinkGroup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.operation)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::SharedRiskLinkGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::AdjacencySid()
    :
    adjacency_sid{YType::uint32, "adjacency-sid"},
    flag_b{YType::boolean, "flag-b"},
    flag_f{YType::boolean, "flag-f"},
    flag_l{YType::boolean, "flag-l"},
    flag_s{YType::boolean, "flag-s"},
    flag_v{YType::boolean, "flag-v"},
    link_type{YType::enumeration, "link-type"},
    local_addr{YType::str, "local-addr"},
    nbr_node_igpid{YType::str, "nbr-node-igpid"},
    nbr_node_te_router_id{YType::str, "nbr-node-te-router-id"},
    remote_addr{YType::str, "remote-addr"}
{
    yang_name = "adjacency-sid"; yang_parent_name = "topology-node-link";
}

MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::~AdjacencySid()
{
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::has_data() const
{
    return adjacency_sid.is_set
	|| flag_b.is_set
	|| flag_f.is_set
	|| flag_l.is_set
	|| flag_s.is_set
	|| flag_v.is_set
	|| link_type.is_set
	|| local_addr.is_set
	|| nbr_node_igpid.is_set
	|| nbr_node_te_router_id.is_set
	|| remote_addr.is_set;
}

bool MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::has_operation() const
{
    return is_set(operation)
	|| is_set(adjacency_sid.operation)
	|| is_set(flag_b.operation)
	|| is_set(flag_f.operation)
	|| is_set(flag_l.operation)
	|| is_set(flag_s.operation)
	|| is_set(flag_v.operation)
	|| is_set(link_type.operation)
	|| is_set(local_addr.operation)
	|| is_set(nbr_node_igpid.operation)
	|| is_set(nbr_node_te_router_id.operation)
	|| is_set(remote_addr.operation);
}

std::string MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySid' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_sid.is_set || is_set(adjacency_sid.operation)) leaf_name_data.push_back(adjacency_sid.get_name_leafdata());
    if (flag_b.is_set || is_set(flag_b.operation)) leaf_name_data.push_back(flag_b.get_name_leafdata());
    if (flag_f.is_set || is_set(flag_f.operation)) leaf_name_data.push_back(flag_f.get_name_leafdata());
    if (flag_l.is_set || is_set(flag_l.operation)) leaf_name_data.push_back(flag_l.get_name_leafdata());
    if (flag_s.is_set || is_set(flag_s.operation)) leaf_name_data.push_back(flag_s.get_name_leafdata());
    if (flag_v.is_set || is_set(flag_v.operation)) leaf_name_data.push_back(flag_v.get_name_leafdata());
    if (link_type.is_set || is_set(link_type.operation)) leaf_name_data.push_back(link_type.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.operation)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (nbr_node_igpid.is_set || is_set(nbr_node_igpid.operation)) leaf_name_data.push_back(nbr_node_igpid.get_name_leafdata());
    if (nbr_node_te_router_id.is_set || is_set(nbr_node_te_router_id.operation)) leaf_name_data.push_back(nbr_node_te_router_id.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.operation)) leaf_name_data.push_back(remote_addr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::TopologyNodes::TopologyNode::TopologyNodeLink::AdjacencySid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjacency-sid")
    {
        adjacency_sid = value;
    }
    if(value_path == "flag-b")
    {
        flag_b = value;
    }
    if(value_path == "flag-f")
    {
        flag_f = value;
    }
    if(value_path == "flag-l")
    {
        flag_l = value;
    }
    if(value_path == "flag-s")
    {
        flag_s = value;
    }
    if(value_path == "flag-v")
    {
        flag_v = value;
    }
    if(value_path == "link-type")
    {
        link_type = value;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
    }
    if(value_path == "nbr-node-igpid")
    {
        nbr_node_igpid = value;
    }
    if(value_path == "nbr-node-te-router-id")
    {
        nbr_node_te_router_id = value;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
    }
}

MplsTeStandby::AnnounceTunnelsInfo::AnnounceTunnelsInfo()
    :
    all_autoroute_table(std::make_shared<MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable>())
	,autoroute_announce_table(std::make_shared<MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable>())
{
    all_autoroute_table->parent = this;

    autoroute_announce_table->parent = this;

    yang_name = "announce-tunnels-info"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::AnnounceTunnelsInfo::~AnnounceTunnelsInfo()
{
}

bool MplsTeStandby::AnnounceTunnelsInfo::has_data() const
{
    return (all_autoroute_table !=  nullptr && all_autoroute_table->has_data())
	|| (autoroute_announce_table !=  nullptr && autoroute_announce_table->has_data());
}

bool MplsTeStandby::AnnounceTunnelsInfo::has_operation() const
{
    return is_set(operation)
	|| (all_autoroute_table !=  nullptr && all_autoroute_table->has_operation())
	|| (autoroute_announce_table !=  nullptr && autoroute_announce_table->has_operation());
}

std::string MplsTeStandby::AnnounceTunnelsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-tunnels-info";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AnnounceTunnelsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AnnounceTunnelsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all-autoroute-table")
    {
        if(all_autoroute_table == nullptr)
        {
            all_autoroute_table = std::make_shared<MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable>();
        }
        return all_autoroute_table;
    }

    if(child_yang_name == "autoroute-announce-table")
    {
        if(autoroute_announce_table == nullptr)
        {
            autoroute_announce_table = std::make_shared<MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable>();
        }
        return autoroute_announce_table;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AnnounceTunnelsInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(all_autoroute_table != nullptr)
    {
        children["all-autoroute-table"] = all_autoroute_table;
    }

    if(autoroute_announce_table != nullptr)
    {
        children["autoroute-announce-table"] = autoroute_announce_table;
    }

    return children;
}

void MplsTeStandby::AnnounceTunnelsInfo::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AutorouteAnnounceTable()
{
    yang_name = "autoroute-announce-table"; yang_parent_name = "announce-tunnels-info";
}

MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::~AutorouteAnnounceTable()
{
}

bool MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::has_data() const
{
    for (std::size_t index=0; index<announce_dest.size(); index++)
    {
        if(announce_dest[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::has_operation() const
{
    for (std::size_t index=0; index<announce_dest.size(); index++)
    {
        if(announce_dest[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoroute-announce-table";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/announce-tunnels-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "announce-dest")
    {
        for(auto const & c : announce_dest)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest>();
        c->parent = this;
        announce_dest.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : announce_dest)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::AnnounceDest()
    :
    destination_address{YType::str, "destination-address"},
    protocol{YType::enumeration, "protocol"},
    area{YType::int32, "area"},
    igp_id{YType::str, "igp-id"},
    announced_tunnels_count{YType::uint16, "announced-tunnels-count"},
    area_format{YType::enumeration, "area-format"},
    autorouted_tunnels_count{YType::uint16, "autorouted-tunnels-count"},
    destination{YType::str, "destination"},
    forwarding_adjacency_tunnels_count{YType::uint16, "forwarding-adjacency-tunnels-count"},
    igp_area{YType::uint32, "igp-area"},
    igp_instance{YType::str, "igp-instance"},
    igp_type{YType::enumeration, "igp-type"}
{
    yang_name = "announce-dest"; yang_parent_name = "autoroute-announce-table";
}

MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::~AnnounceDest()
{
}

bool MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::has_data() const
{
    for (std::size_t index=0; index<total_tunnel.size(); index++)
    {
        if(total_tunnel[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| protocol.is_set
	|| area.is_set
	|| igp_id.is_set
	|| announced_tunnels_count.is_set
	|| area_format.is_set
	|| autorouted_tunnels_count.is_set
	|| destination.is_set
	|| forwarding_adjacency_tunnels_count.is_set
	|| igp_area.is_set
	|| igp_instance.is_set
	|| igp_type.is_set;
}

bool MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::has_operation() const
{
    for (std::size_t index=0; index<total_tunnel.size(); index++)
    {
        if(total_tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(protocol.operation)
	|| is_set(area.operation)
	|| is_set(igp_id.operation)
	|| is_set(announced_tunnels_count.operation)
	|| is_set(area_format.operation)
	|| is_set(autorouted_tunnels_count.operation)
	|| is_set(destination.operation)
	|| is_set(forwarding_adjacency_tunnels_count.operation)
	|| is_set(igp_area.operation)
	|| is_set(igp_instance.operation)
	|| is_set(igp_type.operation);
}

std::string MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-dest" <<"[destination-address='" <<destination_address <<"']" <<"[protocol='" <<protocol <<"']" <<"[area='" <<area <<"']" <<"[igp-id='" <<igp_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/announce-tunnels-info/autoroute-announce-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (igp_id.is_set || is_set(igp_id.operation)) leaf_name_data.push_back(igp_id.get_name_leafdata());
    if (announced_tunnels_count.is_set || is_set(announced_tunnels_count.operation)) leaf_name_data.push_back(announced_tunnels_count.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (autorouted_tunnels_count.is_set || is_set(autorouted_tunnels_count.operation)) leaf_name_data.push_back(autorouted_tunnels_count.get_name_leafdata());
    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (forwarding_adjacency_tunnels_count.is_set || is_set(forwarding_adjacency_tunnels_count.operation)) leaf_name_data.push_back(forwarding_adjacency_tunnels_count.get_name_leafdata());
    if (igp_area.is_set || is_set(igp_area.operation)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.operation)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.operation)) leaf_name_data.push_back(igp_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total-tunnel")
    {
        for(auto const & c : total_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel>();
        c->parent = this;
        total_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : total_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "igp-id")
    {
        igp_id = value;
    }
    if(value_path == "announced-tunnels-count")
    {
        announced_tunnels_count = value;
    }
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "autorouted-tunnels-count")
    {
        autorouted_tunnels_count = value;
    }
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "forwarding-adjacency-tunnels-count")
    {
        forwarding_adjacency_tunnels_count = value;
    }
    if(value_path == "igp-area")
    {
        igp_area = value;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
    }
}

MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::TotalTunnel()
    :
    announce_type{YType::enumeration, "announce-type"},
    area_format{YType::enumeration, "area-format"},
    hold_time{YType::uint32, "hold-time"},
    igp_metric{YType::int32, "igp-metric"},
    is_auto_mesh_aa{YType::boolean, "is-auto-mesh-aa"},
    is_exclude_segment_routing{YType::boolean, "is-exclude-segment-routing"},
    is_sr{YType::boolean, "is-sr"},
    is_sr_strict{YType::boolean, "is-sr-strict"},
    mesh_group_idaa{YType::uint32, "mesh-group-idaa"},
    mode{YType::enumeration, "mode"},
    next_hop_address{YType::str, "next-hop-address"},
    tunnel_loadshare{YType::uint32, "tunnel-loadshare"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_sig_name{YType::str, "tunnel-sig-name"}
{
    yang_name = "total-tunnel"; yang_parent_name = "announce-dest";
}

MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::~TotalTunnel()
{
}

bool MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::has_data() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_data())
            return true;
    }
    return announce_type.is_set
	|| area_format.is_set
	|| hold_time.is_set
	|| igp_metric.is_set
	|| is_auto_mesh_aa.is_set
	|| is_exclude_segment_routing.is_set
	|| is_sr.is_set
	|| is_sr_strict.is_set
	|| mesh_group_idaa.is_set
	|| mode.is_set
	|| next_hop_address.is_set
	|| tunnel_loadshare.is_set
	|| tunnel_name.is_set
	|| tunnel_sig_name.is_set;
}

bool MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::has_operation() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(announce_type.operation)
	|| is_set(area_format.operation)
	|| is_set(hold_time.operation)
	|| is_set(igp_metric.operation)
	|| is_set(is_auto_mesh_aa.operation)
	|| is_set(is_exclude_segment_routing.operation)
	|| is_set(is_sr.operation)
	|| is_set(is_sr_strict.operation)
	|| is_set(mesh_group_idaa.operation)
	|| is_set(mode.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(tunnel_loadshare.operation)
	|| is_set(tunnel_name.operation)
	|| is_set(tunnel_sig_name.operation);
}

std::string MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-tunnel";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TotalTunnel' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announce_type.is_set || is_set(announce_type.operation)) leaf_name_data.push_back(announce_type.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.operation)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (is_auto_mesh_aa.is_set || is_set(is_auto_mesh_aa.operation)) leaf_name_data.push_back(is_auto_mesh_aa.get_name_leafdata());
    if (is_exclude_segment_routing.is_set || is_set(is_exclude_segment_routing.operation)) leaf_name_data.push_back(is_exclude_segment_routing.get_name_leafdata());
    if (is_sr.is_set || is_set(is_sr.operation)) leaf_name_data.push_back(is_sr.get_name_leafdata());
    if (is_sr_strict.is_set || is_set(is_sr_strict.operation)) leaf_name_data.push_back(is_sr_strict.get_name_leafdata());
    if (mesh_group_idaa.is_set || is_set(mesh_group_idaa.operation)) leaf_name_data.push_back(mesh_group_idaa.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (tunnel_loadshare.is_set || is_set(tunnel_loadshare.operation)) leaf_name_data.push_back(tunnel_loadshare.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_sig_name.is_set || is_set(tunnel_sig_name.operation)) leaf_name_data.push_back(tunnel_sig_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ig-ps")
    {
        for(auto const & c : ig_ps)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs>();
        c->parent = this;
        ig_ps.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ig_ps)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "announce-type")
    {
        announce_type = value;
    }
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
    }
    if(value_path == "is-auto-mesh-aa")
    {
        is_auto_mesh_aa = value;
    }
    if(value_path == "is-exclude-segment-routing")
    {
        is_exclude_segment_routing = value;
    }
    if(value_path == "is-sr")
    {
        is_sr = value;
    }
    if(value_path == "is-sr-strict")
    {
        is_sr_strict = value;
    }
    if(value_path == "mesh-group-idaa")
    {
        mesh_group_idaa = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "tunnel-loadshare")
    {
        tunnel_loadshare = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name = value;
    }
}

MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::IgPs()
    :
    afi{YType::enumeration, "afi"},
    igp_area_id{YType::str, "igp-area-id"}
{
    yang_name = "ig-ps"; yang_parent_name = "total-tunnel";
}

MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::~IgPs()
{
}

bool MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::has_data() const
{
    return afi.is_set
	|| igp_area_id.is_set;
}

bool MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(igp_area_id.operation);
}

std::string MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ig-ps";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgPs' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (igp_area_id.is_set || is_set(igp_area_id.operation)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AnnounceTunnelsInfo::AutorouteAnnounceTable::AnnounceDest::TotalTunnel::IgPs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
    }
}

MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AllAutorouteTable()
{
    yang_name = "all-autoroute-table"; yang_parent_name = "announce-tunnels-info";
}

MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::~AllAutorouteTable()
{
}

bool MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::has_data() const
{
    for (std::size_t index=0; index<announce_dest.size(); index++)
    {
        if(announce_dest[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::has_operation() const
{
    for (std::size_t index=0; index<announce_dest.size(); index++)
    {
        if(announce_dest[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-autoroute-table";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/announce-tunnels-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "announce-dest")
    {
        for(auto const & c : announce_dest)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest>();
        c->parent = this;
        announce_dest.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : announce_dest)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::AnnounceDest()
    :
    destination_address{YType::str, "destination-address"},
    protocol{YType::enumeration, "protocol"},
    area{YType::int32, "area"},
    igp_id{YType::str, "igp-id"},
    announced_tunnels_count{YType::uint16, "announced-tunnels-count"},
    area_format{YType::enumeration, "area-format"},
    autorouted_tunnels_count{YType::uint16, "autorouted-tunnels-count"},
    destination{YType::str, "destination"},
    forwarding_adjacency_tunnels_count{YType::uint16, "forwarding-adjacency-tunnels-count"},
    igp_area{YType::uint32, "igp-area"},
    igp_instance{YType::str, "igp-instance"},
    igp_type{YType::enumeration, "igp-type"}
{
    yang_name = "announce-dest"; yang_parent_name = "all-autoroute-table";
}

MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::~AnnounceDest()
{
}

bool MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::has_data() const
{
    for (std::size_t index=0; index<total_tunnel.size(); index++)
    {
        if(total_tunnel[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| protocol.is_set
	|| area.is_set
	|| igp_id.is_set
	|| announced_tunnels_count.is_set
	|| area_format.is_set
	|| autorouted_tunnels_count.is_set
	|| destination.is_set
	|| forwarding_adjacency_tunnels_count.is_set
	|| igp_area.is_set
	|| igp_instance.is_set
	|| igp_type.is_set;
}

bool MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::has_operation() const
{
    for (std::size_t index=0; index<total_tunnel.size(); index++)
    {
        if(total_tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(protocol.operation)
	|| is_set(area.operation)
	|| is_set(igp_id.operation)
	|| is_set(announced_tunnels_count.operation)
	|| is_set(area_format.operation)
	|| is_set(autorouted_tunnels_count.operation)
	|| is_set(destination.operation)
	|| is_set(forwarding_adjacency_tunnels_count.operation)
	|| is_set(igp_area.operation)
	|| is_set(igp_instance.operation)
	|| is_set(igp_type.operation);
}

std::string MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "announce-dest" <<"[destination-address='" <<destination_address <<"']" <<"[protocol='" <<protocol <<"']" <<"[area='" <<area <<"']" <<"[igp-id='" <<igp_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/announce-tunnels-info/all-autoroute-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (igp_id.is_set || is_set(igp_id.operation)) leaf_name_data.push_back(igp_id.get_name_leafdata());
    if (announced_tunnels_count.is_set || is_set(announced_tunnels_count.operation)) leaf_name_data.push_back(announced_tunnels_count.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (autorouted_tunnels_count.is_set || is_set(autorouted_tunnels_count.operation)) leaf_name_data.push_back(autorouted_tunnels_count.get_name_leafdata());
    if (destination.is_set || is_set(destination.operation)) leaf_name_data.push_back(destination.get_name_leafdata());
    if (forwarding_adjacency_tunnels_count.is_set || is_set(forwarding_adjacency_tunnels_count.operation)) leaf_name_data.push_back(forwarding_adjacency_tunnels_count.get_name_leafdata());
    if (igp_area.is_set || is_set(igp_area.operation)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.operation)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.operation)) leaf_name_data.push_back(igp_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "total-tunnel")
    {
        for(auto const & c : total_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel>();
        c->parent = this;
        total_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : total_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "igp-id")
    {
        igp_id = value;
    }
    if(value_path == "announced-tunnels-count")
    {
        announced_tunnels_count = value;
    }
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "autorouted-tunnels-count")
    {
        autorouted_tunnels_count = value;
    }
    if(value_path == "destination")
    {
        destination = value;
    }
    if(value_path == "forwarding-adjacency-tunnels-count")
    {
        forwarding_adjacency_tunnels_count = value;
    }
    if(value_path == "igp-area")
    {
        igp_area = value;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
    }
}

MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::TotalTunnel()
    :
    announce_type{YType::enumeration, "announce-type"},
    area_format{YType::enumeration, "area-format"},
    hold_time{YType::uint32, "hold-time"},
    igp_metric{YType::int32, "igp-metric"},
    is_auto_mesh_aa{YType::boolean, "is-auto-mesh-aa"},
    is_exclude_segment_routing{YType::boolean, "is-exclude-segment-routing"},
    is_sr{YType::boolean, "is-sr"},
    is_sr_strict{YType::boolean, "is-sr-strict"},
    mesh_group_idaa{YType::uint32, "mesh-group-idaa"},
    mode{YType::enumeration, "mode"},
    next_hop_address{YType::str, "next-hop-address"},
    tunnel_loadshare{YType::uint32, "tunnel-loadshare"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_sig_name{YType::str, "tunnel-sig-name"}
{
    yang_name = "total-tunnel"; yang_parent_name = "announce-dest";
}

MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::~TotalTunnel()
{
}

bool MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::has_data() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_data())
            return true;
    }
    return announce_type.is_set
	|| area_format.is_set
	|| hold_time.is_set
	|| igp_metric.is_set
	|| is_auto_mesh_aa.is_set
	|| is_exclude_segment_routing.is_set
	|| is_sr.is_set
	|| is_sr_strict.is_set
	|| mesh_group_idaa.is_set
	|| mode.is_set
	|| next_hop_address.is_set
	|| tunnel_loadshare.is_set
	|| tunnel_name.is_set
	|| tunnel_sig_name.is_set;
}

bool MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::has_operation() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(announce_type.operation)
	|| is_set(area_format.operation)
	|| is_set(hold_time.operation)
	|| is_set(igp_metric.operation)
	|| is_set(is_auto_mesh_aa.operation)
	|| is_set(is_exclude_segment_routing.operation)
	|| is_set(is_sr.operation)
	|| is_set(is_sr_strict.operation)
	|| is_set(mesh_group_idaa.operation)
	|| is_set(mode.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(tunnel_loadshare.operation)
	|| is_set(tunnel_name.operation)
	|| is_set(tunnel_sig_name.operation);
}

std::string MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total-tunnel";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TotalTunnel' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (announce_type.is_set || is_set(announce_type.operation)) leaf_name_data.push_back(announce_type.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.operation)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (is_auto_mesh_aa.is_set || is_set(is_auto_mesh_aa.operation)) leaf_name_data.push_back(is_auto_mesh_aa.get_name_leafdata());
    if (is_exclude_segment_routing.is_set || is_set(is_exclude_segment_routing.operation)) leaf_name_data.push_back(is_exclude_segment_routing.get_name_leafdata());
    if (is_sr.is_set || is_set(is_sr.operation)) leaf_name_data.push_back(is_sr.get_name_leafdata());
    if (is_sr_strict.is_set || is_set(is_sr_strict.operation)) leaf_name_data.push_back(is_sr_strict.get_name_leafdata());
    if (mesh_group_idaa.is_set || is_set(mesh_group_idaa.operation)) leaf_name_data.push_back(mesh_group_idaa.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (tunnel_loadshare.is_set || is_set(tunnel_loadshare.operation)) leaf_name_data.push_back(tunnel_loadshare.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_sig_name.is_set || is_set(tunnel_sig_name.operation)) leaf_name_data.push_back(tunnel_sig_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ig-ps")
    {
        for(auto const & c : ig_ps)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs>();
        c->parent = this;
        ig_ps.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ig_ps)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "announce-type")
    {
        announce_type = value;
    }
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
    }
    if(value_path == "is-auto-mesh-aa")
    {
        is_auto_mesh_aa = value;
    }
    if(value_path == "is-exclude-segment-routing")
    {
        is_exclude_segment_routing = value;
    }
    if(value_path == "is-sr")
    {
        is_sr = value;
    }
    if(value_path == "is-sr-strict")
    {
        is_sr_strict = value;
    }
    if(value_path == "mesh-group-idaa")
    {
        mesh_group_idaa = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "tunnel-loadshare")
    {
        tunnel_loadshare = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name = value;
    }
}

MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::IgPs()
    :
    afi{YType::enumeration, "afi"},
    igp_area_id{YType::str, "igp-area-id"}
{
    yang_name = "ig-ps"; yang_parent_name = "total-tunnel";
}

MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::~IgPs()
{
}

bool MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::has_data() const
{
    return afi.is_set
	|| igp_area_id.is_set;
}

bool MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(igp_area_id.operation);
}

std::string MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ig-ps";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgPs' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (igp_area_id.is_set || is_set(igp_area_id.operation)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AnnounceTunnelsInfo::AllAutorouteTable::AnnounceDest::TotalTunnel::IgPs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
    }
}

MplsTeStandby::CollaboratorTimers::CollaboratorTimers()
{
    yang_name = "collaborator-timers"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::CollaboratorTimers::~CollaboratorTimers()
{
}

bool MplsTeStandby::CollaboratorTimers::has_data() const
{
    for (std::size_t index=0; index<p2mp_timer.size(); index++)
    {
        if(p2mp_timer[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::CollaboratorTimers::has_operation() const
{
    for (std::size_t index=0; index<p2mp_timer.size(); index++)
    {
        if(p2mp_timer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::CollaboratorTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "collaborator-timers";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::CollaboratorTimers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::CollaboratorTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "p2mp-timer")
    {
        for(auto const & c : p2mp_timer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::CollaboratorTimers::P2MpTimer>();
        c->parent = this;
        p2mp_timer.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::CollaboratorTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : p2mp_timer)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::CollaboratorTimers::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::CollaboratorTimers::P2MpTimer::P2MpTimer()
    :
    duration{YType::uint32, "duration"},
    expiry_time{YType::uint32, "expiry-time"},
    is_running{YType::boolean, "is-running"},
    start_time{YType::uint32, "start-time"},
    stop_time{YType::uint32, "stop-time"},
    timer_name{YType::str, "timer-name"},
    timer_type{YType::enumeration, "timer-type"}
{
    yang_name = "p2mp-timer"; yang_parent_name = "collaborator-timers";
}

MplsTeStandby::CollaboratorTimers::P2MpTimer::~P2MpTimer()
{
}

bool MplsTeStandby::CollaboratorTimers::P2MpTimer::has_data() const
{
    return duration.is_set
	|| expiry_time.is_set
	|| is_running.is_set
	|| start_time.is_set
	|| stop_time.is_set
	|| timer_name.is_set
	|| timer_type.is_set;
}

bool MplsTeStandby::CollaboratorTimers::P2MpTimer::has_operation() const
{
    return is_set(operation)
	|| is_set(duration.operation)
	|| is_set(expiry_time.operation)
	|| is_set(is_running.operation)
	|| is_set(start_time.operation)
	|| is_set(stop_time.operation)
	|| is_set(timer_name.operation)
	|| is_set(timer_type.operation);
}

std::string MplsTeStandby::CollaboratorTimers::P2MpTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-timer";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::CollaboratorTimers::P2MpTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/collaborator-timers/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.operation)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (expiry_time.is_set || is_set(expiry_time.operation)) leaf_name_data.push_back(expiry_time.get_name_leafdata());
    if (is_running.is_set || is_set(is_running.operation)) leaf_name_data.push_back(is_running.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.operation)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (stop_time.is_set || is_set(stop_time.operation)) leaf_name_data.push_back(stop_time.get_name_leafdata());
    if (timer_name.is_set || is_set(timer_name.operation)) leaf_name_data.push_back(timer_name.get_name_leafdata());
    if (timer_type.is_set || is_set(timer_type.operation)) leaf_name_data.push_back(timer_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::CollaboratorTimers::P2MpTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::CollaboratorTimers::P2MpTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::CollaboratorTimers::P2MpTimer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "duration")
    {
        duration = value;
    }
    if(value_path == "expiry-time")
    {
        expiry_time = value;
    }
    if(value_path == "is-running")
    {
        is_running = value;
    }
    if(value_path == "start-time")
    {
        start_time = value;
    }
    if(value_path == "stop-time")
    {
        stop_time = value;
    }
    if(value_path == "timer-name")
    {
        timer_name = value;
    }
    if(value_path == "timer-type")
    {
        timer_type = value;
    }
}

MplsTeStandby::AutoTunnel::AutoTunnel()
    :
    backup(std::make_shared<MplsTeStandby::AutoTunnel::Backup>())
	,mesh(std::make_shared<MplsTeStandby::AutoTunnel::Mesh>())
	,pcc(std::make_shared<MplsTeStandby::AutoTunnel::Pcc>())
{
    backup->parent = this;

    mesh->parent = this;

    pcc->parent = this;

    yang_name = "auto-tunnel"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::AutoTunnel::~AutoTunnel()
{
}

bool MplsTeStandby::AutoTunnel::has_data() const
{
    return (backup !=  nullptr && backup->has_data())
	|| (mesh !=  nullptr && mesh->has_data())
	|| (pcc !=  nullptr && pcc->has_data());
}

bool MplsTeStandby::AutoTunnel::has_operation() const
{
    return is_set(operation)
	|| (backup !=  nullptr && backup->has_operation())
	|| (mesh !=  nullptr && mesh->has_operation())
	|| (pcc !=  nullptr && pcc->has_operation());
}

std::string MplsTeStandby::AutoTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-tunnel";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<MplsTeStandby::AutoTunnel::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "mesh")
    {
        if(mesh == nullptr)
        {
            mesh = std::make_shared<MplsTeStandby::AutoTunnel::Mesh>();
        }
        return mesh;
    }

    if(child_yang_name == "pcc")
    {
        if(pcc == nullptr)
        {
            pcc = std::make_shared<MplsTeStandby::AutoTunnel::Pcc>();
        }
        return pcc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(backup != nullptr)
    {
        children["backup"] = backup;
    }

    if(mesh != nullptr)
    {
        children["mesh"] = mesh;
    }

    if(pcc != nullptr)
    {
        children["pcc"] = pcc;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::AutoTunnel::Pcc::Pcc()
    :
    summary(std::make_shared<MplsTeStandby::AutoTunnel::Pcc::Summary>())
{
    summary->parent = this;

    yang_name = "pcc"; yang_parent_name = "auto-tunnel";
}

MplsTeStandby::AutoTunnel::Pcc::~Pcc()
{
}

bool MplsTeStandby::AutoTunnel::Pcc::has_data() const
{
    return (summary !=  nullptr && summary->has_data());
}

bool MplsTeStandby::AutoTunnel::Pcc::has_operation() const
{
    return is_set(operation)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTeStandby::AutoTunnel::Pcc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pcc";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Pcc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Pcc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTeStandby::AutoTunnel::Pcc::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Pcc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Pcc::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::AutoTunnel::Pcc::Summary::Summary()
    :
    down_pcc_auto_tunnels{YType::uint32, "down-pcc-auto-tunnels"},
    pcc_auto_tunnel{YType::uint32, "pcc-auto-tunnel"},
    up_pcc_auto_tunnels{YType::uint32, "up-pcc-auto-tunnels"}
{
    yang_name = "summary"; yang_parent_name = "pcc";
}

MplsTeStandby::AutoTunnel::Pcc::Summary::~Summary()
{
}

bool MplsTeStandby::AutoTunnel::Pcc::Summary::has_data() const
{
    return down_pcc_auto_tunnels.is_set
	|| pcc_auto_tunnel.is_set
	|| up_pcc_auto_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Pcc::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(down_pcc_auto_tunnels.operation)
	|| is_set(pcc_auto_tunnel.operation)
	|| is_set(up_pcc_auto_tunnels.operation);
}

std::string MplsTeStandby::AutoTunnel::Pcc::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Pcc::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/pcc/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (down_pcc_auto_tunnels.is_set || is_set(down_pcc_auto_tunnels.operation)) leaf_name_data.push_back(down_pcc_auto_tunnels.get_name_leafdata());
    if (pcc_auto_tunnel.is_set || is_set(pcc_auto_tunnel.operation)) leaf_name_data.push_back(pcc_auto_tunnel.get_name_leafdata());
    if (up_pcc_auto_tunnels.is_set || is_set(up_pcc_auto_tunnels.operation)) leaf_name_data.push_back(up_pcc_auto_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Pcc::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Pcc::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Pcc::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "down-pcc-auto-tunnels")
    {
        down_pcc_auto_tunnels = value;
    }
    if(value_path == "pcc-auto-tunnel")
    {
        pcc_auto_tunnel = value;
    }
    if(value_path == "up-pcc-auto-tunnels")
    {
        up_pcc_auto_tunnels = value;
    }
}

MplsTeStandby::AutoTunnel::Mesh::Mesh()
    :
    config(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::Config>())
	,mesh_groups(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::MeshGroups>())
	,one_hop(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop>())
	,statistics(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::Statistics>())
	,summary(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::Summary>())
{
    config->parent = this;

    mesh_groups->parent = this;

    one_hop->parent = this;

    statistics->parent = this;

    summary->parent = this;

    yang_name = "mesh"; yang_parent_name = "auto-tunnel";
}

MplsTeStandby::AutoTunnel::Mesh::~Mesh()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (mesh_groups !=  nullptr && mesh_groups->has_data())
	|| (one_hop !=  nullptr && one_hop->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool MplsTeStandby::AutoTunnel::Mesh::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (mesh_groups !=  nullptr && mesh_groups->has_operation())
	|| (one_hop !=  nullptr && one_hop->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTeStandby::AutoTunnel::Mesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::Config>();
        }
        return config;
    }

    if(child_yang_name == "mesh-groups")
    {
        if(mesh_groups == nullptr)
        {
            mesh_groups = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::MeshGroups>();
        }
        return mesh_groups;
    }

    if(child_yang_name == "one-hop")
    {
        if(one_hop == nullptr)
        {
            one_hop = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop>();
        }
        return one_hop;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(mesh_groups != nullptr)
    {
        children["mesh-groups"] = mesh_groups;
    }

    if(one_hop != nullptr)
    {
        children["one-hop"] = one_hop;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroups()
{
    yang_name = "mesh-groups"; yang_parent_name = "mesh";
}

MplsTeStandby::AutoTunnel::Mesh::MeshGroups::~MeshGroups()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::has_data() const
{
    for (std::size_t index=0; index<mesh_group.size(); index++)
    {
        if(mesh_group[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::has_operation() const
{
    for (std::size_t index=0; index<mesh_group.size(); index++)
    {
        if(mesh_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::AutoTunnel::Mesh::MeshGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-groups";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::MeshGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::MeshGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mesh-group")
    {
        for(auto const & c : mesh_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup>();
        c->parent = this;
        mesh_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::MeshGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mesh_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::MeshGroups::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::MeshGroup()
    :
    mesh_group_id{YType::uint32, "mesh-group-id"},
    attribute_set_name{YType::str, "attribute-set-name"},
    auto_mesh_group_type{YType::enumeration, "auto-mesh-group-type"},
    auto_mesh_total_destinations{YType::uint32, "auto-mesh-total-destinations"},
    auto_mesh_tunnels{YType::uint32, "auto-mesh-tunnels"},
    destination_list_name{YType::str, "destination-list-name"},
    destination_list_type{YType::enumeration, "destination-list-type"},
    down_auto_mesh_tunnels{YType::uint32, "down-auto-mesh-tunnels"},
    frr_auto_mesh_tunnels{YType::uint32, "frr-auto-mesh-tunnels"},
    is_attribute_set_configured{YType::boolean, "is-attribute-set-configured"},
    is_attribute_set_in_db{YType::boolean, "is-attribute-set-in-db"},
    is_destination_list_configured{YType::boolean, "is-destination-list-configured"},
    is_meshgroup_disabled{YType::boolean, "is-meshgroup-disabled"},
    mesh_group_id_xr{YType::uint32, "mesh-group-id-xr"},
    remaining_time{YType::uint32, "remaining-time"},
    up_auto_mesh_tunnels{YType::uint32, "up-auto-mesh-tunnels"}
{
    yang_name = "mesh-group"; yang_parent_name = "mesh-groups";
}

MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::~MeshGroup()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::has_data() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_data())
            return true;
    }
    return mesh_group_id.is_set
	|| attribute_set_name.is_set
	|| auto_mesh_group_type.is_set
	|| auto_mesh_total_destinations.is_set
	|| auto_mesh_tunnels.is_set
	|| destination_list_name.is_set
	|| destination_list_type.is_set
	|| down_auto_mesh_tunnels.is_set
	|| frr_auto_mesh_tunnels.is_set
	|| is_attribute_set_configured.is_set
	|| is_attribute_set_in_db.is_set
	|| is_destination_list_configured.is_set
	|| is_meshgroup_disabled.is_set
	|| mesh_group_id_xr.is_set
	|| remaining_time.is_set
	|| up_auto_mesh_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::has_operation() const
{
    for (std::size_t index=0; index<destination.size(); index++)
    {
        if(destination[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(mesh_group_id.operation)
	|| is_set(attribute_set_name.operation)
	|| is_set(auto_mesh_group_type.operation)
	|| is_set(auto_mesh_total_destinations.operation)
	|| is_set(auto_mesh_tunnels.operation)
	|| is_set(destination_list_name.operation)
	|| is_set(destination_list_type.operation)
	|| is_set(down_auto_mesh_tunnels.operation)
	|| is_set(frr_auto_mesh_tunnels.operation)
	|| is_set(is_attribute_set_configured.operation)
	|| is_set(is_attribute_set_in_db.operation)
	|| is_set(is_destination_list_configured.operation)
	|| is_set(is_meshgroup_disabled.operation)
	|| is_set(mesh_group_id_xr.operation)
	|| is_set(remaining_time.operation)
	|| is_set(up_auto_mesh_tunnels.operation);
}

std::string MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group" <<"[mesh-group-id='" <<mesh_group_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/mesh-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mesh_group_id.is_set || is_set(mesh_group_id.operation)) leaf_name_data.push_back(mesh_group_id.get_name_leafdata());
    if (attribute_set_name.is_set || is_set(attribute_set_name.operation)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (auto_mesh_group_type.is_set || is_set(auto_mesh_group_type.operation)) leaf_name_data.push_back(auto_mesh_group_type.get_name_leafdata());
    if (auto_mesh_total_destinations.is_set || is_set(auto_mesh_total_destinations.operation)) leaf_name_data.push_back(auto_mesh_total_destinations.get_name_leafdata());
    if (auto_mesh_tunnels.is_set || is_set(auto_mesh_tunnels.operation)) leaf_name_data.push_back(auto_mesh_tunnels.get_name_leafdata());
    if (destination_list_name.is_set || is_set(destination_list_name.operation)) leaf_name_data.push_back(destination_list_name.get_name_leafdata());
    if (destination_list_type.is_set || is_set(destination_list_type.operation)) leaf_name_data.push_back(destination_list_type.get_name_leafdata());
    if (down_auto_mesh_tunnels.is_set || is_set(down_auto_mesh_tunnels.operation)) leaf_name_data.push_back(down_auto_mesh_tunnels.get_name_leafdata());
    if (frr_auto_mesh_tunnels.is_set || is_set(frr_auto_mesh_tunnels.operation)) leaf_name_data.push_back(frr_auto_mesh_tunnels.get_name_leafdata());
    if (is_attribute_set_configured.is_set || is_set(is_attribute_set_configured.operation)) leaf_name_data.push_back(is_attribute_set_configured.get_name_leafdata());
    if (is_attribute_set_in_db.is_set || is_set(is_attribute_set_in_db.operation)) leaf_name_data.push_back(is_attribute_set_in_db.get_name_leafdata());
    if (is_destination_list_configured.is_set || is_set(is_destination_list_configured.operation)) leaf_name_data.push_back(is_destination_list_configured.get_name_leafdata());
    if (is_meshgroup_disabled.is_set || is_set(is_meshgroup_disabled.operation)) leaf_name_data.push_back(is_meshgroup_disabled.get_name_leafdata());
    if (mesh_group_id_xr.is_set || is_set(mesh_group_id_xr.operation)) leaf_name_data.push_back(mesh_group_id_xr.get_name_leafdata());
    if (remaining_time.is_set || is_set(remaining_time.operation)) leaf_name_data.push_back(remaining_time.get_name_leafdata());
    if (up_auto_mesh_tunnels.is_set || is_set(up_auto_mesh_tunnels.operation)) leaf_name_data.push_back(up_auto_mesh_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination")
    {
        for(auto const & c : destination)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination>();
        c->parent = this;
        destination.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : destination)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mesh-group-id")
    {
        mesh_group_id = value;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
    }
    if(value_path == "auto-mesh-group-type")
    {
        auto_mesh_group_type = value;
    }
    if(value_path == "auto-mesh-total-destinations")
    {
        auto_mesh_total_destinations = value;
    }
    if(value_path == "auto-mesh-tunnels")
    {
        auto_mesh_tunnels = value;
    }
    if(value_path == "destination-list-name")
    {
        destination_list_name = value;
    }
    if(value_path == "destination-list-type")
    {
        destination_list_type = value;
    }
    if(value_path == "down-auto-mesh-tunnels")
    {
        down_auto_mesh_tunnels = value;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels = value;
    }
    if(value_path == "is-attribute-set-configured")
    {
        is_attribute_set_configured = value;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db = value;
    }
    if(value_path == "is-destination-list-configured")
    {
        is_destination_list_configured = value;
    }
    if(value_path == "is-meshgroup-disabled")
    {
        is_meshgroup_disabled = value;
    }
    if(value_path == "mesh-group-id-xr")
    {
        mesh_group_id_xr = value;
    }
    if(value_path == "remaining-time")
    {
        remaining_time = value;
    }
    if(value_path == "up-auto-mesh-tunnels")
    {
        up_auto_mesh_tunnels = value;
    }
}

MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::Destination()
    :
    destination_address{YType::str, "destination-address"},
    operational_status{YType::enumeration, "operational-status"},
    remaining_time{YType::uint32, "remaining-time"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "destination"; yang_parent_name = "mesh-group";
}

MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::~Destination()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::has_data() const
{
    return destination_address.is_set
	|| operational_status.is_set
	|| remaining_time.is_set
	|| tunnel_id.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(operational_status.operation)
	|| is_set(remaining_time.operation)
	|| is_set(tunnel_id.operation);
}

std::string MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Destination' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (operational_status.is_set || is_set(operational_status.operation)) leaf_name_data.push_back(operational_status.get_name_leafdata());
    if (remaining_time.is_set || is_set(remaining_time.operation)) leaf_name_data.push_back(remaining_time.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::MeshGroups::MeshGroup::Destination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "operational-status")
    {
        operational_status = value;
    }
    if(value_path == "remaining-time")
    {
        remaining_time = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsTeStandby::AutoTunnel::Mesh::Statistics::Statistics()
    :
    connected{YType::uint32, "connected"},
    created{YType::uint32, "created"},
    last_cleared_time{YType::uint32, "last-cleared-time"},
    removed_in_use{YType::uint32, "removed-in-use"},
    removed_range_exceeded{YType::uint32, "removed-range-exceeded"},
    removed_unused{YType::uint32, "removed-unused"}
{
    yang_name = "statistics"; yang_parent_name = "mesh";
}

MplsTeStandby::AutoTunnel::Mesh::Statistics::~Statistics()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::Statistics::has_data() const
{
    return connected.is_set
	|| created.is_set
	|| last_cleared_time.is_set
	|| removed_in_use.is_set
	|| removed_range_exceeded.is_set
	|| removed_unused.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(connected.operation)
	|| is_set(created.operation)
	|| is_set(last_cleared_time.operation)
	|| is_set(removed_in_use.operation)
	|| is_set(removed_range_exceeded.operation)
	|| is_set(removed_unused.operation);
}

std::string MplsTeStandby::AutoTunnel::Mesh::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected.is_set || is_set(connected.operation)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (created.is_set || is_set(created.operation)) leaf_name_data.push_back(created.get_name_leafdata());
    if (last_cleared_time.is_set || is_set(last_cleared_time.operation)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());
    if (removed_in_use.is_set || is_set(removed_in_use.operation)) leaf_name_data.push_back(removed_in_use.get_name_leafdata());
    if (removed_range_exceeded.is_set || is_set(removed_range_exceeded.operation)) leaf_name_data.push_back(removed_range_exceeded.get_name_leafdata());
    if (removed_unused.is_set || is_set(removed_unused.operation)) leaf_name_data.push_back(removed_unused.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connected")
    {
        connected = value;
    }
    if(value_path == "created")
    {
        created = value;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
    }
    if(value_path == "removed-in-use")
    {
        removed_in_use = value;
    }
    if(value_path == "removed-range-exceeded")
    {
        removed_range_exceeded = value;
    }
    if(value_path == "removed-unused")
    {
        removed_unused = value;
    }
}

MplsTeStandby::AutoTunnel::Mesh::Summary::Summary()
    :
    auto_mesh_destinations{YType::uint32, "auto-mesh-destinations"},
    auto_mesh_groups{YType::uint32, "auto-mesh-groups"},
    auto_mesh_tunnels{YType::uint32, "auto-mesh-tunnels"},
    down_auto_mesh_tunnels{YType::uint32, "down-auto-mesh-tunnels"},
    frr_auto_mesh_tunnels{YType::uint32, "frr-auto-mesh-tunnels"},
    up_auto_mesh_tunnels{YType::uint32, "up-auto-mesh-tunnels"}
{
    yang_name = "summary"; yang_parent_name = "mesh";
}

MplsTeStandby::AutoTunnel::Mesh::Summary::~Summary()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::Summary::has_data() const
{
    return auto_mesh_destinations.is_set
	|| auto_mesh_groups.is_set
	|| auto_mesh_tunnels.is_set
	|| down_auto_mesh_tunnels.is_set
	|| frr_auto_mesh_tunnels.is_set
	|| up_auto_mesh_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_mesh_destinations.operation)
	|| is_set(auto_mesh_groups.operation)
	|| is_set(auto_mesh_tunnels.operation)
	|| is_set(down_auto_mesh_tunnels.operation)
	|| is_set(frr_auto_mesh_tunnels.operation)
	|| is_set(up_auto_mesh_tunnels.operation);
}

std::string MplsTeStandby::AutoTunnel::Mesh::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_mesh_destinations.is_set || is_set(auto_mesh_destinations.operation)) leaf_name_data.push_back(auto_mesh_destinations.get_name_leafdata());
    if (auto_mesh_groups.is_set || is_set(auto_mesh_groups.operation)) leaf_name_data.push_back(auto_mesh_groups.get_name_leafdata());
    if (auto_mesh_tunnels.is_set || is_set(auto_mesh_tunnels.operation)) leaf_name_data.push_back(auto_mesh_tunnels.get_name_leafdata());
    if (down_auto_mesh_tunnels.is_set || is_set(down_auto_mesh_tunnels.operation)) leaf_name_data.push_back(down_auto_mesh_tunnels.get_name_leafdata());
    if (frr_auto_mesh_tunnels.is_set || is_set(frr_auto_mesh_tunnels.operation)) leaf_name_data.push_back(frr_auto_mesh_tunnels.get_name_leafdata());
    if (up_auto_mesh_tunnels.is_set || is_set(up_auto_mesh_tunnels.operation)) leaf_name_data.push_back(up_auto_mesh_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-mesh-destinations")
    {
        auto_mesh_destinations = value;
    }
    if(value_path == "auto-mesh-groups")
    {
        auto_mesh_groups = value;
    }
    if(value_path == "auto-mesh-tunnels")
    {
        auto_mesh_tunnels = value;
    }
    if(value_path == "down-auto-mesh-tunnels")
    {
        down_auto_mesh_tunnels = value;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels = value;
    }
    if(value_path == "up-auto-mesh-tunnels")
    {
        up_auto_mesh_tunnels = value;
    }
}

MplsTeStandby::AutoTunnel::Mesh::Config::Config()
    :
    is_configured{YType::boolean, "is-configured"},
    max_tunnel_id{YType::uint16, "max-tunnel-id"},
    min_tunnel_id{YType::uint16, "min-tunnel-id"},
    unused_removal_timeout_configured{YType::uint32, "unused-removal-timeout-configured"}
{
    yang_name = "config"; yang_parent_name = "mesh";
}

MplsTeStandby::AutoTunnel::Mesh::Config::~Config()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::Config::has_data() const
{
    return is_configured.is_set
	|| max_tunnel_id.is_set
	|| min_tunnel_id.is_set
	|| unused_removal_timeout_configured.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(is_configured.operation)
	|| is_set(max_tunnel_id.operation)
	|| is_set(min_tunnel_id.operation)
	|| is_set(unused_removal_timeout_configured.operation);
}

std::string MplsTeStandby::AutoTunnel::Mesh::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_configured.is_set || is_set(is_configured.operation)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (max_tunnel_id.is_set || is_set(max_tunnel_id.operation)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());
    if (min_tunnel_id.is_set || is_set(min_tunnel_id.operation)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());
    if (unused_removal_timeout_configured.is_set || is_set(unused_removal_timeout_configured.operation)) leaf_name_data.push_back(unused_removal_timeout_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-configured")
    {
        is_configured = value;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
    }
    if(value_path == "unused-removal-timeout-configured")
    {
        unused_removal_timeout_configured = value;
    }
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::OneHop()
    :
    interfaces(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces>())
	,statistics(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics>())
	,summary(std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary>())
{
    interfaces->parent = this;

    statistics->parent = this;

    summary->parent = this;

    yang_name = "one-hop"; yang_parent_name = "mesh";
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::~OneHop()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::has_data() const
{
    return (interfaces !=  nullptr && interfaces->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::has_operation() const
{
    return is_set(operation)
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "one-hop";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::OneHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces>();
        }
        return interfaces;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interfaces != nullptr)
    {
        children["interfaces"] = interfaces;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "one-hop";
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::~Interfaces()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/one-hop/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::~Interface()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface_name_xr.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation);
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/one-hop/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::Tunnel()
    :
    destination_address{YType::str, "destination-address"},
    mesh_group_id{YType::uint32, "mesh-group-id"},
    tunnel_id{YType::uint16, "tunnel-id"},
    tunnel_lspid{YType::uint16, "tunnel-lspid"},
    tunnel_state{YType::enumeration, "tunnel-state"}
{
    yang_name = "tunnel"; yang_parent_name = "interface";
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::~Tunnel()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::has_data() const
{
    return destination_address.is_set
	|| mesh_group_id.is_set
	|| tunnel_id.is_set
	|| tunnel_lspid.is_set
	|| tunnel_state.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(mesh_group_id.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(tunnel_lspid.operation)
	|| is_set(tunnel_state.operation);
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tunnel' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (mesh_group_id.is_set || is_set(mesh_group_id.operation)) leaf_name_data.push_back(mesh_group_id.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_lspid.is_set || is_set(tunnel_lspid.operation)) leaf_name_data.push_back(tunnel_lspid.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.operation)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Interfaces::Interface::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "mesh-group-id")
    {
        mesh_group_id = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "tunnel-lspid")
    {
        tunnel_lspid = value;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
    }
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::Statistics()
    :
    connected{YType::uint32, "connected"},
    created{YType::uint32, "created"},
    last_cleared_time{YType::uint32, "last-cleared-time"},
    removed_in_use{YType::uint32, "removed-in-use"},
    removed_range_exceeded{YType::uint32, "removed-range-exceeded"},
    removed_unused{YType::uint32, "removed-unused"}
{
    yang_name = "statistics"; yang_parent_name = "one-hop";
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::~Statistics()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::has_data() const
{
    return connected.is_set
	|| created.is_set
	|| last_cleared_time.is_set
	|| removed_in_use.is_set
	|| removed_range_exceeded.is_set
	|| removed_unused.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(connected.operation)
	|| is_set(created.operation)
	|| is_set(last_cleared_time.operation)
	|| is_set(removed_in_use.operation)
	|| is_set(removed_range_exceeded.operation)
	|| is_set(removed_unused.operation);
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/one-hop/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connected.is_set || is_set(connected.operation)) leaf_name_data.push_back(connected.get_name_leafdata());
    if (created.is_set || is_set(created.operation)) leaf_name_data.push_back(created.get_name_leafdata());
    if (last_cleared_time.is_set || is_set(last_cleared_time.operation)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());
    if (removed_in_use.is_set || is_set(removed_in_use.operation)) leaf_name_data.push_back(removed_in_use.get_name_leafdata());
    if (removed_range_exceeded.is_set || is_set(removed_range_exceeded.operation)) leaf_name_data.push_back(removed_range_exceeded.get_name_leafdata());
    if (removed_unused.is_set || is_set(removed_unused.operation)) leaf_name_data.push_back(removed_unused.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connected")
    {
        connected = value;
    }
    if(value_path == "created")
    {
        created = value;
    }
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
    }
    if(value_path == "removed-in-use")
    {
        removed_in_use = value;
    }
    if(value_path == "removed-range-exceeded")
    {
        removed_range_exceeded = value;
    }
    if(value_path == "removed-unused")
    {
        removed_unused = value;
    }
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::Summary()
    :
    auto_mesh_one_hop_destinations{YType::uint32, "auto-mesh-one-hop-destinations"},
    auto_mesh_one_hop_groups{YType::uint32, "auto-mesh-one-hop-groups"},
    auto_mesh_one_hop_tunnels{YType::uint32, "auto-mesh-one-hop-tunnels"},
    down_auto_mesh_one_hop_tunnels{YType::uint32, "down-auto-mesh-one-hop-tunnels"},
    frr_auto_mesh_tunnels{YType::uint32, "frr-auto-mesh-tunnels"},
    up_auto_mesh_one_hop_tunnels{YType::uint32, "up-auto-mesh-one-hop-tunnels"}
{
    yang_name = "summary"; yang_parent_name = "one-hop";
}

MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::~Summary()
{
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::has_data() const
{
    return auto_mesh_one_hop_destinations.is_set
	|| auto_mesh_one_hop_groups.is_set
	|| auto_mesh_one_hop_tunnels.is_set
	|| down_auto_mesh_one_hop_tunnels.is_set
	|| frr_auto_mesh_tunnels.is_set
	|| up_auto_mesh_one_hop_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_mesh_one_hop_destinations.operation)
	|| is_set(auto_mesh_one_hop_groups.operation)
	|| is_set(auto_mesh_one_hop_tunnels.operation)
	|| is_set(down_auto_mesh_one_hop_tunnels.operation)
	|| is_set(frr_auto_mesh_tunnels.operation)
	|| is_set(up_auto_mesh_one_hop_tunnels.operation);
}

std::string MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/mesh/one-hop/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_mesh_one_hop_destinations.is_set || is_set(auto_mesh_one_hop_destinations.operation)) leaf_name_data.push_back(auto_mesh_one_hop_destinations.get_name_leafdata());
    if (auto_mesh_one_hop_groups.is_set || is_set(auto_mesh_one_hop_groups.operation)) leaf_name_data.push_back(auto_mesh_one_hop_groups.get_name_leafdata());
    if (auto_mesh_one_hop_tunnels.is_set || is_set(auto_mesh_one_hop_tunnels.operation)) leaf_name_data.push_back(auto_mesh_one_hop_tunnels.get_name_leafdata());
    if (down_auto_mesh_one_hop_tunnels.is_set || is_set(down_auto_mesh_one_hop_tunnels.operation)) leaf_name_data.push_back(down_auto_mesh_one_hop_tunnels.get_name_leafdata());
    if (frr_auto_mesh_tunnels.is_set || is_set(frr_auto_mesh_tunnels.operation)) leaf_name_data.push_back(frr_auto_mesh_tunnels.get_name_leafdata());
    if (up_auto_mesh_one_hop_tunnels.is_set || is_set(up_auto_mesh_one_hop_tunnels.operation)) leaf_name_data.push_back(up_auto_mesh_one_hop_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Mesh::OneHop::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-mesh-one-hop-destinations")
    {
        auto_mesh_one_hop_destinations = value;
    }
    if(value_path == "auto-mesh-one-hop-groups")
    {
        auto_mesh_one_hop_groups = value;
    }
    if(value_path == "auto-mesh-one-hop-tunnels")
    {
        auto_mesh_one_hop_tunnels = value;
    }
    if(value_path == "down-auto-mesh-one-hop-tunnels")
    {
        down_auto_mesh_one_hop_tunnels = value;
    }
    if(value_path == "frr-auto-mesh-tunnels")
    {
        frr_auto_mesh_tunnels = value;
    }
    if(value_path == "up-auto-mesh-one-hop-tunnels")
    {
        up_auto_mesh_one_hop_tunnels = value;
    }
}

MplsTeStandby::AutoTunnel::Backup::Backup()
    :
    config(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Config>())
	,statistics(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics>())
	,summary(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Summary>())
	,tunnels(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Tunnels>())
{
    config->parent = this;

    statistics->parent = this;

    summary->parent = this;

    tunnels->parent = this;

    yang_name = "backup"; yang_parent_name = "auto-tunnel";
}

MplsTeStandby::AutoTunnel::Backup::~Backup()
{
}

bool MplsTeStandby::AutoTunnel::Backup::has_data() const
{
    return (config !=  nullptr && config->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (tunnels !=  nullptr && tunnels->has_data());
}

bool MplsTeStandby::AutoTunnel::Backup::has_operation() const
{
    return is_set(operation)
	|| (config !=  nullptr && config->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (tunnels !=  nullptr && tunnels->has_operation());
}

std::string MplsTeStandby::AutoTunnel::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Backup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config")
    {
        if(config == nullptr)
        {
            config = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Config>();
        }
        return config;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "tunnels")
    {
        if(tunnels == nullptr)
        {
            tunnels = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Tunnels>();
        }
        return tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config != nullptr)
    {
        children["config"] = config;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(tunnels != nullptr)
    {
        children["tunnels"] = tunnels;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Backup::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnels()
{
    yang_name = "tunnels"; yang_parent_name = "backup";
}

MplsTeStandby::AutoTunnel::Backup::Tunnels::~Tunnels()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Tunnels::has_data() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AutoTunnel::Backup::Tunnels::has_operation() const
{
    for (std::size_t index=0; index<tunnel.size(); index++)
    {
        if(tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::AutoTunnel::Backup::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Backup::Tunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel")
    {
        for(auto const & c : tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel>();
        c->parent = this;
        tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Tunnels::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::Tunnel()
    :
    backup_tunnel_name{YType::str, "backup-tunnel-name"},
    atb_protection_type{YType::enumeration, "atb-protection-type"},
    operational_status{YType::enumeration, "operational-status"},
    protected_flows{YType::uint32, "protected-flows"},
    protected_interface_name{YType::str, "protected-interface-name"},
    protected_router_id{YType::str, "protected-router-id"},
    srlg_mode{YType::enumeration, "srlg-mode"},
    tunnel_name{YType::str, "tunnel-name"}
{
    yang_name = "tunnel"; yang_parent_name = "tunnels";
}

MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::~Tunnel()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::has_data() const
{
    return backup_tunnel_name.is_set
	|| atb_protection_type.is_set
	|| operational_status.is_set
	|| protected_flows.is_set
	|| protected_interface_name.is_set
	|| protected_router_id.is_set
	|| srlg_mode.is_set
	|| tunnel_name.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_tunnel_name.operation)
	|| is_set(atb_protection_type.operation)
	|| is_set(operational_status.operation)
	|| is_set(protected_flows.operation)
	|| is_set(protected_interface_name.operation)
	|| is_set(protected_router_id.operation)
	|| is_set(srlg_mode.operation)
	|| is_set(tunnel_name.operation);
}

std::string MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel" <<"[backup-tunnel-name='" <<backup_tunnel_name <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.operation)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());
    if (atb_protection_type.is_set || is_set(atb_protection_type.operation)) leaf_name_data.push_back(atb_protection_type.get_name_leafdata());
    if (operational_status.is_set || is_set(operational_status.operation)) leaf_name_data.push_back(operational_status.get_name_leafdata());
    if (protected_flows.is_set || is_set(protected_flows.operation)) leaf_name_data.push_back(protected_flows.get_name_leafdata());
    if (protected_interface_name.is_set || is_set(protected_interface_name.operation)) leaf_name_data.push_back(protected_interface_name.get_name_leafdata());
    if (protected_router_id.is_set || is_set(protected_router_id.operation)) leaf_name_data.push_back(protected_router_id.get_name_leafdata());
    if (srlg_mode.is_set || is_set(srlg_mode.operation)) leaf_name_data.push_back(srlg_mode.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Tunnels::Tunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
    }
    if(value_path == "atb-protection-type")
    {
        atb_protection_type = value;
    }
    if(value_path == "operational-status")
    {
        operational_status = value;
    }
    if(value_path == "protected-flows")
    {
        protected_flows = value;
    }
    if(value_path == "protected-interface-name")
    {
        protected_interface_name = value;
    }
    if(value_path == "protected-router-id")
    {
        protected_router_id = value;
    }
    if(value_path == "srlg-mode")
    {
        srlg_mode = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTeStandby::AutoTunnel::Backup::Statistics::Statistics()
    :
    last_cleared_time{YType::uint32, "last-cleared-time"}
    	,
    connected(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::Connected>())
	,created(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::Created>())
	,removed_down(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown>())
	,removed_in_use(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse>())
	,removed_range_exceeded(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded>())
	,removed_unused(std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused>())
{
    connected->parent = this;

    created->parent = this;

    removed_down->parent = this;

    removed_in_use->parent = this;

    removed_range_exceeded->parent = this;

    removed_unused->parent = this;

    yang_name = "statistics"; yang_parent_name = "backup";
}

MplsTeStandby::AutoTunnel::Backup::Statistics::~Statistics()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::has_data() const
{
    return last_cleared_time.is_set
	|| (connected !=  nullptr && connected->has_data())
	|| (created !=  nullptr && created->has_data())
	|| (removed_down !=  nullptr && removed_down->has_data())
	|| (removed_in_use !=  nullptr && removed_in_use->has_data())
	|| (removed_range_exceeded !=  nullptr && removed_range_exceeded->has_data())
	|| (removed_unused !=  nullptr && removed_unused->has_data());
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(last_cleared_time.operation)
	|| (connected !=  nullptr && connected->has_operation())
	|| (created !=  nullptr && created->has_operation())
	|| (removed_down !=  nullptr && removed_down->has_operation())
	|| (removed_in_use !=  nullptr && removed_in_use->has_operation())
	|| (removed_range_exceeded !=  nullptr && removed_range_exceeded->has_operation())
	|| (removed_unused !=  nullptr && removed_unused->has_operation());
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Backup::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_time.is_set || is_set(last_cleared_time.operation)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "created")
    {
        if(created == nullptr)
        {
            created = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::Created>();
        }
        return created;
    }

    if(child_yang_name == "removed-down")
    {
        if(removed_down == nullptr)
        {
            removed_down = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown>();
        }
        return removed_down;
    }

    if(child_yang_name == "removed-in-use")
    {
        if(removed_in_use == nullptr)
        {
            removed_in_use = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse>();
        }
        return removed_in_use;
    }

    if(child_yang_name == "removed-range-exceeded")
    {
        if(removed_range_exceeded == nullptr)
        {
            removed_range_exceeded = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded>();
        }
        return removed_range_exceeded;
    }

    if(child_yang_name == "removed-unused")
    {
        if(removed_unused == nullptr)
        {
            removed_unused = std::make_shared<MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused>();
        }
        return removed_unused;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    if(created != nullptr)
    {
        children["created"] = created;
    }

    if(removed_down != nullptr)
    {
        children["removed-down"] = removed_down;
    }

    if(removed_in_use != nullptr)
    {
        children["removed-in-use"] = removed_in_use;
    }

    if(removed_range_exceeded != nullptr)
    {
        children["removed-range-exceeded"] = removed_range_exceeded;
    }

    if(removed_unused != nullptr)
    {
        children["removed-unused"] = removed_unused;
    }

    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
    }
}

MplsTeStandby::AutoTunnel::Backup::Statistics::Created::Created()
    :
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{
    yang_name = "created"; yang_parent_name = "statistics";
}

MplsTeStandby::AutoTunnel::Backup::Statistics::Created::~Created()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::Created::has_data() const
{
    return next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::Created::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_tunnels.operation)
	|| is_set(next_next_hop_tunnels.operation)
	|| is_set(total_tunnels.operation);
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::Created::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "created";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Backup::Statistics::Created::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.operation)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.operation)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.operation)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Statistics::Created::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Statistics::Created::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::Created::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
    }
}

MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::Connected()
    :
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{
    yang_name = "connected"; yang_parent_name = "statistics";
}

MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::~Connected()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::has_data() const
{
    return next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_tunnels.operation)
	|| is_set(next_next_hop_tunnels.operation)
	|| is_set(total_tunnels.operation);
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.operation)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.operation)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.operation)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::Connected::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
    }
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::RemovedDown()
    :
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{
    yang_name = "removed-down"; yang_parent_name = "statistics";
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::~RemovedDown()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::has_data() const
{
    return next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_tunnels.operation)
	|| is_set(next_next_hop_tunnels.operation)
	|| is_set(total_tunnels.operation);
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removed-down";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.operation)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.operation)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.operation)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedDown::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
    }
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::RemovedUnused()
    :
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{
    yang_name = "removed-unused"; yang_parent_name = "statistics";
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::~RemovedUnused()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::has_data() const
{
    return next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_tunnels.operation)
	|| is_set(next_next_hop_tunnels.operation)
	|| is_set(total_tunnels.operation);
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removed-unused";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.operation)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.operation)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.operation)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedUnused::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
    }
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::RemovedInUse()
    :
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{
    yang_name = "removed-in-use"; yang_parent_name = "statistics";
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::~RemovedInUse()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::has_data() const
{
    return next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_tunnels.operation)
	|| is_set(next_next_hop_tunnels.operation)
	|| is_set(total_tunnels.operation);
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removed-in-use";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.operation)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.operation)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.operation)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedInUse::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
    }
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::RemovedRangeExceeded()
    :
    next_hop_tunnels{YType::uint32, "next-hop-tunnels"},
    next_next_hop_tunnels{YType::uint32, "next-next-hop-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{
    yang_name = "removed-range-exceeded"; yang_parent_name = "statistics";
}

MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::~RemovedRangeExceeded()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::has_data() const
{
    return next_hop_tunnels.is_set
	|| next_next_hop_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::has_operation() const
{
    return is_set(operation)
	|| is_set(next_hop_tunnels.operation)
	|| is_set(next_next_hop_tunnels.operation)
	|| is_set(total_tunnels.operation);
}

std::string MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "removed-range-exceeded";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_tunnels.is_set || is_set(next_hop_tunnels.operation)) leaf_name_data.push_back(next_hop_tunnels.get_name_leafdata());
    if (next_next_hop_tunnels.is_set || is_set(next_next_hop_tunnels.operation)) leaf_name_data.push_back(next_next_hop_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.operation)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Statistics::RemovedRangeExceeded::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "next-hop-tunnels")
    {
        next_hop_tunnels = value;
    }
    if(value_path == "next-next-hop-tunnels")
    {
        next_next_hop_tunnels = value;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
    }
}

MplsTeStandby::AutoTunnel::Backup::Summary::Summary()
    :
    autobackups{YType::uint32, "autobackups"},
    down_autobackups{YType::uint32, "down-autobackups"},
    next_hop_autobackup_protected_ls_ps{YType::uint32, "next-hop-autobackup-protected-ls-ps"},
    next_hop_autobackup_protected_s2_ls{YType::uint32, "next-hop-autobackup-protected-s2-ls"},
    next_hop_autobackup_protected_s2l_families{YType::uint32, "next-hop-autobackup-protected-s2l-families"},
    next_hop_autobackups{YType::uint32, "next-hop-autobackups"},
    next_hop_srlg_autobackup_protected_ls_ps{YType::uint32, "next-hop-srlg-autobackup-protected-ls-ps"},
    next_hop_srlg_autobackup_protected_s2_ls{YType::uint32, "next-hop-srlg-autobackup-protected-s2-ls"},
    next_hop_srlg_autobackup_protected_s2l_families{YType::uint32, "next-hop-srlg-autobackup-protected-s2l-families"},
    next_next_hop_autobackup_protected_ls_ps{YType::uint32, "next-next-hop-autobackup-protected-ls-ps"},
    next_next_hop_autobackup_protected_s2_ls{YType::uint32, "next-next-hop-autobackup-protected-s2-ls"},
    next_next_hop_autobackup_protected_s2l_families{YType::uint32, "next-next-hop-autobackup-protected-s2l-families"},
    next_next_hop_autobackups{YType::uint32, "next-next-hop-autobackups"},
    next_next_hop_srlg_autobackup_protected_ls_ps{YType::uint32, "next-next-hop-srlg-autobackup-protected-ls-ps"},
    next_next_hop_srlg_autobackup_protected_s2_ls{YType::uint32, "next-next-hop-srlg-autobackup-protected-s2-ls"},
    next_next_hop_srlg_autobackup_protected_s2l_families{YType::uint32, "next-next-hop-srlg-autobackup-protected-s2l-families"},
    srlg_preferred_autobackups{YType::uint32, "srlg-preferred-autobackups"},
    srlg_strict_autobackups{YType::uint32, "srlg-strict-autobackups"},
    srlg_weighted_autobackups{YType::uint32, "srlg-weighted-autobackups"},
    unused_autobackups{YType::uint32, "unused-autobackups"},
    up_autobackups{YType::uint32, "up-autobackups"}
{
    yang_name = "summary"; yang_parent_name = "backup";
}

MplsTeStandby::AutoTunnel::Backup::Summary::~Summary()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Summary::has_data() const
{
    return autobackups.is_set
	|| down_autobackups.is_set
	|| next_hop_autobackup_protected_ls_ps.is_set
	|| next_hop_autobackup_protected_s2_ls.is_set
	|| next_hop_autobackup_protected_s2l_families.is_set
	|| next_hop_autobackups.is_set
	|| next_hop_srlg_autobackup_protected_ls_ps.is_set
	|| next_hop_srlg_autobackup_protected_s2_ls.is_set
	|| next_hop_srlg_autobackup_protected_s2l_families.is_set
	|| next_next_hop_autobackup_protected_ls_ps.is_set
	|| next_next_hop_autobackup_protected_s2_ls.is_set
	|| next_next_hop_autobackup_protected_s2l_families.is_set
	|| next_next_hop_autobackups.is_set
	|| next_next_hop_srlg_autobackup_protected_ls_ps.is_set
	|| next_next_hop_srlg_autobackup_protected_s2_ls.is_set
	|| next_next_hop_srlg_autobackup_protected_s2l_families.is_set
	|| srlg_preferred_autobackups.is_set
	|| srlg_strict_autobackups.is_set
	|| srlg_weighted_autobackups.is_set
	|| unused_autobackups.is_set
	|| up_autobackups.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(autobackups.operation)
	|| is_set(down_autobackups.operation)
	|| is_set(next_hop_autobackup_protected_ls_ps.operation)
	|| is_set(next_hop_autobackup_protected_s2_ls.operation)
	|| is_set(next_hop_autobackup_protected_s2l_families.operation)
	|| is_set(next_hop_autobackups.operation)
	|| is_set(next_hop_srlg_autobackup_protected_ls_ps.operation)
	|| is_set(next_hop_srlg_autobackup_protected_s2_ls.operation)
	|| is_set(next_hop_srlg_autobackup_protected_s2l_families.operation)
	|| is_set(next_next_hop_autobackup_protected_ls_ps.operation)
	|| is_set(next_next_hop_autobackup_protected_s2_ls.operation)
	|| is_set(next_next_hop_autobackup_protected_s2l_families.operation)
	|| is_set(next_next_hop_autobackups.operation)
	|| is_set(next_next_hop_srlg_autobackup_protected_ls_ps.operation)
	|| is_set(next_next_hop_srlg_autobackup_protected_s2_ls.operation)
	|| is_set(next_next_hop_srlg_autobackup_protected_s2l_families.operation)
	|| is_set(srlg_preferred_autobackups.operation)
	|| is_set(srlg_strict_autobackups.operation)
	|| is_set(srlg_weighted_autobackups.operation)
	|| is_set(unused_autobackups.operation)
	|| is_set(up_autobackups.operation);
}

std::string MplsTeStandby::AutoTunnel::Backup::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Backup::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (autobackups.is_set || is_set(autobackups.operation)) leaf_name_data.push_back(autobackups.get_name_leafdata());
    if (down_autobackups.is_set || is_set(down_autobackups.operation)) leaf_name_data.push_back(down_autobackups.get_name_leafdata());
    if (next_hop_autobackup_protected_ls_ps.is_set || is_set(next_hop_autobackup_protected_ls_ps.operation)) leaf_name_data.push_back(next_hop_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_hop_autobackup_protected_s2_ls.is_set || is_set(next_hop_autobackup_protected_s2_ls.operation)) leaf_name_data.push_back(next_hop_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_hop_autobackup_protected_s2l_families.is_set || is_set(next_hop_autobackup_protected_s2l_families.operation)) leaf_name_data.push_back(next_hop_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_hop_autobackups.is_set || is_set(next_hop_autobackups.operation)) leaf_name_data.push_back(next_hop_autobackups.get_name_leafdata());
    if (next_hop_srlg_autobackup_protected_ls_ps.is_set || is_set(next_hop_srlg_autobackup_protected_ls_ps.operation)) leaf_name_data.push_back(next_hop_srlg_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_hop_srlg_autobackup_protected_s2_ls.is_set || is_set(next_hop_srlg_autobackup_protected_s2_ls.operation)) leaf_name_data.push_back(next_hop_srlg_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_hop_srlg_autobackup_protected_s2l_families.is_set || is_set(next_hop_srlg_autobackup_protected_s2l_families.operation)) leaf_name_data.push_back(next_hop_srlg_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_next_hop_autobackup_protected_ls_ps.is_set || is_set(next_next_hop_autobackup_protected_ls_ps.operation)) leaf_name_data.push_back(next_next_hop_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_next_hop_autobackup_protected_s2_ls.is_set || is_set(next_next_hop_autobackup_protected_s2_ls.operation)) leaf_name_data.push_back(next_next_hop_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_next_hop_autobackup_protected_s2l_families.is_set || is_set(next_next_hop_autobackup_protected_s2l_families.operation)) leaf_name_data.push_back(next_next_hop_autobackup_protected_s2l_families.get_name_leafdata());
    if (next_next_hop_autobackups.is_set || is_set(next_next_hop_autobackups.operation)) leaf_name_data.push_back(next_next_hop_autobackups.get_name_leafdata());
    if (next_next_hop_srlg_autobackup_protected_ls_ps.is_set || is_set(next_next_hop_srlg_autobackup_protected_ls_ps.operation)) leaf_name_data.push_back(next_next_hop_srlg_autobackup_protected_ls_ps.get_name_leafdata());
    if (next_next_hop_srlg_autobackup_protected_s2_ls.is_set || is_set(next_next_hop_srlg_autobackup_protected_s2_ls.operation)) leaf_name_data.push_back(next_next_hop_srlg_autobackup_protected_s2_ls.get_name_leafdata());
    if (next_next_hop_srlg_autobackup_protected_s2l_families.is_set || is_set(next_next_hop_srlg_autobackup_protected_s2l_families.operation)) leaf_name_data.push_back(next_next_hop_srlg_autobackup_protected_s2l_families.get_name_leafdata());
    if (srlg_preferred_autobackups.is_set || is_set(srlg_preferred_autobackups.operation)) leaf_name_data.push_back(srlg_preferred_autobackups.get_name_leafdata());
    if (srlg_strict_autobackups.is_set || is_set(srlg_strict_autobackups.operation)) leaf_name_data.push_back(srlg_strict_autobackups.get_name_leafdata());
    if (srlg_weighted_autobackups.is_set || is_set(srlg_weighted_autobackups.operation)) leaf_name_data.push_back(srlg_weighted_autobackups.get_name_leafdata());
    if (unused_autobackups.is_set || is_set(unused_autobackups.operation)) leaf_name_data.push_back(unused_autobackups.get_name_leafdata());
    if (up_autobackups.is_set || is_set(up_autobackups.operation)) leaf_name_data.push_back(up_autobackups.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "autobackups")
    {
        autobackups = value;
    }
    if(value_path == "down-autobackups")
    {
        down_autobackups = value;
    }
    if(value_path == "next-hop-autobackup-protected-ls-ps")
    {
        next_hop_autobackup_protected_ls_ps = value;
    }
    if(value_path == "next-hop-autobackup-protected-s2-ls")
    {
        next_hop_autobackup_protected_s2_ls = value;
    }
    if(value_path == "next-hop-autobackup-protected-s2l-families")
    {
        next_hop_autobackup_protected_s2l_families = value;
    }
    if(value_path == "next-hop-autobackups")
    {
        next_hop_autobackups = value;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-ls-ps")
    {
        next_hop_srlg_autobackup_protected_ls_ps = value;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-s2-ls")
    {
        next_hop_srlg_autobackup_protected_s2_ls = value;
    }
    if(value_path == "next-hop-srlg-autobackup-protected-s2l-families")
    {
        next_hop_srlg_autobackup_protected_s2l_families = value;
    }
    if(value_path == "next-next-hop-autobackup-protected-ls-ps")
    {
        next_next_hop_autobackup_protected_ls_ps = value;
    }
    if(value_path == "next-next-hop-autobackup-protected-s2-ls")
    {
        next_next_hop_autobackup_protected_s2_ls = value;
    }
    if(value_path == "next-next-hop-autobackup-protected-s2l-families")
    {
        next_next_hop_autobackup_protected_s2l_families = value;
    }
    if(value_path == "next-next-hop-autobackups")
    {
        next_next_hop_autobackups = value;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-ls-ps")
    {
        next_next_hop_srlg_autobackup_protected_ls_ps = value;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-s2-ls")
    {
        next_next_hop_srlg_autobackup_protected_s2_ls = value;
    }
    if(value_path == "next-next-hop-srlg-autobackup-protected-s2l-families")
    {
        next_next_hop_srlg_autobackup_protected_s2l_families = value;
    }
    if(value_path == "srlg-preferred-autobackups")
    {
        srlg_preferred_autobackups = value;
    }
    if(value_path == "srlg-strict-autobackups")
    {
        srlg_strict_autobackups = value;
    }
    if(value_path == "srlg-weighted-autobackups")
    {
        srlg_weighted_autobackups = value;
    }
    if(value_path == "unused-autobackups")
    {
        unused_autobackups = value;
    }
    if(value_path == "up-autobackups")
    {
        up_autobackups = value;
    }
}

MplsTeStandby::AutoTunnel::Backup::Config::Config()
    :
    interface_count{YType::uint32, "interface-count"},
    is_configured{YType::boolean, "is-configured"},
    max_tunnel_id{YType::uint16, "max-tunnel-id"},
    min_tunnel_id{YType::uint16, "min-tunnel-id"},
    unused_removal_timeout_configured{YType::uint32, "unused-removal-timeout-configured"}
{
    yang_name = "config"; yang_parent_name = "backup";
}

MplsTeStandby::AutoTunnel::Backup::Config::~Config()
{
}

bool MplsTeStandby::AutoTunnel::Backup::Config::has_data() const
{
    return interface_count.is_set
	|| is_configured.is_set
	|| max_tunnel_id.is_set
	|| min_tunnel_id.is_set
	|| unused_removal_timeout_configured.is_set;
}

bool MplsTeStandby::AutoTunnel::Backup::Config::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_count.operation)
	|| is_set(is_configured.operation)
	|| is_set(max_tunnel_id.operation)
	|| is_set(min_tunnel_id.operation)
	|| is_set(unused_removal_timeout_configured.operation);
}

std::string MplsTeStandby::AutoTunnel::Backup::Config::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::AutoTunnel::Backup::Config::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-tunnel/backup/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_count.is_set || is_set(interface_count.operation)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (is_configured.is_set || is_set(is_configured.operation)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (max_tunnel_id.is_set || is_set(max_tunnel_id.operation)) leaf_name_data.push_back(max_tunnel_id.get_name_leafdata());
    if (min_tunnel_id.is_set || is_set(min_tunnel_id.operation)) leaf_name_data.push_back(min_tunnel_id.get_name_leafdata());
    if (unused_removal_timeout_configured.is_set || is_set(unused_removal_timeout_configured.operation)) leaf_name_data.push_back(unused_removal_timeout_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::AutoTunnel::Backup::Config::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::AutoTunnel::Backup::Config::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::AutoTunnel::Backup::Config::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-count")
    {
        interface_count = value;
    }
    if(value_path == "is-configured")
    {
        is_configured = value;
    }
    if(value_path == "max-tunnel-id")
    {
        max_tunnel_id = value;
    }
    if(value_path == "min-tunnel-id")
    {
        min_tunnel_id = value;
    }
    if(value_path == "unused-removal-timeout-configured")
    {
        unused_removal_timeout_configured = value;
    }
}

MplsTeStandby::SoftPreemption::SoftPreemption()
    :
    statistics(std::make_shared<MplsTeStandby::SoftPreemption::Statistics>())
{
    statistics->parent = this;

    yang_name = "soft-preemption"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::SoftPreemption::~SoftPreemption()
{
}

bool MplsTeStandby::SoftPreemption::has_data() const
{
    return (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SoftPreemption::has_operation() const
{
    return is_set(operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SoftPreemption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SoftPreemption::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SoftPreemption::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SoftPreemption::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::SoftPreemption::Statistics::Statistics()
    :
    frr_triggered_soft_preempted_lsp_ss{YType::uint32, "frr-triggered-soft-preempted-lsp-ss"},
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"},
    minimum_time_in_soft_preempted_state{YType::uint16, "minimum-time-in-soft-preempted-state"},
    path_protected_switchover_soft_preempted_ls_ps{YType::uint32, "path-protected-switchover-soft-preempted-ls-ps"},
    reoptimized_soft_preempted_ls_ps{YType::uint32, "reoptimized-soft-preempted-ls-ps"},
    soft_preempted_head_ls_ps{YType::uint32, "soft-preempted-head-ls-ps"},
    soft_preempted_ls_ps{YType::uint32, "soft-preempted-ls-ps"},
    soft_preemption_events{YType::uint32, "soft-preemption-events"},
    time_in_soft_preempted_state_avg{YType::uint16, "time-in-soft-preempted-state-avg"},
    time_in_soft_preempted_state_max{YType::uint16, "time-in-soft-preempted-state-max"},
    timed_out_soft_preempted_lsp_ss{YType::uint32, "timed-out-soft-preempted-lsp-ss"},
    torn_down_soft_preempted_ls_ps{YType::uint32, "torn-down-soft-preempted-ls-ps"},
    torndown_soft_preempted_ls_ps{YType::uint32, "torndown-soft-preempted-ls-ps"}
{
    yang_name = "statistics"; yang_parent_name = "soft-preemption";
}

MplsTeStandby::SoftPreemption::Statistics::~Statistics()
{
}

bool MplsTeStandby::SoftPreemption::Statistics::has_data() const
{
    return frr_triggered_soft_preempted_lsp_ss.is_set
	|| last_cleared_timestamp.is_set
	|| minimum_time_in_soft_preempted_state.is_set
	|| path_protected_switchover_soft_preempted_ls_ps.is_set
	|| reoptimized_soft_preempted_ls_ps.is_set
	|| soft_preempted_head_ls_ps.is_set
	|| soft_preempted_ls_ps.is_set
	|| soft_preemption_events.is_set
	|| time_in_soft_preempted_state_avg.is_set
	|| time_in_soft_preempted_state_max.is_set
	|| timed_out_soft_preempted_lsp_ss.is_set
	|| torn_down_soft_preempted_ls_ps.is_set
	|| torndown_soft_preempted_ls_ps.is_set;
}

bool MplsTeStandby::SoftPreemption::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(frr_triggered_soft_preempted_lsp_ss.operation)
	|| is_set(last_cleared_timestamp.operation)
	|| is_set(minimum_time_in_soft_preempted_state.operation)
	|| is_set(path_protected_switchover_soft_preempted_ls_ps.operation)
	|| is_set(reoptimized_soft_preempted_ls_ps.operation)
	|| is_set(soft_preempted_head_ls_ps.operation)
	|| is_set(soft_preempted_ls_ps.operation)
	|| is_set(soft_preemption_events.operation)
	|| is_set(time_in_soft_preempted_state_avg.operation)
	|| is_set(time_in_soft_preempted_state_max.operation)
	|| is_set(timed_out_soft_preempted_lsp_ss.operation)
	|| is_set(torn_down_soft_preempted_ls_ps.operation)
	|| is_set(torndown_soft_preempted_ls_ps.operation);
}

std::string MplsTeStandby::SoftPreemption::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SoftPreemption::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/soft-preemption/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (frr_triggered_soft_preempted_lsp_ss.is_set || is_set(frr_triggered_soft_preempted_lsp_ss.operation)) leaf_name_data.push_back(frr_triggered_soft_preempted_lsp_ss.get_name_leafdata());
    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.operation)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());
    if (minimum_time_in_soft_preempted_state.is_set || is_set(minimum_time_in_soft_preempted_state.operation)) leaf_name_data.push_back(minimum_time_in_soft_preempted_state.get_name_leafdata());
    if (path_protected_switchover_soft_preempted_ls_ps.is_set || is_set(path_protected_switchover_soft_preempted_ls_ps.operation)) leaf_name_data.push_back(path_protected_switchover_soft_preempted_ls_ps.get_name_leafdata());
    if (reoptimized_soft_preempted_ls_ps.is_set || is_set(reoptimized_soft_preempted_ls_ps.operation)) leaf_name_data.push_back(reoptimized_soft_preempted_ls_ps.get_name_leafdata());
    if (soft_preempted_head_ls_ps.is_set || is_set(soft_preempted_head_ls_ps.operation)) leaf_name_data.push_back(soft_preempted_head_ls_ps.get_name_leafdata());
    if (soft_preempted_ls_ps.is_set || is_set(soft_preempted_ls_ps.operation)) leaf_name_data.push_back(soft_preempted_ls_ps.get_name_leafdata());
    if (soft_preemption_events.is_set || is_set(soft_preemption_events.operation)) leaf_name_data.push_back(soft_preemption_events.get_name_leafdata());
    if (time_in_soft_preempted_state_avg.is_set || is_set(time_in_soft_preempted_state_avg.operation)) leaf_name_data.push_back(time_in_soft_preempted_state_avg.get_name_leafdata());
    if (time_in_soft_preempted_state_max.is_set || is_set(time_in_soft_preempted_state_max.operation)) leaf_name_data.push_back(time_in_soft_preempted_state_max.get_name_leafdata());
    if (timed_out_soft_preempted_lsp_ss.is_set || is_set(timed_out_soft_preempted_lsp_ss.operation)) leaf_name_data.push_back(timed_out_soft_preempted_lsp_ss.get_name_leafdata());
    if (torn_down_soft_preempted_ls_ps.is_set || is_set(torn_down_soft_preempted_ls_ps.operation)) leaf_name_data.push_back(torn_down_soft_preempted_ls_ps.get_name_leafdata());
    if (torndown_soft_preempted_ls_ps.is_set || is_set(torndown_soft_preempted_ls_ps.operation)) leaf_name_data.push_back(torndown_soft_preempted_ls_ps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SoftPreemption::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SoftPreemption::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::SoftPreemption::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "frr-triggered-soft-preempted-lsp-ss")
    {
        frr_triggered_soft_preempted_lsp_ss = value;
    }
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
    }
    if(value_path == "minimum-time-in-soft-preempted-state")
    {
        minimum_time_in_soft_preempted_state = value;
    }
    if(value_path == "path-protected-switchover-soft-preempted-ls-ps")
    {
        path_protected_switchover_soft_preempted_ls_ps = value;
    }
    if(value_path == "reoptimized-soft-preempted-ls-ps")
    {
        reoptimized_soft_preempted_ls_ps = value;
    }
    if(value_path == "soft-preempted-head-ls-ps")
    {
        soft_preempted_head_ls_ps = value;
    }
    if(value_path == "soft-preempted-ls-ps")
    {
        soft_preempted_ls_ps = value;
    }
    if(value_path == "soft-preemption-events")
    {
        soft_preemption_events = value;
    }
    if(value_path == "time-in-soft-preempted-state-avg")
    {
        time_in_soft_preempted_state_avg = value;
    }
    if(value_path == "time-in-soft-preempted-state-max")
    {
        time_in_soft_preempted_state_max = value;
    }
    if(value_path == "timed-out-soft-preempted-lsp-ss")
    {
        timed_out_soft_preempted_lsp_ss = value;
    }
    if(value_path == "torn-down-soft-preempted-ls-ps")
    {
        torn_down_soft_preempted_ls_ps = value;
    }
    if(value_path == "torndown-soft-preempted-ls-ps")
    {
        torndown_soft_preempted_ls_ps = value;
    }
}

MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestinations()
{
    yang_name = "forwarding-adjacency-destinations"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::ForwardingAdjacencyDestinations::~ForwardingAdjacencyDestinations()
{
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::has_data() const
{
    for (std::size_t index=0; index<forwarding_adjacency_destination.size(); index++)
    {
        if(forwarding_adjacency_destination[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::has_operation() const
{
    for (std::size_t index=0; index<forwarding_adjacency_destination.size(); index++)
    {
        if(forwarding_adjacency_destination[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::ForwardingAdjacencyDestinations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-adjacency-destinations";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::ForwardingAdjacencyDestinations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::ForwardingAdjacencyDestinations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding-adjacency-destination")
    {
        for(auto const & c : forwarding_adjacency_destination)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination>();
        c->parent = this;
        forwarding_adjacency_destination.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::ForwardingAdjacencyDestinations::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : forwarding_adjacency_destination)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::ForwardingAdjacencyDestinations::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardingAdjacencyDestination()
    :
    destination_address{YType::str, "destination-address"},
    adjacencies{YType::uint32, "adjacencies"},
    destination_address_xr{YType::str, "destination-address-xr"},
    ipv6_adjacencies{YType::uint32, "ipv6-adjacencies"}
{
    yang_name = "forwarding-adjacency-destination"; yang_parent_name = "forwarding-adjacency-destinations";
}

MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::~ForwardingAdjacencyDestination()
{
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::has_data() const
{
    for (std::size_t index=0; index<forward_adjacency.size(); index++)
    {
        if(forward_adjacency[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| adjacencies.is_set
	|| destination_address_xr.is_set
	|| ipv6_adjacencies.is_set;
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::has_operation() const
{
    for (std::size_t index=0; index<forward_adjacency.size(); index++)
    {
        if(forward_adjacency[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(adjacencies.operation)
	|| is_set(destination_address_xr.operation)
	|| is_set(ipv6_adjacencies.operation);
}

std::string MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-adjacency-destination" <<"[destination-address='" <<destination_address <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/forwarding-adjacency-destinations/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (adjacencies.is_set || is_set(adjacencies.operation)) leaf_name_data.push_back(adjacencies.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.operation)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (ipv6_adjacencies.is_set || is_set(ipv6_adjacencies.operation)) leaf_name_data.push_back(ipv6_adjacencies.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-adjacency")
    {
        for(auto const & c : forward_adjacency)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency>();
        c->parent = this;
        forward_adjacency.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : forward_adjacency)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "adjacencies")
    {
        adjacencies = value;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
    }
    if(value_path == "ipv6-adjacencies")
    {
        ipv6_adjacencies = value;
    }
}

MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::ForwardAdjacency()
    :
    hold_time{YType::uint32, "hold-time"},
    is_adjacency_up{YType::boolean, "is-adjacency-up"},
    traffic_share{YType::uint32, "traffic-share"},
    tunnel_name{YType::str, "tunnel-name"}
{
    yang_name = "forward-adjacency"; yang_parent_name = "forwarding-adjacency-destination";
}

MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::~ForwardAdjacency()
{
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::has_data() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_data())
            return true;
    }
    return hold_time.is_set
	|| is_adjacency_up.is_set
	|| traffic_share.is_set
	|| tunnel_name.is_set;
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::has_operation() const
{
    for (std::size_t index=0; index<ig_ps.size(); index++)
    {
        if(ig_ps[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(hold_time.operation)
	|| is_set(is_adjacency_up.operation)
	|| is_set(traffic_share.operation)
	|| is_set(tunnel_name.operation);
}

std::string MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-adjacency";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardAdjacency' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (is_adjacency_up.is_set || is_set(is_adjacency_up.operation)) leaf_name_data.push_back(is_adjacency_up.get_name_leafdata());
    if (traffic_share.is_set || is_set(traffic_share.operation)) leaf_name_data.push_back(traffic_share.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ig-ps")
    {
        for(auto const & c : ig_ps)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs>();
        c->parent = this;
        ig_ps.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ig_ps)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "is-adjacency-up")
    {
        is_adjacency_up = value;
    }
    if(value_path == "traffic-share")
    {
        traffic_share = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::IgPs()
    :
    afi{YType::enumeration, "afi"},
    igp_area_id{YType::str, "igp-area-id"}
{
    yang_name = "ig-ps"; yang_parent_name = "forward-adjacency";
}

MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::~IgPs()
{
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::has_data() const
{
    return afi.is_set
	|| igp_area_id.is_set;
}

bool MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(igp_area_id.operation);
}

std::string MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ig-ps";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgPs' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (igp_area_id.is_set || is_set(igp_area_id.operation)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::ForwardingAdjacencyDestinations::ForwardingAdjacencyDestination::ForwardAdjacency::IgPs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
    }
}

MplsTeStandby::IgpAreas::IgpAreas()
{
    yang_name = "igp-areas"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::IgpAreas::~IgpAreas()
{
}

bool MplsTeStandby::IgpAreas::has_data() const
{
    for (std::size_t index=0; index<igp_area.size(); index++)
    {
        if(igp_area[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::IgpAreas::has_operation() const
{
    for (std::size_t index=0; index<igp_area.size(); index++)
    {
        if(igp_area[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::IgpAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-areas";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::IgpAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-area")
    {
        for(auto const & c : igp_area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::IgpAreas::IgpArea>();
        c->parent = this;
        igp_area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : igp_area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::IgpAreas::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::IgpAreas::IgpArea::IgpArea()
    :
    protocol{YType::enumeration, "protocol"},
    process_tag{YType::str, "process-tag"},
    configured_te_router_id{YType::str, "configured-te-router-id"},
    connection_down_count{YType::uint32, "connection-down-count"},
    connection_up_count{YType::uint32, "connection-up-count"},
    global_router_id{YType::str, "global-router-id"},
    globall_router_id_optical{YType::str, "globall-router-id-optical"},
    igp_system_id{YType::str, "igp-system-id"},
    igp_type{YType::enumeration, "igp-type"},
    in_use_te_router_id{YType::str, "in-use-te-router-id"},
    instance_name{YType::str, "instance-name"},
    is_connection_up{YType::boolean, "is-connection-up"},
    secondary_router_id{YType::str, "secondary-router-id"}
{
    yang_name = "igp-area"; yang_parent_name = "igp-areas";
}

MplsTeStandby::IgpAreas::IgpArea::~IgpArea()
{
}

bool MplsTeStandby::IgpAreas::IgpArea::has_data() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    for (auto const & leaf : secondary_router_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return protocol.is_set
	|| process_tag.is_set
	|| configured_te_router_id.is_set
	|| connection_down_count.is_set
	|| connection_up_count.is_set
	|| global_router_id.is_set
	|| globall_router_id_optical.is_set
	|| igp_system_id.is_set
	|| igp_type.is_set
	|| in_use_te_router_id.is_set
	|| instance_name.is_set
	|| is_connection_up.is_set;
}

bool MplsTeStandby::IgpAreas::IgpArea::has_operation() const
{
    for (std::size_t index=0; index<area.size(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    for (auto const & leaf : secondary_router_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(protocol.operation)
	|| is_set(process_tag.operation)
	|| is_set(configured_te_router_id.operation)
	|| is_set(connection_down_count.operation)
	|| is_set(connection_up_count.operation)
	|| is_set(global_router_id.operation)
	|| is_set(globall_router_id_optical.operation)
	|| is_set(igp_system_id.operation)
	|| is_set(igp_type.operation)
	|| is_set(in_use_te_router_id.operation)
	|| is_set(instance_name.operation)
	|| is_set(is_connection_up.operation)
	|| is_set(secondary_router_id.operation);
}

std::string MplsTeStandby::IgpAreas::IgpArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-area" <<"[protocol='" <<protocol <<"']" <<"[process-tag='" <<process_tag <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::IgpAreas::IgpArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/igp-areas/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (process_tag.is_set || is_set(process_tag.operation)) leaf_name_data.push_back(process_tag.get_name_leafdata());
    if (configured_te_router_id.is_set || is_set(configured_te_router_id.operation)) leaf_name_data.push_back(configured_te_router_id.get_name_leafdata());
    if (connection_down_count.is_set || is_set(connection_down_count.operation)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.operation)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (global_router_id.is_set || is_set(global_router_id.operation)) leaf_name_data.push_back(global_router_id.get_name_leafdata());
    if (globall_router_id_optical.is_set || is_set(globall_router_id_optical.operation)) leaf_name_data.push_back(globall_router_id_optical.get_name_leafdata());
    if (igp_system_id.is_set || is_set(igp_system_id.operation)) leaf_name_data.push_back(igp_system_id.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.operation)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (in_use_te_router_id.is_set || is_set(in_use_te_router_id.operation)) leaf_name_data.push_back(in_use_te_router_id.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (is_connection_up.is_set || is_set(is_connection_up.operation)) leaf_name_data.push_back(is_connection_up.get_name_leafdata());

    auto secondary_router_id_name_datas = secondary_router_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), secondary_router_id_name_datas.begin(), secondary_router_id_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreas::IgpArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area")
    {
        for(auto const & c : area)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::IgpAreas::IgpArea::Area>();
        c->parent = this;
        area.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreas::IgpArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : area)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::IgpAreas::IgpArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "process-tag")
    {
        process_tag = value;
    }
    if(value_path == "configured-te-router-id")
    {
        configured_te_router_id = value;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
    }
    if(value_path == "global-router-id")
    {
        global_router_id = value;
    }
    if(value_path == "globall-router-id-optical")
    {
        globall_router_id_optical = value;
    }
    if(value_path == "igp-system-id")
    {
        igp_system_id = value;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
    }
    if(value_path == "in-use-te-router-id")
    {
        in_use_te_router_id = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up = value;
    }
    if(value_path == "secondary-router-id")
    {
        secondary_router_id.append(value);
    }
}

MplsTeStandby::IgpAreas::IgpArea::Area::Area()
    :
    area_format{YType::enumeration, "area-format"},
    area_index{YType::uint32, "area-index"},
    area_number{YType::uint32, "area-number"},
    is_config_ready{YType::boolean, "is-config-ready"}
    	,
    active_data(std::make_shared<MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData>())
{
    active_data->parent = this;

    yang_name = "area"; yang_parent_name = "igp-area";
}

MplsTeStandby::IgpAreas::IgpArea::Area::~Area()
{
}

bool MplsTeStandby::IgpAreas::IgpArea::Area::has_data() const
{
    return area_format.is_set
	|| area_index.is_set
	|| area_number.is_set
	|| is_config_ready.is_set
	|| (active_data !=  nullptr && active_data->has_data());
}

bool MplsTeStandby::IgpAreas::IgpArea::Area::has_operation() const
{
    return is_set(operation)
	|| is_set(area_format.operation)
	|| is_set(area_index.operation)
	|| is_set(area_number.operation)
	|| is_set(is_config_ready.operation)
	|| (active_data !=  nullptr && active_data->has_operation());
}

std::string MplsTeStandby::IgpAreas::IgpArea::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::IgpAreas::IgpArea::Area::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Area' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_format.is_set || is_set(area_format.operation)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (area_index.is_set || is_set(area_index.operation)) leaf_name_data.push_back(area_index.get_name_leafdata());
    if (area_number.is_set || is_set(area_number.operation)) leaf_name_data.push_back(area_number.get_name_leafdata());
    if (is_config_ready.is_set || is_set(is_config_ready.operation)) leaf_name_data.push_back(is_config_ready.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreas::IgpArea::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-data")
    {
        if(active_data == nullptr)
        {
            active_data = std::make_shared<MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData>();
        }
        return active_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreas::IgpArea::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(active_data != nullptr)
    {
        children["active-data"] = active_data;
    }

    return children;
}

void MplsTeStandby::IgpAreas::IgpArea::Area::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-format")
    {
        area_format = value;
    }
    if(value_path == "area-index")
    {
        area_index = value;
    }
    if(value_path == "area-number")
    {
        area_number = value;
    }
    if(value_path == "is-config-ready")
    {
        is_config_ready = value;
    }
}

MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::ActiveData()
    :
    interfaces_count{YType::uint32, "interfaces-count"},
    link_idt_received{YType::boolean, "link-idt-received"},
    p2mp_destination_count{YType::uint32, "p2mp-destination-count"},
    p2p_autoroute_announced_count{YType::uint32, "p2p-autoroute-announced-count"},
    p2p_forwarding_adjacency_count{YType::uint32, "p2p-forwarding-adjacency-count"},
    p2p_heads_count{YType::uint32, "p2p-heads-count"},
    sr_strict{YType::boolean, "sr-strict"},
    topology_idt_received{YType::boolean, "topology-idt-received"},
    tunnel_loose_hops{YType::uint32, "tunnel-loose-hops"}
    	,
    area_statistics(std::make_shared<MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics>())
{
    area_statistics->parent = this;

    yang_name = "active-data"; yang_parent_name = "area";
}

MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::~ActiveData()
{
}

bool MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::has_data() const
{
    return interfaces_count.is_set
	|| link_idt_received.is_set
	|| p2mp_destination_count.is_set
	|| p2p_autoroute_announced_count.is_set
	|| p2p_forwarding_adjacency_count.is_set
	|| p2p_heads_count.is_set
	|| sr_strict.is_set
	|| topology_idt_received.is_set
	|| tunnel_loose_hops.is_set
	|| (area_statistics !=  nullptr && area_statistics->has_data());
}

bool MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::has_operation() const
{
    return is_set(operation)
	|| is_set(interfaces_count.operation)
	|| is_set(link_idt_received.operation)
	|| is_set(p2mp_destination_count.operation)
	|| is_set(p2p_autoroute_announced_count.operation)
	|| is_set(p2p_forwarding_adjacency_count.operation)
	|| is_set(p2p_heads_count.operation)
	|| is_set(sr_strict.operation)
	|| is_set(topology_idt_received.operation)
	|| is_set(tunnel_loose_hops.operation)
	|| (area_statistics !=  nullptr && area_statistics->has_operation());
}

std::string MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-data";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveData' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces_count.is_set || is_set(interfaces_count.operation)) leaf_name_data.push_back(interfaces_count.get_name_leafdata());
    if (link_idt_received.is_set || is_set(link_idt_received.operation)) leaf_name_data.push_back(link_idt_received.get_name_leafdata());
    if (p2mp_destination_count.is_set || is_set(p2mp_destination_count.operation)) leaf_name_data.push_back(p2mp_destination_count.get_name_leafdata());
    if (p2p_autoroute_announced_count.is_set || is_set(p2p_autoroute_announced_count.operation)) leaf_name_data.push_back(p2p_autoroute_announced_count.get_name_leafdata());
    if (p2p_forwarding_adjacency_count.is_set || is_set(p2p_forwarding_adjacency_count.operation)) leaf_name_data.push_back(p2p_forwarding_adjacency_count.get_name_leafdata());
    if (p2p_heads_count.is_set || is_set(p2p_heads_count.operation)) leaf_name_data.push_back(p2p_heads_count.get_name_leafdata());
    if (sr_strict.is_set || is_set(sr_strict.operation)) leaf_name_data.push_back(sr_strict.get_name_leafdata());
    if (topology_idt_received.is_set || is_set(topology_idt_received.operation)) leaf_name_data.push_back(topology_idt_received.get_name_leafdata());
    if (tunnel_loose_hops.is_set || is_set(tunnel_loose_hops.operation)) leaf_name_data.push_back(tunnel_loose_hops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-statistics")
    {
        if(area_statistics == nullptr)
        {
            area_statistics = std::make_shared<MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics>();
        }
        return area_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_statistics != nullptr)
    {
        children["area-statistics"] = area_statistics;
    }

    return children;
}

void MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interfaces-count")
    {
        interfaces_count = value;
    }
    if(value_path == "link-idt-received")
    {
        link_idt_received = value;
    }
    if(value_path == "p2mp-destination-count")
    {
        p2mp_destination_count = value;
    }
    if(value_path == "p2p-autoroute-announced-count")
    {
        p2p_autoroute_announced_count = value;
    }
    if(value_path == "p2p-forwarding-adjacency-count")
    {
        p2p_forwarding_adjacency_count = value;
    }
    if(value_path == "p2p-heads-count")
    {
        p2p_heads_count = value;
    }
    if(value_path == "sr-strict")
    {
        sr_strict = value;
    }
    if(value_path == "topology-idt-received")
    {
        topology_idt_received = value;
    }
    if(value_path == "tunnel-loose-hops")
    {
        tunnel_loose_hops = value;
    }
}

MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::AreaStatistics()
    :
    area_adjacency_announce_messages{YType::uint32, "area-adjacency-announce-messages"},
    area_adjacency_request_messages{YType::uint32, "area-adjacency-request-messages"},
    area_flood_messages{YType::uint32, "area-flood-messages"},
    area_lsa_announce_messages{YType::uint32, "area-lsa-announce-messages"},
    area_lsa_delete_messages{YType::uint32, "area-lsa-delete-messages"},
    area_lsa_fragment_announce_messages{YType::uint32, "area-lsa-fragment-announce-messages"},
    area_lsa_fragment_delete_messages{YType::uint32, "area-lsa-fragment-delete-messages"},
    area_tunnel_announce_messages{YType::uint32, "area-tunnel-announce-messages"}
{
    yang_name = "area-statistics"; yang_parent_name = "active-data";
}

MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::~AreaStatistics()
{
}

bool MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::has_data() const
{
    return area_adjacency_announce_messages.is_set
	|| area_adjacency_request_messages.is_set
	|| area_flood_messages.is_set
	|| area_lsa_announce_messages.is_set
	|| area_lsa_delete_messages.is_set
	|| area_lsa_fragment_announce_messages.is_set
	|| area_lsa_fragment_delete_messages.is_set
	|| area_tunnel_announce_messages.is_set;
}

bool MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(area_adjacency_announce_messages.operation)
	|| is_set(area_adjacency_request_messages.operation)
	|| is_set(area_flood_messages.operation)
	|| is_set(area_lsa_announce_messages.operation)
	|| is_set(area_lsa_delete_messages.operation)
	|| is_set(area_lsa_fragment_announce_messages.operation)
	|| is_set(area_lsa_fragment_delete_messages.operation)
	|| is_set(area_tunnel_announce_messages.operation);
}

std::string MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaStatistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_adjacency_announce_messages.is_set || is_set(area_adjacency_announce_messages.operation)) leaf_name_data.push_back(area_adjacency_announce_messages.get_name_leafdata());
    if (area_adjacency_request_messages.is_set || is_set(area_adjacency_request_messages.operation)) leaf_name_data.push_back(area_adjacency_request_messages.get_name_leafdata());
    if (area_flood_messages.is_set || is_set(area_flood_messages.operation)) leaf_name_data.push_back(area_flood_messages.get_name_leafdata());
    if (area_lsa_announce_messages.is_set || is_set(area_lsa_announce_messages.operation)) leaf_name_data.push_back(area_lsa_announce_messages.get_name_leafdata());
    if (area_lsa_delete_messages.is_set || is_set(area_lsa_delete_messages.operation)) leaf_name_data.push_back(area_lsa_delete_messages.get_name_leafdata());
    if (area_lsa_fragment_announce_messages.is_set || is_set(area_lsa_fragment_announce_messages.operation)) leaf_name_data.push_back(area_lsa_fragment_announce_messages.get_name_leafdata());
    if (area_lsa_fragment_delete_messages.is_set || is_set(area_lsa_fragment_delete_messages.operation)) leaf_name_data.push_back(area_lsa_fragment_delete_messages.get_name_leafdata());
    if (area_tunnel_announce_messages.is_set || is_set(area_tunnel_announce_messages.operation)) leaf_name_data.push_back(area_tunnel_announce_messages.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::IgpAreas::IgpArea::Area::ActiveData::AreaStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-adjacency-announce-messages")
    {
        area_adjacency_announce_messages = value;
    }
    if(value_path == "area-adjacency-request-messages")
    {
        area_adjacency_request_messages = value;
    }
    if(value_path == "area-flood-messages")
    {
        area_flood_messages = value;
    }
    if(value_path == "area-lsa-announce-messages")
    {
        area_lsa_announce_messages = value;
    }
    if(value_path == "area-lsa-delete-messages")
    {
        area_lsa_delete_messages = value;
    }
    if(value_path == "area-lsa-fragment-announce-messages")
    {
        area_lsa_fragment_announce_messages = value;
    }
    if(value_path == "area-lsa-fragment-delete-messages")
    {
        area_lsa_fragment_delete_messages = value;
    }
    if(value_path == "area-tunnel-announce-messages")
    {
        area_tunnel_announce_messages = value;
    }
}

MplsTeStandby::WrapProtection::WrapProtection()
    :
    protected_lsps(std::make_shared<MplsTeStandby::WrapProtection::ProtectedLsps>())
{
    protected_lsps->parent = this;

    yang_name = "wrap-protection"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::WrapProtection::~WrapProtection()
{
}

bool MplsTeStandby::WrapProtection::has_data() const
{
    return (protected_lsps !=  nullptr && protected_lsps->has_data());
}

bool MplsTeStandby::WrapProtection::has_operation() const
{
    return is_set(operation)
	|| (protected_lsps !=  nullptr && protected_lsps->has_operation());
}

std::string MplsTeStandby::WrapProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wrap-protection";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::WrapProtection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::WrapProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protected-lsps")
    {
        if(protected_lsps == nullptr)
        {
            protected_lsps = std::make_shared<MplsTeStandby::WrapProtection::ProtectedLsps>();
        }
        return protected_lsps;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::WrapProtection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protected_lsps != nullptr)
    {
        children["protected-lsps"] = protected_lsps;
    }

    return children;
}

void MplsTeStandby::WrapProtection::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsps()
{
    yang_name = "protected-lsps"; yang_parent_name = "wrap-protection";
}

MplsTeStandby::WrapProtection::ProtectedLsps::~ProtectedLsps()
{
}

bool MplsTeStandby::WrapProtection::ProtectedLsps::has_data() const
{
    for (std::size_t index=0; index<protected_lsp.size(); index++)
    {
        if(protected_lsp[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::WrapProtection::ProtectedLsps::has_operation() const
{
    for (std::size_t index=0; index<protected_lsp.size(); index++)
    {
        if(protected_lsp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::WrapProtection::ProtectedLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-lsps";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::WrapProtection::ProtectedLsps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/wrap-protection/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::WrapProtection::ProtectedLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protected-lsp")
    {
        for(auto const & c : protected_lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp>();
        c->parent = this;
        protected_lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::WrapProtection::ProtectedLsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protected_lsp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::WrapProtection::ProtectedLsps::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::ProtectedLsp()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::int32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsp_id{YType::int32, "lsp-id"},
    sub_group_id{YType::int32, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"},
    p2mp_id{YType::int32, "p2mp-id"},
    session_type{YType::enumeration, "session-type"},
    destination_address_xr{YType::str, "destination-address-xr"},
    extended_tunnel_id_xr{YType::str, "extended-tunnel-id-xr"},
    lsp_wrap_protection_enable{YType::boolean, "lsp-wrap-protection-enable"},
    lsp_wrap_protection_label{YType::uint32, "lsp-wrap-protection-label"},
    lsp_wrap_protection_state{YType::enumeration, "lsp-wrap-protection-state"},
    p2mp_id_xr{YType::uint32, "p2mp-id-xr"},
    reverse_egress_interface{YType::str, "reverse-egress-interface"},
    reverse_lsp_label{YType::uint32, "reverse-lsp-label"},
    source_address_xr{YType::str, "source-address-xr"},
    sub_group_id_xr{YType::uint16, "sub-group-id-xr"},
    sub_group_original_id{YType::str, "sub-group-original-id"},
    tunnel_id_xr{YType::uint16, "tunnel-id-xr"},
    tunnel_instance{YType::uint32, "tunnel-instance"},
    tunnel_name{YType::str, "tunnel-name"}
{
    yang_name = "protected-lsp"; yang_parent_name = "protected-lsps";
}

MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::~ProtectedLsp()
{
}

bool MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::has_data() const
{
    return source_address.is_set
	|| destination_address.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| lsp_id.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| p2mp_id.is_set
	|| session_type.is_set
	|| destination_address_xr.is_set
	|| extended_tunnel_id_xr.is_set
	|| lsp_wrap_protection_enable.is_set
	|| lsp_wrap_protection_label.is_set
	|| lsp_wrap_protection_state.is_set
	|| p2mp_id_xr.is_set
	|| reverse_egress_interface.is_set
	|| reverse_lsp_label.is_set
	|| source_address_xr.is_set
	|| sub_group_id_xr.is_set
	|| sub_group_original_id.is_set
	|| tunnel_id_xr.is_set
	|| tunnel_instance.is_set
	|| tunnel_name.is_set;
}

bool MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(destination_address.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_originator.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(session_type.operation)
	|| is_set(destination_address_xr.operation)
	|| is_set(extended_tunnel_id_xr.operation)
	|| is_set(lsp_wrap_protection_enable.operation)
	|| is_set(lsp_wrap_protection_label.operation)
	|| is_set(lsp_wrap_protection_state.operation)
	|| is_set(p2mp_id_xr.operation)
	|| is_set(reverse_egress_interface.operation)
	|| is_set(reverse_lsp_label.operation)
	|| is_set(source_address_xr.operation)
	|| is_set(sub_group_id_xr.operation)
	|| is_set(sub_group_original_id.operation)
	|| is_set(tunnel_id_xr.operation)
	|| is_set(tunnel_instance.operation)
	|| is_set(tunnel_name.operation);
}

std::string MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-lsp" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[tunnel-id='" <<tunnel_id <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[lsp-id='" <<lsp_id <<"']" <<"[sub-group-id='" <<sub_group_id <<"']" <<"[sub-group-originator='" <<sub_group_originator <<"']" <<"[p2mp-id='" <<p2mp_id <<"']" <<"[session-type='" <<session_type <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/wrap-protection/protected-lsps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.operation)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.operation)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.operation)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (extended_tunnel_id_xr.is_set || is_set(extended_tunnel_id_xr.operation)) leaf_name_data.push_back(extended_tunnel_id_xr.get_name_leafdata());
    if (lsp_wrap_protection_enable.is_set || is_set(lsp_wrap_protection_enable.operation)) leaf_name_data.push_back(lsp_wrap_protection_enable.get_name_leafdata());
    if (lsp_wrap_protection_label.is_set || is_set(lsp_wrap_protection_label.operation)) leaf_name_data.push_back(lsp_wrap_protection_label.get_name_leafdata());
    if (lsp_wrap_protection_state.is_set || is_set(lsp_wrap_protection_state.operation)) leaf_name_data.push_back(lsp_wrap_protection_state.get_name_leafdata());
    if (p2mp_id_xr.is_set || is_set(p2mp_id_xr.operation)) leaf_name_data.push_back(p2mp_id_xr.get_name_leafdata());
    if (reverse_egress_interface.is_set || is_set(reverse_egress_interface.operation)) leaf_name_data.push_back(reverse_egress_interface.get_name_leafdata());
    if (reverse_lsp_label.is_set || is_set(reverse_lsp_label.operation)) leaf_name_data.push_back(reverse_lsp_label.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.operation)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());
    if (sub_group_id_xr.is_set || is_set(sub_group_id_xr.operation)) leaf_name_data.push_back(sub_group_id_xr.get_name_leafdata());
    if (sub_group_original_id.is_set || is_set(sub_group_original_id.operation)) leaf_name_data.push_back(sub_group_original_id.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.operation)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (tunnel_instance.is_set || is_set(tunnel_instance.operation)) leaf_name_data.push_back(tunnel_instance.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::WrapProtection::ProtectedLsps::ProtectedLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "session-type")
    {
        session_type = value;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
    }
    if(value_path == "extended-tunnel-id-xr")
    {
        extended_tunnel_id_xr = value;
    }
    if(value_path == "lsp-wrap-protection-enable")
    {
        lsp_wrap_protection_enable = value;
    }
    if(value_path == "lsp-wrap-protection-label")
    {
        lsp_wrap_protection_label = value;
    }
    if(value_path == "lsp-wrap-protection-state")
    {
        lsp_wrap_protection_state = value;
    }
    if(value_path == "p2mp-id-xr")
    {
        p2mp_id_xr = value;
    }
    if(value_path == "reverse-egress-interface")
    {
        reverse_egress_interface = value;
    }
    if(value_path == "reverse-lsp-label")
    {
        reverse_lsp_label = value;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
    }
    if(value_path == "sub-group-id-xr")
    {
        sub_group_id_xr = value;
    }
    if(value_path == "sub-group-original-id")
    {
        sub_group_original_id = value;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTeStandby::Topology::Topology()
    :
    configured_srlgs(std::make_shared<MplsTeStandby::Topology::ConfiguredSrlgs>())
	,destination_paths(std::make_shared<MplsTeStandby::Topology::DestinationPaths>())
	,global(std::make_shared<MplsTeStandby::Topology::Global>())
	,path_tunnels(std::make_shared<MplsTeStandby::Topology::PathTunnels>())
	,srlgs(std::make_shared<MplsTeStandby::Topology::Srlgs>())
{
    configured_srlgs->parent = this;

    destination_paths->parent = this;

    global->parent = this;

    path_tunnels->parent = this;

    srlgs->parent = this;

    yang_name = "topology"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::Topology::~Topology()
{
}

bool MplsTeStandby::Topology::has_data() const
{
    return (configured_srlgs !=  nullptr && configured_srlgs->has_data())
	|| (destination_paths !=  nullptr && destination_paths->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (path_tunnels !=  nullptr && path_tunnels->has_data())
	|| (srlgs !=  nullptr && srlgs->has_data());
}

bool MplsTeStandby::Topology::has_operation() const
{
    return is_set(operation)
	|| (configured_srlgs !=  nullptr && configured_srlgs->has_operation())
	|| (destination_paths !=  nullptr && destination_paths->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (path_tunnels !=  nullptr && path_tunnels->has_operation())
	|| (srlgs !=  nullptr && srlgs->has_operation());
}

std::string MplsTeStandby::Topology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "topology";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configured-srlgs")
    {
        if(configured_srlgs == nullptr)
        {
            configured_srlgs = std::make_shared<MplsTeStandby::Topology::ConfiguredSrlgs>();
        }
        return configured_srlgs;
    }

    if(child_yang_name == "destination-paths")
    {
        if(destination_paths == nullptr)
        {
            destination_paths = std::make_shared<MplsTeStandby::Topology::DestinationPaths>();
        }
        return destination_paths;
    }

    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<MplsTeStandby::Topology::Global>();
        }
        return global;
    }

    if(child_yang_name == "path-tunnels")
    {
        if(path_tunnels == nullptr)
        {
            path_tunnels = std::make_shared<MplsTeStandby::Topology::PathTunnels>();
        }
        return path_tunnels;
    }

    if(child_yang_name == "srlgs")
    {
        if(srlgs == nullptr)
        {
            srlgs = std::make_shared<MplsTeStandby::Topology::Srlgs>();
        }
        return srlgs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(configured_srlgs != nullptr)
    {
        children["configured-srlgs"] = configured_srlgs;
    }

    if(destination_paths != nullptr)
    {
        children["destination-paths"] = destination_paths;
    }

    if(global != nullptr)
    {
        children["global"] = global;
    }

    if(path_tunnels != nullptr)
    {
        children["path-tunnels"] = path_tunnels;
    }

    if(srlgs != nullptr)
    {
        children["srlgs"] = srlgs;
    }

    return children;
}

void MplsTeStandby::Topology::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::Topology::Global::Global()
    :
    hold_down_interval{YType::uint32, "hold-down-interval"},
    link_add_remove_count{YType::uint32, "link-add-remove-count"},
    local_model_id{YType::uint32, "local-model-id"}
{
    yang_name = "global"; yang_parent_name = "topology";
}

MplsTeStandby::Topology::Global::~Global()
{
}

bool MplsTeStandby::Topology::Global::has_data() const
{
    for (std::size_t index=0; index<areas.size(); index++)
    {
        if(areas[index]->has_data())
            return true;
    }
    return hold_down_interval.is_set
	|| link_add_remove_count.is_set
	|| local_model_id.is_set;
}

bool MplsTeStandby::Topology::Global::has_operation() const
{
    for (std::size_t index=0; index<areas.size(); index++)
    {
        if(areas[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(hold_down_interval.operation)
	|| is_set(link_add_remove_count.operation)
	|| is_set(local_model_id.operation);
}

std::string MplsTeStandby::Topology::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_down_interval.is_set || is_set(hold_down_interval.operation)) leaf_name_data.push_back(hold_down_interval.get_name_leafdata());
    if (link_add_remove_count.is_set || is_set(link_add_remove_count.operation)) leaf_name_data.push_back(link_add_remove_count.get_name_leafdata());
    if (local_model_id.is_set || is_set(local_model_id.operation)) leaf_name_data.push_back(local_model_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "areas")
    {
        for(auto const & c : areas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Topology::Global::Areas>();
        c->parent = this;
        areas.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : areas)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Topology::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-down-interval")
    {
        hold_down_interval = value;
    }
    if(value_path == "link-add-remove-count")
    {
        link_add_remove_count = value;
    }
    if(value_path == "local-model-id")
    {
        local_model_id = value;
    }
}

MplsTeStandby::Topology::Global::Areas::Areas()
    :
    area_id{YType::str, "area-id"},
    node_id{YType::str, "node-id"},
    protocol{YType::enumeration, "protocol"}
    	,
    local_sid_and_srbg(std::make_shared<MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg>())
{
    local_sid_and_srbg->parent = this;

    yang_name = "areas"; yang_parent_name = "global";
}

MplsTeStandby::Topology::Global::Areas::~Areas()
{
}

bool MplsTeStandby::Topology::Global::Areas::has_data() const
{
    return area_id.is_set
	|| node_id.is_set
	|| protocol.is_set
	|| (local_sid_and_srbg !=  nullptr && local_sid_and_srbg->has_data());
}

bool MplsTeStandby::Topology::Global::Areas::has_operation() const
{
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(node_id.operation)
	|| is_set(protocol.operation)
	|| (local_sid_and_srbg !=  nullptr && local_sid_and_srbg->has_operation());
}

std::string MplsTeStandby::Topology::Global::Areas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areas";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::Global::Areas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::Global::Areas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-sid-and-srbg")
    {
        if(local_sid_and_srbg == nullptr)
        {
            local_sid_and_srbg = std::make_shared<MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg>();
        }
        return local_sid_and_srbg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::Global::Areas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_sid_and_srbg != nullptr)
    {
        children["local-sid-and-srbg"] = local_sid_and_srbg;
    }

    return children;
}

void MplsTeStandby::Topology::Global::Areas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg::LocalSidAndSrbg()
    :
    segment_id{YType::uint32, "segment-id"},
    segment_id_local_absolute_value{YType::uint32, "segment-id-local-absolute-value"},
    srgb_size{YType::uint32, "srgb-size"},
    srgb_start{YType::uint32, "srgb-start"}
{
    yang_name = "local-sid-and-srbg"; yang_parent_name = "areas";
}

MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg::~LocalSidAndSrbg()
{
}

bool MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg::has_data() const
{
    return segment_id.is_set
	|| segment_id_local_absolute_value.is_set
	|| srgb_size.is_set
	|| srgb_start.is_set;
}

bool MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg::has_operation() const
{
    return is_set(operation)
	|| is_set(segment_id.operation)
	|| is_set(segment_id_local_absolute_value.operation)
	|| is_set(srgb_size.operation)
	|| is_set(srgb_start.operation);
}

std::string MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-sid-and-srbg";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/global/areas/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_id.is_set || is_set(segment_id.operation)) leaf_name_data.push_back(segment_id.get_name_leafdata());
    if (segment_id_local_absolute_value.is_set || is_set(segment_id_local_absolute_value.operation)) leaf_name_data.push_back(segment_id_local_absolute_value.get_name_leafdata());
    if (srgb_size.is_set || is_set(srgb_size.operation)) leaf_name_data.push_back(srgb_size.get_name_leafdata());
    if (srgb_start.is_set || is_set(srgb_start.operation)) leaf_name_data.push_back(srgb_start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Topology::Global::Areas::LocalSidAndSrbg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "segment-id")
    {
        segment_id = value;
    }
    if(value_path == "segment-id-local-absolute-value")
    {
        segment_id_local_absolute_value = value;
    }
    if(value_path == "srgb-size")
    {
        srgb_size = value;
    }
    if(value_path == "srgb-start")
    {
        srgb_start = value;
    }
}

MplsTeStandby::Topology::DestinationPaths::DestinationPaths()
{
    yang_name = "destination-paths"; yang_parent_name = "topology";
}

MplsTeStandby::Topology::DestinationPaths::~DestinationPaths()
{
}

bool MplsTeStandby::Topology::DestinationPaths::has_data() const
{
    for (std::size_t index=0; index<destination_path.size(); index++)
    {
        if(destination_path[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::Topology::DestinationPaths::has_operation() const
{
    for (std::size_t index=0; index<destination_path.size(); index++)
    {
        if(destination_path[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::Topology::DestinationPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-paths";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::DestinationPaths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::DestinationPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-path")
    {
        for(auto const & c : destination_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Topology::DestinationPaths::DestinationPath>();
        c->parent = this;
        destination_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::DestinationPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : destination_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Topology::DestinationPaths::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::DestinationPath()
    :
    accumulated_admin_weight{YType::uint64, "accumulated-admin-weight"},
    affinity_bits{YType::int32, "affinity-bits"},
    affinity_mask{YType::int32, "affinity-mask"},
    bandwidth{YType::int32, "bandwidth"},
    bandwidth_type{YType::uint64, "bandwidth-type"},
    cost_limit{YType::int32, "cost-limit"},
    destination_address{YType::str, "destination-address"},
    destination_address_xr{YType::str, "destination-address-xr"},
    exclude_srlg_address{YType::str, "exclude-srlg-address"},
    exclude_srlg_ip_address{YType::str, "exclude-srlg-ip-address"},
    hold_priority{YType::int32, "hold-priority"},
    hold_priority_xr{YType::uint32, "hold-priority-xr"},
    hop{YType::str, "hop"},
    hop_limit{YType::int32, "hop-limit"},
    igp_area{YType::int32, "igp-area"},
    igp_instance{YType::str, "igp-instance"},
    igp_type{YType::enumeration, "igp-type"},
    is_full_path{YType::boolean, "is-full-path"},
    is_partial_path{YType::boolean, "is-partial-path"},
    is_segment_routing_db_checked{YType::boolean, "is-segment-routing-db-checked"},
    is_topology_checked{YType::boolean, "is-topology-checked"},
    mininum_bandwidth{YType::uint64, "mininum-bandwidth"},
    node_hop_count{YType::uint8, "node-hop-count"},
    path_id{YType::int32, "path-id"},
    path_name{YType::str, "path-name"},
    path_type{YType::enumeration, "path-type"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority{YType::int32, "setup-priority"},
    setup_priority_xr{YType::uint32, "setup-priority-xr"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"}
    	,
    affinity(std::make_shared<MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity>())
{
    affinity->parent = this;

    yang_name = "destination-path"; yang_parent_name = "destination-paths";
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::~DestinationPath()
{
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::has_data() const
{
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_segment.size(); index++)
    {
        if(sr_segment[index]->has_data())
            return true;
    }
    for (auto const & leaf : hop.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return accumulated_admin_weight.is_set
	|| affinity_bits.is_set
	|| affinity_mask.is_set
	|| bandwidth.is_set
	|| bandwidth_type.is_set
	|| cost_limit.is_set
	|| destination_address.is_set
	|| destination_address_xr.is_set
	|| exclude_srlg_address.is_set
	|| exclude_srlg_ip_address.is_set
	|| hold_priority.is_set
	|| hold_priority_xr.is_set
	|| hop_limit.is_set
	|| igp_area.is_set
	|| igp_instance.is_set
	|| igp_type.is_set
	|| is_full_path.is_set
	|| is_partial_path.is_set
	|| is_segment_routing_db_checked.is_set
	|| is_topology_checked.is_set
	|| mininum_bandwidth.is_set
	|| node_hop_count.is_set
	|| path_id.is_set
	|| path_name.is_set
	|| path_type.is_set
	|| requested_bandwidth.is_set
	|| setup_priority.is_set
	|| setup_priority_xr.is_set
	|| tunnel_id_xr.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::has_operation() const
{
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_segment.size(); index++)
    {
        if(sr_segment[index]->has_operation())
            return true;
    }
    for (auto const & leaf : hop.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(accumulated_admin_weight.operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation)
	|| is_set(bandwidth.operation)
	|| is_set(bandwidth_type.operation)
	|| is_set(cost_limit.operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_address_xr.operation)
	|| is_set(exclude_srlg_address.operation)
	|| is_set(exclude_srlg_ip_address.operation)
	|| is_set(hold_priority.operation)
	|| is_set(hold_priority_xr.operation)
	|| is_set(hop.operation)
	|| is_set(hop_limit.operation)
	|| is_set(igp_area.operation)
	|| is_set(igp_instance.operation)
	|| is_set(igp_type.operation)
	|| is_set(is_full_path.operation)
	|| is_set(is_partial_path.operation)
	|| is_set(is_segment_routing_db_checked.operation)
	|| is_set(is_topology_checked.operation)
	|| is_set(mininum_bandwidth.operation)
	|| is_set(node_hop_count.operation)
	|| is_set(path_id.operation)
	|| is_set(path_name.operation)
	|| is_set(path_type.operation)
	|| is_set(requested_bandwidth.operation)
	|| is_set(setup_priority.operation)
	|| is_set(setup_priority_xr.operation)
	|| is_set(tunnel_id_xr.operation)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTeStandby::Topology::DestinationPaths::DestinationPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-path";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::DestinationPaths::DestinationPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/destination-paths/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accumulated_admin_weight.is_set || is_set(accumulated_admin_weight.operation)) leaf_name_data.push_back(accumulated_admin_weight.get_name_leafdata());
    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.operation)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.operation)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.operation)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (exclude_srlg_address.is_set || is_set(exclude_srlg_address.operation)) leaf_name_data.push_back(exclude_srlg_address.get_name_leafdata());
    if (exclude_srlg_ip_address.is_set || is_set(exclude_srlg_ip_address.operation)) leaf_name_data.push_back(exclude_srlg_ip_address.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (hold_priority_xr.is_set || is_set(hold_priority_xr.operation)) leaf_name_data.push_back(hold_priority_xr.get_name_leafdata());
    if (hop_limit.is_set || is_set(hop_limit.operation)) leaf_name_data.push_back(hop_limit.get_name_leafdata());
    if (igp_area.is_set || is_set(igp_area.operation)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.operation)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.operation)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (is_full_path.is_set || is_set(is_full_path.operation)) leaf_name_data.push_back(is_full_path.get_name_leafdata());
    if (is_partial_path.is_set || is_set(is_partial_path.operation)) leaf_name_data.push_back(is_partial_path.get_name_leafdata());
    if (is_segment_routing_db_checked.is_set || is_set(is_segment_routing_db_checked.operation)) leaf_name_data.push_back(is_segment_routing_db_checked.get_name_leafdata());
    if (is_topology_checked.is_set || is_set(is_topology_checked.operation)) leaf_name_data.push_back(is_topology_checked.get_name_leafdata());
    if (mininum_bandwidth.is_set || is_set(mininum_bandwidth.operation)) leaf_name_data.push_back(mininum_bandwidth.get_name_leafdata());
    if (node_hop_count.is_set || is_set(node_hop_count.operation)) leaf_name_data.push_back(node_hop_count.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());
    if (path_name.is_set || is_set(path_name.operation)) leaf_name_data.push_back(path_name.get_name_leafdata());
    if (path_type.is_set || is_set(path_type.operation)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.operation)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (setup_priority_xr.is_set || is_set(setup_priority_xr.operation)) leaf_name_data.push_back(setup_priority_xr.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.operation)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());

    auto hop_name_datas = hop.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), hop_name_datas.begin(), hop_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::DestinationPaths::DestinationPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        for(auto const & c : shared_risk_link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    if(child_yang_name == "sr-segment")
    {
        for(auto const & c : sr_segment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment>();
        c->parent = this;
        sr_segment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::DestinationPaths::DestinationPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    for (auto const & c : shared_risk_link_group)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sr_segment)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Topology::DestinationPaths::DestinationPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accumulated-admin-weight")
    {
        accumulated_admin_weight = value;
    }
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
    }
    if(value_path == "cost-limit")
    {
        cost_limit = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
    }
    if(value_path == "exclude-srlg-address")
    {
        exclude_srlg_address = value;
    }
    if(value_path == "exclude-srlg-ip-address")
    {
        exclude_srlg_ip_address = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "hold-priority-xr")
    {
        hold_priority_xr = value;
    }
    if(value_path == "hop")
    {
        hop.append(value);
    }
    if(value_path == "hop-limit")
    {
        hop_limit = value;
    }
    if(value_path == "igp-area")
    {
        igp_area = value;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
    }
    if(value_path == "is-full-path")
    {
        is_full_path = value;
    }
    if(value_path == "is-partial-path")
    {
        is_partial_path = value;
    }
    if(value_path == "is-segment-routing-db-checked")
    {
        is_segment_routing_db_checked = value;
    }
    if(value_path == "is-topology-checked")
    {
        is_topology_checked = value;
    }
    if(value_path == "mininum-bandwidth")
    {
        mininum_bandwidth = value;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
    if(value_path == "path-name")
    {
        path_name = value;
    }
    if(value_path == "path-type")
    {
        path_type = value;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "setup-priority-xr")
    {
        setup_priority_xr = value;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
    }
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "destination-path";
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::~Affinity()
{
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/destination-paths/destination-path/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/destination-paths/destination-path/affinity/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Topology::DestinationPaths::DestinationPath::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{
    yang_name = "shared-risk-link-group"; yang_parent_name = "destination-path";
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(shared_risk_group.operation)
	|| is_set(srlg_name.operation);
}

std::string MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/destination-paths/destination-path/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.operation)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Topology::DestinationPaths::DestinationPath::SharedRiskLinkGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment::SrSegment()
    :
    has_entropy_label{YType::boolean, "has-entropy-label"},
    has_ip_addresses{YType::boolean, "has-ip-addresses"},
    has_mpls_label{YType::boolean, "has-mpls-label"},
    local_addr{YType::str, "local-addr"},
    mpls_label_value{YType::uint32, "mpls-label-value"},
    remote_addr{YType::str, "remote-addr"},
    sid_type{YType::enumeration, "sid-type"}
{
    yang_name = "sr-segment"; yang_parent_name = "destination-path";
}

MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment::~SrSegment()
{
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment::has_data() const
{
    return has_entropy_label.is_set
	|| has_ip_addresses.is_set
	|| has_mpls_label.is_set
	|| local_addr.is_set
	|| mpls_label_value.is_set
	|| remote_addr.is_set
	|| sid_type.is_set;
}

bool MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment::has_operation() const
{
    return is_set(operation)
	|| is_set(has_entropy_label.operation)
	|| is_set(has_ip_addresses.operation)
	|| is_set(has_mpls_label.operation)
	|| is_set(local_addr.operation)
	|| is_set(mpls_label_value.operation)
	|| is_set(remote_addr.operation)
	|| is_set(sid_type.operation);
}

std::string MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-segment";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/destination-paths/destination-path/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_entropy_label.is_set || is_set(has_entropy_label.operation)) leaf_name_data.push_back(has_entropy_label.get_name_leafdata());
    if (has_ip_addresses.is_set || is_set(has_ip_addresses.operation)) leaf_name_data.push_back(has_ip_addresses.get_name_leafdata());
    if (has_mpls_label.is_set || is_set(has_mpls_label.operation)) leaf_name_data.push_back(has_mpls_label.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.operation)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (mpls_label_value.is_set || is_set(mpls_label_value.operation)) leaf_name_data.push_back(mpls_label_value.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.operation)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (sid_type.is_set || is_set(sid_type.operation)) leaf_name_data.push_back(sid_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Topology::DestinationPaths::DestinationPath::SrSegment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "has-entropy-label")
    {
        has_entropy_label = value;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses = value;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label = value;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value = value;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
    }
    if(value_path == "sid-type")
    {
        sid_type = value;
    }
}

MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlgs()
{
    yang_name = "configured-srlgs"; yang_parent_name = "topology";
}

MplsTeStandby::Topology::ConfiguredSrlgs::~ConfiguredSrlgs()
{
}

bool MplsTeStandby::Topology::ConfiguredSrlgs::has_data() const
{
    for (std::size_t index=0; index<configured_srlg.size(); index++)
    {
        if(configured_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::Topology::ConfiguredSrlgs::has_operation() const
{
    for (std::size_t index=0; index<configured_srlg.size(); index++)
    {
        if(configured_srlg[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::Topology::ConfiguredSrlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-srlgs";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::ConfiguredSrlgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::ConfiguredSrlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "configured-srlg")
    {
        for(auto const & c : configured_srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg>();
        c->parent = this;
        configured_srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::ConfiguredSrlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : configured_srlg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Topology::ConfiguredSrlgs::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::ConfiguredSrlg()
    :
    srlg_number{YType::int32, "srlg-number"},
    admin_weight{YType::uint32, "admin-weight"},
    is_admin_weight_configured{YType::boolean, "is-admin-weight-configured"},
    srlg_name{YType::str, "srlg-name"},
    srlg_number_xr{YType::uint32, "srlg-number-xr"}
{
    yang_name = "configured-srlg"; yang_parent_name = "configured-srlgs";
}

MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::~ConfiguredSrlg()
{
}

bool MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::has_data() const
{
    for (std::size_t index=0; index<srlg_link.size(); index++)
    {
        if(srlg_link[index]->has_data())
            return true;
    }
    return srlg_number.is_set
	|| admin_weight.is_set
	|| is_admin_weight_configured.is_set
	|| srlg_name.is_set
	|| srlg_number_xr.is_set;
}

bool MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::has_operation() const
{
    for (std::size_t index=0; index<srlg_link.size(); index++)
    {
        if(srlg_link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(srlg_number.operation)
	|| is_set(admin_weight.operation)
	|| is_set(is_admin_weight_configured.operation)
	|| is_set(srlg_name.operation)
	|| is_set(srlg_number_xr.operation);
}

std::string MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-srlg" <<"[srlg-number='" <<srlg_number <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/configured-srlgs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_number.is_set || is_set(srlg_number.operation)) leaf_name_data.push_back(srlg_number.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.operation)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (is_admin_weight_configured.is_set || is_set(is_admin_weight_configured.operation)) leaf_name_data.push_back(is_admin_weight_configured.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());
    if (srlg_number_xr.is_set || is_set(srlg_number_xr.operation)) leaf_name_data.push_back(srlg_number_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-link")
    {
        for(auto const & c : srlg_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink>();
        c->parent = this;
        srlg_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srlg_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srlg-number")
    {
        srlg_number = value;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
    }
    if(value_path == "is-admin-weight-configured")
    {
        is_admin_weight_configured = value;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
    if(value_path == "srlg-number-xr")
    {
        srlg_number_xr = value;
    }
}

MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::SrlgLink()
    :
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"}
{
    yang_name = "srlg-link"; yang_parent_name = "configured-srlg";
}

MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::~SrlgLink()
{
}

bool MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::has_data() const
{
    return local_address.is_set
	|| remote_address.is_set;
}

bool MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::has_operation() const
{
    return is_set(operation)
	|| is_set(local_address.operation)
	|| is_set(remote_address.operation);
}

std::string MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-link";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgLink' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.operation)) leaf_name_data.push_back(remote_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Topology::ConfiguredSrlgs::ConfiguredSrlg::SrlgLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
    }
}

MplsTeStandby::Topology::Srlgs::Srlgs()
{
    yang_name = "srlgs"; yang_parent_name = "topology";
}

MplsTeStandby::Topology::Srlgs::~Srlgs()
{
}

bool MplsTeStandby::Topology::Srlgs::has_data() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::Topology::Srlgs::has_operation() const
{
    for (std::size_t index=0; index<srlg.size(); index++)
    {
        if(srlg[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::Topology::Srlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlgs";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::Srlgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::Srlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg")
    {
        for(auto const & c : srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Topology::Srlgs::Srlg>();
        c->parent = this;
        srlg.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::Srlgs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srlg)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Topology::Srlgs::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::Topology::Srlgs::Srlg::Srlg()
    :
    srlg_number{YType::int32, "srlg-number"},
    admin_weight{YType::uint32, "admin-weight"},
    srlg_name{YType::str, "srlg-name"}
{
    yang_name = "srlg"; yang_parent_name = "srlgs";
}

MplsTeStandby::Topology::Srlgs::Srlg::~Srlg()
{
}

bool MplsTeStandby::Topology::Srlgs::Srlg::has_data() const
{
    for (std::size_t index=0; index<srlg_areas.size(); index++)
    {
        if(srlg_areas[index]->has_data())
            return true;
    }
    return srlg_number.is_set
	|| admin_weight.is_set
	|| srlg_name.is_set;
}

bool MplsTeStandby::Topology::Srlgs::Srlg::has_operation() const
{
    for (std::size_t index=0; index<srlg_areas.size(); index++)
    {
        if(srlg_areas[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(srlg_number.operation)
	|| is_set(admin_weight.operation)
	|| is_set(srlg_name.operation);
}

std::string MplsTeStandby::Topology::Srlgs::Srlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg" <<"[srlg-number='" <<srlg_number <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::Srlgs::Srlg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/srlgs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_number.is_set || is_set(srlg_number.operation)) leaf_name_data.push_back(srlg_number.get_name_leafdata());
    if (admin_weight.is_set || is_set(admin_weight.operation)) leaf_name_data.push_back(admin_weight.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::Srlgs::Srlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-areas")
    {
        for(auto const & c : srlg_areas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas>();
        c->parent = this;
        srlg_areas.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::Srlgs::Srlg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srlg_areas)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Topology::Srlgs::Srlg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "srlg-number")
    {
        srlg_number = value;
    }
    if(value_path == "admin-weight")
    {
        admin_weight = value;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
}

MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgAreas()
    :
    igp_area{YType::uint32, "igp-area"},
    igp_area_format{YType::enumeration, "igp-area-format"},
    igp_instance{YType::str, "igp-instance"},
    igp_type{YType::enumeration, "igp-type"}
{
    yang_name = "srlg-areas"; yang_parent_name = "srlg";
}

MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::~SrlgAreas()
{
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::has_data() const
{
    for (std::size_t index=0; index<srlg_link.size(); index++)
    {
        if(srlg_link[index]->has_data())
            return true;
    }
    return igp_area.is_set
	|| igp_area_format.is_set
	|| igp_instance.is_set
	|| igp_type.is_set;
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::has_operation() const
{
    for (std::size_t index=0; index<srlg_link.size(); index++)
    {
        if(srlg_link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(igp_area.operation)
	|| is_set(igp_area_format.operation)
	|| is_set(igp_instance.operation)
	|| is_set(igp_type.operation);
}

std::string MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-areas";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgAreas' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area.is_set || is_set(igp_area.operation)) leaf_name_data.push_back(igp_area.get_name_leafdata());
    if (igp_area_format.is_set || is_set(igp_area_format.operation)) leaf_name_data.push_back(igp_area_format.get_name_leafdata());
    if (igp_instance.is_set || is_set(igp_instance.operation)) leaf_name_data.push_back(igp_instance.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.operation)) leaf_name_data.push_back(igp_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srlg-link")
    {
        for(auto const & c : srlg_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink>();
        c->parent = this;
        srlg_link.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : srlg_link)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igp-area")
    {
        igp_area = value;
    }
    if(value_path == "igp-area-format")
    {
        igp_area_format = value;
    }
    if(value_path == "igp-instance")
    {
        igp_instance = value;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
    }
}

MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::SrlgLink()
    :
    link_address{YType::str, "link-address"},
    te_router_id{YType::str, "te-router-id"}
    	,
    link_address_generic(std::make_shared<MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric>())
{
    link_address_generic->parent = this;

    yang_name = "srlg-link"; yang_parent_name = "srlg-areas";
}

MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::~SrlgLink()
{
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::has_data() const
{
    return link_address.is_set
	|| te_router_id.is_set
	|| (link_address_generic !=  nullptr && link_address_generic->has_data());
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::has_operation() const
{
    return is_set(operation)
	|| is_set(link_address.operation)
	|| is_set(te_router_id.operation)
	|| (link_address_generic !=  nullptr && link_address_generic->has_operation());
}

std::string MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-link";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrlgLink' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (link_address.is_set || is_set(link_address.operation)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (te_router_id.is_set || is_set(te_router_id.operation)) leaf_name_data.push_back(te_router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "link-address-generic")
    {
        if(link_address_generic == nullptr)
        {
            link_address_generic = std::make_shared<MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric>();
        }
        return link_address_generic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(link_address_generic != nullptr)
    {
        children["link-address-generic"] = link_address_generic;
    }

    return children;
}

void MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "link-address")
    {
        link_address = value;
    }
    if(value_path == "te-router-id")
    {
        te_router_id = value;
    }
}

MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::LinkAddressGeneric()
    :
    te_addr(std::make_shared<MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr>())
{
    te_addr->parent = this;

    yang_name = "link-address-generic"; yang_parent_name = "srlg-link";
}

MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::~LinkAddressGeneric()
{
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::has_data() const
{
    return (te_addr !=  nullptr && te_addr->has_data());
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::has_operation() const
{
    return is_set(operation)
	|| (te_addr !=  nullptr && te_addr->has_operation());
}

std::string MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-address-generic";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkAddressGeneric' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-addr")
    {
        if(te_addr == nullptr)
        {
            te_addr = std::make_shared<MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr>();
        }
        return te_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(te_addr != nullptr)
    {
        children["te-addr"] = te_addr;
    }

    return children;
}

void MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::TeAddr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    type{YType::enumeration, "type"}
    	,
    ipv4_unnumbered_address(std::make_shared<MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress>())
{
    ipv4_unnumbered_address->parent = this;

    yang_name = "te-addr"; yang_parent_name = "link-address-generic";
}

MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::~TeAddr()
{
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::has_data() const
{
    return ipv4_address.is_set
	|| type.is_set
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_data());
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(type.operation)
	|| (ipv4_unnumbered_address !=  nullptr && ipv4_unnumbered_address->has_operation());
}

std::string MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-addr";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeAddr' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-unnumbered-address")
    {
        if(ipv4_unnumbered_address == nullptr)
        {
            ipv4_unnumbered_address = std::make_shared<MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress>();
        }
        return ipv4_unnumbered_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipv4_unnumbered_address != nullptr)
    {
        children["ipv4-unnumbered-address"] = ipv4_unnumbered_address;
    }

    return children;
}

void MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::Ipv4UnnumberedAddress()
    :
    interface_index{YType::uint32, "interface-index"},
    router_id{YType::str, "router-id"}
{
    yang_name = "ipv4-unnumbered-address"; yang_parent_name = "te-addr";
}

MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::~Ipv4UnnumberedAddress()
{
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_data() const
{
    return interface_index.is_set
	|| router_id.is_set;
}

bool MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_index.operation)
	|| is_set(router_id.operation);
}

std::string MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-unnumbered-address";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4UnnumberedAddress' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_index.is_set || is_set(interface_index.operation)) leaf_name_data.push_back(interface_index.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Topology::Srlgs::Srlg::SrlgAreas::SrlgLink::LinkAddressGeneric::TeAddr::Ipv4UnnumberedAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-index")
    {
        interface_index = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

MplsTeStandby::Topology::PathTunnels::PathTunnels()
{
    yang_name = "path-tunnels"; yang_parent_name = "topology";
}

MplsTeStandby::Topology::PathTunnels::~PathTunnels()
{
}

bool MplsTeStandby::Topology::PathTunnels::has_data() const
{
    for (std::size_t index=0; index<path_tunnel.size(); index++)
    {
        if(path_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::Topology::PathTunnels::has_operation() const
{
    for (std::size_t index=0; index<path_tunnel.size(); index++)
    {
        if(path_tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::Topology::PathTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-tunnels";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::PathTunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::PathTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-tunnel")
    {
        for(auto const & c : path_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel>();
        c->parent = this;
        path_tunnel.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::PathTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : path_tunnel)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Topology::PathTunnels::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::PathTunnel()
    :
    accumulated_admin_weight{YType::uint64, "accumulated-admin-weight"},
    bandwidth_type{YType::uint64, "bandwidth-type"},
    destination_address_xr{YType::str, "destination-address-xr"},
    exclude_srlg_address{YType::str, "exclude-srlg-address"},
    hold_priority_xr{YType::uint32, "hold-priority-xr"},
    hop{YType::str, "hop"},
    is_full_path{YType::boolean, "is-full-path"},
    is_partial_path{YType::boolean, "is-partial-path"},
    is_segment_routing_db_checked{YType::boolean, "is-segment-routing-db-checked"},
    is_topology_checked{YType::boolean, "is-topology-checked"},
    mininum_bandwidth{YType::uint64, "mininum-bandwidth"},
    node_hop_count{YType::uint8, "node-hop-count"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority_xr{YType::uint32, "setup-priority-xr"},
    tunnel_id{YType::int32, "tunnel-id"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"},
    tunnel_name{YType::str, "tunnel-name"}
    	,
    affinity(std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity>())
{
    affinity->parent = this;

    yang_name = "path-tunnel"; yang_parent_name = "path-tunnels";
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::~PathTunnel()
{
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::has_data() const
{
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_segment.size(); index++)
    {
        if(sr_segment[index]->has_data())
            return true;
    }
    for (auto const & leaf : hop.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return accumulated_admin_weight.is_set
	|| bandwidth_type.is_set
	|| destination_address_xr.is_set
	|| exclude_srlg_address.is_set
	|| hold_priority_xr.is_set
	|| is_full_path.is_set
	|| is_partial_path.is_set
	|| is_segment_routing_db_checked.is_set
	|| is_topology_checked.is_set
	|| mininum_bandwidth.is_set
	|| node_hop_count.is_set
	|| requested_bandwidth.is_set
	|| setup_priority_xr.is_set
	|| tunnel_id.is_set
	|| tunnel_id_xr.is_set
	|| tunnel_name.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::has_operation() const
{
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_segment.size(); index++)
    {
        if(sr_segment[index]->has_operation())
            return true;
    }
    for (auto const & leaf : hop.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(accumulated_admin_weight.operation)
	|| is_set(bandwidth_type.operation)
	|| is_set(destination_address_xr.operation)
	|| is_set(exclude_srlg_address.operation)
	|| is_set(hold_priority_xr.operation)
	|| is_set(hop.operation)
	|| is_set(is_full_path.operation)
	|| is_set(is_partial_path.operation)
	|| is_set(is_segment_routing_db_checked.operation)
	|| is_set(is_topology_checked.operation)
	|| is_set(mininum_bandwidth.operation)
	|| is_set(node_hop_count.operation)
	|| is_set(requested_bandwidth.operation)
	|| is_set(setup_priority_xr.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(tunnel_id_xr.operation)
	|| is_set(tunnel_name.operation)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-tunnel";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::PathTunnels::PathTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/path-tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accumulated_admin_weight.is_set || is_set(accumulated_admin_weight.operation)) leaf_name_data.push_back(accumulated_admin_weight.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.operation)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.operation)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (exclude_srlg_address.is_set || is_set(exclude_srlg_address.operation)) leaf_name_data.push_back(exclude_srlg_address.get_name_leafdata());
    if (hold_priority_xr.is_set || is_set(hold_priority_xr.operation)) leaf_name_data.push_back(hold_priority_xr.get_name_leafdata());
    if (is_full_path.is_set || is_set(is_full_path.operation)) leaf_name_data.push_back(is_full_path.get_name_leafdata());
    if (is_partial_path.is_set || is_set(is_partial_path.operation)) leaf_name_data.push_back(is_partial_path.get_name_leafdata());
    if (is_segment_routing_db_checked.is_set || is_set(is_segment_routing_db_checked.operation)) leaf_name_data.push_back(is_segment_routing_db_checked.get_name_leafdata());
    if (is_topology_checked.is_set || is_set(is_topology_checked.operation)) leaf_name_data.push_back(is_topology_checked.get_name_leafdata());
    if (mininum_bandwidth.is_set || is_set(mininum_bandwidth.operation)) leaf_name_data.push_back(mininum_bandwidth.get_name_leafdata());
    if (node_hop_count.is_set || is_set(node_hop_count.operation)) leaf_name_data.push_back(node_hop_count.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.operation)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority_xr.is_set || is_set(setup_priority_xr.operation)) leaf_name_data.push_back(setup_priority_xr.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.operation)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    auto hop_name_datas = hop.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), hop_name_datas.begin(), hop_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::PathTunnels::PathTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        for(auto const & c : shared_risk_link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(c);
        return c;
    }

    if(child_yang_name == "sr-segment")
    {
        for(auto const & c : sr_segment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment>();
        c->parent = this;
        sr_segment.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::PathTunnels::PathTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(affinity != nullptr)
    {
        children["affinity"] = affinity;
    }

    for (auto const & c : shared_risk_link_group)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : sr_segment)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accumulated-admin-weight")
    {
        accumulated_admin_weight = value;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
    }
    if(value_path == "exclude-srlg-address")
    {
        exclude_srlg_address = value;
    }
    if(value_path == "hold-priority-xr")
    {
        hold_priority_xr = value;
    }
    if(value_path == "hop")
    {
        hop.append(value);
    }
    if(value_path == "is-full-path")
    {
        is_full_path = value;
    }
    if(value_path == "is-partial-path")
    {
        is_partial_path = value;
    }
    if(value_path == "is-segment-routing-db-checked")
    {
        is_segment_routing_db_checked = value;
    }
    if(value_path == "is-topology-checked")
    {
        is_topology_checked = value;
    }
    if(value_path == "mininum-bandwidth")
    {
        mininum_bandwidth = value;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count = value;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
    }
    if(value_path == "setup-priority-xr")
    {
        setup_priority_xr = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
{
    yang_name = "affinity"; yang_parent_name = "path-tunnel";
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::~Affinity()
{
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::has_data() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.size(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bits.operation)
	|| is_set(affinity_mask.operation);
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/path-tunnels/path-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.operation)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.operation)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        for(auto const & c : named_affinity)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity>();
        c->parent = this;
        named_affinity.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : named_affinity)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
    }
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_extended_value{YType::uint32, "constraint-extended-value"},
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    extended_forward_ref_value{YType::uint32, "extended-forward-ref-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
{
    yang_name = "named-affinity"; yang_parent_name = "affinity";
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::has_data() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::has_operation() const
{
    for (auto const & leaf : constraint_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : extended_forward_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(constraint_extended_value.operation)
	|| is_set(constraint_type.operation)
	|| is_set(constraint_value.operation)
	|| is_set(extended_forward_ref_value.operation)
	|| is_set(forward_ref_value.operation);
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/path-tunnels/path-tunnel/affinity/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.operation)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.operation)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.operation)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    auto constraint_extended_value_name_datas = constraint_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), constraint_extended_value_name_datas.begin(), constraint_extended_value_name_datas.end());
    auto extended_forward_ref_value_name_datas = extended_forward_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_forward_ref_value_name_datas.begin(), extended_forward_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "constraint-extended-value")
    {
        constraint_extended_value.append(value);
    }
    if(value_path == "constraint-type")
    {
        constraint_type = value;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
    }
    if(value_path == "extended-forward-ref-value")
    {
        extended_forward_ref_value.append(value);
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
    }
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{
    yang_name = "shared-risk-link-group"; yang_parent_name = "path-tunnel";
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(shared_risk_group.operation)
	|| is_set(srlg_name.operation);
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/path-tunnels/path-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.operation)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::SrSegment()
    :
    has_entropy_label{YType::boolean, "has-entropy-label"},
    has_ip_addresses{YType::boolean, "has-ip-addresses"},
    has_mpls_label{YType::boolean, "has-mpls-label"},
    local_addr{YType::str, "local-addr"},
    mpls_label_value{YType::uint32, "mpls-label-value"},
    remote_addr{YType::str, "remote-addr"},
    sid_type{YType::enumeration, "sid-type"}
{
    yang_name = "sr-segment"; yang_parent_name = "path-tunnel";
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::~SrSegment()
{
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::has_data() const
{
    return has_entropy_label.is_set
	|| has_ip_addresses.is_set
	|| has_mpls_label.is_set
	|| local_addr.is_set
	|| mpls_label_value.is_set
	|| remote_addr.is_set
	|| sid_type.is_set;
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::has_operation() const
{
    return is_set(operation)
	|| is_set(has_entropy_label.operation)
	|| is_set(has_ip_addresses.operation)
	|| is_set(has_mpls_label.operation)
	|| is_set(local_addr.operation)
	|| is_set(mpls_label_value.operation)
	|| is_set(remote_addr.operation)
	|| is_set(sid_type.operation);
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-segment";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/path-tunnels/path-tunnel/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_entropy_label.is_set || is_set(has_entropy_label.operation)) leaf_name_data.push_back(has_entropy_label.get_name_leafdata());
    if (has_ip_addresses.is_set || is_set(has_ip_addresses.operation)) leaf_name_data.push_back(has_ip_addresses.get_name_leafdata());
    if (has_mpls_label.is_set || is_set(has_mpls_label.operation)) leaf_name_data.push_back(has_mpls_label.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.operation)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (mpls_label_value.is_set || is_set(mpls_label_value.operation)) leaf_name_data.push_back(mpls_label_value.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.operation)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (sid_type.is_set || is_set(sid_type.operation)) leaf_name_data.push_back(sid_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "has-entropy-label")
    {
        has_entropy_label = value;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses = value;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label = value;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value = value;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
    }
    if(value_path == "sid-type")
    {
        sid_type = value;
    }
}

MplsTeStandby::SignallingCounters::SignallingCounters()
    :
    head_signalling_counters(std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters>())
	,heads_counters(std::make_shared<MplsTeStandby::SignallingCounters::HeadsCounters>())
	,issu(std::make_shared<MplsTeStandby::SignallingCounters::Issu>())
	,mids_counters(std::make_shared<MplsTeStandby::SignallingCounters::MidsCounters>())
	,remote_signalling_counters(std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters>())
	,signalling_summary(std::make_shared<MplsTeStandby::SignallingCounters::SignallingSummary>())
	,signallings(std::make_shared<MplsTeStandby::SignallingCounters::Signallings>())
	,tails_counters(std::make_shared<MplsTeStandby::SignallingCounters::TailsCounters>())
{
    head_signalling_counters->parent = this;

    heads_counters->parent = this;

    issu->parent = this;

    mids_counters->parent = this;

    remote_signalling_counters->parent = this;

    signalling_summary->parent = this;

    signallings->parent = this;

    tails_counters->parent = this;

    yang_name = "signalling-counters"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::SignallingCounters::~SignallingCounters()
{
}

bool MplsTeStandby::SignallingCounters::has_data() const
{
    return (head_signalling_counters !=  nullptr && head_signalling_counters->has_data())
	|| (heads_counters !=  nullptr && heads_counters->has_data())
	|| (issu !=  nullptr && issu->has_data())
	|| (mids_counters !=  nullptr && mids_counters->has_data())
	|| (remote_signalling_counters !=  nullptr && remote_signalling_counters->has_data())
	|| (signalling_summary !=  nullptr && signalling_summary->has_data())
	|| (signallings !=  nullptr && signallings->has_data())
	|| (tails_counters !=  nullptr && tails_counters->has_data());
}

bool MplsTeStandby::SignallingCounters::has_operation() const
{
    return is_set(operation)
	|| (head_signalling_counters !=  nullptr && head_signalling_counters->has_operation())
	|| (heads_counters !=  nullptr && heads_counters->has_operation())
	|| (issu !=  nullptr && issu->has_operation())
	|| (mids_counters !=  nullptr && mids_counters->has_operation())
	|| (remote_signalling_counters !=  nullptr && remote_signalling_counters->has_operation())
	|| (signalling_summary !=  nullptr && signalling_summary->has_operation())
	|| (signallings !=  nullptr && signallings->has_operation())
	|| (tails_counters !=  nullptr && tails_counters->has_operation());
}

std::string MplsTeStandby::SignallingCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-counters";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head-signalling-counters")
    {
        if(head_signalling_counters == nullptr)
        {
            head_signalling_counters = std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters>();
        }
        return head_signalling_counters;
    }

    if(child_yang_name == "heads-counters")
    {
        if(heads_counters == nullptr)
        {
            heads_counters = std::make_shared<MplsTeStandby::SignallingCounters::HeadsCounters>();
        }
        return heads_counters;
    }

    if(child_yang_name == "issu")
    {
        if(issu == nullptr)
        {
            issu = std::make_shared<MplsTeStandby::SignallingCounters::Issu>();
        }
        return issu;
    }

    if(child_yang_name == "mids-counters")
    {
        if(mids_counters == nullptr)
        {
            mids_counters = std::make_shared<MplsTeStandby::SignallingCounters::MidsCounters>();
        }
        return mids_counters;
    }

    if(child_yang_name == "remote-signalling-counters")
    {
        if(remote_signalling_counters == nullptr)
        {
            remote_signalling_counters = std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters>();
        }
        return remote_signalling_counters;
    }

    if(child_yang_name == "signalling-summary")
    {
        if(signalling_summary == nullptr)
        {
            signalling_summary = std::make_shared<MplsTeStandby::SignallingCounters::SignallingSummary>();
        }
        return signalling_summary;
    }

    if(child_yang_name == "signallings")
    {
        if(signallings == nullptr)
        {
            signallings = std::make_shared<MplsTeStandby::SignallingCounters::Signallings>();
        }
        return signallings;
    }

    if(child_yang_name == "tails-counters")
    {
        if(tails_counters == nullptr)
        {
            tails_counters = std::make_shared<MplsTeStandby::SignallingCounters::TailsCounters>();
        }
        return tails_counters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(head_signalling_counters != nullptr)
    {
        children["head-signalling-counters"] = head_signalling_counters;
    }

    if(heads_counters != nullptr)
    {
        children["heads-counters"] = heads_counters;
    }

    if(issu != nullptr)
    {
        children["issu"] = issu;
    }

    if(mids_counters != nullptr)
    {
        children["mids-counters"] = mids_counters;
    }

    if(remote_signalling_counters != nullptr)
    {
        children["remote-signalling-counters"] = remote_signalling_counters;
    }

    if(signalling_summary != nullptr)
    {
        children["signalling-summary"] = signalling_summary;
    }

    if(signallings != nullptr)
    {
        children["signallings"] = signallings;
    }

    if(tails_counters != nullptr)
    {
        children["tails-counters"] = tails_counters;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::SignallingCounters::Issu::Issu()
    :
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"},
    last_idt_states{YType::uint32, "last-idt-states"},
    role{YType::enumeration, "role"},
    total_deletions{YType::uint32, "total-deletions"},
    total_id_ts{YType::uint32, "total-id-ts"},
    total_nac_ks{YType::uint64, "total-nac-ks"},
    total_states{YType::uint32, "total-states"}
{
    yang_name = "issu"; yang_parent_name = "signalling-counters";
}

MplsTeStandby::SignallingCounters::Issu::~Issu()
{
}

bool MplsTeStandby::SignallingCounters::Issu::has_data() const
{
    return last_cleared_timestamp.is_set
	|| last_idt_states.is_set
	|| role.is_set
	|| total_deletions.is_set
	|| total_id_ts.is_set
	|| total_nac_ks.is_set
	|| total_states.is_set;
}

bool MplsTeStandby::SignallingCounters::Issu::has_operation() const
{
    return is_set(operation)
	|| is_set(last_cleared_timestamp.operation)
	|| is_set(last_idt_states.operation)
	|| is_set(role.operation)
	|| is_set(total_deletions.operation)
	|| is_set(total_id_ts.operation)
	|| is_set(total_nac_ks.operation)
	|| is_set(total_states.operation);
}

std::string MplsTeStandby::SignallingCounters::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::Issu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.operation)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());
    if (last_idt_states.is_set || is_set(last_idt_states.operation)) leaf_name_data.push_back(last_idt_states.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());
    if (total_deletions.is_set || is_set(total_deletions.operation)) leaf_name_data.push_back(total_deletions.get_name_leafdata());
    if (total_id_ts.is_set || is_set(total_id_ts.operation)) leaf_name_data.push_back(total_id_ts.get_name_leafdata());
    if (total_nac_ks.is_set || is_set(total_nac_ks.operation)) leaf_name_data.push_back(total_nac_ks.get_name_leafdata());
    if (total_states.is_set || is_set(total_states.operation)) leaf_name_data.push_back(total_states.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Issu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::SignallingCounters::Issu::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
    if(value_path == "total-deletions")
    {
        total_deletions = value;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts = value;
    }
    if(value_path == "total-nac-ks")
    {
        total_nac_ks = value;
    }
    if(value_path == "total-states")
    {
        total_states = value;
    }
}

MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounters()
{
    yang_name = "heads-counters"; yang_parent_name = "signalling-counters";
}

MplsTeStandby::SignallingCounters::HeadsCounters::~HeadsCounters()
{
}

bool MplsTeStandby::SignallingCounters::HeadsCounters::has_data() const
{
    for (std::size_t index=0; index<heads_counter.size(); index++)
    {
        if(heads_counter[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::SignallingCounters::HeadsCounters::has_operation() const
{
    for (std::size_t index=0; index<heads_counter.size(); index++)
    {
        if(heads_counter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::SignallingCounters::HeadsCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "heads-counters";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::HeadsCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::HeadsCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "heads-counter")
    {
        for(auto const & c : heads_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter>();
        c->parent = this;
        heads_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::HeadsCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : heads_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::HeadsCounters::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::HeadsCounter()
    :
    tunnel_id{YType::int32, "tunnel-id"},
    lsp_id{YType::uint16, "lsp-id"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_sig_name{YType::str, "tunnel-sig-name"}
    	,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::Statistics>())
{
    statistics->parent = this;

    yang_name = "heads-counter"; yang_parent_name = "heads-counters";
}

MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::~HeadsCounter()
{
}

bool MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::has_data() const
{
    for (std::size_t index=0; index<destination_statistic.size(); index++)
    {
        if(destination_statistic[index]->has_data())
            return true;
    }
    return tunnel_id.is_set
	|| lsp_id.is_set
	|| tunnel_name.is_set
	|| tunnel_sig_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::has_operation() const
{
    for (std::size_t index=0; index<destination_statistic.size(); index++)
    {
        if(destination_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(tunnel_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(tunnel_name.operation)
	|| is_set(tunnel_sig_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "heads-counter" <<"[tunnel-id='" <<tunnel_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/heads-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_sig_name.is_set || is_set(tunnel_sig_name.operation)) leaf_name_data.push_back(tunnel_sig_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-statistic")
    {
        for(auto const & c : destination_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic>();
        c->parent = this;
        destination_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : destination_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name = value;
    }
}

MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "heads-counter";
}

MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::DestinationStatistic()
    :
    destination_address{YType::str, "destination-address"}
    	,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "destination-statistic"; yang_parent_name = "heads-counter";
}

MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::~DestinationStatistic()
{
}

bool MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::has_data() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-statistic";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationStatistic' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-statistic")
    {
        for(auto const & c : s2l_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic>();
        c->parent = this;
        s2l_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : s2l_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
}

MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "destination-statistic";
}

MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::S2LStatistic()
    :
    destination_address{YType::str, "destination-address"},
    sub_group_id{YType::uint16, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"}
    	,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "destination-statistic";
}

MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::~S2LStatistic()
{
}

bool MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::has_data() const
{
    return destination_address.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_originator.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2LStatistic' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.operation)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
    }
}

MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "s2l-statistic";
}

MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::SignallingCounters::HeadsCounters::HeadsCounter::DestinationStatistic::S2LStatistic::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTeStandby::SignallingCounters::MidsCounters::MidsCounters()
{
    yang_name = "mids-counters"; yang_parent_name = "signalling-counters";
}

MplsTeStandby::SignallingCounters::MidsCounters::~MidsCounters()
{
}

bool MplsTeStandby::SignallingCounters::MidsCounters::has_data() const
{
    for (std::size_t index=0; index<mids_counter.size(); index++)
    {
        if(mids_counter[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::SignallingCounters::MidsCounters::has_operation() const
{
    for (std::size_t index=0; index<mids_counter.size(); index++)
    {
        if(mids_counter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::SignallingCounters::MidsCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mids-counters";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::MidsCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::MidsCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mids-counter")
    {
        for(auto const & c : mids_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter>();
        c->parent = this;
        mids_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::MidsCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mids_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::MidsCounters::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::MidsCounter()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::int32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsp_id{YType::int32, "lsp-id"},
    tunnel_name{YType::str, "tunnel-name"}
    	,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::Statistics>())
{
    statistics->parent = this;

    yang_name = "mids-counter"; yang_parent_name = "mids-counters";
}

MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::~MidsCounter()
{
}

bool MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::has_data() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return source_address.is_set
	|| destination_address.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| lsp_id.is_set
	|| tunnel_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(destination_address.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(tunnel_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mids-counter" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[tunnel-id='" <<tunnel_id <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[lsp-id='" <<lsp_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/mids-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-statistic")
    {
        for(auto const & c : s2l_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic>();
        c->parent = this;
        s2l_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : s2l_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "mids-counter";
}

MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::S2LStatistic()
    :
    destination_address{YType::str, "destination-address"},
    sub_group_id{YType::uint16, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"}
    	,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "mids-counter";
}

MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::~S2LStatistic()
{
}

bool MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::has_data() const
{
    return destination_address.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_originator.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2LStatistic' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.operation)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
    }
}

MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "s2l-statistic";
}

MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::SignallingCounters::MidsCounters::MidsCounter::S2LStatistic::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounters()
{
    yang_name = "head-signalling-counters"; yang_parent_name = "signalling-counters";
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::~HeadSignallingCounters()
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::has_data() const
{
    for (std::size_t index=0; index<head_signalling_counter.size(); index++)
    {
        if(head_signalling_counter[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::has_operation() const
{
    for (std::size_t index=0; index<head_signalling_counter.size(); index++)
    {
        if(head_signalling_counter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-signalling-counters";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::HeadSignallingCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::HeadSignallingCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head-signalling-counter")
    {
        for(auto const & c : head_signalling_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter>();
        c->parent = this;
        head_signalling_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::HeadSignallingCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : head_signalling_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::HeadSignallingCounter()
    :
    ctype{YType::enumeration, "ctype"},
    tunnel_id{YType::int32, "tunnel-id"},
    lsp_id{YType::uint16, "lsp-id"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_sig_name{YType::str, "tunnel-sig-name"}
    	,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics>())
{
    statistics->parent = this;

    yang_name = "head-signalling-counter"; yang_parent_name = "head-signalling-counters";
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::~HeadSignallingCounter()
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::has_data() const
{
    for (std::size_t index=0; index<destination_statistic.size(); index++)
    {
        if(destination_statistic[index]->has_data())
            return true;
    }
    return ctype.is_set
	|| tunnel_id.is_set
	|| lsp_id.is_set
	|| tunnel_name.is_set
	|| tunnel_sig_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::has_operation() const
{
    for (std::size_t index=0; index<destination_statistic.size(); index++)
    {
        if(destination_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ctype.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(tunnel_name.operation)
	|| is_set(tunnel_sig_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-signalling-counter" <<"[ctype='" <<ctype <<"']" <<"[tunnel-id='" <<tunnel_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/head-signalling-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.operation)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_sig_name.is_set || is_set(tunnel_sig_name.operation)) leaf_name_data.push_back(tunnel_sig_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-statistic")
    {
        for(auto const & c : destination_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic>();
        c->parent = this;
        destination_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : destination_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ctype")
    {
        ctype = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name = value;
    }
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "head-signalling-counter";
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::DestinationStatistic()
    :
    destination_address{YType::str, "destination-address"}
    	,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "destination-statistic"; yang_parent_name = "head-signalling-counter";
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::~DestinationStatistic()
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::has_data() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-statistic";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationStatistic' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-statistic")
    {
        for(auto const & c : s2l_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic>();
        c->parent = this;
        s2l_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : s2l_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "destination-statistic";
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::S2LStatistic()
    :
    destination_address{YType::str, "destination-address"},
    sub_group_id{YType::uint16, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"}
    	,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "destination-statistic";
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::~S2LStatistic()
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::has_data() const
{
    return destination_address.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_originator.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2LStatistic' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.operation)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
    }
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "s2l-statistic";
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2LStatistic::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounters()
{
    yang_name = "remote-signalling-counters"; yang_parent_name = "signalling-counters";
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::~RemoteSignallingCounters()
{
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::has_data() const
{
    for (std::size_t index=0; index<remote_signalling_counter.size(); index++)
    {
        if(remote_signalling_counter[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::has_operation() const
{
    for (std::size_t index=0; index<remote_signalling_counter.size(); index++)
    {
        if(remote_signalling_counter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::SignallingCounters::RemoteSignallingCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-signalling-counters";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::RemoteSignallingCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-signalling-counter")
    {
        for(auto const & c : remote_signalling_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter>();
        c->parent = this;
        remote_signalling_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : remote_signalling_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::RemoteSignallingCounter()
    :
    ctype{YType::enumeration, "ctype"},
    tunnel_id{YType::int32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::int32, "p2mp-id"},
    lsp_id{YType::int32, "lsp-id"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    sub_group_originator{YType::str, "sub-group-originator"},
    sub_group_id{YType::int32, "sub-group-id"},
    tunnel_name{YType::str, "tunnel-name"}
    	,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics>())
{
    statistics->parent = this;

    yang_name = "remote-signalling-counter"; yang_parent_name = "remote-signalling-counters";
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::~RemoteSignallingCounter()
{
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::has_data() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return ctype.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| lsp_id.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| sub_group_originator.is_set
	|| sub_group_id.is_set
	|| tunnel_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ctype.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(source_address.operation)
	|| is_set(destination_address.operation)
	|| is_set(sub_group_originator.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(tunnel_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-signalling-counter" <<"[ctype='" <<ctype <<"']" <<"[tunnel-id='" <<tunnel_id <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[p2mp-id='" <<p2mp_id <<"']" <<"[lsp-id='" <<lsp_id <<"']" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[sub-group-originator='" <<sub_group_originator <<"']" <<"[sub-group-id='" <<sub_group_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/remote-signalling-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.operation)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.operation)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-statistic")
    {
        for(auto const & c : s2l_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic>();
        c->parent = this;
        s2l_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : s2l_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ctype")
    {
        ctype = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "remote-signalling-counter";
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::S2LStatistic()
    :
    destination_address{YType::str, "destination-address"},
    sub_group_id{YType::uint16, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"}
    	,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "remote-signalling-counter";
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::~S2LStatistic()
{
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::has_data() const
{
    return destination_address.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_originator.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2LStatistic' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.operation)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
    }
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "s2l-statistic";
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2LStatistic::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTeStandby::SignallingCounters::TailsCounters::TailsCounters()
{
    yang_name = "tails-counters"; yang_parent_name = "signalling-counters";
}

MplsTeStandby::SignallingCounters::TailsCounters::~TailsCounters()
{
}

bool MplsTeStandby::SignallingCounters::TailsCounters::has_data() const
{
    for (std::size_t index=0; index<tails_counter.size(); index++)
    {
        if(tails_counter[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::SignallingCounters::TailsCounters::has_operation() const
{
    for (std::size_t index=0; index<tails_counter.size(); index++)
    {
        if(tails_counter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::SignallingCounters::TailsCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tails-counters";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::TailsCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::TailsCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tails-counter")
    {
        for(auto const & c : tails_counter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter>();
        c->parent = this;
        tails_counter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::TailsCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : tails_counter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::TailsCounters::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::TailsCounter()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::int32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsp_id{YType::int32, "lsp-id"},
    tunnel_name{YType::str, "tunnel-name"}
    	,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::Statistics>())
{
    statistics->parent = this;

    yang_name = "tails-counter"; yang_parent_name = "tails-counters";
}

MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::~TailsCounter()
{
}

bool MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::has_data() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return source_address.is_set
	|| destination_address.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| lsp_id.is_set
	|| tunnel_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(source_address.operation)
	|| is_set(destination_address.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(tunnel_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tails-counter" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[tunnel-id='" <<tunnel_id <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[lsp-id='" <<lsp_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/tails-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-statistic")
    {
        for(auto const & c : s2l_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic>();
        c->parent = this;
        s2l_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : s2l_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "tails-counter";
}

MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::S2LStatistic()
    :
    destination_address{YType::str, "destination-address"},
    sub_group_id{YType::uint16, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"}
    	,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "tails-counter";
}

MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::~S2LStatistic()
{
}

bool MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::has_data() const
{
    return destination_address.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_originator.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2LStatistic' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.operation)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
    }
}

MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "s2l-statistic";
}

MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::SignallingCounters::TailsCounters::TailsCounter::S2LStatistic::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTeStandby::SignallingCounters::Signallings::Signallings()
{
    yang_name = "signallings"; yang_parent_name = "signalling-counters";
}

MplsTeStandby::SignallingCounters::Signallings::~Signallings()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::has_data() const
{
    for (std::size_t index=0; index<signalling.size(); index++)
    {
        if(signalling[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::SignallingCounters::Signallings::has_operation() const
{
    for (std::size_t index=0; index<signalling.size(); index++)
    {
        if(signalling[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::SignallingCounters::Signallings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signallings";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::Signallings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signalling")
    {
        for(auto const & c : signalling)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling>();
        c->parent = this;
        signalling.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : signalling)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::Signalling()
    :
    ctype{YType::enumeration, "ctype"},
    tunnel_id{YType::int32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::int32, "p2mp-id"},
    lsp_id{YType::int32, "lsp-id"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    sub_group_originator{YType::str, "sub-group-originator"},
    sub_group_id{YType::int32, "sub-group-id"}
    	,
    te_signalling_filter_data(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData>())
{
    te_signalling_filter_data->parent = this;

    yang_name = "signalling"; yang_parent_name = "signallings";
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::~Signalling()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::has_data() const
{
    return ctype.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| p2mp_id.is_set
	|| lsp_id.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| sub_group_originator.is_set
	|| sub_group_id.is_set
	|| (te_signalling_filter_data !=  nullptr && te_signalling_filter_data->has_data());
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::has_operation() const
{
    return is_set(operation)
	|| is_set(ctype.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(lsp_id.operation)
	|| is_set(source_address.operation)
	|| is_set(destination_address.operation)
	|| is_set(sub_group_originator.operation)
	|| is_set(sub_group_id.operation)
	|| (te_signalling_filter_data !=  nullptr && te_signalling_filter_data->has_operation());
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling" <<"[ctype='" <<ctype <<"']" <<"[tunnel-id='" <<tunnel_id <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[p2mp-id='" <<p2mp_id <<"']" <<"[lsp-id='" <<lsp_id <<"']" <<"[source-address='" <<source_address <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[sub-group-originator='" <<sub_group_originator <<"']" <<"[sub-group-id='" <<sub_group_id <<"']";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::Signallings::Signalling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/signallings/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.operation)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.operation)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-signalling-filter-data")
    {
        if(te_signalling_filter_data == nullptr)
        {
            te_signalling_filter_data = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData>();
        }
        return te_signalling_filter_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(te_signalling_filter_data != nullptr)
    {
        children["te-signalling-filter-data"] = te_signalling_filter_data;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ctype")
    {
        ctype = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterData()
    :
    statistics_filter{YType::enumeration, "statistics-filter"}
    	,
    te_signalling_filter_lsp(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp>())
	,te_signalling_filter_vif(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif>())
{
    te_signalling_filter_lsp->parent = this;

    te_signalling_filter_vif->parent = this;

    yang_name = "te-signalling-filter-data"; yang_parent_name = "signalling";
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::~TeSignallingFilterData()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::has_data() const
{
    return statistics_filter.is_set
	|| (te_signalling_filter_lsp !=  nullptr && te_signalling_filter_lsp->has_data())
	|| (te_signalling_filter_vif !=  nullptr && te_signalling_filter_vif->has_data());
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::has_operation() const
{
    return is_set(operation)
	|| is_set(statistics_filter.operation)
	|| (te_signalling_filter_lsp !=  nullptr && te_signalling_filter_lsp->has_operation())
	|| (te_signalling_filter_vif !=  nullptr && te_signalling_filter_vif->has_operation());
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-signalling-filter-data";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeSignallingFilterData' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (statistics_filter.is_set || is_set(statistics_filter.operation)) leaf_name_data.push_back(statistics_filter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-signalling-filter-lsp")
    {
        if(te_signalling_filter_lsp == nullptr)
        {
            te_signalling_filter_lsp = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp>();
        }
        return te_signalling_filter_lsp;
    }

    if(child_yang_name == "te-signalling-filter-vif")
    {
        if(te_signalling_filter_vif == nullptr)
        {
            te_signalling_filter_vif = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif>();
        }
        return te_signalling_filter_vif;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(te_signalling_filter_lsp != nullptr)
    {
        children["te-signalling-filter-lsp"] = te_signalling_filter_lsp;
    }

    if(te_signalling_filter_vif != nullptr)
    {
        children["te-signalling-filter-vif"] = te_signalling_filter_vif;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "statistics-filter")
    {
        statistics_filter = value;
    }
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::TeSignallingFilterVif()
    :
    lsp_id{YType::uint16, "lsp-id"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_sig_name{YType::str, "tunnel-sig-name"}
    	,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics>())
{
    statistics->parent = this;

    yang_name = "te-signalling-filter-vif"; yang_parent_name = "te-signalling-filter-data";
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::~TeSignallingFilterVif()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::has_data() const
{
    for (std::size_t index=0; index<destination_statistic.size(); index++)
    {
        if(destination_statistic[index]->has_data())
            return true;
    }
    return lsp_id.is_set
	|| tunnel_name.is_set
	|| tunnel_sig_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::has_operation() const
{
    for (std::size_t index=0; index<destination_statistic.size(); index++)
    {
        if(destination_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(lsp_id.operation)
	|| is_set(tunnel_name.operation)
	|| is_set(tunnel_sig_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-signalling-filter-vif";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeSignallingFilterVif' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_sig_name.is_set || is_set(tunnel_sig_name.operation)) leaf_name_data.push_back(tunnel_sig_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "destination-statistic")
    {
        for(auto const & c : destination_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic>();
        c->parent = this;
        destination_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : destination_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name = value;
    }
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "te-signalling-filter-vif";
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::DestinationStatistic()
    :
    destination_address{YType::str, "destination-address"}
    	,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "destination-statistic"; yang_parent_name = "te-signalling-filter-vif";
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::~DestinationStatistic()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::has_data() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-statistic";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationStatistic' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-statistic")
    {
        for(auto const & c : s2l_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic>();
        c->parent = this;
        s2l_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : s2l_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "destination-statistic";
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::S2LStatistic()
    :
    destination_address{YType::str, "destination-address"},
    sub_group_id{YType::uint16, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"}
    	,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "destination-statistic";
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::~S2LStatistic()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::has_data() const
{
    return destination_address.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_originator.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2LStatistic' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.operation)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
    }
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "s2l-statistic";
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2LStatistic::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::TeSignallingFilterLsp()
    :
    tunnel_name{YType::str, "tunnel-name"}
    	,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics>())
{
    statistics->parent = this;

    yang_name = "te-signalling-filter-lsp"; yang_parent_name = "te-signalling-filter-data";
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::~TeSignallingFilterLsp()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::has_data() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return tunnel_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.size(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(tunnel_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-signalling-filter-lsp";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeSignallingFilterLsp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "s2l-statistic")
    {
        for(auto const & c : s2l_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic>();
        c->parent = this;
        s2l_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : s2l_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "te-signalling-filter-lsp";
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::S2LStatistic()
    :
    destination_address{YType::str, "destination-address"},
    sub_group_id{YType::uint16, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"}
    	,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "te-signalling-filter-lsp";
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::~S2LStatistic()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::has_data() const
{
    return destination_address.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(sub_group_id.operation)
	|| is_set(sub_group_originator.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'S2LStatistic' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.operation)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.operation)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
    }
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::Statistics()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "statistics"; yang_parent_name = "s2l-statistic";
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2LStatistic::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTeStandby::SignallingCounters::SignallingSummary::SignallingSummary()
    :
    events_count{YType::uint32, "events-count"},
    events_total_count{YType::uint32, "events-total-count"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"}
{
    yang_name = "signalling-summary"; yang_parent_name = "signalling-counters";
}

MplsTeStandby::SignallingCounters::SignallingSummary::~SignallingSummary()
{
}

bool MplsTeStandby::SignallingCounters::SignallingSummary::has_data() const
{
    return events_count.is_set
	|| events_total_count.is_set
	|| rx_backup_assign_err_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_change_event.is_set
	|| rx_path_create_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| tx_backup_assign_event.is_set
	|| tx_event_unknown.is_set
	|| tx_path_change_event.is_set
	|| tx_path_create_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set;
}

bool MplsTeStandby::SignallingCounters::SignallingSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(events_count.operation)
	|| is_set(events_total_count.operation)
	|| is_set(rx_backup_assign_err_event.operation)
	|| is_set(rx_event_unknown.operation)
	|| is_set(rx_path_change_event.operation)
	|| is_set(rx_path_create_event.operation)
	|| is_set(rx_path_delete_event.operation)
	|| is_set(rx_path_error_event.operation)
	|| is_set(rx_path_reeval_query_event.operation)
	|| is_set(rx_resv_change_event.operation)
	|| is_set(rx_resv_create_event.operation)
	|| is_set(rx_resv_delete_event.operation)
	|| is_set(rx_resv_error_event.operation)
	|| is_set(tx_backup_assign_event.operation)
	|| is_set(tx_event_unknown.operation)
	|| is_set(tx_path_change_event.operation)
	|| is_set(tx_path_create_event.operation)
	|| is_set(tx_path_delete_event.operation)
	|| is_set(tx_path_error_event.operation)
	|| is_set(tx_path_reeval_query_event.operation)
	|| is_set(tx_resv_change_event.operation)
	|| is_set(tx_resv_create_event.operation)
	|| is_set(tx_resv_delete_event.operation)
	|| is_set(tx_resv_error_event.operation);
}

std::string MplsTeStandby::SignallingCounters::SignallingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-summary";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::SignallingCounters::SignallingSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (events_count.is_set || is_set(events_count.operation)) leaf_name_data.push_back(events_count.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.operation)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.operation)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.operation)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.operation)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.operation)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.operation)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.operation)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.operation)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.operation)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.operation)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.operation)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.operation)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.operation)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (tx_event_unknown.is_set || is_set(tx_event_unknown.operation)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.operation)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.operation)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.operation)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.operation)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.operation)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.operation)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.operation)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.operation)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.operation)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::SignallingCounters::SignallingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::SignallingCounters::SignallingSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::SignallingCounters::SignallingSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "events-count")
    {
        events_count = value;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
    }
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
    }
}

MplsTeStandby::DiffServTeClasses::DiffServTeClasses()
{
    yang_name = "diff-serv-te-classes"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::DiffServTeClasses::~DiffServTeClasses()
{
}

bool MplsTeStandby::DiffServTeClasses::has_data() const
{
    for (std::size_t index=0; index<te_class.size(); index++)
    {
        if(te_class[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::DiffServTeClasses::has_operation() const
{
    for (std::size_t index=0; index<te_class.size(); index++)
    {
        if(te_class[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsTeStandby::DiffServTeClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diff-serv-te-classes";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::DiffServTeClasses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::DiffServTeClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-class")
    {
        for(auto const & c : te_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::DiffServTeClasses::TeClass>();
        c->parent = this;
        te_class.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::DiffServTeClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : te_class)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::DiffServTeClasses::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::DiffServTeClasses::TeClass::TeClass()
    :
    class_number{YType::uint8, "class-number"},
    class_status{YType::enumeration, "class-status"},
    class_type{YType::uint8, "class-type"},
    priority{YType::uint8, "priority"}
{
    yang_name = "te-class"; yang_parent_name = "diff-serv-te-classes";
}

MplsTeStandby::DiffServTeClasses::TeClass::~TeClass()
{
}

bool MplsTeStandby::DiffServTeClasses::TeClass::has_data() const
{
    return class_number.is_set
	|| class_status.is_set
	|| class_type.is_set
	|| priority.is_set;
}

bool MplsTeStandby::DiffServTeClasses::TeClass::has_operation() const
{
    return is_set(operation)
	|| is_set(class_number.operation)
	|| is_set(class_status.operation)
	|| is_set(class_type.operation)
	|| is_set(priority.operation);
}

std::string MplsTeStandby::DiffServTeClasses::TeClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-class";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::DiffServTeClasses::TeClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/diff-serv-te-classes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_number.is_set || is_set(class_number.operation)) leaf_name_data.push_back(class_number.get_name_leafdata());
    if (class_status.is_set || is_set(class_status.operation)) leaf_name_data.push_back(class_status.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.operation)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::DiffServTeClasses::TeClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::DiffServTeClasses::TeClass::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::DiffServTeClasses::TeClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-number")
    {
        class_number = value;
    }
    if(value_path == "class-status")
    {
        class_status = value;
    }
    if(value_path == "class-type")
    {
        class_type = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

MplsTeStandby::Issu::Issu()
    :
    detail(std::make_shared<MplsTeStandby::Issu::Detail>())
	,status(std::make_shared<MplsTeStandby::Issu::Status>())
{
    detail->parent = this;

    status->parent = this;

    yang_name = "issu"; yang_parent_name = "mpls-te-standby";
}

MplsTeStandby::Issu::~Issu()
{
}

bool MplsTeStandby::Issu::has_data() const
{
    return (detail !=  nullptr && detail->has_data())
	|| (status !=  nullptr && status->has_data());
}

bool MplsTeStandby::Issu::has_operation() const
{
    return is_set(operation)
	|| (detail !=  nullptr && detail->has_operation())
	|| (status !=  nullptr && status->has_operation());
}

std::string MplsTeStandby::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Issu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<MplsTeStandby::Issu::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<MplsTeStandby::Issu::Status>();
        }
        return status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    if(status != nullptr)
    {
        children["status"] = status;
    }

    return children;
}

void MplsTeStandby::Issu::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::Issu::Status::Status()
    :
    role{YType::enumeration, "role"}
    	,
    sync_status_information(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation>())
{
    sync_status_information->parent = this;

    yang_name = "status"; yang_parent_name = "issu";
}

MplsTeStandby::Issu::Status::~Status()
{
}

bool MplsTeStandby::Issu::Status::has_data() const
{
    return role.is_set
	|| (sync_status_information !=  nullptr && sync_status_information->has_data());
}

bool MplsTeStandby::Issu::Status::has_operation() const
{
    return is_set(operation)
	|| is_set(role.operation)
	|| (sync_status_information !=  nullptr && sync_status_information->has_operation());
}

std::string MplsTeStandby::Issu::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Issu::Status::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync-status-information")
    {
        if(sync_status_information == nullptr)
        {
            sync_status_information = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation>();
        }
        return sync_status_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sync_status_information != nullptr)
    {
        children["sync-status-information"] = sync_status_information;
    }

    return children;
}

void MplsTeStandby::Issu::Status::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "role")
    {
        role = value;
    }
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SyncStatusInformation()
    :
    sync_show_type{YType::enumeration, "sync-show-type"}
    	,
    master_sync_information(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation>())
	,slave_sync_information(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation>())
{
    master_sync_information->parent = this;

    slave_sync_information->parent = this;

    yang_name = "sync-status-information"; yang_parent_name = "status";
}

MplsTeStandby::Issu::Status::SyncStatusInformation::~SyncStatusInformation()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::has_data() const
{
    return sync_show_type.is_set
	|| (master_sync_information !=  nullptr && master_sync_information->has_data())
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_data());
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(sync_show_type.operation)
	|| (master_sync_information !=  nullptr && master_sync_information->has_operation())
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_operation());
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-status-information";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Issu::Status::SyncStatusInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_show_type.is_set || is_set(sync_show_type.operation)) leaf_name_data.push_back(sync_show_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "master-sync-information")
    {
        if(master_sync_information == nullptr)
        {
            master_sync_information = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation>();
        }
        return master_sync_information;
    }

    if(child_yang_name == "slave-sync-information")
    {
        if(slave_sync_information == nullptr)
        {
            slave_sync_information = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation>();
        }
        return slave_sync_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(master_sync_information != nullptr)
    {
        children["master-sync-information"] = master_sync_information;
    }

    if(slave_sync_information != nullptr)
    {
        children["slave-sync-information"] = slave_sync_information;
    }

    return children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type = value;
    }
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::SlaveSyncInformation()
    :
    insync_sub_ls_ps{YType::uint32, "insync-sub-ls-ps"},
    insync_tunnels{YType::uint32, "insync-tunnels"},
    pending_sub_ls_ps{YType::uint32, "pending-sub-ls-ps"},
    pending_tunnels{YType::uint32, "pending-tunnels"}
    	,
    idt(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "slave-sync-information"; yang_parent_name = "sync-status-information";
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::~SlaveSyncInformation()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::has_data() const
{
    for (std::size_t index=0; index<s2l_pending.size(); index++)
    {
        if(s2l_pending[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vif_pending.size(); index++)
    {
        if(vif_pending[index]->has_data())
            return true;
    }
    return insync_sub_ls_ps.is_set
	|| insync_tunnels.is_set
	|| pending_sub_ls_ps.is_set
	|| pending_tunnels.is_set
	|| (idt !=  nullptr && idt->has_data());
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::has_operation() const
{
    for (std::size_t index=0; index<s2l_pending.size(); index++)
    {
        if(s2l_pending[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vif_pending.size(); index++)
    {
        if(vif_pending[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(insync_sub_ls_ps.operation)
	|| is_set(insync_tunnels.operation)
	|| is_set(pending_sub_ls_ps.operation)
	|| is_set(pending_tunnels.operation)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-sync-information";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insync_sub_ls_ps.is_set || is_set(insync_sub_ls_ps.operation)) leaf_name_data.push_back(insync_sub_ls_ps.get_name_leafdata());
    if (insync_tunnels.is_set || is_set(insync_tunnels.operation)) leaf_name_data.push_back(insync_tunnels.get_name_leafdata());
    if (pending_sub_ls_ps.is_set || is_set(pending_sub_ls_ps.operation)) leaf_name_data.push_back(pending_sub_ls_ps.get_name_leafdata());
    if (pending_tunnels.is_set || is_set(pending_tunnels.operation)) leaf_name_data.push_back(pending_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt>();
        }
        return idt;
    }

    if(child_yang_name == "s2l-pending")
    {
        for(auto const & c : s2l_pending)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending>();
        c->parent = this;
        s2l_pending.push_back(c);
        return c;
    }

    if(child_yang_name == "vif-pending")
    {
        for(auto const & c : vif_pending)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending>();
        c->parent = this;
        vif_pending.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt != nullptr)
    {
        children["idt"] = idt;
    }

    for (auto const & c : s2l_pending)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vif_pending)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps = value;
    }
    if(value_path == "insync-tunnels")
    {
        insync_tunnels = value;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps = value;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels = value;
    }
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;

    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "slave-sync-information";
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::~Idt()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_operation() const
{
    return is_set(operation)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/slave-sync-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(current_idt_info != nullptr)
    {
        children["current-idt-info"] = current_idt_info;
    }

    if(previous_idt_status != nullptr)
    {
        children["previous-idt-status"] = previous_idt_status;
    }

    return children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "current-idt-info"; yang_parent_name = "idt";
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(is_ready_status.operation)
	|| is_set(reason.operation)
	|| is_set(withdraw_time.operation);
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.operation)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "previous-idt-status"; yang_parent_name = "idt";
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(is_ready_status.operation)
	|| is_set(reason.operation)
	|| is_set(withdraw_time.operation);
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.operation)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::VifPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    tunnel_name{YType::str, "tunnel-name"}
{
    yang_name = "vif-pending"; yang_parent_name = "slave-sync-information";
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::~VifPending()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_data() const
{
    return pending_reason.is_set
	|| tunnel_name.is_set;
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_operation() const
{
    return is_set(operation)
	|| is_set(pending_reason.operation)
	|| is_set(tunnel_name.operation);
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vif-pending";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/slave-sync-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.operation)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::S2LPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    s2l_role{YType::enumeration, "s2l-role"},
    signaled_name{YType::str, "signaled-name"}
{
    yang_name = "s2l-pending"; yang_parent_name = "slave-sync-information";
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::~S2LPending()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_data() const
{
    return pending_reason.is_set
	|| s2l_role.is_set
	|| signaled_name.is_set;
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::has_operation() const
{
    return is_set(operation)
	|| is_set(pending_reason.operation)
	|| is_set(s2l_role.operation)
	|| is_set(signaled_name.operation);
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-pending";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/slave-sync-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.operation)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (s2l_role.is_set || is_set(s2l_role.operation)) leaf_name_data.push_back(s2l_role.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.operation)) leaf_name_data.push_back(signaled_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2LPending::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
    }
    if(value_path == "s2l-role")
    {
        s2l_role = value;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
    }
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::MasterSyncInformation()
    :
    idt(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "master-sync-information"; yang_parent_name = "sync-status-information";
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::~MasterSyncInformation()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::has_data() const
{
    return (idt !=  nullptr && idt->has_data());
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::has_operation() const
{
    return is_set(operation)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-sync-information";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt>();
        }
        return idt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt != nullptr)
    {
        children["idt"] = idt;
    }

    return children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;

    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "master-sync-information";
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::~Idt()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_operation() const
{
    return is_set(operation)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/master-sync-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(current_idt_info != nullptr)
    {
        children["current-idt-info"] = current_idt_info;
    }

    if(previous_idt_status != nullptr)
    {
        children["previous-idt-status"] = previous_idt_status;
    }

    return children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "current-idt-info"; yang_parent_name = "idt";
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(is_ready_status.operation)
	|| is_set(reason.operation)
	|| is_set(withdraw_time.operation);
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/master-sync-information/idt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.operation)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "previous-idt-status"; yang_parent_name = "idt";
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(is_ready_status.operation)
	|| is_set(reason.operation)
	|| is_set(withdraw_time.operation);
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/master-sync-information/idt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.operation)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}

MplsTeStandby::Issu::Detail::Detail()
    :
    role{YType::enumeration, "role"}
    	,
    sync_status_information(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation>())
{
    sync_status_information->parent = this;

    yang_name = "detail"; yang_parent_name = "issu";
}

MplsTeStandby::Issu::Detail::~Detail()
{
}

bool MplsTeStandby::Issu::Detail::has_data() const
{
    return role.is_set
	|| (sync_status_information !=  nullptr && sync_status_information->has_data());
}

bool MplsTeStandby::Issu::Detail::has_operation() const
{
    return is_set(operation)
	|| is_set(role.operation)
	|| (sync_status_information !=  nullptr && sync_status_information->has_operation());
}

std::string MplsTeStandby::Issu::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Issu::Detail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sync-status-information")
    {
        if(sync_status_information == nullptr)
        {
            sync_status_information = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation>();
        }
        return sync_status_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sync_status_information != nullptr)
    {
        children["sync-status-information"] = sync_status_information;
    }

    return children;
}

void MplsTeStandby::Issu::Detail::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "role")
    {
        role = value;
    }
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SyncStatusInformation()
    :
    sync_show_type{YType::enumeration, "sync-show-type"}
    	,
    master_sync_information(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation>())
	,slave_sync_information(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation>())
{
    master_sync_information->parent = this;

    slave_sync_information->parent = this;

    yang_name = "sync-status-information"; yang_parent_name = "detail";
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::~SyncStatusInformation()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::has_data() const
{
    return sync_show_type.is_set
	|| (master_sync_information !=  nullptr && master_sync_information->has_data())
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_data());
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(sync_show_type.operation)
	|| (master_sync_information !=  nullptr && master_sync_information->has_operation())
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_operation());
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-status-information";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Issu::Detail::SyncStatusInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_show_type.is_set || is_set(sync_show_type.operation)) leaf_name_data.push_back(sync_show_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "master-sync-information")
    {
        if(master_sync_information == nullptr)
        {
            master_sync_information = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation>();
        }
        return master_sync_information;
    }

    if(child_yang_name == "slave-sync-information")
    {
        if(slave_sync_information == nullptr)
        {
            slave_sync_information = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation>();
        }
        return slave_sync_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(master_sync_information != nullptr)
    {
        children["master-sync-information"] = master_sync_information;
    }

    if(slave_sync_information != nullptr)
    {
        children["slave-sync-information"] = slave_sync_information;
    }

    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type = value;
    }
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::SlaveSyncInformation()
    :
    insync_sub_ls_ps{YType::uint32, "insync-sub-ls-ps"},
    insync_tunnels{YType::uint32, "insync-tunnels"},
    pending_sub_ls_ps{YType::uint32, "pending-sub-ls-ps"},
    pending_tunnels{YType::uint32, "pending-tunnels"}
    	,
    idt(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "slave-sync-information"; yang_parent_name = "sync-status-information";
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::~SlaveSyncInformation()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::has_data() const
{
    for (std::size_t index=0; index<s2l_pending.size(); index++)
    {
        if(s2l_pending[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vif_pending.size(); index++)
    {
        if(vif_pending[index]->has_data())
            return true;
    }
    return insync_sub_ls_ps.is_set
	|| insync_tunnels.is_set
	|| pending_sub_ls_ps.is_set
	|| pending_tunnels.is_set
	|| (idt !=  nullptr && idt->has_data());
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::has_operation() const
{
    for (std::size_t index=0; index<s2l_pending.size(); index++)
    {
        if(s2l_pending[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vif_pending.size(); index++)
    {
        if(vif_pending[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(insync_sub_ls_ps.operation)
	|| is_set(insync_tunnels.operation)
	|| is_set(pending_sub_ls_ps.operation)
	|| is_set(pending_tunnels.operation)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-sync-information";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insync_sub_ls_ps.is_set || is_set(insync_sub_ls_ps.operation)) leaf_name_data.push_back(insync_sub_ls_ps.get_name_leafdata());
    if (insync_tunnels.is_set || is_set(insync_tunnels.operation)) leaf_name_data.push_back(insync_tunnels.get_name_leafdata());
    if (pending_sub_ls_ps.is_set || is_set(pending_sub_ls_ps.operation)) leaf_name_data.push_back(pending_sub_ls_ps.get_name_leafdata());
    if (pending_tunnels.is_set || is_set(pending_tunnels.operation)) leaf_name_data.push_back(pending_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt>();
        }
        return idt;
    }

    if(child_yang_name == "s2l-pending")
    {
        for(auto const & c : s2l_pending)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2LPending>();
        c->parent = this;
        s2l_pending.push_back(c);
        return c;
    }

    if(child_yang_name == "vif-pending")
    {
        for(auto const & c : vif_pending)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending>();
        c->parent = this;
        vif_pending.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(idt != nullptr)
    {
        children["idt"] = idt;
    }

    for (auto const & c : s2l_pending)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : vif_pending)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps = value;
    }
    if(value_path == "insync-tunnels")
    {
        insync_tunnels = value;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps = value;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels = value;
    }
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>())
	,previous_idt_status(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;

    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "slave-sync-information";
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::~Idt()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_data() const
{
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_operation() const
{
    return is_set(operation)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(current_idt_info != nullptr)
    {
        children["current-idt-info"] = current_idt_info;
    }

    if(previous_idt_status != nullptr)
    {
        children["previous-idt-status"] = previous_idt_status;
    }

    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::set_value(const std::string & value_path, std::string value)
{
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    declare_time{YType::uint32, "declare-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    idt_start_time{YType::uint32, "idt-start-time"},
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    withdraw_time{YType::uint32, "withdraw-time"}
{
    yang_name = "current-idt-info"; yang_parent_name = "idt";
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    return declare_time.is_set
	|| idt_end_time.is_set
	|| idt_start_time.is_set
	|| is_ready_status.is_set
	|| reason.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(declare_time.operation)
	|| is_set(idt_end_time.operation)
	|| is_set(idt_start_time.operation)
	|| is_set(is_ready_status.operation)
	|| is_set(reason.operation)
	|| is_set(withdraw_time.operation);
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";

    return path_buffer.str();

}

const EntityPath MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (declare_time.is_set || is_set(declare_time.operation)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.operation)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.operation)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (is_ready_status.is_set || is_set(is_ready_status.operation)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.operation)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "declare-time")
    {
        declare_time = value;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
    }
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
    }
}


}
}

