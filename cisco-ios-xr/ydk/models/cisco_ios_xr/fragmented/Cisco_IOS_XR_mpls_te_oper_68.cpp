
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_68.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_69.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsTeStandby::Topology::PathTunnels::PathTunnel::PathTunnel()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"},
    destination_address_xr{YType::str, "destination-address-xr"},
    is_partial_path{YType::boolean, "is-partial-path"},
    is_full_path{YType::boolean, "is-full-path"},
    is_topology_checked{YType::boolean, "is-topology-checked"},
    is_segment_routing_db_checked{YType::boolean, "is-segment-routing-db-checked"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    bandwidth_type{YType::uint64, "bandwidth-type"},
    mininum_bandwidth{YType::uint64, "mininum-bandwidth"},
    accumulated_admin_weight{YType::uint64, "accumulated-admin-weight"},
    setup_priority_xr{YType::uint32, "setup-priority-xr"},
    hold_priority_xr{YType::uint32, "hold-priority-xr"},
    node_hop_count{YType::uint8, "node-hop-count"},
    exclude_srlg_address{YType::str, "exclude-srlg-address"}
        ,
    affinity(std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity>())
    , hop(this, {})
    , shared_risk_link_group(this, {})
    , sr_segment(this, {})
{
    affinity->parent = this;

    yang_name = "path-tunnel"; yang_parent_name = "path-tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::~PathTunnel()
{
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<hop.len(); index++)
    {
        if(hop[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.len(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_segment.len(); index++)
    {
        if(sr_segment[index]->has_data())
            return true;
    }
    return tunnel_id.is_set
	|| tunnel_name.is_set
	|| tunnel_id_xr.is_set
	|| destination_address_xr.is_set
	|| is_partial_path.is_set
	|| is_full_path.is_set
	|| is_topology_checked.is_set
	|| is_segment_routing_db_checked.is_set
	|| requested_bandwidth.is_set
	|| bandwidth_type.is_set
	|| mininum_bandwidth.is_set
	|| accumulated_admin_weight.is_set
	|| setup_priority_xr.is_set
	|| hold_priority_xr.is_set
	|| node_hop_count.is_set
	|| exclude_srlg_address.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::has_operation() const
{
    for (std::size_t index=0; index<hop.len(); index++)
    {
        if(hop[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.len(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_segment.len(); index++)
    {
        if(sr_segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(is_partial_path.yfilter)
	|| ydk::is_set(is_full_path.yfilter)
	|| ydk::is_set(is_topology_checked.yfilter)
	|| ydk::is_set(is_segment_routing_db_checked.yfilter)
	|| ydk::is_set(requested_bandwidth.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(mininum_bandwidth.yfilter)
	|| ydk::is_set(accumulated_admin_weight.yfilter)
	|| ydk::is_set(setup_priority_xr.yfilter)
	|| ydk::is_set(hold_priority_xr.yfilter)
	|| ydk::is_set(node_hop_count.yfilter)
	|| ydk::is_set(exclude_srlg_address.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/path-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-tunnel";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::PathTunnels::PathTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (is_partial_path.is_set || is_set(is_partial_path.yfilter)) leaf_name_data.push_back(is_partial_path.get_name_leafdata());
    if (is_full_path.is_set || is_set(is_full_path.yfilter)) leaf_name_data.push_back(is_full_path.get_name_leafdata());
    if (is_topology_checked.is_set || is_set(is_topology_checked.yfilter)) leaf_name_data.push_back(is_topology_checked.get_name_leafdata());
    if (is_segment_routing_db_checked.is_set || is_set(is_segment_routing_db_checked.yfilter)) leaf_name_data.push_back(is_segment_routing_db_checked.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.yfilter)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (mininum_bandwidth.is_set || is_set(mininum_bandwidth.yfilter)) leaf_name_data.push_back(mininum_bandwidth.get_name_leafdata());
    if (accumulated_admin_weight.is_set || is_set(accumulated_admin_weight.yfilter)) leaf_name_data.push_back(accumulated_admin_weight.get_name_leafdata());
    if (setup_priority_xr.is_set || is_set(setup_priority_xr.yfilter)) leaf_name_data.push_back(setup_priority_xr.get_name_leafdata());
    if (hold_priority_xr.is_set || is_set(hold_priority_xr.yfilter)) leaf_name_data.push_back(hold_priority_xr.get_name_leafdata());
    if (node_hop_count.is_set || is_set(node_hop_count.yfilter)) leaf_name_data.push_back(node_hop_count.get_name_leafdata());
    if (exclude_srlg_address.is_set || is_set(exclude_srlg_address.yfilter)) leaf_name_data.push_back(exclude_srlg_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Topology::PathTunnels::PathTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "hop")
    {
        auto ent_ = std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop>();
        ent_->parent = this;
        hop.append(ent_);
        return ent_;
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        auto ent_ = std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup>();
        ent_->parent = this;
        shared_risk_link_group.append(ent_);
        return ent_;
    }

    if(child_yang_name == "sr-segment")
    {
        auto ent_ = std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment>();
        ent_->parent = this;
        sr_segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Topology::PathTunnels::PathTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(affinity != nullptr)
    {
        _children["affinity"] = affinity;
    }

    count_ = 0;
    for (auto ent_ : hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : shared_risk_link_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : sr_segment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-path")
    {
        is_partial_path = value;
        is_partial_path.value_namespace = name_space;
        is_partial_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-full-path")
    {
        is_full_path = value;
        is_full_path.value_namespace = name_space;
        is_full_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-topology-checked")
    {
        is_topology_checked = value;
        is_topology_checked.value_namespace = name_space;
        is_topology_checked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-segment-routing-db-checked")
    {
        is_segment_routing_db_checked = value;
        is_segment_routing_db_checked.value_namespace = name_space;
        is_segment_routing_db_checked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
        requested_bandwidth.value_namespace = name_space;
        requested_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mininum-bandwidth")
    {
        mininum_bandwidth = value;
        mininum_bandwidth.value_namespace = name_space;
        mininum_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accumulated-admin-weight")
    {
        accumulated_admin_weight = value;
        accumulated_admin_weight.value_namespace = name_space;
        accumulated_admin_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority-xr")
    {
        setup_priority_xr = value;
        setup_priority_xr.value_namespace = name_space;
        setup_priority_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority-xr")
    {
        hold_priority_xr = value;
        hold_priority_xr.value_namespace = name_space;
        hold_priority_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count = value;
        node_hop_count.value_namespace = name_space;
        node_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-srlg-address")
    {
        exclude_srlg_address = value;
        exclude_srlg_address.value_namespace = name_space;
        exclude_srlg_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "is-partial-path")
    {
        is_partial_path.yfilter = yfilter;
    }
    if(value_path == "is-full-path")
    {
        is_full_path.yfilter = yfilter;
    }
    if(value_path == "is-topology-checked")
    {
        is_topology_checked.yfilter = yfilter;
    }
    if(value_path == "is-segment-routing-db-checked")
    {
        is_segment_routing_db_checked.yfilter = yfilter;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "mininum-bandwidth")
    {
        mininum_bandwidth.yfilter = yfilter;
    }
    if(value_path == "accumulated-admin-weight")
    {
        accumulated_admin_weight.yfilter = yfilter;
    }
    if(value_path == "setup-priority-xr")
    {
        setup_priority_xr.yfilter = yfilter;
    }
    if(value_path == "hold-priority-xr")
    {
        hold_priority_xr.yfilter = yfilter;
    }
    if(value_path == "node-hop-count")
    {
        node_hop_count.yfilter = yfilter;
    }
    if(value_path == "exclude-srlg-address")
    {
        exclude_srlg_address.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "hop" || name == "shared-risk-link-group" || name == "sr-segment" || name == "tunnel-id" || name == "tunnel-name" || name == "tunnel-id-xr" || name == "destination-address-xr" || name == "is-partial-path" || name == "is-full-path" || name == "is-topology-checked" || name == "is-segment-routing-db-checked" || name == "requested-bandwidth" || name == "bandwidth-type" || name == "mininum-bandwidth" || name == "accumulated-admin-weight" || name == "setup-priority-xr" || name == "hold-priority-xr" || name == "node-hop-count" || name == "exclude-srlg-address")
        return true;
    return false;
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "path-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::~Affinity()
{
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/path-tunnels/path-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto ent_ = std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity>();
        ent_->parent = this;
        named_affinity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : named_affinity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/path-tunnels/path-tunnel/affinity/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto ent_ = std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue>();
        ent_->parent = this;
        constraint_extended_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto ent_ = std::make_shared<MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        ent_->parent = this;
        extended_forward_ref_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : constraint_extended_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_forward_ref_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/path-tunnels/path-tunnel/affinity/named-affinity/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/path-tunnels/path-tunnel/affinity/named-affinity/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::Hop()
    :
    entry{YType::str, "entry"}
{

    yang_name = "hop"; yang_parent_name = "path-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::~Hop()
{
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/path-tunnels/path-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hop";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::Hop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{

    yang_name = "shared-risk-link-group"; yang_parent_name = "path-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::has_data() const
{
    if (is_presence_container) return true;
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(shared_risk_group.yfilter)
	|| ydk::is_set(srlg_name.yfilter);
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/path-tunnels/path-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.yfilter)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.yfilter)) leaf_name_data.push_back(srlg_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
        shared_risk_group.value_namespace = name_space;
        shared_risk_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
        srlg_name.value_namespace = name_space;
        srlg_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group.yfilter = yfilter;
    }
    if(value_path == "srlg-name")
    {
        srlg_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::SharedRiskLinkGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "shared-risk-group" || name == "srlg-name")
        return true;
    return false;
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::SrSegment()
    :
    sid_type{YType::enumeration, "sid-type"},
    has_ip_addresses{YType::boolean, "has-ip-addresses"},
    local_addr{YType::str, "local-addr"},
    remote_addr{YType::str, "remote-addr"},
    has_mpls_label{YType::boolean, "has-mpls-label"},
    mpls_label_value{YType::uint32, "mpls-label-value"},
    has_entropy_label{YType::boolean, "has-entropy-label"}
{

    yang_name = "sr-segment"; yang_parent_name = "path-tunnel"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::~SrSegment()
{
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| has_ip_addresses.is_set
	|| local_addr.is_set
	|| remote_addr.is_set
	|| has_mpls_label.is_set
	|| mpls_label_value.is_set
	|| has_entropy_label.is_set;
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(has_ip_addresses.yfilter)
	|| ydk::is_set(local_addr.yfilter)
	|| ydk::is_set(remote_addr.yfilter)
	|| ydk::is_set(has_mpls_label.yfilter)
	|| ydk::is_set(mpls_label_value.yfilter)
	|| ydk::is_set(has_entropy_label.yfilter);
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/topology/path-tunnels/path-tunnel/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-segment";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (has_ip_addresses.is_set || is_set(has_ip_addresses.yfilter)) leaf_name_data.push_back(has_ip_addresses.get_name_leafdata());
    if (local_addr.is_set || is_set(local_addr.yfilter)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.yfilter)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (has_mpls_label.is_set || is_set(has_mpls_label.yfilter)) leaf_name_data.push_back(has_mpls_label.get_name_leafdata());
    if (mpls_label_value.is_set || is_set(mpls_label_value.yfilter)) leaf_name_data.push_back(mpls_label_value.get_name_leafdata());
    if (has_entropy_label.is_set || is_set(has_entropy_label.yfilter)) leaf_name_data.push_back(has_entropy_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses = value;
        has_ip_addresses.value_namespace = name_space;
        has_ip_addresses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-addr")
    {
        local_addr = value;
        local_addr.value_namespace = name_space;
        local_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
        remote_addr.value_namespace = name_space;
        remote_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label = value;
        has_mpls_label.value_namespace = name_space;
        has_mpls_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value = value;
        mpls_label_value.value_namespace = name_space;
        mpls_label_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-entropy-label")
    {
        has_entropy_label = value;
        has_entropy_label.value_namespace = name_space;
        has_entropy_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "has-ip-addresses")
    {
        has_ip_addresses.yfilter = yfilter;
    }
    if(value_path == "local-addr")
    {
        local_addr.yfilter = yfilter;
    }
    if(value_path == "remote-addr")
    {
        remote_addr.yfilter = yfilter;
    }
    if(value_path == "has-mpls-label")
    {
        has_mpls_label.yfilter = yfilter;
    }
    if(value_path == "mpls-label-value")
    {
        mpls_label_value.yfilter = yfilter;
    }
    if(value_path == "has-entropy-label")
    {
        has_entropy_label.yfilter = yfilter;
    }
}

bool MplsTeStandby::Topology::PathTunnels::PathTunnel::SrSegment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-type" || name == "has-ip-addresses" || name == "local-addr" || name == "remote-addr" || name == "has-mpls-label" || name == "mpls-label-value" || name == "has-entropy-label")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::SignallingCounters()
    :
    issu(std::make_shared<MplsTeStandby::SignallingCounters::Issu>())
    , fsm_unexpected_event_stats(std::make_shared<MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats>())
    , head_signalling_counters(std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters>())
    , remote_signalling_counters(std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters>())
    , signallings(std::make_shared<MplsTeStandby::SignallingCounters::Signallings>())
    , signalling_summary(std::make_shared<MplsTeStandby::SignallingCounters::SignallingSummary>())
{
    issu->parent = this;
    fsm_unexpected_event_stats->parent = this;
    head_signalling_counters->parent = this;
    remote_signalling_counters->parent = this;
    signallings->parent = this;
    signalling_summary->parent = this;

    yang_name = "signalling-counters"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::~SignallingCounters()
{
}

bool MplsTeStandby::SignallingCounters::has_data() const
{
    if (is_presence_container) return true;
    return (issu !=  nullptr && issu->has_data())
	|| (fsm_unexpected_event_stats !=  nullptr && fsm_unexpected_event_stats->has_data())
	|| (head_signalling_counters !=  nullptr && head_signalling_counters->has_data())
	|| (remote_signalling_counters !=  nullptr && remote_signalling_counters->has_data())
	|| (signallings !=  nullptr && signallings->has_data())
	|| (signalling_summary !=  nullptr && signalling_summary->has_data());
}

bool MplsTeStandby::SignallingCounters::has_operation() const
{
    return is_set(yfilter)
	|| (issu !=  nullptr && issu->has_operation())
	|| (fsm_unexpected_event_stats !=  nullptr && fsm_unexpected_event_stats->has_operation())
	|| (head_signalling_counters !=  nullptr && head_signalling_counters->has_operation())
	|| (remote_signalling_counters !=  nullptr && remote_signalling_counters->has_operation())
	|| (signallings !=  nullptr && signallings->has_operation())
	|| (signalling_summary !=  nullptr && signalling_summary->has_operation());
}

std::string MplsTeStandby::SignallingCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "issu")
    {
        if(issu == nullptr)
        {
            issu = std::make_shared<MplsTeStandby::SignallingCounters::Issu>();
        }
        return issu;
    }

    if(child_yang_name == "fsm-unexpected-event-stats")
    {
        if(fsm_unexpected_event_stats == nullptr)
        {
            fsm_unexpected_event_stats = std::make_shared<MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats>();
        }
        return fsm_unexpected_event_stats;
    }

    if(child_yang_name == "head-signalling-counters")
    {
        if(head_signalling_counters == nullptr)
        {
            head_signalling_counters = std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters>();
        }
        return head_signalling_counters;
    }

    if(child_yang_name == "remote-signalling-counters")
    {
        if(remote_signalling_counters == nullptr)
        {
            remote_signalling_counters = std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters>();
        }
        return remote_signalling_counters;
    }

    if(child_yang_name == "signallings")
    {
        if(signallings == nullptr)
        {
            signallings = std::make_shared<MplsTeStandby::SignallingCounters::Signallings>();
        }
        return signallings;
    }

    if(child_yang_name == "signalling-summary")
    {
        if(signalling_summary == nullptr)
        {
            signalling_summary = std::make_shared<MplsTeStandby::SignallingCounters::SignallingSummary>();
        }
        return signalling_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(issu != nullptr)
    {
        _children["issu"] = issu;
    }

    if(fsm_unexpected_event_stats != nullptr)
    {
        _children["fsm-unexpected-event-stats"] = fsm_unexpected_event_stats;
    }

    if(head_signalling_counters != nullptr)
    {
        _children["head-signalling-counters"] = head_signalling_counters;
    }

    if(remote_signalling_counters != nullptr)
    {
        _children["remote-signalling-counters"] = remote_signalling_counters;
    }

    if(signallings != nullptr)
    {
        _children["signallings"] = signallings;
    }

    if(signalling_summary != nullptr)
    {
        _children["signalling-summary"] = signalling_summary;
    }

    return _children;
}

void MplsTeStandby::SignallingCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::SignallingCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::SignallingCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "issu" || name == "fsm-unexpected-event-stats" || name == "head-signalling-counters" || name == "remote-signalling-counters" || name == "signallings" || name == "signalling-summary")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Issu::Issu()
    :
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"},
    role{YType::enumeration, "role"},
    last_idt_states{YType::uint32, "last-idt-states"},
    total_states{YType::uint32, "total-states"},
    total_deletions{YType::uint32, "total-deletions"},
    total_nac_ks{YType::uint64, "total-nac-ks"},
    total_id_ts{YType::uint32, "total-id-ts"}
{

    yang_name = "issu"; yang_parent_name = "signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::Issu::~Issu()
{
}

bool MplsTeStandby::SignallingCounters::Issu::has_data() const
{
    if (is_presence_container) return true;
    return last_cleared_timestamp.is_set
	|| role.is_set
	|| last_idt_states.is_set
	|| total_states.is_set
	|| total_deletions.is_set
	|| total_nac_ks.is_set
	|| total_id_ts.is_set;
}

bool MplsTeStandby::SignallingCounters::Issu::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_cleared_timestamp.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(last_idt_states.yfilter)
	|| ydk::is_set(total_states.yfilter)
	|| ydk::is_set(total_deletions.yfilter)
	|| ydk::is_set(total_nac_ks.yfilter)
	|| ydk::is_set(total_id_ts.yfilter);
}

std::string MplsTeStandby::SignallingCounters::Issu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Issu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.yfilter)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (last_idt_states.is_set || is_set(last_idt_states.yfilter)) leaf_name_data.push_back(last_idt_states.get_name_leafdata());
    if (total_states.is_set || is_set(total_states.yfilter)) leaf_name_data.push_back(total_states.get_name_leafdata());
    if (total_deletions.is_set || is_set(total_deletions.yfilter)) leaf_name_data.push_back(total_deletions.get_name_leafdata());
    if (total_nac_ks.is_set || is_set(total_nac_ks.yfilter)) leaf_name_data.push_back(total_nac_ks.get_name_leafdata());
    if (total_id_ts.is_set || is_set(total_id_ts.yfilter)) leaf_name_data.push_back(total_id_ts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::Issu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::SignallingCounters::Issu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
        last_cleared_timestamp.value_namespace = name_space;
        last_cleared_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states = value;
        last_idt_states.value_namespace = name_space;
        last_idt_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-states")
    {
        total_states = value;
        total_states.value_namespace = name_space;
        total_states.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-deletions")
    {
        total_deletions = value;
        total_deletions.value_namespace = name_space;
        total_deletions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-nac-ks")
    {
        total_nac_ks = value;
        total_nac_ks.value_namespace = name_space;
        total_nac_ks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts = value;
        total_id_ts.value_namespace = name_space;
        total_id_ts.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Issu::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "last-idt-states")
    {
        last_idt_states.yfilter = yfilter;
    }
    if(value_path == "total-states")
    {
        total_states.yfilter = yfilter;
    }
    if(value_path == "total-deletions")
    {
        total_deletions.yfilter = yfilter;
    }
    if(value_path == "total-nac-ks")
    {
        total_nac_ks.yfilter = yfilter;
    }
    if(value_path == "total-id-ts")
    {
        total_id_ts.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Issu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-cleared-timestamp" || name == "role" || name == "last-idt-states" || name == "total-states" || name == "total-deletions" || name == "total-nac-ks" || name == "total-id-ts")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::FsmUnexpectedEventStats()
    :
    last_cleared_time{YType::uint32, "last-cleared-time"},
    unexpected_event_num{YType::uint32, "unexpected-event-num"}
        ,
    head_fsm_events(std::make_shared<MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents>())
    , mid_fsm_events(std::make_shared<MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents>())
    , tail_fsm_events(std::make_shared<MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents>())
{
    head_fsm_events->parent = this;
    mid_fsm_events->parent = this;
    tail_fsm_events->parent = this;

    yang_name = "fsm-unexpected-event-stats"; yang_parent_name = "signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::~FsmUnexpectedEventStats()
{
}

bool MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::has_data() const
{
    if (is_presence_container) return true;
    return last_cleared_time.is_set
	|| unexpected_event_num.is_set
	|| (head_fsm_events !=  nullptr && head_fsm_events->has_data())
	|| (mid_fsm_events !=  nullptr && mid_fsm_events->has_data())
	|| (tail_fsm_events !=  nullptr && tail_fsm_events->has_data());
}

bool MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_cleared_time.yfilter)
	|| ydk::is_set(unexpected_event_num.yfilter)
	|| (head_fsm_events !=  nullptr && head_fsm_events->has_operation())
	|| (mid_fsm_events !=  nullptr && mid_fsm_events->has_operation())
	|| (tail_fsm_events !=  nullptr && tail_fsm_events->has_operation());
}

std::string MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsm-unexpected-event-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_time.is_set || is_set(last_cleared_time.yfilter)) leaf_name_data.push_back(last_cleared_time.get_name_leafdata());
    if (unexpected_event_num.is_set || is_set(unexpected_event_num.yfilter)) leaf_name_data.push_back(unexpected_event_num.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head-fsm-events")
    {
        if(head_fsm_events == nullptr)
        {
            head_fsm_events = std::make_shared<MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents>();
        }
        return head_fsm_events;
    }

    if(child_yang_name == "mid-fsm-events")
    {
        if(mid_fsm_events == nullptr)
        {
            mid_fsm_events = std::make_shared<MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents>();
        }
        return mid_fsm_events;
    }

    if(child_yang_name == "tail-fsm-events")
    {
        if(tail_fsm_events == nullptr)
        {
            tail_fsm_events = std::make_shared<MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents>();
        }
        return tail_fsm_events;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(head_fsm_events != nullptr)
    {
        _children["head-fsm-events"] = head_fsm_events;
    }

    if(mid_fsm_events != nullptr)
    {
        _children["mid-fsm-events"] = mid_fsm_events;
    }

    if(tail_fsm_events != nullptr)
    {
        _children["tail-fsm-events"] = tail_fsm_events;
    }

    return _children;
}

void MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared-time")
    {
        last_cleared_time = value;
        last_cleared_time.value_namespace = name_space;
        last_cleared_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unexpected-event-num")
    {
        unexpected_event_num = value;
        unexpected_event_num.value_namespace = name_space;
        unexpected_event_num.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared-time")
    {
        last_cleared_time.yfilter = yfilter;
    }
    if(value_path == "unexpected-event-num")
    {
        unexpected_event_num.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head-fsm-events" || name == "mid-fsm-events" || name == "tail-fsm-events" || name == "last-cleared-time" || name == "unexpected-event-num")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::HeadFsmEvents()
    :
    te_s2l_fsm_stats_array(this, {})
{

    yang_name = "head-fsm-events"; yang_parent_name = "fsm-unexpected-event-stats"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::~HeadFsmEvents()
{
}

bool MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<te_s2l_fsm_stats_array.len(); index++)
    {
        if(te_s2l_fsm_stats_array[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::has_operation() const
{
    for (std::size_t index=0; index<te_s2l_fsm_stats_array.len(); index++)
    {
        if(te_s2l_fsm_stats_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/fsm-unexpected-event-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-fsm-events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-s2l-fsm-stats-array")
    {
        auto ent_ = std::make_shared<MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray>();
        ent_->parent = this;
        te_s2l_fsm_stats_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : te_s2l_fsm_stats_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-s2l-fsm-stats-array")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::TeS2lFsmStatsArray()
    :
    te_s2l_fsm_event_array{YType::uint32, "te-s2l-fsm-event-array"}
{

    yang_name = "te-s2l-fsm-stats-array"; yang_parent_name = "head-fsm-events"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::~TeS2lFsmStatsArray()
{
}

bool MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : te_s2l_fsm_event_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::has_operation() const
{
    for (auto const & leaf : te_s2l_fsm_event_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(te_s2l_fsm_event_array.yfilter);
}

std::string MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/fsm-unexpected-event-stats/head-fsm-events/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-s2l-fsm-stats-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto te_s2l_fsm_event_array_name_datas = te_s2l_fsm_event_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), te_s2l_fsm_event_array_name_datas.begin(), te_s2l_fsm_event_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-s2l-fsm-event-array")
    {
        te_s2l_fsm_event_array.append(value);
    }
}

void MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-s2l-fsm-event-array")
    {
        te_s2l_fsm_event_array.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::HeadFsmEvents::TeS2lFsmStatsArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-s2l-fsm-event-array")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::MidFsmEvents()
    :
    te_s2l_fsm_stats_array(this, {})
{

    yang_name = "mid-fsm-events"; yang_parent_name = "fsm-unexpected-event-stats"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::~MidFsmEvents()
{
}

bool MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<te_s2l_fsm_stats_array.len(); index++)
    {
        if(te_s2l_fsm_stats_array[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::has_operation() const
{
    for (std::size_t index=0; index<te_s2l_fsm_stats_array.len(); index++)
    {
        if(te_s2l_fsm_stats_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/fsm-unexpected-event-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mid-fsm-events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-s2l-fsm-stats-array")
    {
        auto ent_ = std::make_shared<MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray>();
        ent_->parent = this;
        te_s2l_fsm_stats_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : te_s2l_fsm_stats_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-s2l-fsm-stats-array")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::TeS2lFsmStatsArray()
    :
    te_s2l_fsm_event_array{YType::uint32, "te-s2l-fsm-event-array"}
{

    yang_name = "te-s2l-fsm-stats-array"; yang_parent_name = "mid-fsm-events"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::~TeS2lFsmStatsArray()
{
}

bool MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : te_s2l_fsm_event_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::has_operation() const
{
    for (auto const & leaf : te_s2l_fsm_event_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(te_s2l_fsm_event_array.yfilter);
}

std::string MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/fsm-unexpected-event-stats/mid-fsm-events/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-s2l-fsm-stats-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto te_s2l_fsm_event_array_name_datas = te_s2l_fsm_event_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), te_s2l_fsm_event_array_name_datas.begin(), te_s2l_fsm_event_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-s2l-fsm-event-array")
    {
        te_s2l_fsm_event_array.append(value);
    }
}

void MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-s2l-fsm-event-array")
    {
        te_s2l_fsm_event_array.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::MidFsmEvents::TeS2lFsmStatsArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-s2l-fsm-event-array")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TailFsmEvents()
    :
    te_s2l_fsm_stats_array(this, {})
{

    yang_name = "tail-fsm-events"; yang_parent_name = "fsm-unexpected-event-stats"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::~TailFsmEvents()
{
}

bool MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<te_s2l_fsm_stats_array.len(); index++)
    {
        if(te_s2l_fsm_stats_array[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::has_operation() const
{
    for (std::size_t index=0; index<te_s2l_fsm_stats_array.len(); index++)
    {
        if(te_s2l_fsm_stats_array[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/fsm-unexpected-event-stats/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tail-fsm-events";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-s2l-fsm-stats-array")
    {
        auto ent_ = std::make_shared<MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray>();
        ent_->parent = this;
        te_s2l_fsm_stats_array.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : te_s2l_fsm_stats_array.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-s2l-fsm-stats-array")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::TeS2lFsmStatsArray()
    :
    te_s2l_fsm_event_array{YType::uint32, "te-s2l-fsm-event-array"}
{

    yang_name = "te-s2l-fsm-stats-array"; yang_parent_name = "tail-fsm-events"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::~TeS2lFsmStatsArray()
{
}

bool MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : te_s2l_fsm_event_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::has_operation() const
{
    for (auto const & leaf : te_s2l_fsm_event_array.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(te_s2l_fsm_event_array.yfilter);
}

std::string MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/fsm-unexpected-event-stats/tail-fsm-events/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-s2l-fsm-stats-array";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto te_s2l_fsm_event_array_name_datas = te_s2l_fsm_event_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), te_s2l_fsm_event_array_name_datas.begin(), te_s2l_fsm_event_array_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-s2l-fsm-event-array")
    {
        te_s2l_fsm_event_array.append(value);
    }
}

void MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-s2l-fsm-event-array")
    {
        te_s2l_fsm_event_array.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::FsmUnexpectedEventStats::TailFsmEvents::TeS2lFsmStatsArray::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-s2l-fsm-event-array")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounters()
    :
    head_signalling_counter(this, {"ctype", "tunnel_id"})
{

    yang_name = "head-signalling-counters"; yang_parent_name = "signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::~HeadSignallingCounters()
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<head_signalling_counter.len(); index++)
    {
        if(head_signalling_counter[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::has_operation() const
{
    for (std::size_t index=0; index<head_signalling_counter.len(); index++)
    {
        if(head_signalling_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-signalling-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::HeadSignallingCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::HeadSignallingCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "head-signalling-counter")
    {
        auto ent_ = std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter>();
        ent_->parent = this;
        head_signalling_counter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::HeadSignallingCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : head_signalling_counter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "head-signalling-counter")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::HeadSignallingCounter()
    :
    ctype{YType::enumeration, "ctype"},
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_sig_name{YType::str, "tunnel-sig-name"},
    lsp_id{YType::uint16, "lsp-id"}
        ,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics>())
    , destination_statistic(this, {})
{
    statistics->parent = this;

    yang_name = "head-signalling-counter"; yang_parent_name = "head-signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::~HeadSignallingCounter()
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destination_statistic.len(); index++)
    {
        if(destination_statistic[index]->has_data())
            return true;
    }
    return ctype.is_set
	|| tunnel_id.is_set
	|| tunnel_name.is_set
	|| tunnel_sig_name.is_set
	|| lsp_id.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::has_operation() const
{
    for (std::size_t index=0; index<destination_statistic.len(); index++)
    {
        if(destination_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_sig_name.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/head-signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "head-signalling-counter";
    ADD_KEY_TOKEN(ctype, "ctype");
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_sig_name.is_set || is_set(tunnel_sig_name.yfilter)) leaf_name_data.push_back(tunnel_sig_name.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "destination-statistic")
    {
        auto ent_ = std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic>();
        ent_->parent = this;
        destination_statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    count_ = 0;
    for (auto ent_ : destination_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name = value;
        tunnel_sig_name.value_namespace = name_space;
        tunnel_sig_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "destination-statistic" || name == "ctype" || name == "tunnel-id" || name == "tunnel-name" || name == "tunnel-sig-name" || name == "lsp-id")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "head-signalling-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::DestinationStatistic()
    :
    destination_address{YType::str, "destination-address"}
        ,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics>())
    , s2l_statistic(this, {})
{
    statistics->parent = this;

    yang_name = "destination-statistic"; yang_parent_name = "head-signalling-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::~DestinationStatistic()
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "s2l-statistic")
    {
        auto ent_ = std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic>();
        ent_->parent = this;
        s2l_statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    count_ = 0;
    for (auto ent_ : s2l_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "s2l-statistic" || name == "destination-address")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "destination-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::S2lStatistic()
    :
    sub_group_originator{YType::str, "sub-group-originator"},
    sub_group_id{YType::uint16, "sub-group-id"},
    destination_address{YType::str, "destination-address"}
        ,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "destination-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::~S2lStatistic()
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::has_data() const
{
    if (is_presence_container) return true;
    return sub_group_originator.is_set
	|| sub_group_id.is_set
	|| destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "sub-group-originator" || name == "sub-group-id" || name == "destination-address")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "s2l-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::HeadSignallingCounters::HeadSignallingCounter::DestinationStatistic::S2lStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounters()
    :
    remote_signalling_counter(this, {"ctype", "tunnel_id", "extended_tunnel_id", "p2mp_id", "lsp_id", "source_address", "destination_address", "sub_group_originator", "sub_group_id"})
{

    yang_name = "remote-signalling-counters"; yang_parent_name = "signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::~RemoteSignallingCounters()
{
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_signalling_counter.len(); index++)
    {
        if(remote_signalling_counter[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::has_operation() const
{
    for (std::size_t index=0; index<remote_signalling_counter.len(); index++)
    {
        if(remote_signalling_counter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::SignallingCounters::RemoteSignallingCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::RemoteSignallingCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-signalling-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::RemoteSignallingCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-signalling-counter")
    {
        auto ent_ = std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter>();
        ent_->parent = this;
        remote_signalling_counter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_signalling_counter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-signalling-counter")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::RemoteSignallingCounter()
    :
    ctype{YType::enumeration, "ctype"},
    tunnel_id{YType::uint32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    lsp_id{YType::uint32, "lsp-id"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    sub_group_originator{YType::str, "sub-group-originator"},
    sub_group_id{YType::uint32, "sub-group-id"},
    tunnel_name{YType::str, "tunnel-name"}
        ,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics>())
    , s2l_statistic(this, {})
{
    statistics->parent = this;

    yang_name = "remote-signalling-counter"; yang_parent_name = "remote-signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::~RemoteSignallingCounter()
{
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
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
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/remote-signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-signalling-counter";
    ADD_KEY_TOKEN(ctype, "ctype");
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    ADD_KEY_TOKEN(extended_tunnel_id, "extended-tunnel-id");
    ADD_KEY_TOKEN(p2mp_id, "p2mp-id");
    ADD_KEY_TOKEN(lsp_id, "lsp-id");
    ADD_KEY_TOKEN(source_address, "source-address");
    ADD_KEY_TOKEN(destination_address, "destination-address");
    ADD_KEY_TOKEN(sub_group_originator, "sub-group-originator");
    ADD_KEY_TOKEN(sub_group_id, "sub-group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "s2l-statistic")
    {
        auto ent_ = std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic>();
        ent_->parent = this;
        s2l_statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    count_ = 0;
    for (auto ent_ : s2l_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "s2l-statistic" || name == "ctype" || name == "tunnel-id" || name == "extended-tunnel-id" || name == "p2mp-id" || name == "lsp-id" || name == "source-address" || name == "destination-address" || name == "sub-group-originator" || name == "sub-group-id" || name == "tunnel-name")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "remote-signalling-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::S2lStatistic()
    :
    sub_group_originator{YType::str, "sub-group-originator"},
    sub_group_id{YType::uint16, "sub-group-id"},
    destination_address{YType::str, "destination-address"}
        ,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "remote-signalling-counter"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::~S2lStatistic()
{
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::has_data() const
{
    if (is_presence_container) return true;
    return sub_group_originator.is_set
	|| sub_group_id.is_set
	|| destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "sub-group-originator" || name == "sub-group-id" || name == "destination-address")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "s2l-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::RemoteSignallingCounters::RemoteSignallingCounter::S2lStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signallings()
    :
    signalling(this, {"ctype", "tunnel_id", "extended_tunnel_id", "p2mp_id", "lsp_id", "source_address", "destination_address", "sub_group_originator", "sub_group_id"})
{

    yang_name = "signallings"; yang_parent_name = "signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::Signallings::~Signallings()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<signalling.len(); index++)
    {
        if(signalling[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::SignallingCounters::Signallings::has_operation() const
{
    for (std::size_t index=0; index<signalling.len(); index++)
    {
        if(signalling[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::SignallingCounters::Signallings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::Signallings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signallings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::Signallings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signalling")
    {
        auto ent_ = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling>();
        ent_->parent = this;
        signalling.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::Signallings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : signalling.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::SignallingCounters::Signallings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::SignallingCounters::Signallings::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::SignallingCounters::Signallings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signalling")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::Signalling()
    :
    ctype{YType::enumeration, "ctype"},
    tunnel_id{YType::uint32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    p2mp_id{YType::uint32, "p2mp-id"},
    lsp_id{YType::uint32, "lsp-id"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    sub_group_originator{YType::str, "sub-group-originator"},
    sub_group_id{YType::uint32, "sub-group-id"}
        ,
    te_signalling_filter_data(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData>())
{
    te_signalling_filter_data->parent = this;

    yang_name = "signalling"; yang_parent_name = "signallings"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::~Signalling()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::has_data() const
{
    if (is_presence_container) return true;
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
    return is_set(yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| (te_signalling_filter_data !=  nullptr && te_signalling_filter_data->has_operation());
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/signallings/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling";
    ADD_KEY_TOKEN(ctype, "ctype");
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    ADD_KEY_TOKEN(extended_tunnel_id, "extended-tunnel-id");
    ADD_KEY_TOKEN(p2mp_id, "p2mp-id");
    ADD_KEY_TOKEN(lsp_id, "lsp-id");
    ADD_KEY_TOKEN(source_address, "source-address");
    ADD_KEY_TOKEN(destination_address, "destination-address");
    ADD_KEY_TOKEN(sub_group_originator, "sub-group-originator");
    ADD_KEY_TOKEN(sub_group_id, "sub-group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(te_signalling_filter_data != nullptr)
    {
        _children["te-signalling-filter-data"] = te_signalling_filter_data;
    }

    return _children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-signalling-filter-data" || name == "ctype" || name == "tunnel-id" || name == "extended-tunnel-id" || name == "p2mp-id" || name == "lsp-id" || name == "source-address" || name == "destination-address" || name == "sub-group-originator" || name == "sub-group-id")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterData()
    :
    statistics_filter{YType::enumeration, "statistics-filter"}
        ,
    te_signalling_filter_vif(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif>())
    , te_signalling_filter_lsp(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp>())
{
    te_signalling_filter_vif->parent = this;
    te_signalling_filter_lsp->parent = this;

    yang_name = "te-signalling-filter-data"; yang_parent_name = "signalling"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::~TeSignallingFilterData()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::has_data() const
{
    if (is_presence_container) return true;
    return statistics_filter.is_set
	|| (te_signalling_filter_vif !=  nullptr && te_signalling_filter_vif->has_data())
	|| (te_signalling_filter_lsp !=  nullptr && te_signalling_filter_lsp->has_data());
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(statistics_filter.yfilter)
	|| (te_signalling_filter_vif !=  nullptr && te_signalling_filter_vif->has_operation())
	|| (te_signalling_filter_lsp !=  nullptr && te_signalling_filter_lsp->has_operation());
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-signalling-filter-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (statistics_filter.is_set || is_set(statistics_filter.yfilter)) leaf_name_data.push_back(statistics_filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-signalling-filter-vif")
    {
        if(te_signalling_filter_vif == nullptr)
        {
            te_signalling_filter_vif = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif>();
        }
        return te_signalling_filter_vif;
    }

    if(child_yang_name == "te-signalling-filter-lsp")
    {
        if(te_signalling_filter_lsp == nullptr)
        {
            te_signalling_filter_lsp = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp>();
        }
        return te_signalling_filter_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(te_signalling_filter_vif != nullptr)
    {
        _children["te-signalling-filter-vif"] = te_signalling_filter_vif;
    }

    if(te_signalling_filter_lsp != nullptr)
    {
        _children["te-signalling-filter-lsp"] = te_signalling_filter_lsp;
    }

    return _children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "statistics-filter")
    {
        statistics_filter = value;
        statistics_filter.value_namespace = name_space;
        statistics_filter.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "statistics-filter")
    {
        statistics_filter.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-signalling-filter-vif" || name == "te-signalling-filter-lsp" || name == "statistics-filter")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::TeSignallingFilterVif()
    :
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_sig_name{YType::str, "tunnel-sig-name"},
    lsp_id{YType::uint16, "lsp-id"}
        ,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics>())
    , destination_statistic(this, {})
{
    statistics->parent = this;

    yang_name = "te-signalling-filter-vif"; yang_parent_name = "te-signalling-filter-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::~TeSignallingFilterVif()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<destination_statistic.len(); index++)
    {
        if(destination_statistic[index]->has_data())
            return true;
    }
    return tunnel_name.is_set
	|| tunnel_sig_name.is_set
	|| lsp_id.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::has_operation() const
{
    for (std::size_t index=0; index<destination_statistic.len(); index++)
    {
        if(destination_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_sig_name.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-signalling-filter-vif";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_sig_name.is_set || is_set(tunnel_sig_name.yfilter)) leaf_name_data.push_back(tunnel_sig_name.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "destination-statistic")
    {
        auto ent_ = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic>();
        ent_->parent = this;
        destination_statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    count_ = 0;
    for (auto ent_ : destination_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name = value;
        tunnel_sig_name.value_namespace = name_space;
        tunnel_sig_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-sig-name")
    {
        tunnel_sig_name.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "destination-statistic" || name == "tunnel-name" || name == "tunnel-sig-name" || name == "lsp-id")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "te-signalling-filter-vif"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::DestinationStatistic()
    :
    destination_address{YType::str, "destination-address"}
        ,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics>())
    , s2l_statistic(this, {})
{
    statistics->parent = this;

    yang_name = "destination-statistic"; yang_parent_name = "te-signalling-filter-vif"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::~DestinationStatistic()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "s2l-statistic")
    {
        auto ent_ = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic>();
        ent_->parent = this;
        s2l_statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    count_ = 0;
    for (auto ent_ : s2l_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "s2l-statistic" || name == "destination-address")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "destination-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::S2lStatistic()
    :
    sub_group_originator{YType::str, "sub-group-originator"},
    sub_group_id{YType::uint16, "sub-group-id"},
    destination_address{YType::str, "destination-address"}
        ,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "destination-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::~S2lStatistic()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::has_data() const
{
    if (is_presence_container) return true;
    return sub_group_originator.is_set
	|| sub_group_id.is_set
	|| destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "sub-group-originator" || name == "sub-group-id" || name == "destination-address")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "s2l-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterVif::DestinationStatistic::S2lStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::TeSignallingFilterLsp()
    :
    tunnel_name{YType::str, "tunnel-name"}
        ,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics>())
    , s2l_statistic(this, {})
{
    statistics->parent = this;

    yang_name = "te-signalling-filter-lsp"; yang_parent_name = "te-signalling-filter-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::~TeSignallingFilterLsp()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_data())
            return true;
    }
    return tunnel_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::has_operation() const
{
    for (std::size_t index=0; index<s2l_statistic.len(); index++)
    {
        if(s2l_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-signalling-filter-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "s2l-statistic")
    {
        auto ent_ = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic>();
        ent_->parent = this;
        s2l_statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    count_ = 0;
    for (auto ent_ : s2l_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "s2l-statistic" || name == "tunnel-name")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "te-signalling-filter-lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::S2lStatistic()
    :
    sub_group_originator{YType::str, "sub-group-originator"},
    sub_group_id{YType::uint16, "sub-group-id"},
    destination_address{YType::str, "destination-address"}
        ,
    statistics(std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics>())
{
    statistics->parent = this;

    yang_name = "s2l-statistic"; yang_parent_name = "te-signalling-filter-lsp"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::~S2lStatistic()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::has_data() const
{
    if (is_presence_container) return true;
    return sub_group_originator.is_set
	|| sub_group_id.is_set
	|| destination_address.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-statistic";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "sub-group-originator" || name == "sub-group-id" || name == "destination-address")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::Statistics()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "statistics"; yang_parent_name = "s2l-statistic"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::~Statistics()
{
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::Signallings::Signalling::TeSignallingFilterData::TeSignallingFilterLsp::S2lStatistic::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTeStandby::SignallingCounters::SignallingSummary::SignallingSummary()
    :
    tx_event_unknown{YType::uint32, "tx-event-unknown"},
    tx_path_create_event{YType::uint32, "tx-path-create-event"},
    tx_path_change_event{YType::uint32, "tx-path-change-event"},
    tx_path_delete_event{YType::uint32, "tx-path-delete-event"},
    tx_path_error_event{YType::uint32, "tx-path-error-event"},
    tx_resv_create_event{YType::uint32, "tx-resv-create-event"},
    tx_resv_change_event{YType::uint32, "tx-resv-change-event"},
    tx_resv_delete_event{YType::uint32, "tx-resv-delete-event"},
    tx_resv_error_event{YType::uint32, "tx-resv-error-event"},
    tx_path_reeval_query_event{YType::uint32, "tx-path-reeval-query-event"},
    rx_event_unknown{YType::uint32, "rx-event-unknown"},
    rx_path_create_event{YType::uint32, "rx-path-create-event"},
    rx_path_change_event{YType::uint32, "rx-path-change-event"},
    rx_path_delete_event{YType::uint32, "rx-path-delete-event"},
    rx_path_error_event{YType::uint32, "rx-path-error-event"},
    rx_resv_create_event{YType::uint32, "rx-resv-create-event"},
    rx_resv_change_event{YType::uint32, "rx-resv-change-event"},
    rx_resv_delete_event{YType::uint32, "rx-resv-delete-event"},
    rx_resv_error_event{YType::uint32, "rx-resv-error-event"},
    rx_path_reeval_query_event{YType::uint32, "rx-path-reeval-query-event"},
    tx_backup_assign_event{YType::uint32, "tx-backup-assign-event"},
    rx_backup_assign_err_event{YType::uint32, "rx-backup-assign-err-event"},
    events_total_count{YType::uint32, "events-total-count"},
    events_count{YType::uint32, "events-count"}
{

    yang_name = "signalling-summary"; yang_parent_name = "signalling-counters"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::SignallingCounters::SignallingSummary::~SignallingSummary()
{
}

bool MplsTeStandby::SignallingCounters::SignallingSummary::has_data() const
{
    if (is_presence_container) return true;
    return tx_event_unknown.is_set
	|| tx_path_create_event.is_set
	|| tx_path_change_event.is_set
	|| tx_path_delete_event.is_set
	|| tx_path_error_event.is_set
	|| tx_resv_create_event.is_set
	|| tx_resv_change_event.is_set
	|| tx_resv_delete_event.is_set
	|| tx_resv_error_event.is_set
	|| tx_path_reeval_query_event.is_set
	|| rx_event_unknown.is_set
	|| rx_path_create_event.is_set
	|| rx_path_change_event.is_set
	|| rx_path_delete_event.is_set
	|| rx_path_error_event.is_set
	|| rx_resv_create_event.is_set
	|| rx_resv_change_event.is_set
	|| rx_resv_delete_event.is_set
	|| rx_resv_error_event.is_set
	|| rx_path_reeval_query_event.is_set
	|| tx_backup_assign_event.is_set
	|| rx_backup_assign_err_event.is_set
	|| events_total_count.is_set
	|| events_count.is_set;
}

bool MplsTeStandby::SignallingCounters::SignallingSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tx_event_unknown.yfilter)
	|| ydk::is_set(tx_path_create_event.yfilter)
	|| ydk::is_set(tx_path_change_event.yfilter)
	|| ydk::is_set(tx_path_delete_event.yfilter)
	|| ydk::is_set(tx_path_error_event.yfilter)
	|| ydk::is_set(tx_resv_create_event.yfilter)
	|| ydk::is_set(tx_resv_change_event.yfilter)
	|| ydk::is_set(tx_resv_delete_event.yfilter)
	|| ydk::is_set(tx_resv_error_event.yfilter)
	|| ydk::is_set(tx_path_reeval_query_event.yfilter)
	|| ydk::is_set(rx_event_unknown.yfilter)
	|| ydk::is_set(rx_path_create_event.yfilter)
	|| ydk::is_set(rx_path_change_event.yfilter)
	|| ydk::is_set(rx_path_delete_event.yfilter)
	|| ydk::is_set(rx_path_error_event.yfilter)
	|| ydk::is_set(rx_resv_create_event.yfilter)
	|| ydk::is_set(rx_resv_change_event.yfilter)
	|| ydk::is_set(rx_resv_delete_event.yfilter)
	|| ydk::is_set(rx_resv_error_event.yfilter)
	|| ydk::is_set(rx_path_reeval_query_event.yfilter)
	|| ydk::is_set(tx_backup_assign_event.yfilter)
	|| ydk::is_set(rx_backup_assign_err_event.yfilter)
	|| ydk::is_set(events_total_count.yfilter)
	|| ydk::is_set(events_count.yfilter);
}

std::string MplsTeStandby::SignallingCounters::SignallingSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/signalling-counters/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::SignallingCounters::SignallingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::SignallingCounters::SignallingSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tx_event_unknown.is_set || is_set(tx_event_unknown.yfilter)) leaf_name_data.push_back(tx_event_unknown.get_name_leafdata());
    if (tx_path_create_event.is_set || is_set(tx_path_create_event.yfilter)) leaf_name_data.push_back(tx_path_create_event.get_name_leafdata());
    if (tx_path_change_event.is_set || is_set(tx_path_change_event.yfilter)) leaf_name_data.push_back(tx_path_change_event.get_name_leafdata());
    if (tx_path_delete_event.is_set || is_set(tx_path_delete_event.yfilter)) leaf_name_data.push_back(tx_path_delete_event.get_name_leafdata());
    if (tx_path_error_event.is_set || is_set(tx_path_error_event.yfilter)) leaf_name_data.push_back(tx_path_error_event.get_name_leafdata());
    if (tx_resv_create_event.is_set || is_set(tx_resv_create_event.yfilter)) leaf_name_data.push_back(tx_resv_create_event.get_name_leafdata());
    if (tx_resv_change_event.is_set || is_set(tx_resv_change_event.yfilter)) leaf_name_data.push_back(tx_resv_change_event.get_name_leafdata());
    if (tx_resv_delete_event.is_set || is_set(tx_resv_delete_event.yfilter)) leaf_name_data.push_back(tx_resv_delete_event.get_name_leafdata());
    if (tx_resv_error_event.is_set || is_set(tx_resv_error_event.yfilter)) leaf_name_data.push_back(tx_resv_error_event.get_name_leafdata());
    if (tx_path_reeval_query_event.is_set || is_set(tx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(tx_path_reeval_query_event.get_name_leafdata());
    if (rx_event_unknown.is_set || is_set(rx_event_unknown.yfilter)) leaf_name_data.push_back(rx_event_unknown.get_name_leafdata());
    if (rx_path_create_event.is_set || is_set(rx_path_create_event.yfilter)) leaf_name_data.push_back(rx_path_create_event.get_name_leafdata());
    if (rx_path_change_event.is_set || is_set(rx_path_change_event.yfilter)) leaf_name_data.push_back(rx_path_change_event.get_name_leafdata());
    if (rx_path_delete_event.is_set || is_set(rx_path_delete_event.yfilter)) leaf_name_data.push_back(rx_path_delete_event.get_name_leafdata());
    if (rx_path_error_event.is_set || is_set(rx_path_error_event.yfilter)) leaf_name_data.push_back(rx_path_error_event.get_name_leafdata());
    if (rx_resv_create_event.is_set || is_set(rx_resv_create_event.yfilter)) leaf_name_data.push_back(rx_resv_create_event.get_name_leafdata());
    if (rx_resv_change_event.is_set || is_set(rx_resv_change_event.yfilter)) leaf_name_data.push_back(rx_resv_change_event.get_name_leafdata());
    if (rx_resv_delete_event.is_set || is_set(rx_resv_delete_event.yfilter)) leaf_name_data.push_back(rx_resv_delete_event.get_name_leafdata());
    if (rx_resv_error_event.is_set || is_set(rx_resv_error_event.yfilter)) leaf_name_data.push_back(rx_resv_error_event.get_name_leafdata());
    if (rx_path_reeval_query_event.is_set || is_set(rx_path_reeval_query_event.yfilter)) leaf_name_data.push_back(rx_path_reeval_query_event.get_name_leafdata());
    if (tx_backup_assign_event.is_set || is_set(tx_backup_assign_event.yfilter)) leaf_name_data.push_back(tx_backup_assign_event.get_name_leafdata());
    if (rx_backup_assign_err_event.is_set || is_set(rx_backup_assign_err_event.yfilter)) leaf_name_data.push_back(rx_backup_assign_err_event.get_name_leafdata());
    if (events_total_count.is_set || is_set(events_total_count.yfilter)) leaf_name_data.push_back(events_total_count.get_name_leafdata());
    if (events_count.is_set || is_set(events_count.yfilter)) leaf_name_data.push_back(events_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::SignallingCounters::SignallingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::SignallingCounters::SignallingSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::SignallingCounters::SignallingSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown = value;
        tx_event_unknown.value_namespace = name_space;
        tx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event = value;
        tx_path_create_event.value_namespace = name_space;
        tx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event = value;
        tx_path_change_event.value_namespace = name_space;
        tx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event = value;
        tx_path_delete_event.value_namespace = name_space;
        tx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event = value;
        tx_path_error_event.value_namespace = name_space;
        tx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event = value;
        tx_resv_create_event.value_namespace = name_space;
        tx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event = value;
        tx_resv_change_event.value_namespace = name_space;
        tx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event = value;
        tx_resv_delete_event.value_namespace = name_space;
        tx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event = value;
        tx_resv_error_event.value_namespace = name_space;
        tx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event = value;
        tx_path_reeval_query_event.value_namespace = name_space;
        tx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown = value;
        rx_event_unknown.value_namespace = name_space;
        rx_event_unknown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event = value;
        rx_path_create_event.value_namespace = name_space;
        rx_path_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event = value;
        rx_path_change_event.value_namespace = name_space;
        rx_path_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event = value;
        rx_path_delete_event.value_namespace = name_space;
        rx_path_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event = value;
        rx_path_error_event.value_namespace = name_space;
        rx_path_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event = value;
        rx_resv_create_event.value_namespace = name_space;
        rx_resv_create_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event = value;
        rx_resv_change_event.value_namespace = name_space;
        rx_resv_change_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event = value;
        rx_resv_delete_event.value_namespace = name_space;
        rx_resv_delete_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event = value;
        rx_resv_error_event.value_namespace = name_space;
        rx_resv_error_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event = value;
        rx_path_reeval_query_event.value_namespace = name_space;
        rx_path_reeval_query_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event = value;
        tx_backup_assign_event.value_namespace = name_space;
        tx_backup_assign_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event = value;
        rx_backup_assign_err_event.value_namespace = name_space;
        rx_backup_assign_err_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-total-count")
    {
        events_total_count = value;
        events_total_count.value_namespace = name_space;
        events_total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "events-count")
    {
        events_count = value;
        events_count.value_namespace = name_space;
        events_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::SignallingCounters::SignallingSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tx-event-unknown")
    {
        tx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "tx-path-create-event")
    {
        tx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-change-event")
    {
        tx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-delete-event")
    {
        tx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-error-event")
    {
        tx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-create-event")
    {
        tx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-change-event")
    {
        tx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-delete-event")
    {
        tx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "tx-resv-error-event")
    {
        tx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "tx-path-reeval-query-event")
    {
        tx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "rx-event-unknown")
    {
        rx_event_unknown.yfilter = yfilter;
    }
    if(value_path == "rx-path-create-event")
    {
        rx_path_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-change-event")
    {
        rx_path_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-delete-event")
    {
        rx_path_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-error-event")
    {
        rx_path_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-create-event")
    {
        rx_resv_create_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-change-event")
    {
        rx_resv_change_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-delete-event")
    {
        rx_resv_delete_event.yfilter = yfilter;
    }
    if(value_path == "rx-resv-error-event")
    {
        rx_resv_error_event.yfilter = yfilter;
    }
    if(value_path == "rx-path-reeval-query-event")
    {
        rx_path_reeval_query_event.yfilter = yfilter;
    }
    if(value_path == "tx-backup-assign-event")
    {
        tx_backup_assign_event.yfilter = yfilter;
    }
    if(value_path == "rx-backup-assign-err-event")
    {
        rx_backup_assign_err_event.yfilter = yfilter;
    }
    if(value_path == "events-total-count")
    {
        events_total_count.yfilter = yfilter;
    }
    if(value_path == "events-count")
    {
        events_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::SignallingCounters::SignallingSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tx-event-unknown" || name == "tx-path-create-event" || name == "tx-path-change-event" || name == "tx-path-delete-event" || name == "tx-path-error-event" || name == "tx-resv-create-event" || name == "tx-resv-change-event" || name == "tx-resv-delete-event" || name == "tx-resv-error-event" || name == "tx-path-reeval-query-event" || name == "rx-event-unknown" || name == "rx-path-create-event" || name == "rx-path-change-event" || name == "rx-path-delete-event" || name == "rx-path-error-event" || name == "rx-resv-create-event" || name == "rx-resv-change-event" || name == "rx-resv-delete-event" || name == "rx-resv-error-event" || name == "rx-path-reeval-query-event" || name == "tx-backup-assign-event" || name == "rx-backup-assign-err-event" || name == "events-total-count" || name == "events-count")
        return true;
    return false;
}

MplsTeStandby::DiffServTeClasses::DiffServTeClasses()
    :
    te_class(this, {})
{

    yang_name = "diff-serv-te-classes"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::DiffServTeClasses::~DiffServTeClasses()
{
}

bool MplsTeStandby::DiffServTeClasses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<te_class.len(); index++)
    {
        if(te_class[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::DiffServTeClasses::has_operation() const
{
    for (std::size_t index=0; index<te_class.len(); index++)
    {
        if(te_class[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::DiffServTeClasses::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::DiffServTeClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diff-serv-te-classes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::DiffServTeClasses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::DiffServTeClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "te-class")
    {
        auto ent_ = std::make_shared<MplsTeStandby::DiffServTeClasses::TeClass>();
        ent_->parent = this;
        te_class.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::DiffServTeClasses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : te_class.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::DiffServTeClasses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::DiffServTeClasses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::DiffServTeClasses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-class")
        return true;
    return false;
}

MplsTeStandby::DiffServTeClasses::TeClass::TeClass()
    :
    class_number{YType::uint8, "class-number"},
    class_type{YType::uint8, "class-type"},
    priority{YType::uint8, "priority"},
    class_status{YType::enumeration, "class-status"}
{

    yang_name = "te-class"; yang_parent_name = "diff-serv-te-classes"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::DiffServTeClasses::TeClass::~TeClass()
{
}

bool MplsTeStandby::DiffServTeClasses::TeClass::has_data() const
{
    if (is_presence_container) return true;
    return class_number.is_set
	|| class_type.is_set
	|| priority.is_set
	|| class_status.is_set;
}

bool MplsTeStandby::DiffServTeClasses::TeClass::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(class_number.yfilter)
	|| ydk::is_set(class_type.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(class_status.yfilter);
}

std::string MplsTeStandby::DiffServTeClasses::TeClass::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/diff-serv-te-classes/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::DiffServTeClasses::TeClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-class";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::DiffServTeClasses::TeClass::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_number.is_set || is_set(class_number.yfilter)) leaf_name_data.push_back(class_number.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.yfilter)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (class_status.is_set || is_set(class_status.yfilter)) leaf_name_data.push_back(class_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::DiffServTeClasses::TeClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::DiffServTeClasses::TeClass::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::DiffServTeClasses::TeClass::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "class-number")
    {
        class_number = value;
        class_number.value_namespace = name_space;
        class_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-type")
    {
        class_type = value;
        class_type.value_namespace = name_space;
        class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "class-status")
    {
        class_status = value;
        class_status.value_namespace = name_space;
        class_status.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::DiffServTeClasses::TeClass::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "class-number")
    {
        class_number.yfilter = yfilter;
    }
    if(value_path == "class-type")
    {
        class_type.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "class-status")
    {
        class_status.yfilter = yfilter;
    }
}

bool MplsTeStandby::DiffServTeClasses::TeClass::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "class-number" || name == "class-type" || name == "priority" || name == "class-status")
        return true;
    return false;
}

MplsTeStandby::Issu::Issu()
    :
    status(std::make_shared<MplsTeStandby::Issu::Status>())
    , detail(std::make_shared<MplsTeStandby::Issu::Detail>())
{
    status->parent = this;
    detail->parent = this;

    yang_name = "issu"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::~Issu()
{
}

bool MplsTeStandby::Issu::has_data() const
{
    if (is_presence_container) return true;
    return (status !=  nullptr && status->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool MplsTeStandby::Issu::has_operation() const
{
    return is_set(yfilter)
	|| (status !=  nullptr && status->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string MplsTeStandby::Issu::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status")
    {
        if(status == nullptr)
        {
            status = std::make_shared<MplsTeStandby::Issu::Status>();
        }
        return status;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<MplsTeStandby::Issu::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(status != nullptr)
    {
        _children["status"] = status;
    }

    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    return _children;
}

void MplsTeStandby::Issu::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Issu::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Issu::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status" || name == "detail")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::Status()
    :
    role{YType::enumeration, "role"}
        ,
    sync_status_information(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation>())
{
    sync_status_information->parent = this;

    yang_name = "status"; yang_parent_name = "issu"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::~Status()
{
}

bool MplsTeStandby::Issu::Status::has_data() const
{
    if (is_presence_container) return true;
    return role.is_set
	|| (sync_status_information !=  nullptr && sync_status_information->has_data());
}

bool MplsTeStandby::Issu::Status::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (sync_status_information !=  nullptr && sync_status_information->has_operation());
}

std::string MplsTeStandby::Issu::Status::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Status::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Status::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sync_status_information != nullptr)
    {
        _children["sync-status-information"] = sync_status_information;
    }

    return _children;
}

void MplsTeStandby::Issu::Status::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Status::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Status::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status-information" || name == "role")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SyncStatusInformation()
    :
    sync_show_type{YType::enumeration, "sync-show-type"}
        ,
    slave_sync_information(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation>())
    , master_sync_information(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation>())
{
    slave_sync_information->parent = this;
    master_sync_information->parent = this;

    yang_name = "sync-status-information"; yang_parent_name = "status"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::SyncStatusInformation::~SyncStatusInformation()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::has_data() const
{
    if (is_presence_container) return true;
    return sync_show_type.is_set
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_data())
	|| (master_sync_information !=  nullptr && master_sync_information->has_data());
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_show_type.yfilter)
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_operation())
	|| (master_sync_information !=  nullptr && master_sync_information->has_operation());
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::SyncStatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_show_type.is_set || is_set(sync_show_type.yfilter)) leaf_name_data.push_back(sync_show_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave-sync-information")
    {
        if(slave_sync_information == nullptr)
        {
            slave_sync_information = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation>();
        }
        return slave_sync_information;
    }

    if(child_yang_name == "master-sync-information")
    {
        if(master_sync_information == nullptr)
        {
            master_sync_information = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation>();
        }
        return master_sync_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(slave_sync_information != nullptr)
    {
        _children["slave-sync-information"] = slave_sync_information;
    }

    if(master_sync_information != nullptr)
    {
        _children["master-sync-information"] = master_sync_information;
    }

    return _children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type = value;
        sync_show_type.value_namespace = name_space;
        sync_show_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-sync-information" || name == "master-sync-information" || name == "sync-show-type")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::SlaveSyncInformation()
    :
    insync_tunnels{YType::uint32, "insync-tunnels"},
    insync_sub_ls_ps{YType::uint32, "insync-sub-ls-ps"},
    pending_tunnels{YType::uint32, "pending-tunnels"},
    pending_sub_ls_ps{YType::uint32, "pending-sub-ls-ps"}
        ,
    idt(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt>())
    , vif_pending(this, {})
    , s2l_pending(this, {})
{
    idt->parent = this;

    yang_name = "slave-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::~SlaveSyncInformation()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vif_pending.len(); index++)
    {
        if(vif_pending[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<s2l_pending.len(); index++)
    {
        if(s2l_pending[index]->has_data())
            return true;
    }
    return insync_tunnels.is_set
	|| insync_sub_ls_ps.is_set
	|| pending_tunnels.is_set
	|| pending_sub_ls_ps.is_set
	|| (idt !=  nullptr && idt->has_data());
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::has_operation() const
{
    for (std::size_t index=0; index<vif_pending.len(); index++)
    {
        if(vif_pending[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<s2l_pending.len(); index++)
    {
        if(s2l_pending[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(insync_tunnels.yfilter)
	|| ydk::is_set(insync_sub_ls_ps.yfilter)
	|| ydk::is_set(pending_tunnels.yfilter)
	|| ydk::is_set(pending_sub_ls_ps.yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insync_tunnels.is_set || is_set(insync_tunnels.yfilter)) leaf_name_data.push_back(insync_tunnels.get_name_leafdata());
    if (insync_sub_ls_ps.is_set || is_set(insync_sub_ls_ps.yfilter)) leaf_name_data.push_back(insync_sub_ls_ps.get_name_leafdata());
    if (pending_tunnels.is_set || is_set(pending_tunnels.yfilter)) leaf_name_data.push_back(pending_tunnels.get_name_leafdata());
    if (pending_sub_ls_ps.is_set || is_set(pending_sub_ls_ps.yfilter)) leaf_name_data.push_back(pending_sub_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt>();
        }
        return idt;
    }

    if(child_yang_name == "vif-pending")
    {
        auto ent_ = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending>();
        ent_->parent = this;
        vif_pending.append(ent_);
        return ent_;
    }

    if(child_yang_name == "s2l-pending")
    {
        auto ent_ = std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending>();
        ent_->parent = this;
        s2l_pending.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idt != nullptr)
    {
        _children["idt"] = idt;
    }

    count_ = 0;
    for (auto ent_ : vif_pending.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : s2l_pending.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "insync-tunnels")
    {
        insync_tunnels = value;
        insync_tunnels.value_namespace = name_space;
        insync_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps = value;
        insync_sub_ls_ps.value_namespace = name_space;
        insync_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels = value;
        pending_tunnels.value_namespace = name_space;
        pending_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps = value;
        pending_sub_ls_ps.value_namespace = name_space;
        pending_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "insync-tunnels")
    {
        insync_tunnels.yfilter = yfilter;
    }
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps.yfilter = yfilter;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels.yfilter = yfilter;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt" || name == "vif-pending" || name == "s2l-pending" || name == "insync-tunnels" || name == "insync-sub-ls-ps" || name == "pending-tunnels" || name == "pending-sub-ls-ps")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>())
    , previous_idt_status(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::~Idt()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_data() const
{
    if (is_presence_container) return true;
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(current_idt_info != nullptr)
    {
        _children["current-idt-info"] = current_idt_info;
    }

    if(previous_idt_status != nullptr)
    {
        _children["previous-idt-status"] = previous_idt_status;
    }

    return _children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::VifPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    tunnel_name{YType::str, "tunnel-name"}
{

    yang_name = "vif-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::~VifPending()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_data() const
{
    if (is_presence_container) return true;
    return pending_reason.is_set
	|| tunnel_name.is_set;
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vif-pending";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
        pending_reason.value_namespace = name_space;
        pending_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pending-reason")
    {
        pending_reason.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::VifPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "tunnel-name")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::S2lPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    signaled_name{YType::str, "signaled-name"},
    s2l_role{YType::enumeration, "s2l-role"}
{

    yang_name = "s2l-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::~S2lPending()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_data() const
{
    if (is_presence_container) return true;
    return pending_reason.is_set
	|| signaled_name.is_set
	|| s2l_role.is_set;
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(signaled_name.yfilter)
	|| ydk::is_set(s2l_role.yfilter);
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-pending";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (s2l_role.is_set || is_set(s2l_role.yfilter)) leaf_name_data.push_back(s2l_role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
        pending_reason.value_namespace = name_space;
        pending_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-role")
    {
        s2l_role = value;
        s2l_role.value_namespace = name_space;
        s2l_role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pending-reason")
    {
        pending_reason.yfilter = yfilter;
    }
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
    if(value_path == "s2l-role")
    {
        s2l_role.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "signaled-name" || name == "s2l-role")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::MasterSyncInformation()
    :
    idt(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "master-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::~MasterSyncInformation()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::has_data() const
{
    if (is_presence_container) return true;
    return (idt !=  nullptr && idt->has_data());
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::has_operation() const
{
    return is_set(yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idt != nullptr)
    {
        _children["idt"] = idt;
    }

    return _children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>())
    , previous_idt_status(std::make_shared<MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "master-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::~Idt()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_data() const
{
    if (is_presence_container) return true;
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/master-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(current_idt_info != nullptr)
    {
        _children["current-idt-info"] = current_idt_info;
    }

    if(previous_idt_status != nullptr)
    {
        _children["previous-idt-status"] = previous_idt_status;
    }

    return _children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/status/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Status::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::Detail()
    :
    role{YType::enumeration, "role"}
        ,
    sync_status_information(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation>())
{
    sync_status_information->parent = this;

    yang_name = "detail"; yang_parent_name = "issu"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::~Detail()
{
}

bool MplsTeStandby::Issu::Detail::has_data() const
{
    if (is_presence_container) return true;
    return role.is_set
	|| (sync_status_information !=  nullptr && sync_status_information->has_data());
}

bool MplsTeStandby::Issu::Detail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(role.yfilter)
	|| (sync_status_information !=  nullptr && sync_status_information->has_operation());
}

std::string MplsTeStandby::Issu::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sync_status_information != nullptr)
    {
        _children["sync-status-information"] = sync_status_information;
    }

    return _children;
}

void MplsTeStandby::Issu::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status-information" || name == "role")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SyncStatusInformation()
    :
    sync_show_type{YType::enumeration, "sync-show-type"}
        ,
    slave_sync_information(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation>())
    , master_sync_information(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation>())
{
    slave_sync_information->parent = this;
    master_sync_information->parent = this;

    yang_name = "sync-status-information"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::~SyncStatusInformation()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::has_data() const
{
    if (is_presence_container) return true;
    return sync_show_type.is_set
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_data())
	|| (master_sync_information !=  nullptr && master_sync_information->has_data());
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_show_type.yfilter)
	|| (slave_sync_information !=  nullptr && slave_sync_information->has_operation())
	|| (master_sync_information !=  nullptr && master_sync_information->has_operation());
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-status-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_show_type.is_set || is_set(sync_show_type.yfilter)) leaf_name_data.push_back(sync_show_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave-sync-information")
    {
        if(slave_sync_information == nullptr)
        {
            slave_sync_information = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation>();
        }
        return slave_sync_information;
    }

    if(child_yang_name == "master-sync-information")
    {
        if(master_sync_information == nullptr)
        {
            master_sync_information = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation>();
        }
        return master_sync_information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(slave_sync_information != nullptr)
    {
        _children["slave-sync-information"] = slave_sync_information;
    }

    if(master_sync_information != nullptr)
    {
        _children["master-sync-information"] = master_sync_information;
    }

    return _children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type = value;
        sync_show_type.value_namespace = name_space;
        sync_show_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-show-type")
    {
        sync_show_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-sync-information" || name == "master-sync-information" || name == "sync-show-type")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::SlaveSyncInformation()
    :
    insync_tunnels{YType::uint32, "insync-tunnels"},
    insync_sub_ls_ps{YType::uint32, "insync-sub-ls-ps"},
    pending_tunnels{YType::uint32, "pending-tunnels"},
    pending_sub_ls_ps{YType::uint32, "pending-sub-ls-ps"}
        ,
    idt(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt>())
    , vif_pending(this, {})
    , s2l_pending(this, {})
{
    idt->parent = this;

    yang_name = "slave-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::~SlaveSyncInformation()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vif_pending.len(); index++)
    {
        if(vif_pending[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<s2l_pending.len(); index++)
    {
        if(s2l_pending[index]->has_data())
            return true;
    }
    return insync_tunnels.is_set
	|| insync_sub_ls_ps.is_set
	|| pending_tunnels.is_set
	|| pending_sub_ls_ps.is_set
	|| (idt !=  nullptr && idt->has_data());
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::has_operation() const
{
    for (std::size_t index=0; index<vif_pending.len(); index++)
    {
        if(vif_pending[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<s2l_pending.len(); index++)
    {
        if(s2l_pending[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(insync_tunnels.yfilter)
	|| ydk::is_set(insync_sub_ls_ps.yfilter)
	|| ydk::is_set(pending_tunnels.yfilter)
	|| ydk::is_set(pending_sub_ls_ps.yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (insync_tunnels.is_set || is_set(insync_tunnels.yfilter)) leaf_name_data.push_back(insync_tunnels.get_name_leafdata());
    if (insync_sub_ls_ps.is_set || is_set(insync_sub_ls_ps.yfilter)) leaf_name_data.push_back(insync_sub_ls_ps.get_name_leafdata());
    if (pending_tunnels.is_set || is_set(pending_tunnels.yfilter)) leaf_name_data.push_back(pending_tunnels.get_name_leafdata());
    if (pending_sub_ls_ps.is_set || is_set(pending_sub_ls_ps.yfilter)) leaf_name_data.push_back(pending_sub_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt>();
        }
        return idt;
    }

    if(child_yang_name == "vif-pending")
    {
        auto ent_ = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending>();
        ent_->parent = this;
        vif_pending.append(ent_);
        return ent_;
    }

    if(child_yang_name == "s2l-pending")
    {
        auto ent_ = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending>();
        ent_->parent = this;
        s2l_pending.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idt != nullptr)
    {
        _children["idt"] = idt;
    }

    count_ = 0;
    for (auto ent_ : vif_pending.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : s2l_pending.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "insync-tunnels")
    {
        insync_tunnels = value;
        insync_tunnels.value_namespace = name_space;
        insync_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps = value;
        insync_sub_ls_ps.value_namespace = name_space;
        insync_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels = value;
        pending_tunnels.value_namespace = name_space;
        pending_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps = value;
        pending_sub_ls_ps.value_namespace = name_space;
        pending_sub_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "insync-tunnels")
    {
        insync_tunnels.yfilter = yfilter;
    }
    if(value_path == "insync-sub-ls-ps")
    {
        insync_sub_ls_ps.yfilter = yfilter;
    }
    if(value_path == "pending-tunnels")
    {
        pending_tunnels.yfilter = yfilter;
    }
    if(value_path == "pending-sub-ls-ps")
    {
        pending_sub_ls_ps.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt" || name == "vif-pending" || name == "s2l-pending" || name == "insync-tunnels" || name == "insync-sub-ls-ps" || name == "pending-tunnels" || name == "pending-sub-ls-ps")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo>())
    , previous_idt_status(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::~Idt()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_data() const
{
    if (is_presence_container) return true;
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(current_idt_info != nullptr)
    {
        _children["current-idt-info"] = current_idt_info;
    }

    if(previous_idt_status != nullptr)
    {
        _children["previous-idt-status"] = previous_idt_status;
    }

    return _children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/slave-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::VifPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    tunnel_name{YType::str, "tunnel-name"}
{

    yang_name = "vif-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::~VifPending()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_data() const
{
    if (is_presence_container) return true;
    return pending_reason.is_set
	|| tunnel_name.is_set;
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vif-pending";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
        pending_reason.value_namespace = name_space;
        pending_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pending-reason")
    {
        pending_reason.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::VifPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "tunnel-name")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::S2lPending()
    :
    pending_reason{YType::enumeration, "pending-reason"},
    signaled_name{YType::str, "signaled-name"},
    s2l_role{YType::enumeration, "s2l-role"}
{

    yang_name = "s2l-pending"; yang_parent_name = "slave-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::~S2lPending()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_data() const
{
    if (is_presence_container) return true;
    return pending_reason.is_set
	|| signaled_name.is_set
	|| s2l_role.is_set;
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pending_reason.yfilter)
	|| ydk::is_set(signaled_name.yfilter)
	|| ydk::is_set(s2l_role.yfilter);
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/slave-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "s2l-pending";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pending_reason.is_set || is_set(pending_reason.yfilter)) leaf_name_data.push_back(pending_reason.get_name_leafdata());
    if (signaled_name.is_set || is_set(signaled_name.yfilter)) leaf_name_data.push_back(signaled_name.get_name_leafdata());
    if (s2l_role.is_set || is_set(s2l_role.yfilter)) leaf_name_data.push_back(s2l_role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pending-reason")
    {
        pending_reason = value;
        pending_reason.value_namespace = name_space;
        pending_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signaled-name")
    {
        signaled_name = value;
        signaled_name.value_namespace = name_space;
        signaled_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-role")
    {
        s2l_role = value;
        s2l_role.value_namespace = name_space;
        s2l_role.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pending-reason")
    {
        pending_reason.yfilter = yfilter;
    }
    if(value_path == "signaled-name")
    {
        signaled_name.yfilter = yfilter;
    }
    if(value_path == "s2l-role")
    {
        s2l_role.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::SlaveSyncInformation::S2lPending::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pending-reason" || name == "signaled-name" || name == "s2l-role")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::MasterSyncInformation()
    :
    idt(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt>())
{
    idt->parent = this;

    yang_name = "master-sync-information"; yang_parent_name = "sync-status-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::~MasterSyncInformation()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::has_data() const
{
    if (is_presence_container) return true;
    return (idt !=  nullptr && idt->has_data());
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::has_operation() const
{
    return is_set(yfilter)
	|| (idt !=  nullptr && idt->has_operation());
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "master-sync-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt")
    {
        if(idt == nullptr)
        {
            idt = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt>();
        }
        return idt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idt != nullptr)
    {
        _children["idt"] = idt;
    }

    return _children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::Idt()
    :
    current_idt_info(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>())
    , previous_idt_status(std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>())
{
    current_idt_info->parent = this;
    previous_idt_status->parent = this;

    yang_name = "idt"; yang_parent_name = "master-sync-information"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::~Idt()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_data() const
{
    if (is_presence_container) return true;
    return (current_idt_info !=  nullptr && current_idt_info->has_data())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_data());
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_operation() const
{
    return is_set(yfilter)
	|| (current_idt_info !=  nullptr && current_idt_info->has_operation())
	|| (previous_idt_status !=  nullptr && previous_idt_status->has_operation());
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/master-sync-information/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "current-idt-info")
    {
        if(current_idt_info == nullptr)
        {
            current_idt_info = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo>();
        }
        return current_idt_info;
    }

    if(child_yang_name == "previous-idt-status")
    {
        if(previous_idt_status == nullptr)
        {
            previous_idt_status = std::make_shared<MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus>();
        }
        return previous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(current_idt_info != nullptr)
    {
        _children["current-idt-info"] = current_idt_info;
    }

    if(previous_idt_status != nullptr)
    {
        _children["previous-idt-status"] = previous_idt_status;
    }

    return _children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-idt-info" || name == "previous-idt-status")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::CurrentIdtInfo()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "current-idt-info"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::~CurrentIdtInfo()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-idt-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::CurrentIdtInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::PreviousIdtStatus()
    :
    is_ready_status{YType::boolean, "is-ready-status"},
    reason{YType::enumeration, "reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previous-idt-status"; yang_parent_name = "idt"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::~PreviousIdtStatus()
{
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return is_ready_status.is_set
	|| reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_ready_status.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/issu/detail/sync-status-information/master-sync-information/idt/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_ready_status.is_set || is_set(is_ready_status.yfilter)) leaf_name_data.push_back(is_ready_status.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status = value;
        is_ready_status.value_namespace = name_space;
        is_ready_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-ready-status")
    {
        is_ready_status.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool MplsTeStandby::Issu::Detail::SyncStatusInformation::MasterSyncInformation::Idt::PreviousIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-ready-status" || name == "reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntries()
    :
    auto_route_destination_entry(this, {"tunnel_id"})
{

    yang_name = "auto-route-destination-entries"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoRouteDestinationEntries::~AutoRouteDestinationEntries()
{
}

bool MplsTeStandby::AutoRouteDestinationEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<auto_route_destination_entry.len(); index++)
    {
        if(auto_route_destination_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AutoRouteDestinationEntries::has_operation() const
{
    for (std::size_t index=0; index<auto_route_destination_entry.len(); index++)
    {
        if(auto_route_destination_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::AutoRouteDestinationEntries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoRouteDestinationEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-route-destination-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoRouteDestinationEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AutoRouteDestinationEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-route-destination-entry")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry>();
        ent_->parent = this;
        auto_route_destination_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AutoRouteDestinationEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : auto_route_destination_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::AutoRouteDestinationEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AutoRouteDestinationEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AutoRouteDestinationEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto-route-destination-entry")
        return true;
    return false;
}

MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::AutoRouteDestinationEntry()
    :
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_id_xr{YType::uint16, "tunnel-id-xr"},
    tunnel_name{YType::str, "tunnel-name"}
        ,
    tunnel_autoroute_dest(this, {})
{

    yang_name = "auto-route-destination-entry"; yang_parent_name = "auto-route-destination-entries"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::~AutoRouteDestinationEntry()
{
}

bool MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_autoroute_dest.len(); index++)
    {
        if(tunnel_autoroute_dest[index]->has_data())
            return true;
    }
    return tunnel_id.is_set
	|| tunnel_id_xr.is_set
	|| tunnel_name.is_set;
}

bool MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::has_operation() const
{
    for (std::size_t index=0; index<tunnel_autoroute_dest.len(); index++)
    {
        if(tunnel_autoroute_dest[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter)
	|| ydk::is_set(tunnel_name.yfilter);
}

std::string MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/auto-route-destination-entries/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-route-destination-entry";
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-autoroute-dest")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest>();
        ent_->parent = this;
        tunnel_autoroute_dest.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tunnel_autoroute_dest.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-autoroute-dest" || name == "tunnel-id" || name == "tunnel-id-xr" || name == "tunnel-name")
        return true;
    return false;
}

MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::TunnelAutorouteDest()
    :
    prefix_address{YType::str, "prefix-address"},
    prefix_length{YType::uint32, "prefix-length"},
    metric{YType::uint32, "metric"},
    install_time{YType::uint32, "install-time"},
    interface_handle{YType::str, "interface-handle"}
{

    yang_name = "tunnel-autoroute-dest"; yang_parent_name = "auto-route-destination-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::~TunnelAutorouteDest()
{
}

bool MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::has_data() const
{
    if (is_presence_container) return true;
    return prefix_address.is_set
	|| prefix_length.is_set
	|| metric.is_set
	|| install_time.is_set
	|| interface_handle.is_set;
}

bool MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_address.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(install_time.yfilter)
	|| ydk::is_set(interface_handle.yfilter);
}

std::string MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-autoroute-dest";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_address.is_set || is_set(prefix_address.yfilter)) leaf_name_data.push_back(prefix_address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (install_time.is_set || is_set(install_time.yfilter)) leaf_name_data.push_back(install_time.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.yfilter)) leaf_name_data.push_back(interface_handle.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-address")
    {
        prefix_address = value;
        prefix_address.value_namespace = name_space;
        prefix_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "install-time")
    {
        install_time = value;
        install_time.value_namespace = name_space;
        install_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
        interface_handle.value_namespace = name_space;
        interface_handle.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-address")
    {
        prefix_address.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "install-time")
    {
        install_time.yfilter = yfilter;
    }
    if(value_path == "interface-handle")
    {
        interface_handle.yfilter = yfilter;
    }
}

bool MplsTeStandby::AutoRouteDestinationEntries::AutoRouteDestinationEntry::TunnelAutorouteDest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-address" || name == "prefix-length" || name == "metric" || name == "install-time" || name == "interface-handle")
        return true;
    return false;
}

MplsTeStandby::FastReroute::FastReroute()
    :
    backup_tunnels(std::make_shared<MplsTeStandby::FastReroute::BackupTunnels>())
    , protected_interfaces(std::make_shared<MplsTeStandby::FastReroute::ProtectedInterfaces>())
    , protections(std::make_shared<MplsTeStandby::FastReroute::Protections>())
    , promotion(std::make_shared<MplsTeStandby::FastReroute::Promotion>())
{
    backup_tunnels->parent = this;
    protected_interfaces->parent = this;
    protections->parent = this;
    promotion->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::FastReroute::~FastReroute()
{
}

bool MplsTeStandby::FastReroute::has_data() const
{
    if (is_presence_container) return true;
    return (backup_tunnels !=  nullptr && backup_tunnels->has_data())
	|| (protected_interfaces !=  nullptr && protected_interfaces->has_data())
	|| (protections !=  nullptr && protections->has_data())
	|| (promotion !=  nullptr && promotion->has_data());
}

bool MplsTeStandby::FastReroute::has_operation() const
{
    return is_set(yfilter)
	|| (backup_tunnels !=  nullptr && backup_tunnels->has_operation())
	|| (protected_interfaces !=  nullptr && protected_interfaces->has_operation())
	|| (protections !=  nullptr && protections->has_operation())
	|| (promotion !=  nullptr && promotion->has_operation());
}

std::string MplsTeStandby::FastReroute::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-tunnels")
    {
        if(backup_tunnels == nullptr)
        {
            backup_tunnels = std::make_shared<MplsTeStandby::FastReroute::BackupTunnels>();
        }
        return backup_tunnels;
    }

    if(child_yang_name == "protected-interfaces")
    {
        if(protected_interfaces == nullptr)
        {
            protected_interfaces = std::make_shared<MplsTeStandby::FastReroute::ProtectedInterfaces>();
        }
        return protected_interfaces;
    }

    if(child_yang_name == "protections")
    {
        if(protections == nullptr)
        {
            protections = std::make_shared<MplsTeStandby::FastReroute::Protections>();
        }
        return protections;
    }

    if(child_yang_name == "promotion")
    {
        if(promotion == nullptr)
        {
            promotion = std::make_shared<MplsTeStandby::FastReroute::Promotion>();
        }
        return promotion;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(backup_tunnels != nullptr)
    {
        _children["backup-tunnels"] = backup_tunnels;
    }

    if(protected_interfaces != nullptr)
    {
        _children["protected-interfaces"] = protected_interfaces;
    }

    if(protections != nullptr)
    {
        _children["protections"] = protections;
    }

    if(promotion != nullptr)
    {
        _children["promotion"] = promotion;
    }

    return _children;
}

void MplsTeStandby::FastReroute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::FastReroute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::FastReroute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-tunnels" || name == "protected-interfaces" || name == "protections" || name == "promotion")
        return true;
    return false;
}

MplsTeStandby::FastReroute::BackupTunnels::BackupTunnels()
    :
    backup_tunnel(this, {"tunnel_name", "interface_name"})
{

    yang_name = "backup-tunnels"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::FastReroute::BackupTunnels::~BackupTunnels()
{
}

bool MplsTeStandby::FastReroute::BackupTunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<backup_tunnel.len(); index++)
    {
        if(backup_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::FastReroute::BackupTunnels::has_operation() const
{
    for (std::size_t index=0; index<backup_tunnel.len(); index++)
    {
        if(backup_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::FastReroute::BackupTunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::BackupTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::BackupTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::FastReroute::BackupTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup-tunnel")
    {
        auto ent_ = std::make_shared<MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel>();
        ent_->parent = this;
        backup_tunnel.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::FastReroute::BackupTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : backup_tunnel.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::FastReroute::BackupTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::FastReroute::BackupTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::FastReroute::BackupTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup-tunnel")
        return true;
    return false;
}

MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::BackupTunnel()
    :
    tunnel_name{YType::str, "tunnel-name"},
    interface_name{YType::str, "interface-name"},
    backup_tunnel_id{YType::uint32, "backup-tunnel-id"},
    backup_tunnel_name_xr{YType::str, "backup-tunnel-name-xr"},
    backup_status{YType::enumeration, "backup-status"},
    backup_type{YType::enumeration, "backup-type"},
    backup_usage{YType::enumeration, "backup-usage"},
    prot_interface_autobackup_config{YType::enumeration, "prot-interface-autobackup-config"},
    prot_interface_srlg_config{YType::enumeration, "prot-interface-srlg-config"},
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    has_attribute_set{YType::boolean, "has-attribute-set"},
    is_attribute_set_in_db{YType::boolean, "is-attribute-set-in-db"},
    recreate_timer_is_running{YType::boolean, "recreate-timer-is-running"},
    recreate_remaining_time{YType::uint32, "recreate-remaining-time"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    general_status{YType::enumeration, "general-status"},
    connection_status{YType::enumeration, "connection-status"},
    output_interface_name{YType::str, "output-interface-name"},
    bandwidth_pool_type{YType::enumeration, "bandwidth-pool-type"},
    bandwidth_limit_type{YType::enumeration, "bandwidth-limit-type"},
    bandwidth{YType::uint32, "bandwidth"},
    tunnel_instance{YType::uint32, "tunnel-instance"},
    in_use_bandwidth{YType::uint32, "in-use-bandwidth"},
    soft_preempted_in_use_bandwidth{YType::uint32, "soft-preempted-in-use-bandwidth"},
    ls_ps{YType::uint32, "ls-ps"},
    s2l_families{YType::uint32, "s2l-families"},
    s2_ls{YType::uint32, "s2-ls"},
    frr_active_ls_ps{YType::uint32, "frr-active-ls-ps"},
    frr_active_soft_preempted_ls_ps{YType::uint32, "frr-active-soft-preempted-ls-ps"}
{

    yang_name = "backup-tunnel"; yang_parent_name = "backup-tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::~BackupTunnel()
{
}

bool MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_name.is_set
	|| interface_name.is_set
	|| backup_tunnel_id.is_set
	|| backup_tunnel_name_xr.is_set
	|| backup_status.is_set
	|| backup_type.is_set
	|| backup_usage.is_set
	|| prot_interface_autobackup_config.is_set
	|| prot_interface_srlg_config.is_set
	|| tunnel_attribute_set_name.is_set
	|| has_attribute_set.is_set
	|| is_attribute_set_in_db.is_set
	|| recreate_timer_is_running.is_set
	|| recreate_remaining_time.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| general_status.is_set
	|| connection_status.is_set
	|| output_interface_name.is_set
	|| bandwidth_pool_type.is_set
	|| bandwidth_limit_type.is_set
	|| bandwidth.is_set
	|| tunnel_instance.is_set
	|| in_use_bandwidth.is_set
	|| soft_preempted_in_use_bandwidth.is_set
	|| ls_ps.is_set
	|| s2l_families.is_set
	|| s2_ls.is_set
	|| frr_active_ls_ps.is_set
	|| frr_active_soft_preempted_ls_ps.is_set;
}

bool MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(backup_tunnel_id.yfilter)
	|| ydk::is_set(backup_tunnel_name_xr.yfilter)
	|| ydk::is_set(backup_status.yfilter)
	|| ydk::is_set(backup_type.yfilter)
	|| ydk::is_set(backup_usage.yfilter)
	|| ydk::is_set(prot_interface_autobackup_config.yfilter)
	|| ydk::is_set(prot_interface_srlg_config.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(has_attribute_set.yfilter)
	|| ydk::is_set(is_attribute_set_in_db.yfilter)
	|| ydk::is_set(recreate_timer_is_running.yfilter)
	|| ydk::is_set(recreate_remaining_time.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(general_status.yfilter)
	|| ydk::is_set(connection_status.yfilter)
	|| ydk::is_set(output_interface_name.yfilter)
	|| ydk::is_set(bandwidth_pool_type.yfilter)
	|| ydk::is_set(bandwidth_limit_type.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(tunnel_instance.yfilter)
	|| ydk::is_set(in_use_bandwidth.yfilter)
	|| ydk::is_set(soft_preempted_in_use_bandwidth.yfilter)
	|| ydk::is_set(ls_ps.yfilter)
	|| ydk::is_set(s2l_families.yfilter)
	|| ydk::is_set(s2_ls.yfilter)
	|| ydk::is_set(frr_active_ls_ps.yfilter)
	|| ydk::is_set(frr_active_soft_preempted_ls_ps.yfilter);
}

std::string MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/fast-reroute/backup-tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-tunnel";
    ADD_KEY_TOKEN(tunnel_name, "tunnel-name");
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (backup_tunnel_id.is_set || is_set(backup_tunnel_id.yfilter)) leaf_name_data.push_back(backup_tunnel_id.get_name_leafdata());
    if (backup_tunnel_name_xr.is_set || is_set(backup_tunnel_name_xr.yfilter)) leaf_name_data.push_back(backup_tunnel_name_xr.get_name_leafdata());
    if (backup_status.is_set || is_set(backup_status.yfilter)) leaf_name_data.push_back(backup_status.get_name_leafdata());
    if (backup_type.is_set || is_set(backup_type.yfilter)) leaf_name_data.push_back(backup_type.get_name_leafdata());
    if (backup_usage.is_set || is_set(backup_usage.yfilter)) leaf_name_data.push_back(backup_usage.get_name_leafdata());
    if (prot_interface_autobackup_config.is_set || is_set(prot_interface_autobackup_config.yfilter)) leaf_name_data.push_back(prot_interface_autobackup_config.get_name_leafdata());
    if (prot_interface_srlg_config.is_set || is_set(prot_interface_srlg_config.yfilter)) leaf_name_data.push_back(prot_interface_srlg_config.get_name_leafdata());
    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (has_attribute_set.is_set || is_set(has_attribute_set.yfilter)) leaf_name_data.push_back(has_attribute_set.get_name_leafdata());
    if (is_attribute_set_in_db.is_set || is_set(is_attribute_set_in_db.yfilter)) leaf_name_data.push_back(is_attribute_set_in_db.get_name_leafdata());
    if (recreate_timer_is_running.is_set || is_set(recreate_timer_is_running.yfilter)) leaf_name_data.push_back(recreate_timer_is_running.get_name_leafdata());
    if (recreate_remaining_time.is_set || is_set(recreate_remaining_time.yfilter)) leaf_name_data.push_back(recreate_remaining_time.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (general_status.is_set || is_set(general_status.yfilter)) leaf_name_data.push_back(general_status.get_name_leafdata());
    if (connection_status.is_set || is_set(connection_status.yfilter)) leaf_name_data.push_back(connection_status.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.yfilter)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());
    if (bandwidth_pool_type.is_set || is_set(bandwidth_pool_type.yfilter)) leaf_name_data.push_back(bandwidth_pool_type.get_name_leafdata());
    if (bandwidth_limit_type.is_set || is_set(bandwidth_limit_type.yfilter)) leaf_name_data.push_back(bandwidth_limit_type.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (tunnel_instance.is_set || is_set(tunnel_instance.yfilter)) leaf_name_data.push_back(tunnel_instance.get_name_leafdata());
    if (in_use_bandwidth.is_set || is_set(in_use_bandwidth.yfilter)) leaf_name_data.push_back(in_use_bandwidth.get_name_leafdata());
    if (soft_preempted_in_use_bandwidth.is_set || is_set(soft_preempted_in_use_bandwidth.yfilter)) leaf_name_data.push_back(soft_preempted_in_use_bandwidth.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.yfilter)) leaf_name_data.push_back(ls_ps.get_name_leafdata());
    if (s2l_families.is_set || is_set(s2l_families.yfilter)) leaf_name_data.push_back(s2l_families.get_name_leafdata());
    if (s2_ls.is_set || is_set(s2_ls.yfilter)) leaf_name_data.push_back(s2_ls.get_name_leafdata());
    if (frr_active_ls_ps.is_set || is_set(frr_active_ls_ps.yfilter)) leaf_name_data.push_back(frr_active_ls_ps.get_name_leafdata());
    if (frr_active_soft_preempted_ls_ps.is_set || is_set(frr_active_soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(frr_active_soft_preempted_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-id")
    {
        backup_tunnel_id = value;
        backup_tunnel_id.value_namespace = name_space;
        backup_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-name-xr")
    {
        backup_tunnel_name_xr = value;
        backup_tunnel_name_xr.value_namespace = name_space;
        backup_tunnel_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-status")
    {
        backup_status = value;
        backup_status.value_namespace = name_space;
        backup_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-type")
    {
        backup_type = value;
        backup_type.value_namespace = name_space;
        backup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-usage")
    {
        backup_usage = value;
        backup_usage.value_namespace = name_space;
        backup_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prot-interface-autobackup-config")
    {
        prot_interface_autobackup_config = value;
        prot_interface_autobackup_config.value_namespace = name_space;
        prot_interface_autobackup_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prot-interface-srlg-config")
    {
        prot_interface_srlg_config = value;
        prot_interface_srlg_config.value_namespace = name_space;
        prot_interface_srlg_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
        tunnel_attribute_set_name.value_namespace = name_space;
        tunnel_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set = value;
        has_attribute_set.value_namespace = name_space;
        has_attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db = value;
        is_attribute_set_in_db.value_namespace = name_space;
        is_attribute_set_in_db.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recreate-timer-is-running")
    {
        recreate_timer_is_running = value;
        recreate_timer_is_running.value_namespace = name_space;
        recreate_timer_is_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recreate-remaining-time")
    {
        recreate_remaining_time = value;
        recreate_remaining_time.value_namespace = name_space;
        recreate_remaining_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-status")
    {
        general_status = value;
        general_status.value_namespace = name_space;
        general_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-status")
    {
        connection_status = value;
        connection_status.value_namespace = name_space;
        connection_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name = value;
        output_interface_name.value_namespace = name_space;
        output_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type = value;
        bandwidth_pool_type.value_namespace = name_space;
        bandwidth_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type = value;
        bandwidth_limit_type.value_namespace = name_space;
        bandwidth_limit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance = value;
        tunnel_instance.value_namespace = name_space;
        tunnel_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use-bandwidth")
    {
        in_use_bandwidth = value;
        in_use_bandwidth.value_namespace = name_space;
        in_use_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-in-use-bandwidth")
    {
        soft_preempted_in_use_bandwidth = value;
        soft_preempted_in_use_bandwidth.value_namespace = name_space;
        soft_preempted_in_use_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
        ls_ps.value_namespace = name_space;
        ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-families")
    {
        s2l_families = value;
        s2l_families.value_namespace = name_space;
        s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2-ls")
    {
        s2_ls = value;
        s2_ls.value_namespace = name_space;
        s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-active-ls-ps")
    {
        frr_active_ls_ps = value;
        frr_active_ls_ps.value_namespace = name_space;
        frr_active_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-active-soft-preempted-ls-ps")
    {
        frr_active_soft_preempted_ls_ps = value;
        frr_active_soft_preempted_ls_ps.value_namespace = name_space;
        frr_active_soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-id")
    {
        backup_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name-xr")
    {
        backup_tunnel_name_xr.yfilter = yfilter;
    }
    if(value_path == "backup-status")
    {
        backup_status.yfilter = yfilter;
    }
    if(value_path == "backup-type")
    {
        backup_type.yfilter = yfilter;
    }
    if(value_path == "backup-usage")
    {
        backup_usage.yfilter = yfilter;
    }
    if(value_path == "prot-interface-autobackup-config")
    {
        prot_interface_autobackup_config.yfilter = yfilter;
    }
    if(value_path == "prot-interface-srlg-config")
    {
        prot_interface_srlg_config.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set.yfilter = yfilter;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db.yfilter = yfilter;
    }
    if(value_path == "recreate-timer-is-running")
    {
        recreate_timer_is_running.yfilter = yfilter;
    }
    if(value_path == "recreate-remaining-time")
    {
        recreate_remaining_time.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "general-status")
    {
        general_status.yfilter = yfilter;
    }
    if(value_path == "connection-status")
    {
        connection_status.yfilter = yfilter;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name.yfilter = yfilter;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance.yfilter = yfilter;
    }
    if(value_path == "in-use-bandwidth")
    {
        in_use_bandwidth.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-in-use-bandwidth")
    {
        soft_preempted_in_use_bandwidth.yfilter = yfilter;
    }
    if(value_path == "ls-ps")
    {
        ls_ps.yfilter = yfilter;
    }
    if(value_path == "s2l-families")
    {
        s2l_families.yfilter = yfilter;
    }
    if(value_path == "s2-ls")
    {
        s2_ls.yfilter = yfilter;
    }
    if(value_path == "frr-active-ls-ps")
    {
        frr_active_ls_ps.yfilter = yfilter;
    }
    if(value_path == "frr-active-soft-preempted-ls-ps")
    {
        frr_active_soft_preempted_ls_ps.yfilter = yfilter;
    }
}

bool MplsTeStandby::FastReroute::BackupTunnels::BackupTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-name" || name == "interface-name" || name == "backup-tunnel-id" || name == "backup-tunnel-name-xr" || name == "backup-status" || name == "backup-type" || name == "backup-usage" || name == "prot-interface-autobackup-config" || name == "prot-interface-srlg-config" || name == "tunnel-attribute-set-name" || name == "has-attribute-set" || name == "is-attribute-set-in-db" || name == "recreate-timer-is-running" || name == "recreate-remaining-time" || name == "source-address" || name == "destination-address" || name == "general-status" || name == "connection-status" || name == "output-interface-name" || name == "bandwidth-pool-type" || name == "bandwidth-limit-type" || name == "bandwidth" || name == "tunnel-instance" || name == "in-use-bandwidth" || name == "soft-preempted-in-use-bandwidth" || name == "ls-ps" || name == "s2l-families" || name == "s2-ls" || name == "frr-active-ls-ps" || name == "frr-active-soft-preempted-ls-ps")
        return true;
    return false;
}

MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterfaces()
    :
    protected_interface(this, {"interface_name", "backup_tunnel_name"})
{

    yang_name = "protected-interfaces"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::FastReroute::ProtectedInterfaces::~ProtectedInterfaces()
{
}

bool MplsTeStandby::FastReroute::ProtectedInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protected_interface.len(); index++)
    {
        if(protected_interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::FastReroute::ProtectedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<protected_interface.len(); index++)
    {
        if(protected_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::FastReroute::ProtectedInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::ProtectedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::ProtectedInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::FastReroute::ProtectedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protected-interface")
    {
        auto ent_ = std::make_shared<MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface>();
        ent_->parent = this;
        protected_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::FastReroute::ProtectedInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protected_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::FastReroute::ProtectedInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::FastReroute::ProtectedInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::FastReroute::ProtectedInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-interface")
        return true;
    return false;
}

MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::ProtectedInterface()
    :
    interface_name{YType::str, "interface-name"},
    backup_tunnel_name{YType::str, "backup-tunnel-name"},
    backup_tunnel_id{YType::uint32, "backup-tunnel-id"},
    backup_tunnel_name_xr{YType::str, "backup-tunnel-name-xr"},
    backup_status{YType::enumeration, "backup-status"},
    backup_type{YType::enumeration, "backup-type"},
    backup_usage{YType::enumeration, "backup-usage"},
    prot_interface_autobackup_config{YType::enumeration, "prot-interface-autobackup-config"},
    prot_interface_srlg_config{YType::enumeration, "prot-interface-srlg-config"},
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    has_attribute_set{YType::boolean, "has-attribute-set"},
    is_attribute_set_in_db{YType::boolean, "is-attribute-set-in-db"},
    recreate_timer_is_running{YType::boolean, "recreate-timer-is-running"},
    recreate_remaining_time{YType::uint32, "recreate-remaining-time"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    general_status{YType::enumeration, "general-status"},
    connection_status{YType::enumeration, "connection-status"},
    output_interface_name{YType::str, "output-interface-name"},
    bandwidth_pool_type{YType::enumeration, "bandwidth-pool-type"},
    bandwidth_limit_type{YType::enumeration, "bandwidth-limit-type"},
    bandwidth{YType::uint32, "bandwidth"},
    tunnel_instance{YType::uint32, "tunnel-instance"},
    in_use_bandwidth{YType::uint32, "in-use-bandwidth"},
    soft_preempted_in_use_bandwidth{YType::uint32, "soft-preempted-in-use-bandwidth"},
    ls_ps{YType::uint32, "ls-ps"},
    s2l_families{YType::uint32, "s2l-families"},
    s2_ls{YType::uint32, "s2-ls"},
    frr_active_ls_ps{YType::uint32, "frr-active-ls-ps"},
    frr_active_soft_preempted_ls_ps{YType::uint32, "frr-active-soft-preempted-ls-ps"}
{

    yang_name = "protected-interface"; yang_parent_name = "protected-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| backup_tunnel_name.is_set
	|| backup_tunnel_id.is_set
	|| backup_tunnel_name_xr.is_set
	|| backup_status.is_set
	|| backup_type.is_set
	|| backup_usage.is_set
	|| prot_interface_autobackup_config.is_set
	|| prot_interface_srlg_config.is_set
	|| tunnel_attribute_set_name.is_set
	|| has_attribute_set.is_set
	|| is_attribute_set_in_db.is_set
	|| recreate_timer_is_running.is_set
	|| recreate_remaining_time.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| general_status.is_set
	|| connection_status.is_set
	|| output_interface_name.is_set
	|| bandwidth_pool_type.is_set
	|| bandwidth_limit_type.is_set
	|| bandwidth.is_set
	|| tunnel_instance.is_set
	|| in_use_bandwidth.is_set
	|| soft_preempted_in_use_bandwidth.is_set
	|| ls_ps.is_set
	|| s2l_families.is_set
	|| s2_ls.is_set
	|| frr_active_ls_ps.is_set
	|| frr_active_soft_preempted_ls_ps.is_set;
}

bool MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(backup_tunnel_name.yfilter)
	|| ydk::is_set(backup_tunnel_id.yfilter)
	|| ydk::is_set(backup_tunnel_name_xr.yfilter)
	|| ydk::is_set(backup_status.yfilter)
	|| ydk::is_set(backup_type.yfilter)
	|| ydk::is_set(backup_usage.yfilter)
	|| ydk::is_set(prot_interface_autobackup_config.yfilter)
	|| ydk::is_set(prot_interface_srlg_config.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(has_attribute_set.yfilter)
	|| ydk::is_set(is_attribute_set_in_db.yfilter)
	|| ydk::is_set(recreate_timer_is_running.yfilter)
	|| ydk::is_set(recreate_remaining_time.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(general_status.yfilter)
	|| ydk::is_set(connection_status.yfilter)
	|| ydk::is_set(output_interface_name.yfilter)
	|| ydk::is_set(bandwidth_pool_type.yfilter)
	|| ydk::is_set(bandwidth_limit_type.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(tunnel_instance.yfilter)
	|| ydk::is_set(in_use_bandwidth.yfilter)
	|| ydk::is_set(soft_preempted_in_use_bandwidth.yfilter)
	|| ydk::is_set(ls_ps.yfilter)
	|| ydk::is_set(s2l_families.yfilter)
	|| ydk::is_set(s2_ls.yfilter)
	|| ydk::is_set(frr_active_ls_ps.yfilter)
	|| ydk::is_set(frr_active_soft_preempted_ls_ps.yfilter);
}

std::string MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/fast-reroute/protected-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(backup_tunnel_name, "backup-tunnel-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (backup_tunnel_name.is_set || is_set(backup_tunnel_name.yfilter)) leaf_name_data.push_back(backup_tunnel_name.get_name_leafdata());
    if (backup_tunnel_id.is_set || is_set(backup_tunnel_id.yfilter)) leaf_name_data.push_back(backup_tunnel_id.get_name_leafdata());
    if (backup_tunnel_name_xr.is_set || is_set(backup_tunnel_name_xr.yfilter)) leaf_name_data.push_back(backup_tunnel_name_xr.get_name_leafdata());
    if (backup_status.is_set || is_set(backup_status.yfilter)) leaf_name_data.push_back(backup_status.get_name_leafdata());
    if (backup_type.is_set || is_set(backup_type.yfilter)) leaf_name_data.push_back(backup_type.get_name_leafdata());
    if (backup_usage.is_set || is_set(backup_usage.yfilter)) leaf_name_data.push_back(backup_usage.get_name_leafdata());
    if (prot_interface_autobackup_config.is_set || is_set(prot_interface_autobackup_config.yfilter)) leaf_name_data.push_back(prot_interface_autobackup_config.get_name_leafdata());
    if (prot_interface_srlg_config.is_set || is_set(prot_interface_srlg_config.yfilter)) leaf_name_data.push_back(prot_interface_srlg_config.get_name_leafdata());
    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (has_attribute_set.is_set || is_set(has_attribute_set.yfilter)) leaf_name_data.push_back(has_attribute_set.get_name_leafdata());
    if (is_attribute_set_in_db.is_set || is_set(is_attribute_set_in_db.yfilter)) leaf_name_data.push_back(is_attribute_set_in_db.get_name_leafdata());
    if (recreate_timer_is_running.is_set || is_set(recreate_timer_is_running.yfilter)) leaf_name_data.push_back(recreate_timer_is_running.get_name_leafdata());
    if (recreate_remaining_time.is_set || is_set(recreate_remaining_time.yfilter)) leaf_name_data.push_back(recreate_remaining_time.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (general_status.is_set || is_set(general_status.yfilter)) leaf_name_data.push_back(general_status.get_name_leafdata());
    if (connection_status.is_set || is_set(connection_status.yfilter)) leaf_name_data.push_back(connection_status.get_name_leafdata());
    if (output_interface_name.is_set || is_set(output_interface_name.yfilter)) leaf_name_data.push_back(output_interface_name.get_name_leafdata());
    if (bandwidth_pool_type.is_set || is_set(bandwidth_pool_type.yfilter)) leaf_name_data.push_back(bandwidth_pool_type.get_name_leafdata());
    if (bandwidth_limit_type.is_set || is_set(bandwidth_limit_type.yfilter)) leaf_name_data.push_back(bandwidth_limit_type.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (tunnel_instance.is_set || is_set(tunnel_instance.yfilter)) leaf_name_data.push_back(tunnel_instance.get_name_leafdata());
    if (in_use_bandwidth.is_set || is_set(in_use_bandwidth.yfilter)) leaf_name_data.push_back(in_use_bandwidth.get_name_leafdata());
    if (soft_preempted_in_use_bandwidth.is_set || is_set(soft_preempted_in_use_bandwidth.yfilter)) leaf_name_data.push_back(soft_preempted_in_use_bandwidth.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.yfilter)) leaf_name_data.push_back(ls_ps.get_name_leafdata());
    if (s2l_families.is_set || is_set(s2l_families.yfilter)) leaf_name_data.push_back(s2l_families.get_name_leafdata());
    if (s2_ls.is_set || is_set(s2_ls.yfilter)) leaf_name_data.push_back(s2_ls.get_name_leafdata());
    if (frr_active_ls_ps.is_set || is_set(frr_active_ls_ps.yfilter)) leaf_name_data.push_back(frr_active_ls_ps.get_name_leafdata());
    if (frr_active_soft_preempted_ls_ps.is_set || is_set(frr_active_soft_preempted_ls_ps.yfilter)) leaf_name_data.push_back(frr_active_soft_preempted_ls_ps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name = value;
        backup_tunnel_name.value_namespace = name_space;
        backup_tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-id")
    {
        backup_tunnel_id = value;
        backup_tunnel_id.value_namespace = name_space;
        backup_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-tunnel-name-xr")
    {
        backup_tunnel_name_xr = value;
        backup_tunnel_name_xr.value_namespace = name_space;
        backup_tunnel_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-status")
    {
        backup_status = value;
        backup_status.value_namespace = name_space;
        backup_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-type")
    {
        backup_type = value;
        backup_type.value_namespace = name_space;
        backup_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-usage")
    {
        backup_usage = value;
        backup_usage.value_namespace = name_space;
        backup_usage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prot-interface-autobackup-config")
    {
        prot_interface_autobackup_config = value;
        prot_interface_autobackup_config.value_namespace = name_space;
        prot_interface_autobackup_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prot-interface-srlg-config")
    {
        prot_interface_srlg_config = value;
        prot_interface_srlg_config.value_namespace = name_space;
        prot_interface_srlg_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
        tunnel_attribute_set_name.value_namespace = name_space;
        tunnel_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set = value;
        has_attribute_set.value_namespace = name_space;
        has_attribute_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db = value;
        is_attribute_set_in_db.value_namespace = name_space;
        is_attribute_set_in_db.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recreate-timer-is-running")
    {
        recreate_timer_is_running = value;
        recreate_timer_is_running.value_namespace = name_space;
        recreate_timer_is_running.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recreate-remaining-time")
    {
        recreate_remaining_time = value;
        recreate_remaining_time.value_namespace = name_space;
        recreate_remaining_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "general-status")
    {
        general_status = value;
        general_status.value_namespace = name_space;
        general_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-status")
    {
        connection_status = value;
        connection_status.value_namespace = name_space;
        connection_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name = value;
        output_interface_name.value_namespace = name_space;
        output_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type = value;
        bandwidth_pool_type.value_namespace = name_space;
        bandwidth_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type = value;
        bandwidth_limit_type.value_namespace = name_space;
        bandwidth_limit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance = value;
        tunnel_instance.value_namespace = name_space;
        tunnel_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use-bandwidth")
    {
        in_use_bandwidth = value;
        in_use_bandwidth.value_namespace = name_space;
        in_use_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preempted-in-use-bandwidth")
    {
        soft_preempted_in_use_bandwidth = value;
        soft_preempted_in_use_bandwidth.value_namespace = name_space;
        soft_preempted_in_use_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
        ls_ps.value_namespace = name_space;
        ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-families")
    {
        s2l_families = value;
        s2l_families.value_namespace = name_space;
        s2l_families.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2-ls")
    {
        s2_ls = value;
        s2_ls.value_namespace = name_space;
        s2_ls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-active-ls-ps")
    {
        frr_active_ls_ps = value;
        frr_active_ls_ps.value_namespace = name_space;
        frr_active_ls_ps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-active-soft-preempted-ls-ps")
    {
        frr_active_soft_preempted_ls_ps = value;
        frr_active_soft_preempted_ls_ps.value_namespace = name_space;
        frr_active_soft_preempted_ls_ps.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name")
    {
        backup_tunnel_name.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-id")
    {
        backup_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "backup-tunnel-name-xr")
    {
        backup_tunnel_name_xr.yfilter = yfilter;
    }
    if(value_path == "backup-status")
    {
        backup_status.yfilter = yfilter;
    }
    if(value_path == "backup-type")
    {
        backup_type.yfilter = yfilter;
    }
    if(value_path == "backup-usage")
    {
        backup_usage.yfilter = yfilter;
    }
    if(value_path == "prot-interface-autobackup-config")
    {
        prot_interface_autobackup_config.yfilter = yfilter;
    }
    if(value_path == "prot-interface-srlg-config")
    {
        prot_interface_srlg_config.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "has-attribute-set")
    {
        has_attribute_set.yfilter = yfilter;
    }
    if(value_path == "is-attribute-set-in-db")
    {
        is_attribute_set_in_db.yfilter = yfilter;
    }
    if(value_path == "recreate-timer-is-running")
    {
        recreate_timer_is_running.yfilter = yfilter;
    }
    if(value_path == "recreate-remaining-time")
    {
        recreate_remaining_time.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "general-status")
    {
        general_status.yfilter = yfilter;
    }
    if(value_path == "connection-status")
    {
        connection_status.yfilter = yfilter;
    }
    if(value_path == "output-interface-name")
    {
        output_interface_name.yfilter = yfilter;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance.yfilter = yfilter;
    }
    if(value_path == "in-use-bandwidth")
    {
        in_use_bandwidth.yfilter = yfilter;
    }
    if(value_path == "soft-preempted-in-use-bandwidth")
    {
        soft_preempted_in_use_bandwidth.yfilter = yfilter;
    }
    if(value_path == "ls-ps")
    {
        ls_ps.yfilter = yfilter;
    }
    if(value_path == "s2l-families")
    {
        s2l_families.yfilter = yfilter;
    }
    if(value_path == "s2-ls")
    {
        s2_ls.yfilter = yfilter;
    }
    if(value_path == "frr-active-ls-ps")
    {
        frr_active_ls_ps.yfilter = yfilter;
    }
    if(value_path == "frr-active-soft-preempted-ls-ps")
    {
        frr_active_soft_preempted_ls_ps.yfilter = yfilter;
    }
}

bool MplsTeStandby::FastReroute::ProtectedInterfaces::ProtectedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "backup-tunnel-name" || name == "backup-tunnel-id" || name == "backup-tunnel-name-xr" || name == "backup-status" || name == "backup-type" || name == "backup-usage" || name == "prot-interface-autobackup-config" || name == "prot-interface-srlg-config" || name == "tunnel-attribute-set-name" || name == "has-attribute-set" || name == "is-attribute-set-in-db" || name == "recreate-timer-is-running" || name == "recreate-remaining-time" || name == "source-address" || name == "destination-address" || name == "general-status" || name == "connection-status" || name == "output-interface-name" || name == "bandwidth-pool-type" || name == "bandwidth-limit-type" || name == "bandwidth" || name == "tunnel-instance" || name == "in-use-bandwidth" || name == "soft-preempted-in-use-bandwidth" || name == "ls-ps" || name == "s2l-families" || name == "s2-ls" || name == "frr-active-ls-ps" || name == "frr-active-soft-preempted-ls-ps")
        return true;
    return false;
}

MplsTeStandby::FastReroute::Protections::Protections()
    :
    protection(this, {"source_address", "destination_address", "tunnel_id", "extended_tunnel_id", "lsp_id", "sub_group_id", "sub_group_originator", "p2mp_id", "session_type"})
{

    yang_name = "protections"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::FastReroute::Protections::~Protections()
{
}

bool MplsTeStandby::FastReroute::Protections::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protection.len(); index++)
    {
        if(protection[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::FastReroute::Protections::has_operation() const
{
    for (std::size_t index=0; index<protection.len(); index++)
    {
        if(protection[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::FastReroute::Protections::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::Protections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protections";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::Protections::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::FastReroute::Protections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protection")
    {
        auto ent_ = std::make_shared<MplsTeStandby::FastReroute::Protections::Protection>();
        ent_->parent = this;
        protection.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::FastReroute::Protections::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protection.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::FastReroute::Protections::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::FastReroute::Protections::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::FastReroute::Protections::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protection")
        return true;
    return false;
}

MplsTeStandby::FastReroute::Protections::Protection::Protection()
    :
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    tunnel_id{YType::uint32, "tunnel-id"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    lsp_id{YType::uint32, "lsp-id"},
    sub_group_id{YType::uint32, "sub-group-id"},
    sub_group_originator{YType::str, "sub-group-originator"},
    p2mp_id{YType::uint32, "p2mp-id"},
    session_type{YType::uint32, "session-type"},
    source_address_xr{YType::str, "source-address-xr"},
    destination_address_xr{YType::str, "destination-address-xr"},
    tunnel_id_xr{YType::uint32, "tunnel-id-xr"},
    extended_tunnel_id_xr{YType::str, "extended-tunnel-id-xr"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_instance{YType::uint32, "tunnel-instance"},
    role{YType::enumeration, "role"},
    admin_status{YType::enumeration, "admin-status"},
    operation_status{YType::enumeration, "operation-status"},
    is_signalled{YType::boolean, "is-signalled"},
    is_frr_requested{YType::boolean, "is-frr-requested"},
    outbound_frr_state{YType::enumeration, "outbound-frr-state"},
    inbound_frr_state{YType::enumeration, "inbound-frr-state"},
    output_interface_lsp{YType::str, "output-interface-lsp"},
    output_label{YType::uint32, "output-label"},
    next_hop_address{YType::str, "next-hop-address"},
    frr_output_tunnel_interface{YType::str, "frr-output-tunnel-interface"},
    frr_output_label{YType::uint32, "frr-output-label"},
    backup_status{YType::enumeration, "backup-status"},
    bandwidth_pool_type{YType::enumeration, "bandwidth-pool-type"},
    bandwidth_limit_type{YType::enumeration, "bandwidth-limit-type"},
    original_input_interface{YType::str, "original-input-interface"},
    input_label{YType::uint32, "input-label"},
    previous_hop_address{YType::str, "previous-hop-address"},
    backup_bandwidth{YType::uint32, "backup-bandwidth"},
    frr_output_interface{YType::str, "frr-output-interface"},
    backup_next_hop_address{YType::str, "backup-next-hop-address"},
    lsp_bandwidth_type{YType::enumeration, "lsp-bandwidth-type"},
    sharing_type{YType::enumeration, "sharing-type"},
    is_p2mp_tunnel{YType::boolean, "is-p2mp-tunnel"},
    sub_group_original_id{YType::str, "sub-group-original-id"},
    sub_group_id_xr{YType::uint16, "sub-group-id-xr"},
    p2mp_id_xr{YType::uint32, "p2mp-id-xr"}
{

    yang_name = "protection"; yang_parent_name = "protections"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::FastReroute::Protections::Protection::~Protection()
{
}

bool MplsTeStandby::FastReroute::Protections::Protection::has_data() const
{
    if (is_presence_container) return true;
    return source_address.is_set
	|| destination_address.is_set
	|| tunnel_id.is_set
	|| extended_tunnel_id.is_set
	|| lsp_id.is_set
	|| sub_group_id.is_set
	|| sub_group_originator.is_set
	|| p2mp_id.is_set
	|| session_type.is_set
	|| source_address_xr.is_set
	|| destination_address_xr.is_set
	|| tunnel_id_xr.is_set
	|| extended_tunnel_id_xr.is_set
	|| tunnel_name.is_set
	|| tunnel_instance.is_set
	|| role.is_set
	|| admin_status.is_set
	|| operation_status.is_set
	|| is_signalled.is_set
	|| is_frr_requested.is_set
	|| outbound_frr_state.is_set
	|| inbound_frr_state.is_set
	|| output_interface_lsp.is_set
	|| output_label.is_set
	|| next_hop_address.is_set
	|| frr_output_tunnel_interface.is_set
	|| frr_output_label.is_set
	|| backup_status.is_set
	|| bandwidth_pool_type.is_set
	|| bandwidth_limit_type.is_set
	|| original_input_interface.is_set
	|| input_label.is_set
	|| previous_hop_address.is_set
	|| backup_bandwidth.is_set
	|| frr_output_interface.is_set
	|| backup_next_hop_address.is_set
	|| lsp_bandwidth_type.is_set
	|| sharing_type.is_set
	|| is_p2mp_tunnel.is_set
	|| sub_group_original_id.is_set
	|| sub_group_id_xr.is_set
	|| p2mp_id_xr.is_set;
}

bool MplsTeStandby::FastReroute::Protections::Protection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(sub_group_id.yfilter)
	|| ydk::is_set(sub_group_originator.yfilter)
	|| ydk::is_set(p2mp_id.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(source_address_xr.yfilter)
	|| ydk::is_set(destination_address_xr.yfilter)
	|| ydk::is_set(tunnel_id_xr.yfilter)
	|| ydk::is_set(extended_tunnel_id_xr.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(tunnel_instance.yfilter)
	|| ydk::is_set(role.yfilter)
	|| ydk::is_set(admin_status.yfilter)
	|| ydk::is_set(operation_status.yfilter)
	|| ydk::is_set(is_signalled.yfilter)
	|| ydk::is_set(is_frr_requested.yfilter)
	|| ydk::is_set(outbound_frr_state.yfilter)
	|| ydk::is_set(inbound_frr_state.yfilter)
	|| ydk::is_set(output_interface_lsp.yfilter)
	|| ydk::is_set(output_label.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(frr_output_tunnel_interface.yfilter)
	|| ydk::is_set(frr_output_label.yfilter)
	|| ydk::is_set(backup_status.yfilter)
	|| ydk::is_set(bandwidth_pool_type.yfilter)
	|| ydk::is_set(bandwidth_limit_type.yfilter)
	|| ydk::is_set(original_input_interface.yfilter)
	|| ydk::is_set(input_label.yfilter)
	|| ydk::is_set(previous_hop_address.yfilter)
	|| ydk::is_set(backup_bandwidth.yfilter)
	|| ydk::is_set(frr_output_interface.yfilter)
	|| ydk::is_set(backup_next_hop_address.yfilter)
	|| ydk::is_set(lsp_bandwidth_type.yfilter)
	|| ydk::is_set(sharing_type.yfilter)
	|| ydk::is_set(is_p2mp_tunnel.yfilter)
	|| ydk::is_set(sub_group_original_id.yfilter)
	|| ydk::is_set(sub_group_id_xr.yfilter)
	|| ydk::is_set(p2mp_id_xr.yfilter);
}

std::string MplsTeStandby::FastReroute::Protections::Protection::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/fast-reroute/protections/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::Protections::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";
    ADD_KEY_TOKEN(source_address, "source-address");
    ADD_KEY_TOKEN(destination_address, "destination-address");
    ADD_KEY_TOKEN(tunnel_id, "tunnel-id");
    ADD_KEY_TOKEN(extended_tunnel_id, "extended-tunnel-id");
    ADD_KEY_TOKEN(lsp_id, "lsp-id");
    ADD_KEY_TOKEN(sub_group_id, "sub-group-id");
    ADD_KEY_TOKEN(sub_group_originator, "sub-group-originator");
    ADD_KEY_TOKEN(p2mp_id, "p2mp-id");
    ADD_KEY_TOKEN(session_type, "session-type");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::Protections::Protection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (sub_group_id.is_set || is_set(sub_group_id.yfilter)) leaf_name_data.push_back(sub_group_id.get_name_leafdata());
    if (sub_group_originator.is_set || is_set(sub_group_originator.yfilter)) leaf_name_data.push_back(sub_group_originator.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.yfilter)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (source_address_xr.is_set || is_set(source_address_xr.yfilter)) leaf_name_data.push_back(source_address_xr.get_name_leafdata());
    if (destination_address_xr.is_set || is_set(destination_address_xr.yfilter)) leaf_name_data.push_back(destination_address_xr.get_name_leafdata());
    if (tunnel_id_xr.is_set || is_set(tunnel_id_xr.yfilter)) leaf_name_data.push_back(tunnel_id_xr.get_name_leafdata());
    if (extended_tunnel_id_xr.is_set || is_set(extended_tunnel_id_xr.yfilter)) leaf_name_data.push_back(extended_tunnel_id_xr.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_instance.is_set || is_set(tunnel_instance.yfilter)) leaf_name_data.push_back(tunnel_instance.get_name_leafdata());
    if (role.is_set || is_set(role.yfilter)) leaf_name_data.push_back(role.get_name_leafdata());
    if (admin_status.is_set || is_set(admin_status.yfilter)) leaf_name_data.push_back(admin_status.get_name_leafdata());
    if (operation_status.is_set || is_set(operation_status.yfilter)) leaf_name_data.push_back(operation_status.get_name_leafdata());
    if (is_signalled.is_set || is_set(is_signalled.yfilter)) leaf_name_data.push_back(is_signalled.get_name_leafdata());
    if (is_frr_requested.is_set || is_set(is_frr_requested.yfilter)) leaf_name_data.push_back(is_frr_requested.get_name_leafdata());
    if (outbound_frr_state.is_set || is_set(outbound_frr_state.yfilter)) leaf_name_data.push_back(outbound_frr_state.get_name_leafdata());
    if (inbound_frr_state.is_set || is_set(inbound_frr_state.yfilter)) leaf_name_data.push_back(inbound_frr_state.get_name_leafdata());
    if (output_interface_lsp.is_set || is_set(output_interface_lsp.yfilter)) leaf_name_data.push_back(output_interface_lsp.get_name_leafdata());
    if (output_label.is_set || is_set(output_label.yfilter)) leaf_name_data.push_back(output_label.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (frr_output_tunnel_interface.is_set || is_set(frr_output_tunnel_interface.yfilter)) leaf_name_data.push_back(frr_output_tunnel_interface.get_name_leafdata());
    if (frr_output_label.is_set || is_set(frr_output_label.yfilter)) leaf_name_data.push_back(frr_output_label.get_name_leafdata());
    if (backup_status.is_set || is_set(backup_status.yfilter)) leaf_name_data.push_back(backup_status.get_name_leafdata());
    if (bandwidth_pool_type.is_set || is_set(bandwidth_pool_type.yfilter)) leaf_name_data.push_back(bandwidth_pool_type.get_name_leafdata());
    if (bandwidth_limit_type.is_set || is_set(bandwidth_limit_type.yfilter)) leaf_name_data.push_back(bandwidth_limit_type.get_name_leafdata());
    if (original_input_interface.is_set || is_set(original_input_interface.yfilter)) leaf_name_data.push_back(original_input_interface.get_name_leafdata());
    if (input_label.is_set || is_set(input_label.yfilter)) leaf_name_data.push_back(input_label.get_name_leafdata());
    if (previous_hop_address.is_set || is_set(previous_hop_address.yfilter)) leaf_name_data.push_back(previous_hop_address.get_name_leafdata());
    if (backup_bandwidth.is_set || is_set(backup_bandwidth.yfilter)) leaf_name_data.push_back(backup_bandwidth.get_name_leafdata());
    if (frr_output_interface.is_set || is_set(frr_output_interface.yfilter)) leaf_name_data.push_back(frr_output_interface.get_name_leafdata());
    if (backup_next_hop_address.is_set || is_set(backup_next_hop_address.yfilter)) leaf_name_data.push_back(backup_next_hop_address.get_name_leafdata());
    if (lsp_bandwidth_type.is_set || is_set(lsp_bandwidth_type.yfilter)) leaf_name_data.push_back(lsp_bandwidth_type.get_name_leafdata());
    if (sharing_type.is_set || is_set(sharing_type.yfilter)) leaf_name_data.push_back(sharing_type.get_name_leafdata());
    if (is_p2mp_tunnel.is_set || is_set(is_p2mp_tunnel.yfilter)) leaf_name_data.push_back(is_p2mp_tunnel.get_name_leafdata());
    if (sub_group_original_id.is_set || is_set(sub_group_original_id.yfilter)) leaf_name_data.push_back(sub_group_original_id.get_name_leafdata());
    if (sub_group_id_xr.is_set || is_set(sub_group_id_xr.yfilter)) leaf_name_data.push_back(sub_group_id_xr.get_name_leafdata());
    if (p2mp_id_xr.is_set || is_set(p2mp_id_xr.yfilter)) leaf_name_data.push_back(p2mp_id_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::FastReroute::Protections::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::FastReroute::Protections::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::FastReroute::Protections::Protection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id = value;
        sub_group_id.value_namespace = name_space;
        sub_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator = value;
        sub_group_originator.value_namespace = name_space;
        sub_group_originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
        p2mp_id.value_namespace = name_space;
        p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr = value;
        source_address_xr.value_namespace = name_space;
        source_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr = value;
        destination_address_xr.value_namespace = name_space;
        destination_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr = value;
        tunnel_id_xr.value_namespace = name_space;
        tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id-xr")
    {
        extended_tunnel_id_xr = value;
        extended_tunnel_id_xr.value_namespace = name_space;
        extended_tunnel_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance = value;
        tunnel_instance.value_namespace = name_space;
        tunnel_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "role")
    {
        role = value;
        role.value_namespace = name_space;
        role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-status")
    {
        admin_status = value;
        admin_status.value_namespace = name_space;
        admin_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operation-status")
    {
        operation_status = value;
        operation_status.value_namespace = name_space;
        operation_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-signalled")
    {
        is_signalled = value;
        is_signalled.value_namespace = name_space;
        is_signalled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-frr-requested")
    {
        is_frr_requested = value;
        is_frr_requested.value_namespace = name_space;
        is_frr_requested.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outbound-frr-state")
    {
        outbound_frr_state = value;
        outbound_frr_state.value_namespace = name_space;
        outbound_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inbound-frr-state")
    {
        inbound_frr_state = value;
        inbound_frr_state.value_namespace = name_space;
        inbound_frr_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-interface-lsp")
    {
        output_interface_lsp = value;
        output_interface_lsp.value_namespace = name_space;
        output_interface_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-label")
    {
        output_label = value;
        output_label.value_namespace = name_space;
        output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-output-tunnel-interface")
    {
        frr_output_tunnel_interface = value;
        frr_output_tunnel_interface.value_namespace = name_space;
        frr_output_tunnel_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-output-label")
    {
        frr_output_label = value;
        frr_output_label.value_namespace = name_space;
        frr_output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-status")
    {
        backup_status = value;
        backup_status.value_namespace = name_space;
        backup_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type = value;
        bandwidth_pool_type.value_namespace = name_space;
        bandwidth_pool_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type = value;
        bandwidth_limit_type.value_namespace = name_space;
        bandwidth_limit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface = value;
        original_input_interface.value_namespace = name_space;
        original_input_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-label")
    {
        input_label = value;
        input_label.value_namespace = name_space;
        input_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address = value;
        previous_hop_address.value_namespace = name_space;
        previous_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-bandwidth")
    {
        backup_bandwidth = value;
        backup_bandwidth.value_namespace = name_space;
        backup_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-output-interface")
    {
        frr_output_interface = value;
        frr_output_interface.value_namespace = name_space;
        frr_output_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-next-hop-address")
    {
        backup_next_hop_address = value;
        backup_next_hop_address.value_namespace = name_space;
        backup_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-type")
    {
        lsp_bandwidth_type = value;
        lsp_bandwidth_type.value_namespace = name_space;
        lsp_bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sharing-type")
    {
        sharing_type = value;
        sharing_type.value_namespace = name_space;
        sharing_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-p2mp-tunnel")
    {
        is_p2mp_tunnel = value;
        is_p2mp_tunnel.value_namespace = name_space;
        is_p2mp_tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-original-id")
    {
        sub_group_original_id = value;
        sub_group_original_id.value_namespace = name_space;
        sub_group_original_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-id-xr")
    {
        sub_group_id_xr = value;
        sub_group_id_xr.value_namespace = name_space;
        sub_group_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-id-xr")
    {
        p2mp_id_xr = value;
        p2mp_id_xr.value_namespace = name_space;
        p2mp_id_xr.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::FastReroute::Protections::Protection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-id")
    {
        sub_group_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-originator")
    {
        sub_group_originator.yfilter = yfilter;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "source-address-xr")
    {
        source_address_xr.yfilter = yfilter;
    }
    if(value_path == "destination-address-xr")
    {
        destination_address_xr.yfilter = yfilter;
    }
    if(value_path == "tunnel-id-xr")
    {
        tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id-xr")
    {
        extended_tunnel_id_xr.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-instance")
    {
        tunnel_instance.yfilter = yfilter;
    }
    if(value_path == "role")
    {
        role.yfilter = yfilter;
    }
    if(value_path == "admin-status")
    {
        admin_status.yfilter = yfilter;
    }
    if(value_path == "operation-status")
    {
        operation_status.yfilter = yfilter;
    }
    if(value_path == "is-signalled")
    {
        is_signalled.yfilter = yfilter;
    }
    if(value_path == "is-frr-requested")
    {
        is_frr_requested.yfilter = yfilter;
    }
    if(value_path == "outbound-frr-state")
    {
        outbound_frr_state.yfilter = yfilter;
    }
    if(value_path == "inbound-frr-state")
    {
        inbound_frr_state.yfilter = yfilter;
    }
    if(value_path == "output-interface-lsp")
    {
        output_interface_lsp.yfilter = yfilter;
    }
    if(value_path == "output-label")
    {
        output_label.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "frr-output-tunnel-interface")
    {
        frr_output_tunnel_interface.yfilter = yfilter;
    }
    if(value_path == "frr-output-label")
    {
        frr_output_label.yfilter = yfilter;
    }
    if(value_path == "backup-status")
    {
        backup_status.yfilter = yfilter;
    }
    if(value_path == "bandwidth-pool-type")
    {
        bandwidth_pool_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth-limit-type")
    {
        bandwidth_limit_type.yfilter = yfilter;
    }
    if(value_path == "original-input-interface")
    {
        original_input_interface.yfilter = yfilter;
    }
    if(value_path == "input-label")
    {
        input_label.yfilter = yfilter;
    }
    if(value_path == "previous-hop-address")
    {
        previous_hop_address.yfilter = yfilter;
    }
    if(value_path == "backup-bandwidth")
    {
        backup_bandwidth.yfilter = yfilter;
    }
    if(value_path == "frr-output-interface")
    {
        frr_output_interface.yfilter = yfilter;
    }
    if(value_path == "backup-next-hop-address")
    {
        backup_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-type")
    {
        lsp_bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "sharing-type")
    {
        sharing_type.yfilter = yfilter;
    }
    if(value_path == "is-p2mp-tunnel")
    {
        is_p2mp_tunnel.yfilter = yfilter;
    }
    if(value_path == "sub-group-original-id")
    {
        sub_group_original_id.yfilter = yfilter;
    }
    if(value_path == "sub-group-id-xr")
    {
        sub_group_id_xr.yfilter = yfilter;
    }
    if(value_path == "p2mp-id-xr")
    {
        p2mp_id_xr.yfilter = yfilter;
    }
}

bool MplsTeStandby::FastReroute::Protections::Protection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-address" || name == "destination-address" || name == "tunnel-id" || name == "extended-tunnel-id" || name == "lsp-id" || name == "sub-group-id" || name == "sub-group-originator" || name == "p2mp-id" || name == "session-type" || name == "source-address-xr" || name == "destination-address-xr" || name == "tunnel-id-xr" || name == "extended-tunnel-id-xr" || name == "tunnel-name" || name == "tunnel-instance" || name == "role" || name == "admin-status" || name == "operation-status" || name == "is-signalled" || name == "is-frr-requested" || name == "outbound-frr-state" || name == "inbound-frr-state" || name == "output-interface-lsp" || name == "output-label" || name == "next-hop-address" || name == "frr-output-tunnel-interface" || name == "frr-output-label" || name == "backup-status" || name == "bandwidth-pool-type" || name == "bandwidth-limit-type" || name == "original-input-interface" || name == "input-label" || name == "previous-hop-address" || name == "backup-bandwidth" || name == "frr-output-interface" || name == "backup-next-hop-address" || name == "lsp-bandwidth-type" || name == "sharing-type" || name == "is-p2mp-tunnel" || name == "sub-group-original-id" || name == "sub-group-id-xr" || name == "p2mp-id-xr")
        return true;
    return false;
}

MplsTeStandby::FastReroute::Promotion::Promotion()
    :
    promotion_period{YType::uint32, "promotion-period"},
    remaining_time{YType::uint32, "remaining-time"},
    is_configured{YType::boolean, "is-configured"}
{

    yang_name = "promotion"; yang_parent_name = "fast-reroute"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::FastReroute::Promotion::~Promotion()
{
}

bool MplsTeStandby::FastReroute::Promotion::has_data() const
{
    if (is_presence_container) return true;
    return promotion_period.is_set
	|| remaining_time.is_set
	|| is_configured.is_set;
}

bool MplsTeStandby::FastReroute::Promotion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(promotion_period.yfilter)
	|| ydk::is_set(remaining_time.yfilter)
	|| ydk::is_set(is_configured.yfilter);
}

std::string MplsTeStandby::FastReroute::Promotion::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/fast-reroute/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::FastReroute::Promotion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "promotion";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::FastReroute::Promotion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (promotion_period.is_set || is_set(promotion_period.yfilter)) leaf_name_data.push_back(promotion_period.get_name_leafdata());
    if (remaining_time.is_set || is_set(remaining_time.yfilter)) leaf_name_data.push_back(remaining_time.get_name_leafdata());
    if (is_configured.is_set || is_set(is_configured.yfilter)) leaf_name_data.push_back(is_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::FastReroute::Promotion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::FastReroute::Promotion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::FastReroute::Promotion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "promotion-period")
    {
        promotion_period = value;
        promotion_period.value_namespace = name_space;
        promotion_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-time")
    {
        remaining_time = value;
        remaining_time.value_namespace = name_space;
        remaining_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-configured")
    {
        is_configured = value;
        is_configured.value_namespace = name_space;
        is_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::FastReroute::Promotion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "promotion-period")
    {
        promotion_period.yfilter = yfilter;
    }
    if(value_path == "remaining-time")
    {
        remaining_time.yfilter = yfilter;
    }
    if(value_path == "is-configured")
    {
        is_configured.yfilter = yfilter;
    }
}

bool MplsTeStandby::FastReroute::Promotion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "promotion-period" || name == "remaining-time" || name == "is-configured")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSets()
    :
    attribute_set(this, {"attribute_set_type", "attribute_set_name"})
{

    yang_name = "attribute-sets"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AttributeSets::~AttributeSets()
{
}

bool MplsTeStandby::AttributeSets::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attribute_set.len(); index++)
    {
        if(attribute_set[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AttributeSets::has_operation() const
{
    for (std::size_t index=0; index<attribute_set.len(); index++)
    {
        if(attribute_set[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::AttributeSets::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AttributeSets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-sets";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet>();
        ent_->parent = this;
        attribute_set.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : attribute_set.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AttributeSets::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AttributeSets::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSet()
    :
    attribute_set_type{YType::enumeration, "attribute-set-type"},
    attribute_set_name{YType::str, "attribute-set-name"},
    tunnel_attribute_set_name{YType::str, "tunnel-attribute-set-name"},
    tunnel_attribute_set_name_crc32{YType::uint32, "tunnel-attribute-set-name-crc32"}
        ,
    attribute_set_union(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion>())
{
    attribute_set_union->parent = this;

    yang_name = "attribute-set"; yang_parent_name = "attribute-sets"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::AttributeSets::AttributeSet::~AttributeSet()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::has_data() const
{
    if (is_presence_container) return true;
    return attribute_set_type.is_set
	|| attribute_set_name.is_set
	|| tunnel_attribute_set_name.is_set
	|| tunnel_attribute_set_name_crc32.is_set
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_data());
}

bool MplsTeStandby::AttributeSets::AttributeSet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_set_type.yfilter)
	|| ydk::is_set(attribute_set_name.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name.yfilter)
	|| ydk::is_set(tunnel_attribute_set_name_crc32.yfilter)
	|| (attribute_set_union !=  nullptr && attribute_set_union->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/attribute-sets/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::AttributeSets::AttributeSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set";
    ADD_KEY_TOKEN(attribute_set_type, "attribute-set-type");
    ADD_KEY_TOKEN(attribute_set_name, "attribute-set-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_set_type.is_set || is_set(attribute_set_type.yfilter)) leaf_name_data.push_back(attribute_set_type.get_name_leafdata());
    if (attribute_set_name.is_set || is_set(attribute_set_name.yfilter)) leaf_name_data.push_back(attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name.is_set || is_set(tunnel_attribute_set_name.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name.get_name_leafdata());
    if (tunnel_attribute_set_name_crc32.is_set || is_set(tunnel_attribute_set_name_crc32.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_name_crc32.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-union")
    {
        if(attribute_set_union == nullptr)
        {
            attribute_set_union = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion>();
        }
        return attribute_set_union;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute_set_union != nullptr)
    {
        _children["attribute-set-union"] = attribute_set_union;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-set-type")
    {
        attribute_set_type = value;
        attribute_set_type.value_namespace = name_space;
        attribute_set_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name = value;
        attribute_set_name.value_namespace = name_space;
        attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name = value;
        tunnel_attribute_set_name.value_namespace = name_space;
        tunnel_attribute_set_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32 = value;
        tunnel_attribute_set_name_crc32.value_namespace = name_space;
        tunnel_attribute_set_name_crc32.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-set-type")
    {
        attribute_set_type.yfilter = yfilter;
    }
    if(value_path == "attribute-set-name")
    {
        attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name")
    {
        tunnel_attribute_set_name.yfilter = yfilter;
    }
    if(value_path == "tunnel-attribute-set-name-crc32")
    {
        tunnel_attribute_set_name_crc32.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-union" || name == "attribute-set-type" || name == "attribute-set-name" || name == "tunnel-attribute-set-name" || name == "tunnel-attribute-set-name-crc32")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetUnion()
    :
    tunnel_attribute_set_type{YType::enumeration, "tunnel-attribute-set-type"}
        ,
    attribute_set_path_option(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption>())
    , attribute_set_autobackup(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>())
    , attribute_set_automesh(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>())
    , attribute_set_xro(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro>())
    , attribute_set_p2mpte(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte>())
    , attribute_set_aps_pp(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp>())
    , attribute_set_p2p_te(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe>())
{
    attribute_set_path_option->parent = this;
    attribute_set_autobackup->parent = this;
    attribute_set_automesh->parent = this;
    attribute_set_xro->parent = this;
    attribute_set_p2mpte->parent = this;
    attribute_set_aps_pp->parent = this;
    attribute_set_p2p_te->parent = this;

    yang_name = "attribute-set-union"; yang_parent_name = "attribute-set"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::~AttributeSetUnion()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_attribute_set_type.is_set
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_data())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_data())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_data())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_data())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_data())
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_data())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_data());
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_attribute_set_type.yfilter)
	|| (attribute_set_path_option !=  nullptr && attribute_set_path_option->has_operation())
	|| (attribute_set_autobackup !=  nullptr && attribute_set_autobackup->has_operation())
	|| (attribute_set_automesh !=  nullptr && attribute_set_automesh->has_operation())
	|| (attribute_set_xro !=  nullptr && attribute_set_xro->has_operation())
	|| (attribute_set_p2mpte !=  nullptr && attribute_set_p2mpte->has_operation())
	|| (attribute_set_aps_pp !=  nullptr && attribute_set_aps_pp->has_operation())
	|| (attribute_set_p2p_te !=  nullptr && attribute_set_p2p_te->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-union";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_attribute_set_type.is_set || is_set(tunnel_attribute_set_type.yfilter)) leaf_name_data.push_back(tunnel_attribute_set_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-set-path-option")
    {
        if(attribute_set_path_option == nullptr)
        {
            attribute_set_path_option = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption>();
        }
        return attribute_set_path_option;
    }

    if(child_yang_name == "attribute-set-autobackup")
    {
        if(attribute_set_autobackup == nullptr)
        {
            attribute_set_autobackup = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup>();
        }
        return attribute_set_autobackup;
    }

    if(child_yang_name == "attribute-set-automesh")
    {
        if(attribute_set_automesh == nullptr)
        {
            attribute_set_automesh = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh>();
        }
        return attribute_set_automesh;
    }

    if(child_yang_name == "attribute-set-xro")
    {
        if(attribute_set_xro == nullptr)
        {
            attribute_set_xro = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro>();
        }
        return attribute_set_xro;
    }

    if(child_yang_name == "attribute-set-p2mpte")
    {
        if(attribute_set_p2mpte == nullptr)
        {
            attribute_set_p2mpte = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte>();
        }
        return attribute_set_p2mpte;
    }

    if(child_yang_name == "attribute-set-aps-pp")
    {
        if(attribute_set_aps_pp == nullptr)
        {
            attribute_set_aps_pp = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp>();
        }
        return attribute_set_aps_pp;
    }

    if(child_yang_name == "attribute-set-p2p-te")
    {
        if(attribute_set_p2p_te == nullptr)
        {
            attribute_set_p2p_te = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe>();
        }
        return attribute_set_p2p_te;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute_set_path_option != nullptr)
    {
        _children["attribute-set-path-option"] = attribute_set_path_option;
    }

    if(attribute_set_autobackup != nullptr)
    {
        _children["attribute-set-autobackup"] = attribute_set_autobackup;
    }

    if(attribute_set_automesh != nullptr)
    {
        _children["attribute-set-automesh"] = attribute_set_automesh;
    }

    if(attribute_set_xro != nullptr)
    {
        _children["attribute-set-xro"] = attribute_set_xro;
    }

    if(attribute_set_p2mpte != nullptr)
    {
        _children["attribute-set-p2mpte"] = attribute_set_p2mpte;
    }

    if(attribute_set_aps_pp != nullptr)
    {
        _children["attribute-set-aps-pp"] = attribute_set_aps_pp;
    }

    if(attribute_set_p2p_te != nullptr)
    {
        _children["attribute-set-p2p-te"] = attribute_set_p2p_te;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type = value;
        tunnel_attribute_set_type.value_namespace = name_space;
        tunnel_attribute_set_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-attribute-set-type")
    {
        tunnel_attribute_set_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-set-path-option" || name == "attribute-set-autobackup" || name == "attribute-set-automesh" || name == "attribute-set-xro" || name == "attribute-set-p2mpte" || name == "attribute-set-aps-pp" || name == "attribute-set-p2p-te" || name == "tunnel-attribute-set-type")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::AttributeSetPathOption()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    cost_limit{YType::uint32, "cost-limit"},
    dste_class_type{YType::uint8, "dste-class-type"},
    bandwidth_type{YType::enumeration, "bandwidth-type"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_cost_limit_configured{YType::boolean, "is-cost-limit-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    generation{YType::uint32, "generation"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_invalidation_action{YType::uint32, "path-invalidation-action"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    exclude_list_name{YType::str, "exclude-list-name"},
    is_exclude_list_name_configured{YType::boolean, "is-exclude-list-name-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"},
    is_bfd_reverse_pat_configured{YType::boolean, "is-bfd-reverse-pat-configured"},
    is_delay_limit_configured{YType::boolean, "is-delay-limit-configured"},
    delay_limit{YType::uint32, "delay-limit"}
        ,
    affinity(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>())
    , bfd_reverse_path(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>())
    , tunnel_id(this, {})
    , version_info(this, {})
{
    affinity->parent = this;
    bfd_reverse_path->parent = this;

    yang_name = "attribute-set-path-option"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::~AttributeSetPathOption()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<version_info.len(); index++)
    {
        if(version_info[index]->has_data())
            return true;
    }
    return configured_bandwidth.is_set
	|| cost_limit.is_set
	|| dste_class_type.is_set
	|| bandwidth_type.is_set
	|| is_bandwidth_configured.is_set
	|| is_cost_limit_configured.is_set
	|| is_affinity_configured.is_set
	|| generation.is_set
	|| path_invalidation_timeout.is_set
	|| path_invalidation_action.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| exclude_list_name.is_set
	|| is_exclude_list_name_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| pcedp_group_id.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| pcebd_source_address.is_set
	|| pcebd_group_id.is_set
	|| is_bfd_reverse_pat_configured.is_set
	|| is_delay_limit_configured.is_set
	|| delay_limit.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_data());
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<version_info.len(); index++)
    {
        if(version_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(cost_limit.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(bandwidth_type.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(is_cost_limit_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_invalidation_action.yfilter)
	|| ydk::is_set(is_path_invalidation_timeout_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_action_configured.yfilter)
	|| ydk::is_set(exclude_list_name.yfilter)
	|| ydk::is_set(is_exclude_list_name_configured.yfilter)
	|| ydk::is_set(is_pce_configured.yfilter)
	|| ydk::is_set(is_pce_disj_source_configured.yfilter)
	|| ydk::is_set(is_pce_disj_type_configured.yfilter)
	|| ydk::is_set(is_pce_disj_group_id_configured.yfilter)
	|| ydk::is_set(pcedp_source_address.yfilter)
	|| ydk::is_set(pcedp_type.yfilter)
	|| ydk::is_set(pcedp_group_id.yfilter)
	|| ydk::is_set(is_pceb_dj_source_configured.yfilter)
	|| ydk::is_set(is_pcebd_group_id_configured.yfilter)
	|| ydk::is_set(pcebd_source_address.yfilter)
	|| ydk::is_set(pcebd_group_id.yfilter)
	|| ydk::is_set(is_bfd_reverse_pat_configured.yfilter)
	|| ydk::is_set(is_delay_limit_configured.yfilter)
	|| ydk::is_set(delay_limit.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (bfd_reverse_path !=  nullptr && bfd_reverse_path->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-path-option";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (cost_limit.is_set || is_set(cost_limit.yfilter)) leaf_name_data.push_back(cost_limit.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.yfilter)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_cost_limit_configured.is_set || is_set(is_cost_limit_configured.yfilter)) leaf_name_data.push_back(is_cost_limit_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_invalidation_action.is_set || is_set(path_invalidation_action.yfilter)) leaf_name_data.push_back(path_invalidation_action.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (exclude_list_name.is_set || is_set(exclude_list_name.yfilter)) leaf_name_data.push_back(exclude_list_name.get_name_leafdata());
    if (is_exclude_list_name_configured.is_set || is_set(is_exclude_list_name_configured.yfilter)) leaf_name_data.push_back(is_exclude_list_name_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.yfilter)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.yfilter)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.yfilter)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.yfilter)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.yfilter)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.yfilter)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.yfilter)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.yfilter)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());
    if (is_bfd_reverse_pat_configured.is_set || is_set(is_bfd_reverse_pat_configured.yfilter)) leaf_name_data.push_back(is_bfd_reverse_pat_configured.get_name_leafdata());
    if (is_delay_limit_configured.is_set || is_set(is_delay_limit_configured.yfilter)) leaf_name_data.push_back(is_delay_limit_configured.get_name_leafdata());
    if (delay_limit.is_set || is_set(delay_limit.yfilter)) leaf_name_data.push_back(delay_limit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "bfd-reverse-path")
    {
        if(bfd_reverse_path == nullptr)
        {
            bfd_reverse_path = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath>();
        }
        return bfd_reverse_path;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId>();
        ent_->parent = this;
        tunnel_id.append(ent_);
        return ent_;
    }

    if(child_yang_name == "version-info")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo>();
        ent_->parent = this;
        version_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(affinity != nullptr)
    {
        _children["affinity"] = affinity;
    }

    if(bfd_reverse_path != nullptr)
    {
        _children["bfd-reverse-path"] = bfd_reverse_path;
    }

    count_ = 0;
    for (auto ent_ : tunnel_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : version_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost-limit")
    {
        cost_limit = value;
        cost_limit.value_namespace = name_space;
        cost_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
        bandwidth_type.value_namespace = name_space;
        bandwidth_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured = value;
        is_cost_limit_configured.value_namespace = name_space;
        is_cost_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action = value;
        path_invalidation_action.value_namespace = name_space;
        path_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
        is_path_invalidation_timeout_configured.value_namespace = name_space;
        is_path_invalidation_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
        is_path_invalidation_action_configured.value_namespace = name_space;
        is_path_invalidation_action_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name = value;
        exclude_list_name.value_namespace = name_space;
        exclude_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured = value;
        is_exclude_list_name_configured.value_namespace = name_space;
        is_exclude_list_name_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
        is_pce_configured.value_namespace = name_space;
        is_pce_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
        is_pce_disj_source_configured.value_namespace = name_space;
        is_pce_disj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
        is_pce_disj_type_configured.value_namespace = name_space;
        is_pce_disj_type_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
        is_pce_disj_group_id_configured.value_namespace = name_space;
        is_pce_disj_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
        pcedp_source_address.value_namespace = name_space;
        pcedp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
        pcedp_type.value_namespace = name_space;
        pcedp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
        pcedp_group_id.value_namespace = name_space;
        pcedp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
        is_pceb_dj_source_configured.value_namespace = name_space;
        is_pceb_dj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
        is_pcebd_group_id_configured.value_namespace = name_space;
        is_pcebd_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
        pcebd_source_address.value_namespace = name_space;
        pcebd_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
        pcebd_group_id.value_namespace = name_space;
        pcebd_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured = value;
        is_bfd_reverse_pat_configured.value_namespace = name_space;
        is_bfd_reverse_pat_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-delay-limit-configured")
    {
        is_delay_limit_configured = value;
        is_delay_limit_configured.value_namespace = name_space;
        is_delay_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-limit")
    {
        delay_limit = value;
        delay_limit.value_namespace = name_space;
        delay_limit.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "cost-limit")
    {
        cost_limit.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "is-cost-limit-configured")
    {
        is_cost_limit_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-action")
    {
        path_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured.yfilter = yfilter;
    }
    if(value_path == "exclude-list-name")
    {
        exclude_list_name.yfilter = yfilter;
    }
    if(value_path == "is-exclude-list-name-configured")
    {
        is_exclude_list_name_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type.yfilter = yfilter;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id.yfilter = yfilter;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address.yfilter = yfilter;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id.yfilter = yfilter;
    }
    if(value_path == "is-bfd-reverse-pat-configured")
    {
        is_bfd_reverse_pat_configured.yfilter = yfilter;
    }
    if(value_path == "is-delay-limit-configured")
    {
        is_delay_limit_configured.yfilter = yfilter;
    }
    if(value_path == "delay-limit")
    {
        delay_limit.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "bfd-reverse-path" || name == "tunnel-id" || name == "version-info" || name == "configured-bandwidth" || name == "cost-limit" || name == "dste-class-type" || name == "bandwidth-type" || name == "is-bandwidth-configured" || name == "is-cost-limit-configured" || name == "is-affinity-configured" || name == "generation" || name == "path-invalidation-timeout" || name == "path-invalidation-action" || name == "is-path-invalidation-timeout-configured" || name == "is-path-invalidation-action-configured" || name == "exclude-list-name" || name == "is-exclude-list-name-configured" || name == "is-pce-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pce-disj-group-id-configured" || name == "pcedp-source-address" || name == "pcedp-type" || name == "pcedp-group-id" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "pcebd-source-address" || name == "pcebd-group-id" || name == "is-bfd-reverse-pat-configured" || name == "is-delay-limit-configured" || name == "delay-limit")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::~Affinity()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity>();
        ent_->parent = this;
        named_affinity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : named_affinity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue>();
        ent_->parent = this;
        constraint_extended_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        ent_->parent = this;
        extended_forward_ref_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : constraint_extended_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_forward_ref_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::BfdReversePath()
    :
    path_type{YType::enumeration, "path-type"},
    binding_label{YType::uint32, "binding-label"}
{

    yang_name = "bfd-reverse-path"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::~BfdReversePath()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_data() const
{
    if (is_presence_container) return true;
    return path_type.is_set
	|| binding_label.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_type.yfilter)
	|| ydk::is_set(binding_label.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_type.is_set || is_set(path_type.yfilter)) leaf_name_data.push_back(path_type.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-type")
    {
        path_type = value;
        path_type.value_namespace = name_space;
        path_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-type")
    {
        path_type.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::BfdReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-type" || name == "binding-label")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::VersionInfo()
    :
    attribute_type{YType::str, "attribute-type"},
    generation{YType::uint32, "generation"},
    is_default{YType::boolean, "is-default"}
{

    yang_name = "version-info"; yang_parent_name = "attribute-set-path-option"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::~VersionInfo()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_data() const
{
    if (is_presence_container) return true;
    return attribute_type.is_set
	|| generation.is_set
	|| is_default.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_type.yfilter)
	|| ydk::is_set(generation.yfilter)
	|| ydk::is_set(is_default.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "version-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_type.is_set || is_set(attribute_type.yfilter)) leaf_name_data.push_back(attribute_type.get_name_leafdata());
    if (generation.is_set || is_set(generation.yfilter)) leaf_name_data.push_back(generation.get_name_leafdata());
    if (is_default.is_set || is_set(is_default.yfilter)) leaf_name_data.push_back(is_default.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-type")
    {
        attribute_type = value;
        attribute_type.value_namespace = name_space;
        attribute_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generation")
    {
        generation = value;
        generation.value_namespace = name_space;
        generation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default")
    {
        is_default = value;
        is_default.value_namespace = name_space;
        is_default.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-type")
    {
        attribute_type.yfilter = yfilter;
    }
    if(value_path == "generation")
    {
        generation.yfilter = yfilter;
    }
    if(value_path == "is-default")
    {
        is_default.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetPathOption::VersionInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-type" || name == "generation" || name == "is-default")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::AttributeSetAutobackup()
    :
    is_signalled_name_configured{YType::boolean, "is-signalled-name-configured"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    policy_class{YType::uint8, "policy-class"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    record_route{YType::boolean, "record-route"}
        ,
    signalled_name(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>())
    , affinity(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>())
    , logging(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>())
    , policy_class_entry(this, {})
    , tunnel_id(this, {})
    , protected_interface(this, {})
{
    signalled_name->parent = this;
    affinity->parent = this;
    logging->parent = this;

    yang_name = "attribute-set-autobackup"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::~AttributeSetAutobackup()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_class_entry.len(); index++)
    {
        if(policy_class_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<protected_interface.len(); index++)
    {
        if(protected_interface[index]->has_data())
            return true;
    }
    return is_signalled_name_configured.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| is_priority_configured.is_set
	|| policy_class.is_set
	|| is_policyclass_configured.is_set
	|| is_affinity_configured.is_set
	|| record_route.is_set
	|| (signalled_name !=  nullptr && signalled_name->has_data())
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_operation() const
{
    for (std::size_t index=0; index<policy_class_entry.len(); index++)
    {
        if(policy_class_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<protected_interface.len(); index++)
    {
        if(protected_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_signalled_name_configured.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(policy_class.yfilter)
	|| ydk::is_set(is_policyclass_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| (signalled_name !=  nullptr && signalled_name->has_operation())
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-autobackup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_signalled_name_configured.is_set || is_set(is_signalled_name_configured.yfilter)) leaf_name_data.push_back(is_signalled_name_configured.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.yfilter)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.yfilter)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signalled-name")
    {
        if(signalled_name == nullptr)
        {
            signalled_name = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName>();
        }
        return signalled_name;
    }

    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "policy-class-entry")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry>();
        ent_->parent = this;
        policy_class_entry.append(ent_);
        return ent_;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId>();
        ent_->parent = this;
        tunnel_id.append(ent_);
        return ent_;
    }

    if(child_yang_name == "protected-interface")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface>();
        ent_->parent = this;
        protected_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(signalled_name != nullptr)
    {
        _children["signalled-name"] = signalled_name;
    }

    if(affinity != nullptr)
    {
        _children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    count_ = 0;
    for (auto ent_ : policy_class_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : tunnel_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : protected_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-signalled-name-configured")
    {
        is_signalled_name_configured = value;
        is_signalled_name_configured.value_namespace = name_space;
        is_signalled_name_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
        policy_class.value_namespace = name_space;
        policy_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
        is_policyclass_configured.value_namespace = name_space;
        is_policyclass_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-signalled-name-configured")
    {
        is_signalled_name_configured.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signalled-name" || name == "affinity" || name == "logging" || name == "policy-class-entry" || name == "tunnel-id" || name == "protected-interface" || name == "is-signalled-name-configured" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "policy-class" || name == "is-policyclass-configured" || name == "is-affinity-configured" || name == "record-route")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::SignalledName()
    :
    name{YType::str, "name"},
    source_type{YType::enumeration, "source-type"},
    protected_interface_type{YType::enumeration, "protected-interface-type"},
    is_mp_addresses{YType::boolean, "is-mp-addresses"}
{

    yang_name = "signalled-name"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::~SignalledName()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| source_type.is_set
	|| protected_interface_type.is_set
	|| is_mp_addresses.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(source_type.yfilter)
	|| ydk::is_set(protected_interface_type.yfilter)
	|| ydk::is_set(is_mp_addresses.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalled-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (source_type.is_set || is_set(source_type.yfilter)) leaf_name_data.push_back(source_type.get_name_leafdata());
    if (protected_interface_type.is_set || is_set(protected_interface_type.yfilter)) leaf_name_data.push_back(protected_interface_type.get_name_leafdata());
    if (is_mp_addresses.is_set || is_set(is_mp_addresses.yfilter)) leaf_name_data.push_back(is_mp_addresses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-type")
    {
        source_type = value;
        source_type.value_namespace = name_space;
        source_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type = value;
        protected_interface_type.value_namespace = name_space;
        protected_interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mp-addresses")
    {
        is_mp_addresses = value;
        is_mp_addresses.value_namespace = name_space;
        is_mp_addresses.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "source-type")
    {
        source_type.yfilter = yfilter;
    }
    if(value_path == "protected-interface-type")
    {
        protected_interface_type.yfilter = yfilter;
    }
    if(value_path == "is-mp-addresses")
    {
        is_mp_addresses.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::SignalledName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "source-type" || name == "protected-interface-type" || name == "is-mp-addresses")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::~Affinity()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity>();
        ent_->parent = this;
        named_affinity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : named_affinity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue>();
        ent_->parent = this;
        constraint_extended_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        ent_->parent = this;
        extended_forward_ref_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : constraint_extended_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_forward_ref_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::Logging()
    :
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    all_logging_enabled{YType::boolean, "all-logging-enabled"}
{

    yang_name = "logging"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::~Logging()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_data() const
{
    if (is_presence_container) return true;
    return lsp_state.is_set
	|| s2l_state.is_set
	|| lsp_re_route.is_set
	|| lsp_re_opt.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| all_logging_enabled.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::ProtectedInterface()
    :
    protected_interface{YType::str, "protected-interface"}
{

    yang_name = "protected-interface"; yang_parent_name = "attribute-set-autobackup"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::~ProtectedInterface()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_data() const
{
    if (is_presence_container) return true;
    return protected_interface.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protected_interface.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protected-interface";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protected_interface.is_set || is_set(protected_interface.yfilter)) leaf_name_data.push_back(protected_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protected-interface")
    {
        protected_interface = value;
        protected_interface.value_namespace = name_space;
        protected_interface.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protected-interface")
    {
        protected_interface.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutobackup::ProtectedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protected-interface")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::AttributeSetAutomesh()
    :
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    policy_class{YType::uint8, "policy-class"},
    is_policyclass_configured{YType::boolean, "is-policyclass-configured"},
    forward_class{YType::uint32, "forward-class"},
    is_forward_class_configured{YType::boolean, "is-forward-class-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    fast_reroute{YType::boolean, "fast-reroute"},
    frr_node_protection{YType::boolean, "frr-node-protection"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    record_route{YType::boolean, "record-route"},
    auto_bandwidth_collect{YType::boolean, "auto-bandwidth-collect"},
    auto_route_announce{YType::boolean, "auto-route-announce"},
    soft_preemption_configured{YType::boolean, "soft-preemption-configured"},
    bandwidth{YType::uint32, "bandwidth"},
    load_share{YType::uint32, "load-share"},
    is_interface_bw_configured{YType::boolean, "is-interface-bw-configured"}
        ,
    affinity(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>())
    , logging(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>())
    , policy_class_entry(this, {})
    , mesh_group_id(this, {})
    , tunnel_id(this, {})
{
    affinity->parent = this;
    logging->parent = this;

    yang_name = "attribute-set-automesh"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::~AttributeSetAutomesh()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy_class_entry.len(); index++)
    {
        if(policy_class_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mesh_group_id.len(); index++)
    {
        if(mesh_group_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| is_bandwidth_configured.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| is_priority_configured.is_set
	|| policy_class.is_set
	|| is_policyclass_configured.is_set
	|| forward_class.is_set
	|| is_forward_class_configured.is_set
	|| is_affinity_configured.is_set
	|| fast_reroute.is_set
	|| frr_node_protection.is_set
	|| frr_bandwidth_protection.is_set
	|| record_route.is_set
	|| auto_bandwidth_collect.is_set
	|| auto_route_announce.is_set
	|| soft_preemption_configured.is_set
	|| bandwidth.is_set
	|| load_share.is_set
	|| is_interface_bw_configured.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data());
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_operation() const
{
    for (std::size_t index=0; index<policy_class_entry.len(); index++)
    {
        if(policy_class_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mesh_group_id.len(); index++)
    {
        if(mesh_group_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(policy_class.yfilter)
	|| ydk::is_set(is_policyclass_configured.yfilter)
	|| ydk::is_set(forward_class.yfilter)
	|| ydk::is_set(is_forward_class_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(fast_reroute.yfilter)
	|| ydk::is_set(frr_node_protection.yfilter)
	|| ydk::is_set(frr_bandwidth_protection.yfilter)
	|| ydk::is_set(record_route.yfilter)
	|| ydk::is_set(auto_bandwidth_collect.yfilter)
	|| ydk::is_set(auto_route_announce.yfilter)
	|| ydk::is_set(soft_preemption_configured.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(load_share.yfilter)
	|| ydk::is_set(is_interface_bw_configured.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-automesh";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (policy_class.is_set || is_set(policy_class.yfilter)) leaf_name_data.push_back(policy_class.get_name_leafdata());
    if (is_policyclass_configured.is_set || is_set(is_policyclass_configured.yfilter)) leaf_name_data.push_back(is_policyclass_configured.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.yfilter)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (is_forward_class_configured.is_set || is_set(is_forward_class_configured.yfilter)) leaf_name_data.push_back(is_forward_class_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (fast_reroute.is_set || is_set(fast_reroute.yfilter)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (frr_node_protection.is_set || is_set(frr_node_protection.yfilter)) leaf_name_data.push_back(frr_node_protection.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.yfilter)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (record_route.is_set || is_set(record_route.yfilter)) leaf_name_data.push_back(record_route.get_name_leafdata());
    if (auto_bandwidth_collect.is_set || is_set(auto_bandwidth_collect.yfilter)) leaf_name_data.push_back(auto_bandwidth_collect.get_name_leafdata());
    if (auto_route_announce.is_set || is_set(auto_route_announce.yfilter)) leaf_name_data.push_back(auto_route_announce.get_name_leafdata());
    if (soft_preemption_configured.is_set || is_set(soft_preemption_configured.yfilter)) leaf_name_data.push_back(soft_preemption_configured.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (load_share.is_set || is_set(load_share.yfilter)) leaf_name_data.push_back(load_share.get_name_leafdata());
    if (is_interface_bw_configured.is_set || is_set(is_interface_bw_configured.yfilter)) leaf_name_data.push_back(is_interface_bw_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "policy-class-entry")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry>();
        ent_->parent = this;
        policy_class_entry.append(ent_);
        return ent_;
    }

    if(child_yang_name == "mesh-group-id")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId>();
        ent_->parent = this;
        mesh_group_id.append(ent_);
        return ent_;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId>();
        ent_->parent = this;
        tunnel_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(affinity != nullptr)
    {
        _children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    count_ = 0;
    for (auto ent_ : policy_class_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : mesh_group_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : tunnel_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-class")
    {
        policy_class = value;
        policy_class.value_namespace = name_space;
        policy_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured = value;
        is_policyclass_configured.value_namespace = name_space;
        is_policyclass_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
        forward_class.value_namespace = name_space;
        forward_class.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-forward-class-configured")
    {
        is_forward_class_configured = value;
        is_forward_class_configured.value_namespace = name_space;
        is_forward_class_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
        fast_reroute.value_namespace = name_space;
        fast_reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-node-protection")
    {
        frr_node_protection = value;
        frr_node_protection.value_namespace = name_space;
        frr_node_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
        frr_bandwidth_protection.value_namespace = name_space;
        frr_bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-route")
    {
        record_route = value;
        record_route.value_namespace = name_space;
        record_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-bandwidth-collect")
    {
        auto_bandwidth_collect = value;
        auto_bandwidth_collect.value_namespace = name_space;
        auto_bandwidth_collect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-route-announce")
    {
        auto_route_announce = value;
        auto_route_announce.value_namespace = name_space;
        auto_route_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-preemption-configured")
    {
        soft_preemption_configured = value;
        soft_preemption_configured.value_namespace = name_space;
        soft_preemption_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load-share")
    {
        load_share = value;
        load_share.value_namespace = name_space;
        load_share.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interface-bw-configured")
    {
        is_interface_bw_configured = value;
        is_interface_bw_configured.value_namespace = name_space;
        is_interface_bw_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "policy-class")
    {
        policy_class.yfilter = yfilter;
    }
    if(value_path == "is-policyclass-configured")
    {
        is_policyclass_configured.yfilter = yfilter;
    }
    if(value_path == "forward-class")
    {
        forward_class.yfilter = yfilter;
    }
    if(value_path == "is-forward-class-configured")
    {
        is_forward_class_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "fast-reroute")
    {
        fast_reroute.yfilter = yfilter;
    }
    if(value_path == "frr-node-protection")
    {
        frr_node_protection.yfilter = yfilter;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "record-route")
    {
        record_route.yfilter = yfilter;
    }
    if(value_path == "auto-bandwidth-collect")
    {
        auto_bandwidth_collect.yfilter = yfilter;
    }
    if(value_path == "auto-route-announce")
    {
        auto_route_announce.yfilter = yfilter;
    }
    if(value_path == "soft-preemption-configured")
    {
        soft_preemption_configured.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "load-share")
    {
        load_share.yfilter = yfilter;
    }
    if(value_path == "is-interface-bw-configured")
    {
        is_interface_bw_configured.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "policy-class-entry" || name == "mesh-group-id" || name == "tunnel-id" || name == "configured-bandwidth" || name == "dste-class-type" || name == "is-bandwidth-configured" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "policy-class" || name == "is-policyclass-configured" || name == "forward-class" || name == "is-forward-class-configured" || name == "is-affinity-configured" || name == "fast-reroute" || name == "frr-node-protection" || name == "frr-bandwidth-protection" || name == "record-route" || name == "auto-bandwidth-collect" || name == "auto-route-announce" || name == "soft-preemption-configured" || name == "bandwidth" || name == "load-share" || name == "is-interface-bw-configured")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::~Affinity()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity>();
        ent_->parent = this;
        named_affinity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : named_affinity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue>();
        ent_->parent = this;
        constraint_extended_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        ent_->parent = this;
        extended_forward_ref_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : constraint_extended_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_forward_ref_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::Logging()
    :
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    all_logging_enabled{YType::boolean, "all-logging-enabled"}
{

    yang_name = "logging"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::~Logging()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_data() const
{
    if (is_presence_container) return true;
    return lsp_state.is_set
	|| s2l_state.is_set
	|| lsp_re_route.is_set
	|| lsp_re_opt.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| all_logging_enabled.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::PolicyClassEntry()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "policy-class-entry"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::~PolicyClassEntry()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-class-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::PolicyClassEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::MeshGroupId()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "mesh-group-id"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::~MeshGroupId()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group-id";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::MeshGroupId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-automesh"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetAutomesh::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::AttributeSetXro()
    :
    xro(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>())
{
    xro->parent = this;

    yang_name = "attribute-set-xro"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::~AttributeSetXro()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::has_data() const
{
    if (is_presence_container) return true;
    return (xro !=  nullptr && xro->has_data());
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::has_operation() const
{
    return is_set(yfilter)
	|| (xro !=  nullptr && xro->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro")
    {
        if(xro == nullptr)
        {
            xro = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro>();
        }
        return xro;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xro != nullptr)
    {
        _children["xro"] = xro;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::Xro()
    :
    mutual_diversity_flag{YType::boolean, "mutual-diversity-flag"}
        ,
    xro_subobject(this, {})
{

    yang_name = "xro"; yang_parent_name = "attribute-set-xro"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::~Xro()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<xro_subobject.len(); index++)
    {
        if(xro_subobject[index]->has_data())
            return true;
    }
    return mutual_diversity_flag.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_operation() const
{
    for (std::size_t index=0; index<xro_subobject.len(); index++)
    {
        if(xro_subobject[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mutual_diversity_flag.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mutual_diversity_flag.is_set || is_set(mutual_diversity_flag.yfilter)) leaf_name_data.push_back(mutual_diversity_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xro-subobject")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject>();
        ent_->parent = this;
        xro_subobject.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : xro_subobject.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag = value;
        mutual_diversity_flag.value_namespace = name_space;
        mutual_diversity_flag.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mutual-diversity-flag")
    {
        mutual_diversity_flag.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xro-subobject" || name == "mutual-diversity-flag")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::XroSubobject()
    :
    type{YType::enumeration, "type"}
        ,
    ipv4_subobject(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>())
    , ipv6_subobject(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>())
    , unnumbered_subobject(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>())
    , as_subobject(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>())
    , srlg_subobject(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>())
    , lsp_subobject(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>())
{
    ipv4_subobject->parent = this;
    ipv6_subobject->parent = this;
    unnumbered_subobject->parent = this;
    as_subobject->parent = this;
    srlg_subobject->parent = this;
    lsp_subobject->parent = this;

    yang_name = "xro-subobject"; yang_parent_name = "xro"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::~XroSubobject()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_data())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_data())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_data())
	|| (as_subobject !=  nullptr && as_subobject->has_data())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_data())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_data());
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ipv4_subobject !=  nullptr && ipv4_subobject->has_operation())
	|| (ipv6_subobject !=  nullptr && ipv6_subobject->has_operation())
	|| (unnumbered_subobject !=  nullptr && unnumbered_subobject->has_operation())
	|| (as_subobject !=  nullptr && as_subobject->has_operation())
	|| (srlg_subobject !=  nullptr && srlg_subobject->has_operation())
	|| (lsp_subobject !=  nullptr && lsp_subobject->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xro-subobject";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-subobject")
    {
        if(ipv4_subobject == nullptr)
        {
            ipv4_subobject = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject>();
        }
        return ipv4_subobject;
    }

    if(child_yang_name == "ipv6-subobject")
    {
        if(ipv6_subobject == nullptr)
        {
            ipv6_subobject = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject>();
        }
        return ipv6_subobject;
    }

    if(child_yang_name == "unnumbered-subobject")
    {
        if(unnumbered_subobject == nullptr)
        {
            unnumbered_subobject = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject>();
        }
        return unnumbered_subobject;
    }

    if(child_yang_name == "as-subobject")
    {
        if(as_subobject == nullptr)
        {
            as_subobject = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject>();
        }
        return as_subobject;
    }

    if(child_yang_name == "srlg-subobject")
    {
        if(srlg_subobject == nullptr)
        {
            srlg_subobject = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject>();
        }
        return srlg_subobject;
    }

    if(child_yang_name == "lsp-subobject")
    {
        if(lsp_subobject == nullptr)
        {
            lsp_subobject = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject>();
        }
        return lsp_subobject;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4_subobject != nullptr)
    {
        _children["ipv4-subobject"] = ipv4_subobject;
    }

    if(ipv6_subobject != nullptr)
    {
        _children["ipv6-subobject"] = ipv6_subobject;
    }

    if(unnumbered_subobject != nullptr)
    {
        _children["unnumbered-subobject"] = unnumbered_subobject;
    }

    if(as_subobject != nullptr)
    {
        _children["as-subobject"] = as_subobject;
    }

    if(srlg_subobject != nullptr)
    {
        _children["srlg-subobject"] = srlg_subobject;
    }

    if(lsp_subobject != nullptr)
    {
        _children["lsp-subobject"] = lsp_subobject;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-subobject" || name == "ipv6-subobject" || name == "unnumbered-subobject" || name == "as-subobject" || name == "srlg-subobject" || name == "lsp-subobject" || name == "type")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::Ipv4Subobject()
    :
    address{YType::str, "address"},
    prefix_len{YType::uint8, "prefix-len"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "ipv4-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::~Ipv4Subobject()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_len.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv4Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-len" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::Ipv6Subobject()
    :
    address{YType::str, "address"},
    prefix_len{YType::uint8, "prefix-len"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "ipv6-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::~Ipv6Subobject()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| prefix_len.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(prefix_len.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_len.is_set || is_set(prefix_len.yfilter)) leaf_name_data.push_back(prefix_len.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-len")
    {
        prefix_len = value;
        prefix_len.value_namespace = name_space;
        prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "prefix-len")
    {
        prefix_len.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::Ipv6Subobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "prefix-len" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::UnnumberedSubobject()
    :
    te_router_id{YType::str, "te-router-id"},
    interface_id{YType::uint32, "interface-id"},
    attribute{YType::enumeration, "attribute"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "unnumbered-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::~UnnumberedSubobject()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_data() const
{
    if (is_presence_container) return true;
    return te_router_id.is_set
	|| interface_id.is_set
	|| attribute.is_set
	|| exclusion_type.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(te_router_id.yfilter)
	|| ydk::is_set(interface_id.yfilter)
	|| ydk::is_set(attribute.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unnumbered-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (te_router_id.is_set || is_set(te_router_id.yfilter)) leaf_name_data.push_back(te_router_id.get_name_leafdata());
    if (interface_id.is_set || is_set(interface_id.yfilter)) leaf_name_data.push_back(interface_id.get_name_leafdata());
    if (attribute.is_set || is_set(attribute.yfilter)) leaf_name_data.push_back(attribute.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "te-router-id")
    {
        te_router_id = value;
        te_router_id.value_namespace = name_space;
        te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-id")
    {
        interface_id = value;
        interface_id.value_namespace = name_space;
        interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute")
    {
        attribute = value;
        attribute.value_namespace = name_space;
        attribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "te-router-id")
    {
        te_router_id.yfilter = yfilter;
    }
    if(value_path == "interface-id")
    {
        interface_id.yfilter = yfilter;
    }
    if(value_path == "attribute")
    {
        attribute.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::UnnumberedSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "te-router-id" || name == "interface-id" || name == "attribute" || name == "exclusion-type")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::AsSubobject()
    :
    as_number{YType::uint16, "as-number"}
{

    yang_name = "as-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::~AsSubobject()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::AsSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::SrlgSubobject()
    :
    srlg_id{YType::uint32, "srlg-id"},
    exclusion_type{YType::enumeration, "exclusion-type"}
{

    yang_name = "srlg-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::~SrlgSubobject()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_data() const
{
    if (is_presence_container) return true;
    return srlg_id.is_set
	|| exclusion_type.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srlg_id.yfilter)
	|| ydk::is_set(exclusion_type.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srlg-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srlg_id.is_set || is_set(srlg_id.yfilter)) leaf_name_data.push_back(srlg_id.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srlg-id")
    {
        srlg_id = value;
        srlg_id.value_namespace = name_space;
        srlg_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srlg-id")
    {
        srlg_id.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::SrlgSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srlg-id" || name == "exclusion-type")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::LspSubobject()
    :
    ignore_lsp_id{YType::boolean, "ignore-lsp-id"},
    processing_node_exception{YType::boolean, "processing-node-exception"},
    penultimate_node_exception{YType::boolean, "penultimate-node-exception"},
    destination_node_exception{YType::boolean, "destination-node-exception"},
    exclusion_type{YType::enumeration, "exclusion-type"}
        ,
    fec(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>())
{
    fec->parent = this;

    yang_name = "lsp-subobject"; yang_parent_name = "xro-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::~LspSubobject()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_data() const
{
    if (is_presence_container) return true;
    return ignore_lsp_id.is_set
	|| processing_node_exception.is_set
	|| penultimate_node_exception.is_set
	|| destination_node_exception.is_set
	|| exclusion_type.is_set
	|| (fec !=  nullptr && fec->has_data());
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_lsp_id.yfilter)
	|| ydk::is_set(processing_node_exception.yfilter)
	|| ydk::is_set(penultimate_node_exception.yfilter)
	|| ydk::is_set(destination_node_exception.yfilter)
	|| ydk::is_set(exclusion_type.yfilter)
	|| (fec !=  nullptr && fec->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-subobject";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_lsp_id.is_set || is_set(ignore_lsp_id.yfilter)) leaf_name_data.push_back(ignore_lsp_id.get_name_leafdata());
    if (processing_node_exception.is_set || is_set(processing_node_exception.yfilter)) leaf_name_data.push_back(processing_node_exception.get_name_leafdata());
    if (penultimate_node_exception.is_set || is_set(penultimate_node_exception.yfilter)) leaf_name_data.push_back(penultimate_node_exception.get_name_leafdata());
    if (destination_node_exception.is_set || is_set(destination_node_exception.yfilter)) leaf_name_data.push_back(destination_node_exception.get_name_leafdata());
    if (exclusion_type.is_set || is_set(exclusion_type.yfilter)) leaf_name_data.push_back(exclusion_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec")
    {
        if(fec == nullptr)
        {
            fec = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec>();
        }
        return fec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fec != nullptr)
    {
        _children["fec"] = fec;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id = value;
        ignore_lsp_id.value_namespace = name_space;
        ignore_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception = value;
        processing_node_exception.value_namespace = name_space;
        processing_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception = value;
        penultimate_node_exception.value_namespace = name_space;
        penultimate_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-node-exception")
    {
        destination_node_exception = value;
        destination_node_exception.value_namespace = name_space;
        destination_node_exception.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type = value;
        exclusion_type.value_namespace = name_space;
        exclusion_type.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-lsp-id")
    {
        ignore_lsp_id.yfilter = yfilter;
    }
    if(value_path == "processing-node-exception")
    {
        processing_node_exception.yfilter = yfilter;
    }
    if(value_path == "penultimate-node-exception")
    {
        penultimate_node_exception.yfilter = yfilter;
    }
    if(value_path == "destination-node-exception")
    {
        destination_node_exception.yfilter = yfilter;
    }
    if(value_path == "exclusion-type")
    {
        exclusion_type.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec" || name == "ignore-lsp-id" || name == "processing-node-exception" || name == "penultimate-node-exception" || name == "destination-node-exception" || name == "exclusion-type")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::Fec()
    :
    fec_lsp_id{YType::uint16, "fec-lsp-id"},
    fec_tunnel_id{YType::uint16, "fec-tunnel-id"},
    fec_extended_tunnel_id{YType::str, "fec-extended-tunnel-id"},
    fec_source{YType::str, "fec-source"},
    fec_vrf{YType::str, "fec-vrf"}
        ,
    fec_destination_info(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>())
{
    fec_destination_info->parent = this;

    yang_name = "fec"; yang_parent_name = "lsp-subobject"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::~Fec()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_data() const
{
    if (is_presence_container) return true;
    return fec_lsp_id.is_set
	|| fec_tunnel_id.is_set
	|| fec_extended_tunnel_id.is_set
	|| fec_source.is_set
	|| fec_vrf.is_set
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_data());
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_lsp_id.yfilter)
	|| ydk::is_set(fec_tunnel_id.yfilter)
	|| ydk::is_set(fec_extended_tunnel_id.yfilter)
	|| ydk::is_set(fec_source.yfilter)
	|| ydk::is_set(fec_vrf.yfilter)
	|| (fec_destination_info !=  nullptr && fec_destination_info->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_lsp_id.is_set || is_set(fec_lsp_id.yfilter)) leaf_name_data.push_back(fec_lsp_id.get_name_leafdata());
    if (fec_tunnel_id.is_set || is_set(fec_tunnel_id.yfilter)) leaf_name_data.push_back(fec_tunnel_id.get_name_leafdata());
    if (fec_extended_tunnel_id.is_set || is_set(fec_extended_tunnel_id.yfilter)) leaf_name_data.push_back(fec_extended_tunnel_id.get_name_leafdata());
    if (fec_source.is_set || is_set(fec_source.yfilter)) leaf_name_data.push_back(fec_source.get_name_leafdata());
    if (fec_vrf.is_set || is_set(fec_vrf.yfilter)) leaf_name_data.push_back(fec_vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fec-destination-info")
    {
        if(fec_destination_info == nullptr)
        {
            fec_destination_info = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo>();
        }
        return fec_destination_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fec_destination_info != nullptr)
    {
        _children["fec-destination-info"] = fec_destination_info;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id = value;
        fec_lsp_id.value_namespace = name_space;
        fec_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id = value;
        fec_tunnel_id.value_namespace = name_space;
        fec_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id = value;
        fec_extended_tunnel_id.value_namespace = name_space;
        fec_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-source")
    {
        fec_source = value;
        fec_source.value_namespace = name_space;
        fec_source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf = value;
        fec_vrf.value_namespace = name_space;
        fec_vrf.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-lsp-id")
    {
        fec_lsp_id.yfilter = yfilter;
    }
    if(value_path == "fec-tunnel-id")
    {
        fec_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-extended-tunnel-id")
    {
        fec_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "fec-source")
    {
        fec_source.yfilter = yfilter;
    }
    if(value_path == "fec-vrf")
    {
        fec_vrf.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-destination-info" || name == "fec-lsp-id" || name == "fec-tunnel-id" || name == "fec-extended-tunnel-id" || name == "fec-source" || name == "fec-vrf")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::FecDestinationInfo()
    :
    fec_ctype{YType::enumeration, "fec-ctype"},
    p2p_lsp_destination{YType::str, "p2p-lsp-destination"},
    fec_destination_p2mp_id{YType::uint32, "fec-destination-p2mp-id"}
{

    yang_name = "fec-destination-info"; yang_parent_name = "fec"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::~FecDestinationInfo()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_data() const
{
    if (is_presence_container) return true;
    return fec_ctype.is_set
	|| p2p_lsp_destination.is_set
	|| fec_destination_p2mp_id.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fec_ctype.yfilter)
	|| ydk::is_set(p2p_lsp_destination.yfilter)
	|| ydk::is_set(fec_destination_p2mp_id.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fec-destination-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec_ctype.is_set || is_set(fec_ctype.yfilter)) leaf_name_data.push_back(fec_ctype.get_name_leafdata());
    if (p2p_lsp_destination.is_set || is_set(p2p_lsp_destination.yfilter)) leaf_name_data.push_back(p2p_lsp_destination.get_name_leafdata());
    if (fec_destination_p2mp_id.is_set || is_set(fec_destination_p2mp_id.yfilter)) leaf_name_data.push_back(fec_destination_p2mp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype = value;
        fec_ctype.value_namespace = name_space;
        fec_ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination = value;
        p2p_lsp_destination.value_namespace = name_space;
        p2p_lsp_destination.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id = value;
        fec_destination_p2mp_id.value_namespace = name_space;
        fec_destination_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fec-ctype")
    {
        fec_ctype.yfilter = yfilter;
    }
    if(value_path == "p2p-lsp-destination")
    {
        p2p_lsp_destination.yfilter = yfilter;
    }
    if(value_path == "fec-destination-p2mp-id")
    {
        fec_destination_p2mp_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetXro::Xro::XroSubobject::LspSubobject::Fec::FecDestinationInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fec-ctype" || name == "p2p-lsp-destination" || name == "fec-destination-p2mp-id")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::AttributeSetP2mpte()
    :
    fast_reroute{YType::boolean, "fast-reroute"},
    frr_bandwidth_protection{YType::boolean, "frr-bandwidth-protection"},
    setup_priority{YType::uint8, "setup-priority"},
    hold_priority{YType::uint8, "hold-priority"},
    is_priority_configured{YType::boolean, "is-priority-configured"},
    configured_bandwidth{YType::uint32, "configured-bandwidth"},
    dste_class_type{YType::uint8, "dste-class-type"},
    is_bandwidth_configured{YType::boolean, "is-bandwidth-configured"},
    is_affinity_configured{YType::boolean, "is-affinity-configured"}
        ,
    affinity(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity>())
    , tunnel_id(this, {})
{
    affinity->parent = this;

    yang_name = "attribute-set-p2mpte"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::~AttributeSetP2mpte()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return fast_reroute.is_set
	|| frr_bandwidth_protection.is_set
	|| setup_priority.is_set
	|| hold_priority.is_set
	|| is_priority_configured.is_set
	|| configured_bandwidth.is_set
	|| dste_class_type.is_set
	|| is_bandwidth_configured.is_set
	|| is_affinity_configured.is_set
	|| (affinity !=  nullptr && affinity->has_data());
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(fast_reroute.yfilter)
	|| ydk::is_set(frr_bandwidth_protection.yfilter)
	|| ydk::is_set(setup_priority.yfilter)
	|| ydk::is_set(hold_priority.yfilter)
	|| ydk::is_set(is_priority_configured.yfilter)
	|| ydk::is_set(configured_bandwidth.yfilter)
	|| ydk::is_set(dste_class_type.yfilter)
	|| ydk::is_set(is_bandwidth_configured.yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2mpte";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute.is_set || is_set(fast_reroute.yfilter)) leaf_name_data.push_back(fast_reroute.get_name_leafdata());
    if (frr_bandwidth_protection.is_set || is_set(frr_bandwidth_protection.yfilter)) leaf_name_data.push_back(frr_bandwidth_protection.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.yfilter)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.yfilter)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_priority_configured.is_set || is_set(is_priority_configured.yfilter)) leaf_name_data.push_back(is_priority_configured.get_name_leafdata());
    if (configured_bandwidth.is_set || is_set(configured_bandwidth.yfilter)) leaf_name_data.push_back(configured_bandwidth.get_name_leafdata());
    if (dste_class_type.is_set || is_set(dste_class_type.yfilter)) leaf_name_data.push_back(dste_class_type.get_name_leafdata());
    if (is_bandwidth_configured.is_set || is_set(is_bandwidth_configured.yfilter)) leaf_name_data.push_back(is_bandwidth_configured.get_name_leafdata());
    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId>();
        ent_->parent = this;
        tunnel_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(affinity != nullptr)
    {
        _children["affinity"] = affinity;
    }

    count_ = 0;
    for (auto ent_ : tunnel_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fast-reroute")
    {
        fast_reroute = value;
        fast_reroute.value_namespace = name_space;
        fast_reroute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection = value;
        frr_bandwidth_protection.value_namespace = name_space;
        frr_bandwidth_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
        setup_priority.value_namespace = name_space;
        setup_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
        hold_priority.value_namespace = name_space;
        hold_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured = value;
        is_priority_configured.value_namespace = name_space;
        is_priority_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth = value;
        configured_bandwidth.value_namespace = name_space;
        configured_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type = value;
        dste_class_type.value_namespace = name_space;
        dste_class_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured = value;
        is_bandwidth_configured.value_namespace = name_space;
        is_bandwidth_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fast-reroute")
    {
        fast_reroute.yfilter = yfilter;
    }
    if(value_path == "frr-bandwidth-protection")
    {
        frr_bandwidth_protection.yfilter = yfilter;
    }
    if(value_path == "setup-priority")
    {
        setup_priority.yfilter = yfilter;
    }
    if(value_path == "hold-priority")
    {
        hold_priority.yfilter = yfilter;
    }
    if(value_path == "is-priority-configured")
    {
        is_priority_configured.yfilter = yfilter;
    }
    if(value_path == "configured-bandwidth")
    {
        configured_bandwidth.yfilter = yfilter;
    }
    if(value_path == "dste-class-type")
    {
        dste_class_type.yfilter = yfilter;
    }
    if(value_path == "is-bandwidth-configured")
    {
        is_bandwidth_configured.yfilter = yfilter;
    }
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "tunnel-id" || name == "fast-reroute" || name == "frr-bandwidth-protection" || name == "setup-priority" || name == "hold-priority" || name == "is-priority-configured" || name == "configured-bandwidth" || name == "dste-class-type" || name == "is-bandwidth-configured" || name == "is-affinity-configured")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-p2mpte"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::~Affinity()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity>();
        ent_->parent = this;
        named_affinity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : named_affinity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue>();
        ent_->parent = this;
        constraint_extended_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        ent_->parent = this;
        extended_forward_ref_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : constraint_extended_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_forward_ref_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2mpte"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2mpte::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::AttributeSetApsPp()
    :
    snc_mode{YType::enumeration, "snc-mode"},
    tcm_id{YType::uint32, "tcm-id"},
    protection_type{YType::enumeration, "protection-type"},
    protection_mode{YType::enumeration, "protection-mode"},
    wait_to_restore_time{YType::uint32, "wait-to-restore-time"},
    hold_off_time{YType::uint32, "hold-off-time"},
    path_prot_profile_type{YType::enumeration, "path-prot-profile-type"},
    restoration_style{YType::enumeration, "restoration-style"}
        ,
    revert_schedule(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>())
{
    revert_schedule->parent = this;

    yang_name = "attribute-set-aps-pp"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::~AttributeSetApsPp()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_data() const
{
    if (is_presence_container) return true;
    return snc_mode.is_set
	|| tcm_id.is_set
	|| protection_type.is_set
	|| protection_mode.is_set
	|| wait_to_restore_time.is_set
	|| hold_off_time.is_set
	|| path_prot_profile_type.is_set
	|| restoration_style.is_set
	|| (revert_schedule !=  nullptr && revert_schedule->has_data());
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(snc_mode.yfilter)
	|| ydk::is_set(tcm_id.yfilter)
	|| ydk::is_set(protection_type.yfilter)
	|| ydk::is_set(protection_mode.yfilter)
	|| ydk::is_set(wait_to_restore_time.yfilter)
	|| ydk::is_set(hold_off_time.yfilter)
	|| ydk::is_set(path_prot_profile_type.yfilter)
	|| ydk::is_set(restoration_style.yfilter)
	|| (revert_schedule !=  nullptr && revert_schedule->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-aps-pp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snc_mode.is_set || is_set(snc_mode.yfilter)) leaf_name_data.push_back(snc_mode.get_name_leafdata());
    if (tcm_id.is_set || is_set(tcm_id.yfilter)) leaf_name_data.push_back(tcm_id.get_name_leafdata());
    if (protection_type.is_set || is_set(protection_type.yfilter)) leaf_name_data.push_back(protection_type.get_name_leafdata());
    if (protection_mode.is_set || is_set(protection_mode.yfilter)) leaf_name_data.push_back(protection_mode.get_name_leafdata());
    if (wait_to_restore_time.is_set || is_set(wait_to_restore_time.yfilter)) leaf_name_data.push_back(wait_to_restore_time.get_name_leafdata());
    if (hold_off_time.is_set || is_set(hold_off_time.yfilter)) leaf_name_data.push_back(hold_off_time.get_name_leafdata());
    if (path_prot_profile_type.is_set || is_set(path_prot_profile_type.yfilter)) leaf_name_data.push_back(path_prot_profile_type.get_name_leafdata());
    if (restoration_style.is_set || is_set(restoration_style.yfilter)) leaf_name_data.push_back(restoration_style.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "revert-schedule")
    {
        if(revert_schedule == nullptr)
        {
            revert_schedule = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule>();
        }
        return revert_schedule;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(revert_schedule != nullptr)
    {
        _children["revert-schedule"] = revert_schedule;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "snc-mode")
    {
        snc_mode = value;
        snc_mode.value_namespace = name_space;
        snc_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcm-id")
    {
        tcm_id = value;
        tcm_id.value_namespace = name_space;
        tcm_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-type")
    {
        protection_type = value;
        protection_type.value_namespace = name_space;
        protection_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protection-mode")
    {
        protection_mode = value;
        protection_mode.value_namespace = name_space;
        protection_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time = value;
        wait_to_restore_time.value_namespace = name_space;
        wait_to_restore_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-off-time")
    {
        hold_off_time = value;
        hold_off_time.value_namespace = name_space;
        hold_off_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type = value;
        path_prot_profile_type.value_namespace = name_space;
        path_prot_profile_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restoration-style")
    {
        restoration_style = value;
        restoration_style.value_namespace = name_space;
        restoration_style.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "snc-mode")
    {
        snc_mode.yfilter = yfilter;
    }
    if(value_path == "tcm-id")
    {
        tcm_id.yfilter = yfilter;
    }
    if(value_path == "protection-type")
    {
        protection_type.yfilter = yfilter;
    }
    if(value_path == "protection-mode")
    {
        protection_mode.yfilter = yfilter;
    }
    if(value_path == "wait-to-restore-time")
    {
        wait_to_restore_time.yfilter = yfilter;
    }
    if(value_path == "hold-off-time")
    {
        hold_off_time.yfilter = yfilter;
    }
    if(value_path == "path-prot-profile-type")
    {
        path_prot_profile_type.yfilter = yfilter;
    }
    if(value_path == "restoration-style")
    {
        restoration_style.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "revert-schedule" || name == "snc-mode" || name == "tcm-id" || name == "protection-type" || name == "protection-mode" || name == "wait-to-restore-time" || name == "hold-off-time" || name == "path-prot-profile-type" || name == "restoration-style")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::RevertSchedule()
    :
    schedulename{YType::str, "schedulename"},
    schedule_date{YType::uint32, "schedule-date"},
    schedule_frequency{YType::enumeration, "schedule-frequency"},
    duration{YType::uint32, "duration"},
    max_tries{YType::uint32, "max-tries"}
{

    yang_name = "revert-schedule"; yang_parent_name = "attribute-set-aps-pp"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::~RevertSchedule()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_data() const
{
    if (is_presence_container) return true;
    return schedulename.is_set
	|| schedule_date.is_set
	|| schedule_frequency.is_set
	|| duration.is_set
	|| max_tries.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(schedulename.yfilter)
	|| ydk::is_set(schedule_date.yfilter)
	|| ydk::is_set(schedule_frequency.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(max_tries.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-schedule";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (schedulename.is_set || is_set(schedulename.yfilter)) leaf_name_data.push_back(schedulename.get_name_leafdata());
    if (schedule_date.is_set || is_set(schedule_date.yfilter)) leaf_name_data.push_back(schedule_date.get_name_leafdata());
    if (schedule_frequency.is_set || is_set(schedule_frequency.yfilter)) leaf_name_data.push_back(schedule_frequency.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (max_tries.is_set || is_set(max_tries.yfilter)) leaf_name_data.push_back(max_tries.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "schedulename")
    {
        schedulename = value;
        schedulename.value_namespace = name_space;
        schedulename.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-date")
    {
        schedule_date = value;
        schedule_date.value_namespace = name_space;
        schedule_date.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency = value;
        schedule_frequency.value_namespace = name_space;
        schedule_frequency.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-tries")
    {
        max_tries = value;
        max_tries.value_namespace = name_space;
        max_tries.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "schedulename")
    {
        schedulename.yfilter = yfilter;
    }
    if(value_path == "schedule-date")
    {
        schedule_date.yfilter = yfilter;
    }
    if(value_path == "schedule-frequency")
    {
        schedule_frequency.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "max-tries")
    {
        max_tries.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetApsPp::RevertSchedule::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "schedulename" || name == "schedule-date" || name == "schedule-frequency" || name == "duration" || name == "max-tries")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::AttributeSetP2pTe()
    :
    is_affinity_configured{YType::boolean, "is-affinity-configured"},
    path_selection_segment_routing_adjacency_protection{YType::enumeration, "path-selection-segment-routing-adjacency-protection"},
    is_path_selection_segment_routing_adjacency_protection_configured{YType::boolean, "is-path-selection-segment-routing-adjacency-protection-configured"},
    path_invalidation_timeout{YType::uint32, "path-invalidation-timeout"},
    path_selection_invalidation_action{YType::enumeration, "path-selection-invalidation-action"},
    is_path_invalidation_timeout_configured{YType::boolean, "is-path-invalidation-timeout-configured"},
    is_path_invalidation_action_configured{YType::boolean, "is-path-invalidation-action-configured"},
    path_selection_metric{YType::enumeration, "path-selection-metric"},
    is_path_selection_metric_configured{YType::boolean, "is-path-selection-metric-configured"},
    path_selection_segment_routing_margin{YType::uint32, "path-selection-segment-routing-margin"},
    is_path_selection_segment_routing_margin_relative{YType::boolean, "is-path-selection-segment-routing-margin-relative"},
    is_path_selection_segment_routing_margin_configured{YType::boolean, "is-path-selection-segment-routing-margin-configured"},
    path_selection_segment_routing_segment_limit{YType::uint32, "path-selection-segment-routing-segment-limit"},
    is_path_selection_segment_routing_segment_limit_configured{YType::boolean, "is-path-selection-segment-routing-segment-limit-configured"},
    is_path_select_configured{YType::boolean, "is-path-select-configured"},
    is_prepend_list_configured{YType::boolean, "is-prepend-list-configured"},
    is_pce_configured{YType::boolean, "is-pce-configured"},
    is_pce_disj_source_configured{YType::boolean, "is-pce-disj-source-configured"},
    is_pce_disj_type_configured{YType::boolean, "is-pce-disj-type-configured"},
    is_pce_disj_group_id_configured{YType::boolean, "is-pce-disj-group-id-configured"},
    pcedp_source_address{YType::uint32, "pcedp-source-address"},
    pcedp_type{YType::enumeration, "pcedp-type"},
    pcedp_group_id{YType::uint32, "pcedp-group-id"},
    is_pceb_dj_source_configured{YType::boolean, "is-pceb-dj-source-configured"},
    is_pcebd_group_id_configured{YType::boolean, "is-pcebd-group-id-configured"},
    pcebd_source_address{YType::uint32, "pcebd-source-address"},
    pcebd_group_id{YType::uint32, "pcebd-group-id"}
        ,
    affinity(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity>())
    , logging(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging>())
    , prepend_list(std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList>())
    , tunnel_id(this, {})
{
    affinity->parent = this;
    logging->parent = this;
    prepend_list->parent = this;

    yang_name = "attribute-set-p2p-te"; yang_parent_name = "attribute-set-union"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::~AttributeSetP2pTe()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_data())
            return true;
    }
    return is_affinity_configured.is_set
	|| path_selection_segment_routing_adjacency_protection.is_set
	|| is_path_selection_segment_routing_adjacency_protection_configured.is_set
	|| path_invalidation_timeout.is_set
	|| path_selection_invalidation_action.is_set
	|| is_path_invalidation_timeout_configured.is_set
	|| is_path_invalidation_action_configured.is_set
	|| path_selection_metric.is_set
	|| is_path_selection_metric_configured.is_set
	|| path_selection_segment_routing_margin.is_set
	|| is_path_selection_segment_routing_margin_relative.is_set
	|| is_path_selection_segment_routing_margin_configured.is_set
	|| path_selection_segment_routing_segment_limit.is_set
	|| is_path_selection_segment_routing_segment_limit_configured.is_set
	|| is_path_select_configured.is_set
	|| is_prepend_list_configured.is_set
	|| is_pce_configured.is_set
	|| is_pce_disj_source_configured.is_set
	|| is_pce_disj_type_configured.is_set
	|| is_pce_disj_group_id_configured.is_set
	|| pcedp_source_address.is_set
	|| pcedp_type.is_set
	|| pcedp_group_id.is_set
	|| is_pceb_dj_source_configured.is_set
	|| is_pcebd_group_id_configured.is_set
	|| pcebd_source_address.is_set
	|| pcebd_group_id.is_set
	|| (affinity !=  nullptr && affinity->has_data())
	|| (logging !=  nullptr && logging->has_data())
	|| (prepend_list !=  nullptr && prepend_list->has_data());
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::has_operation() const
{
    for (std::size_t index=0; index<tunnel_id.len(); index++)
    {
        if(tunnel_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_affinity_configured.yfilter)
	|| ydk::is_set(path_selection_segment_routing_adjacency_protection.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_adjacency_protection_configured.yfilter)
	|| ydk::is_set(path_invalidation_timeout.yfilter)
	|| ydk::is_set(path_selection_invalidation_action.yfilter)
	|| ydk::is_set(is_path_invalidation_timeout_configured.yfilter)
	|| ydk::is_set(is_path_invalidation_action_configured.yfilter)
	|| ydk::is_set(path_selection_metric.yfilter)
	|| ydk::is_set(is_path_selection_metric_configured.yfilter)
	|| ydk::is_set(path_selection_segment_routing_margin.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_margin_relative.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_margin_configured.yfilter)
	|| ydk::is_set(path_selection_segment_routing_segment_limit.yfilter)
	|| ydk::is_set(is_path_selection_segment_routing_segment_limit_configured.yfilter)
	|| ydk::is_set(is_path_select_configured.yfilter)
	|| ydk::is_set(is_prepend_list_configured.yfilter)
	|| ydk::is_set(is_pce_configured.yfilter)
	|| ydk::is_set(is_pce_disj_source_configured.yfilter)
	|| ydk::is_set(is_pce_disj_type_configured.yfilter)
	|| ydk::is_set(is_pce_disj_group_id_configured.yfilter)
	|| ydk::is_set(pcedp_source_address.yfilter)
	|| ydk::is_set(pcedp_type.yfilter)
	|| ydk::is_set(pcedp_group_id.yfilter)
	|| ydk::is_set(is_pceb_dj_source_configured.yfilter)
	|| ydk::is_set(is_pcebd_group_id_configured.yfilter)
	|| ydk::is_set(pcebd_source_address.yfilter)
	|| ydk::is_set(pcebd_group_id.yfilter)
	|| (affinity !=  nullptr && affinity->has_operation())
	|| (logging !=  nullptr && logging->has_operation())
	|| (prepend_list !=  nullptr && prepend_list->has_operation());
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-set-p2p-te";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_affinity_configured.is_set || is_set(is_affinity_configured.yfilter)) leaf_name_data.push_back(is_affinity_configured.get_name_leafdata());
    if (path_selection_segment_routing_adjacency_protection.is_set || is_set(path_selection_segment_routing_adjacency_protection.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_adjacency_protection.get_name_leafdata());
    if (is_path_selection_segment_routing_adjacency_protection_configured.is_set || is_set(is_path_selection_segment_routing_adjacency_protection_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_adjacency_protection_configured.get_name_leafdata());
    if (path_invalidation_timeout.is_set || is_set(path_invalidation_timeout.yfilter)) leaf_name_data.push_back(path_invalidation_timeout.get_name_leafdata());
    if (path_selection_invalidation_action.is_set || is_set(path_selection_invalidation_action.yfilter)) leaf_name_data.push_back(path_selection_invalidation_action.get_name_leafdata());
    if (is_path_invalidation_timeout_configured.is_set || is_set(is_path_invalidation_timeout_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_timeout_configured.get_name_leafdata());
    if (is_path_invalidation_action_configured.is_set || is_set(is_path_invalidation_action_configured.yfilter)) leaf_name_data.push_back(is_path_invalidation_action_configured.get_name_leafdata());
    if (path_selection_metric.is_set || is_set(path_selection_metric.yfilter)) leaf_name_data.push_back(path_selection_metric.get_name_leafdata());
    if (is_path_selection_metric_configured.is_set || is_set(is_path_selection_metric_configured.yfilter)) leaf_name_data.push_back(is_path_selection_metric_configured.get_name_leafdata());
    if (path_selection_segment_routing_margin.is_set || is_set(path_selection_segment_routing_margin.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_margin.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_relative.is_set || is_set(is_path_selection_segment_routing_margin_relative.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_relative.get_name_leafdata());
    if (is_path_selection_segment_routing_margin_configured.is_set || is_set(is_path_selection_segment_routing_margin_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_margin_configured.get_name_leafdata());
    if (path_selection_segment_routing_segment_limit.is_set || is_set(path_selection_segment_routing_segment_limit.yfilter)) leaf_name_data.push_back(path_selection_segment_routing_segment_limit.get_name_leafdata());
    if (is_path_selection_segment_routing_segment_limit_configured.is_set || is_set(is_path_selection_segment_routing_segment_limit_configured.yfilter)) leaf_name_data.push_back(is_path_selection_segment_routing_segment_limit_configured.get_name_leafdata());
    if (is_path_select_configured.is_set || is_set(is_path_select_configured.yfilter)) leaf_name_data.push_back(is_path_select_configured.get_name_leafdata());
    if (is_prepend_list_configured.is_set || is_set(is_prepend_list_configured.yfilter)) leaf_name_data.push_back(is_prepend_list_configured.get_name_leafdata());
    if (is_pce_configured.is_set || is_set(is_pce_configured.yfilter)) leaf_name_data.push_back(is_pce_configured.get_name_leafdata());
    if (is_pce_disj_source_configured.is_set || is_set(is_pce_disj_source_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_source_configured.get_name_leafdata());
    if (is_pce_disj_type_configured.is_set || is_set(is_pce_disj_type_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_type_configured.get_name_leafdata());
    if (is_pce_disj_group_id_configured.is_set || is_set(is_pce_disj_group_id_configured.yfilter)) leaf_name_data.push_back(is_pce_disj_group_id_configured.get_name_leafdata());
    if (pcedp_source_address.is_set || is_set(pcedp_source_address.yfilter)) leaf_name_data.push_back(pcedp_source_address.get_name_leafdata());
    if (pcedp_type.is_set || is_set(pcedp_type.yfilter)) leaf_name_data.push_back(pcedp_type.get_name_leafdata());
    if (pcedp_group_id.is_set || is_set(pcedp_group_id.yfilter)) leaf_name_data.push_back(pcedp_group_id.get_name_leafdata());
    if (is_pceb_dj_source_configured.is_set || is_set(is_pceb_dj_source_configured.yfilter)) leaf_name_data.push_back(is_pceb_dj_source_configured.get_name_leafdata());
    if (is_pcebd_group_id_configured.is_set || is_set(is_pcebd_group_id_configured.yfilter)) leaf_name_data.push_back(is_pcebd_group_id_configured.get_name_leafdata());
    if (pcebd_source_address.is_set || is_set(pcebd_source_address.yfilter)) leaf_name_data.push_back(pcebd_source_address.get_name_leafdata());
    if (pcebd_group_id.is_set || is_set(pcebd_group_id.yfilter)) leaf_name_data.push_back(pcebd_group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "affinity")
    {
        if(affinity == nullptr)
        {
            affinity = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity>();
        }
        return affinity;
    }

    if(child_yang_name == "logging")
    {
        if(logging == nullptr)
        {
            logging = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging>();
        }
        return logging;
    }

    if(child_yang_name == "prepend-list")
    {
        if(prepend_list == nullptr)
        {
            prepend_list = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList>();
        }
        return prepend_list;
    }

    if(child_yang_name == "tunnel-id")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId>();
        ent_->parent = this;
        tunnel_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(affinity != nullptr)
    {
        _children["affinity"] = affinity;
    }

    if(logging != nullptr)
    {
        _children["logging"] = logging;
    }

    if(prepend_list != nullptr)
    {
        _children["prepend-list"] = prepend_list;
    }

    count_ = 0;
    for (auto ent_ : tunnel_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured = value;
        is_affinity_configured.value_namespace = name_space;
        is_affinity_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection = value;
        path_selection_segment_routing_adjacency_protection.value_namespace = name_space;
        path_selection_segment_routing_adjacency_protection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured = value;
        is_path_selection_segment_routing_adjacency_protection_configured.value_namespace = name_space;
        is_path_selection_segment_routing_adjacency_protection_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout = value;
        path_invalidation_timeout.value_namespace = name_space;
        path_invalidation_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action = value;
        path_selection_invalidation_action.value_namespace = name_space;
        path_selection_invalidation_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured = value;
        is_path_invalidation_timeout_configured.value_namespace = name_space;
        is_path_invalidation_timeout_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured = value;
        is_path_invalidation_action_configured.value_namespace = name_space;
        is_path_invalidation_action_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric = value;
        path_selection_metric.value_namespace = name_space;
        path_selection_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured = value;
        is_path_selection_metric_configured.value_namespace = name_space;
        is_path_selection_metric_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin = value;
        path_selection_segment_routing_margin.value_namespace = name_space;
        path_selection_segment_routing_margin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative = value;
        is_path_selection_segment_routing_margin_relative.value_namespace = name_space;
        is_path_selection_segment_routing_margin_relative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured = value;
        is_path_selection_segment_routing_margin_configured.value_namespace = name_space;
        is_path_selection_segment_routing_margin_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit = value;
        path_selection_segment_routing_segment_limit.value_namespace = name_space;
        path_selection_segment_routing_segment_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured = value;
        is_path_selection_segment_routing_segment_limit_configured.value_namespace = name_space;
        is_path_selection_segment_routing_segment_limit_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured = value;
        is_path_select_configured.value_namespace = name_space;
        is_path_select_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured = value;
        is_prepend_list_configured.value_namespace = name_space;
        is_prepend_list_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured = value;
        is_pce_configured.value_namespace = name_space;
        is_pce_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured = value;
        is_pce_disj_source_configured.value_namespace = name_space;
        is_pce_disj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured = value;
        is_pce_disj_type_configured.value_namespace = name_space;
        is_pce_disj_type_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured = value;
        is_pce_disj_group_id_configured.value_namespace = name_space;
        is_pce_disj_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address = value;
        pcedp_source_address.value_namespace = name_space;
        pcedp_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type = value;
        pcedp_type.value_namespace = name_space;
        pcedp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id = value;
        pcedp_group_id.value_namespace = name_space;
        pcedp_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured = value;
        is_pceb_dj_source_configured.value_namespace = name_space;
        is_pceb_dj_source_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured = value;
        is_pcebd_group_id_configured.value_namespace = name_space;
        is_pcebd_group_id_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address = value;
        pcebd_source_address.value_namespace = name_space;
        pcebd_source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id = value;
        pcebd_group_id.value_namespace = name_space;
        pcebd_group_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-affinity-configured")
    {
        is_affinity_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-adjacency-protection")
    {
        path_selection_segment_routing_adjacency_protection.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-adjacency-protection-configured")
    {
        is_path_selection_segment_routing_adjacency_protection_configured.yfilter = yfilter;
    }
    if(value_path == "path-invalidation-timeout")
    {
        path_invalidation_timeout.yfilter = yfilter;
    }
    if(value_path == "path-selection-invalidation-action")
    {
        path_selection_invalidation_action.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-timeout-configured")
    {
        is_path_invalidation_timeout_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-invalidation-action-configured")
    {
        is_path_invalidation_action_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-metric")
    {
        path_selection_metric.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-metric-configured")
    {
        is_path_selection_metric_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-margin")
    {
        path_selection_segment_routing_margin.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-margin-relative")
    {
        is_path_selection_segment_routing_margin_relative.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-margin-configured")
    {
        is_path_selection_segment_routing_margin_configured.yfilter = yfilter;
    }
    if(value_path == "path-selection-segment-routing-segment-limit")
    {
        path_selection_segment_routing_segment_limit.yfilter = yfilter;
    }
    if(value_path == "is-path-selection-segment-routing-segment-limit-configured")
    {
        is_path_selection_segment_routing_segment_limit_configured.yfilter = yfilter;
    }
    if(value_path == "is-path-select-configured")
    {
        is_path_select_configured.yfilter = yfilter;
    }
    if(value_path == "is-prepend-list-configured")
    {
        is_prepend_list_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-configured")
    {
        is_pce_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-source-configured")
    {
        is_pce_disj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-type-configured")
    {
        is_pce_disj_type_configured.yfilter = yfilter;
    }
    if(value_path == "is-pce-disj-group-id-configured")
    {
        is_pce_disj_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcedp-source-address")
    {
        pcedp_source_address.yfilter = yfilter;
    }
    if(value_path == "pcedp-type")
    {
        pcedp_type.yfilter = yfilter;
    }
    if(value_path == "pcedp-group-id")
    {
        pcedp_group_id.yfilter = yfilter;
    }
    if(value_path == "is-pceb-dj-source-configured")
    {
        is_pceb_dj_source_configured.yfilter = yfilter;
    }
    if(value_path == "is-pcebd-group-id-configured")
    {
        is_pcebd_group_id_configured.yfilter = yfilter;
    }
    if(value_path == "pcebd-source-address")
    {
        pcebd_source_address.yfilter = yfilter;
    }
    if(value_path == "pcebd-group-id")
    {
        pcebd_group_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "affinity" || name == "logging" || name == "prepend-list" || name == "tunnel-id" || name == "is-affinity-configured" || name == "path-selection-segment-routing-adjacency-protection" || name == "is-path-selection-segment-routing-adjacency-protection-configured" || name == "path-invalidation-timeout" || name == "path-selection-invalidation-action" || name == "is-path-invalidation-timeout-configured" || name == "is-path-invalidation-action-configured" || name == "path-selection-metric" || name == "is-path-selection-metric-configured" || name == "path-selection-segment-routing-margin" || name == "is-path-selection-segment-routing-margin-relative" || name == "is-path-selection-segment-routing-margin-configured" || name == "path-selection-segment-routing-segment-limit" || name == "is-path-selection-segment-routing-segment-limit-configured" || name == "is-path-select-configured" || name == "is-prepend-list-configured" || name == "is-pce-configured" || name == "is-pce-disj-source-configured" || name == "is-pce-disj-type-configured" || name == "is-pce-disj-group-id-configured" || name == "pcedp-source-address" || name == "pcedp-type" || name == "pcedp-group-id" || name == "is-pceb-dj-source-configured" || name == "is-pcebd-group-id-configured" || name == "pcebd-source-address" || name == "pcebd-group-id")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::Affinity()
    :
    affinity_bits{YType::uint32, "affinity-bits"},
    affinity_mask{YType::uint32, "affinity-mask"}
        ,
    named_affinity(this, {})
{

    yang_name = "affinity"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::~Affinity()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_data())
            return true;
    }
    return affinity_bits.is_set
	|| affinity_mask.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::has_operation() const
{
    for (std::size_t index=0; index<named_affinity.len(); index++)
    {
        if(named_affinity[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(affinity_bits.yfilter)
	|| ydk::is_set(affinity_mask.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bits.is_set || is_set(affinity_bits.yfilter)) leaf_name_data.push_back(affinity_bits.get_name_leafdata());
    if (affinity_mask.is_set || is_set(affinity_mask.yfilter)) leaf_name_data.push_back(affinity_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "named-affinity")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity>();
        ent_->parent = this;
        named_affinity.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : named_affinity.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits = value;
        affinity_bits.value_namespace = name_space;
        affinity_bits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask = value;
        affinity_mask.value_namespace = name_space;
        affinity_mask.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "affinity-bits")
    {
        affinity_bits.yfilter = yfilter;
    }
    if(value_path == "affinity-mask")
    {
        affinity_mask.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "named-affinity" || name == "affinity-bits" || name == "affinity-mask")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::NamedAffinity()
    :
    constraint_type{YType::uint8, "constraint-type"},
    constraint_value{YType::uint32, "constraint-value"},
    forward_ref_value{YType::uint32, "forward-ref-value"}
        ,
    constraint_extended_value(this, {})
    , extended_forward_ref_value(this, {})
{

    yang_name = "named-affinity"; yang_parent_name = "affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::~NamedAffinity()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_data())
            return true;
    }
    return constraint_type.is_set
	|| constraint_value.is_set
	|| forward_ref_value.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::has_operation() const
{
    for (std::size_t index=0; index<constraint_extended_value.len(); index++)
    {
        if(constraint_extended_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_forward_ref_value.len(); index++)
    {
        if(extended_forward_ref_value[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(constraint_type.yfilter)
	|| ydk::is_set(constraint_value.yfilter)
	|| ydk::is_set(forward_ref_value.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "named-affinity";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (constraint_type.is_set || is_set(constraint_type.yfilter)) leaf_name_data.push_back(constraint_type.get_name_leafdata());
    if (constraint_value.is_set || is_set(constraint_value.yfilter)) leaf_name_data.push_back(constraint_value.get_name_leafdata());
    if (forward_ref_value.is_set || is_set(forward_ref_value.yfilter)) leaf_name_data.push_back(forward_ref_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "constraint-extended-value")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue>();
        ent_->parent = this;
        constraint_extended_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-forward-ref-value")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue>();
        ent_->parent = this;
        extended_forward_ref_value.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : constraint_extended_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_forward_ref_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "constraint-type")
    {
        constraint_type = value;
        constraint_type.value_namespace = name_space;
        constraint_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "constraint-value")
    {
        constraint_value = value;
        constraint_value.value_namespace = name_space;
        constraint_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value = value;
        forward_ref_value.value_namespace = name_space;
        forward_ref_value.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "constraint-type")
    {
        constraint_type.yfilter = yfilter;
    }
    if(value_path == "constraint-value")
    {
        constraint_value.yfilter = yfilter;
    }
    if(value_path == "forward-ref-value")
    {
        forward_ref_value.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "constraint-extended-value" || name == "extended-forward-ref-value" || name == "constraint-type" || name == "constraint-value" || name == "forward-ref-value")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::ConstraintExtendedValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "constraint-extended-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::~ConstraintExtendedValue()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "constraint-extended-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ConstraintExtendedValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::ExtendedForwardRefValue()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "extended-forward-ref-value"; yang_parent_name = "named-affinity"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::~ExtendedForwardRefValue()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-forward-ref-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Affinity::NamedAffinity::ExtendedForwardRefValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::Logging()
    :
    lsp_state{YType::boolean, "lsp-state"},
    s2l_state{YType::boolean, "s2l-state"},
    lsp_re_route{YType::boolean, "lsp-re-route"},
    lsp_re_opt{YType::boolean, "lsp-re-opt"},
    lsp_insufficient_bw{YType::boolean, "lsp-insufficient-bw"},
    lsp_bandwidth_change{YType::boolean, "lsp-bandwidth-change"},
    lsp_pcalc_failure_logging_enabled{YType::boolean, "lsp-pcalc-failure-logging-enabled"},
    all_logging_enabled{YType::boolean, "all-logging-enabled"}
{

    yang_name = "logging"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::~Logging()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::has_data() const
{
    if (is_presence_container) return true;
    return lsp_state.is_set
	|| s2l_state.is_set
	|| lsp_re_route.is_set
	|| lsp_re_opt.is_set
	|| lsp_insufficient_bw.is_set
	|| lsp_bandwidth_change.is_set
	|| lsp_pcalc_failure_logging_enabled.is_set
	|| all_logging_enabled.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| ydk::is_set(s2l_state.yfilter)
	|| ydk::is_set(lsp_re_route.yfilter)
	|| ydk::is_set(lsp_re_opt.yfilter)
	|| ydk::is_set(lsp_insufficient_bw.yfilter)
	|| ydk::is_set(lsp_bandwidth_change.yfilter)
	|| ydk::is_set(lsp_pcalc_failure_logging_enabled.yfilter)
	|| ydk::is_set(all_logging_enabled.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());
    if (s2l_state.is_set || is_set(s2l_state.yfilter)) leaf_name_data.push_back(s2l_state.get_name_leafdata());
    if (lsp_re_route.is_set || is_set(lsp_re_route.yfilter)) leaf_name_data.push_back(lsp_re_route.get_name_leafdata());
    if (lsp_re_opt.is_set || is_set(lsp_re_opt.yfilter)) leaf_name_data.push_back(lsp_re_opt.get_name_leafdata());
    if (lsp_insufficient_bw.is_set || is_set(lsp_insufficient_bw.yfilter)) leaf_name_data.push_back(lsp_insufficient_bw.get_name_leafdata());
    if (lsp_bandwidth_change.is_set || is_set(lsp_bandwidth_change.yfilter)) leaf_name_data.push_back(lsp_bandwidth_change.get_name_leafdata());
    if (lsp_pcalc_failure_logging_enabled.is_set || is_set(lsp_pcalc_failure_logging_enabled.yfilter)) leaf_name_data.push_back(lsp_pcalc_failure_logging_enabled.get_name_leafdata());
    if (all_logging_enabled.is_set || is_set(all_logging_enabled.yfilter)) leaf_name_data.push_back(all_logging_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "s2l-state")
    {
        s2l_state = value;
        s2l_state.value_namespace = name_space;
        s2l_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route = value;
        lsp_re_route.value_namespace = name_space;
        lsp_re_route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt = value;
        lsp_re_opt.value_namespace = name_space;
        lsp_re_opt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw = value;
        lsp_insufficient_bw.value_namespace = name_space;
        lsp_insufficient_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change = value;
        lsp_bandwidth_change.value_namespace = name_space;
        lsp_bandwidth_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled = value;
        lsp_pcalc_failure_logging_enabled.value_namespace = name_space;
        lsp_pcalc_failure_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled = value;
        all_logging_enabled.value_namespace = name_space;
        all_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
    if(value_path == "s2l-state")
    {
        s2l_state.yfilter = yfilter;
    }
    if(value_path == "lsp-re-route")
    {
        lsp_re_route.yfilter = yfilter;
    }
    if(value_path == "lsp-re-opt")
    {
        lsp_re_opt.yfilter = yfilter;
    }
    if(value_path == "lsp-insufficient-bw")
    {
        lsp_insufficient_bw.yfilter = yfilter;
    }
    if(value_path == "lsp-bandwidth-change")
    {
        lsp_bandwidth_change.yfilter = yfilter;
    }
    if(value_path == "lsp-pcalc-failure-logging-enabled")
    {
        lsp_pcalc_failure_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "all-logging-enabled")
    {
        all_logging_enabled.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::Logging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-state" || name == "s2l-state" || name == "lsp-re-route" || name == "lsp-re-opt" || name == "lsp-insufficient-bw" || name == "lsp-bandwidth-change" || name == "lsp-pcalc-failure-logging-enabled" || name == "all-logging-enabled")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependList()
    :
    prepend_entry(this, {})
{

    yang_name = "prepend-list"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::~PrependList()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prepend_entry.len(); index++)
    {
        if(prepend_entry[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::has_operation() const
{
    for (std::size_t index=0; index<prepend_entry.len(); index++)
    {
        if(prepend_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prepend-entry")
    {
        auto ent_ = std::make_shared<MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry>();
        ent_->parent = this;
        prepend_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prepend_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prepend-entry")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::PrependEntry()
    :
    type{YType::enumeration, "type"},
    index_{YType::uint32, "index"},
    next_label{YType::uint32, "next-label"}
{

    yang_name = "prepend-entry"; yang_parent_name = "prepend-list"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::~PrependEntry()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| index_.is_set
	|| next_label.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(index_.yfilter)
	|| ydk::is_set(next_label.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prepend-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (next_label.is_set || is_set(next_label.yfilter)) leaf_name_data.push_back(next_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-label")
    {
        next_label = value;
        next_label.value_namespace = name_space;
        next_label.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
    if(value_path == "next-label")
    {
        next_label.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::PrependList::PrependEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "index" || name == "next-label")
        return true;
    return false;
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::TunnelId()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "tunnel-id"; yang_parent_name = "attribute-set-p2p-te"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::~TunnelId()
{
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-id";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::AttributeSets::AttributeSet::AttributeSetUnion::AttributeSetP2pTe::TunnelId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::IgpAreaBriefs::IgpAreaBriefs()
    :
    igp_area_brief(this, {"protocol", "process_tag"})
{

    yang_name = "igp-area-briefs"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::IgpAreaBriefs::~IgpAreaBriefs()
{
}

bool MplsTeStandby::IgpAreaBriefs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<igp_area_brief.len(); index++)
    {
        if(igp_area_brief[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::IgpAreaBriefs::has_operation() const
{
    for (std::size_t index=0; index<igp_area_brief.len(); index++)
    {
        if(igp_area_brief[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::IgpAreaBriefs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::IgpAreaBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-area-briefs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreaBriefs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::IgpAreaBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "igp-area-brief")
    {
        auto ent_ = std::make_shared<MplsTeStandby::IgpAreaBriefs::IgpAreaBrief>();
        ent_->parent = this;
        igp_area_brief.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::IgpAreaBriefs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : igp_area_brief.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::IgpAreaBriefs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::IgpAreaBriefs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::IgpAreaBriefs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "igp-area-brief")
        return true;
    return false;
}

MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::IgpAreaBrief()
    :
    protocol{YType::enumeration, "protocol"},
    process_tag{YType::str, "process-tag"},
    igp_type{YType::enumeration, "igp-type"},
    instance_name{YType::str, "instance-name"},
    igp_system_id{YType::str, "igp-system-id"},
    configured_te_router_id{YType::str, "configured-te-router-id"},
    global_router_id{YType::str, "global-router-id"},
    globall_router_id_optical{YType::str, "globall-router-id-optical"},
    in_use_te_router_id{YType::str, "in-use-te-router-id"},
    is_connection_up{YType::boolean, "is-connection-up"},
    connection_up_count{YType::uint32, "connection-up-count"},
    connection_down_count{YType::uint32, "connection-down-count"}
        ,
    secondary_router_id(this, {})
    , area(this, {})
{

    yang_name = "igp-area-brief"; yang_parent_name = "igp-area-briefs"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::~IgpAreaBrief()
{
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<secondary_router_id.len(); index++)
    {
        if(secondary_router_id[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<area.len(); index++)
    {
        if(area[index]->has_data())
            return true;
    }
    return protocol.is_set
	|| process_tag.is_set
	|| igp_type.is_set
	|| instance_name.is_set
	|| igp_system_id.is_set
	|| configured_te_router_id.is_set
	|| global_router_id.is_set
	|| globall_router_id_optical.is_set
	|| in_use_te_router_id.is_set
	|| is_connection_up.is_set
	|| connection_up_count.is_set
	|| connection_down_count.is_set;
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::has_operation() const
{
    for (std::size_t index=0; index<secondary_router_id.len(); index++)
    {
        if(secondary_router_id[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<area.len(); index++)
    {
        if(area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(process_tag.yfilter)
	|| ydk::is_set(igp_type.yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(igp_system_id.yfilter)
	|| ydk::is_set(configured_te_router_id.yfilter)
	|| ydk::is_set(global_router_id.yfilter)
	|| ydk::is_set(globall_router_id_optical.yfilter)
	|| ydk::is_set(in_use_te_router_id.yfilter)
	|| ydk::is_set(is_connection_up.yfilter)
	|| ydk::is_set(connection_up_count.yfilter)
	|| ydk::is_set(connection_down_count.yfilter);
}

std::string MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/igp-area-briefs/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-area-brief";
    ADD_KEY_TOKEN(protocol, "protocol");
    ADD_KEY_TOKEN(process_tag, "process-tag");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (process_tag.is_set || is_set(process_tag.yfilter)) leaf_name_data.push_back(process_tag.get_name_leafdata());
    if (igp_type.is_set || is_set(igp_type.yfilter)) leaf_name_data.push_back(igp_type.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (igp_system_id.is_set || is_set(igp_system_id.yfilter)) leaf_name_data.push_back(igp_system_id.get_name_leafdata());
    if (configured_te_router_id.is_set || is_set(configured_te_router_id.yfilter)) leaf_name_data.push_back(configured_te_router_id.get_name_leafdata());
    if (global_router_id.is_set || is_set(global_router_id.yfilter)) leaf_name_data.push_back(global_router_id.get_name_leafdata());
    if (globall_router_id_optical.is_set || is_set(globall_router_id_optical.yfilter)) leaf_name_data.push_back(globall_router_id_optical.get_name_leafdata());
    if (in_use_te_router_id.is_set || is_set(in_use_te_router_id.yfilter)) leaf_name_data.push_back(in_use_te_router_id.get_name_leafdata());
    if (is_connection_up.is_set || is_set(is_connection_up.yfilter)) leaf_name_data.push_back(is_connection_up.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.yfilter)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (connection_down_count.is_set || is_set(connection_down_count.yfilter)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "secondary-router-id")
    {
        auto ent_ = std::make_shared<MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId>();
        ent_->parent = this;
        secondary_router_id.append(ent_);
        return ent_;
    }

    if(child_yang_name == "area")
    {
        auto ent_ = std::make_shared<MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area>();
        ent_->parent = this;
        area.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : secondary_router_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : area.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-tag")
    {
        process_tag = value;
        process_tag.value_namespace = name_space;
        process_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-type")
    {
        igp_type = value;
        igp_type.value_namespace = name_space;
        igp_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-system-id")
    {
        igp_system_id = value;
        igp_system_id.value_namespace = name_space;
        igp_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-te-router-id")
    {
        configured_te_router_id = value;
        configured_te_router_id.value_namespace = name_space;
        configured_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-router-id")
    {
        global_router_id = value;
        global_router_id.value_namespace = name_space;
        global_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "globall-router-id-optical")
    {
        globall_router_id_optical = value;
        globall_router_id_optical.value_namespace = name_space;
        globall_router_id_optical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use-te-router-id")
    {
        in_use_te_router_id = value;
        in_use_te_router_id.value_namespace = name_space;
        in_use_te_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up = value;
        is_connection_up.value_namespace = name_space;
        is_connection_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
        connection_up_count.value_namespace = name_space;
        connection_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
        connection_down_count.value_namespace = name_space;
        connection_down_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "process-tag")
    {
        process_tag.yfilter = yfilter;
    }
    if(value_path == "igp-type")
    {
        igp_type.yfilter = yfilter;
    }
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "igp-system-id")
    {
        igp_system_id.yfilter = yfilter;
    }
    if(value_path == "configured-te-router-id")
    {
        configured_te_router_id.yfilter = yfilter;
    }
    if(value_path == "global-router-id")
    {
        global_router_id.yfilter = yfilter;
    }
    if(value_path == "globall-router-id-optical")
    {
        globall_router_id_optical.yfilter = yfilter;
    }
    if(value_path == "in-use-te-router-id")
    {
        in_use_te_router_id.yfilter = yfilter;
    }
    if(value_path == "is-connection-up")
    {
        is_connection_up.yfilter = yfilter;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count.yfilter = yfilter;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "secondary-router-id" || name == "area" || name == "protocol" || name == "process-tag" || name == "igp-type" || name == "instance-name" || name == "igp-system-id" || name == "configured-te-router-id" || name == "global-router-id" || name == "globall-router-id-optical" || name == "in-use-te-router-id" || name == "is-connection-up" || name == "connection-up-count" || name == "connection-down-count")
        return true;
    return false;
}

MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::SecondaryRouterId()
    :
    entry{YType::str, "entry"}
{

    yang_name = "secondary-router-id"; yang_parent_name = "igp-area-brief"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::~SecondaryRouterId()
{
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-router-id";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::SecondaryRouterId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::Area()
    :
    area_index{YType::uint32, "area-index"},
    area_number{YType::uint32, "area-number"},
    area_format{YType::enumeration, "area-format"},
    is_config_ready{YType::boolean, "is-config-ready"}
        ,
    active_data(std::make_shared<MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData>())
{
    active_data->parent = this;

    yang_name = "area"; yang_parent_name = "igp-area-brief"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::~Area()
{
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::has_data() const
{
    if (is_presence_container) return true;
    return area_index.is_set
	|| area_number.is_set
	|| area_format.is_set
	|| is_config_ready.is_set
	|| (active_data !=  nullptr && active_data->has_data());
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_index.yfilter)
	|| ydk::is_set(area_number.yfilter)
	|| ydk::is_set(area_format.yfilter)
	|| ydk::is_set(is_config_ready.yfilter)
	|| (active_data !=  nullptr && active_data->has_operation());
}

std::string MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_index.is_set || is_set(area_index.yfilter)) leaf_name_data.push_back(area_index.get_name_leafdata());
    if (area_number.is_set || is_set(area_number.yfilter)) leaf_name_data.push_back(area_number.get_name_leafdata());
    if (area_format.is_set || is_set(area_format.yfilter)) leaf_name_data.push_back(area_format.get_name_leafdata());
    if (is_config_ready.is_set || is_set(is_config_ready.yfilter)) leaf_name_data.push_back(is_config_ready.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "active-data")
    {
        if(active_data == nullptr)
        {
            active_data = std::make_shared<MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData>();
        }
        return active_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(active_data != nullptr)
    {
        _children["active-data"] = active_data;
    }

    return _children;
}

void MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-index")
    {
        area_index = value;
        area_index.value_namespace = name_space;
        area_index.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-number")
    {
        area_number = value;
        area_number.value_namespace = name_space;
        area_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-format")
    {
        area_format = value;
        area_format.value_namespace = name_space;
        area_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-config-ready")
    {
        is_config_ready = value;
        is_config_ready.value_namespace = name_space;
        is_config_ready.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-index")
    {
        area_index.yfilter = yfilter;
    }
    if(value_path == "area-number")
    {
        area_number.yfilter = yfilter;
    }
    if(value_path == "area-format")
    {
        area_format.yfilter = yfilter;
    }
    if(value_path == "is-config-ready")
    {
        is_config_ready.yfilter = yfilter;
    }
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-data" || name == "area-index" || name == "area-number" || name == "area-format" || name == "is-config-ready")
        return true;
    return false;
}

MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::ActiveData()
    :
    interfaces_count{YType::uint32, "interfaces-count"},
    link_idt_received{YType::boolean, "link-idt-received"},
    topology_idt_received{YType::boolean, "topology-idt-received"},
    sr_strict{YType::boolean, "sr-strict"},
    p2p_heads_count{YType::uint32, "p2p-heads-count"},
    p2p_autoroute_announced_count{YType::uint32, "p2p-autoroute-announced-count"},
    p2p_forwarding_adjacency_count{YType::uint32, "p2p-forwarding-adjacency-count"},
    p2mp_destination_count{YType::uint32, "p2mp-destination-count"},
    tunnel_loose_hops{YType::uint32, "tunnel-loose-hops"}
        ,
    area_statistics(std::make_shared<MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics>())
{
    area_statistics->parent = this;

    yang_name = "active-data"; yang_parent_name = "area"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::~ActiveData()
{
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::has_data() const
{
    if (is_presence_container) return true;
    return interfaces_count.is_set
	|| link_idt_received.is_set
	|| topology_idt_received.is_set
	|| sr_strict.is_set
	|| p2p_heads_count.is_set
	|| p2p_autoroute_announced_count.is_set
	|| p2p_forwarding_adjacency_count.is_set
	|| p2mp_destination_count.is_set
	|| tunnel_loose_hops.is_set
	|| (area_statistics !=  nullptr && area_statistics->has_data());
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interfaces_count.yfilter)
	|| ydk::is_set(link_idt_received.yfilter)
	|| ydk::is_set(topology_idt_received.yfilter)
	|| ydk::is_set(sr_strict.yfilter)
	|| ydk::is_set(p2p_heads_count.yfilter)
	|| ydk::is_set(p2p_autoroute_announced_count.yfilter)
	|| ydk::is_set(p2p_forwarding_adjacency_count.yfilter)
	|| ydk::is_set(p2mp_destination_count.yfilter)
	|| ydk::is_set(tunnel_loose_hops.yfilter)
	|| (area_statistics !=  nullptr && area_statistics->has_operation());
}

std::string MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces_count.is_set || is_set(interfaces_count.yfilter)) leaf_name_data.push_back(interfaces_count.get_name_leafdata());
    if (link_idt_received.is_set || is_set(link_idt_received.yfilter)) leaf_name_data.push_back(link_idt_received.get_name_leafdata());
    if (topology_idt_received.is_set || is_set(topology_idt_received.yfilter)) leaf_name_data.push_back(topology_idt_received.get_name_leafdata());
    if (sr_strict.is_set || is_set(sr_strict.yfilter)) leaf_name_data.push_back(sr_strict.get_name_leafdata());
    if (p2p_heads_count.is_set || is_set(p2p_heads_count.yfilter)) leaf_name_data.push_back(p2p_heads_count.get_name_leafdata());
    if (p2p_autoroute_announced_count.is_set || is_set(p2p_autoroute_announced_count.yfilter)) leaf_name_data.push_back(p2p_autoroute_announced_count.get_name_leafdata());
    if (p2p_forwarding_adjacency_count.is_set || is_set(p2p_forwarding_adjacency_count.yfilter)) leaf_name_data.push_back(p2p_forwarding_adjacency_count.get_name_leafdata());
    if (p2mp_destination_count.is_set || is_set(p2mp_destination_count.yfilter)) leaf_name_data.push_back(p2mp_destination_count.get_name_leafdata());
    if (tunnel_loose_hops.is_set || is_set(tunnel_loose_hops.yfilter)) leaf_name_data.push_back(tunnel_loose_hops.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-statistics")
    {
        if(area_statistics == nullptr)
        {
            area_statistics = std::make_shared<MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics>();
        }
        return area_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(area_statistics != nullptr)
    {
        _children["area-statistics"] = area_statistics;
    }

    return _children;
}

void MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interfaces-count")
    {
        interfaces_count = value;
        interfaces_count.value_namespace = name_space;
        interfaces_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-idt-received")
    {
        link_idt_received = value;
        link_idt_received.value_namespace = name_space;
        link_idt_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-idt-received")
    {
        topology_idt_received = value;
        topology_idt_received.value_namespace = name_space;
        topology_idt_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-strict")
    {
        sr_strict = value;
        sr_strict.value_namespace = name_space;
        sr_strict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-heads-count")
    {
        p2p_heads_count = value;
        p2p_heads_count.value_namespace = name_space;
        p2p_heads_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-autoroute-announced-count")
    {
        p2p_autoroute_announced_count = value;
        p2p_autoroute_announced_count.value_namespace = name_space;
        p2p_autoroute_announced_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-forwarding-adjacency-count")
    {
        p2p_forwarding_adjacency_count = value;
        p2p_forwarding_adjacency_count.value_namespace = name_space;
        p2p_forwarding_adjacency_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2mp-destination-count")
    {
        p2mp_destination_count = value;
        p2mp_destination_count.value_namespace = name_space;
        p2mp_destination_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-loose-hops")
    {
        tunnel_loose_hops = value;
        tunnel_loose_hops.value_namespace = name_space;
        tunnel_loose_hops.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interfaces-count")
    {
        interfaces_count.yfilter = yfilter;
    }
    if(value_path == "link-idt-received")
    {
        link_idt_received.yfilter = yfilter;
    }
    if(value_path == "topology-idt-received")
    {
        topology_idt_received.yfilter = yfilter;
    }
    if(value_path == "sr-strict")
    {
        sr_strict.yfilter = yfilter;
    }
    if(value_path == "p2p-heads-count")
    {
        p2p_heads_count.yfilter = yfilter;
    }
    if(value_path == "p2p-autoroute-announced-count")
    {
        p2p_autoroute_announced_count.yfilter = yfilter;
    }
    if(value_path == "p2p-forwarding-adjacency-count")
    {
        p2p_forwarding_adjacency_count.yfilter = yfilter;
    }
    if(value_path == "p2mp-destination-count")
    {
        p2mp_destination_count.yfilter = yfilter;
    }
    if(value_path == "tunnel-loose-hops")
    {
        tunnel_loose_hops.yfilter = yfilter;
    }
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-statistics" || name == "interfaces-count" || name == "link-idt-received" || name == "topology-idt-received" || name == "sr-strict" || name == "p2p-heads-count" || name == "p2p-autoroute-announced-count" || name == "p2p-forwarding-adjacency-count" || name == "p2mp-destination-count" || name == "tunnel-loose-hops")
        return true;
    return false;
}

MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::AreaStatistics()
    :
    area_adjacency_request_messages{YType::uint32, "area-adjacency-request-messages"},
    area_adjacency_announce_messages{YType::uint32, "area-adjacency-announce-messages"},
    area_flood_messages{YType::uint32, "area-flood-messages"},
    area_lsa_announce_messages{YType::uint32, "area-lsa-announce-messages"},
    area_lsa_fragment_announce_messages{YType::uint32, "area-lsa-fragment-announce-messages"},
    area_lsa_delete_messages{YType::uint32, "area-lsa-delete-messages"},
    area_lsa_fragment_delete_messages{YType::uint32, "area-lsa-fragment-delete-messages"},
    area_tunnel_announce_messages{YType::uint32, "area-tunnel-announce-messages"}
{

    yang_name = "area-statistics"; yang_parent_name = "active-data"; is_top_level_class = false; has_list_ancestor = true; 
}

MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::~AreaStatistics()
{
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::has_data() const
{
    if (is_presence_container) return true;
    return area_adjacency_request_messages.is_set
	|| area_adjacency_announce_messages.is_set
	|| area_flood_messages.is_set
	|| area_lsa_announce_messages.is_set
	|| area_lsa_fragment_announce_messages.is_set
	|| area_lsa_delete_messages.is_set
	|| area_lsa_fragment_delete_messages.is_set
	|| area_tunnel_announce_messages.is_set;
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_adjacency_request_messages.yfilter)
	|| ydk::is_set(area_adjacency_announce_messages.yfilter)
	|| ydk::is_set(area_flood_messages.yfilter)
	|| ydk::is_set(area_lsa_announce_messages.yfilter)
	|| ydk::is_set(area_lsa_fragment_announce_messages.yfilter)
	|| ydk::is_set(area_lsa_delete_messages.yfilter)
	|| ydk::is_set(area_lsa_fragment_delete_messages.yfilter)
	|| ydk::is_set(area_tunnel_announce_messages.yfilter);
}

std::string MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_adjacency_request_messages.is_set || is_set(area_adjacency_request_messages.yfilter)) leaf_name_data.push_back(area_adjacency_request_messages.get_name_leafdata());
    if (area_adjacency_announce_messages.is_set || is_set(area_adjacency_announce_messages.yfilter)) leaf_name_data.push_back(area_adjacency_announce_messages.get_name_leafdata());
    if (area_flood_messages.is_set || is_set(area_flood_messages.yfilter)) leaf_name_data.push_back(area_flood_messages.get_name_leafdata());
    if (area_lsa_announce_messages.is_set || is_set(area_lsa_announce_messages.yfilter)) leaf_name_data.push_back(area_lsa_announce_messages.get_name_leafdata());
    if (area_lsa_fragment_announce_messages.is_set || is_set(area_lsa_fragment_announce_messages.yfilter)) leaf_name_data.push_back(area_lsa_fragment_announce_messages.get_name_leafdata());
    if (area_lsa_delete_messages.is_set || is_set(area_lsa_delete_messages.yfilter)) leaf_name_data.push_back(area_lsa_delete_messages.get_name_leafdata());
    if (area_lsa_fragment_delete_messages.is_set || is_set(area_lsa_fragment_delete_messages.yfilter)) leaf_name_data.push_back(area_lsa_fragment_delete_messages.get_name_leafdata());
    if (area_tunnel_announce_messages.is_set || is_set(area_tunnel_announce_messages.yfilter)) leaf_name_data.push_back(area_tunnel_announce_messages.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-adjacency-request-messages")
    {
        area_adjacency_request_messages = value;
        area_adjacency_request_messages.value_namespace = name_space;
        area_adjacency_request_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-adjacency-announce-messages")
    {
        area_adjacency_announce_messages = value;
        area_adjacency_announce_messages.value_namespace = name_space;
        area_adjacency_announce_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-flood-messages")
    {
        area_flood_messages = value;
        area_flood_messages.value_namespace = name_space;
        area_flood_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-announce-messages")
    {
        area_lsa_announce_messages = value;
        area_lsa_announce_messages.value_namespace = name_space;
        area_lsa_announce_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-fragment-announce-messages")
    {
        area_lsa_fragment_announce_messages = value;
        area_lsa_fragment_announce_messages.value_namespace = name_space;
        area_lsa_fragment_announce_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-delete-messages")
    {
        area_lsa_delete_messages = value;
        area_lsa_delete_messages.value_namespace = name_space;
        area_lsa_delete_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-lsa-fragment-delete-messages")
    {
        area_lsa_fragment_delete_messages = value;
        area_lsa_fragment_delete_messages.value_namespace = name_space;
        area_lsa_fragment_delete_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "area-tunnel-announce-messages")
    {
        area_tunnel_announce_messages = value;
        area_tunnel_announce_messages.value_namespace = name_space;
        area_tunnel_announce_messages.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-adjacency-request-messages")
    {
        area_adjacency_request_messages.yfilter = yfilter;
    }
    if(value_path == "area-adjacency-announce-messages")
    {
        area_adjacency_announce_messages.yfilter = yfilter;
    }
    if(value_path == "area-flood-messages")
    {
        area_flood_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-announce-messages")
    {
        area_lsa_announce_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-fragment-announce-messages")
    {
        area_lsa_fragment_announce_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-delete-messages")
    {
        area_lsa_delete_messages.yfilter = yfilter;
    }
    if(value_path == "area-lsa-fragment-delete-messages")
    {
        area_lsa_fragment_delete_messages.yfilter = yfilter;
    }
    if(value_path == "area-tunnel-announce-messages")
    {
        area_tunnel_announce_messages.yfilter = yfilter;
    }
}

bool MplsTeStandby::IgpAreaBriefs::IgpAreaBrief::Area::ActiveData::AreaStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-adjacency-request-messages" || name == "area-adjacency-announce-messages" || name == "area-flood-messages" || name == "area-lsa-announce-messages" || name == "area-lsa-fragment-announce-messages" || name == "area-lsa-delete-messages" || name == "area-lsa-fragment-delete-messages" || name == "area-tunnel-announce-messages")
        return true;
    return false;
}

MplsTeStandby::BandwidthAccountingCounters::BandwidthAccountingCounters()
    :
    last_cleared_timestamp{YType::uint32, "last-cleared-timestamp"},
    bandwidth_application_count{YType::uint32, "bandwidth-application-count"},
    bandwidth_sample_count{YType::uint32, "bandwidth-sample-count"},
    invalid_sample_count{YType::uint32, "invalid-sample-count"},
    skipped_application_count{YType::uint32, "skipped-application-count"},
    capped_sample_count{YType::uint32, "capped-sample-count"},
    high_latency_count{YType::uint32, "high-latency-count"}
{

    yang_name = "bandwidth-accounting-counters"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::BandwidthAccountingCounters::~BandwidthAccountingCounters()
{
}

bool MplsTeStandby::BandwidthAccountingCounters::has_data() const
{
    if (is_presence_container) return true;
    return last_cleared_timestamp.is_set
	|| bandwidth_application_count.is_set
	|| bandwidth_sample_count.is_set
	|| invalid_sample_count.is_set
	|| skipped_application_count.is_set
	|| capped_sample_count.is_set
	|| high_latency_count.is_set;
}

bool MplsTeStandby::BandwidthAccountingCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_cleared_timestamp.yfilter)
	|| ydk::is_set(bandwidth_application_count.yfilter)
	|| ydk::is_set(bandwidth_sample_count.yfilter)
	|| ydk::is_set(invalid_sample_count.yfilter)
	|| ydk::is_set(skipped_application_count.yfilter)
	|| ydk::is_set(capped_sample_count.yfilter)
	|| ydk::is_set(high_latency_count.yfilter);
}

std::string MplsTeStandby::BandwidthAccountingCounters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::BandwidthAccountingCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-accounting-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::BandwidthAccountingCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_cleared_timestamp.is_set || is_set(last_cleared_timestamp.yfilter)) leaf_name_data.push_back(last_cleared_timestamp.get_name_leafdata());
    if (bandwidth_application_count.is_set || is_set(bandwidth_application_count.yfilter)) leaf_name_data.push_back(bandwidth_application_count.get_name_leafdata());
    if (bandwidth_sample_count.is_set || is_set(bandwidth_sample_count.yfilter)) leaf_name_data.push_back(bandwidth_sample_count.get_name_leafdata());
    if (invalid_sample_count.is_set || is_set(invalid_sample_count.yfilter)) leaf_name_data.push_back(invalid_sample_count.get_name_leafdata());
    if (skipped_application_count.is_set || is_set(skipped_application_count.yfilter)) leaf_name_data.push_back(skipped_application_count.get_name_leafdata());
    if (capped_sample_count.is_set || is_set(capped_sample_count.yfilter)) leaf_name_data.push_back(capped_sample_count.get_name_leafdata());
    if (high_latency_count.is_set || is_set(high_latency_count.yfilter)) leaf_name_data.push_back(high_latency_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::BandwidthAccountingCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::BandwidthAccountingCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void MplsTeStandby::BandwidthAccountingCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp = value;
        last_cleared_timestamp.value_namespace = name_space;
        last_cleared_timestamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-application-count")
    {
        bandwidth_application_count = value;
        bandwidth_application_count.value_namespace = name_space;
        bandwidth_application_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth-sample-count")
    {
        bandwidth_sample_count = value;
        bandwidth_sample_count.value_namespace = name_space;
        bandwidth_sample_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-sample-count")
    {
        invalid_sample_count = value;
        invalid_sample_count.value_namespace = name_space;
        invalid_sample_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "skipped-application-count")
    {
        skipped_application_count = value;
        skipped_application_count.value_namespace = name_space;
        skipped_application_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "capped-sample-count")
    {
        capped_sample_count = value;
        capped_sample_count.value_namespace = name_space;
        capped_sample_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-latency-count")
    {
        high_latency_count = value;
        high_latency_count.value_namespace = name_space;
        high_latency_count.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::BandwidthAccountingCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-cleared-timestamp")
    {
        last_cleared_timestamp.yfilter = yfilter;
    }
    if(value_path == "bandwidth-application-count")
    {
        bandwidth_application_count.yfilter = yfilter;
    }
    if(value_path == "bandwidth-sample-count")
    {
        bandwidth_sample_count.yfilter = yfilter;
    }
    if(value_path == "invalid-sample-count")
    {
        invalid_sample_count.yfilter = yfilter;
    }
    if(value_path == "skipped-application-count")
    {
        skipped_application_count.yfilter = yfilter;
    }
    if(value_path == "capped-sample-count")
    {
        capped_sample_count.yfilter = yfilter;
    }
    if(value_path == "high-latency-count")
    {
        high_latency_count.yfilter = yfilter;
    }
}

bool MplsTeStandby::BandwidthAccountingCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-cleared-timestamp" || name == "bandwidth-application-count" || name == "bandwidth-sample-count" || name == "invalid-sample-count" || name == "skipped-application-count" || name == "capped-sample-count" || name == "high-latency-count")
        return true;
    return false;
}

MplsTeStandby::Tunnels::Tunnels()
    :
    tunnel_flex_lsps(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps>())
    , tunnel_auto_bandwidths(std::make_shared<MplsTeStandby::Tunnels::TunnelAutoBandwidths>())
    , summary(std::make_shared<MplsTeStandby::Tunnels::Summary>())
    , tunnel_path_protections(std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections>())
{
    tunnel_flex_lsps->parent = this;
    tunnel_auto_bandwidths->parent = this;
    summary->parent = this;
    tunnel_path_protections->parent = this;

    yang_name = "tunnels"; yang_parent_name = "mpls-te-standby"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Tunnels::~Tunnels()
{
}

bool MplsTeStandby::Tunnels::has_data() const
{
    if (is_presence_container) return true;
    return (tunnel_flex_lsps !=  nullptr && tunnel_flex_lsps->has_data())
	|| (tunnel_auto_bandwidths !=  nullptr && tunnel_auto_bandwidths->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (tunnel_path_protections !=  nullptr && tunnel_path_protections->has_data());
}

bool MplsTeStandby::Tunnels::has_operation() const
{
    return is_set(yfilter)
	|| (tunnel_flex_lsps !=  nullptr && tunnel_flex_lsps->has_operation())
	|| (tunnel_auto_bandwidths !=  nullptr && tunnel_auto_bandwidths->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (tunnel_path_protections !=  nullptr && tunnel_path_protections->has_operation());
}

std::string MplsTeStandby::Tunnels::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Tunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-flex-lsps")
    {
        if(tunnel_flex_lsps == nullptr)
        {
            tunnel_flex_lsps = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps>();
        }
        return tunnel_flex_lsps;
    }

    if(child_yang_name == "tunnel-auto-bandwidths")
    {
        if(tunnel_auto_bandwidths == nullptr)
        {
            tunnel_auto_bandwidths = std::make_shared<MplsTeStandby::Tunnels::TunnelAutoBandwidths>();
        }
        return tunnel_auto_bandwidths;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<MplsTeStandby::Tunnels::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "tunnel-path-protections")
    {
        if(tunnel_path_protections == nullptr)
        {
            tunnel_path_protections = std::make_shared<MplsTeStandby::Tunnels::TunnelPathProtections>();
        }
        return tunnel_path_protections;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Tunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tunnel_flex_lsps != nullptr)
    {
        _children["tunnel-flex-lsps"] = tunnel_flex_lsps;
    }

    if(tunnel_auto_bandwidths != nullptr)
    {
        _children["tunnel-auto-bandwidths"] = tunnel_auto_bandwidths;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(tunnel_path_protections != nullptr)
    {
        _children["tunnel-path-protections"] = tunnel_path_protections;
    }

    return _children;
}

void MplsTeStandby::Tunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Tunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Tunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-flex-lsps" || name == "tunnel-auto-bandwidths" || name == "summary" || name == "tunnel-path-protections")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsps()
    :
    tunnel_flex_lsp(this, {})
{

    yang_name = "tunnel-flex-lsps"; yang_parent_name = "tunnels"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Tunnels::TunnelFlexLsps::~TunnelFlexLsps()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_flex_lsp.len(); index++)
    {
        if(tunnel_flex_lsp[index]->has_data())
            return true;
    }
    return false;
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::has_operation() const
{
    for (std::size_t index=0; index<tunnel_flex_lsp.len(); index++)
    {
        if(tunnel_flex_lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-flex-lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-flex-lsp")
    {
        auto ent_ = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp>();
        ent_->parent = this;
        tunnel_flex_lsp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tunnel_flex_lsp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-flex-lsp")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::TunnelFlexLsp()
    :
    ctype{YType::enumeration, "ctype"},
    tunnel_id{YType::uint32, "tunnel-id"},
    tunnel_name{YType::str, "tunnel-name"},
    is_tunnel_up{YType::boolean, "is-tunnel-up"},
    tun_id{YType::uint16, "tun-id"},
    source_address{YType::str, "source-address"},
    destination_address{YType::str, "destination-address"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"}
        ,
    working_lsp(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp>())
    , protect_lsp(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp>())
{
    working_lsp->parent = this;
    protect_lsp->parent = this;

    yang_name = "tunnel-flex-lsp"; yang_parent_name = "tunnel-flex-lsps"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::~TunnelFlexLsp()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::has_data() const
{
    if (is_presence_container) return true;
    return ctype.is_set
	|| tunnel_id.is_set
	|| tunnel_name.is_set
	|| is_tunnel_up.is_set
	|| tun_id.is_set
	|| source_address.is_set
	|| destination_address.is_set
	|| extended_tunnel_id.is_set
	|| (working_lsp !=  nullptr && working_lsp->has_data())
	|| (protect_lsp !=  nullptr && protect_lsp->has_data());
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ctype.yfilter)
	|| ydk::is_set(tunnel_id.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(is_tunnel_up.yfilter)
	|| ydk::is_set(tun_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(extended_tunnel_id.yfilter)
	|| (working_lsp !=  nullptr && working_lsp->has_operation())
	|| (protect_lsp !=  nullptr && protect_lsp->has_operation());
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-flex-lsp";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.yfilter)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.yfilter)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (is_tunnel_up.is_set || is_set(is_tunnel_up.yfilter)) leaf_name_data.push_back(is_tunnel_up.get_name_leafdata());
    if (tun_id.is_set || is_set(tun_id.yfilter)) leaf_name_data.push_back(tun_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.yfilter)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "working-lsp")
    {
        if(working_lsp == nullptr)
        {
            working_lsp = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp>();
        }
        return working_lsp;
    }

    if(child_yang_name == "protect-lsp")
    {
        if(protect_lsp == nullptr)
        {
            protect_lsp = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::ProtectLsp>();
        }
        return protect_lsp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(working_lsp != nullptr)
    {
        _children["working-lsp"] = working_lsp;
    }

    if(protect_lsp != nullptr)
    {
        _children["protect-lsp"] = protect_lsp;
    }

    return _children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ctype")
    {
        ctype = value;
        ctype.value_namespace = name_space;
        ctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
        tunnel_id.value_namespace = name_space;
        tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-up")
    {
        is_tunnel_up = value;
        is_tunnel_up.value_namespace = name_space;
        is_tunnel_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tun-id")
    {
        tun_id = value;
        tun_id.value_namespace = name_space;
        tun_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
        extended_tunnel_id.value_namespace = name_space;
        extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ctype")
    {
        ctype.yfilter = yfilter;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-up")
    {
        is_tunnel_up.yfilter = yfilter;
    }
    if(value_path == "tun-id")
    {
        tun_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "working-lsp" || name == "protect-lsp" || name == "ctype" || name == "tunnel-id" || name == "tunnel-name" || name == "is-tunnel-up" || name == "tun-id" || name == "source-address" || name == "destination-address" || name == "extended-tunnel-id")
        return true;
    return false;
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::WorkingLsp()
    :
    is_operational{YType::boolean, "is-operational"},
    lsp_uptime{YType::uint32, "lsp-uptime"},
    path_protection_lsp_id{YType::uint32, "path-protection-lsp-id"},
    lsp_mode{YType::enumeration, "lsp-mode"},
    lsp_local_label{YType::uint32, "lsp-local-label"},
    lsp_output_interface{YType::str, "lsp-output-interface"},
    lsp_output_label{YType::uint32, "lsp-output-label"},
    lsp_state{YType::enumeration, "lsp-state"}
        ,
    flex_info(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo>())
    , association(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association>())
    , protection(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection>())
    , reverse_lsp(std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp>())
    , lsp_hop(this, {})
{
    flex_info->parent = this;
    association->parent = this;
    protection->parent = this;
    reverse_lsp->parent = this;

    yang_name = "working-lsp"; yang_parent_name = "tunnel-flex-lsp"; is_top_level_class = false; has_list_ancestor = false; 
}

MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::~WorkingLsp()
{
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsp_hop.len(); index++)
    {
        if(lsp_hop[index]->has_data())
            return true;
    }
    return is_operational.is_set
	|| lsp_uptime.is_set
	|| path_protection_lsp_id.is_set
	|| lsp_mode.is_set
	|| lsp_local_label.is_set
	|| lsp_output_interface.is_set
	|| lsp_output_label.is_set
	|| lsp_state.is_set
	|| (flex_info !=  nullptr && flex_info->has_data())
	|| (association !=  nullptr && association->has_data())
	|| (protection !=  nullptr && protection->has_data())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_data());
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::has_operation() const
{
    for (std::size_t index=0; index<lsp_hop.len(); index++)
    {
        if(lsp_hop[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_operational.yfilter)
	|| ydk::is_set(lsp_uptime.yfilter)
	|| ydk::is_set(path_protection_lsp_id.yfilter)
	|| ydk::is_set(lsp_mode.yfilter)
	|| ydk::is_set(lsp_local_label.yfilter)
	|| ydk::is_set(lsp_output_interface.yfilter)
	|| ydk::is_set(lsp_output_label.yfilter)
	|| ydk::is_set(lsp_state.yfilter)
	|| (flex_info !=  nullptr && flex_info->has_operation())
	|| (association !=  nullptr && association->has_operation())
	|| (protection !=  nullptr && protection->has_operation())
	|| (reverse_lsp !=  nullptr && reverse_lsp->has_operation());
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-te-standby/tunnels/tunnel-flex-lsps/tunnel-flex-lsp/" << get_segment_path();
    return path_buffer.str();
}

std::string MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "working-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_operational.is_set || is_set(is_operational.yfilter)) leaf_name_data.push_back(is_operational.get_name_leafdata());
    if (lsp_uptime.is_set || is_set(lsp_uptime.yfilter)) leaf_name_data.push_back(lsp_uptime.get_name_leafdata());
    if (path_protection_lsp_id.is_set || is_set(path_protection_lsp_id.yfilter)) leaf_name_data.push_back(path_protection_lsp_id.get_name_leafdata());
    if (lsp_mode.is_set || is_set(lsp_mode.yfilter)) leaf_name_data.push_back(lsp_mode.get_name_leafdata());
    if (lsp_local_label.is_set || is_set(lsp_local_label.yfilter)) leaf_name_data.push_back(lsp_local_label.get_name_leafdata());
    if (lsp_output_interface.is_set || is_set(lsp_output_interface.yfilter)) leaf_name_data.push_back(lsp_output_interface.get_name_leafdata());
    if (lsp_output_label.is_set || is_set(lsp_output_label.yfilter)) leaf_name_data.push_back(lsp_output_label.get_name_leafdata());
    if (lsp_state.is_set || is_set(lsp_state.yfilter)) leaf_name_data.push_back(lsp_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flex-info")
    {
        if(flex_info == nullptr)
        {
            flex_info = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::FlexInfo>();
        }
        return flex_info;
    }

    if(child_yang_name == "association")
    {
        if(association == nullptr)
        {
            association = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Association>();
        }
        return association;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::Protection>();
        }
        return protection;
    }

    if(child_yang_name == "reverse-lsp")
    {
        if(reverse_lsp == nullptr)
        {
            reverse_lsp = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::ReverseLsp>();
        }
        return reverse_lsp;
    }

    if(child_yang_name == "lsp-hop")
    {
        auto ent_ = std::make_shared<MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::LspHop>();
        ent_->parent = this;
        lsp_hop.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(flex_info != nullptr)
    {
        _children["flex-info"] = flex_info;
    }

    if(association != nullptr)
    {
        _children["association"] = association;
    }

    if(protection != nullptr)
    {
        _children["protection"] = protection;
    }

    if(reverse_lsp != nullptr)
    {
        _children["reverse-lsp"] = reverse_lsp;
    }

    count_ = 0;
    for (auto ent_ : lsp_hop.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-operational")
    {
        is_operational = value;
        is_operational.value_namespace = name_space;
        is_operational.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-uptime")
    {
        lsp_uptime = value;
        lsp_uptime.value_namespace = name_space;
        lsp_uptime.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-protection-lsp-id")
    {
        path_protection_lsp_id = value;
        path_protection_lsp_id.value_namespace = name_space;
        path_protection_lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode = value;
        lsp_mode.value_namespace = name_space;
        lsp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-local-label")
    {
        lsp_local_label = value;
        lsp_local_label.value_namespace = name_space;
        lsp_local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-output-interface")
    {
        lsp_output_interface = value;
        lsp_output_interface.value_namespace = name_space;
        lsp_output_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-output-label")
    {
        lsp_output_label = value;
        lsp_output_label.value_namespace = name_space;
        lsp_output_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-state")
    {
        lsp_state = value;
        lsp_state.value_namespace = name_space;
        lsp_state.value_namespace_prefix = name_space_prefix;
    }
}

void MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-operational")
    {
        is_operational.yfilter = yfilter;
    }
    if(value_path == "lsp-uptime")
    {
        lsp_uptime.yfilter = yfilter;
    }
    if(value_path == "path-protection-lsp-id")
    {
        path_protection_lsp_id.yfilter = yfilter;
    }
    if(value_path == "lsp-mode")
    {
        lsp_mode.yfilter = yfilter;
    }
    if(value_path == "lsp-local-label")
    {
        lsp_local_label.yfilter = yfilter;
    }
    if(value_path == "lsp-output-interface")
    {
        lsp_output_interface.yfilter = yfilter;
    }
    if(value_path == "lsp-output-label")
    {
        lsp_output_label.yfilter = yfilter;
    }
    if(value_path == "lsp-state")
    {
        lsp_state.yfilter = yfilter;
    }
}

bool MplsTeStandby::Tunnels::TunnelFlexLsps::TunnelFlexLsp::WorkingLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flex-info" || name == "association" || name == "protection" || name == "reverse-lsp" || name == "lsp-hop" || name == "is-operational" || name == "lsp-uptime" || name == "path-protection-lsp-id" || name == "lsp-mode" || name == "lsp-local-label" || name == "lsp-output-interface" || name == "lsp-output-label" || name == "lsp-state")
        return true;
    return false;
}


}
}

